#include "global.h"
#include "graphics.h"

// // //  D_08CE6278  // // //

// [D_08CE616C] D_08CE6278 Data
u16 D_08ce6278_data[] = {
	0x0000, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0006, 0x0005, 0x0001, 0x0001, 0x0003, 0x0002, 0x0004, 0x0004, 0x0000
};

// [D_08CE6270] D_08CE6278 RLE Data
u8 D_08ce6278_rledata[] = {
	0x1, 0x0, 0xa0, 0x81, 0x0, 0xe0, 0x0, 0x0
};

// [D_08CE6278] D_08CE6278 Graphics
struct CompressedGraphics D_08ce6278 = {
	/* Data */				{.raw = D_08ce6278_data},
	/* RLE Data */			D_08ce6278_rledata,
	/* RLE Size */			0x4,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};