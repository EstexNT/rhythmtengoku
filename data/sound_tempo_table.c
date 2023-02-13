#include "global.h"
#include "sound.h"
#include "src/code_080102d0.h"

extern const struct SequenceData s_aimu_bgm_seqData;
extern const struct SequenceData s_bon_odori_bgm_seqData;
extern const struct SequenceData s_bon_dance_bgm_seqData;
extern const struct SequenceData s_emanikanto_bgm_seqData;
extern const struct SequenceData s_manza_bgm_seqData;
extern const struct SequenceData s_menu_bgm_seqData;
extern const struct SequenceData s_naniwa_bgm_seqData;
extern const struct SequenceData s_poly_bgm_seqData;
extern const struct SequenceData s_shibafu1_bgm_seqData;
extern const struct SequenceData s_shibafu2_bgm_seqData;
extern const struct SequenceData s_shuji_bgm1_seqData;
extern const struct SequenceData s_shuji_bgm2_seqData;
extern const struct SequenceData s_shuji_bgm3_seqData;
extern const struct SequenceData s_shuji_bgm_end_seqData;
extern const struct SequenceData s_tapdance_bgm_seqData;
extern const struct SequenceData s_tapdance_ska_bgm_seqData;
extern const struct SequenceData s_tebyoushi_bgm_seqData;
extern const struct SequenceData s_tebyoushi_dexy_bgm_seqData;
extern const struct SequenceData s_trex_bgm_seqData;
extern const struct SequenceData s_trexnew_bgm1_seqData;
extern const struct SequenceData s_trexnew_bgm2_seqData;
extern const struct SequenceData s_4beat_bgm_seqData;
extern const struct SequenceData s_toss_bgm_seqData;
extern const struct SequenceData s_toss_bgm_end_seqData;
extern const struct SequenceData s_title_bgm_seqData;
extern const struct SequenceData s_koihoney_bgm_seqData;
extern const struct SequenceData s_wish_bgm_seqData;
extern const struct SequenceData L8_pat_intro_seqData;
extern const struct SequenceData L8_pat01_seqData;
extern const struct SequenceData L8_pat02_seqData;
extern const struct SequenceData L8_pat03_seqData;
extern const struct SequenceData L8_pat04_seqData;
extern const struct SequenceData L8_pat05_seqData;
extern const struct SequenceData L8_pat06_seqData;
extern const struct SequenceData L8_pat07_seqData;
extern const struct SequenceData L8_pat08_seqData;
extern const struct SequenceData L8_pat09_seqData;
extern const struct SequenceData L8_pat10_seqData;
extern const struct SequenceData L8_pat11_seqData;
extern const struct SequenceData L8_pat12_seqData;
extern const struct SequenceData L8_pat_end_seqData;
extern const struct SequenceData L8_pat_honki_seqData;
extern const struct SequenceData s_mario1_seqData;
extern const struct SequenceData s_mario2_seqData;
extern const struct SequenceData s_mario1_2_seqData;
extern const struct SequenceData s_mario2_4_seqData;
extern const struct SequenceData s_mario_melo1_seqData;
extern const struct SequenceData s_mario_melo2_seqData;
extern const struct SequenceData s_guntai1_seqData;
extern const struct SequenceData s_guntai2_seqData;
extern const struct SequenceData s_uma_bgm1_seqData;
extern const struct SequenceData s_uma_bgm2_seqData;
extern const struct SequenceData s_uma_bgm3_seqData;
extern const struct SequenceData s_uma_bgm4_seqData;
extern const struct SequenceData s_mitubati_seqData;
extern const struct SequenceData Lesson1_seqData;
extern const struct SequenceData L1_pat01_seqData;
extern const struct SequenceData L1_pat02_seqData;
extern const struct SequenceData L1_pat03_seqData;
extern const struct SequenceData L1_pat04_seqData;
extern const struct SequenceData L1_pat05_seqData;
extern const struct SequenceData L1_pat06_seqData;
extern const struct SequenceData L1_pat07_seqData;
extern const struct SequenceData L1_pat08_seqData;
extern const struct SequenceData L1_pat09_seqData;
extern const struct SequenceData L1_pat10_seqData;
extern const struct SequenceData L1_pat11_seqData;
extern const struct SequenceData L1_pat12_seqData;
extern const struct SequenceData L1_pat13_seqData;
extern const struct SequenceData L1_pat14_seqData;
extern const struct SequenceData L1_pat15_seqData;
extern const struct SequenceData L1_pat16_seqData;
extern const struct SequenceData L2_pat00_seqData;
extern const struct SequenceData L2_pat01_seqData;
extern const struct SequenceData L2_pat02_seqData;
extern const struct SequenceData L2_pat03_seqData;
extern const struct SequenceData L2_pat04_seqData;
extern const struct SequenceData L2_pat05_seqData;
extern const struct SequenceData L2_pat06_seqData;
extern const struct SequenceData L2_pat07_seqData;
extern const struct SequenceData L2_pat08_seqData;
extern const struct SequenceData L2_pat09_seqData;
extern const struct SequenceData L2_pat10_seqData;
extern const struct SequenceData L2_pat11_seqData;
extern const struct SequenceData L2_pat12_seqData;
extern const struct SequenceData L2_pat13_seqData;
extern const struct SequenceData L2_pat14_seqData;
extern const struct SequenceData L2_pat15_seqData;
extern const struct SequenceData L2_pat16_seqData;
extern const struct SequenceData L3_intro_seqData;
extern const struct SequenceData L3_C32_seqData;
extern const struct SequenceData L3_C32_no_swing_seqData;
extern const struct SequenceData L3_C33_seqData;
extern const struct SequenceData L3_C34_seqData;
extern const struct SequenceData L3_C35_seqData;
extern const struct SequenceData L3_C36_seqData;
extern const struct SequenceData L3_C37_seqData;
extern const struct SequenceData L3_C38_seqData;
extern const struct SequenceData L3_C39_seqData;
extern const struct SequenceData L3_C40_seqData;
extern const struct SequenceData L3_C41_end_seqData;
extern const struct SequenceData s_rabbit_bgm_seqData;
extern const struct SequenceData s_rabbit_bgm_studio_seqData;
extern const struct SequenceData s_rat_bgm1_seqData;
extern const struct SequenceData s_rat_bgm2_seqData;
extern const struct SequenceData s_rat_bgm_studio_seqData;
extern const struct SequenceData s_intro_pat1_seqData;
extern const struct SequenceData s_intro_pat2_seqData;
extern const struct SequenceData s_intro_pat3_seqData;
extern const struct SequenceData s_dr_sam_bgm_seqData;
extern const struct SequenceData s_kawasemi_bgm_seqData;
extern const struct SequenceData s_f_dummy_seqData;
extern const struct SequenceData s_rap_bgm_renshu_seqData;
extern const struct SequenceData s_rap_bgm_seqData;
extern const struct SequenceData s_rap_jazz_bgm_seqData;
extern const struct SequenceData s_naniwa_bgm_seqData;
extern const struct SequenceData s_puipui_bgm_seqData;
extern const struct SequenceData s_hitmegeton1_bgm_seqData;
extern const struct SequenceData s_hitmegeton2_bgm_seqData;
extern const struct SequenceData s_puipui_intro_bgm_seqData;
extern const struct SequenceData s_check_machine_seqData;
extern const struct SequenceData s_check_trick1_seqData;
extern const struct SequenceData s_check_trick2_seqData;
extern const struct SequenceData s_check_trick3_seqData;
extern const struct SequenceData s_quiz_bgm_seqData;
extern const struct SequenceData s_hanabi_bgm_seqData;
extern const struct SequenceData s_datumo_bgm_seqData;
extern const struct SequenceData s_karate_bgm_seqData;
extern const struct SequenceData s_karate_fan_seqData;
extern const struct SequenceData s_remix_all_bgm_seqData;
extern const struct SequenceData s_drum_lesson_bgm_seqData;
extern const struct SequenceData s_f_lesson_s_seqData;
extern const struct SequenceData s_f_lesson_a_seqData;
extern const struct SequenceData s_f_lesson_b_seqData;
extern const struct SequenceData s_f_lesson_c_seqData;
extern const struct SequenceData s_rap_machine_bgm_seqData;
extern const struct SequenceData s_siryo_bgm_seqData;
extern const struct SequenceData s_counseling_bgm_seqData;
extern const struct SequenceData s_kekka_bgm_good_seqData;
extern const struct SequenceData s_kekka_bgm_common_seqData;
extern const struct SequenceData s_kekka_bgm_bad_seqData;
extern const struct SequenceData s_perfect_fan_seqData;
extern const struct SequenceData s_renshu_bgm1_seqData;
extern const struct SequenceData s_renshu_bgm2_seqData;
extern const struct SequenceData s_renshu_bgm3_seqData;


