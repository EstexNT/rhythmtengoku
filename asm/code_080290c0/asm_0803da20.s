asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_0803da20 \n\
/* 0803da20 */ LDR R1, =0x089e72cc @ !PossiblePointer \n\
/* 0803da22 */ LSLS R0, R0, 0x2 \n\
/* 0803da24 */ ADDS R0, R0, R1 @ Set R0 to R0 + R1 \n\
/* 0803da26 */ LDR R1, =0x030055d0 @ !PossiblePointer \n\
/* 0803da28 */ LDR R1, [R1] \n\
/* 0803da2a */ LDRB R1, [R1] \n\
/* 0803da2c */ LDR R0, [R0] \n\
/* 0803da2e */ LSLS R1, R1, 0x2 \n\
/* 0803da30 */ ADDS R1, R1, R0 @ Set R1 to R1 + R0 \n\
/* 0803da32 */ LDR R0, [R1] \n\
/* 0803da34 */ BX LR \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
