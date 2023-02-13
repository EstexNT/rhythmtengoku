#include "engines/bon_odori.h"

#include "src/code_08001360.h"
#include "src/code_08003980.h"
#include "src/code_08007468.h"
#include "src/code_0800b778.h"
#include "scenes/gameplay.h"
#include "src/lib_0804ca80.h"

// For readability.
#define gBonOdoriInfo ((struct BonOdoriInfo *)D_030055d0)

#define BON_LYRICS_NORMAL_PALETTE 7
#define BON_LYRICS_HIGHLIGHT_PALETTE 10

enum BonOdoriLyricsAlignmentEnum {
    BON_LYRICS_ALIGNMENT_CENTRE,
    BON_LYRICS_ALIGNMENT_LEFT,
    BON_LYRICS_ALIGNMENT_RIGHT
};


/* THE BON ODORI */


// [func_080206a0] Get OBJ Animation
const struct Animation *bon_odori_get_anim(u32 anim) {
    return bon_odori_anim_table[anim][gBonOdoriInfo->version];
}


// [func_080206c0] Init. Donpans
void bon_odori_init_donpans(void) {
    const struct Animation *anim;
    s32 x, y;
    u16 z;
    u32 i;

    x = 40;
    y = 120;
    z = 0x4800;

    for (i = 0; i < 4; i++) {
        anim = bon_odori_get_donpan_anim(DONPAN_ANIM_BEAT, i);
        gBonOdoriInfo->donpanSprites[i] = func_0804d160(D_03005380, anim, 0x7f, x, y, z, 1, 0x7f, 0);;
        gBonOdoriInfo->donpanAnimTimers[i] = 0;
        x += 53;
    }

    gBonOdoriInfo->donpanEmoteTimer = 0;
    gBonOdoriInfo->donpanEmoteAnim = DONPAN_ANIM_BEAT;
    gBonOdoriInfo->currentClapAnim = 1;
}


// [func_0802075c] Get Donpan Animation
const struct Animation *bon_odori_get_donpan_anim(u32 animation, u32 donpan) {
    return bon_odori_get_anim(bon_odori_donpan_anim_id_table[animation][donpan]);
}


// [func_08020778] Set Donpan Animation
void bon_odori_set_donpan_anim(u32 animation, u32 donpan) {
    const struct Animation *anim = bon_odori_get_donpan_anim(animation, donpan);
    func_0804d8f8(D_03005380, gBonOdoriInfo->donpanSprites[donpan], anim, 0, 1, 0x7f, 0);
    gBonOdoriInfo->donpanAnimTimers[donpan] = beats_to_ticks(bon_odori_anim_durations[animation]);
}


// [func_080207d0] ENGINE Func_0B - Set Animation (CPU Donpans)
void bon_odori_set_cpu_donpan_anim(u32 anim) {
    u32 i;

    for (i = 0; i < 3; i++) {
        bon_odori_set_donpan_anim(anim, i);
    }
}


// [func_080207ec] ENGINE Func_0C - Set Animation (Player)
void bon_odori_set_player_anim(u32 anim) {
    bon_odori_set_donpan_anim(anim, 3);
}


// [func_080207f8] ENGINE Func_0D - Set Animation (All Donpans)
void bon_odori_set_all_donpan_anim(u32 anim) {
    bon_odori_set_cpu_donpan_anim(anim);
    bon_odori_set_player_anim(anim);
}


// [func_0802080c] ENGINE Func_0E - Set CPU Donpan Animation Timer
void bon_odori_set_cpu_donpan_anim_timer(u32 duration) {
    u32 i;

    for (i = 0; i < 3; i++) {
        gBonOdoriInfo->donpanAnimTimers[i] = beats_to_ticks(duration);
    }
}


// [func_08020834] Update Donpans
void bon_odori_update_donpans(void) {
    u32 i;

    for (i = 0; i < 4; i++) {
        if (gBonOdoriInfo->donpanAnimTimers[i] != 0) {
            gBonOdoriInfo->donpanAnimTimers[i]--;
        }
    }
}


// [func_0802085c] GFX_INIT Func_02
void bon_odori_init_gfx3(void) {
    func_0800c604(0);
    gameplay_start_screen_fade_in();
    D_03004b10.bgPalette[12][2] = 0x7C00;
}