// [D_089ccccc] Sound Tempo Table (used for game synchronisation)
const struct TempoTable gSoundTempoTable[] = {
    { &s_aimu_bgm_seqData, 119 },
    { &s_bon_odori_bgm_seqData, 121 },
    { &s_bon_dance_bgm_seqData, 121 },
    { &s_emanikanto_bgm_seqData, 160 },
    { &s_manza_bgm_seqData, 155 },
    { &s_menu_bgm_seqData, 152 },
    { &s_naniwa_bgm_seqData, 150 },
    { &s_poly_bgm_seqData, 129 },
    { &s_shibafu1_bgm_seqData, 105 },
    { &s_shibafu2_bgm_seqData, 105 },
    { &s_shuji_bgm1_seqData, 127 },
    { &s_shuji_bgm2_seqData, 161 },
    { &s_shuji_bgm3_seqData, 98 },
    { &s_shuji_bgm_end_seqData, 98 },
    { &s_tapdance_bgm_seqData, 124 },
    { &s_tapdance_ska_bgm_seqData, 165 },
    { &s_tebyoushi_bgm_seqData, 118 },
    { &s_tebyoushi_dexy_bgm_seqData, 108 },
    { &s_trex_bgm_seqData, 120 },
    { &s_trexnew_bgm1_seqData, 135 },
    { &s_trexnew_bgm2_seqData, 135 },
    { &s_4beat_bgm_seqData, 127 },
    { &s_toss_bgm_seqData, 106 },
    { &s_toss_bgm_end_seqData, 106 },
    { &s_title_bgm_seqData, 105 },
    { &s_koihoney_bgm_seqData, 137 },
    { &s_wish_bgm_seqData, 204 },
    { &L8_pat_intro_seqData, 109 },
    { &L8_pat01_seqData, 109 },
    { &L8_pat02_seqData, 109 },
    { &L8_pat03_seqData, 109 },
    { &L8_pat04_seqData, 109 },
    { &L8_pat05_seqData, 109 },
    { &L8_pat06_seqData, 109 },
    { &L8_pat07_seqData, 109 },
    { &L8_pat08_seqData, 109 },
    { &L8_pat09_seqData, 109 },
    { &L8_pat10_seqData, 109 },
    { &L8_pat11_seqData, 109 },
    { &L8_pat12_seqData, 109 },
    { &L8_pat_end_seqData, 109 },
    { &L8_pat_honki_seqData, 109 },
    { &s_mario1_seqData, 70 },
    { &s_mario2_seqData, 140 },
    { &s_mario1_2_seqData, 70 },
    { &s_mario2_4_seqData, 140 },
    { &s_mario_melo1_seqData, 70 },
    { &s_mario_melo2_seqData, 140 },
    { &s_guntai1_seqData, 135 },
    { &s_guntai2_seqData, 120 },
    { &s_uma_bgm1_seqData, 128 },
    { &s_uma_bgm2_seqData, 155 },
    { &s_uma_bgm3_seqData, 155 },
    { &s_uma_bgm4_seqData, 160 },
    { &s_mitubati_seqData, 160 },
    { &Lesson1_seqData, 120 },
    { &L1_pat01_seqData, 120 },
    { &L1_pat02_seqData, 120 },
    { &L1_pat03_seqData, 120 },
    { &L1_pat04_seqData, 120 },
    { &L1_pat05_seqData, 120 },
    { &L1_pat06_seqData, 120 },
    { &L1_pat07_seqData, 120 },
    { &L1_pat08_seqData, 120 },
    { &L1_pat09_seqData, 120 },
    { &L1_pat10_seqData, 120 },
    { &L1_pat11_seqData, 120 },
    { &L1_pat12_seqData, 120 },
    { &L1_pat13_seqData, 120 },
    { &L1_pat14_seqData, 120 },
    { &L1_pat15_seqData, 120 },
    { &L1_pat16_seqData, 120 },
    { &L2_pat00_seqData, 133 },
    { &L2_pat01_seqData, 133 },
    { &L2_pat02_seqData, 133 },
    { &L2_pat03_seqData, 133 },
    { &L2_pat04_seqData, 133 },
    { &L2_pat05_seqData, 133 },
    { &L2_pat06_seqData, 133 },
    { &L2_pat07_seqData, 133 },
    { &L2_pat08_seqData, 133 },
    { &L2_pat09_seqData, 133 },
    { &L2_pat10_seqData, 133 },
    { &L2_pat11_seqData, 133 },
    { &L2_pat12_seqData, 133 },
    { &L2_pat13_seqData, 133 },
    { &L2_pat14_seqData, 133 },
    { &L2_pat15_seqData, 133 },
    { &L2_pat16_seqData, 133 },
    { &L3_intro_seqData, 131 },
    { &L3_C32_seqData, 131 },
    { &L3_C32_no_swing_seqData, 131 },
    { &L3_C33_seqData, 131 },
    { &L3_C34_seqData, 131 },
    { &L3_C35_seqData, 131 },
    { &L3_C36_seqData, 131 },
    { &L3_C37_seqData, 131 },
    { &L3_C38_seqData, 131 },
    { &L3_C39_seqData, 131 },
    { &L3_C40_seqData, 131 },
    { &L3_C41_end_seqData, 131 },
    { &s_rabbit_bgm_seqData, 150 },
    { &s_rabbit_bgm_studio_seqData, 150 },
    { &L3_C34_seqData, 131 },
    { &L3_C39_seqData, 131 },
    { &L3_C40_seqData, 131 },
    { &s_rat_bgm1_seqData, 150 },
    { &s_rat_bgm2_seqData, 150 },
    { &s_rat_bgm_studio_seqData, 150 },
    { &s_intro_pat1_seqData, 150 },
    { &s_intro_pat2_seqData, 150 },
    { &s_intro_pat3_seqData, 150 },
    { &s_dr_sam_bgm_seqData, 118 },
    { &s_kawasemi_bgm_seqData, 120 },
    { &s_f_dummy_seqData, 170 },
    { &s_f_dummy_seqData, 123 },
    { &s_rap_bgm_renshu_seqData, 180 },
    { &s_rap_bgm_seqData, 180 },
    { &s_rap_jazz_bgm_seqData, 180 },
    { &s_naniwa_bgm_seqData, 150 },
    { &s_puipui_bgm_seqData, 160 },
    { &s_hitmegeton1_bgm_seqData, 125 },
    { &s_hitmegeton2_bgm_seqData, 125 },
    { &s_f_dummy_seqData, 90 },
    { &s_f_dummy_seqData, 110 },
    { &s_puipui_intro_bgm_seqData, 160 },
    { &s_f_dummy_seqData, 140 },
    { &s_f_dummy_seqData, 142 },
    { &s_f_dummy_seqData, 140 },
    { &s_check_machine_seqData, 120 },
    { &s_check_trick1_seqData, 120 },
    { &s_check_trick2_seqData, 120 },
    { &s_check_trick3_seqData, 120 },
    { &s_quiz_bgm_seqData, 125 },
    { &s_hanabi_bgm_seqData, 140 },
    { &s_datumo_bgm_seqData, 96 },
    { &s_karate_bgm_seqData, 120 },
    { &s_karate_fan_seqData, 140 },
    { &s_remix_all_bgm_seqData, 140 },
    { &s_drum_lesson_bgm_seqData, 120 },
    { &s_f_lesson_s_seqData, 150 },
    { &s_f_lesson_a_seqData, 150 },
    { &s_f_lesson_b_seqData, 150 },
    { &s_f_lesson_c_seqData, 150 },
    { &s_rap_machine_bgm_seqData, 180 },
    { &s_siryo_bgm_seqData, 130 },
    { &s_counseling_bgm_seqData, 116 },
    { &s_kekka_bgm_good_seqData, 133 },
    { &s_kekka_bgm_common_seqData, 120 },
    { &s_kekka_bgm_bad_seqData, 80 },
    { &s_perfect_fan_seqData, 145 },
    { &s_renshu_bgm1_seqData, 125 },
    { &s_renshu_bgm2_seqData, 125 },
    { &s_renshu_bgm3_seqData, 125 },
    { NULL, 0 }
};