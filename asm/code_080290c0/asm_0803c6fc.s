asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_0803c6fc \n\
/* 0803c6fc */ LDR R1, =0x030055d0 @ !PossiblePointer \n\
/* 0803c6fe */ LDR R1, [R1] \n\
/* 0803c700 */ LDR R2, =0x000002ee @ !PossiblePointer \n\
/* 0803c702 */ ADDS R1, R1, R2 @ Set R1 to R1 + R2 \n\
/* 0803c704 */ STRB R0, [R1] \n\
/* 0803c706 */ BX LR \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
