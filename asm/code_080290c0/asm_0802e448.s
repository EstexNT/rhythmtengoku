asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_0802e448 \n\
/* 0802e448 */ PUSH {R4-R6, LR} \n\
/* 0802e44a */ SUB SP, 0xC \n\
/* 0802e44c */ LDR R6, =0x030055d0 @ !PossiblePointer \n\
/* 0802e44e */ LDR R1, [R6] \n\
/* 0802e450 */ MOVS R5, 0x0 @ Set R5 to 0x0 \n\
/* 0802e452 */ STRB R0, [R1] \n\
/* 0802e454 */ BL func_0802e41c \n\
/* 0802e458 */ BL func_0800e0ec \n\
/* 0802e45c */ LDR R0, [R6] \n\
/* 0802e45e */ LDRB R4, [R0] \n\
/* 0802e460 */ CMP R4, 0x1 @ Compare R4 and 0x1 \n\
/* 0802e462 */ BNE branch_0802e4b2 \n\
/* 0802e464 */ STR R5, [SP] \n\
/* 0802e466 */ MOVS R0, 0x1D @ Set R0 to 0x1D \n\
/* 0802e468 */ STR R0, [SP, 0x4] \n\
/* 0802e46a */ STR R4, [SP, 0x8] \n\
/* 0802e46c */ MOVS R0, 0x1 @ Set R0 to 0x1 \n\
/* 0802e46e */ MOVS R1, 0x1 @ Set R1 to 0x1 \n\
/* 0802e470 */ MOVS R2, 0x0 @ Set R2 to 0x0 \n\
/* 0802e472 */ MOVS R3, 0x0 @ Set R3 to 0x0 \n\
/* 0802e474 */ BL func_0800e0a0 \n\
/* 0802e478 */ STR R5, [SP] \n\
/* 0802e47a */ MOVS R0, 0x1E @ Set R0 to 0x1E \n\
/* 0802e47c */ STR R0, [SP, 0x4] \n\
/* 0802e47e */ MOVS R0, 0x2 @ Set R0 to 0x2 \n\
/* 0802e480 */ STR R0, [SP, 0x8] \n\
/* 0802e482 */ MOVS R1, 0x0 @ Set R1 to 0x0 \n\
/* 0802e484 */ MOVS R2, 0x0 @ Set R2 to 0x0 \n\
/* 0802e486 */ MOVS R3, 0x0 @ Set R3 to 0x0 \n\
/* 0802e488 */ BL func_0800e0a0 \n\
/* 0802e48c */ STR R5, [SP] \n\
/* 0802e48e */ MOVS R0, 0x1F @ Set R0 to 0x1F \n\
/* 0802e490 */ STR R0, [SP, 0x4] \n\
/* 0802e492 */ STR R4, [SP, 0x8] \n\
/* 0802e494 */ MOVS R0, 0x3 @ Set R0 to 0x3 \n\
/* 0802e496 */ MOVS R1, 0x0 @ Set R1 to 0x0 \n\
/* 0802e498 */ MOVS R2, 0x0 @ Set R2 to 0x0 \n\
/* 0802e49a */ MOVS R3, 0x0 @ Set R3 to 0x0 \n\
/* 0802e49c */ BL func_0800e0a0 \n\
/* 0802e4a0 */ LDR R1, =0x03004b10 @ !PossiblePointer \n\
/* 0802e4a2 */ ADDS R2, R1, 0x0 @ Set R2 to R1 + 0x0 \n\
/* 0802e4a4 */ ADDS R2, 0x4C @ Add 0x4C to R2 \n\
/* 0802e4a6 */ LDR R0, =0x00003f42 @ !PossiblePointer \n\
/* 0802e4a8 */ STRH R0, [R2] \n\
/* 0802e4aa */ ADDS R1, 0x4E @ Add 0x4E to R1 \n\
/* 0802e4ac */ MOVS R0, 0x80 @ Set R0 to 0x80 \n\
/* 0802e4ae */ LSLS R0, R0, 0x5 \n\
/* 0802e4b0 */ STRH R0, [R1] \n\
 \n\