// [func_08020880] GFX_INIT Func_01
void bon_odori_init_gfx2(void) {
    u32 task;

    func_0800c604(0);
    task = func_08002ee0(get_current_mem_id(), bon_odori_gfx_tables[gBonOdoriInfo->version], 0x2000);
    run_func_after_task(task, bon_odori_init_gfx3, 0);
}


// [func_080208c0] GFX_INIT Func_00
void bon_odori_init_gfx1(void) {
    u32 task;

    func_0800c604(0);
    task = func_080087b4(get_current_mem_id(), bon_odori_buffered_textures);
    run_func_after_task(task, bon_odori_init_gfx2, 0);
}


// [func_080208ec] MAIN - Init
void bon_odori_engine_start(u32 ver) {
    u32 i;

    gBonOdoriInfo->version = ver;
    bon_odori_init_gfx1();
    scene_show_obj_layer();
    scene_enable_obj_windows();
    scene_set_bg_layer_display(BG_LAYER_0, TRUE, 0, -64, 2, 24, 0xC000);
    scene_set_bg_layer_display(BG_LAYER_1, TRUE, 0, 0, 0, 29, 1);
    scene_set_bg_layer_display(BG_LAYER_2, TRUE, 0, 0, 0, 30, 1);
    gBonOdoriInfo->unk4 = func_0800c660(0x340, 2);
    D_03004b10.WINOUT = (WINOUT_OUT_BG1 | WINOUT_OUT_BG2 | WINOUT_OUT_BG3 | WINOUT_OUT_SPRITES | WINOUT_SPRW_BG0 | WINOUT_SPRW_SPRITES | WINOUT_SPRW_BLENDS);
    D_03004b10.BLDMOD = (BLDMOD_BG0_SRC | BLDMOD_BLEND_MODE(BLEND_MODE_ALPHA) | BLDMOD_SPRITES_TGT);
    D_03004b10.COLEV = (COLEV_SRC_PIXEL(0x10) | COLEV_TGT_PIXEL(0x10));

    for (i = 0; i < 4; i++) {
        gBonOdoriInfo->lyrics[i].textSprite = -1;
    }

    gBonOdoriInfo->lyricsY = 0;
    gBonOdoriInfo->lyricsX = 0;
    gBonOdoriInfo->yaguraSprite = func_0804d160(D_03005380, bon_odori_get_anim(BON_ODORI_ANIM_YAGURA_BEAT), 0x7f, 120, 72, 0x8800, 1, 0x7f, 0);
    gBonOdoriInfo->yaguraFrownTimer = 0;
    gBonOdoriInfo->yaguraNoticedMistake = FALSE;
    bon_odori_init_donpans();
    gBonOdoriInfo->srcObjPal = bon_odori_obj_palettes[gBonOdoriInfo->version];
    gBonOdoriInfo->srcBgPal = bon_odori_bg_palettes[gBonOdoriInfo->version];
    func_08001ec4(0x0C, 7, gBonOdoriInfo->srcObjPal, 0, gBonOdoriInfo->darkObjPalBuf[0]);
    func_08001ec4(0x14, 7, gBonOdoriInfo->srcBgPal, 0, gBonOdoriInfo->darkBgPalBuf[0]);
    gameplay_set_input_buttons(A_BUTTON, 0);
    gBonOdoriInfo->playerClapTimer = 0;
}


// [func_08020a48] ENGINE Func_11 - STUB
void bon_odori_engine_event_stub(void) {
}


