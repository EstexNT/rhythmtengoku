#include "global.h"
#include "graphics.h"

// // //  D_08C6E8D4  // // //

// [D_08C6CDF0] D_08C6E8D4 Huffman Data
u16 D_08c6e8d4_huffmandata[] = {
	0xf1f0, 0x0011, 0x0040, 0x0090, 0x0090, 0x0090, 0x0090, 0x5555, 0x00aa, 0x5555, 0x00aa, 0x0001, 0x0006, 0x0006, 0x0006, 0x0006, 0x5055, 0x00aa, 0x0055, 0x05aa, 0x0210, 0x3010, 0x8180, 0x3603, 0xf401, 0x0001, 0x2850, 0x2a5a, 0x0010, 0xc080, 0xf410, 0x0000, 0x0054, 0x1144, 0x0040, 0xe0f0, 0x0010, 0xc0e0, 0xf140, 0x0004, 0xa040, 0x0062, 0x0002, 0xaa09, 0xa949, 0x0c10, 0x1010, 0x8019, 0xc0c0, 0xf0c0, 0x1030, 0x8010, 0x0e0f, 0x080c, 0x0c0c, 0x7030, 0xf0f0, 0xf1e1, 0x01f1, 0xf401, 0x0001, 0x0a15, 0x0a95, 0x0210, 0x0f80, 0x1f1f, 0xf7c0, 0x0014, 0xc0f8, 0x4444, 0x0910, 0x0108, 0x1f01, 0xf03f, 0xfcf0, 0xf070, 0x03f1, 0xe808, 0x0fff, 0x0f0f, 0x0303, 0xf1f0, 0x000e, 0x0090, 0x0090, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0xaaa4, 0x0006, 0x0006, 0x001a, 0x001a, 0x001a, 0x001a, 0x001a, 0x0f11, 0x00f0, 0xc080, 0x41f0, 0x0002, 0x00a4, 0x00e9, 0xa4e9, 0x01f1, 0x1010, 0x0f80, 0x0f11, 0x00f1, 0x8080, 0xfff1, 0x0000, 0x0155, 0x00f0, 0x3010, 0x4f10, 0x0003, 0x0025, 0x0095, 0x0097, 0x005f, 0x0144, 0x0040, 0xb060, 0x0144, 0x0110, 0x6000, 0xc0e0, 0x0000, 0x4410, 0x0110, 0x0800, 0x0e0e, 0xf401, 0x5403, 0x5255, 0x0555, 0x8584, 0x85a2, 0x0004, 0xf070, 0xf104, 0x4002, 0x1855, 0x14a0, 0x9420, 0x0004, 0xf0e0, 0x4101, 0x0004, 0x0e0e, 0x0000, 0x0444, 0x0610, 0xc180, 0xe0c1, 0x60e0, 0x6c68, 0x8f0c, 0x8f8f, 0x3f0f, 0xf041, 0x5404, 0x56a0, 0x56a8, 0x05a8, 0x05a0, 0x55a0, 0x0441, 0x0040, 0x707c, 0xf140, 0x0004, 0x0a05, 0x0960, 0x02aa, 0x00a5, 0x00a5, 0x0044, 0x0010, 0x2020, 0xf410, 0x0001, 0x8014, 0x805a, 0x1114, 0x0010, 0xfcf8, 0xf410, 0x5402, 0x6855, 0x6855, 0xa855, 0x1144, 0x0201, 0xfef8, 0x1e3f, 0x0c1c, 0xf401, 0x5400, 0x8100, 0x1144, 0x0210, 0x0780, 0x9f0f, 0x1f9f, 0xf041, 0x1400, 0x14a8, 0x0010, 0xf3f0, 0xf104, 0x5002, 0x502a, 0x5002, 0x5002, 0x0440, 0x0701, 0x08f8, 0xf7f8, 0x03f7, 0xef01, 0xefef, 0xefef, 0xf7ff, 0xf3f3, 0xf410, 0x5402, 0x6800, 0x6800, 0x6800, 0x0000, 0x0014, 0xfcf8, 0x4411, 0x0301, 0xe0f8, 0xc0c0, 0x80c0, 0x8080, 0x41f0, 0x0015, 0x00a4, 0x00a4, 0x00a9, 0x00a9, 0x00a9, 0x00a9, 0x00a9, 0xaaa9, 0x001a, 0x001a, 0x006a, 0x006a, 0x006a, 0x006a, 0x006a, 0x006a, 0xe900, 0xe900, 0xe900, 0xe900, 0xe400, 0x5000, 0xaf10, 0x000f, 0xaae5, 0xafe9, 0xeaf9, 0xeff9, 0xfbf9, 0xfaf9, 0xaae6, 0xaa98, 0x5baa, 0x6bfa, 0x6fab, 0x6ffb, 0x6fef, 0x6faf, 0x9baa, 0x26aa, 0x0f14, 0x9404, 0x94ff, 0x94ff, 0x94ff, 0xe4ff, 0xfaff, 0x0440, 0xc3e0, 0x0703, 0x0606, 0x0e0e, 0x0c0c, 0xf140, 0x5000, 0x0905, 0x0010, 0x4040, 0xf410, 0x0004, 0x0050, 0x01a0, 0x0aa0, 0x6a00, 0xaa00, 0x0110, 0x7830, 0x7878, 0xf410, 0x0002, 0x0029, 0x5029, 0x66a9, 0x4441, 0x0010, 0x7c38, 0xf140, 0x5004, 0x552a, 0x550a, 0x5502, 0x5401, 0x6029, 0x0114, 0x0010, 0xe0e0, 0xf401, 0x5405, 0x5001, 0x1029, 0x0069, 0x0029, 0xa2a9, 0xaaa9, 0x0310, 0x1c18, 0x3f1c, 0x3f3f, 0x3f3f, 0x0040, 0x1e3e, 0x0110, 0xf300, 0xfbfb, 0xf401, 0x9000, 0x9006, 0x1144, 0x0010, 0x7060, 0xf410, 0x4008, 0x8015, 0x9516, 0x9526, 0x552a, 0x550a, 0xa80a, 0xa05a, 0x805a, 0x8056, 0x1144, 0x0140, 0xf078, 0x80e0, 0x4440, 0x0014, 0x1e1c, 0x1144, 0x4441, 0x0004, 0x0010, 0xf104, 0x0002, 0x9540, 0x5550, 0xa580, 0x0014, 0xfcf8, 0xf014, 0x1003, 0x2040, 0x6500, 0x5501, 0x1459, 0x1004, 0x0001, 0x1080, 0xf104, 0x0003, 0x0029, 0x0009, 0x9401, 0xaa42, 0x0004, 0xfe0c, 0xf401, 0x0003, 0x00a1, 0x00a5, 0x82a5, 0x82a5, 0x0040, 0xf8f8, 0x0141, 0xc000, 0xf0e0, 0xf041, 0x0002, 0x0105, 0x41a5, 0x41a9, 0x0004, 0x0001, 0xfefe, 0xf401, 0x5401, 0x0a55, 0x2a55, 0x0240, 0xe0f0, 0xc0c0, 0x0080, 0x0141, 0x3838, 0x3e18, 0xff04, 0x0000, 0x0101, 0x0141, 0xf8e0, 0xc078, 0xf014, 0x0004, 0x9555, 0x8055, 0x8055, 0x8055, 0x9015, 0x0004, 0xf0c0, 0xf01f, 0x5402, 0x54aa, 0x54aa, 0x54aa, 0x0110, 0xf080, 0x8f01, 0xaf01, 0x000d, 0x8055, 0x8055, 0x8055, 0x8055, 0x5455, 0x2555, 0x95fe, 0x55a8, 0x5502, 0x55a9, 0x58bf, 0x562a, 0x5580, 0x556a, 0x4000, 0x0014, 0x0340, 0x1c3c, 0x0380, 0x0108, 0x0c02, 0x4000, 0x0000, 0x0014, 0x0010, 0xf140, 0x5400, 0x0015, 0x4100, 0x0304, 0xf070, 0xe6f0, 0xf8f0, 0x3f07, 0xf140, 0x0001, 0x0040, 0x02a9, 0x0004, 0xf0f0, 0xf401, 0x9000, 0x500a, 0x0004, 0xf0f0, 0xf140, 0x5001, 0xaa00, 0x6a05, 0x0504, 0x0e0c, 0xf0fe, 0xfcfc, 0xfefe, 0xf1f1, 0xf9f1, 0xf140, 0x1000, 0x5900, 0x0804, 0x0f0e, 0xcf8f, 0xefcf, 0x1fef, 0x9f9f, 0x0fbf, 0xccc8, 0xcfcd, 0xefef, 0xa1f0, 0x0005, 0x0050, 0x00a4, 0x00a4, 0x00a4, 0xd050, 0x901f, 0x0f11, 0x001f, 0x9f7c, 0xf0f1, 0x4003, 0xaa41, 0xaaa9, 0xaaa4, 0xaaa4, 0x00f1, 0x00f0, 0xc010, 0xf10f, 0x5000, 0x4aa1, 0x011f, 0x5e7e, 0x6c5e, 0xff00, 0xf111, 0x00f0, 0x3c00, 0xddf0, 0x0fdd, 0x01df, 0x5e7e, 0x6c5e, 0xff00, 0xfddd, 0x00f0, 0xff00, 0xf14f, 0x5404, 0xa455, 0x64aa, 0xa42a, 0xa402, 0xa42a, 0xf111, 0x00f0, 0xff00, 0x0014, 0xff00, 0x01f1, 0xe780, 0x4740, 0x00f0, 0xff00, 0x0014, 0xff00, 0x01f1, 0xf540, 0x2248, 0x00f0, 0xff00, 0x31f4, 0x0004, 0xaa40, 0xaa7a, 0xa978, 0xaa7a, 0x957a, 0x0f31, 0x9000, 0xabff, 0xf6f0, 0x4007, 0x40a9, 0x905a, 0x9056, 0x00a5, 0x0001, 0x0016, 0x401a, 0x4069, 0xf6ff, 0x00f0, 0x0708, 0xf06f, 0x0404, 0x5508, 0x0448, 0xaa40, 0xa802, 0xa812, 0x6ff0, 0x000f, 0x0f3e, 0xf9f0, 0x5002, 0x90aa, 0xa4aa, 0xa455, 0xf9ff, 0x00f0, 0x8380, 0xf0f9, 0xa401, 0x9056, 0x9106, 0x00f0, 0x030e, 0xf0f9, 0x5400, 0x445a, 0x9ff0, 0x00f9, 0x753c, 0xf9f0, 0x0001, 0x0055, 0x0165, 0x9f99, 0x000f, 0xf006, 0xffff, 0x000f, 0x001f, 0xfe1e, 0x111f, 0x1111, 0x00f0, 0x3800, 0xf1f0, 0x9001, 0x901a, 0xa41a, 0x00f1, 0x0838, 0xf0f1, 0x9000, 0x9000, 0x00f0, 0xe000, 0x41f0, 0x4012, 0x90a9, 0x90aa, 0xa46a, 0xa4da, 0xa4da, 0x00da, 0x0001, 0x0006, 0x0006, 0x0006, 0x0006, 0x001b, 0xaa40, 0x9540, 0x6a40, 0xaa90, 0xaa90, 0xaa90, 0xaa90, 0xf000, 0x00f1, 0x3010, 0xa0f1, 0x000b, 0x0050, 0x0090, 0xaa40, 0xaa5a, 0xaaf6, 0xaafd, 0xaafd, 0xaafd, 0xaaa9, 0xaaa7, 0xaa9f, 0xaa9f, 0xfaaf, 0x00f0, 0x0700, 0xf01f, 0x1405, 0x14aa, 0x14aa, 0x54aa, 0x52aa, 0x52aa, 0x52aa, 0x00f0, 0x1010, 0x41f0, 0x0011, 0x0001, 0x0006, 0x4054, 0x90a9, 0x90aa, 0xa4aa, 0xe4a9, 0xe4a9, 0x00a9, 0x0001, 0x0006, 0x0006, 0x0006, 0x0006, 0x001a, 0x0550, 0x1aa4, 0x9000, 0x00f0, 0x8080, 0x0000, 0x031f, 0x6f78, 0x5e5f, 0x5a5a, 0x5a5a, 0xd1f0, 0x4017, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0x00aa, 0x00a9, 0xaaa9, 0x4000, 0x406a, 0x406a, 0x406a, 0x406a, 0x406a, 0x406a, 0x406a, 0x406a, 0x407f, 0x407f, 0x407f, 0x407f, 0x407f, 0x407f, 0x407f, 0x14fd, 0x4004, 0x5ff9, 0x77f9, 0xf7f9, 0x5fb9, 0xfff9, 0x003f, 0x00fe, 0x0000, 0x0000, 0x01f1, 0x8a2c, 0x8449, 0x0031, 0xff00, 0x000f, 0xff00, 0x01f1, 0x1322, 0x1196, 0x0031, 0xff00, 0x000f, 0xff00, 0x4f31, 0x0003, 0x0090, 0x0090, 0x2a90, 0x0093, 0xf311, 0x00f3, 0xff80, 0xf6f0, 0x000a, 0x9000, 0x90a5, 0x9055, 0x40a5, 0x40aa, 0x00a9, 0x0054, 0x4065, 0x5065, 0x9065, 0x901a, 0x0ff6, 0x00f0, 0x081c, 0x016f, 0x93ae, 0xa6aa, 0xff66, 0xfff6, 0x000f, 0xef40, 0xf6f0, 0x9000, 0x5551, 0x6f0f, 0x006f, 0x7284, 0x906f, 0x440d, 0x0000, 0xf2aa, 0xf200, 0xf230, 0xca00, 0x0aff, 0xaaff, 0xaa00, 0xf28f, 0x028c, 0x328f, 0x32a3, 0xc2a0, 0x0aaa, 0x0000, 0x01f9, 0x3378, 0x5f5f, 0xf0f9, 0x4001, 0x5505, 0xaa56, 0x00f9, 0xf718, 0xf09f, 0x4002, 0x40a8, 0x10a8, 0x00a8, 0x0000, 0x001f, 0xfcfe, 0x41f0, 0x5007, 0x00a9, 0x0054, 0x06aa, 0x06aa, 0x016a, 0x0015, 0xdaa4, 0x56a4, 0x00df, 0xda82, 0x0cdf, 0x4402, 0x8851, 0x0052, 0xff60, 0x014f, 0x0401, 0xffc9, 0xffc8, 0xc0fd, 0x9403, 0x94aa, 0x94aa, 0xa7aa, 0xa5aa, 0xff10, 0x0005, 0x0009, 0x5600, 0x5800, 0x5800, 0x6000, 0x6000, 0x00f0, 0x8080, 0x0000, 0xf000, 0x01f1, 0xf000, 0xc20c, 0xa01f, 0x540d, 0x1510, 0x4585, 0x51a1, 0xaaa8, 0xaaf2, 0xaa02, 0xaaca, 0xaaca, 0xaaca, 0xaa2a, 0xaa3c, 0xaa3c, 0xaa8f, 0xaaa3, 0x00fa, 0x00f0, 0xf010, 0xf1f0, 0xa404, 0x99a9, 0x9aa4, 0xaaa4, 0xaa90, 0x6a40, 0x00f0, 0x0070, 0x40f1, 0xa405, 0xa4aa, 0xa4aa, 0xa4aa, 0xa9aa, 0xc6aa, 0xd607, 0xd1f4, 0xa400, 0x947d, 0x0cdf, 0x6402, 0x9424, 0x5414, 0x0314, 0x10f4, 0x5403, 0x9c36, 0xaa9f, 0xaa9f, 0xaaa7, 0xd0cf, 0x8403, 0x8daa, 0x8daa, 0x8faa, 0xa0aa, 0x0000, 0x001f, 0x7e7e, 0x041f, 0x1404, 0x1416, 0x1416, 0x1416, 0x0316, 0x3f16, 0xf114, 0x00f0, 0x8080, 0xf1f0, 0x0001, 0x0090, 0x0090, 0x11f0, 0x011f, 0x5a5a, 0xdbda, 0x0bf1, 0x500a, 0xa405, 0xa906, 0xa91a, 0xff1a, 0xff01, 0xff01, 0xff01, 0x7f01, 0x7f00, 0x7f00, 0x7f00, 0x00f1, 0x0e00, 0xf10f, 0x5404, 0x54aa, 0x54aa, 0x54aa, 0x54aa, 0x54aa, 0x1111, 0x000f, 0xfefe, 0xd10f, 0x040f, 0xa054, 0xa252, 0x8252, 0x0a52, 0x1554, 0x152a, 0x152a, 0x152a, 0x152a, 0x552a, 0x3f15, 0x3f15, 0x3f15, 0x3f15, 0x3f15, 0x1555, 0xfaf0, 0x5008, 0xa491, 0xa496, 0x505a, 0x00a6, 0x0001, 0x0006, 0x005a, 0x01a9, 0x01a9, 0x0210, 0xfcfc, 0xfcfc, 0xfcfc, 0xf1f0, 0x5008, 0x00aa, 0xaaa9, 0xaa1a, 0xaa1a, 0xaa1a, 0xaa1a, 0xaa1a, 0xaa1a, 0xaa06, 0x00f1, 0x0220, 0xf8e0, 0xfcfc, 0x00f0, 0xf1f0, 0x0007, 0x0040, 0x0090, 0x00a4, 0x00a4, 0x00a9, 0x40a9, 0x54aa, 0xa955, 0x1111, 0x00f0, 0x8080, 0xa10f, 0x400d, 0x2a85, 0x2a85, 0x2a85, 0x2aa0, 0x1555, 0xc405, 0xc3f1, 0x0ff1, 0xff05, 0x5455, 0x5355, 0x0f55, 0xff55, 0xff54, 0x000f, 0xfffe, 0xf1f0, 0x5404, 0xa900, 0xaa40, 0xaa40, 0xaa90, 0xaa90, 0x1f00, 0x00f1, 0x0ff0, 0xf041, 0x1009, 0xaa00, 0xaaea, 0xaa3e, 0xea03, 0xea00, 0x3a00, 0x3a00, 0x0e00, 0xff00, 0x00bf, 0xf111, 0x0001, 0xfff0, 0x41f0, 0x4007, 0x9400, 0xa900, 0xaa40, 0xaa40, 0xaa40, 0xaa90, 0x5554, 0xaaa9, 0x4111, 0x00f0, 0xc000, 0xf1f0, 0x0004, 0x00a4, 0x40a9, 0x40aa, 0x90aa, 0xa4aa, 0x00f1, 0x0ff0, 0xf041, 0x0400, 0xeaaa, 0xfaf0, 0x0009, 0x0094, 0x0059, 0x4099, 0x405a, 0x0066, 0x0001, 0x0006, 0x0019, 0x0066, 0x01aa, 0xaaff, 0x000f, 0xf8fe, 0xf01f, 0x1405, 0x14aa, 0x14aa, 0x54aa, 0x54aa, 0x54aa, 0x52aa, 0x01f0, 0x1010, 0x1010, 0x0120, 0xf070, 0xf3f1, 0x1f02, 0x5001, 0xbe55, 0xa955, 0x1fb0, 0x0015, 0xe565, 0xa56a, 0x9958, 0x2698, 0x2568, 0x2558, 0x0958, 0x0958, 0xea80, 0xbfe0, 0xfff8, 0xaaa8, 0xfff8, 0xaaa0, 0xff00, 0xfe02, 0xfb02, 0xea02, 0xbf02, 0x2a00, 0x2f00, 0x0a00, 0xfaf0, 0x0001, 0x0069, 0x0095, 0xaaaf, 0x00f0, 0x80e0, 0x1fa0, 0x0009, 0x0269, 0x0256, 0x0256, 0x0095, 0x002a, 0x00fe, 0x00fe, 0x80fe, 0xe0ff, 0xf8ff, 0x00f1, 0x3010, 0xf0f1, 0x0006, 0xa400, 0xa400, 0xa900, 0xa900, 0xa900, 0xaa40, 0xaa40, 0x0f11, 0x0120, 0x8fc0, 0x0e0f, 0x1f02, 0x0000, 0xe555, 0xf041, 0x4008, 0x403a, 0x403a, 0x403a, 0x10ea, 0x05ea, 0xc0ea, 0xffaa, 0x0000, 0xffc1, 0xaf14, 0xe404, 0xe5aa, 0xf9af, 0xfaea, 0xf9ff, 0xf9eb, 0xaaff, 0xfff0, 0x011f, 0xefe8, 0xefef, 0xaf01, 0x0014, 0xaaa9, 0x0055, 0x0080, 0x0060, 0x8058, 0x6856, 0x5655, 0xfe55, 0xfa55, 0xfe55, 0xe955, 0x9555, 0xff55, 0xff56, 0xff56, 0xbf56, 0x6a55, 0x2555, 0x0900, 0x0900, 0x0200, 0x04f1, 0x0005, 0x0a81, 0xa001, 0x0157, 0x57ff, 0x0080, 0x4080, 0xaf41, 0x4006, 0x40e1, 0x50e1, 0x15f8, 0x00f8, 0xaafa, 0x12f8, 0x1200, 0x001f, 0x6060, 0x10fa, 0x5004, 0x1476, 0x105a, 0x041a, 0x051a, 0xffff, 0xa41f, 0x0005, 0x0094, 0xf093, 0x0353, 0xff4f, 0xc30f, 0x0f4f, 0x01fa, 0x9000, 0xaa9f, 0x00f0, 0xf8f8, 0x1af0, 0x4004, 0x4096, 0x4059, 0x90aa, 0x905a, 0xff6a, 0xaf41, 0x1006, 0x100a, 0x10ae, 0x12ff, 0x52fe, 0x4bff, 0x0bff, 0xa2fe, 0x11f0, 0x1111, 0x00f0, 0xf8fc, 0x1af0, 0x4004, 0x90a9, 0xa496, 0xa4aa, 0xa496, 0xff5a, 0xaf14, 0x5406, 0x5456, 0x541b, 0x541b, 0x506f, 0x016f, 0x55af, 0xaa6f, 0x1af0, 0x4011, 0x4066, 0x009a, 0x00a9, 0x00a9, 0x00a4, 0x0050, 0x019a, 0x01a9, 0x01a9, 0x0066, 0x0016, 0x0001, 0x00f4, 0x00f4, 0x00f4, 0x00f4, 0x00f4, 0x00f4, 0x11f0, 0x00f0, 0x01e0, 0xf10f, 0x5005, 0x5255, 0x5255, 0x5255, 0x5255, 0x5255, 0x5055, 0x0020, 0xf3f0, 0x1f02, 0x5408, 0x5540, 0xff95, 0xff95, 0xff95, 0xff95, 0xff95, 0xff95, 0xff95, 0xfe55, 0x1111, 0x000f, 0xfff0, 0x41f0, 0x5008, 0xa400, 0xa900, 0xaa40, 0xaa40, 0xaa40, 0xaa90, 0x1555, 0x6aaa, 0xabaa, 0x1111, 0x0220, 0xf080, 0xfefc, 0xf0fe, 0xfaf0, 0x0006, 0x0050, 0x40a5, 0x40a6, 0x00a6, 0x0015, 0x006a, 0x01aa, 0xaaff, 0x000f, 0xe3fe, 0xf1f0, 0xa40a, 0xa406, 0xa406, 0xa406, 0xa406, 0xa406, 0xa406, 0x0006, 0x4055, 0x90aa, 0x90aa, 0x54aa, 0x001f, 0xe9ee, 0xfff1, 0x0000, 0x0001, 0x00f0, 0x0100, 0xf0f1, 0xa40c, 0x90aa, 0x90aa, 0x40aa, 0x40aa, 0x40aa, 0x6aaa, 0x6a00, 0x6a00, 0x6a00, 0x1a00, 0x1a00, 0x0600, 0x0600, 0x00f1, 0x0108, 0x1af0, 0x000f, 0x0050, 0x00a4, 0x00a9, 0x00a9, 0x0055, 0x016a, 0x01aa, 0x06aa, 0x06aa, 0xff40, 0xff40, 0xff40, 0xff40, 0xff40, 0x7fd0, 0xffd0, 0x11f0, 0x00f1, 0x2010, 0xfff1, 0x0000, 0x0010, 0x0509, 0x3c00, 0xa65a, 0x03c5, 0x5a3c, 0xc5a6, 0xf003, 0xfaf0, 0x4004, 0x9500, 0x9640, 0x9a40, 0xaa40, 0xa900, 0x00f0, 0x0300, 0xf0fa, 0x900d, 0x40aa, 0x40aa, 0x00aa, 0x00a9, 0x40a9, 0x6aaa, 0x1aaa, 0x06aa, 0x06aa, 0xa5aa, 0x90aa, 0x40aa, 0x00aa, 0x00a9, 0x000f, 0xf3fe, 0x1af0, 0xa42c, 0xa500, 0x9a40, 0x9a40, 0x0100, 0x0600, 0x1a00, 0x6a00, 0x6a00, 0x5000, 0xf400, 0xfd00, 0xfd00, 0xff40, 0xff40, 0x5500, 0xff00, 0xff01, 0xff07, 0xff07, 0xff07, 0x001f, 0x0140, 0x07d0, 0x1fd0, 0x1fd0, 0x7fd0, 0xfd00, 0xfd00, 0xf400, 0xf400, 0xf400, 0xf400, 0xf400, 0xfd00, 0x07ff, 0x07ff, 0x07ff, 0x07ff, 0x07ff, 0x07ff, 0x07ff, 0x07ff, 0xffd0, 0xffd0, 0xffd0, 0x41f0, 0xe406, 0xa4aa, 0xa4ab, 0x50fe, 0x00a9, 0xae54, 0xaeaa, 0xae5a, 0x41af, 0x1004, 0x552e, 0x152f, 0x554b, 0x554a, 0x1520, 0x0120, 0xfcfe, 0x80f0, 0xaf20, 0x0009, 0x0055, 0xfb80, 0xaf80, 0xff80, 0xfa00, 0xa000, 0xee00, 0xff02, 0xff02, 0xbf02, 0x00f0, 0x8070, 0xf1f0, 0x0000, 0x5495, 0x00f1, 0x1010, 0xf0f1, 0x0006, 0x5401, 0xa956, 0xa401, 0xa400, 0xa900, 0xa900, 0xaa40, 0x0ff1, 0x00f0, 0x0010, 0xf1f0, 0x000d, 0xaaa9, 0xaa94, 0x5540, 0x1a00, 0x1a00, 0x0500, 0xa400, 0xa4aa, 0xa4aa, 0x90aa, 0x90aa, 0x40aa, 0x40aa, 0x40aa, 0x00f1, 0xc020, 0xa01f, 0x0017, 0xaa85, 0xaa15, 0xaa15, 0xa855, 0xa155, 0x8555, 0xfcaa, 0xfcaa, 0xf2aa, 0xcaaa, 0x2aaa, 0xffaa, 0xffa3, 0xffa3, 0x3fa8, 0x80aa, 0x52aa, 0x5255, 0x4a55, 0x4a55, 0x4a55, 0x4a55, 0x2a55, 0x2a55, 0x00f1, 0x8040, 0xf01f, 0x4005, 0xaa15, 0xaa15, 0xa855, 0xa855, 0xa855, 0xa855, 0x0509, 0x3c00, 0xa65a, 0x03c5, 0x5a3c, 0xc5a6, 0xf003, 0xf0af, 0x5405, 0x54aa, 0x52aa, 0x0aaa, 0x15aa, 0x85aa, 0xa1aa, 0x00f0, 0xc010, 0xf1f0, 0x0002, 0x40a5, 0x40aa, 0x00aa, 0x111f, 0x00f0, 0x78e0, 0x011f, 0x7f78, 0x7f7f, 0xf0f1, 0x0000, 0x4094, 0x000f, 0xff8e, 0xfaf0, 0xa40c, 0xa400, 0x9000, 0x4000, 0xaa00, 0x6a01, 0x1600, 0x0100, 0x6900, 0xa400, 0x5000, 0x6a00, 0x6a00, 0x1a00, 0x00f0, 0x8030, 0xff01, 0x0009, 0x0255, 0x0255, 0x0255, 0x0255, 0x0255, 0x0095, 0x0095, 0x6000, 0x6000, 0x6000, 0x0001, 0x8080, 0xf0f1, 0x0007, 0x0081, 0x0095, 0x1aa9, 0x6a00, 0x6a00, 0xaa00, 0xaa01, 0xaa06, 0x1f00, 0x00f0, 0x0080, 0xf10f, 0x5001, 0x0a55, 0xaa50, 0x0f11, 0x00f1, 0x8080, 0xf0f1, 0x0000, 0x0140, 0x0f11, 0x00f0, 0x803e, 0xa1f0, 0x0012, 0x0090, 0x00a4, 0x00a4, 0x40a9, 0x9405, 0xa91a, 0xaa1a, 0xaa1a, 0xaa1a, 0x5a05, 0x0600, 0x5400, 0xfd00, 0xff40, 0xff40, 0x0500, 0x1f00, 0x7f00, 0x7f00, 0x00f0, 0x0c00, 0xf1f0, 0xa416, 0xa900, 0xa900, 0xaa40, 0xaa40, 0xaa40, 0xa900, 0x0055, 0x01aa, 0x06aa, 0x06aa, 0x06aa, 0x1aaa, 0x1aaa, 0x1aaa, 0x5000, 0xa400, 0xa401, 0xa406, 0xa41a, 0x006a, 0x0040, 0x0094, 0x5415, 0x00f1, 0x0818, 0xa0f1, 0x4008, 0x6aaa, 0xdaaa, 0xf6aa, 0xf6aa, 0xa5aa, 0x9faa, 0x7faa, 0xffaa, 0xffa9, 0x000f, 0xf7fe, 0xfaf0, 0x9006, 0x9000, 0xa400, 0x0500, 0x1a00, 0x6a00, 0xaa00, 0xaa01, 0x000f, 0xf3fe, 0xa1f0, 0xa416, 0xa900, 0xa900, 0xaa40, 0xaa40, 0xaa40, 0xa900, 0x0055, 0x01aa, 0x06aa, 0x06aa, 0x06aa, 0x1aaa, 0x1aaa, 0x1aaa, 0x5400, 0x7d00, 0x7d00, 0xfd00, 0x0500, 0x1f00, 0x7f00, 0xff00, 0xff01, 0x000f, 0x7cfe, 0xf0f1, 0x9004, 0x406a, 0x006a, 0x95aa, 0x406a, 0x401a, 0x11f0, 0x00f1, 0x0818, 0xf0f1, 0x4002, 0x5aaa, 0x05aa, 0x6aaa, 0x0fff, 0x001f, 0x7f78, 0xf0f1, 0x0001, 0xaa40, 0xa955, 0x006f, 0xeb0a, 0xffff, 0x6fff, 0x00f0, 0xf010, 0x96f0, 0x0008, 0x0065, 0x5554, 0x7f74, 0x0075, 0x0150, 0x01d0, 0x05d5, 0x07fd, 0x4000, 0xf1f0, 0x0003, 0x0090, 0x00a4, 0x00a9, 0x40a9, 0x1111, 0x00f0, 0xfe00, 0xb01f, 0x5406, 0xaa55, 0xa3f2, 0xa3f2, 0x8fca, 0x8fca, 0x8fca, 0x8002, 0x001f, 0x7e7e, 0xf1f0, 0x0004, 0x0040, 0x0090, 0x00a4, 0x00a9, 0x40a9, 0x1111, 0x00f0, 0xfe00, 0xf01f, 0x5405, 0xaa55, 0x2a54, 0x2a55, 0x2a55, 0xaa55, 0xaa00, 0x00f1, 0x01f0, 0x1010, 0x8010, 0x10fa, 0x501b, 0x406a, 0x41aa, 0x96aa, 0x40aa, 0x40aa, 0x90aa, 0xa5aa, 0xfdaa, 0xfdaa, 0xfdaa, 0xfdaa, 0x55aa, 0xff6a, 0xff6a, 0xd56a, 0x9fff, 0x9fff, 0x9fff, 0xbdff, 0xbdff, 0xbdfd, 0x95ff, 0xa9ff, 0xfff6, 0xffda, 0xff6a, 0xfdaa, 0xd6aa, 0x00f0, 0x3080, 0xaf10, 0x0027, 0x02a5, 0x0955, 0x2555, 0x2555, 0x2555, 0x095a, 0x02a0, 0x5600, 0x5580, 0x5560, 0x5560, 0x9558, 0x9558, 0x2558, 0x0aa0, 0x9555, 0x2a55, 0x00a5, 0x000a, 0x00f8, 0x00f8, 0x00e0, 0x0080, 0x00bf, 0x00bf, 0x002f, 0x000a, 0x00f8, 0x00f8, 0x00e0, 0x0080, 0x02ff, 0x00bf, 0x002f, 0x000a, 0x0056, 0x806a, 0xa095, 0x5856, 0xaa69, 0x04f1, 0x4009, 0x05a9, 0x5aa9, 0xd040, 0xd040, 0xd040, 0xd101, 0xd100, 0xd100, 0xc101, 0xc104, 0xfaf0, 0x0007, 0x00a9, 0x00a4, 0x00a4, 0x0090, 0x0040, 0x01aa, 0x01aa, 0x006a, 0x0faa, 0x00f0, 0x8030, 0xff01, 0x0007, 0x0095, 0x0255, 0x2955, 0x9555, 0x0055, 0x0060, 0x0058, 0xa056, 0x00f0, 0x8030, 0xff01, 0x0001, 0x0025, 0x0009, 0x11f0, 0x00f1, 0x1810, 0xf0f1, 0x9003, 0x9001, 0xa556, 0x4000, 0x9000, 0xff11, 0x000f, 0x0fcc, 0x016f, 0xac58, 0x0049, 0x96f0, 0x0007, 0x0165, 0x05aa, 0x0665, 0x0565, 0x0059, 0x0015, 0x75d5, 0x7751, 0xff00, 0x00f9, 0x9f76, 0xf90f, 0x5404, 0x5500, 0x5080, 0x5480, 0x5480, 0x5480, 0xf9f0, 0x000f, 0x7f1e, 0xb01f, 0x5004, 0x0f2a, 0xff2a, 0xff2a, 0xc30a, 0xc32a, 0xebf0, 0x4000, 0x40ea, 0xebfb, 0x00f1, 0x0100, 0xe1fb, 0xa404, 0x90aa, 0x90aa, 0x90aa, 0x93aa, 0x93aa, 0xbf01, 0x000e, 0xa955, 0x0255, 0x0255, 0x0955, 0xa555, 0x8002, 0x6aa9, 0x6009, 0x6029, 0x6002, 0x6000, 0x5800, 0x56aa, 0x0a95, 0xaf95, 0xbef0, 0x4004, 0x40fe, 0x50fd, 0x40d7, 0x40d7, 0x40bf, 0xebbb, 0x00f1, 0x0100, 0xe1fb, 0xa404, 0x90aa, 0x90aa, 0x90aa, 0x93aa, 0x93aa, 0xaf01, 0x0007, 0xa955, 0xbe55, 0xfe55, 0x6955, 0xbe55, 0xff55, 0xff56, 0xff56, 0x000f, 0xf3fe, 0xfaf0, 0x6402, 0x6900, 0x9640, 0x6640, 0x01f0, 0x1010, 0x0010, 0xf10f, 0x4006, 0x2855, 0x2855, 0x2855, 0xa855, 0xa155, 0xa155, 0xa155, 0x00f0, 0x7010, 0xff10, 0x0008, 0x0099, 0x0099, 0x5580, 0x5580, 0x5580, 0x5580, 0x5580, 0x5580, 0x5580, 0x0000, 0x001f, 0xf0fe, 0xa0f1, 0xa407, 0xa400, 0xa400, 0xa400, 0xa400, 0x56aa, 0xf6aa, 0x5aaa, 0xdaaa, 0x00f0, 0x8080, 0xfaf0, 0x0004, 0x0001, 0x0006, 0x001a, 0x0069, 0x006a, 0xaaff, 0x000f, 0xf9fe, 0xfaf0, 0x6404, 0x6400, 0x9900, 0x6900, 0x0500, 0x1900, 0x00f0, 0xb080, 0xfaf0, 0x0006, 0x0059, 0x0099, 0x00a4, 0x0001, 0x0006, 0x0016, 0x0065, 0xffaf, 0x00f0, 0xb880, 0xf1f0, 0x9008, 0x909a, 0x149a, 0x6900, 0x6900, 0x6900, 0x6a00, 0x6a00, 0x1a00, 0x1a00, 0x00f0, 0x0600, 0xf01f, 0x1405, 0x14aa, 0x14aa, 0x54aa, 0x54aa, 0x52aa, 0x52aa, 0x00f0, 0xd010, 0xf10f, 0x5408, 0x52a2, 0x52a2, 0xaa15, 0xaa15, 0xaa15, 0xaa15, 0xaa15, 0xaa15, 0xaa15, 0x0000, 0x001f, 0xf0fe, 0xf0f1, 0xa407, 0xa400, 0xa400, 0x6aaa, 0x1aaa, 0x06aa, 0x01aa, 0x01aa, 0x006a, 0x00f0, 0xfe00, 0xf01f, 0x5405, 0xaa55, 0xaa2a, 0xaa4a, 0xaa52, 0xaa54, 0x2a54, 0x1111, 0x00f0, 0xfe00, 0xf01f, 0x5406, 0xaa55, 0xaa2a, 0xa84a, 0xa14a, 0xa14a, 0x0aaa, 0x52a8, 0x00f1, 0x00f0, 0x0300, 0xf0f1, 0x9004, 0x40aa, 0x00aa, 0x00a9, 0x00a9, 0x00a4, 0x0f11, 0x00f0, 0x0100, 0xf0f1, 0x9412, 0x40aa, 0x00aa, 0x00a9, 0x00a9, 0x00a9, 0xa9a4, 0x94aa, 0x40aa, 0x00aa, 0x00a9, 0x00a9, 0x00a4, 0x00a4, 0xaa90, 0xaaa5, 0xaa90, 0xaa40, 0xa900, 0xa900, 0x1111, 0x000f, 0xfcfe, 0xa0f1, 0x900a, 0x40aa, 0x00aa, 0x00a9, 0x00a9, 0xaaa9, 0xaaf6, 0xaaf6, 0xaada, 0xaa6a, 0xa9ff, 0xaa7f, 0x0faa, 0x00f0, 0x8030, 0x10fa, 0x442d, 0x006a, 0x01aa, 0x01aa, 0x06aa, 0x5aaa, 0xa4aa, 0xa4aa, 0xa9aa, 0xa4aa, 0xa4aa, 0xa9aa, 0xf6aa, 0xdaaa, 0xdaaa, 0x6aaa, 0xfdaa, 0xf7a9, 0xffa9, 0x7fa9, 0x95aa, 0xf6aa, 0xf6aa, 0xf6aa, 0xfdaa, 0xfdaa, 0xfdaa, 0xfdaa, 0x55aa, 0xa7ff, 0xa7ff, 0xa7ff, 0xa7ff, 0xa7ff, 0xa7ff, 0xa7ff, 0xa7fd, 0x6aaa, 0x10aa, 0x01a9, 0x01a9, 0x06a9, 0x5aa9, 0x45aa, 0x06aa, 0x1aaa, 0x1aaa, 0x00f0, 0x7080, 0x1af0, 0x0034, 0x0069, 0x0069, 0x006a, 0x001a, 0x0005, 0x00a4, 0x00a4, 0x0090, 0x0090, 0x0040, 0x0066, 0x005a, 0x0066, 0x006a, 0x001a, 0x0005, 0xdfd0, 0xdfd0, 0xffd0, 0xffd0, 0x5f40, 0x0500, 0x1f00, 0x0700, 0x0700, 0x0100, 0xf400, 0xd000, 0xd000, 0x4000, 0xf700, 0xf707, 0xff07, 0xff07, 0xf507, 0x5001, 0xf400, 0xf400, 0xf400, 0xf400, 0xf400, 0xfd00, 0xfd00, 0xfd00, 0x07ff, 0x07ff, 0x07ff, 0x07ff, 0x07ff, 0x07ff, 0x07ff, 0x07ff, 0xf540, 0xedf0, 0x4005, 0x405a, 0x40a6, 0x50a9, 0x4056, 0x40aa, 0x40ea, 0xeddd, 0x00f1, 0x0100, 0xe1fd, 0xa404, 0x90aa, 0x90aa, 0x90aa, 0x93aa, 0x93aa, 0xbf01, 0x0005, 0x0a95, 0xaf95, 0xff95, 0xff95, 0xeba5, 0xeb95, 0xebf0, 0x4000, 0x40ea, 0xebfb, 0x00f1, 0x0100, 0xe1fb, 0xa404, 0x90aa, 0x90aa, 0x90aa, 0x93aa, 0x93aa, 0x4f01, 0x0010, 0x6025, 0x6025, 0x6025, 0x6025, 0x8025, 0x8025, 0x8009, 0x8009, 0x6002, 0x6002, 0x6202, 0x6202, 0x6202, 0x6202, 0x63a9, 0x63c9, 0x6000, 0x000f, 0xe0c0, 0x10fa, 0x4004, 0x14a9, 0x00a4, 0x1490, 0x0590, 0xff90, 0x00f1, 0x000f, 0xe0e0, 0x10fa, 0x1404, 0x45a9, 0x00a9, 0x05a9, 0x01a4, 0xffa4, 0xaf41, 0x8402, 0x84aa, 0x82aa, 0x82fa, 0x01fa, 0x1418, 0x04d9, 0x10f5, 0x50f4, 0xfff4, 0xf6aa, 0xf6aa, 0xf6aa, 0xf6aa, 0xfdaa, 0xfdaa, 0xff6a, 0xff6a, 0xf6aa, 0xf6aa, 0xf6aa, 0xf6aa, 0xfdaa, 0xfdaa, 0xff6a, 0xff6a, 0xfff5, 0xffda, 0xff6a, 0xfdaa, 0xfdaa, 0x1111, 0x000f, 0xeffe, 0xff10, 0x0004, 0x0009, 0x0025, 0x0025, 0x0095, 0x0095, 0x1111, 0x000f, 0x8ffe, 0xff10, 0x0014, 0x0095, 0x0255, 0x0255, 0x0955, 0x0955, 0x0955, 0x0a00, 0x2500, 0x9500, 0x5500, 0x5502, 0x5502, 0x5502, 0xa809, 0x5600, 0x5602, 0x5609, 0x5609, 0x5809, 0x5825, 0x5825, 0x0f11, 0x0220, 0xf010, 0xf3f0, 0x07f7, 0x0af0, 0x909c, 0x0850, 0x3014, 0xb828, 0x182b, 0x0808, 0x2c18, 0x0e0a, 0xa048, 0xc060, 0x0008, 0xf01f, 0x5417, 0x54aa, 0x00aa, 0x552a, 0x554a, 0x000a, 0x554a, 0x002a, 0xa155, 0xa155, 0xa155, 0xa150, 0xa145, 0xa100, 0xa855, 0xaa00, 0x154a, 0x5552, 0x0002, 0x5552, 0x000a, 0x54aa, 0x51a8, 0x40a8, 0x15a8, 0x00f0, 0x8070, 0xa0f1, 0x4020, 0x146a, 0x01aa, 0x006a, 0x501a, 0x055a, 0x501a, 0xa56a, 0xa405, 0xa450, 0xa500, 0xa454, 0xa901, 0xaa54, 0xaaa9, 0xaaf6, 0xaaf6, 0xaaf6, 0xaaf6, 0xaaf6, 0xaaf6, 0xaaf6, 0x9ff6, 0x9faa, 0x9faa, 0x9faa, 0x9faa, 0x9faa, 0x9faa, 0x9faa, 0x6aaa, 0xaaf4, 0xaad1, 0xaa46, 0x1f00, 0x00f0, 0xf080, 0x1a0f, 0x5003, 0x5400, 0x54aa, 0x5000, 0x53ff, 0x000f, 0x7fe0, 0xbf01, 0x0012, 0xa255, 0x0a55, 0x0255, 0x8255, 0x2895, 0x0095, 0xaa55, 0x68aa, 0x6200, 0x6080, 0x5828, 0x5602, 0x55a0, 0x555a, 0x55fa, 0x55be, 0x552a, 0x5502, 0x55a9, 0x11fb, 0x00f1, 0x8c10, 0x000f, 0x7f8c, 0xff01, 0x0004, 0x2a95, 0x8025, 0x0009, 0xaaa9, 0x0009, 0x00f0, 0x00fc, 0xf0f1, 0x0004, 0x00a9, 0x01a9, 0x04a9, 0x15a9, 0x40a9, 0x00f0, 0x0070, 0x0000, 0x001f, 0x1ce2, 0xf01f, 0x4402, 0x1255, 0x4a50, 0x2a05, 0x11ff, 0x00f0, 0x00c0, 0xf0f1, 0x9004, 0x95aa, 0x90aa, 0x40aa, 0x55aa, 0x90aa, 0x01f0, 0x0030, 0xcfc0, 0x1a0f, 0x0009, 0xaa15, 0x0015, 0xff15, 0x0055, 0xa855, 0x284c, 0xca53, 0x3054, 0x4f55, 0x5055, 0x41f0, 0x001d, 0x1be4, 0x1be4, 0x1be4, 0x1be4, 0x1be4, 0x1be4, 0x1be4, 0x1be4, 0x06aa, 0x06aa, 0x06aa, 0x06aa, 0x01aa, 0x01aa, 0x006a, 0x006a, 0x06ab, 0x06ab, 0x06ab, 0x06ab, 0x01ae, 0x01fa, 0x01a9, 0x0055, 0x06aa, 0x1aaa, 0x1aaa, 0x6aaa, 0x6bfa, 0x6aaf, 0xf111, 0x010f, 0xef88, 0xefef, 0x4f10, 0x000f, 0x0955, 0x0955, 0x0955, 0x2755, 0x25d5, 0x257f, 0x0a95, 0x002a, 0x2558, 0x2558, 0x2558, 0x2558, 0x2558, 0x2558, 0x0956, 0x0956, 0x0102, 0xc080, 0xfcf0, 0x1af0, 0x9003, 0x5055, 0xd055, 0x40a9, 0x0057, 0x111f, 0x00f0, 0xf0e0, 0x01fa, 0x6402, 0xd955, 0xf640, 0xfd95, 0xf111, 0x05f0, 0x3070, 0x23a1, 0x2399, 0x8209, 0x3205, 0x9222, 0x140f, 0x540b, 0x5555, 0xaaa1, 0xaaa1, 0xaa85, 0xa815, 0x8155, 0x1555, 0xcc55, 0x327c, 0xca40, 0xca54, 0x2a54, 0x00f0, 0xf070, 0x1df0, 0x0003, 0x00a9, 0x0055, 0x00fd, 0x0054, 0x11fd, 0x00f1, 0x8c10, 0xa10f, 0x5005, 0x5540, 0x00c8, 0x0021, 0xfc85, 0x0215, 0xa855, 0x00f0, 0xf0e0, 0x10fa, 0xa404, 0xa555, 0xa740, 0xa9d5, 0xaa7f, 0xaa95, 0x10bf, 0x5016, 0x52aa, 0x14aa, 0xc0aa, 0xfcaa, 0x02aa, 0xf1aa, 0xf1ff, 0xfc3f, 0x3f83, 0x80a8, 0x40aa, 0x3caa, 0x54aa, 0x00aa, 0xfcaa, 0x02aa, 0xc5aa, 0xf1ff, 0xf1ff, 0x3c0f, 0x0fa0, 0xa0aa, 0x32aa, 0x10fa, 0x4003, 0x41da, 0x076a, 0x5daa, 0xf6aa, 0x00f0, 0xf0c0, 0x1a0f, 0x5002, 0x5000, 0x54aa, 0x5400, 0x1111, 0x010f, 0x3f0e, 0x7070, 0x1f0a, 0x0016, 0xaaa5, 0xffe5, 0xaa95, 0xe055, 0xb856, 0x6e55, 0x5b55, 0x5655, 0xbe55, 0x6955, 0xfe55, 0xfe55, 0xff95, 0xff95, 0xffe5, 0xaaa5, 0xffe5, 0xaa95, 0x5beb, 0x56af, 0x56ef, 0x55bb, 0x55ba, 0x0f11, 0x00f0, 0x0030, 0x0000, 0x021f, 0xfe00, 0xfefe, 0x00fe, 0xf1f0, 0x0001, 0x0001, 0x1556, 0x01f1, 0x8080, 0x8080, 0x000f, 0xff80, 0xf1f0, 0xa402, 0xa46a, 0xa46a, 0xa46a, 0xf111, 0x00f0, 0xf0fe, 0xf1f0, 0x000b, 0x40a9, 0x40aa, 0x90aa, 0x50aa, 0x9055, 0x40aa, 0xaa55, 0xa506, 0x9a06, 0x6a06, 0x9506, 0x6a01, 0x00f0, 0x0070, 0x0000, 0x0ff1, 0x00f0, 0x8010, 0x0f14, 0x9409, 0x94bf, 0x94bf, 0x94bf, 0x94bf, 0x94bf, 0x94bf, 0x94bf, 0x56ff, 0x56f9, 0xabfe, 0x0000, 0x0000
};

