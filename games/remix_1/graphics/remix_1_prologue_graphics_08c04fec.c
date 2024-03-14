#include "global.h"
#include "graphics.h"

// // //  D_08C04FEC  // // //

// [D_08C04950] D_08C04FEC Huffman Data
u16 D_08c04fec_huffmandata[] = {
	0x09e0, 0xc080, 0xe0e0, 0xf8f0, 0x10f8, 0x7030, 0xf0f0, 0x80f1, 0x8f8f, 0x8f8f, 0x0f8f, 0xbc0e, 0x0001, 0x8055, 0x20fa, 0xeabc, 0x9403, 0x503f, 0x94cf, 0x503f, 0x94cf, 0x0fe0, 0xf000, 0xf0f0, 0xf0f0, 0xf0f0, 0xef00, 0xefef, 0xefef, 0xefef, 0x1f00, 0x1f1f, 0x1f1f, 0x1f1f, 0x0f00, 0x0800, 0x0e0c, 0xcf8f, 0xa90e, 0x0001, 0xeee5, 0x5555, 0xbece, 0x0e9b, 0xbace, 0x5000, 0xc40a, 0xee9b, 0xbace, 0x5000, 0xc40a, 0xee9b, 0xccee, 0xeeaa, 0x03e0, 0x10c0, 0x7030, 0xf0f0, 0x000c, 0xbc0e, 0x0002, 0x8855, 0x2255, 0xee55, 0x9ba0, 0x0000, 0x0099, 0x9a9a, 0x180e, 0x7f00, 0x3f7f, 0x1f3f, 0x0f1f, 0xfc0f, 0xf0e0, 0xc0f8, 0xfef0, 0x80f0, 0x0101, 0x0101, 0x0101, 0x0101, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0x3f3f, 0x3f3f, 0x3f3f, 0x3f3f, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x9bce, 0x5000, 0x843a, 0xeaab, 0x9bce, 0x5000, 0x843a, 0xeaab, 0x9bce, 0x5000, 0x843a, 0xeaab, 0xccee, 0xe9bb, 0x07e0, 0x0080, 0x0301, 0x0f07, 0x3f1f, 0x7f3f, 0x7f7f, 0x7f7f, 0x7f7f, 0xa90e, 0x0006, 0x5540, 0x5552, 0x5543, 0x5502, 0x5403, 0x5002, 0x4003, 0x0000, 0x9bce, 0x4000, 0x10e9, 0xaabb, 0x9bce, 0x4000, 0x10e9, 0xaabb, 0x9bce, 0x4000, 0x10e9, 0xaabb, 0xceee, 0x9bbc, 0x07e0, 0x0100, 0x0703, 0x1f0f, 0x7f3f, 0x807f, 0xc080, 0xfce0, 0xfefe, 0xca9e, 0x4001, 0x9000, 0x0e40, 0xa9ee, 0xaceb, 0x9400, 0x5535, 0xcb9e, 0xceee, 0xeba9, 0xcbae, 0x0002, 0xc039, 0x000e, 0xc003, 0xbccc, 0x0e9b, 0xabce, 0xa400, 0x950f, 0xee9b, 0xabce, 0xa400, 0x950f, 0xee9b, 0xabce, 0xa400, 0x950f, 0xee9b, 0xbbce, 0xeeaa, 0x04e0, 0x3010, 0xf070, 0xf1f0, 0x8f83, 0x0f8f, 0xbc0e, 0x0001, 0x8055, 0x20fa, 0xeabc, 0x9400, 0x503f, 0x0be0, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0xefef, 0xefef, 0xefef, 0xefef, 0x1f1f, 0x1f1f, 0x1f1f, 0x1f1f, 0xab0e, 0x0000, 0xeee5, 0xecb0, 0x9001, 0xb099, 0xe0bb, 0xecec, 0x08e0, 0xf8fc, 0xe0f0, 0xc0c0, 0xc1c0, 0x0fc3, 0xff3f, 0xcfcf, 0xcfcf, 0xf0cf, 0xba90, 0x0001, 0x0099, 0x00bb, 0xcbcb, 0x25e0, 0x80f0, 0x8080, 0x0fcf, 0x010e, 0x8f0f, 0x0c0f, 0xf7f0, 0xf3f7, 0xf1f3, 0xe0f1, 0xefe0, 0xefef, 0xefef, 0xefef, 0x101f, 0x1010, 0x1010, 0x1010, 0x0c00, 0x0c0c, 0x0c0c, 0x0c0c, 0xf3fc, 0xf3f3, 0xf3f3, 0xf3f3, 0x0803, 0x0808, 0x0808, 0x0808, 0xf3f8, 0xf3f3, 0xf3f3, 0xf3f3, 0xf7f3, 0xf7f7, 0xf7f7, 0xf7f7, 0xa90e, 0x4002, 0x0255, 0x0300, 0x0200, 0x0e0e, 0x1010, 0x1010, 0xf010, 0xefef, 0xefef, 0xefef, 0x0fef, 0x0808, 0x0808, 0x0808, 0xf808, 0x70f0, 0x3030, 0x0010, 0x0010, 0xbaee, 0x030e, 0xf0e0, 0xf8f0, 0xfcfc, 0x00fe, 0x0000, 0xbccc, 0xee9b, 0x16e0, 0xc0c0, 0xc0c0, 0xc0c0, 0x3fe0, 0x3f3f, 0x3f3f, 0x3f3f, 0xf03f, 0xf0f0, 0xf0f0, 0xf0f0, 0xeff0, 0xefef, 0xefef, 0xefef, 0x1fef, 0x1f1f, 0x1f1f, 0x1f1f, 0x0f1f, 0xfc0c, 0xfcfc, 0xfcfc, 0xbce0, 0x0003, 0x0055, 0x0064, 0x0090, 0x00b0, 0xab00, 0x010e, 0xfcfe, 0xf0f8, 0xb0ec, 0x4401, 0x11aa, 0x33aa, 0xeab0, 0x0000, 0x0099, 0xfce0, 0x0000, 0x0099, 0xecec, 0x41e0, 0xf0f0, 0xf0f0, 0xf0f0, 0xc0c0, 0xe0e0, 0xf0f0, 0x80f0, 0x0f7f, 0xf030, 0x70f1, 0x7070, 0xe030, 0xefef, 0xefef, 0xefef, 0x1fef, 0x1010, 0x1010, 0x1010, 0x0010, 0x0c0c, 0x0c0c, 0x0c0c, 0xfc0c, 0xf3f3, 0xf3f3, 0xf3f3, 0x03f3, 0x0808, 0x0808, 0x0808, 0xf808, 0xf3f3, 0xf3f3, 0xf3f3, 0xf3f3, 0xf7f7, 0xf7f7, 0xf7f7, 0x07f7, 0xfefe, 0xfefe, 0x0101, 0x7f01, 0x7f7f, 0x7f7f, 0x7f7f, 0xfc7f, 0x70f8, 0xe020, 0xe0e0, 0xf0f0, 0xf8f0, 0x3ff8, 0x1f1f, 0x1f1f, 0x0f0f, 0x080f, 0x0808, 0x0c0c, 0x8f0e, 0x0f0f, 0xff0f, 0x0efe, 0x1fff, 0xf01f, 0x00ce, 0xa550, 0xcece, 0x00bc, 0x5500, 0x00ab, 0x5500, 0x9a9a, 0x9a9a, 0x030e, 0x0300, 0x0703, 0x1f0f, 0x7f3f, 0xba90, 0x0000, 0x0000, 0xa900, 0xebb9, 0x9aec, 0x5400, 0x550a, 0xebb9, 0x9aec, 0x5400, 0x550a, 0xebb9, 0x0aec, 0x5401, 0xd50a, 0xffff, 0xa9a9, 0x21e0, 0x70f0, 0x1030, 0xf0f0, 0xc0e0, 0x8080, 0xcf81, 0xcfcf, 0x0e0f, 0x3f07, 0x0f8f, 0x030c, 0x0101, 0xfefe, 0xfefe, 0xfefe, 0x1010, 0x1010, 0x1010, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x3f3f, 0x3f3f, 0x3f3f, 0x3f3f, 0x8080, 0x8080, 0x8080, 0x8080, 0x3f3f, 0x3f3f, 0x3f3f, 0x3f3f, 0xa90e, 0x0007, 0x0040, 0x0180, 0x05c0, 0x1580, 0x55c0, 0x5580, 0x55c1, 0x5585, 0xecb0, 0x0000, 0xffa5, 0xceba, 0x9404, 0xf5ab, 0x94aa, 0xf5ab, 0x94aa, 0xf5ab, 0x030e, 0x0800, 0x0808, 0x0c08, 0x0c0c, 0x009e, 0x04e0, 0xf7f0, 0xf7f7, 0xf7f7, 0xf7f7, 0x3007, 0xbce0, 0x0002, 0x0009, 0x0006, 0x000e, 0x90ba, 0xa400, 0xacaa, 0x17e0, 0xfff0, 0xf7f7, 0xf7f7, 0xf7f7, 0x77f7, 0x3070, 0x1030, 0xc010, 0x80ff, 0xfce0, 0xfefc, 0xefe7, 0x0f8f, 0xf00c, 0x01fe, 0x7f0f, 0x030f, 0x0f1f, 0xff0c, 0xc080, 0xfcf0, 0xfcff, 0x07fe, 0xf0fe, 0xbc0e, 0x0004, 0x2555, 0x8555, 0xa555, 0xb555, 0xf555, 0x9ba0, 0x0000, 0x0090, 0xe9a0, 0x9000, 0xffff, 0xb0ec, 0x4403, 0x11a4, 0x00a1, 0x33a0, 0xffa3, 0x9a0b, 0x5001, 0x5222, 0x5eee, 0x030e, 0x3fc0, 0x0f1f, 0x0307, 0x0001, 0xa9a9, 0x09a9, 0x020e, 0x0ff0, 0xf0ff, 0x8080, 0xbc0e, 0x0003, 0x8840, 0x2248, 0xee62, 0xff6e, 0xea0b, 0x4001, 0x4888, 0x4bff, 0xcb9e, 0x0000, 0x0039, 0xecba, 0x9eee, 0xeecb, 0xa9ee, 0xeeec, 0xba9e, 0xeeec, 0xcba0, 0xeeee, 0xec00, 0x050e, 0xfef0, 0xf8fc, 0xe0f0, 0xf0c0, 0xff0f, 0x0ff0, 0xa9e0, 0x0001, 0x5500, 0x000e, 0xc0ab, 0xa400, 0xacaa, 0x1ce0, 0xf7f0, 0xf7f7, 0xf7f7, 0xf7f7, 0x7f07, 0x073f, 0x3f00, 0x0f1f, 0x0f03, 0xcf08, 0x0e0f, 0x7f7f, 0x3f3f, 0x181f, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x1f7f, 0x3f03, 0x0f1f, 0x0107, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0xf3f7, 0x70f1, 0x1030, 0xcab0, 0x0002, 0x1999, 0x1555, 0x3777, 0xf0ec, 0x4400, 0x1184, 0x0ece, 0x020e, 0x8080, 0x0f80, 0xf0ff, 0xa9e0, 0x0000, 0xee55, 0x09a9, 0x100e, 0xc080, 0xf0e0, 0xfcf8, 0x07fe, 0x1f0f, 0x7f3f, 0x080f, 0x0c08, 0xbf1e, 0xf0ff, 0xf0f0, 0xf0f0, 0xf0f0, 0xc080, 0xf0e0, 0xfcf8, 0xfffe, 0xf0ce, 0xa400, 0xa1aa, 0x0be0, 0x3030, 0x3030, 0x3030, 0xf7f0, 0xf7f7, 0xf7f7, 0xf7f7, 0x0807, 0x0808, 0x3f08, 0x3f3f, 0x303f, 0x0000, 0xb9ee, 0xaceb, 0x6400, 0x5af5, 0xb9ee, 0xaceb, 0x6400, 0x5af5, 0xb9ee, 0xeceb, 0xaae0, 0xeecc, 0x03e0, 0x7f00, 0x7f7f, 0x7f7f, 0x7f7f, 0xcf0e, 0x0000, 0x5540, 0x0000
};

