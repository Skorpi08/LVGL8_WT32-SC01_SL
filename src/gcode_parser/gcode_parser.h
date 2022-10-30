

extern uint8_t sd_list_page;
extern uint8_t sd_fileCount;
extern const char* sd_file_selected;

void gcode_parser_init();
void gcode_parser_handler();
void recvWithStartEndMarkers();
void parseStatus();
void parseCmd();
void ParseFS();
void ParseOv_A();  
void Parse_MPos();
void sortList();
void printList();
void resetList();
void addElement(const char* name);
void set_sd_textarea();



