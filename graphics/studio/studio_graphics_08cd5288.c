#include "global.h"
#include "graphics.h"

// // //  D_08CD5288  // // //

// [D_08CD4F80] D_08CD5288 Huffman Data
u16 D_08cd5288_huffmandata[] = {
	0x0150, 0xf0f0, 0xf0f0, 0x0108, 0xf0f0, 0xf0f0, 0xef01, 0x4006, 0x4855, 0x4801, 0x4821, 0x55b1, 0x5405, 0x1485, 0x1484, 0xf111, 0x0001, 0xf3f6, 0xef10, 0x9007, 0xd505, 0xa916, 0xfd5b, 0x5500, 0x6a00, 0x7f00, 0xaa01, 0xef01, 0x0001, 0xfffe, 0x0380, 0x0c08, 0x0c0c, 0x0c0c, 0x01fc, 0xef10, 0x5407, 0x6454, 0x6565, 0x79aa, 0x59ef, 0x0065, 0x0155, 0x4196, 0x4197, 0xf111, 0x0001, 0x03f6, 0xf110, 0x001f, 0x1e30, 0xfff1, 0x0400, 0x5104, 0x0010, 0xf010, 0x00f1, 0x07f0, 0xe0f1, 0x0006, 0xaa85, 0xaaa0, 0xaa81, 0xaa07, 0x2a02, 0x4a54, 0x5215, 0xf1ff, 0x01c0, 0x0380, 0x0380, 0xf1c0, 0x4004, 0x0005, 0x80a8, 0xe0fe, 0x00bf, 0x80a8, 0xfff1, 0x0050, 0x0fe0, 0x010c, 0xfafa, 0xfafa, 0xb0a9, 0x9004, 0x42aa, 0x0aaa, 0x0aa9, 0x42a9, 0x90aa, 0x9cb0, 0x0005, 0x0029, 0x00a4, 0x0290, 0x0290, 0x00a4, 0x0029, 0x0ba9, 0xe404, 0x93ff, 0x4fff, 0x4ffe, 0x93fe, 0xe4ff, 0x0150, 0xf000, 0xf0f0, 0x0000, 0x5555, 0x0180, 0xf0f0, 0xf0f0, 0xef10, 0x0005, 0x1900, 0x59d4, 0x6d50, 0x6545, 0xb446, 0xd407, 0x0001, 0xfe3c, 0xe1f0, 0x0005, 0x8269, 0x0a69, 0xa9eb, 0x99aa, 0xb780, 0xae80, 0x0010, 0x0070, 0x0fe1, 0x2404, 0x2000, 0x130f, 0x0383, 0xff60, 0xff18, 0x11e1, 0x0010, 0x0070, 0x0ef1, 0x2404, 0x09fc, 0xc6ff, 0x04ff, 0x58f0, 0xa0f1, 0x001e, 0x0010, 0x003e, 0x0380, 0xc0c0, 0xc0c0, 0x80c0, 0xf010, 0xff10, 0x0000, 0x1900, 0x00f1, 0x2624, 0xf1ef, 0x0402, 0x48a2, 0x9186, 0xa69a, 0x0010, 0x007e, 0xef10, 0x9004, 0x9141, 0xd505, 0x5656, 0x4766, 0x457b, 0x11e1, 0x0010, 0x0070, 0x00f1, 0xde3e, 0xf0f1, 0x5000, 0x4205, 0xff1f, 0x0010, 0x70fc, 0xe1f0, 0x000e, 0x0025, 0x002a, 0x0009, 0x000a, 0x009e, 0x009a, 0x00b8, 0x00a8, 0xa958, 0x5958, 0x5568, 0x56b8, 0xabf8, 0xffe0, 0xfe80, 0x0010, 0x00e0, 0x06c0, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0xf1c0, 0x4003, 0xf805, 0xf8ef, 0xf8ab, 0xe8fb, 0xe10f, 0x0009, 0x02b9, 0xabe5, 0xfe95, 0xa955, 0x8025, 0x2009, 0xa809, 0x0809, 0x0029, 0x02a5, 0x0010, 0xe0f8, 0x0005, 0xf010, 0x0109, 0xfafa, 0xfafa, 0x01c0, 0x0038, 0x0038, 0xc000, 0x00cc, 0x0030, 0xfe7c, 0xf130, 0x6402, 0xa465, 0x6469, 0x6466, 0x3133, 0x0030, 0x7cfe, 0xfac0, 0x0005, 0x0010, 0x0018, 0x0604, 0x1606, 0x5801, 0x6001, 0x000a, 0x06c0, 0x0308, 0x0e07, 0xfcfc, 0x070e, 0x0f03, 0x0c0f, 0xcf3c, 0x00cc, 0xcc00, 0x01a0, 0x5050, 0x5050, 0x0000, 0x0000
};

// [D_08CD51B0] D_08CD5288 Huffman Window 1
u32 D_08cd5288_window1[] = {
	0xe7edf5f7, 0x9ffbbfb7, 0x0000012d
};

// [D_08CD51BC] D_08CD5288 Huffman Window 2
u32 D_08cd5288_window2[] = {
	0x2a9ca494, 0x00283295
};

// [D_08CD51C4] D_08CD5288 Huffman
struct Huffman D_08cd5288_huffman[] = {
	/* Data */			D_08cd5288_huffmandata,
	/* Size */			0x210,
	/* Count */			0x4a,
	/* Window 1 */		D_08cd5288_window1,
	/* Window 2 */		D_08cd5288_window2,
};

// [D_08CD51D4] D_08CD5288 RLE Data
u8 D_08cd5288_rledata[] = {
	0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0x13, 0x9, 0x7, 0x9, 0x6, 0xa, 0x5, 0x1b, 0x3, 0x2, 0x10, 0xb, 0x7, 0x9, 0x5, 0xb, 0x5, 0xa, 0xa, 0x6, 0x9, 0x8, 0x9, 0x7, 0xd, 0x3, 0xa, 0x6, 0xc, 0x4, 0x3, 0x2, 0xa, 0x1, 0x5, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0x7, 0xc, 0x4, 0xc, 0x4, 0xf, 0x9, 0x1, 0x5, 0x1, 0x9, 0x1, 0x5, 0x1, 0x9, 0x1, 0x5, 0x1, 0x9, 0x1, 0xf, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x4f, 0xb, 0x3, 0x3, 0x2d, 0x5, 0xa, 0x6, 0x8, 0x8, 0x51, 0x7, 0x3, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x3a, 0x6, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0x7, 0x5, 0x3, 0x4, 0x8, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0x0, 0x86, 0x0, 0x0, 0x0
};

// [D_08CD5288] D_08CD5288 Graphics
struct CompressedGraphics D_08cd5288 = {
	/* Huffman Data */		D_08cd5288_huffman,
	/* RLE Data */			D_08cd5288_rledata,
	/* RLE Size */			0xb0,
	/* RLE Offset */		0x600,
	/* Double Compressed */	TRUE,
};
