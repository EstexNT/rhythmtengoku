#include "global.h"
#include "graphics.h"

// // //  D_08C47930  // // //

// [D_08C47048] D_08C47930 Huffman Data
u16 D_08c47930_huffmandata[] = {
	0xff10, 0xf7f0, 0xf0f0, 0xf0f0, 0xfbf9, 0xdfc7, 0xebef, 0xbf7f, 0x101f, 0xf070, 0xf1f0, 0xf7f7, 0xf3fb, 0xf8f0, 0xf8f8, 0xf8f8, 0xf8f8, 0x8f0f, 0xc7c7, 0xe3e7, 0xf1e3, 0xf030, 0xf1f0, 0x03f1, 0x0101, 0x1f01, 0xc080, 0xf0e0, 0x0fe0, 0x5f3f, 0x7f7f, 0xefcf, 0x0fdf, 0x0408, 0x0a0c, 0x0101, 0xf3fc, 0xf1f0, 0xf7f7, 0xf3f3, 0xf9f1, 0xf8f9, 0x7c7c, 0x7e7e, 0xcfce, 0xefef, 0x7fef, 0x007f, 0x0301, 0x1707, 0x1f17, 0x001f, 0x80c0, 0x6730, 0x3e0f, 0x1030, 0xeff0, 0xf0f1, 0xf3f3, 0xf1f3, 0xfc30, 0xfdfc, 0xcf80, 0x0e2d, 0x0f9f, 0xf807, 0xff7f, 0xfefe, 0xfcfe, 0xf8fc, 0x1010, 0x1010, 0x2010, 0x1020, 0x0010, 0x3a1a, 0x3e3e, 0xfc7c, 0xf8f0, 0xfcfc, 0xfdfe, 0xfdfd, 0xe3c7, 0xf3e3, 0xf1f1, 0xf0e8, 0xf1f1, 0xf9f1, 0xf9f9, 0xf9f9, 0x3f3f, 0x7f7f, 0x000f, 0x0c08, 0x0e0c, 0x0e0e, 0xf1ff, 0xf0f1, 0x7070, 0x7070, 0xef80, 0x3f7f, 0xbf3f, 0xdfdf, 0xefef, 0x010f, 0x1901, 0x1d1d, 0xc0c0, 0xf8f8, 0xfefe, 0x6360, 0x0f63, 0xef8e, 0xefef, 0xefef, 0xefef, 0xefef, 0x0fef, 0x0c08, 0x0e0c, 0xee0e, 0x7f3f, 0x0f7f, 0x1010, 0x1818, 0x1c18, 0x0c1c, 0x0808, 0x3fef, 0x3f3f, 0x070f, 0x0707, 0xc7e1, 0xe7c7, 0x0fe7, 0xfef8, 0xc000, 0xf8f0, 0xfefc, 0xfffe, 0x0f07, 0x0f0f, 0x0f0f, 0x1f0f, 0x0606, 0x0707, 0x9f1f, 0x8f9f, 0xfef8, 0xf0fe, 0xf0f0, 0xf0f0, 0xf0f0, 0x00f8, 0x0f3f, 0x0808, 0x0c0c, 0x0c0c, 0x080c, 0x1f01, 0x1f1f, 0x3f1f, 0x7f7f, 0x7f7f, 0x3f3f, 0xe010, 0xfefc, 0x1f7f, 0x7f3f, 0x9fdf, 0x7f1f, 0x1c1f, 0x0c0c, 0xefcc, 0xcf0f, 0x1fef, 0xe000, 0xf7f3, 0xfdfd, 0xf8fc, 0x87f0, 0x8787, 0x8787, 0x8383, 0xff03, 0x7f7f, 0x0f7f, 0x0307, 0x0707, 0xf007, 0xfef0, 0xfefe, 0xe0e0, 0xf0e0, 0x00f0, 0x0606, 0x0706, 0x0707, 0x6f07, 0x0f7f, 0x0c0c, 0x080c, 0x0e00, 0x0e0e, 0x0e0c, 0x0e0e, 0x010c, 0x0707, 0x0707, 0x7070, 0xf030, 0xfbf9, 0xf7f7, 0xfff7, 0x387b, 0x0308, 0xc3c3, 0xe0e1, 0xfef6, 0x6000, 0x6060, 0xe0e0, 0xe0e0, 0xfefe, 0xfcfc, 0xf8fc, 0xf8f8, 0x1f1d, 0x1f1f, 0x0f1f, 0x0f0f, 0x0303, 0x1f1f, 0x7f7f, 0x8080, 0xb898, 0x70b8, 0x7f70, 0x080f, 0x0e0c, 0x0f0e, 0x6c0f, 0x6f6c, 0x0707, 0x0307, 0x0707, 0x0307, 0xfeff, 0xfefe, 0xfcfe, 0xc0e0, 0x0f0f, 0x030f, 0x1f03, 0x1f1f, 0xe0f0, 0xff10, 0xe0c0, 0xf0e0, 0x0303, 0x0101, 0xef0f, 0xf0f1, 0x060f, 0x0707, 0x0307, 0x301f, 0x7f3e, 0x0f7f, 0x7818, 0xf8f8, 0x03f1, 0x1010, 0x78f0, 0xfefe, 0xfcfe, 0xf8f8, 0xf7f8, 0xf7f7, 0x03c7, 0x0f0f, 0x0e0e, 0x0c0c, 0x0c08, 0x1c0c, 0x381c, 0xb838, 0xf8f8, 0xf8f8, 0xf0f0, 0x7ff0, 0x3f7f, 0x3f3f, 0x1f1f, 0x101f, 0x7030, 0x7070, 0xf070, 0x01f7, 0x0301, 0x0303, 0x0303, 0xf8c1, 0xf8f8, 0xfefc, 0xfefe, 0xf0fe, 0xf0f0, 0xe0e0, 0xe0e0, 0x80cf, 0x7fc0, 0x070f, 0x1f1f, 0x80df, 0x8080, 0x8100, 0x0fef, 0x1fef, 0x1f1f, 0x1e0f, 0x7f7f, 0x007f, 0x0101, 0xf801, 0x30f6, 0xf0f0, 0xfc01, 0xfe78, 0xfefe, 0xf7f7, 0x0107, 0x0703, 0x9707, 0xf080, 0xfff3, 0xf3f3, 0xf1f1, 0x70f0, 0xc000, 0x8fcf, 0x8f8f, 0x8f8f, 0x1f0f, 0x3010, 0x3030, 0x1030, 0xb010, 0x0f0f, 0x0e0f, 0x0808, 0x0108, 0x3f1f, 0xf07f, 0xf7f1, 0x80f7, 0x8041, 0x3f3f, 0x9f9f, 0xcfdf, 0xe7cf, 0xf7e7, 0x7f7f, 0x0e0f, 0x0f0e, 0x9f1f, 0x9f9f, 0x0e0f, 0x0e0e, 0x0f0e, 0x0f0f, 0xf1ff, 0xf1f1, 0x70f0, 0x7070, 0xf8e0, 0xfefc, 0xf3f3, 0xf7f7, 0xf7f7, 0x93f7, 0xefcf, 0xefef, 0xefef, 0xcfcf, 0x8fcf, 0x010f, 0x1f0f, 0xc03f, 0x1010, 0xf3f0, 0x3010, 0x7070, 0xf170, 0x7e7e, 0x3f7f, 0xbfbf, 0x0f9f, 0x0606, 0x0707, 0x0303, 0x0f01, 0x3f3f, 0x8080, 0x8080, 0xdccc, 0x1f1d, 0x3f3f, 0x3f3f, 0x1f3f, 0xf8f8, 0xfcfc, 0xfcfc, 0xf8f8, 0xd010, 0x0e01, 0x780f, 0x80fb, 0xfdff, 0xf9fc, 0xfdf9, 0xf7fd, 0xf7f7, 0x01f7, 0x7fcf, 0xfc7c, 0xcc1c, 0x3fdf, 0x301f, 0xf010, 0xf7f3, 0xf3f7, 0xf9f3, 0xf7fe, 0xf7f7, 0xfbfb, 0xfdfb, 0xfeff, 0xfefe, 0xfcfe, 0xc1ff, 0xa1a1, 0xe1a1, 0xc1c1, 0x87c3, 0xc387, 0xe3c3, 0xe1e1, 0x10e0, 0x1010, 0x6030, 0x7000, 0xf9f8, 0xf7f3, 0xf0f7, 0xf7f7, 0xe0ff, 0xf0e0, 0x7070, 0xf030, 0xf7f1, 0xf7f7, 0x0107, 0x0303, 0xb898, 0xf8f8, 0xc0c0, 0xe0e0, 0xf8f0, 0xfcfc, 0x3f3f, 0x1f1f, 0x010f, 0x0300, 0xf0f0, 0xf0f0, 0xe0f0, 0xfcf0, 0x070f, 0x3f0f, 0x3f3f, 0x7f7f, 0x80f0, 0xc000, 0xc0c0, 0x0080, 0x1f1f, 0x1f1f, 0x0f1f, 0x0f0f, 0xfefe, 0xfefe, 0xfcfc, 0xf8f8, 0x0707, 0x0707, 0x0303, 0x0101, 0x8080, 0x8080, 0xf080, 0xf7fe, 0xf7f7, 0xcff7, 0xef8f, 0x0e0f, 0x0c0e, 0x080c, 0x0f03, 0x0f0f, 0x070f, 0x0f07, 0xf01f, 0xff10, 0xf8f8, 0xf8f8, 0x10fc, 0x7070, 0xe0f0, 0x8fcf, 0x0f8f, 0xcdce, 0xef8f, 0xcfcf, 0x87c7, 0x8387, 0x3ff3, 0x5c5e, 0x785c, 0x3838, 0xfc38, 0xf0f0, 0xf0f0, 0xf0f0, 0xe0f0, 0xe2e1, 0x0c00, 0x6e6e, 0xfefe, 0xfefc, 0xf7fe, 0x9010, 0x3fbf, 0x0f0f, 0x8f8f, 0x0fdf, 0x0101, 0x0303, 0x0c0c, 0x0c0c, 0x0808, 0x0808, 0x0808, 0x0707, 0x7f07, 0x7f7f, 0x080f, 0x0808, 0xcf8c, 0xefcf, 0x010f, 0x0101, 0x6301, 0xf767, 0xfef7, 0xfefe, 0xe0e0, 0x01e0, 0x0101, 0x1f03, 0x3f3f, 0x3f7f, 0x3f3f, 0xfcde, 0xe0e0, 0x30c0, 0x7030, 0xf776, 0xf7f7, 0x03f3, 0x8e00, 0x8f8f, 0x0f8f, 0x0f0f, 0x0808, 0x8808, 0x707f, 0x787c, 0xf673, 0xfbfb, 0xfbfd, 0xf9f0, 0xf3e7, 0xe0ff, 0xc0c0, 0xc0c0, 0xcf80, 0x80ff, 0xe0e0, 0x7f7f, 0x3f3f, 0x3f3f, 0x3c1e, 0x0707, 0x0e0e, 0x0f0c, 0xdf9f, 0xf803, 0xf0f0, 0xf0f0, 0x80e0, 0xc0c0, 0xc0c0, 0x3010, 0xf3f0, 0xf3f3, 0xf7f3, 0x78fc, 0x7f3c, 0x603f, 0xf1f0, 0xf0f0, 0x70f0, 0xcfc0, 0x8fcf, 0xcfcf, 0x8fcf, 0xf1f7, 0xf1f1, 0xf0f1, 0x7070, 0xfe60, 0xfcfe, 0xfcfc, 0x00fc, 0xc0c0, 0xe0c0, 0xe0e0, 0x7fe0, 0x1f3f, 0x0706, 0x3f3f, 0xbc3f, 0xfdfd, 0x70f0, 0x7070, 0x3030, 0x7030, 0xefef, 0x8fef, 0x0f0f, 0x0e0f, 0x0c0e, 0x3303, 0x3737, 0x3f3f, 0x3f3f, 0xf878, 0xfef8, 0xfefe, 0xf8fc, 0xfcfc, 0xfefe, 0xfefe, 0xfcfe, 0xfcfc, 0xfefe, 0x3010, 0xf1f0, 0xfff7, 0xf3f0, 0xf7f7, 0xc786, 0xdfc7, 0xf7ef, 0xf010, 0x03f1, 0xfef8, 0xfcff, 0xfefe, 0xfefe, 0x00fe, 0xc080, 0xe0c0, 0xe0e0, 0x06e0, 0x0707, 0x1f1f, 0x8f1f, 0xe087, 0xfef8, 0xf8fe, 0xf0f8, 0xf0f0, 0xf0f0, 0xc0f0, 0xf8f0, 0xfefc, 0xfefe, 0xfcfc, 0xf8fc, 0xe0f8, 0xc0e0, 0x81c0, 0x0f87, 0x101f, 0xf3f0, 0xf3f3, 0xf3f1, 0xe3f3, 0x1011, 0x3010, 0x3030, 0xcfe0, 0x0f8f, 0xc606, 0xcfcf, 0x707f, 0xf0f0, 0xf0f0, 0xf0f0, 0x1010, 0xf1f0, 0x0c07, 0x0f0c, 0x060f, 0x0f0e, 0xefcf, 0x60ef, 0xe060, 0x0c01, 0x0c0c, 0x0303, 0x0603, 0x0786, 0x0706, 0x7f3f, 0x3f7f, 0x3030, 0x1030, 0x0010, 0x8070, 0xc080, 0xc0c0, 0x1ec0, 0x1f1f, 0x7f7f, 0x3f7f, 0x301f, 0x3030, 0xf030, 0x00f0, 0xb030, 0xf3b3, 0xf7f3, 0x07f7, 0x0c00, 0x0f0e, 0x8f8f, 0xff8f, 0xf7fe, 0x07f7, 0x0f0f, 0x0e0e, 0x0c0e, 0x0c0c, 0xecec, 0xfcfc, 0xfcfc, 0xfdfd, 0x5f10, 0xfcfc, 0xfdf9, 0x1ffd, 0x3f3f, 0x0f3f, 0x0707, 0xe0c7, 0xf8e0, 0xc1c1, 0xc0c1, 0xfdfc, 0xf7f9, 0x0100, 0x7fce, 0x3f7f, 0x7f3f, 0xf0e1, 0xfcfe, 0xf7fe, 0x00fe, 0x8180, 0x8181, 0xc1c1, 0x87c1, 0x8787, 0x8387, 0x8383, 0x0081, 0x3f1e, 0xdf7f, 0xf0f0, 0x3870, 0x0818, 0xe808, 0x7e7f, 0x7e7e, 0x7f7f, 0x7f7f, 0xe07f, 0xe3e0, 0xe7e7, 0x0307, 0x0303, 0xcf01, 0xefcf, 0xe7ef, 0xe7e7, 0xefe7, 0xefef, 0x080f, 0x0f0b, 0x1e1f, 0x181c, 0x7070, 0x7060, 0xfcf0, 0xc0fe, 0xf0f0, 0xf0f0, 0xf0f0, 0x03f3, 0xe7c7, 0x17e7, 0x3010, 0x3830, 0x1e3e, 0xff1f, 0xe3e3, 0xc1e3, 0xf1c1, 0xf1f3, 0xb071, 0xf3f3, 0xf0f1, 0x01f0, 0x0e08, 0x0f8f, 0x0f7f, 0x0e08, 0xcf8f, 0x0f0f, 0x1f7f, 0x7f3f, 0x6f7f, 0x7c6c, 0xfe7e, 0x3cf7, 0xfd7d, 0xf7f7, 0x3e7b, 0x0fff, 0x0868, 0x0c0c, 0x0e0e, 0x3e1e, 0x7f7e, 0x1111, 0x0000
};

