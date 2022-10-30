// From Robin2
// Example 5 - Receive with start- and end-markers combined with parsing

//====================================================================
// Parse code for GRBL CNC
// 13/11/2018
// Ver 0.2
//====================================================================
/*
    $ESP220=/home.gcode
    <Idle|MPos:0.000,0.000,0.000|FS:0,0|Pn:Z|SD:0.00,/sd/home.gcode>
    [MSG:/sd/home.gcode file job succeeded]

[MSG:INFO: HTTP started on port 80]
[MSG:INFO: Telnet started on port 23]

Grbl 3.0 [FluidNC v3.0.x (noGit) (wifi) '$' for help]
State 0 (Idle)
ok
[FILE:/System Volume Information/WPSettings.dat|SIZE:12]
[FILE:/System Volume Information/IndexerVolumeGuid|SIZE:76]
[FILE:/home.gcode|SIZE:11]
[FILE:/lasertest.gcode|SIZE:32]
*/
#include "ui/ui.h"
#include "gcode_parser.h"
#include <LovyanGFX.hpp>
#include "main.h"

const byte numChars=128;
char receivedChars[numChars];
char tempChars[numChars];        // temporary array for use when parsing
unsigned long previousMillis = 0;
const long interval = 2000;

bool newData = false;
bool newData1 = false;

//XYZ variables
double X, Y, Z;

//Feed and Speed variables
char FSMsgGRBL[12];
int FS_FeedMsg, FS_SpeedMsg;

//Overide variables
bool OvMsg = false; //Ov message being transmitted
int CmdCoolant, CmdSpindleCW;

// Variables to hold Message blocks
char CmdMsg [numChars] = {0};
char SD_Filename  [numChars] = {0};
char SD_Filesize  [numChars] = {0};
char State  [numChars] = {0};
char MPos   [numChars] = {0};
char Bf     [numChars] = {0};
char FS     [numChars] = {0};
char Ov     [numChars] = {0};
char GRBL_msg6 [numChars] = {0};

//SD Card variable
uint8_t sd_list_page=0, sd_fileCount;
const char* sd_file_selected;

struct ListElement
{
  char name[128];
  ListElement* next;
};

const int LIST_SIZE = 32;

ListElement myFiles[LIST_SIZE];
ListElement* first;       //Zeiger auf Anfang der Liste
byte fileCount;           //Anzahl der eingefügten Datei-Namen

//Prototyp explizit, weil dass die IDE nicht selbst schafft (sie schreibt den Prototyp über die struct Deklaration wo dann das struct unbekannt ist)
void sortedInsert(ListElement* element);

//============

void gcode_parser_init() {
    Serial.begin(115200);
    Serial.println();
    Serial.println("?");
    #ifdef DEBUG_GRBL
    client.println("<Idle|MPos:13.000,56.000,98.000|Bf:15,128|FS:0,1000|Ov:100,100,100|A:SF>");
    client.println();
    #endif
    resetList();
}

//============

void gcode_parser_handler() {
    recvWithStartEndMarkers();
    if (newData == true || newData1 == true) {
        strcpy(tempChars, receivedChars);
        newData = false;
        newData1 = false;
    }
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;
      client.print("?");
      }
}

//============

void recvWithStartEndMarkers() {
    static bool recvStatus = false;
    static bool recvCmd = false;
    static byte ndx = 0;
    char startStatus = '<';
    char endStatus = '>';
    char startCmd = '[';
    char endCmd = ']';
    char rc;
//--------------------------------------------------------
    while (client.available() > 0 && (newData1 == false || newData == false)) {
        rc = client.read();
        
        if (recvStatus == true) {
            if (rc != endStatus) {
                receivedChars[ndx] = rc;
                ndx++;
                if (ndx >= numChars) {
                    ndx = numChars - 1;
                }
            } else {
                receivedChars[ndx] = '\0';
                recvStatus = false;
                ndx = 0;
                newData1 = true;
                strcpy(tempChars, receivedChars);
                parseStatus();
            }
        }
         else if (rc == startStatus) {
            recvStatus = true;
        }
        
//--------------------------------------------------------
                if (recvCmd == true) {
            if (rc != endCmd) {
                receivedChars[ndx] = rc;
                ndx++;
                if (ndx >= numChars) {
                    ndx = numChars - 1;
                }
            } else {
                receivedChars[ndx] = '\0'; 
                recvCmd = false;
                ndx = 0;
                newData = true;
                strcpy(tempChars, receivedChars);
                parseCmd();
            }
        } else if (rc == startCmd) {
            recvCmd = true;
        }
//--------------------------------------------------------
    }
}

