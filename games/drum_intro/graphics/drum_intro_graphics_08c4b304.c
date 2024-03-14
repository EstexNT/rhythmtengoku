#include "global.h"
#include "graphics.h"

// // //  D_08C4B304 (Unused?)  // // //

// [D_08C4B174] D_08C4B304 Data
u16 D_08c4b304_data[] = {
	0x0000, 0x000f, 0x000a, 0x040a, 0x040f, 0x0400, 0x0000, 0x000e, 0x000a, 0x040a, 0x040e, 0x0400, 0x0000, 0x0010, 0x000a, 0x040a, 0x0410, 0x0400, 0x0000, 0x000d, 0x000a, 0x040a, 0x040d, 0x0400, 0x0400, 0x0400, 0x0000, 0x000c, 0x000a, 0x040a, 0x040c, 0x0400, 0x0400, 0x0400, 0x0000, 0x000b, 0x000a, 0x040a, 0x040b, 0x0400, 0x0400, 0x0400, 0x0000, 0x000d, 0x000a, 0x040a, 0x040d, 0x0400, 0x0400, 0x0000, 0x000c, 0x000a, 0x040a, 0x040c, 0x0400, 0x0400, 0x0000, 0x000b, 0x000a, 0x040a, 0x040b, 0x0400, 0x0400, 0x0000, 0x000d, 0x000a, 0x040a, 0x040d, 0x0400, 0x0000, 0x001f, 0x000a, 0x040a, 0x041f, 0x0400, 0x0000, 0x001d, 0x001e, 0x000a, 0x040a, 0x041e, 0x041d, 0x0000, 0x001a, 0x000a, 0x040a, 0x041a, 0x0000, 0x0018, 0x0019, 0x0016, 0x0017, 0x0013, 0x0014, 0x0011, 0x0012, 0x0015, 0x0005, 0x0005, 0x0405, 0x0405, 0x0415, 0x0412, 0x0411, 0x0414, 0x0413, 0x0417, 0x0416, 0x0419, 0x0418, 0x0000, 0x001c, 0x0015, 0x0005, 0x0405, 0x0415, 0x041c, 0x0000, 0x001b, 0x0002, 0x0005, 0x0405, 0x0402, 0x041b, 0x0000, 0x0008, 0x0009, 0x0006, 0x0007, 0x0003, 0x0004, 0x0001, 0x0002, 0x0005, 0x0005, 0x0405, 0x0405, 0x0402, 0x0401, 0x0404, 0x0403, 0x0407, 0x0406, 0x0409, 0x0408, 0x0400, 0x0000
};

// [D_08C4B29A] D_08C4B304 RLE Data
u8 D_08c4b304_rledata[] = {
	0x1, 0x7, 0x2, 0x5, 0x1, 0x5, 0x2, 0x3, 0x1, 0xd, 0x2, 0x5, 0x1, 0x5, 0x2, 0x3, 0x1, 0xd, 0x2, 0x5, 0x1, 0x5, 0x2, 0x3, 0x1, 0xc, 0x2, 0x6, 0x1, 0x6, 0x5, 0xc, 0x2, 0x6, 0x1, 0x6, 0x5, 0xc, 0x2, 0x6, 0x1, 0x6, 0x5, 0xb, 0x2, 0x7, 0x1, 0x7, 0x4, 0xb, 0x2, 0x7, 0x1, 0x7, 0x4, 0xb, 0x2, 0x7, 0x1, 0x7, 0x4, 0xa, 0x2, 0x8, 0x1, 0x8, 0x3, 0xa, 0x2, 0x8, 0x1, 0x8, 0x3, 0x9, 0x3, 0x8, 0x1, 0x8, 0x3, 0x9, 0x2, 0x9, 0x1, 0x9, 0x2, 0x9, 0x17, 0x9, 0x3, 0x8, 0x1, 0x8, 0x3, 0x9, 0x3, 0x8, 0x1, 0x8, 0x3, 0xa, 0x16, 0x0, 0xe6, 0x0, 0x0, 0x0
};

// [D_08C4B304] D_08C4B304 Graphics
struct CompressedGraphics D_08c4b304 = {
	/* Data */				{.raw = D_08c4b304_data},
	/* RLE Data */			D_08c4b304_rledata,
	/* RLE Size */			0x66,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
