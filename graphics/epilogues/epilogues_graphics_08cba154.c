#include "global.h"
#include "graphics.h"

// // //  D_08CBA154  // // //

// [D_08CB9FE8] D_08CBA154 Data
u16 D_08cba154_data[] = {
	0x0000, 0x0061, 0x0049, 0x0060, 0x005d, 0x0049, 0x0049, 0x005f, 0x0049, 0x005e, 0x0049, 0x0062, 0x0049, 0x0062, 0x0049, 0x0049, 0x0060, 0x0000, 0x0061, 0x0049, 0x0060, 0x0062, 0x0049, 0x0049, 0x0063, 0x0049, 0x005f, 0x0049, 0x0062, 0x0049, 0x0062, 0x0049, 0x0064, 0x0060, 0x0000, 0x0061, 0x0049, 0x0049, 0x0062, 0x0049, 0x0086, 0x0085, 0x0049, 0x005f, 0x0088, 0x0087, 0x0049, 0x0062, 0x0049, 0x0084, 0x0060, 0x0000, 0x0061, 0x0049, 0x0049, 0x0081, 0x0080, 0x007f, 0x0083, 0x0049, 0x0082, 0x0093, 0x0092, 0x0049, 0x0062, 0x0049, 0x0084, 0x0060, 0x0000, 0x0061, 0x0049, 0x008e, 0x0049, 0x0091, 0x0090, 0x008f, 0x008b, 0x008a, 0x0089, 0x008d, 0x008c, 0x0062, 0x0049, 0x0049, 0x0060, 0x0000, 0x0061, 0x0069, 0x0061, 0x0049, 0x0049, 0x006f, 0x006e, 0x006d, 0x0072, 0x0071, 0x0070, 0x006b, 0x006a, 0x0049, 0x0049, 0x006c, 0x0000, 0x0061, 0x0062, 0x0061, 0x0049, 0x0049, 0x0065, 0x0068, 0x0067, 0x0066, 0x007e, 0x007d, 0x007c, 0x0049, 0x0000, 0x0061, 0x0062, 0x0078, 0x0049, 0x0049, 0x007a, 0x0079, 0x0075, 0x0074, 0x0073, 0x0077, 0x0049, 0x0076, 0x0049, 0x0049, 0x007b, 0x0000, 0x004b, 0x004a, 0x004e, 0x004d, 0x004c, 0x0054, 0x0053, 0x0052, 0x0057, 0x0056, 0x0055, 0x004f, 0x0049, 0x0042, 0x0051, 0x0050, 0x0000, 0x0049, 0x0048, 0x0047, 0x0043, 0x0042, 0x0041, 0x0046, 0x0045, 0x0044, 0x0049, 0x0049, 0x0059, 0x005c, 0x005b, 0x005a, 0x0058, 0x0000
};

// [D_08CBA138] D_08CBA154 RLE Data
u8 D_08cba154_rledata[] = {
	0x1, 0x86, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0xd, 0x3, 0x1, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0x0, 0x0, 0x4a, 0x0, 0x0
};

// [D_08CBA154] D_08CBA154 Graphics
struct CompressedGraphics D_08cba154 = {
	/* Data */				{.raw = D_08cba154_data},
	/* RLE Data */			D_08cba154_rledata,
	/* RLE Size */			0x18,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
