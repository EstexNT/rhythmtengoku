#include "prologues/marching_orders.h"

#include "src/code_08001360.h"
#include "src/code_08007468.h"
#include "src/code_0800b3c8.h"
#include "src/code_0800b778.h"
#include "src/lib_0804ca80.h"

// For readability.
#define gPrologueInfo ((struct PrologueMarchingOrdersInfo *)D_030055d0)


  //  //  //  PROLOGUE: MARCHING ORDERS  //  //  //


// [func_08046234] GFX_INIT Func_02
void func_08046234(void) {
    func_0800c604(0);
    gameplay_start_screen_fade_in();
}


// [func_08046244] GFX_INIT Func_01
void func_08046244(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(get_current_mem_id(), prologue_marching_orders_gfx_table, 0x2000);
    run_func_after_task(task, func_08046234, 0);
}


// [func_08046274] GFX_INIT Func_00
void func_08046274(void) {
    u32 task;

    func_0800c604(0);
    func_08006d80();
    task = func_080087b4(get_current_mem_id(), prologue_marching_orders_buffered_textures);
    run_func_after_task(task, func_08046244, 0);
}


// [func_080462a4] MAIN - Init
void func_080462a4(u32 ver) {
    gPrologueInfo->ver = ver;

    func_08046274();
    scene_show_obj_layer();
    scene_set_bg_layer_display(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);

    gPrologueInfo->textSprite = func_0804d160(D_03005380, anim_prologue_marching_title, 0, 112, 140, 0, 0, 0, 0);
}


// [func_08046300] ENGINE Func_00
void func_08046300(void) {
}


// [func_08046304] MAIN - Update
void func_08046304(void) {
}


// [func_08046308] MAIN - Close
void func_08046308(void) {
}


// [func_0804630c] Event 0 - Set Animation Frame (Text)
void func_0804630c(u32 frame) {
    func_0804cebc(D_03005380, gPrologueInfo->textSprite, frame);
}