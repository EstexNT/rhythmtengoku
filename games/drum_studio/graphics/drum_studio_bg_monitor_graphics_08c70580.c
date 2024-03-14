#include "global.h"
#include "graphics.h"

// // //  D_08C70580  // // //

// [D_08C704F8] D_08C70580 Huffman Data
u16 D_08c70580_huffmandata[] = {
	0x2220, 0xf8e0, 0xfefc, 0x07fe, 0x3f1f, 0x7f7f, 0xefef, 0x8fcf, 0xfe0f, 0xf7f7, 0x71f3, 0xf3f0, 0x70f1, 0x1030, 0x8fc0, 0x0f0f, 0x0c0e, 0x7f08, 0xef0f, 0xff0f, 0xf7f3, 0xf7f7, 0xfefc, 0xfefe, 0xf7f7, 0xf3f7, 0xfefe, 0xfcfe, 0x3010, 0xf070, 0xf1f0, 0xf0f3, 0xf0f7, 0x80fe, 0xe0c0, 0xf8f0, 0xff20, 0x5000, 0x0055, 0x0000
};

// [D_08C70548] D_08C70580 Huffman Window 1
u32 D_08c70580_window1[] = {
	0x00d212ab
};

// [D_08C7054C] D_08C70580 Huffman Window 2
u32 D_08c70580_window2[] = {
	0x00d212aa
};

// [D_08C70550] D_08C70580 Huffman
struct Huffman D_08c70580_huffman[] = {
	/* Data */			D_08c70580_huffmandata,
	/* Size */			0x8f,
	/* Count */			0x2,
	/* Window 1 */		D_08c70580_window1,
	/* Window 2 */		D_08c70580_window2,
};

// [D_08C70560] D_08C70580 RLE Data
u8 D_08c70580_rledata[] = {
	0x1, 0x10, 0x9, 0x6, 0xb, 0xb, 0xb, 0x6, 0x15, 0x4, 0xd, 0x3, 0x1, 0xc, 0x4, 0xb, 0xd, 0x7, 0x8, 0x21, 0x8, 0x7, 0x9, 0x3, 0x11, 0xb, 0x4, 0xc, 0x1, 0x4, 0xc, 0xdf
};

// [D_08C70580] D_08C70580 Graphics
struct CompressedGraphics D_08c70580 = {
	/* Huffman Data */		D_08c70580_huffman,
	/* RLE Data */			D_08c70580_rledata,
	/* RLE Size */			0x20,
	/* RLE Offset */		0x200,
	/* Double Compressed */	TRUE,
};
