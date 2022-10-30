// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.2
// LVGL VERSION: 8.2
// PROJECT: FluidNC_Laser

#ifndef _FLUIDNC_LASER_UI_H
#define _FLUIDNC_LASER_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
extern lv_obj_t * ui_HomescreenQ;
extern lv_obj_t * ui_Label17;
extern lv_obj_t * ui_HomeX;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_HomeY;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_HomeZ;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_HomeA;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui_StateColor;
extern lv_obj_t * ui_State;
extern lv_obj_t * ui_TextAreaX;
extern lv_obj_t * ui_TextAreaZ;
extern lv_obj_t * ui_TextAreaY;
extern lv_obj_t * ui_TextAreaA;
extern lv_obj_t * ui_Restart;
extern lv_obj_t * ui_Label10;
extern lv_obj_t * ui_Home;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Settings;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_TestFire;
extern lv_obj_t * ui_LabelTestFire;
extern lv_obj_t * ui_Menu;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_MenuQ;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_Button6;
extern lv_obj_t * ui_Label12;
extern lv_obj_t * ui_Button6_copy;
extern lv_obj_t * ui_Label13;
extern lv_obj_t * ui_Button6_copy_copy;
extern lv_obj_t * ui_Label14;
extern lv_obj_t * ui_Button6_copy_copy_copy;
extern lv_obj_t * ui_Label15;
extern lv_obj_t * ui_Button6_copy_copy1;
extern lv_obj_t * ui_Label16;
extern lv_obj_t * ui_back;
extern lv_obj_t * ui_MoveAxisQ;
extern lv_obj_t * ui_back1;
extern lv_obj_t * ui_Label18;
extern lv_obj_t * ui_Xplus;
extern lv_obj_t * ui_Label23;
extern lv_obj_t * ui_Yplus;
extern lv_obj_t * ui_Label24;
extern lv_obj_t * ui_Zplus;
extern lv_obj_t * ui_Label25;
extern lv_obj_t * ui_Zminus;
extern lv_obj_t * ui_Label26;
extern lv_obj_t * ui_Yminus;
extern lv_obj_t * ui_Label27;
extern lv_obj_t * ui_Xminus;
extern lv_obj_t * ui_Label28;
extern lv_obj_t * ui_Jog_Mode;
extern lv_obj_t * ui_Label29;
extern lv_obj_t * ui_mm50;
extern lv_obj_t * ui_Label30;
extern lv_obj_t * ui_Home2;
extern lv_obj_t * ui_Label32;
extern lv_obj_t * ui_MotorOff;
extern lv_obj_t * ui_Label33;
extern lv_obj_t * ui_mm5;
extern lv_obj_t * ui_Label34;
extern lv_obj_t * ui_mm1;
extern lv_obj_t * ui_Label35;
extern lv_obj_t * ui_F10000;
extern lv_obj_t * ui_Label31;
extern lv_obj_t * ui_F1000;
extern lv_obj_t * ui_Label36;
extern lv_obj_t * ui_F500;
extern lv_obj_t * ui_Label37;
extern lv_obj_t * ui_LabelX;
extern lv_obj_t * ui_LabelZ;
extern lv_obj_t * ui_LabelY;
extern lv_obj_t * ui_LabelX_copy;
extern lv_obj_t * ui_LabelY_copy;
extern lv_obj_t * ui_LabelZ_copy;
extern lv_obj_t * ui_SettingsQ;
extern lv_obj_t * ui_TextAreaZ_copy;
extern lv_obj_t * ui_Label19;
extern lv_obj_t * ui_back2;
extern lv_obj_t * ui_AxisSettings;
extern lv_obj_t * ui_Label21;
extern lv_obj_t * ui_Label39;
extern lv_obj_t * ui_SDCardQ;
extern lv_obj_t * ui_Label20;
extern lv_obj_t * ui_back3;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_UP;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_DOWN;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_RUN;
extern lv_obj_t * ui_Label22;
extern lv_obj_t * ui_sdfile1;
extern lv_obj_t * ui_sdfile2;
extern lv_obj_t * ui_sdfile3;
extern lv_obj_t * ui_sdfile4;
extern lv_obj_t * ui_sdfile5;
extern lv_obj_t * ui_sdfile6;
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Label38;
extern lv_obj_t * ui_AxisSettingsQ;
extern lv_obj_t * ui_steps;
extern lv_obj_t * ui_Label401;
extern lv_obj_t * ui_back4;
extern lv_obj_t * ui_AxisSettings1;
extern lv_obj_t * ui_Label40;
extern lv_obj_t * ui_Stepss;
extern lv_obj_t * ui_feed;
extern lv_obj_t * ui_accel;
extern lv_obj_t * ui_travel;
extern lv_obj_t * ui_Feedd;
extern lv_obj_t * ui_Accelll;
extern lv_obj_t * ui_Travell;
extern lv_obj_t * ui_mpos;
extern lv_obj_t * ui_MPoss;
extern lv_obj_t * ui_feed;
extern lv_obj_t * ui_seek;
extern lv_obj_t * ui_pulloff;
extern lv_obj_t * ui_Feeddd;
extern lv_obj_t * ui_Seekk;
extern lv_obj_t * ui_Pullofff;


void homeX(lv_event_t * e);
void homeY(lv_event_t * e);
void homeZ(lv_event_t * e);
void homeA(lv_event_t * e);
void state_func(lv_event_t * e);
void restart(lv_event_t * e);
void get_state(lv_event_t * e);
void fire_button(lv_event_t * e);
void air_assist_OnOff(lv_event_t * e);
void red_dot_OnOff(lv_event_t * e);
void fan_OnOff(lv_event_t * e);
void moveX(lv_event_t * e);
void moveY(lv_event_t * e);
void moveZ(lv_event_t * e);
void moveZ_(lv_event_t * e);
void moveY_(lv_event_t * e);
void moveX_(lv_event_t * e);
void home(lv_event_t * e);
void motor_off(lv_event_t * e);
void sd_list_up(lv_event_t * e);
void sd_list_down(lv_event_t * e);
void sd_file_run(lv_event_t * e);
void select_sdfile1(lv_event_t * e);
void select_sdfile2(lv_event_t * e);
void select_sdfile3(lv_event_t * e);
void select_sdfile4(lv_event_t * e);
void select_sdfile5(lv_event_t * e);
void select_sdfile6(lv_event_t * e);
void sd_refresh(lv_event_t * e);

LV_IMG_DECLARE(ui_img_home_40x42_png);    // assets\home_40x42.png
LV_IMG_DECLARE(ui_img_back_62x50_png);    // assets\back_62x50.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
