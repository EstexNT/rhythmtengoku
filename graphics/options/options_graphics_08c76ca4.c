#include "global.h"
#include "graphics.h"

// // //  D_08C76CA4  // // //

// [D_08C76310] D_08C76CA4 Huffman Data
u16 D_08c76ca4_huffmandata[] = {
	0x68f0, 0x0004, 0x5550, 0xaaa4, 0xffe9, 0xfff9, 0xfff9, 0x0000, 0x008f, 0xff00, 0x6666, 0x0000, 0x008f, 0xff00, 0x6666, 0x0000, 0x008f, 0xff00, 0x6666, 0x0000, 0x008f, 0xff00, 0x6666, 0x0000, 0x008f, 0xff00, 0x6666, 0x0000, 0x008f, 0xff00, 0x6666, 0x0000, 0x008f, 0xff00, 0x6666, 0x0020, 0x01c0, 0xf120, 0x5001, 0xa405, 0x001a, 0x068f, 0xa406, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0x1206, 0x0002, 0xaa95, 0xffe5, 0xffe5, 0x0020, 0xf8f8, 0xf120, 0x9000, 0x90aa, 0x1111, 0x0020, 0x39f8, 0xf021, 0x1408, 0x1490, 0x1990, 0x1990, 0x1490, 0x1490, 0x1990, 0xaa90, 0x6a55, 0x6a00, 0x1111, 0x0020, 0x30f0, 0x0222, 0x0021, 0x8c8c, 0xf102, 0x1003, 0x152a, 0x152a, 0x152a, 0x152a, 0x2111, 0x0020, 0xf800, 0xf120, 0x9000, 0x90aa, 0x1111, 0x0020, 0x80f8, 0xf120, 0x0008, 0x0040, 0xa490, 0xa506, 0xaa06, 0xaa1a, 0xaa1a, 0xaa06, 0xaa06, 0xaa06, 0x0021, 0x0020, 0xfc00, 0xf120, 0xa40b, 0xa4aa, 0x50aa, 0x0055, 0x6969, 0x6419, 0x641a, 0x696a, 0x1aa5, 0x06a4, 0x06a4, 0x06a4, 0xfff0, 0x53f0, 0xa405, 0xe9aa, 0xf9ff, 0xf9ff, 0xf9ff, 0xf9ff, 0xf9ff, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x5555, 0x003f, 0xff00, 0x68f5, 0x0007, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xf120, 0x0009, 0x4055, 0x40aa, 0x00aa, 0x9055, 0x901a, 0x901a, 0xa41a, 0xa91a, 0xaa06, 0x6a01, 0x0020, 0xe070, 0xf120, 0x0008, 0x00a9, 0x00a9, 0x4054, 0x406a, 0x406a, 0x906a, 0xa56a, 0xaa1a, 0xaa06, 0x0002, 0xff0e, 0xf120, 0x900d, 0x9000, 0xa400, 0xa400, 0xa940, 0xaa90, 0x6a90, 0x1540, 0x06aa, 0x06aa, 0x06aa, 0x06a6, 0x06a6, 0x06a5, 0x06a4, 0x0020, 0x801c, 0xf102, 0x000a, 0xaa85, 0xaa85, 0x0015, 0x52a1, 0x52a1, 0x52a1, 0x52a8, 0x54aa, 0x552a, 0x554a, 0x5550, 0x853f, 0xa406, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0x68f5, 0x0000, 0xfff9, 0x678f, 0x7f06, 0x0002, 0xfff9, 0xaaa5, 0x0055, 0x00f7, 0xff00, 0x0000, 0x6666, 0x00f7, 0xff00, 0x0000, 0x6666, 0x00f7, 0xff00, 0x0000, 0x6666, 0x00f7, 0xff00, 0x0000, 0x6666, 0x00f7, 0xff00, 0x0000, 0x6666, 0x00f7, 0xff00, 0x0000, 0x6666, 0x00f7, 0xff00, 0x68f0, 0x0007, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xf120, 0x5406, 0xa900, 0xa901, 0xa901, 0xa901, 0xa901, 0xa901, 0xa901, 0x0002, 0xfffe, 0xf120, 0x4001, 0x9000, 0x9000, 0x0020, 0x0080, 0xf120, 0x5401, 0xa900, 0x0001, 0x1120, 0x0012, 0x0fc0, 0xf201, 0x001a, 0x0095, 0x0095, 0x0025, 0x5558, 0x5558, 0x5560, 0x5560, 0x5558, 0x5558, 0x5558, 0x5558, 0xaaa5, 0x0009, 0x0009, 0x0aa5, 0x0955, 0x0aa5, 0x0009, 0x0009, 0x56aa, 0x5800, 0x5800, 0x56a8, 0x5558, 0x56a8, 0x5800, 0x5800, 0x0320, 0x8000, 0x8080, 0x8080, 0x8080, 0xf102, 0x4009, 0x2a15, 0x2a85, 0x2a85, 0x2a15, 0x2a55, 0x2a15, 0x2a85, 0x0585, 0xa100, 0xa1aa, 0x1111, 0x0120, 0x00fc, 0x8080, 0xf120, 0x000a, 0x5590, 0xaa01, 0xaa06, 0xa906, 0xa906, 0xaa01, 0xaa01, 0x6a01, 0x5000, 0xa455, 0xa4aa, 0x1111, 0x0020, 0x00fc, 0xf120, 0x5004, 0xa455, 0xa4aa, 0x55aa, 0xaa01, 0xaa06, 0x0021, 0x0002, 0xffe0, 0xf102, 0x0001, 0xaa54, 0xaa52, 0x0021, 0x0012, 0x0f00, 0x0002, 0x0ff0, 0xf012, 0x0010, 0xa055, 0x850a, 0x8552, 0xa052, 0xaa52, 0xa052, 0x8552, 0x8552, 0xa852, 0x2180, 0x2115, 0x2115, 0x2115, 0x2115, 0x2115, 0x2115, 0xaa15, 0x268f, 0xa406, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0x0126, 0x0002, 0xfda9, 0xfda9, 0x7da9, 0x0012, 0xfe8e, 0xf012, 0x540d, 0x5255, 0x0a55, 0x5400, 0x54a8, 0x55a8, 0x15a8, 0x85aa, 0xa12a, 0xa84a, 0xaa4a, 0x4a2a, 0x4a55, 0x5255, 0x5255, 0x0021, 0x0212, 0xf012, 0x5007, 0x5215, 0x0a80, 0xaaa1, 0xaaa1, 0xaaa1, 0xaaa1, 0xaaa1, 0xaaa1, 0x0021, 0x0020, 0xc010, 0xf012, 0x5004, 0x52aa, 0x52aa, 0x52aa, 0x52aa, 0x4aaa, 0x0020, 0x0080, 0xf021, 0x5405, 0xa4a9, 0xa4aa, 0xa4aa, 0x50aa, 0x00a9, 0x00a4, 0x0021, 0x0102, 0x7fe0, 0x7f7f, 0xf120, 0x0000, 0x5490, 0x0012, 0xefec, 0xf201, 0x0005, 0xaaa9, 0x9580, 0x5580, 0x5580, 0x5580, 0x5560, 0x0021, 0x0020, 0x0818, 0xf120, 0x001b, 0x9000, 0xa400, 0xa400, 0xa900, 0xaa50, 0xaaa4, 0x6aa4, 0x1550, 0x006a, 0x001a, 0x006a, 0x01aa, 0x06a6, 0x1a91, 0x1a40, 0x0500, 0xa550, 0xa400, 0xa400, 0xa400, 0xa950, 0xaaa4, 0x6aa4, 0x1550, 0x0156, 0x0006, 0x0006, 0x0006, 0x0021, 0x0020, 0xf010, 0xf012, 0x4002, 0x4aaa, 0x4aaa, 0x4aaa, 0x0012, 0x0fc0, 0xf012, 0x000e, 0x5285, 0x5285, 0x5285, 0x5285, 0x5285, 0x52a1, 0x52a8, 0x0aaa, 0x1521, 0x1521, 0x1521, 0x5521, 0x5521, 0x54a1, 0x52a1, 0x0002, 0xff3e, 0xf120, 0x5005, 0xa400, 0xa901, 0xaa01, 0x6a01, 0x1a00, 0x0500, 0x68f0, 0x0007, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0x0112, 0x7f00, 0xf070, 0xf021, 0x4008, 0x9555, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0x566a, 0x0112, 0xefe0, 0xe0ef, 0xf102, 0x541a, 0x54a8, 0x54a8, 0x54aa, 0x5500, 0x14aa, 0x14aa, 0x14a8, 0x14a8, 0x14a8, 0x14a8, 0x14a8, 0x5540, 0x152a, 0x152a, 0x152a, 0x152a, 0x152a, 0x152a, 0x152a, 0x1540, 0x852a, 0x852a, 0x152a, 0x552a, 0x552a, 0x552a, 0x552a, 0x0012, 0x0f00, 0xf012, 0x400e, 0x4aaa, 0x4aaa, 0x502a, 0x554a, 0xaaa0, 0xaa85, 0xaa85, 0xaa85, 0xaa85, 0xaa85, 0xaa85, 0xaaa1, 0x000a, 0x5552, 0x5552, 0x0020, 0x00fc, 0xf120, 0x5004, 0xa455, 0xa4aa, 0x69aa, 0xaa1a, 0xaa06, 0x0021, 0x0002, 0xffe0, 0xf102, 0x0003, 0xaa54, 0xaa52, 0x5552, 0x0001, 0x1112, 0x0001, 0xfff0, 0x0120, 0x0808, 0x0808, 0xf120, 0x4001, 0x4015, 0x906a, 0x00f0, 0xcf80, 0x4f0c, 0x0000, 0xaab9, 0xe4f0, 0xe403, 0xd0ff, 0xd5ff, 0x007d, 0x0001, 0x40fc, 0xa401, 0x9daa, 0x9daa, 0xffe0, 0x0000, 0x0009, 0x00fe, 0x000f, 0x07f8, 0x4cf0, 0x5000, 0x74aa, 0xe40f, 0x0003, 0xffe1, 0xffc5, 0x3cc0, 0x5455, 0x4fc0, 0x0002, 0x0009, 0x002e, 0x002e, 0x80fe, 0xa400, 0xa495, 0x680f, 0x4004, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0x678f, 0x7f06, 0x0001, 0xfff9, 0xaaa5, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x6666, 0x00f7, 0xff00, 0x0211, 0x0020, 0x0838, 0xf120, 0x4000, 0x9000, 0x2220, 0x0012, 0xefec, 0xf201, 0x0005, 0xaaa9, 0x9580, 0x5580, 0x5580, 0x5580, 0x5560, 0x0021, 0x0020, 0x0010, 0x0000, 0x2111, 0x0020, 0x8070, 0xf120, 0x500b, 0xa495, 0xa4aa, 0x50aa, 0xa955, 0xa941, 0xa901, 0xaa01, 0x6a01, 0x1a00, 0x0600, 0x0100, 0x6a00, 0x0020, 0x0878, 0xf120, 0x4000, 0x9000, 0x2220, 0x0012, 0xefec, 0xf201, 0x0005, 0xaaa9, 0x5580, 0x5580, 0x5580, 0x5580, 0x5560, 0x0021, 0x0020, 0x0818, 0xf120, 0x0005, 0xaa90, 0x1a90, 0x1a90, 0x1a90, 0x1aa5, 0x06aa, 0x1111, 0x0002, 0xef0e, 0xf120, 0x0012, 0xa550, 0xa400, 0xa400, 0xa400, 0xa950, 0xaaa4, 0x6aa4, 0x1550, 0x0156, 0x0006, 0x0006, 0x0006, 0x0006, 0x0001, 0xaaa9, 0x5554, 0x6a00, 0x1590, 0x0040, 0x50ef, 0x0020, 0x5214, 0x52d5, 0x02d5, 0x2a00, 0x2a55, 0x2a55, 0x2a01, 0xa120, 0x0380, 0x5380, 0x50a1, 0x55a1, 0x55a1, 0x01a1, 0x20a1, 0x00a0, 0x5214, 0x52d5, 0x02d5, 0x2a00, 0x2a55, 0x2a55, 0x2a01, 0xa120, 0x0380, 0x53a0, 0x50a1, 0x55a1, 0x55a1, 0x01a1, 0x20a1, 0xaaa0, 0x956a, 0x6ee0, 0xe666, 0x00e0, 0x8010, 0x960e, 0x0006, 0xaa85, 0xbea1, 0xffa1, 0x5455, 0x5255, 0x4a55, 0x4a55, 0x00f0, 0x8000, 0x4c0f, 0x0001, 0xaa05, 0x0031, 0xe4f0, 0xe400, 0xd0ff, 0x00fe, 0xf970, 0xfeef, 0x00f0, 0x0100, 0x40fc, 0xa401, 0x9daa, 0x9daa, 0xffe0, 0x0003, 0x0009, 0x0009, 0x0009, 0xaaa0, 0xeff0, 0x00fe, 0x1e30, 0xffef, 0x0400, 0x5104, 0x00f0, 0xf010, 0x00ef, 0x07f0, 0x20ef, 0x0001, 0xaa85, 0xfffe, 0xe012, 0x5402, 0xaa55, 0xaaa8, 0xbfea, 0xf6e0, 0x9402, 0x006a, 0x0001, 0xf00f, 0x904f, 0x8404, 0x17f2, 0x17f2, 0x0ff2, 0x8f0a, 0xa0aa, 0xe120, 0x0002, 0x0514, 0x1a69, 0x5400, 0x96e0, 0x0003, 0xafa9, 0xbfe9, 0xafa9, 0x6a94, 0x00ce, 0xfeb6, 0x6ce0, 0x5406, 0x005a, 0x0705, 0x0700, 0x0700, 0x0100, 0x0600, 0x0600, 0x00e0, 0x0010, 0x96e0, 0x0001, 0xbea4, 0xaa94, 0x00ce, 0x6e66, 0x6ce0, 0xa408, 0x50aa, 0x0069, 0x0069, 0x1f14, 0x1700, 0x6900, 0x6a00, 0x1a00, 0x0500, 0x5ef0, 0x0008, 0xeaa4, 0xeaa4, 0x5554, 0xaa40, 0xaa40, 0xaa40, 0x5640, 0x4540, 0x5407, 0xfff5, 0x00ef, 0xf1c0, 0xf0fe, 0xa403, 0xa400, 0xa400, 0xa454, 0xa565, 0x00ef, 0xde3e, 0xf0ef, 0x5000, 0x4205, 0xeefe, 0x00f0, 0x70fc, 0x2fe0, 0x0003, 0x0025, 0x002a, 0x0009, 0x000a, 0xf012, 0x5403, 0x0255, 0x5254, 0x5255, 0x0255, 0x0012, 0xefee, 0x1111, 0x0320, 0x01fe, 0x0101, 0x0101, 0x0101, 0x96e0, 0x0003, 0xa900, 0xe9af, 0xa9bf, 0x94af, 0x0ce6, 0x4009, 0x9a69, 0x5a57, 0xda7f, 0xf5ff, 0xfff4, 0xfff4, 0xfff4, 0xfffd, 0xfff6, 0xfffd
};

