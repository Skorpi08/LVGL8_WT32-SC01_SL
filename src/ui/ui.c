// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.2
// LVGL VERSION: 8.2
// PROJECT: FluidNC_Laser

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_HomescreenQ;
lv_obj_t * ui_Label17;
lv_obj_t * ui_HomeX;
lv_obj_t * ui_Label5;
lv_obj_t * ui_HomeY;
lv_obj_t * ui_Label6;
lv_obj_t * ui_HomeZ;
lv_obj_t * ui_Label7;
lv_obj_t * ui_HomeA;
lv_obj_t * ui_Label8;
lv_obj_t * ui_StateColor;
lv_obj_t * ui_State;
lv_obj_t * ui_TextAreaX;
lv_obj_t * ui_TextAreaZ;
lv_obj_t * ui_TextAreaY;
lv_obj_t * ui_TextAreaA;
lv_obj_t * ui_Restart;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Home;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Settings;
lv_obj_t * ui_Label3;
lv_obj_t * ui_TestFire;
lv_obj_t * ui_LabelTestFire;
lv_obj_t * ui_Menu;
lv_obj_t * ui_Label1;
lv_obj_t * ui_MenuQ;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Button6;
lv_obj_t * ui_Label12;
lv_obj_t * ui_Button6_copy;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Button6_copy_copy;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Button6_copy_copy_copy;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Button6_copy_copy1;
lv_obj_t * ui_Label16;
lv_obj_t * ui_back;
lv_obj_t * ui_MoveAxisQ;
lv_obj_t * ui_back1;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Xplus;
lv_obj_t * ui_Label23;
lv_obj_t * ui_Yplus;
lv_obj_t * ui_Label24;
lv_obj_t * ui_Zplus;
lv_obj_t * ui_Label25;
lv_obj_t * ui_Zminus;
lv_obj_t * ui_Label26;
lv_obj_t * ui_Yminus;
lv_obj_t * ui_Label27;
lv_obj_t * ui_Xminus;
lv_obj_t * ui_Label28;
lv_obj_t * ui_Jog_Mode;
lv_obj_t * ui_Label29;
lv_obj_t * ui_mm50;
lv_obj_t * ui_Label30;
lv_obj_t * ui_Home2;
lv_obj_t * ui_Label32;
lv_obj_t * ui_MotorOff;
lv_obj_t * ui_Label33;
lv_obj_t * ui_mm5;
lv_obj_t * ui_Label34;
lv_obj_t * ui_mm1;
lv_obj_t * ui_Label35;
lv_obj_t * ui_F10000;
lv_obj_t * ui_Label31;
lv_obj_t * ui_F1000;
lv_obj_t * ui_Label36;
lv_obj_t * ui_F500;
lv_obj_t * ui_Label37;
lv_obj_t * ui_LabelX;
lv_obj_t * ui_LabelZ;
lv_obj_t * ui_LabelY;
lv_obj_t * ui_LabelX_copy;
lv_obj_t * ui_LabelY_copy;
lv_obj_t * ui_LabelZ_copy;
lv_obj_t * ui_SettingsQ;
lv_obj_t * ui_TextAreaZ_copy;
lv_obj_t * ui_Label19;
lv_obj_t * ui_back2;
lv_obj_t * ui_AxisSettings;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Label39;
lv_obj_t * ui_SDCardQ;
lv_obj_t * ui_Label20;
lv_obj_t * ui_back3;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_UP;
lv_obj_t * ui_Label4;
lv_obj_t * ui_DOWN;
lv_obj_t * ui_Label9;
lv_obj_t * ui_RUN;
lv_obj_t * ui_Label22;
lv_obj_t * ui_sdfile1;
lv_obj_t * ui_sdfile2;
lv_obj_t * ui_sdfile3;
lv_obj_t * ui_sdfile4;
lv_obj_t * ui_sdfile5;
lv_obj_t * ui_sdfile6;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label38;
lv_obj_t * ui_AxisSettingsQ;
lv_obj_t * ui_steps;
lv_obj_t * ui_Label401;
lv_obj_t * ui_back4;
lv_obj_t * ui_AxisSettings1;
lv_obj_t * ui_Label40;
lv_obj_t * ui_Stepss;
lv_obj_t * ui_feed;
lv_obj_t * ui_accel;
lv_obj_t * ui_travel;
lv_obj_t * ui_Feedd;
lv_obj_t * ui_Accelll;
lv_obj_t * ui_Travell;
lv_obj_t * ui_mpos;
lv_obj_t * ui_MPoss;
lv_obj_t * ui_feed;
lv_obj_t * ui_seek;
lv_obj_t * ui_pulloff;
lv_obj_t * ui_Feeddd;
lv_obj_t * ui_Seekk;
lv_obj_t * ui_Pullofff;

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_HomeX(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        homeX(e);
    }
}
static void ui_event_HomeY(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        homeY(e);
    }
}
static void ui_event_HomeZ(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        homeZ(e);
    }
}
static void ui_event_HomeA(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        homeA(e);
    }
}
static void ui_event_StateColor(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        state_func(e);
    }
}
static void ui_event_Restart(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        restart(e);
    }
}
static void ui_event_Home(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        get_state(e);
    }
}
static void ui_event_Settings(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_SettingsQ, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
static void ui_event_TestFire(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        fire_button(e);
    }
}
static void ui_event_Menu(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuQ, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
static void ui_event_Button6(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        air_assist_OnOff(e);
    }
}
static void ui_event_Button6_copy(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        red_dot_OnOff(e);
    }
}
static void ui_event_Button6_copy_copy(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_SDCardQ, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
static void ui_event_Button6_copy_copy_copy(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MoveAxisQ, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
static void ui_event_Button6_copy_copy1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        fan_OnOff(e);
    }
}
static void ui_event_back(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HomescreenQ, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
static void ui_event_back1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuQ, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
static void ui_event_Xplus(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        moveX(e);
    }
}
static void ui_event_Yplus(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        moveY(e);
    }
}
static void ui_event_Zplus(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        moveZ(e);
    }
}
static void ui_event_Zminus(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        moveZ_(e);
    }
}
static void ui_event_Yminus(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        moveY_(e);
    }
}
static void ui_event_Xminus(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        moveX_(e);
    }
}
static void ui_event_Home2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        home(e);
    }
}
static void ui_event_MotorOff(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        motor_off(e);
    }
}
static void ui_event_back2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HomescreenQ, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
static void ui_event_AxisSettings(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_AxisSettingsQ, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
static void ui_event_back3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MenuQ, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}
static void ui_event_UP(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        sd_list_up(e);
    }
}
static void ui_event_DOWN(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        sd_list_down(e);
    }
}
static void ui_event_RUN(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        sd_file_run(e);
    }
}
static void ui_event_sdfile1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_FOCUSED) {
        select_sdfile1(e);
    }
}
static void ui_event_sdfile2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_FOCUSED) {
        select_sdfile2(e);
    }
}
static void ui_event_sdfile3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_FOCUSED) {
        select_sdfile3(e);
    }
}
static void ui_event_sdfile4(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_FOCUSED) {
        select_sdfile4(e);
    }
}
static void ui_event_sdfile5(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_FOCUSED) {
        select_sdfile5(e);
    }
}
static void ui_event_sdfile6(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_FOCUSED) {
        select_sdfile6(e);
    }
}
static void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        sd_refresh(e);
    }
}
static void ui_event_back4(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_SettingsQ, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_HomescreenQ_screen_init(void)
{

    // HomescreenQ

    ui_HomescreenQ = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_HomescreenQ, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_HomescreenQ, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomescreenQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HomescreenQ, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label17

    ui_Label17 = lv_label_create(ui_HomescreenQ);

    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label17, 2);
    lv_obj_set_y(ui_Label17, -2);

    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label17, "Design by Skorpi");

    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x4C4C4C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Label17, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    // HomeX

    ui_HomeX = lv_btn_create(ui_HomescreenQ);

    lv_obj_set_width(ui_HomeX, 60);
    lv_obj_set_height(ui_HomeX, 57);

    lv_obj_set_x(ui_HomeX, -200);
    lv_obj_set_y(ui_HomeX, -44);

    lv_obj_set_align(ui_HomeX, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_HomeX, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_HomeX, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_HomeX, ui_event_HomeX, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_img_src(ui_HomeX, "S:home.bin", LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label5

    ui_Label5 = lv_label_create(ui_HomeX);

    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, 8);

    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label5, "X");

    // HomeY

    ui_HomeY = lv_btn_create(ui_HomescreenQ);

    lv_obj_set_width(ui_HomeY, 60);
    lv_obj_set_height(ui_HomeY, 57);

    lv_obj_set_x(ui_HomeY, -200);
    lv_obj_set_y(ui_HomeY, 40);

    lv_obj_set_align(ui_HomeY, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_HomeY, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_HomeY, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_HomeY, ui_event_HomeY, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_img_src(ui_HomeY, "S:home.bin", LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label6

    ui_Label6 = lv_label_create(ui_HomeY);

    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label6, 0);
    lv_obj_set_y(ui_Label6, 8);

    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label6, "Y");

    // HomeZ

    ui_HomeZ = lv_btn_create(ui_HomescreenQ);

    lv_obj_set_width(ui_HomeZ, 60);
    lv_obj_set_height(ui_HomeZ, 57);

    lv_obj_set_x(ui_HomeZ, 45);
    lv_obj_set_y(ui_HomeZ, -44);

    lv_obj_set_align(ui_HomeZ, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_HomeZ, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_HomeZ, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_HomeZ, ui_event_HomeZ, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_img_src(ui_HomeZ, "S:home.bin", LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label7

    ui_Label7 = lv_label_create(ui_HomeZ);

    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, 8);

    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label7, "Z");

    // HomeA

    ui_HomeA = lv_btn_create(ui_HomescreenQ);

    lv_obj_set_width(ui_HomeA, 60);
    lv_obj_set_height(ui_HomeA, 57);

    lv_obj_set_x(ui_HomeA, 45);
    lv_obj_set_y(ui_HomeA, 40);

    lv_obj_set_align(ui_HomeA, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_HomeA, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_HomeA, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_HomeA, ui_event_HomeA, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_img_src(ui_HomeA, "S:home.bin", LV_PART_MAIN | LV_STATE_DEFAULT);


    // Label8

    ui_Label8 = lv_label_create(ui_HomeA);

    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label8, 0);
    lv_obj_set_y(ui_Label8, 8);

    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label8, "A");

    // StateColor

    ui_StateColor = lv_btn_create(ui_HomescreenQ);

    lv_obj_set_width(ui_StateColor, 115);
    lv_obj_set_height(ui_StateColor, 50);

    lv_obj_set_x(ui_StateColor, -172);
    lv_obj_set_y(ui_StateColor, 117);

    lv_obj_set_align(ui_StateColor, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_StateColor, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_StateColor, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_StateColor, ui_event_StateColor, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_StateColor, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_StateColor, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_StateColor, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // State

    ui_State = lv_label_create(ui_StateColor);

    lv_obj_set_width(ui_State, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_State, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_State, 0);
    lv_obj_set_y(ui_State, 0);

    lv_obj_set_align(ui_State, LV_ALIGN_CENTER);

    lv_label_set_text(ui_State, "Alarm");

    // TextAreaX

    ui_TextAreaX = lv_textarea_create(ui_HomescreenQ);

    lv_obj_set_width(ui_TextAreaX, 143);
    lv_obj_set_height(ui_TextAreaX, 57);

    lv_obj_set_x(ui_TextAreaX, -89);
    lv_obj_set_y(ui_TextAreaX, -44);

    lv_obj_set_align(ui_TextAreaX, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_TextAreaX, NULL);
    else lv_textarea_set_accepted_chars(ui_TextAreaX, "");

    lv_textarea_set_max_length(ui_TextAreaX, 8);
    lv_textarea_set_text(ui_TextAreaX, "325.000");
    lv_textarea_set_placeholder_text(ui_TextAreaX, "");
    lv_textarea_set_one_line(ui_TextAreaX, true);

    lv_obj_clear_flag(ui_TextAreaX, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_TextAreaX, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_TextAreaX, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_TextAreaX, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextAreaX, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_TextAreaX, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TextAreaX, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TextAreaX, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TextAreaX, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TextAreaX, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // TextAreaZ

    ui_TextAreaZ = lv_textarea_create(ui_HomescreenQ);

    lv_obj_set_width(ui_TextAreaZ, 143);
    lv_obj_set_height(ui_TextAreaZ, 57);

    lv_obj_set_x(ui_TextAreaZ, 157);
    lv_obj_set_y(ui_TextAreaZ, -44);

    lv_obj_set_align(ui_TextAreaZ, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_TextAreaZ, NULL);
    else lv_textarea_set_accepted_chars(ui_TextAreaZ, "");

    lv_textarea_set_text(ui_TextAreaZ, "325.000");
    lv_textarea_set_placeholder_text(ui_TextAreaZ, "");
    lv_textarea_set_one_line(ui_TextAreaZ, true);

    lv_obj_clear_flag(ui_TextAreaZ, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_TextAreaZ, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_TextAreaZ, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_TextAreaZ, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextAreaZ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_TextAreaZ, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TextAreaZ, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TextAreaZ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TextAreaZ, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TextAreaZ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // TextAreaY

    ui_TextAreaY = lv_textarea_create(ui_HomescreenQ);

    lv_obj_set_width(ui_TextAreaY, 143);
    lv_obj_set_height(ui_TextAreaY, 57);

    lv_obj_set_x(ui_TextAreaY, -89);
    lv_obj_set_y(ui_TextAreaY, 40);

    lv_obj_set_align(ui_TextAreaY, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_TextAreaY, NULL);
    else lv_textarea_set_accepted_chars(ui_TextAreaY, "");

    lv_textarea_set_max_length(ui_TextAreaY, 8);
    lv_textarea_set_text(ui_TextAreaY, "325.000");
    lv_textarea_set_placeholder_text(ui_TextAreaY, "");
    lv_textarea_set_one_line(ui_TextAreaY, true);

    lv_obj_clear_flag(ui_TextAreaY, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_TextAreaY, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_TextAreaY, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_TextAreaY, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextAreaY, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_TextAreaY, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TextAreaY, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TextAreaY, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TextAreaY, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TextAreaY, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // TextAreaA

    ui_TextAreaA = lv_textarea_create(ui_HomescreenQ);

    lv_obj_set_width(ui_TextAreaA, 143);
    lv_obj_set_height(ui_TextAreaA, 57);

    lv_obj_set_x(ui_TextAreaA, 157);
    lv_obj_set_y(ui_TextAreaA, 40);

    lv_obj_set_align(ui_TextAreaA, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_TextAreaA, NULL);
    else lv_textarea_set_accepted_chars(ui_TextAreaA, "");

    lv_textarea_set_text(ui_TextAreaA, "325.000");
    lv_textarea_set_placeholder_text(ui_TextAreaA, "");
    lv_textarea_set_one_line(ui_TextAreaA, true);

    lv_obj_clear_flag(ui_TextAreaA, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_TextAreaA, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_TextAreaA, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_TextAreaA, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextAreaA, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_TextAreaA, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TextAreaA, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TextAreaA, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TextAreaA, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TextAreaA, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Restart

    ui_Restart = lv_btn_create(ui_HomescreenQ);

    lv_obj_set_width(ui_Restart, 115);
    lv_obj_set_height(ui_Restart, 50);

    lv_obj_set_x(ui_Restart, 169);
    lv_obj_set_y(ui_Restart, 117);

    lv_obj_set_align(ui_Restart, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Restart, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Restart, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Restart, ui_event_Restart, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Restart, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label10

    ui_Label10 = lv_label_create(ui_Restart);

    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label10, 0);
    lv_obj_set_y(ui_Label10, 0);

    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label10, "Restart");

    // Home

    ui_Home = lv_btn_create(ui_HomescreenQ);

    lv_obj_set_width(ui_Home, 115);
    lv_obj_set_height(ui_Home, 50);

    lv_obj_set_x(ui_Home, -172);
    lv_obj_set_y(ui_Home, -120);

    lv_obj_set_align(ui_Home, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Home, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Home, ui_event_Home, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Home, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label2

    ui_Label2 = lv_label_create(ui_Home);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 0);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "?");

    // Settings

    ui_Settings = lv_btn_create(ui_HomescreenQ);

    lv_obj_set_width(ui_Settings, 135);
    lv_obj_set_height(ui_Settings, 50);

    lv_obj_set_x(ui_Settings, -3);
    lv_obj_set_y(ui_Settings, -120);

    lv_obj_set_align(ui_Settings, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Settings, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Settings, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Settings, ui_event_Settings, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Settings, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label3

    ui_Label3 = lv_label_create(ui_Settings);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, 0);
    lv_obj_set_y(ui_Label3, 0);

    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label3, "Settings");

    // TestFire

    ui_TestFire = lv_btn_create(ui_HomescreenQ);

    lv_obj_set_width(ui_TestFire, 141);
    lv_obj_set_height(ui_TestFire, 50);

    lv_obj_set_x(ui_TestFire, -3);
    lv_obj_set_y(ui_TestFire, 117);

    lv_obj_set_align(ui_TestFire, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_TestFire, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_TestFire, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_TestFire, ui_event_TestFire, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_TestFire, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // LabelTestFire

    ui_LabelTestFire = lv_label_create(ui_TestFire);

    lv_obj_set_width(ui_LabelTestFire, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_LabelTestFire, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelTestFire, 0);
    lv_obj_set_y(ui_LabelTestFire, 0);

    lv_obj_set_align(ui_LabelTestFire, LV_ALIGN_CENTER);

    lv_label_set_text(ui_LabelTestFire, "Test Fire");

    // Menu

    ui_Menu = lv_btn_create(ui_HomescreenQ);

    lv_obj_set_width(ui_Menu, 115);
    lv_obj_set_height(ui_Menu, 50);

    lv_obj_set_x(ui_Menu, 170);
    lv_obj_set_y(ui_Menu, -120);

    lv_obj_set_align(ui_Menu, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Menu, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Menu, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Menu, ui_event_Menu, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Menu, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label1

    ui_Label1 = lv_label_create(ui_Menu);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 0);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "Menu");

}
void ui_MenuQ_screen_init(void)
{

    // MenuQ

    ui_MenuQ = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_MenuQ, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_MenuQ, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MenuQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_MenuQ, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MenuQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MenuQ, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label11

    ui_Label11 = lv_label_create(ui_MenuQ);

    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label11, 0);
    lv_obj_set_y(ui_Label11, 0);

    lv_obj_set_align(ui_Label11, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label11, "Menu");

    // Button6

    ui_Button6 = lv_btn_create(ui_MenuQ);

    lv_obj_set_width(ui_Button6, 150);
    lv_obj_set_height(ui_Button6, 50);

    lv_obj_set_x(ui_Button6, -159);
    lv_obj_set_y(ui_Button6, -64);

    lv_obj_set_align(ui_Button6, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button6, ui_event_Button6, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Button6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label12

    ui_Label12 = lv_label_create(ui_Button6);

    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, 0);

    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label12, "Air Assist");

    // Button6_copy

    ui_Button6_copy = lv_btn_create(ui_MenuQ);

    lv_obj_set_width(ui_Button6_copy, 150);
    lv_obj_set_height(ui_Button6_copy, 50);

    lv_obj_set_x(ui_Button6_copy, -159);
    lv_obj_set_y(ui_Button6_copy, -3);

    lv_obj_set_align(ui_Button6_copy, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button6_copy, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button6_copy, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button6_copy, ui_event_Button6_copy, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Button6_copy, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label13

    ui_Label13 = lv_label_create(ui_Button6_copy);

    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label13, 0);
    lv_obj_set_y(ui_Label13, 0);

    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label13, "Red Dot");

    // Button6_copy_copy

    ui_Button6_copy_copy = lv_btn_create(ui_MenuQ);

    lv_obj_set_width(ui_Button6_copy_copy, 150);
    lv_obj_set_height(ui_Button6_copy_copy, 50);

    lv_obj_set_x(ui_Button6_copy_copy, 0);
    lv_obj_set_y(ui_Button6_copy_copy, -64);

    lv_obj_set_align(ui_Button6_copy_copy, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button6_copy_copy, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button6_copy_copy, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button6_copy_copy, ui_event_Button6_copy_copy, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Button6_copy_copy, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label14

    ui_Label14 = lv_label_create(ui_Button6_copy_copy);

    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label14, 0);
    lv_obj_set_y(ui_Label14, 0);

    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label14, "SD Card");

    // Button6_copy_copy_copy

    ui_Button6_copy_copy_copy = lv_btn_create(ui_MenuQ);

    lv_obj_set_width(ui_Button6_copy_copy_copy, 150);
    lv_obj_set_height(ui_Button6_copy_copy_copy, 50);

    lv_obj_set_x(ui_Button6_copy_copy_copy, 158);
    lv_obj_set_y(ui_Button6_copy_copy_copy, -65);

    lv_obj_set_align(ui_Button6_copy_copy_copy, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button6_copy_copy_copy, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button6_copy_copy_copy, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button6_copy_copy_copy, ui_event_Button6_copy_copy_copy, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Button6_copy_copy_copy, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label15

    ui_Label15 = lv_label_create(ui_Button6_copy_copy_copy);

    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label15, 0);
    lv_obj_set_y(ui_Label15, 0);

    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label15, "Move");

    // Button6_copy_copy1

    ui_Button6_copy_copy1 = lv_btn_create(ui_MenuQ);

    lv_obj_set_width(ui_Button6_copy_copy1, 150);
    lv_obj_set_height(ui_Button6_copy_copy1, 50);

    lv_obj_set_x(ui_Button6_copy_copy1, -159);
    lv_obj_set_y(ui_Button6_copy_copy1, 59);

    lv_obj_set_align(ui_Button6_copy_copy1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button6_copy_copy1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button6_copy_copy1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button6_copy_copy1, ui_event_Button6_copy_copy1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Button6_copy_copy1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label16

    ui_Label16 = lv_label_create(ui_Button6_copy_copy1);

    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label16, 0);
    lv_obj_set_y(ui_Label16, 0);

    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label16, "Fan");

    // back

    ui_back = lv_img_create(ui_MenuQ);
    lv_img_set_src(ui_back, "S:back.bin");

    lv_obj_set_width(ui_back, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_back, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_back, -196);
    lv_obj_set_y(ui_back, -126);

    lv_obj_set_align(ui_back, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_back, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_back, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_back, ui_event_back, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_back, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_back, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_MoveAxisQ_screen_init(void)
{

    // MoveAxisQ

    ui_MoveAxisQ = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_MoveAxisQ, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_MoveAxisQ, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MoveAxisQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_MoveAxisQ, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MoveAxisQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MoveAxisQ, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    // back1

    ui_back1 = lv_img_create(ui_MoveAxisQ);
    lv_img_set_src(ui_back1, "S:back.bin");

    lv_obj_set_width(ui_back1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_back1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_back1, -196);
    lv_obj_set_y(ui_back1, -126);

    lv_obj_set_align(ui_back1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_back1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_back1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_back1, ui_event_back1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_back1, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_back1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label18

    ui_Label18 = lv_label_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label18, 0);
    lv_obj_set_y(ui_Label18, 0);

    lv_obj_set_align(ui_Label18, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label18, "Move Axis");

    // Xplus

    ui_Xplus = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_Xplus, 65);
    lv_obj_set_height(ui_Xplus, 50);

    lv_obj_set_x(ui_Xplus, -194);
    lv_obj_set_y(ui_Xplus, -58);

    lv_obj_set_align(ui_Xplus, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Xplus, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Xplus, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Xplus, ui_event_Xplus, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Xplus, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label23

    ui_Label23 = lv_label_create(ui_Xplus);

    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label23, 0);
    lv_obj_set_y(ui_Label23, 0);

    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label23, "X+");

    // Yplus

    ui_Yplus = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_Yplus, 65);
    lv_obj_set_height(ui_Yplus, 50);

    lv_obj_set_x(ui_Yplus, -194);
    lv_obj_set_y(ui_Yplus, 3);

    lv_obj_set_align(ui_Yplus, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Yplus, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Yplus, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Yplus, ui_event_Yplus, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Yplus, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label24

    ui_Label24 = lv_label_create(ui_Yplus);

    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label24, 0);
    lv_obj_set_y(ui_Label24, 0);

    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label24, "Y+");

    // Zplus

    ui_Zplus = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_Zplus, 65);
    lv_obj_set_height(ui_Zplus, 50);

    lv_obj_set_x(ui_Zplus, -194);
    lv_obj_set_y(ui_Zplus, 62);

    lv_obj_set_align(ui_Zplus, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Zplus, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Zplus, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Zplus, ui_event_Zplus, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Zplus, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label25

    ui_Label25 = lv_label_create(ui_Zplus);

    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label25, 0);
    lv_obj_set_y(ui_Label25, 0);

    lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label25, "Z+");

    // Zminus

    ui_Zminus = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_Zminus, 65);
    lv_obj_set_height(ui_Zminus, 50);

    lv_obj_set_x(ui_Zminus, -112);
    lv_obj_set_y(ui_Zminus, 62);

    lv_obj_set_align(ui_Zminus, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Zminus, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Zminus, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Zminus, ui_event_Zminus, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Zminus, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label26

    ui_Label26 = lv_label_create(ui_Zminus);

    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label26, 0);
    lv_obj_set_y(ui_Label26, 0);

    lv_obj_set_align(ui_Label26, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label26, "Z-");

    // Yminus

    ui_Yminus = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_Yminus, 65);
    lv_obj_set_height(ui_Yminus, 50);

    lv_obj_set_x(ui_Yminus, -112);
    lv_obj_set_y(ui_Yminus, 3);

    lv_obj_set_align(ui_Yminus, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Yminus, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Yminus, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Yminus, ui_event_Yminus, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Yminus, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label27

    ui_Label27 = lv_label_create(ui_Yminus);

    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label27, 0);
    lv_obj_set_y(ui_Label27, 0);

    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label27, "Y-");

    // Xminus

    ui_Xminus = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_Xminus, 65);
    lv_obj_set_height(ui_Xminus, 50);

    lv_obj_set_x(ui_Xminus, -112);
    lv_obj_set_y(ui_Xminus, -57);

    lv_obj_set_align(ui_Xminus, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Xminus, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Xminus, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Xminus, ui_event_Xminus, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Xminus, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label28

    ui_Label28 = lv_label_create(ui_Xminus);

    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label28, 0);
    lv_obj_set_y(ui_Label28, 0);

    lv_obj_set_align(ui_Label28, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label28, "X-");

    // Jog_Mode

    ui_Jog_Mode = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_Jog_Mode, 161);
    lv_obj_set_height(ui_Jog_Mode, 50);

    lv_obj_set_x(ui_Jog_Mode, -151);
    lv_obj_set_y(ui_Jog_Mode, 123);

    lv_obj_set_align(ui_Jog_Mode, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Jog_Mode, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Jog_Mode, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Jog_Mode, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label29

    ui_Label29 = lv_label_create(ui_Jog_Mode);

    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label29, 0);
    lv_obj_set_y(ui_Label29, 0);

    lv_obj_set_align(ui_Label29, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label29, "Jog Mode");

    // mm50

    ui_mm50 = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_mm50, 95);
    lv_obj_set_height(ui_mm50, 50);

    lv_obj_set_x(ui_mm50, 74);
    lv_obj_set_y(ui_mm50, 64);

    lv_obj_set_align(ui_mm50, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_mm50, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_mm50, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_mm50, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label30

    ui_Label30 = lv_label_create(ui_mm50);

    lv_obj_set_width(ui_Label30, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label30, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label30, 0);
    lv_obj_set_y(ui_Label30, 0);

    lv_obj_set_align(ui_Label30, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label30, "100mm");

    lv_obj_set_style_text_font(ui_Label30, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Home2

    ui_Home2 = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_Home2, 79);
    lv_obj_set_height(ui_Home2, 80);

    lv_obj_set_x(ui_Home2, -26);
    lv_obj_set_y(ui_Home2, 47);

    lv_obj_set_align(ui_Home2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Home2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Home2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Home2, ui_event_Home2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_Home2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label32

    ui_Label32 = lv_label_create(ui_Home2);

    lv_obj_set_width(ui_Label32, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label32, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label32, 0);
    lv_obj_set_y(ui_Label32, 0);

    lv_obj_set_align(ui_Label32, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label32, "Home");

    lv_obj_set_style_text_font(ui_Label32, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // MotorOff

    ui_MotorOff = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_MotorOff, 79);
    lv_obj_set_height(ui_MotorOff, 80);

    lv_obj_set_x(ui_MotorOff, -26);
    lv_obj_set_y(ui_MotorOff, -42);

    lv_obj_set_align(ui_MotorOff, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_MotorOff, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_MotorOff, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_MotorOff, ui_event_MotorOff, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_MotorOff, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label33

    ui_Label33 = lv_label_create(ui_MotorOff);

    lv_obj_set_width(ui_Label33, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label33, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label33, 0);
    lv_obj_set_y(ui_Label33, 0);

    lv_obj_set_align(ui_Label33, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label33, "Motor\n   off");

    lv_obj_set_style_text_font(ui_Label33, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // mm5

    ui_mm5 = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_mm5, 95);
    lv_obj_set_height(ui_mm5, 50);

    lv_obj_set_x(ui_mm5, 74);
    lv_obj_set_y(ui_mm5, 5);

    lv_obj_set_align(ui_mm5, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_mm5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_mm5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_mm5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label34

    ui_Label34 = lv_label_create(ui_mm5);

    lv_obj_set_width(ui_Label34, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label34, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label34, 0);
    lv_obj_set_y(ui_Label34, 0);

    lv_obj_set_align(ui_Label34, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label34, "10mm");

    lv_obj_set_style_text_font(ui_Label34, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // mm1

    ui_mm1 = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_mm1, 95);
    lv_obj_set_height(ui_mm1, 50);

    lv_obj_set_x(ui_mm1, 74);
    lv_obj_set_y(ui_mm1, -55);

    lv_obj_set_align(ui_mm1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_mm1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_mm1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_mm1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label35

    ui_Label35 = lv_label_create(ui_mm1);

    lv_obj_set_width(ui_Label35, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label35, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label35, 0);
    lv_obj_set_y(ui_Label35, 0);

    lv_obj_set_align(ui_Label35, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label35, "1mm");

    lv_obj_set_style_text_font(ui_Label35, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // F10000

    ui_F10000 = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_F10000, 100);
    lv_obj_set_height(ui_F10000, 50);

    lv_obj_set_x(ui_F10000, 181);
    lv_obj_set_y(ui_F10000, 64);

    lv_obj_set_align(ui_F10000, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_F10000, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_F10000, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_F10000, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label31

    ui_Label31 = lv_label_create(ui_F10000);

    lv_obj_set_width(ui_Label31, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label31, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label31, 0);
    lv_obj_set_y(ui_Label31, 0);

    lv_obj_set_align(ui_Label31, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label31, "F10000");

    lv_obj_set_style_text_font(ui_Label31, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // F1000

    ui_F1000 = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_F1000, 100);
    lv_obj_set_height(ui_F1000, 50);

    lv_obj_set_x(ui_F1000, 181);
    lv_obj_set_y(ui_F1000, 4);

    lv_obj_set_align(ui_F1000, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_F1000, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_F1000, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_F1000, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label36

    ui_Label36 = lv_label_create(ui_F1000);

    lv_obj_set_width(ui_Label36, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label36, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label36, 0);
    lv_obj_set_y(ui_Label36, 0);

    lv_obj_set_align(ui_Label36, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label36, "F1000");

    lv_obj_set_style_text_font(ui_Label36, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // F500

    ui_F500 = lv_btn_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_F500, 100);
    lv_obj_set_height(ui_F500, 50);

    lv_obj_set_x(ui_F500, 181);
    lv_obj_set_y(ui_F500, -54);

    lv_obj_set_align(ui_F500, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_F500, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_F500, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_F500, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label37

    ui_Label37 = lv_label_create(ui_F500);

    lv_obj_set_width(ui_Label37, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label37, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label37, 0);
    lv_obj_set_y(ui_Label37, 0);

    lv_obj_set_align(ui_Label37, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label37, "F500");

    lv_obj_set_style_text_font(ui_Label37, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // LabelX

    ui_LabelX = lv_label_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_LabelX, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_LabelX, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelX, 222);
    lv_obj_set_y(ui_LabelX, 254);

    lv_label_set_text(ui_LabelX, "325.000");

    lv_obj_set_style_text_align(ui_LabelX, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelX, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // LabelZ

    ui_LabelZ = lv_label_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_LabelZ, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_LabelZ, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelZ, 365);
    lv_obj_set_y(ui_LabelZ, 254);

    lv_label_set_text(ui_LabelZ, "32.000");

    lv_obj_set_style_text_align(ui_LabelZ, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelZ, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // LabelY

    ui_LabelY = lv_label_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_LabelY, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_LabelY, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelY, 222);
    lv_obj_set_y(ui_LabelY, 285);

    lv_label_set_text(ui_LabelY, "5.000");

    lv_obj_set_style_text_align(ui_LabelY, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelY, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // LabelX_copy

    ui_LabelX_copy = lv_label_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_LabelX_copy, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_LabelX_copy, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelX_copy, -34);
    lv_obj_set_y(ui_LabelX_copy, 107);

    lv_obj_set_align(ui_LabelX_copy, LV_ALIGN_CENTER);

    lv_label_set_text(ui_LabelX_copy, "X:");

    lv_obj_set_style_text_font(ui_LabelX_copy, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // LabelY_copy

    ui_LabelY_copy = lv_label_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_LabelY_copy, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_LabelY_copy, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelY_copy, -34);
    lv_obj_set_y(ui_LabelY_copy, 138);

    lv_obj_set_align(ui_LabelY_copy, LV_ALIGN_CENTER);

    lv_label_set_text(ui_LabelY_copy, "Y:");

    lv_obj_set_style_text_font(ui_LabelY_copy, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // LabelZ_copy

    ui_LabelZ_copy = lv_label_create(ui_MoveAxisQ);

    lv_obj_set_width(ui_LabelZ_copy, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_LabelZ_copy, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_LabelZ_copy, 108);
    lv_obj_set_y(ui_LabelZ_copy, 107);

    lv_obj_set_align(ui_LabelZ_copy, LV_ALIGN_CENTER);

    lv_label_set_text(ui_LabelZ_copy, "Z:");

    lv_obj_set_style_text_font(ui_LabelZ_copy, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_SettingsQ_screen_init(void)
{

    // SettingsQ

    ui_SettingsQ = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_SettingsQ, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_SettingsQ, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SettingsQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_SettingsQ, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SettingsQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SettingsQ, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    // TextAreaZ_copy

    ui_TextAreaZ_copy = lv_textarea_create(ui_SettingsQ);

    lv_obj_set_width(ui_TextAreaZ_copy, 95);
    lv_obj_set_height(ui_TextAreaZ_copy, 57);

    lv_obj_set_x(ui_TextAreaZ_copy, 180);
    lv_obj_set_y(ui_TextAreaZ_copy, 123);

    lv_obj_set_align(ui_TextAreaZ_copy, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_TextAreaZ_copy, NULL);
    else lv_textarea_set_accepted_chars(ui_TextAreaZ_copy, "");

    lv_textarea_set_max_length(ui_TextAreaZ_copy, 5);
    lv_textarea_set_text(ui_TextAreaZ_copy, "1000");
    lv_textarea_set_placeholder_text(ui_TextAreaZ_copy, "");
    lv_textarea_set_one_line(ui_TextAreaZ_copy, true);

    lv_obj_clear_flag(ui_TextAreaZ_copy, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_TextAreaZ_copy, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_TextAreaZ_copy, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_TextAreaZ_copy, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextAreaZ_copy, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_TextAreaZ_copy, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TextAreaZ_copy, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TextAreaZ_copy, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TextAreaZ_copy, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TextAreaZ_copy, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label19

    ui_Label19 = lv_label_create(ui_SettingsQ);

    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label19, 0);
    lv_obj_set_y(ui_Label19, 0);

    lv_obj_set_align(ui_Label19, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label19, "Settings");

    // back2

    ui_back2 = lv_img_create(ui_SettingsQ);
    lv_img_set_src(ui_back2, "S:back.bin");

    lv_obj_set_width(ui_back2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_back2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_back2, -196);
    lv_obj_set_y(ui_back2, -126);

    lv_obj_set_align(ui_back2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_back2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_back2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_back2, ui_event_back2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_back2, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_back2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // AxisSettings

    ui_AxisSettings = lv_btn_create(ui_SettingsQ);

    lv_obj_set_width(ui_AxisSettings, 100);
    lv_obj_set_height(ui_AxisSettings, 50);

    lv_obj_set_x(ui_AxisSettings, 178);
    lv_obj_set_y(ui_AxisSettings, 51);

    lv_obj_set_align(ui_AxisSettings, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_AxisSettings, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_AxisSettings, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_AxisSettings, ui_event_AxisSettings, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_AxisSettings, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label21

    ui_Label21 = lv_label_create(ui_AxisSettings);

    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label21, 0);
    lv_obj_set_y(ui_Label21, 0);

    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label21, "Axis");

    lv_obj_set_style_text_font(ui_Label21, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label39

    ui_Label39 = lv_label_create(ui_SettingsQ);

    lv_obj_set_width(ui_Label39, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label39, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label39, 32);
    lv_obj_set_y(ui_Label39, 122);

    lv_obj_set_align(ui_Label39, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label39, "Laser Power:");

}
void ui_SDCardQ_screen_init(void)
{

    // SDCardQ

    ui_SDCardQ = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_SDCardQ, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_SDCardQ, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SDCardQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_SDCardQ, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SDCardQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SDCardQ, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label20

    ui_Label20 = lv_label_create(ui_SDCardQ);

    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label20, 0);
    lv_obj_set_y(ui_Label20, 0);

    lv_obj_set_align(ui_Label20, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label20, "SD Card");

    // back3

    ui_back3 = lv_img_create(ui_SDCardQ);
    lv_img_set_src(ui_back3, "S:back.bin");

    lv_obj_set_width(ui_back3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_back3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_back3, -196);
    lv_obj_set_y(ui_back3, -126);

    lv_obj_set_align(ui_back3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_back3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_back3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_back3, ui_event_back3, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_back3, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_back3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Panel1

    ui_Panel1 = lv_obj_create(ui_SDCardQ);

    lv_obj_set_width(ui_Panel1, 351);
    lv_obj_set_height(ui_Panel1, 239);

    lv_obj_set_x(ui_Panel1, -59);
    lv_obj_set_y(ui_Panel1, 34);

    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // UP

    ui_UP = lv_btn_create(ui_SDCardQ);

    lv_obj_set_width(ui_UP, 110);
    lv_obj_set_height(ui_UP, 50);

    lv_obj_set_x(ui_UP, 178);
    lv_obj_set_y(ui_UP, -60);

    lv_obj_set_align(ui_UP, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_UP, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_UP, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_UP, ui_event_UP, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_UP, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label4

    ui_Label4 = lv_label_create(ui_UP);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, 0);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label4, "UP");

    // DOWN

    ui_DOWN = lv_btn_create(ui_SDCardQ);

    lv_obj_set_width(ui_DOWN, 110);
    lv_obj_set_height(ui_DOWN, 50);

    lv_obj_set_x(ui_DOWN, 178);
    lv_obj_set_y(ui_DOWN, 4);

    lv_obj_set_align(ui_DOWN, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_DOWN, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_DOWN, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_DOWN, ui_event_DOWN, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_DOWN, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label9

    ui_Label9 = lv_label_create(ui_DOWN);

    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label9, 0);
    lv_obj_set_y(ui_Label9, 0);

    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label9, "DOWN");

    // RUN

    ui_RUN = lv_btn_create(ui_SDCardQ);

    lv_obj_set_width(ui_RUN, 110);
    lv_obj_set_height(ui_RUN, 50);

    lv_obj_set_x(ui_RUN, 178);
    lv_obj_set_y(ui_RUN, 123);

    lv_obj_set_align(ui_RUN, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_RUN, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_RUN, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_RUN, ui_event_RUN, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_RUN, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label22

    ui_Label22 = lv_label_create(ui_RUN);

    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label22, 0);
    lv_obj_set_y(ui_Label22, 0);

    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label22, "RUN");

    // sdfile1

    ui_sdfile1 = lv_textarea_create(ui_SDCardQ);

    lv_obj_set_width(ui_sdfile1, 341);
    lv_obj_set_height(ui_sdfile1, 34);

    lv_obj_set_x(ui_sdfile1, -59);
    lv_obj_set_y(ui_sdfile1, -63);

    lv_obj_set_align(ui_sdfile1, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_sdfile1, NULL);
    else lv_textarea_set_accepted_chars(ui_sdfile1, "");

    lv_textarea_set_text(ui_sdfile1, "klammer.gcode");
    lv_textarea_set_placeholder_text(ui_sdfile1, "");
    lv_textarea_set_one_line(ui_sdfile1, true);

    lv_obj_clear_flag(ui_sdfile1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_sdfile1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_sdfile1, LV_DIR_TOP);

    lv_obj_add_event_cb(ui_sdfile1, ui_event_sdfile1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_color(ui_sdfile1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sdfile1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_sdfile1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sdfile1, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_sdfile1, lv_color_hex(0x272727), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sdfile1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile1, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_sdfile1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_sdfile1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_sdfile1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_sdfile1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_sdfile1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui_sdfile1, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui_sdfile1, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui_sdfile1, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    lv_obj_set_style_opa(ui_sdfile1, 0, LV_PART_CURSOR | LV_STATE_FOCUSED);

    // sdfile2

    ui_sdfile2 = lv_textarea_create(ui_SDCardQ);

    lv_obj_set_width(ui_sdfile2, 341);
    lv_obj_set_height(ui_sdfile2, 34);

    lv_obj_set_x(ui_sdfile2, -59);
    lv_obj_set_y(ui_sdfile2, -24);

    lv_obj_set_align(ui_sdfile2, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_sdfile2, NULL);
    else lv_textarea_set_accepted_chars(ui_sdfile2, "");

    lv_textarea_set_text(ui_sdfile2, "wascheklammer1234.gcode");
    lv_textarea_set_placeholder_text(ui_sdfile2, "");
    lv_textarea_set_one_line(ui_sdfile2, true);

    lv_obj_clear_flag(ui_sdfile2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_sdfile2, ui_event_sdfile2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_color(ui_sdfile2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sdfile2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_sdfile2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sdfile2, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_sdfile2, lv_color_hex(0x272727), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sdfile2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile2, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_sdfile2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_sdfile2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_sdfile2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_sdfile2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_sdfile2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui_sdfile2, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui_sdfile2, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui_sdfile2, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    lv_obj_set_style_opa(ui_sdfile2, 0, LV_PART_CURSOR | LV_STATE_FOCUSED);

    // sdfile3

    ui_sdfile3 = lv_textarea_create(ui_SDCardQ);

    lv_obj_set_width(ui_sdfile3, 341);
    lv_obj_set_height(ui_sdfile3, 34);

    lv_obj_set_x(ui_sdfile3, -59);
    lv_obj_set_y(ui_sdfile3, 15);

    lv_obj_set_align(ui_sdfile3, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_sdfile3, NULL);
    else lv_textarea_set_accepted_chars(ui_sdfile3, "");

    lv_textarea_set_text(ui_sdfile3, "wascheklammer+-/?.gcode");
    lv_textarea_set_placeholder_text(ui_sdfile3, "");
    lv_textarea_set_one_line(ui_sdfile3, true);

    lv_obj_clear_flag(ui_sdfile3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_sdfile3, ui_event_sdfile3, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_color(ui_sdfile3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sdfile3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_sdfile3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sdfile3, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_sdfile3, lv_color_hex(0x272727), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sdfile3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile3, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_sdfile3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_sdfile3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_sdfile3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_sdfile3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_sdfile3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile3, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui_sdfile3, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    lv_obj_set_style_opa(ui_sdfile3, 0, LV_PART_CURSOR | LV_STATE_FOCUSED);

    // sdfile4

    ui_sdfile4 = lv_textarea_create(ui_SDCardQ);

    lv_obj_set_width(ui_sdfile4, 341);
    lv_obj_set_height(ui_sdfile4, 34);

    lv_obj_set_x(ui_sdfile4, -59);
    lv_obj_set_y(ui_sdfile4, 54);

    lv_obj_set_align(ui_sdfile4, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_sdfile4, NULL);
    else lv_textarea_set_accepted_chars(ui_sdfile4, "");

    lv_textarea_set_text(ui_sdfile4, "wascheklammer.gcode");
    lv_textarea_set_placeholder_text(ui_sdfile4, "");
    lv_textarea_set_one_line(ui_sdfile4, true);

    lv_obj_clear_flag(ui_sdfile4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_sdfile4, ui_event_sdfile4, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_color(ui_sdfile4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sdfile4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_sdfile4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sdfile4, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_sdfile4, lv_color_hex(0x272727), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sdfile4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile4, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_sdfile4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_sdfile4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_sdfile4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_sdfile4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_sdfile4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile4, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui_sdfile4, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    lv_obj_set_style_opa(ui_sdfile4, 0, LV_PART_CURSOR | LV_STATE_FOCUSED);

    // sdfile5

    ui_sdfile5 = lv_textarea_create(ui_SDCardQ);

    lv_obj_set_width(ui_sdfile5, 341);
    lv_obj_set_height(ui_sdfile5, 34);

    lv_obj_set_x(ui_sdfile5, -59);
    lv_obj_set_y(ui_sdfile5, 93);

    lv_obj_set_align(ui_sdfile5, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_sdfile5, NULL);
    else lv_textarea_set_accepted_chars(ui_sdfile5, "");

    lv_textarea_set_text(ui_sdfile5, "");
    lv_textarea_set_placeholder_text(ui_sdfile5, "");
    lv_textarea_set_one_line(ui_sdfile5, true);

    lv_obj_clear_flag(ui_sdfile5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_sdfile5, ui_event_sdfile5, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_color(ui_sdfile5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sdfile5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_sdfile5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sdfile5, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_sdfile5, lv_color_hex(0x272727), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sdfile5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile5, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_sdfile5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_sdfile5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_sdfile5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_sdfile5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_sdfile5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile5, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui_sdfile5, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    lv_obj_set_style_opa(ui_sdfile5, 0, LV_PART_CURSOR | LV_STATE_FOCUSED);

    // sdfile6

    ui_sdfile6 = lv_textarea_create(ui_SDCardQ);

    lv_obj_set_width(ui_sdfile6, 341);
    lv_obj_set_height(ui_sdfile6, 34);

    lv_obj_set_x(ui_sdfile6, -59);
    lv_obj_set_y(ui_sdfile6, 132);

    lv_obj_set_align(ui_sdfile6, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_sdfile6, NULL);
    else lv_textarea_set_accepted_chars(ui_sdfile6, "");

    lv_textarea_set_text(ui_sdfile6, "");
    lv_textarea_set_placeholder_text(ui_sdfile6, "");
    lv_textarea_set_one_line(ui_sdfile6, true);

    lv_obj_clear_flag(ui_sdfile6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_sdfile6, ui_event_sdfile6, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_color(ui_sdfile6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sdfile6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_sdfile6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sdfile6, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_sdfile6, lv_color_hex(0x272727), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sdfile6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile6, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_sdfile6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_sdfile6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_sdfile6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_sdfile6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_sdfile6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sdfile6, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui_sdfile6, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    lv_obj_set_style_opa(ui_sdfile6, 0, LV_PART_CURSOR | LV_STATE_FOCUSED);

    // Button1

    ui_Button1 = lv_btn_create(ui_SDCardQ);

    lv_obj_set_width(ui_Button1, 100);
    lv_obj_set_height(ui_Button1, 50);

    lv_obj_set_x(ui_Button1, 177);
    lv_obj_set_y(ui_Button1, -124);

    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);

    // Label38

    ui_Label38 = lv_label_create(ui_Button1);

    lv_obj_set_width(ui_Label38, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label38, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label38, 0);
    lv_obj_set_y(ui_Label38, 0);

    lv_obj_set_align(ui_Label38, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label38, "Refresh");

    lv_obj_set_style_text_font(ui_Label38, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_AxisSettingsQ_screen_init(void)
{

    // AxisSettingsQ

    ui_AxisSettingsQ = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_AxisSettingsQ, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_AxisSettingsQ, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AxisSettingsQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_AxisSettingsQ, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_AxisSettingsQ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_AxisSettingsQ, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    // steps

    ui_steps = lv_textarea_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_steps, 114);
    lv_obj_set_height(ui_steps, 57);

    lv_obj_set_x(ui_steps, -72);
    lv_obj_set_y(ui_steps, -60);

    lv_obj_set_align(ui_steps, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_steps, NULL);
    else lv_textarea_set_accepted_chars(ui_steps, "");

    lv_textarea_set_max_length(ui_steps, 5);
    lv_textarea_set_text(ui_steps, "1000");
    lv_textarea_set_placeholder_text(ui_steps, "");
    lv_textarea_set_one_line(ui_steps, true);

    lv_obj_clear_flag(ui_steps, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_steps, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_steps, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_steps, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_steps, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_steps, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_steps, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_steps, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_steps, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_steps, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label401

    ui_Label401 = lv_label_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_Label401, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label401, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label401, 0);
    lv_obj_set_y(ui_Label401, 0);

    lv_obj_set_align(ui_Label401, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_Label401, "Axis Settings");

    // back4

    ui_back4 = lv_img_create(ui_AxisSettingsQ);
    lv_img_set_src(ui_back4, "S:back.bin");

    lv_obj_set_width(ui_back4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_back4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_back4, -196);
    lv_obj_set_y(ui_back4, -126);

    lv_obj_set_align(ui_back4, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_back4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_back4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_back4, ui_event_back4, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_back4, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_back4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // AxisSettings1

    ui_AxisSettings1 = lv_btn_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_AxisSettings1, 100);
    lv_obj_set_height(ui_AxisSettings1, 50);

    lv_obj_set_x(ui_AxisSettings1, 174);
    lv_obj_set_y(ui_AxisSettings1, -125);

    lv_obj_set_align(ui_AxisSettings1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_AxisSettings1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_AxisSettings1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_AxisSettings1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Label40

    ui_Label40 = lv_label_create(ui_AxisSettings1);

    lv_obj_set_width(ui_Label40, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label40, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label40, 0);
    lv_obj_set_y(ui_Label40, 0);

    lv_obj_set_align(ui_Label40, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label40, "More...");

    lv_obj_set_style_text_font(ui_Label40, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Stepss

    ui_Stepss = lv_label_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_Stepss, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Stepss, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Stepss, -179);
    lv_obj_set_y(ui_Stepss, -62);

    lv_obj_set_align(ui_Stepss, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Stepss, "Steps:");

    // feed

    ui_feed = lv_textarea_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_feed, 114);
    lv_obj_set_height(ui_feed, 57);

    lv_obj_set_x(ui_feed, -72);
    lv_obj_set_y(ui_feed, 2);

    lv_obj_set_align(ui_feed, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_feed, NULL);
    else lv_textarea_set_accepted_chars(ui_feed, "");

    lv_textarea_set_max_length(ui_feed, 5);
    lv_textarea_set_text(ui_feed, "1000");
    lv_textarea_set_placeholder_text(ui_feed, "");
    lv_textarea_set_one_line(ui_feed, true);

    lv_obj_clear_flag(ui_feed, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_feed, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_feed, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_feed, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_feed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_feed, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_feed, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_feed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_feed, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_feed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // accel

    ui_accel = lv_textarea_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_accel, 114);
    lv_obj_set_height(ui_accel, 57);

    lv_obj_set_x(ui_accel, -72);
    lv_obj_set_y(ui_accel, 63);

    lv_obj_set_align(ui_accel, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_accel, NULL);
    else lv_textarea_set_accepted_chars(ui_accel, "");

    lv_textarea_set_max_length(ui_accel, 5);
    lv_textarea_set_text(ui_accel, "1000");
    lv_textarea_set_placeholder_text(ui_accel, "");
    lv_textarea_set_one_line(ui_accel, true);

    lv_obj_clear_flag(ui_accel, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_accel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_accel, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_accel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_accel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_accel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_accel, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_accel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_accel, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_accel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // travel

    ui_travel = lv_textarea_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_travel, 114);
    lv_obj_set_height(ui_travel, 57);

    lv_obj_set_x(ui_travel, -72);
    lv_obj_set_y(ui_travel, 125);

    lv_obj_set_align(ui_travel, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_travel, NULL);
    else lv_textarea_set_accepted_chars(ui_travel, "");

    lv_textarea_set_max_length(ui_travel, 5);
    lv_textarea_set_text(ui_travel, "18000");
    lv_textarea_set_placeholder_text(ui_travel, "");
    lv_textarea_set_one_line(ui_travel, true);

    lv_obj_clear_flag(ui_travel, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_travel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_travel, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_travel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_travel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_travel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_travel, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_travel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_travel, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_travel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Feedd

    ui_Feedd = lv_label_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_Feedd, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Feedd, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Feedd, -175);
    lv_obj_set_y(ui_Feedd, 3);

    lv_obj_set_align(ui_Feedd, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Feedd, "Feed:");

    // Accelll

    ui_Accelll = lv_label_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_Accelll, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Accelll, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Accelll, -182);
    lv_obj_set_y(ui_Accelll, 62);

    lv_obj_set_align(ui_Accelll, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Accelll, "Accell:");

    // Travell

    ui_Travell = lv_label_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_Travell, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Travell, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Travell, -181);
    lv_obj_set_y(ui_Travell, 125);

    lv_obj_set_align(ui_Travell, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Travell, "Travel:");

    // mpos

    ui_mpos = lv_textarea_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_mpos, 114);
    lv_obj_set_height(ui_mpos, 57);

    lv_obj_set_x(ui_mpos, 172);
    lv_obj_set_y(ui_mpos, -60);

    lv_obj_set_align(ui_mpos, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_mpos, NULL);
    else lv_textarea_set_accepted_chars(ui_mpos, "");

    lv_textarea_set_max_length(ui_mpos, 5);
    lv_textarea_set_text(ui_mpos, "1000");
    lv_textarea_set_placeholder_text(ui_mpos, "");
    lv_textarea_set_one_line(ui_mpos, true);

    lv_obj_clear_flag(ui_mpos, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_mpos, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_mpos, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_mpos, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_mpos, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_mpos, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_mpos, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mpos, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_mpos, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_mpos, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // MPoss

    ui_MPoss = lv_label_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_MPoss, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_MPoss, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_MPoss, 66);
    lv_obj_set_y(ui_MPoss, -60);

    lv_obj_set_align(ui_MPoss, LV_ALIGN_CENTER);

    lv_label_set_text(ui_MPoss, "MPos:");

    // feed

    ui_feed = lv_textarea_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_feed, 114);
    lv_obj_set_height(ui_feed, 57);

    lv_obj_set_x(ui_feed, 172);
    lv_obj_set_y(ui_feed, 2);

    lv_obj_set_align(ui_feed, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_feed, NULL);
    else lv_textarea_set_accepted_chars(ui_feed, "");

    lv_textarea_set_max_length(ui_feed, 5);
    lv_textarea_set_text(ui_feed, "1000");
    lv_textarea_set_placeholder_text(ui_feed, "");
    lv_textarea_set_one_line(ui_feed, true);

    lv_obj_clear_flag(ui_feed, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_feed, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_feed, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_feed, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_feed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_feed, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_feed, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_feed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_feed, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_feed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // seek

    ui_seek = lv_textarea_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_seek, 114);
    lv_obj_set_height(ui_seek, 57);

    lv_obj_set_x(ui_seek, 172);
    lv_obj_set_y(ui_seek, 63);

    lv_obj_set_align(ui_seek, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_seek, NULL);
    else lv_textarea_set_accepted_chars(ui_seek, "");

    lv_textarea_set_max_length(ui_seek, 5);
    lv_textarea_set_text(ui_seek, "1000");
    lv_textarea_set_placeholder_text(ui_seek, "");
    lv_textarea_set_one_line(ui_seek, true);

    lv_obj_clear_flag(ui_seek, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_seek, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_seek, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_seek, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_seek, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_seek, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_seek, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_seek, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_seek, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_seek, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // pulloff

    ui_pulloff = lv_textarea_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_pulloff, 114);
    lv_obj_set_height(ui_pulloff, 57);

    lv_obj_set_x(ui_pulloff, 172);
    lv_obj_set_y(ui_pulloff, 125);

    lv_obj_set_align(ui_pulloff, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_pulloff, NULL);
    else lv_textarea_set_accepted_chars(ui_pulloff, "");

    lv_textarea_set_max_length(ui_pulloff, 5);
    lv_textarea_set_text(ui_pulloff, "2");
    lv_textarea_set_placeholder_text(ui_pulloff, "");
    lv_textarea_set_one_line(ui_pulloff, true);

    lv_obj_clear_flag(ui_pulloff, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_pulloff, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_pulloff, LV_DIR_RIGHT);

    lv_obj_set_style_text_color(ui_pulloff, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pulloff, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_pulloff, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pulloff, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pulloff, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pulloff, lv_color_hex(0x7F7F7F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pulloff, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // Feeddd

    ui_Feeddd = lv_label_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_Feeddd, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Feeddd, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Feeddd, 70);
    lv_obj_set_y(ui_Feeddd, 0);

    lv_obj_set_align(ui_Feeddd, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Feeddd, "Feed:");

    // Seekk

    ui_Seekk = lv_label_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_Seekk, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Seekk, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Seekk, 70);
    lv_obj_set_y(ui_Seekk, 64);

    lv_obj_set_align(ui_Seekk, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Seekk, "Seek:");

    // Pullofff

    ui_Pullofff = lv_label_create(ui_AxisSettingsQ);

    lv_obj_set_width(ui_Pullofff, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Pullofff, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Pullofff, 59);
    lv_obj_set_y(ui_Pullofff, 123);

    lv_obj_set_align(ui_Pullofff, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Pullofff, "Pulloff:");

}

void ui_init(void)
{
    ui_HomescreenQ_screen_init();
    ui_MenuQ_screen_init();
    ui_MoveAxisQ_screen_init();
    ui_SettingsQ_screen_init();
    ui_SDCardQ_screen_init();
    ui_AxisSettingsQ_screen_init();
    lv_disp_load_scr(ui_HomescreenQ);
}

