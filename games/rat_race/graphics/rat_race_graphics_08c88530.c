#include "global.h"
#include "graphics.h"

// // //  D_08C88530  // // //

// [D_08C88430] D_08C88530 Data
u16 D_08c88530_data[] = {
	0x0000, 0x3000, 0x3113, 0x3000, 0x3400, 0x3513, 0x3400, 0x0000, 0x310d, 0x310c, 0x310b, 0x3000, 0x3000, 0x3000, 0x3400, 0x3400, 0x3400, 0x350b, 0x350c, 0x350d, 0x0000, 0x3104, 0x305e, 0x3107, 0x3106, 0x3105, 0x310e, 0x350e, 0x3505, 0x3506, 0x3507, 0x345e, 0x3504, 0x0000, 0x3108, 0x305e, 0x3109, 0x310a, 0x30e7, 0x30e7, 0x34e7, 0x34e7, 0x350a, 0x3509, 0x345e, 0x3508, 0x0000, 0x3112, 0x3111, 0x3110, 0x30e7, 0x30e7, 0x30e7, 0x34e7, 0x34e7, 0x34e7, 0x3510, 0x3511, 0x3512, 0x0000, 0x310f, 0x30e7, 0x34e7, 0x350f, 0x0000, 0x310f, 0x30e7, 0x34e7, 0x350f, 0x0000, 0x30ee, 0x30e7, 0x30ed, 0x30ec, 0x30e7, 0x30e7, 0x34e7, 0x34e7, 0x34ec, 0x34ed, 0x34e7, 0x34ee, 0x0000, 0x30e4, 0x30e7, 0x30e6, 0x30e5, 0x30f0, 0x30ef, 0x34ef, 0x34f0, 0x34e5, 0x34e6, 0x34e7, 0x34e4, 0x0000, 0x30eb, 0x30e7, 0x30e7, 0x30e8, 0x30e9, 0x30ea, 0x34ea, 0x34e9, 0x34e8, 0x34e7, 0x34e7, 0x34eb, 0x0000
};

// [D_08C8850A] D_08C88530 RLE Data
u8 D_08c88530_rledata[] = {
	0x1, 0x28, 0x3, 0x3, 0x1, 0x3, 0x3, 0x13, 0xd, 0x13, 0xd, 0x13, 0xd, 0x13, 0xd, 0x13, 0x2, 0x4, 0x1, 0x4, 0x2, 0x13, 0x2, 0x4, 0x1, 0x4, 0x2, 0x13, 0xd, 0x13, 0xd, 0x13, 0xd, 0x0, 0x0, 0xac, 0x0, 0x0
};

// [D_08C88530] D_08C88530 Graphics
struct CompressedGraphics D_08c88530 = {
	/* Data */				{.raw = D_08c88530_data},
	/* RLE Data */			D_08c88530_rledata,
	/* RLE Size */			0x22,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
