asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_0801e908 \n\
/* 0801e908 */ LDR R2, [PC, 0x3F0] @ 0x0801ecfc \n\
/* 0801e90a */ LSLS R0, R0, 0xC \n\
/* 0801e90c */ PUSH {LR} \n\
/* 0801e90e */ LDR R0, [PC, 0xC] @ 0x0801e91c \n\
/* 0801e910 */ LDR R0, [R0] \n\
/* 0801e912 */ LDR R0, [R0, 0x8] \n\
/* 0801e914 */ CMP R0, 0x0 @ Compare R0 and 0x0 \n\
/* 0801e916 */ BNE branch_0801e920 \n\
/* 0801e918 */ MOVS R0, 0x0 @ Set R0 to 0x0 \n\
/* 0801e91a */ B branch_0801e922 \n\
/* 0801e91c */ MOV R12, R4 @ Set R12 to R4 \n\
/* 0801e91e */ LSLS R0, R0, 0xC \n\
 \n\
branch_0801e920: \n\
/* 0801e920 */ MOVS R0, 0x1 @ Set R0 to 0x1 \n\
 \n\
branch_0801e922: \n\
/* 0801e922 */ POP {R1} \n\
/* 0801e924 */ BX R1 \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");