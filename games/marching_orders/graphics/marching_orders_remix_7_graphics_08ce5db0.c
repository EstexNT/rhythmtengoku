#include "global.h"
#include "graphics.h"

// // //  D_08CE5DB0  // // //

// [D_08CE5B4C] D_08CE5DB0 Huffman Data
u16 D_08ce5db0_huffmandata[] = {
	0x0000, 0x2222, 0x0035, 0xfefc, 0x0052, 0x8000, 0xf352, 0x0004, 0x0050, 0x0094, 0x40a5, 0x50a9, 0x94aa, 0x3333, 0x0025, 0xfefc, 0x0053, 0x8000, 0xf253, 0x0004, 0x0050, 0x0094, 0x40a5, 0x50a9, 0x94aa, 0x2222, 0x0748, 0x0808, 0x0808, 0x0808, 0x0808, 0x0101, 0x0101, 0x0101, 0x0101, 0x8884, 0x8888, 0x034a, 0x8080, 0x8080, 0x8080, 0x8080, 0xda48, 0x4001, 0xaaa9, 0xaba9, 0x06a4, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0xca48, 0x0406, 0x41a9, 0x41ea, 0x41aa, 0x41aa, 0x41aa, 0x41aa, 0x04aa, 0x01a4, 0xf7fe, 0xf7f7, 0x4aaa, 0xaada, 0x014a, 0x0808, 0x8808, 0xda48, 0x1007, 0x41aa, 0x41aa, 0x41aa, 0x41aa, 0x41aa, 0x41aa, 0x106a, 0xaaae, 0xcddd, 0x00da, 0x2020, 0xdfca, 0x0000, 0x0004, 0x0548, 0x0808, 0x0808, 0x10f8, 0x1010, 0x1f10, 0x0ff0, 0x01a4, 0x0f00, 0xf7f0, 0xdc4a, 0x4003, 0x4020, 0x40b8, 0x42fe, 0x40b8, 0xacaa, 0x044a, 0x1ff8, 0x1010, 0x1010, 0x1010, 0x1010, 0xfd4a, 0x0000, 0x2001, 0x01a4, 0xfefe, 0xfefe, 0xfa84, 0x0002, 0x5100, 0x45a8, 0x45a1, 0xa488, 0x0148, 0x1088, 0x8060, 0x8888, 0x8888, 0x044a, 0x0ff0, 0x0808, 0x0808, 0x0808, 0x8ff8, 0xfa48, 0x1000, 0x041a, 0x884a, 0x0148, 0x8112, 0x1060, 0x00a8, 0xf000, 0xaaa4, 0x4aaa, 0x0f48, 0x007e, 0x7e81, 0xf0ff, 0xff0f, 0x0d01, 0x010d, 0xf1f1, 0x080f, 0x0b0b, 0x08f8, 0x08f8, 0x0808, 0x1f08, 0x1010, 0x1010, 0x0ff0, 0xaaaa, 0xaada, 0x054a, 0x1ff0, 0x1010, 0x1010, 0x1010, 0x01f0, 0x0101, 0xfda4, 0x5400, 0x5455, 0xaada, 0x00a4, 0xfefe, 0x0148, 0x8000, 0x1060, 0xfa48, 0x4002, 0x1040, 0x1090, 0x04a4, 0x03a4, 0xf00e, 0xf7f7, 0xf7f7, 0xf7f7, 0x4aaa, 0x0148, 0x0100, 0x0806, 0xfa84, 0x5402, 0x5254, 0x4a51, 0x2a51, 0x0148, 0x17e4, 0xe008, 0x8444, 0x00a4, 0xff7e, 0xfdca, 0x0400, 0x0800, 0xaaaa, 0x0005, 0xfefc, 0x5432, 0x0002, 0x2840, 0x00d0, 0x00f4, 0x2053, 0x9403, 0xa53f, 0xa94f, 0xaa53, 0xaa94, 0x0648, 0x0ff0, 0xf1ff, 0x0d01, 0x010d, 0xf8ff, 0x0808, 0x0b0b, 0x2548, 0x4001, 0x5555, 0xffaa, 0x0073, 0x0f00, 0x0023, 0x00f0, 0x0273, 0x427e, 0x5a5a, 0x7e42, 0x0043, 0xff00, 0x0248, 0x0200, 0x0002, 0xff0f, 0x0000
};

// [D_08CE5D3C] D_08CE5DB0 Huffman Window 1
u32 D_08ce5db0_window1[] = {
	0xefb3e5dc, 0xdbbd9365, 0x7ffffeff
};

// [D_08CE5D48] D_08CE5DB0 Huffman Window 2
u32 D_08ce5db0_window2[] = {
	0x4254a524, 0x00441692
};

// [D_08CE5D50] D_08CE5DB0 Huffman
struct Huffman D_08ce5db0_huffman[] = {
	/* Data */			D_08ce5db0_huffmandata,
	/* Size */			0x234,
	/* Count */			0x49,
	/* Window 1 */		D_08ce5db0_window1,
	/* Window 2 */		D_08ce5db0_window2,
};

// [D_08CE5D60] D_08CE5DB0 RLE Data
u8 D_08ce5db0_rledata[] = {
	0x1, 0xf, 0x1, 0xf, 0x4, 0xc, 0x10, 0x10, 0x4, 0xc, 0x21, 0xf, 0x11, 0xf, 0x1, 0x10, 0x10, 0xf, 0x5a, 0x6, 0xb, 0x6, 0xa, 0xd, 0x3, 0x5, 0x3, 0xd, 0x41, 0xd, 0x23, 0x5, 0xd, 0x7, 0x3, 0x3, 0xd, 0x3, 0xc, 0x4, 0x1, 0x5, 0xa, 0x6, 0xb, 0x5, 0x3, 0x7, 0x1, 0x3, 0x2, 0x8, 0x11, 0x3, 0x52, 0xc, 0x11, 0x3, 0x3, 0x7, 0x3, 0x4, 0xc, 0x3, 0xd, 0xf, 0x1, 0x3, 0x3, 0x3, 0x3, 0x3, 0x16, 0x4, 0x5, 0x3, 0x1, 0xb, 0x3, 0x8f
};

// [D_08CE5DB0] D_08CE5DB0 Graphics
struct CompressedGraphics D_08ce5db0 = {
	/* Huffman Data */		D_08ce5db0_huffman,
	/* RLE Data */			D_08ce5db0_rledata,
	/* RLE Size */			0x50,
	/* RLE Offset */		0x400,
	/* Double Compressed */	TRUE,
};

u8 D_08ce5dc0[92] = {
	0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00,
	0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x1C, 0x00, 0x78, 0x00,
	0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00,
	0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00,
	0x78, 0x00, 0x78, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x8E, 0x00,
	0x1E, 0x00, 0x28, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00,
	0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x1C, 0x00, 0x78, 0x00
};