// [func_08020a4c] Display Text
void bon_odori_lyrics_display_line(const char *text, u32 line, u32 hAlign) {
    struct BonOdoriText *lyricObj;
    s32 x, y;

    lyricObj = &gBonOdoriInfo->lyrics[line];

    if (lyricObj->textSprite >= 0) {
        func_08004d44(gBonOdoriInfo->unk4, lyricObj->anim);
        func_0804d504(D_03005380, lyricObj->textSprite);
        func_0804d504(D_03005380, lyricObj->highlightSprite);
        lyricObj->textSprite = -1;
    }

    if (text != NULL) {
        struct Animation *anim;

        switch (hAlign) {
            case BON_LYRICS_ALIGNMENT_CENTRE:
                anim = func_08004b98(gBonOdoriInfo->unk4, text, 0, 7);
                break;
            case BON_LYRICS_ALIGNMENT_LEFT:
                anim = func_08004c0c(gBonOdoriInfo->unk4, text, 0, 7);
                break;
            case BON_LYRICS_ALIGNMENT_RIGHT:
                anim = func_08004c50(gBonOdoriInfo->unk4, text, 0, 7);
                break;
        }

        x = bon_odori_text_x_offsets[hAlign];
        y = (line * 24) + 32;

        lyricObj->textSprite = func_0804d160(D_03005380, anim, 0, x, y, 0x4100, 0, 0, 0);
        func_0804d8c4(D_03005380, lyricObj->textSprite, BON_LYRICS_NORMAL_PALETTE);
        func_0804db44(D_03005380, lyricObj->textSprite, &gBonOdoriInfo->lyricsX, &gBonOdoriInfo->lyricsY);

        lyricObj->highlightSprite = func_0804d294(D_03005380, anim, 0, x, y, 0x4100, 0, 0, 0x8000, 8);
        func_0804db44(D_03005380, lyricObj->highlightSprite, &gBonOdoriInfo->lyricsX, &gBonOdoriInfo->lyricsY);

        lyricObj->anim = anim;
        lyricObj->width = func_0804ddb0(D_03005380, lyricObj->textSprite, 24);

        switch (hAlign) {
            case BON_LYRICS_ALIGNMENT_CENTRE:
                lyricObj->leftEdge = x - (lyricObj->width / 2);
                break;
            case BON_LYRICS_ALIGNMENT_LEFT:
                lyricObj->leftEdge = x;
                break;
            case BON_LYRICS_ALIGNMENT_RIGHT:
                lyricObj->leftEdge = x - lyricObj->width;
                break;
        }
    }
}


// [func_08020be4] ENGINE Func_00 - Set Target Lyrics (by Vertical Position)
void bon_odori_lyrics_set_current_line(u32 line) {
    gBonOdoriInfo->currentLyric = line;
}


// [func_08020bf4] ENGINE Func_01 - Display Text (Centre)
void bon_odori_lyrics_display_centre(const char *text) {
    bon_odori_lyrics_display_line(text, gBonOdoriInfo->currentLyric, BON_LYRICS_ALIGNMENT_CENTRE);
}


// [func_08020c0c] ENGINE Func_02 - Display Text (Left)
void bon_odori_lyrics_display_left(const char *text) {
    bon_odori_lyrics_display_line(text, gBonOdoriInfo->currentLyric, BON_LYRICS_ALIGNMENT_LEFT);
}


// [func_08020c24] ENGINE Func_03 - Display Text (Right)
void bon_odori_lyrics_display_right(const char *text) {
    bon_odori_lyrics_display_line(text, gBonOdoriInfo->currentLyric, BON_LYRICS_ALIGNMENT_RIGHT);
}


// [func_08020c3c] ENGINE Func_04 - Set Lyrics Y Offset
void bon_odori_lyrics_offset_y(s32 y) {
    gBonOdoriInfo->lyricsY = -y;
}


// [func_08020c4c] Hide Lyric Highlights
void bon_odori_lyrics_finish_highlight(u32 line) {
    struct BonOdoriText *lyricObj;

    func_0800c604(0);
    lyricObj = &gBonOdoriInfo->lyrics[line];
    func_0804d770(D_03005380, lyricObj->highlightSprite, FALSE);
    func_0804d8c4(D_03005380, lyricObj->textSprite, BON_LYRICS_HIGHLIGHT_PALETTE);
}


// [func_08020c8c] ENGINE Func_05 - Highlight Text
void bon_odori_lyrics_start_highlight(u32 duration) {
    struct BonOdoriText *lyricObj;
    s32 initX, targetX, y;
    s32 task;

    lyricObj = &gBonOdoriInfo->lyrics[gBonOdoriInfo->currentLyric];

    if (lyricObj->textSprite < 0) return;

    func_0804d770(D_03005380, lyricObj->highlightSprite, TRUE);

    initX = -lyricObj->leftEdge;
    targetX = initX - lyricObj->width;

    y = gBonOdoriInfo->lyricsY - 24;
    y -= gBonOdoriInfo->currentLyric * 24;
    D_03004b10.BG_OFS[BG_LAYER_0].y = y;

    task = func_0800c4b0(1, beats_to_ticks(duration), &D_03004b10.BG_OFS[BG_LAYER_0].x, initX, targetX);
    run_func_after_task(task, bon_odori_lyrics_finish_highlight, gBonOdoriInfo->currentLyric);
}


