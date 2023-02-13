.section .rodata
.syntax unified

.include "include/gba.inc"
.include "include/bs_riq.inc"
.include "include/bs/drum_studio.inc"

load_drum_studio_labels


/* Script Data - Drum Lesson (Short 6) */


@ Dialogue
glabel D_08060fa0
.ascii "�悭�����ă}�l���ĂˁB\n"
.ascii "�D���ȃ^�C�~���O�łǂ����B\n"
.ascii "���t���~�߂�ƁA\n"
.asciz "����{�������郈�I"
.balign 4, 0


@ Pattern
glabel D_08060ff8
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    return


@ Pattern Start
glabel D_0806104c
    spawn_cue CUE_KICK_R
    rest 21
    return


@ Dialogue
glabel D_08061070
.ascii "\n"
.ascii "�P�J���A�����ӂ��郈�I\n"
.ascii "�킩�邩�ȁH\n"
.asciz "�q���g�F�L�b�N�͑O�Ɠ���"
.balign 4, 0


@ Pattern
glabel D_080610b0
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_SNARE_L
    spawn_cue CUE_KICK_R
    rest 24
    return


@ Dialogue
glabel D_08061110
.ascii "����ɂP�J���A\n"
.ascii "�����ӂ��郈�I\n"
.ascii "�킩�邩�ȁH\n"
.asciz "�q���g�F�L�b�N�͑O�Ɠ���"
.balign 4, 0


@ Pattern
glabel D_08061154
    spawn_cue CUE_SNARE_L
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_SNARE_L
    spawn_cue CUE_KICK_R
    rest 24
    return


@ Dialogue
glabel D_080611c0
.ascii "�܂��܂��P�J���A\n"
.ascii "�����ӂ��郈�I\n"
.ascii "�킩�邩�ȁH\n"
.asciz "�q���g�F\x8f\x5c���{�^����"
.balign 4, 0


@ Pattern
glabel D_08061204
    spawn_cue CUE_SNARE_L
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_HIHAT
    rest 12
    spawn_cue CUE_SNARE_L
    spawn_cue CUE_KICK_R
    rest 24
    return


@ Dialogue
glabel D_08061288
.ascii "\n"
.ascii "�����Ă܂��Ȃ�ƁI\n"
.ascii "�P�J���A�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern Start
glabel D_080612c4
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_HIHAT
    rest 9
    return


@ Dialogue
glabel D_08061300
.ascii "\n"
.ascii "����܂��Ȃ�ƁI\n"
.ascii "�m���m�������I\n"
.asciz "�ł��邩�ȁH\n"
.balign 4, 0


@ Pattern
glabel D_08061330
    spawn_cue CUE_SNARE_L
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_HIHAT
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_HIHAT
    rest 12
    spawn_cue CUE_SNARE_L
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_HIHAT
    rest 12
    return

.end