#include "global.h"
#include "graphics.h"

// // //  D_08C0B644  // // //

// [D_08C0AF60] D_08C0B644 Huffman Data
u16 D_08c0b644_huffmandata[] = {
	0x01e0, 0xc080, 0xf0e0, 0xae90, 0x4000, 0xf0aa, 0x9b0e, 0x0000, 0x00e9, 0xaace, 0xc9be, 0x0000, 0x0094, 0xaace, 0xeeee, 0x9bbe, 0x320e, 0x8f80, 0x8f8f, 0x8f8f, 0x8f8f, 0x7f7f, 0x3f3f, 0x1f1f, 0x0f0f, 0xe0fc, 0xf8f0, 0xf0c0, 0xf0fe, 0x7f80, 0x1f3f, 0x0f1f, 0x0707, 0xcfef, 0x0f8f, 0x0e0f, 0x0f0f, 0x0f0f, 0x0f0f, 0xff0f, 0x1010, 0x1010, 0x1010, 0xff10, 0xe0e0, 0xe0e0, 0xe0e0, 0xffe0, 0x1010, 0x1010, 0x1010, 0x1010, 0xefe0, 0xefef, 0xefef, 0xefef, 0xf3ff, 0xf3f3, 0xf3f3, 0xf3f3, 0x0c03, 0x0c0c, 0x0c0c, 0x0c0c, 0x07fc, 0x0707, 0x0707, 0x0f07, 0xbce0, 0x0000, 0xfa95, 0xabce, 0x1003, 0x40e9, 0x10a5, 0x40e9, 0x10a5, 0xabbc, 0xae90, 0x0004, 0x0009, 0x002b, 0x00a9, 0x02ab, 0x0aa9, 0xeeea, 0x030e, 0x0808, 0x0808, 0x0808, 0x0808, 0xbc0e, 0x4000, 0x8055, 0x9bbc, 0xabce, 0x1000, 0x40fa, 0x9bbc, 0xabce, 0x1000, 0x40fa, 0x9bbc, 0xabce, 0x1000, 0x40fa, 0x9bbc, 0x06e0, 0x0100, 0x0703, 0x1f0f, 0x7f3f, 0xf07f, 0xfcf8, 0xf7fe, 0x09ee, 0xaace, 0xa9be, 0x0000, 0x0094, 0x0aee, 0x070e, 0xe0c0, 0xf0f0, 0x80f0, 0x8f8f, 0x8f8f, 0x8f8f, 0xf78f, 0xf1ff, 0xbce0, 0x6401, 0x9800, 0xb800, 0x9ba0, 0x0000, 0x0064, 0xa9a0, 0x000e, 0xff00, 0xbc0e, 0x4002, 0x6255, 0x4855, 0x7b55, 0x9ab0, 0x0000, 0x0019, 0x09a9, 0x06e0, 0x8ff0, 0x8f8f, 0x8f8f, 0x8f8f, 0x1f9f, 0x1010, 0x1010, 0xb9e0, 0x0001, 0x0001, 0x55f9, 0xcaae, 0xeeec, 0x0de0, 0xf070, 0x0f00, 0x0808, 0xfcf8, 0x10e0, 0xf0f0, 0xc0f8, 0x7f00, 0x3f7f, 0x1f3f, 0x0f1f, 0x080e, 0x0c08, 0xefce, 0xa90e, 0x0002, 0x0001, 0x0080, 0x80e0, 0xeeca, 0xa9ee, 0xaceb, 0x9400, 0x5535, 0xcb9e, 0xceee, 0xeba9, 0xcbae, 0x0002, 0xc039, 0x000e, 0xc003, 0xbccc, 0x0e9b, 0xabce, 0xa400, 0x950f, 0xee9b, 0xabce, 0xa400, 0x950f, 0xee9b, 0xabce, 0xa400, 0x950f, 0xee9b, 0xbbce, 0xeeaa, 0x1de0, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0xefef, 0xefef, 0xefef, 0xefef, 0x1f1f, 0x1f1f, 0x1f1f, 0x1f1f, 0xefef, 0xefef, 0xefef, 0xefef, 0x101f, 0x1010, 0x1010, 0x1010, 0x0c00, 0x0c0c, 0x0c0c, 0x0c0c, 0xf3fc, 0xf3f3, 0xf3f3, 0xf3f3, 0x8f83, 0x0f8f, 0xbc0e, 0x0001, 0x8055, 0x20fa, 0xeabc, 0x9400, 0x503f, 0xae90, 0x0001, 0xaaa9, 0xaaab, 0xeee9, 0x0a0e, 0x1010, 0x1010, 0x0010, 0x0808, 0x0808, 0x0808, 0xf808, 0x8080, 0x8080, 0x8080, 0x8080, 0x0a9e, 0x0000, 0x00e4, 0x0ba9, 0x9eee, 0x0eba, 0xa9ee, 0x0eeb, 0xba9e, 0x0eee, 0xeba9, 0xba0e, 0x4000, 0x400e, 0xeeeb, 0x070e, 0xf0f8, 0xf0f0, 0xf0f0, 0xf0f0, 0x8780, 0x8787, 0x8787, 0x8f8f, 0xa9e0, 0x0001, 0x0055, 0x00b8, 0xcab0, 0x6400, 0x7400, 0x09ae, 0x0000, 0xffd9, 0xc0ba, 0x8400, 0xb7aa, 0x03e0, 0x9f90, 0x9f9f, 0x8f9f, 0x8f8f, 0xab9e, 0x0000, 0x00a4, 0xcaae, 0xb9ec, 0x5400, 0x55f9, 0xcaae, 0xeeec, 0x030e, 0xfefe, 0xfefe, 0xc0e0, 0x0080, 0xba90, 0x9000, 0xb099, 0xc0ab, 0x4400, 0xccca, 0xce00, 0xcece, 0x0ce0, 0xc0c0, 0xe0e0, 0xf0f0, 0x80f0, 0x0f7f, 0xf030, 0x70f1, 0x7070, 0x0030, 0x8f0f, 0xcfcf, 0xffef, 0xffef, 0xbaee, 0x030e, 0xf0e0, 0xf8f0, 0xfcfc, 0x00fe, 0x0000, 0xbccc, 0xee9b, 0x29e0, 0xc0c0, 0xc0c0, 0xc0c0, 0xf0e0, 0xf0f0, 0xf0f0, 0xf0f0, 0xeff0, 0xefef, 0xefef, 0xefef, 0x1fef, 0x1f1f, 0x1f1f, 0x1f1f, 0xef1f, 0xefef, 0xefef, 0xefef, 0x1fef, 0x1010, 0x1010, 0x1010, 0x0010, 0x0c0c, 0x0c0c, 0x0c0c, 0xfc0c, 0xf3f3, 0xf3f3, 0xf3f3, 0x03f3, 0xfefe, 0xfefe, 0xf7f7, 0xf7f7, 0xf7f7, 0x07f7, 0x7f7f, 0x7f7f, 0x7f7f, 0x7f7f, 0xa90e, 0x0007, 0x0040, 0x0180, 0x05c0, 0x1580, 0x55c0, 0x5580, 0x55c1, 0x5585, 0xa9be, 0x0006, 0x0095, 0x00f7, 0x0095, 0x00f7, 0x0095, 0x00f7, 0x0095, 0xb90e, 0x4000, 0x8055, 0x00bb, 0xaeee, 0x00ca, 0x9eee, 0x00bb, 0xaeee, 0x00ca, 0x9eee, 0x00bb, 0xaeee, 0x00ca, 0x0b9e, 0x4000, 0xfffa, 0xfce0, 0x6400, 0x9800, 0x02e0, 0xe0e0, 0xe0e0, 0xe0e0, 0xf0ec, 0x8400, 0x91aa, 0x0ae0, 0x7070, 0x7070, 0x7070, 0x8f80, 0x8f8f, 0x8f8f, 0x8f8f, 0x101f, 0x1010, 0x1010, 0x1010, 0xfec0, 0x0000, 0x9990, 0x15e0, 0xfcfc, 0xfcfc, 0xfcfc, 0x80fc, 0xcf81, 0xcfcf, 0x0e0f, 0x3f07, 0x0f8f, 0x030c, 0x0101, 0xf8fc, 0x2070, 0xe0e0, 0xf0e0, 0xf0f0, 0xf8f8, 0xf0f0, 0xeff0, 0xf0ef, 0xf1ff, 0xff01, 0x00ec, 0x55aa, 0x00bc, 0x5500, 0x00ab, 0x5500, 0x9a9a, 0x9a9a, 0x150e, 0x0100, 0x0101, 0x0101, 0xef01, 0xefef, 0xefef, 0x3fef, 0x3f3f, 0x3f3f, 0x3f3f, 0xc03f, 0xc0c0, 0xc0c0, 0xc0c0, 0x7fc0, 0x7f7f, 0x3f3f, 0x0f1f, 0x8007, 0x8080, 0xc080, 0xc0c0, 0xa09e, 0x0008, 0x00a4, 0x0080, 0x0240, 0x0ac0, 0x2a40, 0xaac0, 0xaa40, 0xaac2, 0xaa4a, 0xecb0, 0x0000, 0xffa5, 0xceba, 0x9404, 0xf5ab, 0x94aa, 0xf5ab, 0x94aa, 0xf5ab, 0x090e, 0x80f0, 0x8080, 0x8080, 0x8080, 0x8080, 0x8080, 0x8080, 0x8080, 0x1f80, 0x00f0, 0xbec0, 0x0004, 0x0090, 0x0060, 0x0050, 0x0070, 0x00f0, 0x9ba0, 0x9000, 0xd000, 0xb0ce, 0x0004, 0x1100, 0x44a1, 0x55a4, 0x77a5, 0xffa7, 0x9a0b, 0x5001, 0x5222, 0x5eee, 0x0a0e, 0x01c0, 0x0701, 0xff3f, 0xe010, 0x0f0f, 0xcf08, 0x0e0f, 0x003f, 0x1f7f, 0x0303, 0x0801, 0x0bae, 0xcb9e, 0x0000, 0x0039, 0xecba, 0x9eee, 0xeecb, 0xa9ee, 0xeeec, 0xba9e, 0xeeec, 0xcba0, 0xeeee, 0xec00, 0x060e, 0xf3f0, 0x7f00, 0x0f3f, 0x0003, 0x0103, 0x80f8, 0x8080, 0xb0ce, 0x4402, 0x1184, 0xdd91, 0xff9d, 0xfa0b, 0x4000, 0x4888, 0x02e0, 0xe0c0, 0xf8f0, 0xfefc, 0x0a9e, 0x0000, 0x9900, 0x09a9, 0x2f0e, 0x0ff0, 0xf0ff, 0xfcfe, 0xf0f8, 0xc0e0, 0xf8f8, 0xfcfc, 0xfefe, 0x8080, 0x8080, 0x8080, 0x8080, 0xcfef, 0x0f8f, 0x0e0f, 0xeffc, 0xefef, 0xefef, 0xefef, 0x101f, 0x1010, 0x1010, 0x1010, 0xc080, 0xf0e0, 0xfcf8, 0xf0fe, 0x30f7, 0xf1f0, 0x8080, 0xc0c0, 0xe7e0, 0x080f, 0xff8c, 0x0c0f, 0xcf0e, 0xf07f, 0xf1f0, 0xf7f3, 0xf3f3, 0xf3f3, 0xf3f3, 0x03f3, 0xce08, 0x0c0f, 0x8f0e, 0x0fef, 0xf0ff, 0xa9e0, 0x0000, 0xee55, 0x09a9, 0x020e, 0xc080, 0xf0e0, 0xfcf8, 0xab0e, 0x5401, 0xee55, 0xaa6e, 0xec0b, 0x4002, 0x6222, 0x6eee, 0x7bbb, 0x180e, 0x8080, 0x0f80, 0x0808, 0x1e0c, 0x0fbf, 0x0808, 0x0808, 0x0808, 0x0808, 0x0c0c, 0x0c0c, 0x0c0c, 0xec0c, 0xefef, 0xff0f, 0x0ff0, 0xf0ff, 0xf0ff, 0xf0f0, 0xf0f0, 0xf0f0, 0xc080, 0xf0e0, 0xfcf8, 0xfffe, 0xb90e, 0x4000, 0x8055, 0xaceb, 0x9000, 0x6bd5, 0x9eee, 0xaceb, 0x9000, 0x6bd5, 0x9ee0, 0xcebb, 0xae00, 0xecca, 0x19e0, 0xf800, 0xf9f9, 0xf9f9, 0xf9f9, 0x0100, 0x0101, 0x0101, 0x0101, 0xfc00, 0xfcfc, 0xfcfc, 0xfcfc, 0xf0f0, 0xf0f0, 0x7070, 0x7070, 0xe0e0, 0x80c0, 0xf7f0, 0xf7f7, 0xf7f7, 0xf7f7, 0xf3f7, 0xf1f1, 0xf1f1, 0xf0f0, 0x0000, 0x0000
};

