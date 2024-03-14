#include "global.h"
#include "graphics.h"

// // //  D_08CD6434  // // //

// [D_08CD62FC] D_08CD6434 Data
u16 D_08cd6434_data[] = {
	0x2000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x2000, 0x2002, 0x2001, 0x2402, 0x2000, 0x0000, 0x0000, 0x2000, 0x2006, 0x2003, 0x2005, 0x2004, 0x2003, 0x2406, 0x2000, 0x0000, 0x0000, 0x2000, 0x2006, 0x2003, 0x2019, 0x2018, 0x2003, 0x2406, 0x2000, 0x0000, 0x0000, 0x2000, 0x2006, 0x2003, 0x2406, 0x2000, 0x0000, 0x0000, 0x2000, 0x2006, 0x2003, 0x2406, 0x2000, 0x0000, 0x0000, 0x2000, 0x2006, 0x2003, 0x2406, 0x2000, 0x0000, 0x0000, 0x2000, 0x2006, 0x2003, 0x2406, 0x2000, 0x0000, 0x0000, 0x2000, 0x2006, 0x2003, 0x2406, 0x2000, 0x0000, 0x0000, 0x2000, 0x2006, 0x2003, 0x2406, 0x2000, 0x0000, 0x0000, 0x2000, 0x2006, 0x2003, 0x2406, 0x2000, 0x0000, 0x0000, 0x2000, 0x2802, 0x2801, 0x2c02, 0x2000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x2000, 0x0000, 0x0000, 0x2000, 0x0000
};

// [D_08CD63D6] D_08CD6434 RLE Data
u8 D_08cd6434_rledata[] = {
	0x1, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x3, 0x2, 0x13, 0x2, 0x3, 0x3, 0x3, 0x2, 0x8, 0x3, 0x8, 0x2, 0x3, 0x3, 0x3, 0x2, 0x8, 0x3, 0x8, 0x2, 0x3, 0x3, 0x3, 0x2, 0x13, 0x2, 0x3, 0x3, 0x3, 0x2, 0x13, 0x2, 0x3, 0x3, 0x3, 0x2, 0x13, 0x2, 0x3, 0x3, 0x3, 0x2, 0x13, 0x2, 0x3, 0x3, 0x3, 0x2, 0x13, 0x2, 0x3, 0x3, 0x3, 0x2, 0x13, 0x2, 0x3, 0x3, 0x3, 0x2, 0x13, 0x2, 0x3, 0x3, 0x3, 0x2, 0x13, 0x2, 0x3, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x1, 0x0, 0x82, 0x0, 0x0, 0x0
};

// [D_08CD6434] D_08CD6434 Graphics
struct CompressedGraphics D_08cd6434 = {
	/* Data */				{.raw = D_08cd6434_data},
	/* RLE Data */			D_08cd6434_rledata,
	/* RLE Size */			0x5a,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
