asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_08019128 \n\
/* 08019128 */ LDR R1, =0x03001334 @ !PossiblePointer \n\
/* 0801912a */ STR R0, [R1] \n\
/* 0801912c */ BX LR \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");