// [D_08C0B53C] D_08C0B644 Huffman Window 1
u32 D_08c0b644_window1[] = {
	0x74aad717, 0x78a91337, 0x5397f403, 0xe7fe003c, 0xf6f8017f, 0x0000010b
};

// [D_08C0B554] D_08C0B644 Huffman Window 2
u32 D_08c0b644_window2[] = {
	0xbf5b5eee, 0x0af8dbdb, 0x01dab5ee
};

// [D_08C0B560] D_08C0B644 Huffman
struct Huffman D_08c0b644_huffman[] = {
	/* Data */			D_08c0b644_huffmandata,
	/* Size */			0x7c3,
	/* Count */			0xaa,
	/* Window 1 */		D_08c0b644_window1,
	/* Window 2 */		D_08c0b644_window2,
};

// [D_08C0B570] D_08C0B644 RLE Data
u8 D_08c0b644_rledata[] = {
	0x1, 0xa, 0x25, 0x51, 0x14, 0xb, 0x1, 0x5, 0x5, 0x5, 0x1, 0x9, 0x7, 0x12, 0xe, 0x3, 0xc, 0x13, 0x30, 0xd, 0x41, 0x3, 0xd, 0x3, 0x1, 0xb, 0x1, 0x3, 0xd, 0x3, 0x1d, 0xf, 0x28, 0x5, 0x64, 0xb, 0x9, 0x8, 0x4, 0x3, 0x5, 0x3, 0x5, 0x9, 0x16, 0x9, 0xd, 0x7, 0x54, 0xf, 0x47, 0x9, 0x1, 0x5, 0x1, 0x9, 0x7, 0x9, 0x21, 0x1f, 0x41, 0x9, 0x7, 0x9, 0x49, 0xd, 0x7, 0x9, 0x1, 0x7, 0x2b, 0xd, 0x41, 0xf, 0x41, 0x2f, 0x8, 0x9, 0x10, 0x1f, 0x91, 0x7, 0xd, 0x7, 0x5, 0x5, 0x5, 0x5, 0x6, 0xa, 0x9, 0x28, 0x14, 0xa, 0x6, 0x9, 0x7, 0x9, 0x1f, 0x3, 0xc, 0x5, 0x20, 0x20, 0x40, 0xf, 0x21, 0x2d, 0x3, 0xd, 0x26, 0x6, 0x7, 0xd, 0x9, 0x9, 0x1, 0x5, 0x5, 0x5, 0x1, 0xc, 0x4, 0x6, 0x5, 0x4, 0x4, 0xb, 0x12, 0xe, 0x2, 0xd, 0x3, 0x6, 0xd, 0xb, 0x2, 0x2f, 0x21, 0xd, 0x3, 0xd, 0x3, 0xd, 0x1, 0x5, 0x18, 0x34, 0x11, 0x3, 0x2c, 0x1d, 0xd, 0x17, 0x4, 0xb, 0x1, 0x3, 0x5, 0x7, 0xd, 0x3, 0x1, 0xe, 0x2, 0xa, 0xd, 0x8, 0xb, 0x6, 0x10, 0x1a, 0xf, 0x8, 0x1, 0xd, 0x3, 0xd, 0x3, 0xd, 0x21, 0x2f, 0x3, 0x4, 0x9, 0x40, 0x26, 0xa, 0x1, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x12, 0x21, 0x4e, 0x12, 0x8, 0x7, 0x8, 0x9, 0x8, 0xd7, 0x20, 0x0, 0xe1, 0x0, 0x0, 0x0
};

// [D_08C0B644] D_08C0B644 Graphics
struct CompressedGraphics D_08c0b644 = {
	/* Huffman Data */		D_08c0b644_huffman,
	/* RLE Data */			D_08c0b644_rledata,
	/* RLE Size */			0xd0,
	/* RLE Offset */		0x1000,
	/* Double Compressed */	TRUE,
};
