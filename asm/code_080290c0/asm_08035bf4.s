asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_08035bf4 \n\
/* 08035bf4 */ LDR R0, =0x030055d0 @ !PossiblePointer \n\
/* 08035bf6 */ LDR R1, [R0] \n\
/* 08035bf8 */ LDRH R0, [R1, 0x28] \n\
/* 08035bfa */ ADDS R0, 0x1 @ Add 0x1 to R0 \n\
/* 08035bfc */ STRH R0, [R1, 0x28] \n\
/* 08035bfe */ BX LR \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
