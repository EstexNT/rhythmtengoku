asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_0803c5cc \n\
/* 0803c5cc */ PUSH {LR} \n\
/* 0803c5ce */ LDR R0, =0x03005380 @ !PossiblePointer \n\
/* 0803c5d0 */ LDR R0, [R0] \n\
/* 0803c5d2 */ LDR R1, =0x030055d0 @ !PossiblePointer \n\
/* 0803c5d4 */ LDR R1, [R1] \n\
/* 0803c5d6 */ MOVS R2, 0x4 @ Set R2 to 0x4 \n\
/* 0803c5d8 */ LDRSH R1, [R1, R2] \n\
/* 0803c5da */ MOVS R2, 0x1 @ Set R2 to 0x1 \n\
/* 0803c5dc */ BL func_0804d770 \n\
/* 0803c5e0 */ LDR R0, =0x08a9c090 @ !PossiblePointer \n\
/* 0803c5e2 */ BL func_08002634 \n\
/* 0803c5e6 */ POP {R0} \n\
/* 0803c5e8 */ BX R0 \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
