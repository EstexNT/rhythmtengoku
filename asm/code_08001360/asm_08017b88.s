asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_08017b88 \n\
/* 08017b88 */ LDR R1, =0x030046a4 @ !PossiblePointer \n\
/* 08017b8a */ LDR R1, [R1] \n\
/* 08017b8c */ ADDS R1, 0x5C @ Add 0x5C to R1 \n\
/* 08017b8e */ STRB R0, [R1] \n\
/* 08017b90 */ BX LR \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");