// [D_08C6E5A0] D_08C6E8D4 Huffman Window 1
u32 D_08c6e8d4_window1[] = {
	0x95eedfdf, 0xb7b6db2f, 0xcadfb7fe, 0xd93ffbfb, 0xfd9276ff, 0x7e4b7b6f, 0xcdbf9efb, 0xbfd9fef6, 0xdb7b7ded, 0xff9ef7f7, 0xeff6def3, 0xfeffdfff, 0xcedffedb, 0x6edefdbd, 0xef7bfef7, 0x7bedb6f7, 0xf7bedbdf, 0xfef6f7db, 0x000cefad
};

// [D_08C6E5EC] D_08C6E8D4 Huffman Window 2
u32 D_08c6e8d4_window2[] = {
	0x4514a295, 0x8aab9555, 0x52a94aa2, 0xab808555, 0xa032aa8a, 0xafa9eaa8, 0x72d5556a, 0xaabb7775, 0xaaaaeaaa, 0x95555554, 0x76a55d55, 0xaaaaaaab, 0x54aeb76a, 0xbaaab529, 0x00001292
};

// [D_08C6E628] D_08C6E8D4 Huffman
struct Huffman D_08c6e8d4_huffman[] = {
	/* Data */			D_08c6e8d4_huffmandata,
	/* Size */			0x1599,
	/* Count */			0x255,
	/* Window 1 */		D_08c6e8d4_window1,
	/* Window 2 */		D_08c6e8d4_window2,
};

