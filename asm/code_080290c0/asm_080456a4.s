asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_080456a4 \n\
/* 080456a4 */ PUSH {LR} \n\
/* 080456a6 */ MOVS R0, 0x0 @ Set R0 to 0x0 \n\
/* 080456a8 */ BL func_0800c604 \n\
/* 080456ac */ BL func_08006d80 \n\
/* 080456b0 */ BL func_0800c3b8 \n\
/* 080456b4 */ LSLS R0, R0, 0x10 \n\
/* 080456b6 */ LSRS R0, R0, 0x10 \n\
/* 080456b8 */ LDR R1, =0x089ea864 @ !PossiblePointer \n\
/* 080456ba */ BL func_080087b4 \n\
/* 080456be */ LDR R1, =0x08045675 @ !PossiblePointer \n\
/* 080456c0 */ MOVS R2, 0x0 @ Set R2 to 0x0 \n\
/* 080456c2 */ BL func_08005d38 \n\
/* 080456c6 */ POP {R0} \n\
/* 080456c8 */ BX R0 \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