branch_0802e4b2: \n\
/* 0802e4b2 */ BL func_0802e2f0 \n\
/* 0802e4b6 */ BL func_0802dd08 \n\
/* 0802e4ba */ BL func_0800c3b8 \n\
/* 0802e4be */ LSLS R0, R0, 0x10 \n\
/* 0802e4c0 */ LSRS R0, R0, 0x10 \n\
/* 0802e4c2 */ MOVS R1, 0x1 @ Set R1 to 0x1 \n\
/* 0802e4c4 */ MOVS R2, 0xF0 @ Set R2 to 0xF0 \n\
/* 0802e4c6 */ MOVS R3, 0x1E @ Set R3 to 0x1E \n\
/* 0802e4c8 */ BL func_0800a204 \n\
/* 0802e4cc */ ADDS R4, R0, 0x0 @ Set R4 to R0 + 0x0 \n\
/* 0802e4ce */ MOVS R1, 0x0 @ Set R1 to 0x0 \n\
/* 0802e4d0 */ MOVS R2, 0x8 @ Set R2 to 0x8 \n\
/* 0802e4d2 */ BL func_0800ac68 \n\
/* 0802e4d6 */ MOVS R1, 0x80 @ Set R1 to 0x80 \n\
/* 0802e4d8 */ LSLS R1, R1, 0x4 \n\
/* 0802e4da */ ADDS R0, R4, 0x0 @ Set R0 to R4 + 0x0 \n\
/* 0802e4dc */ BL func_0800aca0 \n\
/* 0802e4e0 */ ADDS R0, R4, 0x0 @ Set R0 to R4 + 0x0 \n\
/* 0802e4e2 */ MOVS R1, 0x0 @ Set R1 to 0x0 \n\
/* 0802e4e4 */ BL func_0800acd8 \n\
/* 0802e4e8 */ ADDS R0, R4, 0x0 @ Set R0 to R4 + 0x0 \n\
/* 0802e4ea */ MOVS R1, 0x4 @ Set R1 to 0x4 \n\
/* 0802e4ec */ BL func_0800acb0 \n\
/* 0802e4f0 */ ADDS R0, R4, 0x0 @ Set R0 to R4 + 0x0 \n\
/* 0802e4f2 */ MOVS R1, 0x0 @ Set R1 to 0x0 \n\
/* 0802e4f4 */ BL func_0800acbc \n\
/* 0802e4f8 */ ADDS R0, R4, 0x0 @ Set R0 to R4 + 0x0 \n\
/* 0802e4fa */ BL func_08018630 \n\
/* 0802e4fe */ LDR R0, [R6] \n\
/* 0802e500 */ LDR R1, =0x000001d3 @ !PossiblePointer \n\
/* 0802e502 */ ADDS R0, R0, R1 @ Set R0 to R0 + R1 \n\
/* 0802e504 */ STRB R5, [R0] \n\
/* 0802e506 */ LDR R0, [R6] \n\
/* 0802e508 */ ADDS R1, 0x3 @ Add 0x3 to R1 \n\
/* 0802e50a */ ADDS R0, R0, R1 @ Set R0 to R0 + R1 \n\
/* 0802e50c */ STRB R5, [R0] \n\
/* 0802e50e */ LDR R0, [R6] \n\
/* 0802e510 */ ADDS R1, 0x2 @ Add 0x2 to R1 \n\
/* 0802e512 */ ADDS R0, R0, R1 @ Set R0 to R0 + R1 \n\
/* 0802e514 */ SUBS R1, 0xD8 @ Subtract 0xD8 from R1 \n\
/* 0802e516 */ STRH R1, [R0] \n\
/* 0802e518 */ MOVS R0, 0xF1 @ Set R0 to 0xF1 \n\
/* 0802e51a */ MOVS R1, 0x0 @ Set R1 to 0x0 \n\
/* 0802e51c */ BL func_08017338 \n\
/* 0802e520 */ ADD SP, 0xC \n\
/* 0802e522 */ POP {R4-R6} \n\
/* 0802e524 */ POP {R0} \n\
/* 0802e526 */ BX R0 \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");
