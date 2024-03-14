#include "global.h"
#include "graphics.h"

// // //  D_08C6EFBC  // // //

// [D_08C6EEEC] D_08C6EFBC Data
u16 D_08c6efbc_data[] = {
	0x0000, 0x0004, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0003, 0x0005, 0x0001, 0x0000, 0x0000, 0x0002, 0x0004, 0x0003, 0x0000, 0x0006
};

// [D_08C6EFB2] D_08C6EFBC RLE Data
u8 D_08c6efbc_rledata[] = {
	0x1, 0x0, 0xc0, 0x61, 0x0, 0x80, 0x1, 0x5f, 0x0, 0x0
};

// [D_08C6EFBC] D_08C6EFBC Graphics
struct CompressedGraphics D_08c6efbc = {
	/* Data */				{.raw = D_08c6efbc_data},
	/* RLE Data */			D_08c6efbc_rledata,
	/* RLE Size */			0x6,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