// [D_08C6E638] D_08C6E8D4 RLE Data
u8 D_08c6e8d4_rledata[] = {
	0x1, 0x6, 0xa, 0x3, 0x3, 0x9, 0x1, 0x3, 0x3, 0x9, 0x1, 0x5, 0xa, 0x1d, 0x4, 0xb, 0x5, 0x1c, 0x4, 0xa, 0x5, 0x9, 0x8, 0x14, 0xc, 0x8, 0x8, 0x9, 0x7, 0xa, 0x6, 0x4, 0x8, 0x7, 0x8, 0x4, 0x9, 0x4, 0x14, 0xa, 0x6, 0x8, 0x8, 0x3, 0x3, 0x3, 0x7, 0x7, 0x9, 0x1a, 0x6, 0x9, 0x7, 0x1e, 0x2, 0xa, 0x6, 0x9, 0x3, 0x3, 0x1, 0xb, 0x15, 0x1f, 0x10, 0x7, 0xf, 0x8, 0x9, 0x7, 0x3, 0x5, 0xa, 0x10, 0x4, 0xa, 0xb, 0x4, 0xb, 0x4, 0x4, 0x10, 0xb, 0x5, 0x9, 0x7, 0x8, 0x8, 0x38, 0x3, 0x46, 0x6, 0x4, 0x5, 0x4, 0x1c, 0x1, 0x5, 0x1b, 0xe, 0x2, 0xe, 0x22, 0x1f, 0x1d, 0x3, 0x2c, 0x14, 0xb, 0x6, 0x4, 0x5, 0x8, 0x10, 0x2f, 0xf, 0x81, 0xf, 0x1, 0x3, 0x22, 0xb, 0x18, 0x5, 0x9, 0x4, 0x2, 0x3, 0xe, 0x3, 0xa, 0x5, 0x1, 0x8, 0x2, 0x5, 0x1, 0x7, 0x3, 0x5, 0xa, 0x16, 0x9, 0x7, 0x8, 0x28, 0x7, 0x9, 0x5, 0xd, 0x4, 0xb, 0x4, 0xb, 0x7, 0x9, 0x7, 0x9, 0x6, 0xa, 0x7, 0x9, 0x6, 0xa, 0x9, 0x7, 0x9, 0x27, 0xa, 0x27, 0xa, 0x5, 0x10, 0x21, 0x8, 0x7, 0xe, 0x19, 0x10, 0x6, 0x4, 0x23, 0xa, 0x4, 0x5f, 0x6, 0xa, 0x5, 0xb, 0x7, 0x9, 0x8, 0x8, 0x6, 0xa, 0x6, 0xa, 0x5, 0xb, 0x7, 0x9, 0x7, 0x29, 0x3, 0x1c, 0x4, 0x2, 0x3, 0x8, 0x6, 0xa, 0x5, 0x1b, 0x7, 0x8, 0x3, 0xe, 0x3, 0xc, 0xc, 0xb, 0x9, 0x21, 0xf, 0x1, 0xf, 0x6d, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xc, 0x4, 0x9, 0x7, 0x8, 0x8, 0x4d, 0x3, 0xc, 0x4, 0x1a, 0x6, 0x31, 0x6, 0x3a, 0x3, 0x17, 0x5, 0xb, 0xc, 0xa, 0x5, 0x2b, 0x8, 0x8, 0x7, 0x1, 0x7, 0x14, 0xc, 0x1, 0xe, 0x2, 0x5, 0xb, 0x6, 0xa, 0x5, 0x1d, 0xb, 0x17, 0xb, 0x14, 0xb, 0x14, 0xc, 0x2, 0x4, 0xc, 0x3, 0x1d, 0x7, 0x8, 0x8, 0xd, 0xb, 0x1d, 0x3, 0xc, 0x4, 0x4, 0x2d, 0xa, 0x5, 0xa, 0x7, 0x26, 0x9, 0x1, 0x5, 0x1, 0x9, 0x2d, 0x3, 0xc, 0x5, 0xa, 0x5, 0xa, 0x6, 0x8d, 0x3, 0xc, 0x5, 0x25, 0xa, 0x11, 0xe, 0x16, 0x9, 0x3, 0x6, 0xa, 0x5, 0x1, 0x9, 0x1, 0x8, 0x8, 0x7, 0x9, 0xf, 0x41, 0xd, 0x3, 0x8, 0x8, 0x5, 0x1a, 0xa, 0xd, 0x3, 0x5, 0x3, 0x5, 0x3, 0x7, 0x4, 0x1b, 0x29, 0x8, 0x5, 0xb, 0x6, 0xa, 0x5, 0xa, 0x5, 0xc, 0x3, 0xd, 0x5, 0xb, 0x10, 0x48, 0x7, 0x1, 0x7, 0x1, 0x7, 0xb, 0x5, 0xa, 0x9, 0x24, 0x9, 0x6, 0xa, 0x2b, 0x5, 0xa, 0x6, 0x27, 0x3, 0x5, 0x3, 0x5, 0x3, 0xf, 0x7, 0x8, 0xd, 0x24, 0x7, 0x8, 0x9, 0x6, 0x9, 0x8, 0x8, 0x41, 0x6, 0x19, 0x9, 0x8, 0x7, 0x29, 0x5, 0xb, 0x1c, 0x4, 0x8, 0x8, 0x8, 0x8, 0x5, 0xb, 0x8, 0x8, 0x5, 0x2b, 0x8, 0x8, 0x5, 0xb, 0x8, 0x8, 0x4, 0xc, 0xc, 0x4, 0x7, 0x9, 0x7, 0x9, 0x9, 0x6, 0xb, 0x6, 0x7, 0x9, 0x4, 0x11, 0xa, 0x1, 0xf, 0x11, 0x4, 0x11, 0xa, 0xb, 0x5, 0x8, 0x8, 0x9, 0x7, 0x8, 0x9, 0x2c, 0x3, 0x28, 0x9, 0x8, 0x7, 0x8, 0x9, 0x8, 0x7, 0x8, 0x9, 0x2a, 0x5, 0xa, 0x6, 0xb, 0x5, 0xa, 0x6, 0x18, 0x8, 0x5, 0x3, 0x5, 0x3, 0xc, 0x4, 0xc, 0x4, 0xc, 0x4, 0x21, 0x6, 0x3a, 0xa, 0x6, 0x5, 0xb, 0x6, 0xa, 0x9, 0x17, 0x7, 0x19, 0x4, 0xc, 0x4, 0xc, 0x3, 0xd, 0x6, 0xa, 0xb, 0x4, 0x7, 0xa, 0x5, 0xa, 0x9, 0x28, 0x7, 0x19, 0x8, 0x8, 0x4, 0x11, 0xa, 0x1, 0x4, 0x11, 0xa, 0x1, 0x7, 0x9, 0xb, 0x35, 0x13, 0xd, 0x3, 0x15, 0x7, 0x8, 0x8, 0xd, 0x3, 0xc, 0x5, 0x8, 0x7, 0xa, 0x7, 0x22, 0xd, 0xa, 0x7, 0xa, 0x5, 0xc, 0x5, 0xa, 0x5, 0xc, 0x4, 0xd, 0x3, 0x8, 0x9, 0x8, 0x7, 0xc, 0x5, 0xb0, 0xf, 0x20, 0x4, 0x2d, 0x11, 0x1f, 0x5, 0xb, 0x3, 0xb, 0x5, 0xb, 0x6, 0xa, 0x6, 0x36, 0x5, 0xa, 0x6, 0x1e, 0x3, 0x2a, 0x5, 0xd, 0x3, 0x1e, 0x3, 0xa, 0x5, 0x8, 0x8, 0x4d, 0x3, 0xc, 0x4, 0x46, 0xa, 0x28, 0x8, 0xd, 0x3, 0xc, 0x8, 0xb, 0x4, 0x1a, 0x3, 0xc, 0x5, 0xa, 0x5, 0x8, 0x8, 0xd, 0x3, 0xc, 0x5, 0xc, 0x3, 0xa, 0x7, 0xc, 0x3, 0xc, 0x4, 0xd, 0x3, 0xc, 0x4, 0xd, 0x3, 0xa, 0x16, 0x4, 0xd, 0x2c, 0x3, 0x1b, 0x6, 0x23, 0xc, 0x11, 0xf, 0x6, 0x0, 0xab, 0x0
};

// [D_08C6E8D4] D_08C6E8D4 Graphics
struct CompressedGraphics D_08c6e8d4 = {
	/* Huffman Data */		D_08c6e8d4_huffman,
	/* RLE Data */			D_08c6e8d4_rledata,
	/* RLE Size */			0x29a,
	/* RLE Offset */		0x2200,
	/* Double Compressed */	TRUE,
};