// [D_08C47714] D_08C47930 Huffman Window 1
u32 D_08c47930_window1[] = {
	0x00d6b64f
};

// [D_08C47718] D_08C47930 Huffman Window 2
u32 D_08c47930_window2[] = {
	0x00d6b650
};

// [D_08C4771C] D_08C47930 Huffman
struct Huffman D_08c47930_huffman[] = {
	/* Data */			D_08c47930_huffmandata,
	/* Size */			0xd82,
	/* Count */			0x6,
	/* Window 1 */		D_08c47930_window1,
	/* Window 2 */		D_08c47930_window2,
};

// [D_08C4772C] D_08C47930 RLE Data
u8 D_08c47930_rledata[] = {
	0x1, 0xf, 0x1, 0x6, 0x2, 0x7, 0xa, 0x21, 0x2, 0x3, 0x9, 0x7, 0x2, 0x9, 0x2, 0x3, 0x2, 0x6, 0x11, 0x7, 0x21, 0x5, 0xb, 0x7, 0x9, 0x8, 0x8, 0x5, 0x2, 0x9, 0xa, 0x5, 0x6, 0xa, 0x1, 0x8, 0x8, 0xb, 0x6, 0xf, 0x2, 0xd, 0x1, 0x7, 0x5, 0x4, 0x8, 0x8, 0x19, 0x3, 0x1e, 0x5, 0x1, 0xe, 0x7, 0xa, 0x10, 0x6, 0x7, 0x3, 0x1, 0x5, 0xb, 0xd, 0x2, 0xe, 0x13, 0xd, 0x1f, 0x3, 0xa, 0x10, 0x2f, 0x7, 0x20, 0x8, 0x4, 0x4, 0x11, 0x5, 0xb, 0x4, 0xc, 0x9, 0xa, 0xc, 0x8, 0x8, 0xc, 0x4, 0x1, 0x4, 0xd, 0xf, 0x6, 0x9, 0x15, 0xb, 0x1, 0xb, 0x2, 0x3, 0x18, 0x7, 0x1, 0xb, 0x3a, 0xa, 0x15, 0xb, 0x11, 0xb, 0x11, 0xc, 0x8, 0x3, 0x2, 0x5, 0xe, 0x8, 0x8, 0x7, 0xa, 0x6, 0x8, 0x8, 0x9, 0x7, 0x8, 0x8, 0x2, 0xe, 0x19, 0x8, 0x5, 0x4, 0x10, 0x6, 0x1, 0x6, 0x1e, 0xb, 0x1, 0x6, 0x1a, 0x5, 0x16, 0x7, 0xe, 0x5, 0xe, 0xc, 0x30, 0x4, 0xd, 0x6, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x1, 0x4, 0xc, 0x9, 0x3d, 0x4, 0xd, 0x6, 0x3, 0x9, 0x7, 0x3, 0x15, 0x7, 0x1, 0x4, 0x12, 0x9, 0x10, 0x7, 0x18, 0x5, 0x2d, 0x9, 0xf, 0x7, 0x31, 0xc, 0x4, 0x4, 0x18, 0x3, 0x1, 0x8, 0x3, 0x5, 0x17, 0x14, 0x5, 0x9, 0x7, 0x9, 0x2, 0x4, 0x8, 0x3, 0x6, 0x5, 0xb, 0x6, 0x2, 0x3, 0x36, 0xe, 0x7, 0x4, 0x6, 0x7, 0x9, 0x3, 0x7, 0x5, 0x1, 0xc, 0x4, 0x7, 0x2, 0x7, 0x4, 0xc, 0x14, 0xb, 0x30, 0x5, 0x7, 0x5, 0x17, 0xa, 0xf, 0x7, 0x9, 0xe, 0x2, 0x5, 0x7, 0x3, 0x1, 0x5, 0x1b, 0xb, 0x15, 0x4, 0x2c, 0xb, 0x5, 0xc, 0x4, 0xb, 0x5, 0xe, 0x7, 0xa, 0x8, 0x9, 0x6, 0x6, 0x7, 0xc, 0xa, 0xd, 0x4, 0x5, 0x4, 0x8, 0x5, 0x4, 0x8, 0x4, 0x2, 0x13, 0x2, 0x11, 0x2, 0x5, 0x10, 0x6, 0x2b, 0x3, 0x17, 0x5, 0x1, 0x8, 0x8, 0x9, 0x17, 0x9, 0x6, 0x8, 0x9, 0x7, 0x8, 0x9, 0x82, 0x5, 0x1, 0x7, 0x2, 0x7, 0x1a, 0x3, 0x1e, 0x4, 0x1, 0x7, 0x3d, 0xb, 0x1a, 0x6, 0x8, 0x9, 0x2, 0xd, 0x1, 0x5, 0x4, 0xe, 0x4, 0x4, 0xa, 0x6, 0x1, 0x7, 0x8, 0x5, 0xc, 0x8, 0x8, 0x9, 0x7, 0x4, 0x6, 0x5, 0x11, 0x7, 0x8, 0x3, 0x8, 0x9, 0x6, 0x6, 0x1, 0xa, 0x1f, 0x6, 0x7, 0x9, 0x21, 0x6, 0x14, 0x9, 0xc, 0xa, 0x17, 0xa, 0x27, 0xe, 0xd, 0xa, 0xa, 0xb, 0xf, 0x5, 0x7, 0x6, 0x4, 0xd, 0xe, 0x4, 0x22, 0x3, 0x31, 0xb, 0x11, 0x8, 0x13, 0x3, 0x38, 0x8, 0x1, 0x5, 0x13, 0x7, 0x9, 0x4, 0x4, 0x9, 0x7, 0x9, 0x12, 0x4, 0x28, 0x8, 0x1c, 0xa, 0xa, 0xe, 0x13, 0x5, 0x3, 0x8, 0x15, 0x4, 0x2a, 0x8, 0x5, 0x8, 0x8, 0x3, 0xd, 0x9, 0x7, 0xa, 0x6, 0x9, 0x6, 0xb, 0x6, 0x4, 0x1b, 0x5, 0x1c, 0xb, 0x4, 0x8, 0x2b, 0x8, 0x17, 0x3, 0x15, 0x12, 0x1a, 0xa, 0xa, 0x9, 0x6, 0x7, 0x4, 0x9, 0x3, 0x7, 0xd, 0xe, 0x6, 0x8, 0x2, 0x18, 0x2, 0x4, 0x29, 0x7, 0x12, 0xd, 0x12, 0x5, 0xb, 0x7, 0x8, 0x9, 0x34, 0x3, 0x1, 0x6, 0xa, 0x9, 0x7, 0x8, 0x24, 0x4, 0xf, 0xc, 0x5, 0x8, 0x8, 0x7, 0x3, 0x5, 0x1, 0x6, 0xa, 0xd, 0x2, 0x6, 0x3, 0x8, 0x8, 0x7, 0x9, 0xc, 0x2, 0x9, 0x6, 0xf, 0xc, 0xc, 0x4, 0x8, 0x8, 0x3, 0x9, 0x3, 0x1, 0x9f, 0x0, 0x0
};

