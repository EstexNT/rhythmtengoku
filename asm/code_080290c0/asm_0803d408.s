asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_0803d408 \n\
/* 0803d408 */ LDR R1, =0x030055d0 @ !PossiblePointer \n\
/* 0803d40a */ LDR R1, [R1] \n\
/* 0803d40c */ STRB R0, [R1, 0x1B] \n\
/* 0803d40e */ BX LR \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
