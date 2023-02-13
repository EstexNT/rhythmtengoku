.section .rodata
.syntax unified

.include "include/gba.inc"
.include "include/bs_riq.inc"
.include "include/bs/drum_studio.inc"

load_drum_studio_labels


/* Script Data - Drum Lesson (Short 7) */


@ Dialogue
glabel D_08060310
.ascii "�悭�����ă}�l���ĂˁB\n"
.ascii "�D���ȃ^�C�~���O�łǂ����B\n"
.ascii "���t���~�߂�ƁA\n"
.asciz "����{�������郈�I"
.balign 4, 0


@ Pattern
glabel D_08060368
    spawn_cue CUE_SNARE_L
    rest 24
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Pattern Start
glabel D_080603c8
    spawn_cue CUE_KICK_R
    rest 21
    return


@ Dialogue
glabel D_080603ec
.ascii "\n"
.ascii "�P�J���A�����ӂ��郈�I\n"
.ascii "�킩�邩�ȁH\n"
.asciz "�q���g�FR�{�^��"
.balign 4, 0


@ Pattern Start
glabel D_08060424
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 21
    return


@ Dialogue
glabel D_08060454
.ascii "\n"
.ascii "����ɂP�J���A\n"
.ascii "�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern
glabel D_08060484
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
glabel D_080604f0
.ascii "\n"
.ascii "�܂��܂��P�J���A\n"
.ascii "�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern Start
glabel D_08060520
    spawn_cue CUE_KICK_R
    spawn_cue CUE_CRASH
    rest 18
    spawn_cue CUE_KICK_R
    rest 3
    return


@ Dialogue
glabel D_08060568
.ascii "\n"
.ascii "�����Ă܂��Ȃ�ƁI\n"
.ascii "�P�J���A�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern
glabel D_080605a4
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 18
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Dialogue
glabel D_08060628
.ascii "\n"
.ascii "����܂��Ȃ�ƁI�I\n"
.ascii "�P�J���A�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern
glabel D_08060664
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Dialogue
glabel D_08060700
.ascii "\n"
.ascii "�܂��܂��Ȃ�ƁI�I\n"
.ascii "�P�J���A�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern
glabel D_0806073c
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_KICK_L
    rest 12
    spawn_cue CUE_SNARE_R
    rest 24
    return


@ Dialogue
glabel D_080607f0
.ascii "����ł������I�I\n"
.ascii "�P�J���A�����ӂ��郈�I\n"
.ascii "�킩�邩�ȁH\n"
.asciz "�q���g�F����"
.balign 4, 0


@ Pattern
glabel D_08060834
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_KICK_L
    rest 11
    spawn_cue CUE_SNARE_R
    rest 1
    rest 1
    spawn_cue CUE_SNARE_L
    rest 23
    return

.end