// [func_08020d20] ENGINE Func_06 - Lighten Screen (Gradual)
void bon_odori_screen_lighten(u32 duration) {
    func_08001fe0(get_current_mem_id(), beats_to_ticks(duration), 7, gBonOdoriInfo->darkBgPalBuf[0], gBonOdoriInfo->srcBgPal, BG_PALETTE_BUFFER(0));
    func_08001fe0(get_current_mem_id(), beats_to_ticks(duration), 7, gBonOdoriInfo->darkObjPalBuf[0], gBonOdoriInfo->srcObjPal, OBJ_PALETTE_BUFFER(0));
}


// [func_08020da0] ENGINE Func_07 - Darken Screen (Gradual)
void bon_odori_screen_darken(u32 duration) {
    func_08001fe0(get_current_mem_id(), beats_to_ticks(duration), 7, gBonOdoriInfo->srcBgPal, gBonOdoriInfo->darkBgPalBuf[0], BG_PALETTE_BUFFER(0));
    func_08001fe0(get_current_mem_id(), beats_to_ticks(duration), 7, gBonOdoriInfo->srcObjPal, gBonOdoriInfo->darkObjPalBuf[0], OBJ_PALETTE_BUFFER(0));
}


// [func_08020e1c] ENGINE Func_08 - Set Palette to Black
void bon_odori_screen_set_black(void) {
    dma3_fill(0, BG_PALETTE_BUFFER(0), 0xe0, 0x10, 0x200);
    dma3_fill(0, OBJ_PALETTE_BUFFER(0), 0xe0, 0x10, 0x200);
}


// [func_08020e50] ENGINE Func_09 - Lighten Screen (Instant)
void bon_odori_screen_set_light(void) {
    dma3_set(gBonOdoriInfo->srcBgPal, BG_PALETTE_BUFFER(0), 0xe0, 0x10, 0x200);
    dma3_set(gBonOdoriInfo->srcObjPal, OBJ_PALETTE_BUFFER(0), 0xe0, 0x10, 0x200);
}


// [func_08020e90] ENGINE Func_0A - Darken Screen (Instant)
void bon_odori_screen_set_dark(void) {
    dma3_set(&gBonOdoriInfo->darkBgPalBuf[0], BG_PALETTE_BUFFER(0), 0xe0, 0x10, 0x200);
    dma3_set(&gBonOdoriInfo->darkObjPalBuf[0], OBJ_PALETTE_BUFFER(0), 0xe0, 0x10, 0x200);
}


// [func_08020ed4] ENGINE Func_0F - Test Player Inputs
void bon_odori_start_testing_inputs(void) {
    gBonOdoriInfo->mistimedClaps = 0;
}


// [func_08020ee8] ENGINE Func_10 - React to Player Inputs
void bon_odori_finish_testing_inputs(void) {
    if (gBonOdoriInfo->mistimedClaps != 0) {
        gBonOdoriInfo->donpanEmoteTimer = 3;
        gBonOdoriInfo->donpanEmoteAnim = DONPAN_ANIM_GLARE;
        beatscript_enable_loops();
    } else {
        gBonOdoriInfo->donpanEmoteTimer = 3;
        do {
            gBonOdoriInfo->donpanEmoteAnim = (agb_random(2) != 0) ? DONPAN_ANIM_HAPPY : DONPAN_ANIM_VERY_HAPPY;
        } while (0);
        gBonOdoriInfo->yaguraFrownTimer = 0;
        gBonOdoriInfo->yaguraNoticedMistake = FALSE;
    }
}


// [func_08020f48] MAIN - Update
void bon_odori_engine_update(void) {
    if (gBonOdoriInfo->playerClapTimer != 0) {
        gBonOdoriInfo->playerClapTimer--;
        if (gBonOdoriInfo->playerClapTimer == 0) {
            gameplay_set_input_buttons(A_BUTTON, 0);
        }
    }
    bon_odori_update_donpans();
    if (gBonOdoriInfo->yaguraFrownTimer != 0) {
        gBonOdoriInfo->yaguraFrownTimer--;
    }
}


