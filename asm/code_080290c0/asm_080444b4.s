asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_080444b4 \n\
/* 080444b4 */ PUSH {LR} \n\
/* 080444b6 */ MOVS R0, 0x0 @ Set R0 to 0x0 \n\
/* 080444b8 */ BL func_0800c604 \n\
/* 080444bc */ BL func_08017578 \n\
/* 080444c0 */ POP {R0} \n\
/* 080444c2 */ BX R0 \n\
.balign 4, 0 \n\
.syntax divided");
