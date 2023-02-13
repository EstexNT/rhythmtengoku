.section .rodata
.syntax unified

.include "include/gba.inc"
.include "include/bs_riq.inc"
.include "include/bs/drum_studio.inc"

load_drum_studio_labels


/* Script Data - Drum Lesson (Long 1) */


@ Dialogue
glabel D_080639f8
.ascii "�悭�����ă}�l���ĂˁB\n"
.ascii "�D���ȃ^�C�~���O�łǂ����B\n"
.ascii "���t���~�߂�ƁA\n"
.asciz "����{�������郈�I"
.balign 4, 0


@ Pattern
glabel D_08063a50
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Pattern Start
glabel D_08063b34
    spawn_cue CUE_KICK_R
    rest 21
    return


@ Dialogue
glabel D_08063b58
.ascii "\n"
.ascii "�V���o���ŃL�b�`����\n"
.ascii "�܂Ƃ߂Ă������l�I\n"
.asciz "����́A�ł����l�H\n"
.balign 4, 0


@ Pattern Start
glabel D_08063b98
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 21
    return


@ Dialogue
glabel D_08063bc8
.ascii "\n"
.ascii "�`���b�g�����@�����郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern
glabel D_08063bf0
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Dialogue
glabel D_08063cd4
.ascii "\n"
.ascii "�P�����A�����ӂ��郈�I\n"
.ascii "���ƃJ���^��������\n"
.asciz "����΂��ăl�I\n"
.balign 4, 0


@ Pattern
glabel D_08063d14
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_SNARE_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return

.end