// [func_08020f8c] MAIN - Close
void bon_odori_engine_stop(void) {
    scene_disable_obj_windows();
}


// [func_08020f98] CUE - Spawn
void bon_odori_cue_spawn(struct Cue *cue, struct BonOdoriCue *info, u32 clapAnim) {
    info->type = clapAnim;
    gBonOdoriInfo->currentClapAnim = clapAnim;
}


// [func_08020fb0] CUE - Update
u32 bon_odori_cue_update(struct Cue *cue, struct BonOdoriCue *info, u32 runningTime, u32 duration) {
    if (runningTime > beats_to_ticks(0x30)) {
        return TRUE;
    } else {
        return FALSE;
    }
}


// [func_08020fcc] CUE - Despawn
void bon_odori_cue_despawn(struct Cue *cue, struct BonOdoriCue *info) {
}


// [func_08020fd0] CUE - Hit
void bon_odori_cue_hit(struct Cue *cue, struct BonOdoriCue *info, u32 pressed, u32 released) {
    bon_odori_set_player_anim(info->type);
    play_sound(&s_HC_seqData);
}


// [func_08020fe8] CUE - Barely
void bon_odori_cue_barely(struct Cue *cue, struct BonOdoriCue *info, u32 pressed, u32 released) {
    bon_odori_set_player_anim(info->type);
    play_sound(&s_tebyoushi_pati_seqData);
    gBonOdoriInfo->yaguraNoticedMistake = TRUE;
}


// [func_0802100c] CUE - Miss
void bon_odori_cue_miss(struct Cue *cue, struct BonOdoriCue *info) {
    gBonOdoriInfo->mistimedClaps++;
    beatscript_enable_loops();
    gBonOdoriInfo->yaguraNoticedMistake = TRUE;
}


// [func_08021034] MAIN - Input Event
void bon_odori_input_event(u32 pressed, u32 released) {
    gBonOdoriInfo->playerClapTimer = beats_to_ticks(6);
    gameplay_set_input_buttons(0, 0);
    bon_odori_set_player_anim(gBonOdoriInfo->currentClapAnim);
    gBonOdoriInfo->mistimedClaps++;
    play_sound(&s_HC_seqData);
}


// [func_08021084] COMMON Func_00 - Beat Animation
void bon_odori_common_beat_animation(u32 arg) {
    const struct Animation *anim;
    u32 i;

    for (i = 0; i < 4; i++) {
        if (gBonOdoriInfo->donpanAnimTimers[i] == 0) {
            anim = bon_odori_get_donpan_anim(DONPAN_ANIM_BEAT, i);
            if ((i < 3) && (gBonOdoriInfo->donpanEmoteTimer != 0)) {
                anim = bon_odori_get_donpan_anim(gBonOdoriInfo->donpanEmoteAnim, i);
            }
            func_0804d8f8(D_03005380, gBonOdoriInfo->donpanSprites[i], anim, 0, 1, 0x7f, 0);
        }
    }

    if (gBonOdoriInfo->yaguraFrownTimer == 0) {
        if (gBonOdoriInfo->yaguraNoticedMistake) {
            func_0804d8f8(D_03005380, gBonOdoriInfo->yaguraSprite, bon_odori_get_anim(BON_ODORI_ANIM_YAGURA_FROWN), 0, 1, 0x7f, 0);
            gBonOdoriInfo->yaguraFrownTimer = beats_to_ticks(0x24);
            gBonOdoriInfo->yaguraNoticedMistake = FALSE;
        } else {
            func_0804d8f8(D_03005380, gBonOdoriInfo->yaguraSprite, bon_odori_get_anim(BON_ODORI_ANIM_YAGURA_BEAT), 0, 1, 0x7f, 0);
        }
    }

    if (gBonOdoriInfo->donpanEmoteTimer != 0) {
        gBonOdoriInfo->donpanEmoteTimer--;
    }
}


// [func_08021188] COMMON Func_01 - STUB
void bon_odori_common_display_text(u32 arg) {
}


// [func_0802118c] COMMON Func_02 - STUB
void bon_odori_common_init_tutorial(const struct Scene *skipDest) {
}