#include "global.h"
#include "graphics.h"

// // //  D_08C583BC  // // //

// [D_08C57A24] D_08C583BC Huffman Data
u16 D_08c583bc_huffmandata[] = {
	0x0f5a, 0x01f0, 0x31cc, 0xb030, 0x3730, 0x3030, 0x3030, 0x7080, 0x070f, 0x0707, 0x0707, 0x0707, 0x0207, 0x0202, 0x0202, 0xea02, 0x0702, 0xa566, 0x055a, 0x4040, 0x4040, 0x0300, 0x0303, 0x0303, 0x0303, 0xaa55, 0x77aa, 0x035a, 0x0202, 0x0202, 0x0202, 0x0202, 0x02ca, 0xfff8, 0x3080, 0x03f0, 0xcccc, 0x075a, 0x38c0, 0x0707, 0x0707, 0x0707, 0x0777, 0x0e07, 0x31ce, 0x1fe0, 0x02ca, 0xfcf0, 0xfefc, 0x8080, 0xaaaa, 0xccaa, 0x0e5a, 0x3fc0, 0x0210, 0x0202, 0x0202, 0x8202, 0x4c4f, 0x4053, 0x4040, 0x4040, 0x0700, 0xff07, 0xf803, 0x0307, 0x0303, 0xe303, 0x5555, 0xaaa5, 0x0bca, 0x3010, 0x7070, 0xf1f0, 0xf7f3, 0xf3f0, 0x0f07, 0x0701, 0x0f0f, 0x0f7f, 0x0e0c, 0x0f8f, 0xef8e, 0xcccc, 0x02ba, 0x3010, 0x7070, 0xef80, 0x89ab, 0x0001, 0x1555, 0x56aa, 0xa888, 0xaa5a, 0x8766, 0x795a, 0x0401, 0x056a, 0x053f, 0xaa77, 0x00a5, 0xfcfc, 0xaa55, 0x009a, 0x4080, 0x789a, 0x0002, 0x0090, 0x0040, 0x00c0, 0x685a, 0x1401, 0x142a, 0x15bf, 0x7a59, 0x0001, 0xff95, 0xbf9a, 0x015a, 0x0706, 0x0607, 0x685a, 0x8400, 0xe400, 0x697a, 0x0002, 0x0090, 0x0040, 0x02a0, 0x669a, 0x9a58, 0xa400, 0xa50e, 0x15ab, 0xf8fc, 0xf0f8, 0xe0f0, 0xc0e0, 0x3070, 0x3030, 0x1010, 0x1010, 0xfef0, 0xfcfe, 0x80c0, 0xf080, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0x7070, 0x7070, 0x1070, 0x3010, 0x3030, 0xbbbb, 0x03ac, 0x8080, 0x8080, 0xc0c0, 0xc0c0, 0xfacb, 0x4002, 0x5081, 0x5085, 0x4085, 0xabbc, 0x01ab, 0xc080, 0xf0e0, 0x00cb, 0x8070, 0x08ab, 0xfcfe, 0xfcfc, 0xfcfc, 0xc0fc, 0x0400, 0x0302, 0x0303, 0x0103, 0x3f1f, 0xaaaa, 0xbaaa, 0x12ca, 0xcfc0, 0xcfcf, 0xcfcf, 0x8f8f, 0x0e0f, 0x0f0f, 0x8f8f, 0xcf8f, 0x103f, 0x1010, 0xf7f0, 0xf3f7, 0xf1f1, 0x70f0, 0x3070, 0x0f80, 0x0f0f, 0x0e0e, 0x0e0e, 0xccca, 0x03cb, 0xe0c0, 0xf0f0, 0xe0f0, 0xc0e0, 0x04ba, 0xf8f8, 0xf0f0, 0xc0e0, 0xc0c0, 0x0307, 0xaaab, 0xaaaa, 0x01bc, 0xe0f0, 0xc0e0, 0xcccc, 0xabcc, 0x01ac, 0x8080, 0xff80, 0x02ba, 0xc080, 0xe0c0, 0xe0e0, 0xaaaa, 0xbbba, 0x04ac, 0xf0f0, 0xe0e0, 0xc0c0, 0xc0c0, 0x7fbf, 0xfacb, 0x5401, 0x55aa, 0x94aa, 0x01ba, 0x7030, 0xf0f0, 0xaaaa, 0xabbb, 0x005a, 0x4070, 0x5555, 0x5555, 0x08ba, 0xfef0, 0xfefc, 0x8080, 0x6080, 0x10f0, 0xf0f0, 0xf3f1, 0xf0f7, 0xf0f0, 0x06ca, 0xe0c0, 0xf0e0, 0xf8f0, 0xf8f8, 0xfefe, 0xfefe, 0xfcfc, 0x055a, 0x8070, 0x0f0f, 0xf0f0, 0x0807, 0xfe01, 0xc030, 0x5555, 0x07ca, 0xf7f0, 0xf7f7, 0xf7f7, 0xf7f7, 0xcf87, 0xcfcf, 0xefcf, 0xefef, 0xcccc, 0x04ba, 0x7010, 0x3010, 0x7030, 0xf3f0, 0xe0e0, 0x01cb, 0x1c10, 0x1f1f, 0x03ba, 0xe0e0, 0x8080, 0xf030, 0xf3f0, 0xbbbb, 0x01a9, 0xe0f8, 0x80c0, 0x00b9, 0xf0c0, 0xffb9, 0x0000, 0x5540, 0x02ca, 0xfcfc, 0xfefc, 0xfefe, 0x02c9, 0xf3f0, 0x3070, 0xf7f0, 0xff9c, 0x5000, 0x5400, 0x03ca, 0x8000, 0xe0c0, 0xf8f0, 0xfcf8, 0x06cb, 0x7cfc, 0x3c3c, 0x183c, 0x1818, 0x7fff, 0x0f3f, 0x0107, 0x02ca, 0x8080, 0xc080, 0xfce0, 0x00b9, 0x0fc0, 0x9999, 0x00ab, 0xe0f0, 0x04cb, 0x1070, 0xf7f0, 0x70f1, 0x1030, 0xfdf0, 0x05ba, 0x3010, 0xf1f0, 0xfef7, 0x80f0, 0x8f00, 0x0c0f, 0xbbba, 0x07ca, 0xf1f0, 0x70f0, 0x3030, 0xf010, 0xfcf8, 0x1f7e, 0x070f, 0x03c3, 0xaaac, 0xaaaa, 0x00cb, 0xf9fc, 0xfabc, 0x1000, 0x0100, 0xaccc, 0x01ab, 0xf0e0, 0xfff8, 0xfcab, 0x5400, 0x54a5, 0xcaaa, 0x00ab, 0xf0f0, 0x01ac, 0xfefe, 0xfcfe, 0xaacc, 0x01ba, 0x0800, 0x0e0f, 0xbbbb, 0xaaaa, 0x04cb, 0xfef0, 0xfcfe, 0x8cc6, 0x1c8c, 0x3e1c, 0xfabc, 0x0000, 0x0050, 0xbcca, 0x00cb, 0x1000, 0xfcba, 0x5404, 0x0056, 0x005a, 0x0568, 0x55a0, 0x5581, 0xaabb, 0x0aca, 0xfefc, 0xbffe, 0x9fbf, 0xc78f, 0xc080, 0xf1e0, 0xfefc, 0xc0c0, 0xc0c0, 0xf8e0, 0xfefc, 0x029a, 0x1010, 0x1010, 0x3030, 0xaaaa, 0x049c, 0x80fe, 0xf8c0, 0xfefc, 0x80ff, 0xf0e0, 0x9ccc, 0x9999, 0x02ac, 0x1e3c, 0x070f, 0x0103, 0x029a, 0xfcfc, 0xfefe, 0x8080, 0x02bc, 0xf8f0, 0xfefc, 0x0f80, 0xbbbb, 0xcccc, 0x02ab, 0xc080, 0xf0e0, 0xfcf8, 0xaaab, 0xaaaa, 0x039c, 0xf010, 0xf7f0, 0x100f, 0xf070, 0xcc99, 0x9999, 0x01bc, 0xc0c0, 0xe0e0, 0xff9c, 0x0000, 0x0555, 0x00ca, 0xf8f8, 0x00c9, 0xf0fc, 0x9999, 0xcc99, 0x00ca, 0x70e0, 0xfc9a, 0x4000, 0x40a9, 0xcc99, 0x019a, 0xf8f8, 0xf8f8, 0x01ba, 0x3010, 0x1030, 0xaaaa, 0xbbbb, 0x01ac, 0xf0f0, 0xf8f8, 0x01bc, 0xf8f8, 0xf0f0, 0x01ba, 0x7010, 0xf1f0, 0xaabb, 0x01bc, 0xf8f0, 0xfcfc, 0xbbc9, 0x009b, 0x7070, 0xff9b, 0x0000, 0x0015, 0x01c9, 0xf8fe, 0x80e0, 0x9999, 0x01ab, 0xf8fe, 0x80e0, 0xbbbb, 0x039a, 0xc0c0, 0xe0e0, 0xf0f0, 0xf8f8, 0x1cca, 0xf0f8, 0xe0f0, 0xc0e0, 0x80c0, 0x7fff, 0x7f7f, 0x101f, 0x1010, 0x0800, 0xefef, 0xcfcf, 0x0f8f, 0x8183, 0x60c1, 0x7030, 0xf0f0, 0xf1f0, 0xf1f1, 0xf070, 0xf7ff, 0xf3f1, 0xf7f7, 0xf3f7, 0xfbfb, 0xf9f9, 0x8080, 0x8080, 0xc080, 0xe0c0, 0x03ba, 0x3010, 0xf070, 0xf0f0, 0xf7ff, 0x05b9, 0x8080, 0xc080, 0xf8c0, 0xfcf8, 0xfcfc, 0xfefe, 0xbbb9, 0x05ab, 0x0e00, 0xcf8f, 0x0fef, 0xc781, 0xc040, 0xe7e1, 0x13ca, 0x7060, 0x3c78, 0x703f, 0x01f0, 0x0e3f, 0x0fc8, 0xffcc, 0x0f0f, 0x0f07, 0x030f, 0x0707, 0x0707, 0x1f03, 0xfc0f, 0xc0c1, 0x1fe0, 0x0f1f, 0xe387, 0x3fff, 0xbe1f, 0xccca, 0xcccc, 0x005a, 0x0ff0, 0x0eca, 0xf0c0, 0xc0fc, 0xfcf0, 0xfefe, 0xfcfe, 0xfcfc, 0xf8f8, 0xc0f0, 0xc0c0, 0xc0c0, 0xc0c0, 0x0fc0, 0x0307, 0x0101, 0xefef, 0xcccc, 0x015a, 0x03f0, 0x807e, 0x0fac, 0x3e1e, 0x3f3e, 0x3f3f, 0x3f3f, 0x3030, 0x1010, 0x8000, 0xe0c0, 0x9f3f, 0x9f9f, 0xcf9f, 0xcfcf, 0xfeff, 0xfefe, 0xfcfc, 0xf8fc, 0x01a5, 0x3fe0, 0xfe0f, 0x555a, 0x05ca, 0xe0f0, 0xc0e0, 0xc0c0, 0x8080, 0xfcfc, 0xfefe, 0xf5ca, 0x5401, 0x0055, 0xaa80, 0x05ac, 0xfcfc, 0xf8f8, 0xf8f8, 0xf0f8, 0x4040, 0x4040, 0xaaaa, 0x5aaa, 0x07ca, 0x1030, 0x0010, 0x7f3e, 0x7f3f, 0x1f1f, 0x3b3f, 0x7373, 0xe363, 0x005a, 0xe000, 0x555a, 0xaaa5, 0x03ca, 0xfbf0, 0xfbfb, 0xf9fb, 0xf9f9, 0xccac, 0x015a, 0x0ff0, 0x6788, 0x00ca, 0xefe0, 0xcccc, 0xccca, 0x00bc, 0x8080, 0xcccc, 0xbccc, 0x00ca, 0x8080, 0x00bc, 0x0010, 0x01ac, 0x0808, 0x0c08, 0xfabc, 0xa402, 0x9400, 0x9500, 0x9500, 0x03bc, 0xf1f0, 0xf7f3, 0xe0c0, 0xf8f0, 0x03ca, 0xf8f8, 0xfcfc, 0xfcfc, 0xfefe, 0xfbac, 0x0002, 0x00a4, 0x40a5, 0x50a5, 0x01ba, 0x0e0c, 0x0e0e, 0xbbbb, 0x02ca, 0xf0c0, 0xfffc, 0xf0fc, 0x09bc, 0x0808, 0x0808, 0x3f3f, 0x7f7f, 0x0c0f, 0x0e0e, 0x0e0e, 0x3c1c, 0x0408, 0x0f0e, 0x06ab, 0x0f80, 0x0f0f, 0x0c0e, 0x080c, 0xfef8, 0xfcfc, 0xf8fc, 0x07bc, 0xfcf8, 0x03fe, 0x0703, 0x0f07, 0x1f0f, 0xfc1f, 0x80fe, 0xc080, 0x15ca, 0x1010, 0x1010, 0xc030, 0x8f8f, 0x0f0f, 0x0e0e, 0xce0e, 0x0fef, 0x0c08, 0x0f0e, 0xf1ff, 0xf7f3, 0xf7f7, 0xf7f7, 0x3037, 0x7070, 0x7070, 0xf0f0, 0x0f01, 0x0f0f, 0x8f8f, 0xcf8f, 0xcccc, 0x01ab, 0xf8f0, 0x0300, 0xf9ba, 0x0005, 0x0050, 0x6aaa, 0x6aa0, 0x6800, 0x4000, 0x8000, 0x00ba, 0xf7f0, 0xf9ab, 0x5001, 0x5000, 0x5402, 0x00a9, 0xf8f0, 0xaa9b, 0x00ba, 0x7030, 0x01b9, 0xf8fc, 0xf3f1, 0x9bbb, 0x1aab, 0x7010, 0xf030, 0xf1f1, 0xf3f3, 0xf7f7, 0x80f7, 0xc080, 0xe0c0, 0x07e0, 0x0707, 0x0f0f, 0x0f0f, 0xfe0f, 0xf8fc, 0xf0f0, 0xe0e0, 0xf8c0, 0xe0f0, 0x80c0, 0x1080, 0x1010, 0x3030, 0x7030, 0xeff0, 0xcfef, 0x8fcf, 0x0f8f, 0x039a, 0x1000, 0x1010, 0x3010, 0xf030, 0xaaa9, 0x01ba, 0xfefe, 0x80fe, 0xaaaa, 0xbaaa, 0x139a, 0x7ef8, 0x001e, 0xc080, 0x00c0, 0x84ff, 0xe1f8, 0x80c0, 0xf330, 0x3ecf, 0xf3f8, 0xfeff, 0xff00, 0x3f80, 0xf0ff, 0x3f87, 0xf0c0, 0x8e3e, 0x30e0, 0xc0f0, 0x73b1, 0xffa9, 0x4000, 0x0000, 0x07bc, 0xf8f8, 0xf8f8, 0xc0f0, 0xff01, 0x0c0c, 0x3e1e, 0x7f3f, 0x3f7f, 0x01ab, 0xc040, 0xc1c0, 0xfcba, 0x5000, 0xaa55, 0x0bab, 0xf0f0, 0x7070, 0x3070, 0x3030, 0x0100, 0x8383, 0xcfc7, 0xefef, 0xf7ff, 0xf3f3, 0x01c1, 0x0301, 0xaaaa, 0xbbbb, 0x03a9, 0xf010, 0xf3f0, 0x0301, 0x1f0f, 0x00ba, 0xf0f0, 0xfb9a, 0x0001, 0x0aa5, 0xaaa9, 0x00a9, 0xe0fe, 0x00b9, 0x8080, 0x02ab, 0x7cfc, 0x3c7c, 0x1c3c, 0xf9ab, 0x5000, 0x5001, 0xbb9a, 0x0dab, 0xe0e0, 0xf8f0, 0xfcfc, 0xfffe, 0xe0f0, 0xc0e0, 0xc0c0, 0xc0c0, 0x1010, 0x0010, 0xc7c0, 0xcfc7, 0xcfcf, 0xcfcf, 0xffba, 0x0000, 0x5455, 0x18ac, 0xf080, 0xcfef, 0x0f8f, 0x0e0f, 0xfc0e, 0xf3f7, 0xf1f1, 0xf0f0, 0x1070, 0x0010, 0x1010, 0x3010, 0xf030, 0xf7ff, 0x0307, 0x0303, 0x0101, 0x0101, 0xc0c0, 0x8080, 0x8080, 0xfcf0, 0x0f00, 0x0f0c, 0x0003, 0xf0ca, 0x0000, 0x0005, 0x0000
};

