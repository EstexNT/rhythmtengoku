asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_08037d00 \n\
/* 08037d00 */ LDR R1, =0x030055d0 @ !PossiblePointer \n\
/* 08037d02 */ LDR R1, [R1] \n\
/* 08037d04 */ STR R0, [R1, 0x40] \n\
/* 08037d06 */ BX LR \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