//============

void parseStatus() {      // split the data into its parts
        // machine state
            char * strtokIndx = strtok(tempChars,"|"); // Find first part of string (Machine State Idle, Run, Alarm) 
            strcpy(State, strtokIndx);      // write characters from string to machine state variable
            
        // machine position   
            strtokIndx = strtok(NULL,"|"); // look for next data block in string  
            strcpy(MPos, strtokIndx); // write characters from string to machine position variable 
             
        // BF god knows - alarms ?
            strtokIndx = strtok(NULL,"|"); // look for next data block in string      
            strcpy(Bf, strtokIndx); // write characters from string to BF variable  
            
        // feed and spindle speed
            strtokIndx = strtok(NULL,"|"); // look for next data block in string     
            strcpy(FS, strtokIndx); // write characters from string to Feed&Speed variable 
             
        //Ov Overides 1% to 200%
            strtokIndx = strtok(NULL,"|"); // look for next data block in string  
            strcpy(Ov, strtokIndx); // write characters from string to Overide variable 
             
        //machine command status
            strtokIndx = strtok(NULL,"|"); // look for next data block in string  
            strcpy(GRBL_msg6, strtokIndx); // write characters from string to machine command status variable 
            

        Parse_MPos();
        //ParseFS ();
        //ParseOv_A ();
   
}

 
//============

void parseCmd() {      // split the data into its parts  
        // machine state
            char * strtokIndx = strtok(tempChars,":"); // Find first part of string (Machine State Idle, Run, Alarm) 
            strcpy(CmdMsg, strtokIndx);      // write characters from string to machine state variable
            
        // SD Filename 
            strtokIndx = strtok(NULL,"|"); // look for next data block in string  
            strcpy(SD_Filename, strtokIndx); // write characters from string to machine position variable 
             
       
            strtokIndx = strtok(NULL,":"); // look for next data block in string
             // SD Filesize
            strtokIndx = strtok(NULL,""); // look for next data block in string    
            strcpy(SD_Filesize, strtokIndx); // write characters from string to BF variable  

 if(!strcmp(CmdMsg, "SD Free")){
  printList();
  client.print("fileCount: "); client.println(fileCount);
  set_sd_textarea();
  sd_fileCount = fileCount;
  fileCount = 0;
 }
            if(!strcmp(CmdMsg, "FILE")){
              addElement(SD_Filename);
              // sortList();
              // client.println("sortiert:");
              // printList();
            }
}

void set_sd_textarea(){
  lv_textarea_set_text(ui_sdfile1, myFiles[sd_list_page].name);
  lv_textarea_set_text(ui_sdfile2, myFiles[sd_list_page+1].name);
  lv_textarea_set_text(ui_sdfile3, myFiles[sd_list_page+2].name);
  lv_textarea_set_text(ui_sdfile4, myFiles[sd_list_page+3].name);
  lv_textarea_set_text(ui_sdfile5, myFiles[sd_list_page+4].name);
  lv_textarea_set_text(ui_sdfile6, myFiles[sd_list_page+5].name);
}

//Element hinten einfügen
void addElement(const char* name)
{
  if (fileCount < LIST_SIZE)
  {
    strlcpy(myFiles[fileCount].name, name, sizeof(ListElement::name));    //Inhalt kopieren
    myFiles[fileCount].next = NULL;
   
    //vorherigen next Zeiger auf aktuelles Element setzen
    if (fileCount > 0) myFiles[fileCount - 1].next = &myFiles[fileCount];

    fileCount++;

  }
}

//Liste zurücksetzen
void resetList()
{
  first = myFiles;
  first->name[0] = '\0';
  first->next = NULL;
  fileCount = 0;
  //sd_list_page = 6;
}

void printList()
{
  ListElement* current = first;

  //Liste traversieren und ausdrucken
  while (current != NULL)
  {
    client.println(current->name);
    current = current->next;
   // client.println(fileCount);
  }
  //client.println(myFiles[1-1].name);
  client.println();
}

//von hier leicht angepasst: http://quiz.geeksforgeeks.org/insertion-sort-for-singly-linked-list/
void sortList()
{
  ListElement* current = first;
  first = NULL;

  //Liste traversieren
  while (current != NULL)
  {
    ListElement* next = current->next;
    sortedInsert(current);
    current = next;
  }
}