// [D_08C76B74] D_08C76CA4 Huffman Window 1
u32 D_08c76ca4_window1[] = {
	0x6fd24925, 0xaaaabb6d, 0x49bffaaa, 0x6dbdfc92, 0xffb7bdff, 0x55fbfdbf, 0x6d555555, 0xddf9db79, 0x1def7fff
};

// [D_08C76B98] D_08C76CA4 Huffman Window 2
u32 D_08c76ca4_window2[] = {
	0x0354ae01, 0x580f5600, 0xaaaae555, 0x3f7a555a, 0x5aa94000, 0x356afcb3, 0x00000003
};

// [D_08C76BB4] D_08C76CA4 Huffman
struct Huffman D_08c76ca4_huffman[] = {
	/* Data */			D_08c76ca4_huffmandata,
	/* Size */			0x717,
	/* Count */			0x11d,
	/* Window 1 */		D_08c76ca4_window1,
	/* Window 2 */		D_08c76ca4_window2,
};

// [D_08C76BC4] D_08C76CA4 RLE Data
u8 D_08c76ca4_rledata[] = {
	0x1, 0x0, 0x6, 0xb, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5d, 0x3, 0x1b, 0x5, 0xff, 0x10, 0x70, 0x29, 0x7, 0x3b, 0x5, 0x25, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x10, 0x70, 0x1, 0x8, 0x17, 0x9, 0x38, 0x7, 0x28, 0xf0, 0x9, 0x7, 0x1, 0x3, 0x5, 0x7, 0x1, 0x3, 0x5, 0x7, 0x1, 0x3, 0x5, 0x7, 0x1, 0x3, 0x5, 0x7, 0x1, 0x3, 0x5, 0x7, 0x1, 0x3, 0x5, 0x7, 0x1, 0x3, 0x5, 0x87, 0x10, 0xf0, 0x25, 0x3, 0x9b, 0x3, 0x7, 0x3, 0x21, 0xf, 0x10, 0xf0, 0xbc, 0x4, 0xb, 0x3, 0x42, 0xf0, 0x3, 0x3, 0x5, 0x3, 0x55, 0x3, 0x3b, 0xb, 0x15, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0x1d, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xb, 0x28, 0x3, 0x4b, 0xe, 0x1c, 0x4, 0x5, 0xb, 0x5, 0xb, 0x41, 0xb, 0x5, 0xd, 0x2, 0x8, 0x9, 0x7, 0x28, 0x6, 0xb, 0x5, 0xa, 0xc, 0x5, 0xd, 0x2, 0xc, 0x5, 0xd, 0x2, 0x3, 0xe, 0xb, 0x5, 0x1e, 0x2, 0xff, 0x3c, 0x4, 0x2b, 0x5, 0xa, 0x6, 0x3c, 0x0, 0x45
};

// [D_08C76CA4] D_08C76CA4 Graphics
struct CompressedGraphics D_08c76ca4 = {
	/* Huffman Data */		D_08c76ca4_huffman,
	/* RLE Data */			D_08c76ca4_rledata,
	/* RLE Size */			0xde,
	/* RLE Offset */		0x1400,
	/* Double Compressed */	TRUE,
};