// [D_08C04EEC] D_08C04FEC Huffman Window 1
u32 D_08c04fec_window1[] = {
	0xac56e29f, 0xdf8a9162, 0x5336f62e, 0x00f3ff7d, 0x030a76fc
};

// [D_08C04F00] D_08C04FEC Huffman Window 2
u32 D_08c04fec_window2[] = {
	0xdbf7bb76, 0xd9de0e8a, 0x005ab6e7
};

// [D_08C04F0C] D_08C04FEC Huffman
struct Huffman D_08c04fec_huffman[] = {
	/* Data */			D_08c04fec_huffmandata,
	/* Size */			0x78b,
	/* Count */			0x9a,
	/* Window 1 */		D_08c04fec_window1,
	/* Window 2 */		D_08c04fec_window2,
};

// [D_08C04F1C] D_08C04FEC RLE Data
u8 D_08c04fec_rledata[] = {
	0x1, 0x12, 0xe, 0x3, 0xc, 0x24, 0xd, 0x3, 0x1, 0xb, 0x1, 0x3, 0x3f, 0xd, 0x21, 0x5, 0x2f, 0xb, 0x1, 0x5, 0x5, 0x5, 0x1, 0x9, 0x77, 0x13, 0xd, 0xf, 0x21, 0x8, 0xd, 0x7, 0x24, 0x3, 0x13, 0x9, 0x1, 0x5, 0x1, 0x9, 0x7, 0xa, 0x30, 0xf, 0x2b, 0x5, 0x1, 0x9, 0xb, 0x8, 0x4, 0x3, 0x5, 0x3, 0x5, 0x9, 0x87, 0xf, 0x20, 0x10, 0x33, 0xd, 0x21, 0x30, 0x30, 0xf, 0x3, 0x5, 0x8, 0x4, 0x3f, 0xd, 0x7, 0x9, 0x1, 0x7, 0x79, 0xf, 0x8, 0x8, 0x6, 0x1a, 0x19, 0x28, 0x1f, 0x21, 0x14, 0xa, 0x6, 0x9, 0x7, 0x9, 0x3c, 0x7, 0xa, 0xd, 0xd, 0x7, 0x5, 0x5, 0x5, 0x5, 0x6, 0xa, 0xd, 0x3, 0xc, 0x5, 0x70, 0x1f, 0x3c, 0x11, 0x4, 0x6, 0x5, 0x4, 0x4, 0xb, 0x5, 0x6, 0x7, 0xd, 0x9, 0x9, 0x1, 0x5, 0x5, 0x5, 0x1, 0xe, 0x2, 0xd, 0x3, 0x6, 0xd, 0xb, 0x2, 0xd, 0x3, 0xd, 0x33, 0xd, 0x3, 0xd, 0x3, 0xd, 0x1, 0x31, 0x21, 0x3, 0xd, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0x9, 0x17, 0xf, 0x1, 0xe, 0x2, 0xa, 0xd, 0x19, 0x4, 0xb, 0x1, 0x3, 0x5, 0x7, 0xd, 0x4, 0x10, 0x1a, 0xf, 0x6, 0x10, 0x1d, 0xd, 0x6, 0x11, 0x31, 0x1, 0xd, 0x3, 0xd, 0x3, 0xd, 0x1b, 0x5, 0x3, 0x4, 0x19, 0x21, 0x38, 0x7, 0x9, 0x0, 0xc8, 0x21, 0x0, 0xe0, 0x0, 0x0
};

// [D_08C04FEC] D_08C04FEC Graphics
struct CompressedGraphics D_08c04fec = {
	/* Huffman Data */		D_08c04fec_huffman,
	/* RLE Data */			D_08c04fec_rledata,
	/* RLE Size */			0xcc,
	/* RLE Offset */		0x1000,
	/* Double Compressed */	TRUE,
};