void sortedInsert(ListElement* element)
{
  ListElement* current;

  //Fallunterscheidung für erstes Element
  if (first == NULL || strcmp(first->name, element->name) >= 0)
  {
    //neuen Listenanfang setzen
    element->next = first;
    first = element;
  }
  else
  {
    current = first;

    //richtigen Platz für jedes Element finden. Hört auf wenn der Nachfolger(!) eines Elements "größer" als das aktuelle ist
    while (current->next != NULL && strcmp(current->next->name, element->name) < 0)
      current = current->next;

    //neues Element zwischen aktuelles Element und Nachfolger des aktuellen Elements einfügen
    element->next = current->next;
    current->next = element;
  }
}

//Machine State Idle Message GRBL ////////////////////////////////////////////////////////////
void Parse_MPos()
{
//FS array containing Feed & Speed message characters
  
    char * partOfString; // this is used by strtok_r() as an index
   
    partOfString = strtok (MPos,":"); // get the first part - the string

    partOfString = strtok (NULL, ","); // this continues where the previous call left off
    X = atof(partOfString);     // convert this part to an integer
    
    partOfString = strtok (NULL, ","); // this continues where the previous call left off
    Y = atof(partOfString);   // convert this part to a float// actually an int

    partOfString = strtok (NULL, ","); // this continues where the previous call left off
    Z = atof(partOfString);   // convert this part to a float// actually an int

        char Xstr[10];
        dtostrf(X, 6, 3, Xstr);
        char Ystr[10];
        dtostrf(Y, 6, 3, Ystr);
        char Zstr[10];
        dtostrf(Z, 6, 3, Zstr);

        lv_label_set_text(ui_State, State);
        if(strcmp(State, "Alarm")){
        lv_obj_set_style_bg_color(ui_StateColor, lv_color_hex(0x00FF2B), LV_PART_MAIN | LV_STATE_DEFAULT);
        } else {
        lv_obj_set_style_bg_color(ui_StateColor, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT); 
        }
        lv_textarea_set_text(ui_TextAreaX, Xstr);
        lv_textarea_set_text(ui_TextAreaY, Ystr);
        lv_textarea_set_text(ui_TextAreaZ, Zstr);
        lv_label_set_text(ui_LabelX, Xstr);
        lv_label_set_text(ui_LabelY, Ystr);
        lv_label_set_text(ui_LabelZ, Zstr);
      //  lv_label_set_text(ui_Label2,  A);
      
#ifdef DEBUG_GRBL
        client.print("X=");
        client.print(Xstr);
        client.print(" Y= ");
        client.print(Ystr);
        client.print(" Z= ");
        client.println(Zstr);

        client.print("X=");
        client.print(X);
        client.print(" Y= ");
        client.print(Y);
        client.print(" Z= ");
        client.println(Z); 
#endif

}

//Feeds and speeds  FS Message GRBL ////////////////////////////////////////////////////////////
void ParseFS ()
{
//FS array containing Feed & Speed message characters
   
    char * partOfString; // this is used by strtok_r() as an index
    
    partOfString = strtok (FS,":"); // get the first part - the string
    strcpy(FSMsgGRBL, partOfString);     // copy it to inputCsvString
    
    partOfString = strtok (NULL, ","); // this continues where the previous call left off
    FS_FeedMsg = atoi(partOfString);     // convert this part to an integer
    
    partOfString = strtok (NULL, ","); // this continues where the previous call left off
    FS_SpeedMsg = atoi(partOfString);   // convert this part to a float// actually an int
 
}

// Parse Overide Ov Message GRBL ////////////////////////////////////////////////////////////
void ParseOv_A ()
{
  //Ov array containing Overide message characters  
   
      if (Ov[0] == 'O')// Ov statement when true check machine command instructions
      
      {
              if (GRBL_msg6[0] == 'A')
               {
                
              client.print("Got A ");
              client.println(GRBL_msg6);
              
                      
              if (GRBL_msg6[2] == 'S')
                    {
                    CmdSpindleCW =1;
                 
                    }
              if(GRBL_msg6[2] == 'C')
                    {
                    CmdSpindleCW = 0;
                            
                    }
                    
         
                if (GRBL_msg6[2] == 'F'|(GRBL_msg6[3] == 'F'))
                    {
                    CmdCoolant = 1;           
                    }                                                    
                else
                   {
                   (CmdCoolant = 0);      
                                          
                   }
                                                         
              }//End - seeking "A" in GRBL_msg6
              
              if(strlen(GRBL_msg6) == 0) // makes sure spindle direction and coolant conditions are off woth no signal present
              {
              CmdSpindleCW = 0;  
              CmdCoolant = 0;  
              }                                
      }
      
}