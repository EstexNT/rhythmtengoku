asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_08047f28 \n\
/* 08047f28 */ PUSH {LR} \n\
/* 08047f2a */ LDR R1, =0x08a9d378 @ !PossiblePointer \n\
/* 08047f2c */ MOVS R0, 0x2 @ Set R0 to 0x2 \n\
/* 08047f2e */ BL func_0800267c \n\
/* 08047f32 */ POP {R0} \n\
/* 08047f34 */ BX R0 \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