// [D_08C581B0] D_08C583BC Huffman Window 1
u32 D_08c583bc_window1[] = {
	0xfd469365, 0x9cc9a76d, 0xcbbff75c, 0x49cb6cb6, 0xbd75cd9e, 0xf2699dd9, 0xfcb6fbef, 0x00003dfc
};

// [D_08C581D0] D_08C583BC Huffman Window 2
u32 D_08c583bc_window2[] = {
	0x004ee600, 0x14012002, 0x0202200a, 0x40480100, 0x00a88901
};

// [D_08C581E4] D_08C583BC Huffman
struct Huffman D_08c583bc_huffman[] = {
	/* Data */			D_08c583bc_huffmandata,
	/* Size */			0xae7,
	/* Count */			0xef,
	/* Window 1 */		D_08c583bc_window1,
	/* Window 2 */		D_08c583bc_window2,
};

// [D_08C581F4] D_08C583BC RLE Data
u8 D_08c583bc_rledata[] = {
	0x1, 0x1d, 0x3, 0xe, 0x5, 0xd, 0x10, 0x6, 0x5, 0x5, 0x20, 0x3, 0x2d, 0xb, 0x5, 0xe, 0x2, 0xb, 0x5, 0xb, 0x1, 0x3, 0x1, 0x4, 0x5, 0x7, 0x10, 0xe, 0x7, 0xd, 0x4, 0x9, 0x1, 0xf, 0x6, 0xa, 0x1, 0xa, 0x6, 0xb, 0x2d, 0xe, 0x4, 0x6, 0xd, 0xa, 0xf, 0x9, 0x1, 0x3, 0x3, 0x9, 0x3, 0xd, 0x1, 0x9, 0x6, 0x6, 0x5, 0x5, 0x1, 0x8, 0xd, 0xa, 0x1, 0x7, 0x8, 0x6, 0x4, 0x6, 0x1, 0xe, 0x1c, 0x6, 0x1a, 0xf, 0x17, 0xf, 0x11, 0x9, 0xd, 0x9, 0x24, 0x6, 0x27, 0xd, 0x2, 0xf, 0x28, 0x9, 0x28, 0x8, 0x1, 0xc, 0x49, 0xa, 0x31, 0xc, 0x15, 0xe, 0x4, 0xc, 0x1, 0x9, 0xd, 0x15, 0x4, 0x6, 0x11, 0x9, 0x10, 0x4, 0xd, 0x3, 0x5, 0x9, 0x5, 0x15, 0x5, 0x7, 0x5, 0x9, 0x5, 0x5, 0x21, 0xd, 0xf, 0x3, 0x11, 0x6, 0x4, 0xd, 0x14, 0x4, 0x1, 0xd, 0xe, 0x4, 0x1, 0xf, 0x8, 0x8, 0x1, 0xa, 0x31, 0x4, 0x1, 0x4, 0xe, 0xd, 0x3, 0xe, 0x4, 0xb, 0x4, 0xc, 0x1, 0x4, 0xc, 0xd, 0x3, 0x3, 0x9, 0xb, 0x9, 0x3, 0x5, 0x8, 0x2, 0xd, 0xe, 0x3, 0x13, 0xc, 0x17, 0x7, 0x1, 0x7, 0xd, 0x7, 0x1, 0x5, 0x1, 0xa, 0x6, 0x9, 0x37, 0xa, 0xb, 0xa, 0x11, 0x3, 0xe, 0xe, 0x1, 0x4, 0xc, 0x8, 0x13, 0x4, 0x8, 0x8, 0x1, 0xc, 0xb, 0x8, 0x1, 0x8, 0x2, 0x5, 0x1, 0x7, 0x3, 0x8, 0xe, 0x7, 0x11, 0x7, 0x1, 0x8, 0x8, 0xd, 0x6, 0x6, 0x17, 0x7, 0x8, 0x8, 0x1, 0x7, 0x11, 0x7, 0x21, 0x7, 0x9, 0x7, 0x29, 0x7, 0x2, 0x8, 0x9, 0xd, 0x1, 0x5, 0x16, 0x4, 0x21, 0x7, 0x19, 0x5, 0xf, 0xb, 0x1, 0x6, 0x23, 0x6, 0x1, 0xb, 0x5, 0x5, 0x8, 0x9, 0xa, 0xb, 0x5, 0x9, 0x1, 0x3, 0x3, 0x6, 0x3, 0x6, 0x1, 0xa, 0x6, 0x9, 0x1, 0x5, 0x1, 0x5, 0x3, 0x7, 0x1, 0x5, 0x1, 0x9, 0x1, 0x3, 0xf, 0xd, 0x1, 0x3, 0x2, 0x4, 0x1a, 0xc, 0x1, 0xc, 0x9, 0xa, 0x1, 0x8, 0x31, 0x6, 0x1, 0xb, 0x5, 0xd, 0x3, 0xb, 0x47, 0xe, 0x2, 0xd, 0x5, 0xc, 0x19, 0x6, 0x1, 0xd, 0x13, 0x5, 0x7, 0x3, 0x1, 0x4, 0x2, 0x9, 0x4, 0xa, 0x6, 0x3, 0x6, 0x4, 0x16, 0x9, 0x14, 0x11, 0x5, 0x6, 0x6, 0x5, 0x6, 0xc, 0x4, 0xd, 0x13, 0x5, 0x7, 0x3, 0x1, 0x8, 0x32, 0x5, 0x1, 0x7, 0x11, 0x7, 0x11, 0x8, 0x18, 0x5, 0x10, 0xa, 0x14, 0xc, 0x1, 0xa, 0x6, 0x5, 0x1e, 0xc, 0x1, 0x6, 0x3d, 0xc, 0x5, 0xc, 0x2, 0xd, 0x9, 0x8, 0x2, 0xd, 0x1b, 0x11, 0x4, 0x8, 0x5, 0x4, 0xc, 0x3, 0x1, 0x4, 0x38, 0x5, 0x34, 0xa, 0x1, 0xc, 0x19, 0x4, 0x27, 0x6, 0xa, 0x3, 0x29, 0xa, 0x4, 0xd, 0xb, 0xd, 0x2b, 0xf, 0x7, 0xb, 0x4, 0xa, 0x3, 0x3, 0x9, 0xd, 0x3, 0x7, 0x1, 0x3, 0x4, 0x8, 0x5, 0x8, 0x34, 0x7, 0x19, 0xe, 0x4, 0xd, 0x35, 0xb, 0x1d, 0x3, 0x1, 0xb, 0x5, 0x9, 0x3, 0x3, 0x1, 0xa, 0x6, 0xd, 0x3, 0x0, 0x70, 0x0, 0x0, 0x0
};

// [D_08C583BC] D_08C583BC Graphics
struct CompressedGraphics D_08c583bc = {
	/* Huffman Data */		D_08c583bc_huffman,
	/* RLE Data */			D_08c583bc_rledata,
	/* RLE Size */			0x1c4,
	/* RLE Offset */		0x1400,
	/* Double Compressed */	TRUE,
};

u8 D_08c583cc[16] = {
	0x40, 0x00, 0x40, 0x00, 0xA4, 0x00, 0x40, 0x00, 0x64, 0x00, 0x40, 0x00,
	0x20, 0x00, 0x40, 0x00
};
