#include "prologues/rhythm_tweezers.h"

#include "src/code_08001360.h"
#include "src/code_08007468.h"
#include "src/code_0800b3c8.h"
#include "src/code_0800b778.h"
#include "src/lib_0804ca80.h"

// For readability.
#define gPrologueInfo ((struct PrologueRhythmTweezersInfo *)D_030055d0)


  //  //  //  PROLOGUE: RHYTHM TWEEZERS  //  //  //


// [func_08045bec] GFX_INIT Func_02
void func_08045bec(void) {
    func_0800c604(0);
    gameplay_start_screen_fade_in();
}


// [func_08045bfc] GFX_INIT Func_01
void func_08045bfc(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(get_current_mem_id(), prologue_rhythm_tweezers_gfx_table, 0x2000);
    run_func_after_task(task, func_08045bec, 0);
}


// [func_08045c2c] GFX_INIT Func_00
void func_08045c2c(void) {
    u32 task;

    func_0800c604(0);
    func_08006d80();
    task = func_080087b4(get_current_mem_id(), prologue_rhythm_tweezers_buffered_textures);
    run_func_after_task(task, func_08045bfc, 0);
}


// [func_08045c5c] MAIN - Init
void func_08045c5c(u32 ver) {
    gPrologueInfo->ver = ver;

    func_08045c2c();
    scene_show_obj_layer();
    scene_set_bg_layer_display(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->textSprite = func_0804d160(D_03005380, anim_prologue_rhythm_tweezers_title, 0, 60, 64, 0, 0, 0x7f, 0);
}


// [func_08045cb8] ENGINE Func_00
void func_08045cb8(void) {
}


// [func_08045cbc] MAIN - Update
void func_08045cbc(void) {
}


// [func_08045cc0] MAIN - Close
void func_08045cc0(void) {
}


// [func_08045cc4] Event 0 - Play Animation (Text)
void func_08045cc4(void) {
    func_0804dae0(D_03005380, gPrologueInfo->textSprite, 1, 0x7f, 0);
}