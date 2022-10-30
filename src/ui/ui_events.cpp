// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.1
// LVGL VERSION: 8.2
// PROJECT: FluidNC_Laser

#include <LovyanGFX.hpp>
#include "ui.h"
#include "gcode_parser/gcode_parser.h"
#include "main.h" 
// Jog $J=G21 G91 X10 Y0 F6000
void homeX(lv_event_t * e)
{
	client.print("$HX");
}

void homeY(lv_event_t * e)
{
	client.println("$HY");
}

void homeZ(lv_event_t * e)
{
	client.println("$HZ");
}

void homeA(lv_event_t * e)
{
	client.println("$HA");
}

void state_func(lv_event_t * e)
{
	client.println("$X");
}

void restart(lv_event_t * e)
{
	client.println("$bye");
}

void get_state(lv_event_t * e)
{
	client.println("$SD/List");
}

void fire_button(lv_event_t * e)
{
	client.println("M3 G1 F100 S1000");
	client.println("G4 P0.1 S0 G0 M5");
}

void air_assist_OnOff(lv_event_t * e)
{
	// Your code here
}

void red_dot_OnOff(lv_event_t * e)
{
	// Your code here
}

void fan_OnOff(lv_event_t * e)
{
	// Your code here
}

void moveX(lv_event_t * e)
{
	client.println("G91 G21 F1000 X50");
}

void moveY(lv_event_t * e)
{
	client.println("G91 G21 F1000 Y50");
}

void moveZ(lv_event_t * e)
{
	// Your code here
}

void moveZ_(lv_event_t * e)
{
	// Your code here
}

void moveY_(lv_event_t * e)
{
	client.println("G91 G21 F1000 Y-50");
}

void moveX_(lv_event_t * e)
{
	client.println("G91 G21 F1000 X-50");
}

void home(lv_event_t * e)
{
	client.println("$H");
}

void motor_off(lv_event_t * e)
{
	// Your code here 
}
void sd_list_up(lv_event_t * e)
{
	if(sd_list_page>0){
	sd_list_page -= 6;
	set_sd_textarea();
	}

}

void sd_list_down(lv_event_t * e)
{
	if(sd_list_page+6<sd_fileCount){
	sd_list_page += 6;
	set_sd_textarea();
	}
}

void sd_file_run(lv_event_t * e)
{
	//char buffer[128];
	//sprintf(buffer, "$SD/Run=", sd_file_selected);
	//client.println(buffer);

	char string3[200];
    snprintf(string3,sizeof(string3),"%s%s","$SD/Run=",sd_file_selected);
	client.println(string3);
}

void select_sdfile1(lv_event_t * e)
{
	sd_file_selected = lv_textarea_get_text(ui_sdfile1);
}

void select_sdfile2(lv_event_t * e)
{
	sd_file_selected = lv_textarea_get_text(ui_sdfile2);
	client.println(sd_file_selected);
}

void select_sdfile3(lv_event_t * e)
{
	sd_file_selected = lv_textarea_get_text(ui_sdfile3);
}

void select_sdfile4(lv_event_t * e)
{
	sd_file_selected = lv_textarea_get_text(ui_sdfile4);
}

void select_sdfile5(lv_event_t * e)
{
	sd_file_selected = lv_textarea_get_text(ui_sdfile5);
}

void select_sdfile6(lv_event_t * e)
{
	sd_file_selected = lv_textarea_get_text(ui_sdfile6);
}

void sd_refresh(lv_event_t * e)
{
	resetList();
	client.println("$SD/List");
	
}