// [D_08C47930] D_08C47930 Graphics
struct CompressedGraphics D_08c47930 = {
	/* Huffman Data */		D_08c47930_huffman,
	/* RLE Data */			D_08c47930_rledata,
	/* RLE Size */			0x202,
	/* RLE Offset */		0x1600,
	/* Double Compressed */	TRUE,
};

u8 D_08c47940[176] = {
	0x78, 0x00, 0x46, 0x00, 0x78, 0x00, 0x46, 0x00, 0xBE, 0x00, 0x73, 0x00,
	0x78, 0x00, 0x46, 0x00, 0x78, 0x00, 0x46, 0x00, 0x78, 0x00, 0x46, 0x00,
	0x78, 0x00, 0x46, 0x00, 0x78, 0x00, 0x46, 0x00, 0x78, 0x00, 0x46, 0x00,
	0x78, 0x00, 0x6E, 0x00, 0x78, 0x00, 0x6E, 0x00, 0x78, 0x00, 0x6E, 0x00,
	0x78, 0x00, 0x6E, 0x00, 0x78, 0x00, 0x6E, 0x00, 0x78, 0x00, 0x6E, 0x00,
	0x78, 0x00, 0x6E, 0x00, 0x78, 0x00, 0x6E, 0x00, 0x32, 0x00, 0x6E, 0x00,
	0x32, 0x00, 0x6E, 0x00, 0x32, 0x00, 0x6D, 0x00, 0x32, 0x00, 0x6E, 0x00,
	0x32, 0x00, 0x6E, 0x00, 0xBE, 0x00, 0x73, 0x00, 0xBE, 0x00, 0x73, 0x00,
	0xBE, 0x00, 0x73, 0x00, 0xBE, 0x00, 0x73, 0x00, 0xBE, 0x00, 0x73, 0x00,
	0x32, 0x00, 0x6E, 0x00, 0x32, 0x00, 0x6E, 0x00, 0xBE, 0x00, 0x73, 0x00,
	0xBE, 0x00, 0x73, 0x00, 0xBE, 0x00, 0x73, 0x00, 0xBE, 0x00, 0x73, 0x00,
	0xBE, 0x00, 0x73, 0x00, 0x32, 0x00, 0x6E, 0x00, 0x32, 0x00, 0x6E, 0x00,
	0x78, 0x00, 0x46, 0x00, 0x78, 0x00, 0x46, 0x00, 0x32, 0x00, 0x6E, 0x00,
	0xC8, 0x00, 0x08, 0x00, 0x78, 0x00, 0x9A, 0x00, 0x78, 0x00, 0x90, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x54, 0x00, 0x15, 0x00
};
