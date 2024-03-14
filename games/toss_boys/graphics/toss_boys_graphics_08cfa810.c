#include "global.h"
#include "graphics.h"

// // //  D_08CFA810  // // //

// [D_08CFA61C] D_08CFA810 Huffman Data
u16 D_08cfa810_huffmandata[] = {
	0x6666, 0x029e, 0x8080, 0x8080, 0xc0c0, 0xeeee, 0x69ee, 0x0069, 0xfe80, 0x02e6, 0x0c08, 0x0c0c, 0x0e0c, 0xf9e6, 0x5400, 0xa800, 0x019e, 0x0ff0, 0x0101, 0xf6e9, 0x5002, 0x4255, 0x0a55, 0x2a55, 0x00e9, 0xf7fe, 0xf9e6, 0x0003, 0x0055, 0x0095, 0x0095, 0x00a5, 0x699e, 0x0096, 0x1030, 0xf9e6, 0x0000, 0x0009, 0x669e, 0x0296, 0x3030, 0x1010, 0x1010, 0x07e6, 0x8080, 0xfe80, 0xf0e0, 0xfcf8, 0xfefe, 0x10f7, 0x7030, 0xf070, 0x6666, 0xeeee, 0x0196, 0x07f0, 0xff0e, 0x6666, 0x009e, 0x0100, 0x9999, 0xeee9, 0x0096, 0xe0fe, 0x6666, 0x009e, 0xff80, 0xfe69, 0x0000, 0x5540, 0xe999, 0x0096, 0x80e0, 0xf9e6, 0x0000, 0xa955, 0x9eee, 0x0069, 0x8e08, 0x6666, 0x0000, 0x00e6, 0x0ff0, 0xf69e, 0x9007, 0x00aa, 0x00a5, 0x00a5, 0x00a9, 0x00a9, 0x40a9, 0x40a9, 0x00aa, 0xeeee, 0x026f, 0xf0f0, 0xf0f0, 0xf0f0, 0xffff, 0x03e6, 0x8080, 0xc0c0, 0xc0c0, 0xe0e0, 0xeeee, 0xeeee, 0x026f, 0xf0f0, 0xf0f0, 0xf0f0, 0xf69e, 0x0006, 0x0090, 0x0090, 0x0094, 0x0094, 0x00a4, 0x00a4, 0x00a4, 0x669e, 0x036f, 0xf1f0, 0xf1f1, 0xf0f0, 0xf0f0, 0xffff, 0x00e6, 0xf070, 0x666e, 0x036f, 0xf8f8, 0xf0f0, 0xf0f0, 0xf0f0, 0x01e6, 0xffee, 0x7f0f, 0xf69e, 0x0002, 0xaa55, 0xa4aa, 0xa4aa, 0x0296, 0x3030, 0x1010, 0x0010, 0x6666, 0x009e, 0xefe0, 0x9999, 0x669e, 0x01e6, 0x0f00, 0x8f0f, 0xff6e, 0x0000, 0x0015, 0x0096, 0xf8f8, 0x6666, 0x6666, 0x009e, 0x1010, 0x006e, 0xf010, 0xe999, 0x0096, 0x80e0, 0x00e6, 0xf070, 0xf96e, 0x5406, 0x5560, 0x5560, 0x5560, 0x5560, 0x5568, 0x5568, 0x5558, 0x669e, 0x03e6, 0x0c00, 0x0c0c, 0x0e0c, 0x0e0e, 0xf96e, 0x0001, 0x0055, 0x0060, 0x69ee, 0x00e6, 0xefc0, 0xeeee, 0x0000
};

// [D_08CFA7A0] D_08CFA810 Huffman Window 1
u32 D_08cfa810_window1[] = {
	0x6d29b7f2, 0x9cbd5959, 0x000002dd
};

// [D_08CFA7AC] D_08CFA810 Huffman Window 2
u32 D_08cfa810_window2[] = {
	0x422502a8, 0x00475504
};

// [D_08CFA7B4] D_08CFA810 Huffman
struct Huffman D_08cfa810_huffman[] = {
	/* Data */			D_08cfa810_huffmandata,
	/* Size */			0x186,
	/* Count */			0x4c,
	/* Window 1 */		D_08cfa810_window1,
	/* Window 2 */		D_08cfa810_window2,
};

// [D_08CFA7C4] D_08CFA810 RLE Data
u8 D_08cfa810_rledata[] = {
	0x1, 0xf, 0x12, 0xf, 0x10, 0xd, 0x3, 0x13, 0xd, 0xe, 0x21, 0xb, 0x7, 0xe, 0xc, 0x5, 0x2, 0xd, 0x1, 0x3, 0xf, 0xe, 0x2, 0xd, 0x3, 0xd, 0xb, 0x5, 0x1, 0x4, 0x6, 0x6, 0x6, 0x9, 0x8, 0x8, 0x1, 0xf, 0x1, 0xd, 0x3, 0xd, 0x13, 0xb, 0x1, 0x4, 0xc, 0x12, 0x1d, 0x4, 0x11, 0xf, 0x11, 0xb, 0x14, 0xb, 0x6, 0x9, 0x3, 0xd, 0x1, 0x3, 0x13, 0x9, 0x17, 0x9, 0xd, 0x5, 0x25, 0xb, 0x5, 0xb, 0x5, 0xff, 0x0, 0x0
};

// [D_08CFA810] D_08CFA810 Graphics
struct CompressedGraphics D_08cfa810 = {
	/* Huffman Data */		D_08cfa810_huffman,
	/* RLE Data */			D_08cfa810_rledata,
	/* RLE Size */			0x4a,
	/* RLE Offset */		0x400,
	/* Double Compressed */	TRUE,
};
