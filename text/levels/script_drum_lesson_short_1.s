.section .rodata
.syntax unified

.include "include/gba.inc"
.include "include/bs_riq.inc"
.include "include/bs/drum_studio.inc"

load_drum_studio_labels


/* Script Data - Drum Lesson (Short 1) */


@ Dialogue
glabel D_0805f114
.ascii "�悭�����ă}�l���ĂˁB\n"
.ascii "�D���ȃ^�C�~���O�łǂ����B\n"
.ascii "���t���~�߂�ƁA\n"
.asciz "����{�������郈�I"
.balign 4, 0


@ Pattern
glabel D_0805f16c
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 24
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Pattern Start
glabel D_0805f1c0
    spawn_cue CUE_KICK_R
    rest 21
    return


@ Dialogue
glabel D_0805f1e4
.ascii "\n"
.ascii "�P�J���A�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern
glabel D_0805f20c
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Dialogue
glabel D_0805f278
.ascii "\n"
.ascii "����ɂP�J���A\n"
.ascii "�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern
glabel D_0805f2a8
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Dialogue
glabel D_0805f32c
.ascii "\n"
.ascii "�܂��܂��P�J���A\n"
.ascii "�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern
glabel D_0805f35c
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_SNARE_L
    rest 12
    return


@ Dialogue
glabel D_0805f3f8
.ascii "\n"
.ascii "�����Ă܂��Ȃ�ƁI\n"
.ascii "�P�J���A�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern Start
glabel D_0805f434
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 9
    return


@ Dialogue
glabel D_0805f470
.ascii "\n"
.ascii "����܂��Ȃ�ƁI�I\n"
.ascii "�P�J���A�����ӂ��郈�I\n"
.asciz "�킩�邩�ȁH\n"
.balign 4, 0


@ Pattern
glabel D_0805f4ac
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_SNARE_R
    rest 12
    return

.end