#include "global.h"
#include "graphics.h"

// // //  D_08CF01E0  // // //

// [D_08CEF388] D_08CF01E0 Huffman Data
u16 D_08cf01e0_huffmandata[] = {
	0xf1f0, 0x000a, 0x0154, 0x06a9, 0x06a9, 0x0154, 0xaa00, 0xaa06, 0x5a05, 0x1501, 0x9000, 0x50aa, 0x40aa, 0x11ff, 0x00f0, 0xf0e0, 0xf01f, 0x0003, 0xaa55, 0x0a00, 0x5255, 0x5255, 0x00f1, 0x1010, 0x1111, 0x00f0, 0x3c00, 0x11f0, 0x0f11, 0x001f, 0x7e7e, 0x11f0, 0x0f11, 0x00f0, 0x703c, 0xff10, 0x0007, 0x02a5, 0x0a55, 0x0955, 0x0955, 0xa800, 0x5a80, 0x55a0, 0x5560, 0x1f00, 0x03f1, 0x1010, 0x1010, 0x1010, 0x1010, 0x5781, 0x0001, 0xaa55, 0x15aa, 0x8415, 0x9005, 0x507f, 0x107f, 0x507f, 0xd07f, 0xd07f, 0xd07f, 0x3817, 0x4002, 0x9515, 0x9faa, 0x95aa, 0x3168, 0x0000, 0x0009, 0x8813, 0x0018, 0x0030, 0x3178, 0x0003, 0x5555, 0x2aa0, 0x2fe0, 0x2aa0, 0x3618, 0x4000, 0x4006, 0x8813, 0x0018, 0x0038, 0x0047, 0xff00, 0x0051, 0xff00, 0x4781, 0x0001, 0x5500, 0xaaaa, 0x8514, 0xa405, 0xa5fd, 0xa6fd, 0xa5fd, 0xa7fd, 0xa7fd, 0xa7fd, 0xf781, 0x5400, 0xa802, 0x0018, 0x8080, 0x8888, 0x1888, 0x0078, 0x0ff0, 0x6381, 0x0003, 0xa855, 0x0055, 0x3155, 0x2155, 0x0018, 0x00e0, 0x3817, 0x0002, 0x5500, 0x7faa, 0x55aa, 0x3618, 0x0000, 0x0019, 0x8131, 0x0018, 0x0070, 0xff78, 0x0000, 0x5555, 0x0081, 0xfefe, 0x3781, 0x5403, 0xaa55, 0x01aa, 0xf150, 0x0153, 0x3681, 0x5000, 0x5485, 0x3188, 0x0081, 0xfe3e, 0x0078, 0x0ff0, 0xf318, 0x5000, 0x9000, 0x0118, 0x80c0, 0x8080, 0x0078, 0xff00, 0x6318, 0x0003, 0x0054, 0x00a4, 0x0054, 0x00d0, 0x3188, 0x0018, 0x00c0, 0x3817, 0x0001, 0xa500, 0xa7aa, 0x0118, 0x1030, 0x1010, 0x0078, 0xf000, 0x0012, 0x8080, 0x5412, 0x0004, 0x0050, 0x40a5, 0x90aa, 0x50aa, 0x5095, 0x2315, 0x5008, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0x1555, 0x0014, 0xf0c0, 0x1111, 0x1115, 0x0041, 0x0fe0, 0x0021, 0xefe0, 0x5412, 0x0005, 0x0005, 0x005a, 0x01aa, 0x06aa, 0x0556, 0x05f5, 0x0313, 0x4040, 0x4040, 0x4040, 0x4040, 0x2613, 0x941e, 0x9404, 0x9404, 0x9404, 0x9404, 0x9404, 0x9404, 0x9404, 0x7f04, 0x7f10, 0x7f10, 0x7f10, 0x7f90, 0x7f50, 0x7f00, 0x7f50, 0x0410, 0x04fd, 0x04fd, 0x04fd, 0x04fd, 0x04fd, 0x04fd, 0x04fd, 0x7ffd, 0x7f50, 0x7f50, 0x7f50, 0x7f50, 0x7f50, 0x7f50, 0x7f50, 0x0313, 0x848c, 0x8484, 0x8484, 0x8484, 0x2613, 0x1012, 0x0012, 0x0012, 0x0012, 0x0012, 0x0012, 0x0012, 0x0012, 0x0012, 0x0007, 0x0007, 0x0007, 0x0007, 0x0007, 0x0007, 0x0007, 0x0007, 0x4180, 0x4180, 0x4180, 0x6666, 0x0031, 0xf606, 0xf613, 0x4004, 0x4155, 0x4180, 0x6000, 0x6000, 0x6000, 0x0016, 0xff80, 0x0013, 0xff00, 0xf163, 0x0000, 0x0090, 0x0016, 0xff00, 0x0213, 0xff00, 0x2400, 0x2424, 0x3133, 0x6613, 0x0113, 0x04e4, 0x24e4, 0x5182, 0x0007, 0xa055, 0xa0ea, 0xa0ef, 0x80af, 0x802f, 0x802f, 0x952f, 0x956f, 0x8315, 0x5002, 0x55aa, 0xff55, 0x55aa, 0x3861, 0x0001, 0xaa85, 0xaa8f, 0x8213, 0x0004, 0x0090, 0x0090, 0x0090, 0x0090, 0x5590, 0x6821, 0x4000, 0x8fca, 0x5318, 0x9001, 0xff1a, 0x5555, 0x2222, 0x0018, 0xff00, 0x8215, 0x5406, 0x04a5, 0x05a5, 0x06a5, 0x06a9, 0x06a9, 0x07a9, 0x05fd, 0x8881, 0x0131, 0x0f80, 0x0ff0, 0x0081, 0xf7f0, 0x6318, 0x4001, 0x56d6, 0xaad6, 0x6113, 0x0013, 0x0ff0, 0x2813, 0x0003, 0x5555, 0x7faa, 0x7f10, 0x7f10, 0x2613, 0x9002, 0x507f, 0x007f, 0x557f, 0x3618, 0x0001, 0x00a9, 0xf7fd, 0x6321, 0x5404, 0x54a2, 0x54a2, 0x54a0, 0x54aa, 0x5400, 0x3816, 0x4000, 0x7faa, 0x3128, 0x0005, 0xaf95, 0xaf95, 0xaf95, 0xaf95, 0xff95, 0xaa95, 0xf618, 0x0000, 0x00a9, 0x0231, 0xfb0e, 0x0bfb, 0x0ff0, 0x3681, 0x0000, 0x0e55, 0x1111, 0x0036, 0xfefe, 0x0031, 0xff00, 0x0081, 0xfe00, 0x3281, 0x5405, 0xf255, 0xf2ff, 0xf2ff, 0xf2ff, 0xf2ff, 0x02ff, 0x3681, 0x0003, 0x52a1, 0x53f1, 0x3cbf, 0x3cbf, 0x6666, 0x0031, 0xf606, 0x6813, 0x4007, 0x5555, 0x9fda, 0x901a, 0x5500, 0xaa55, 0xaada, 0x001a, 0x0070, 0x1633, 0x0016, 0xff80, 0x0013, 0xff00, 0x3618, 0x0001, 0x00a4, 0xfff4, 0x0016, 0xff00, 0x0013, 0xff00, 0x0081, 0xfefe, 0x3333, 0x0016, 0xff00, 0x0013, 0xff00, 0x8888, 0x0013, 0x2424, 0x3133, 0x6613, 0x0013, 0x04e4, 0x3861, 0x0001, 0xa100, 0xa3aa, 0x0058, 0xfff0, 0x5557, 0x0045, 0x00f0, 0x5555, 0x5577, 0x0045, 0x00f0, 0x5777, 0x0045, 0x00f0, 0x5555, 0x5755, 0x0045, 0xf0f0, 0x0075, 0x2000, 0x7645, 0x0002, 0x0055, 0x0002, 0x000c, 0x0674, 0x60e0, 0x0700, 0x8013, 0x1010, 0x0080, 0x6038, 0x6010, 0x5674, 0x0007, 0xaa55, 0xfdff, 0xaaff, 0x5fff, 0xffaa, 0xaaf7, 0xf5ff, 0xffaa, 0x5557, 0x03bc, 0x7e7e, 0x7e7e, 0x7e7e, 0x7e7e, 0x00cd, 0xff00, 0x5fcb, 0x0000, 0x5555, 0x002d, 0x3870, 0xdddd, 0xbbcd, 0x00bc, 0x0f00, 0xb2dc, 0x0002, 0xf2a5, 0xf2a9, 0x55a5, 0x00bc, 0x0f00, 0xf2dc, 0x0000, 0x5655, 0x00bc, 0x0f00, 0x2bdc, 0x0000, 0xca55, 0xd222, 0x00bc, 0x0f00, 0x1dbc, 0x0001, 0xaa85, 0xaa85, 0x2891, 0x2403, 0xa4ff, 0x9300, 0x0fa4, 0xcc93, 0x9122, 0x0021, 0x6772, 0x3812, 0x4000, 0xd046, 0x2213, 0x0012, 0x0138, 0x3821, 0x5403, 0x5255, 0x5055, 0x4f55, 0x3f55, 0x0012, 0x49c0, 0x3912, 0x5000, 0x7464, 0x1812, 0x1312, 0x3981, 0x9401, 0x94fc, 0xa4f0, 0xf921, 0x0400, 0x4528, 0x2222, 0x00eb, 0xff00, 0x2ceb, 0x1011, 0x4000, 0xaaa8, 0x6aaa, 0x000a, 0x4000, 0x0fff, 0x53ff, 0x043f, 0x814f, 0xa04f, 0xa813, 0xf0ff, 0xc5ff, 0x10ff, 0x42fc, 0x0af1, 0x2af1, 0x00c4, 0x2222, 0x00be, 0x0df0, 0xfcbe, 0x5403, 0xa855, 0xaa6a, 0x54aa, 0x55a5, 0xbbbb, 0x012d, 0xc080, 0x70e0, 0xcb2d, 0x4007, 0x3a05, 0x3a00, 0x3a00, 0x3a00, 0x3a00, 0x3a00, 0x3a00, 0x3a00, 0x032d, 0xe1c0, 0x3478, 0x8112, 0x2040, 0x23fd, 0x0005, 0x1540, 0x7f90, 0xffa4, 0xffa5, 0xffe7, 0xffe9, 0xdbc2, 0xa401, 0xa700, 0xa7c0, 0xf322, 0xbbcd, 0x3332, 0x3bcf, 0xa400, 0xa4ff, 0x3222, 0xbbcf, 0x3222, 0xbbc3, 0xf3fd, 0x5000, 0xa555, 0x0223, 0x0c08, 0x8f0e, 0xf7ff, 0x6512, 0x0007, 0x01e4, 0x01e4, 0x01e4, 0x01e4, 0x01e4, 0x01e4, 0x15e5, 0x7fef, 0x2222, 0xdddd, 0x00bc, 0x0f00, 0x12dc, 0x0000, 0xea55, 0x2165, 0xe404, 0xe4bf, 0xe4bf, 0xe4bf, 0xe4bf, 0x906b, 0x4561, 0xa400, 0xf9af, 0x4433, 0x0012, 0xc080, 0x5612, 0x0003, 0x00a5, 0x0001, 0x0006, 0x001b, 0xbcd2, 0x0006, 0x40f9, 0x50f9, 0x54f9, 0x55f9, 0x55f9, 0x55f9, 0x15f8, 0xbbc2, 0x032d, 0x8000, 0xe0c0, 0x78f0, 0x1e3c, 0x8912, 0x4006, 0x401e, 0x401e, 0x151e, 0x5f5d, 0x1b19, 0x1604, 0x0500, 0x2222, 0x3331, 0x0012, 0x01e0, 0x9812, 0x0005, 0x0015, 0x0069, 0x01ad, 0x01ad, 0x01b4, 0x0574, 0x8312, 0x9004, 0x401a, 0x401a, 0x0019, 0x0045, 0x00d4, 0xf912, 0x9000, 0x5000, 0x00eb, 0x8010, 0xfaeb, 0x0002, 0x0090, 0x0064, 0x0064, 0xaebb, 0x00eb, 0x0090, 0xceb2, 0x640e, 0x597d, 0x697f, 0x997f, 0x99bb, 0x696e, 0x597f, 0x647f, 0x7ffd, 0xfd19, 0xfd65, 0xb969, 0xee66, 0xfd66, 0xfd69, 0x7d65, 0x2beb, 0x00eb, 0x0900, 0xfbea, 0xa402, 0x91aa, 0x91aa, 0xa4aa, 0x00eb, 0x8010, 0x2dcb, 0x0006, 0xaa90, 0xaa90, 0xaa90, 0xea90, 0xfa90, 0xfe90, 0xbf90, 0x2cb1, 0x00d2, 0x0fec, 0xd23f, 0x9406, 0xa4aa, 0xa4a8, 0xa483, 0xa83f, 0xaaf0, 0x6a8a, 0x0aaa, 0x3222, 0xbbc3, 0x22ff, 0xbbc3, 0x22ff, 0x2bc3, 0xa400, 0xa4c3, 0xbcf3, 0x0000, 0x00f9, 0x1bcf, 0xa400, 0xffff, 0xaaaa, 0xfaaa, 0x01f2, 0x0300, 0x0003, 0xf342, 0x0401, 0x3a00, 0xf2c0, 0x6a21, 0x0004, 0xaa15, 0x5554, 0x5553, 0x5553, 0x554f, 0x2165, 0xe403, 0xe4ff, 0xe4ff, 0xe4ff, 0x00ff, 0x3465, 0x5001, 0x4aaa, 0x2fff, 0x3322, 0x0143, 0x0808, 0x0808, 0x4333, 0xdddd, 0x2345, 0xe401, 0xb9ab, 0xadaa, 0x0023, 0x2020, 0x0043, 0x1010, 0x2453, 0x0000, 0x0009, 0x5612, 0x0002, 0x0090, 0x00d0, 0x00e4, 0x4512, 0xe400, 0xe400, 0x5612, 0x0004, 0x00e4, 0x00d0, 0x4090, 0x90aa, 0x90fa, 0x3456, 0x6612, 0x3356, 0x6612, 0x2345, 0x6612, 0x2345, 0x6612, 0x2345, 0x6612, 0x3345, 0x1654, 0x2222, 0x1543, 0x2222, 0x6543, 0x2221, 0x5433, 0x2221, 0x5433, 0x2221, 0x6543, 0x2221, 0x1543, 0x2222, 0x1654, 0x05d2, 0x3870, 0x0e1c, 0xcf8f, 0xfbe7, 0xf7fd, 0xf1f3, 0x8912, 0x0002, 0x1791, 0x7e50, 0x6504, 0x0021, 0x8e3e, 0x8321, 0x4001, 0x3128, 0xc520, 0x3121, 0x0012, 0x3810, 0x9812, 0x9001, 0x9006, 0xf407, 0x0121, 0xdf1e, 0xfe2f, 0x2981, 0x2401, 0x0803, 0xc314, 0x1981, 0x0212, 0x0072, 0x0c08, 0x000e, 0xceb2, 0x4005, 0x9000, 0x6400, 0xe400, 0xf900, 0x7900, 0x6900, 0x00b2, 0x0100, 0xc2be, 0xa407, 0x91aa, 0x93aa, 0x4faa, 0x4daa, 0x41aa, 0x56aa, 0x0195, 0x3c40, 0xecce, 0x00bc, 0x7e3c, 0x00eb, 0x2400, 0xdceb, 0x4004, 0xe001, 0xe0ff, 0xe0ff, 0xe0ff, 0xe0ff, 0xcb2d, 0x4001, 0x503a, 0x543a, 0xdcbb, 0x02d2, 0x7ef0, 0xdfbf, 0x3fef, 0x2bcd, 0xa406, 0xa43c, 0xa40f, 0xa403, 0xa400, 0xa400, 0xa400, 0xa400, 0x03d2, 0xf8f0, 0x7efc, 0x9f3f, 0xe7cf, 0x6512, 0x0004, 0x0154, 0x06a9, 0x0659, 0x0659, 0x0659, 0x6512, 0x0021, 0x87fe, 0x2122, 0x1543, 0x3122, 0x4261, 0x1000, 0x10ca, 0x5122, 0x1611, 0x8912, 0x9002, 0x4047, 0x0006, 0x4055, 0x8113, 0x1221, 0x9133, 0x1218, 0x9133, 0x2189, 0x2831, 0x0406, 0xf3c8, 0xc23c, 0xca3f, 0x28ff, 0x23fc, 0x0ff2, 0xfff2, 0x3219, 0x5400, 0xf5a9, 0x0021, 0xf9fe, 0x9281, 0x8405, 0x352a, 0x3522, 0x3504, 0x0c1c, 0x2212, 0xa872, 0xceb2, 0x0004, 0x0069, 0x0079, 0x00f9, 0x00e4, 0x0064, 0xeb22, 0x00b2, 0x0080, 0xc2eb, 0x1404, 0x1caa, 0x1faa, 0x87aa, 0x84aa, 0xa1aa, 0x00b2, 0x0010, 0x2222, 0x00eb, 0x2418, 0x00cb, 0x8100, 0x2ebc, 0x5002, 0x8205, 0xa982, 0x576a, 0x2bbb, 0x6512, 0xe40f, 0xe401, 0xe401, 0xe401, 0xe401, 0xe401, 0xe401, 0xe401, 0x4001, 0x401e, 0x401e, 0x401e, 0x401e, 0x401e, 0x401e, 0x401e, 0x001e, 0x5112, 0x0212, 0x80c0, 0x8080, 0x8080, 0x2222, 0x1222, 0x0015, 0xff00, 0xf512, 0x6404, 0x6490, 0x6490, 0x6490, 0x6490, 0x6490, 0x5122, 0x0015, 0xff00, 0xf215, 0xa405, 0xa491, 0xa491, 0xa491, 0xa491, 0xa491, 0x9491, 0x0312, 0x1030, 0x1010, 0x1010, 0xf010, 0x1111, 0x3333, 0x0016, 0xff00, 0x0213, 0xfe00, 0x0202, 0x0202, 0x6613, 0x6666, 0x0013, 0x00fe, 0x6312, 0x4014, 0x405a, 0x409a, 0x409a, 0x409a, 0x409a, 0x40da, 0x405a, 0xa5aa, 0xa701, 0xa701, 0xa701, 0xa701, 0xa701, 0xa501, 0xaa01, 0x5501, 0xaa95, 0xaa9e, 0xaa9e, 0xaa9e, 0xff9e, 0x3166, 0x0031, 0xff80, 0xf631, 0x0004, 0x9514, 0x9514, 0x9514, 0x9514, 0xaa14, 0x0131, 0xf606, 0xf007, 0xf163, 0x9002, 0x9000, 0x9000, 0x9000, 0x0016, 0xff80, 0x0213, 0xe400, 0x2424, 0x2424, 0x3133, 0x6613, 0x0013, 0x04e4, 0x0312, 0x8080, 0x8080, 0x8080, 0x8080, 0x4512, 0x6402, 0x6490, 0x6590, 0x5795, 0x5144, 0x0051, 0x8080, 0x4512, 0x0004, 0x0090, 0x0690, 0x0619, 0x5619, 0xf659, 0x4111, 0x0015, 0xfefe, 0xf215, 0xa400, 0xa4aa, 0x0312, 0x1010, 0x1010, 0x1010, 0x1010, 0xf132, 0x0000, 0x5555, 0x1111, 0x0036, 0xff00, 0xf351, 0x0000, 0xaaa4, 0x3513, 0x0113, 0x0040, 0xfeff, 0x5613, 0x9403, 0x94aa, 0x9400, 0x9470, 0x941c, 0x6213, 0x0416, 0x506a, 0x106a, 0x106a, 0x106a, 0xd06a, 0x506a, 0x006a, 0x506a, 0xa900, 0xa905, 0xa905, 0xa907, 0xa904, 0xa904, 0xa904, 0xa904, 0x006a, 0x506a, 0x506a, 0x506a, 0x506a, 0x506a, 0x506a, 0x1222, 0x0013, 0xf00c, 0x5631, 0x0003, 0x4000, 0x4aaa, 0x4555, 0x4570, 0x5133, 0x0013, 0x0484, 0x3333, 0x1111, 0x0036, 0xfe00, 0x1536, 0x9406, 0xe4ff, 0x7455, 0xff55, 0x15d7, 0x15d7, 0x15d7, 0x00d7, 0x0131, 0xf606, 0x0607, 0xf631, 0x0002, 0x2555, 0x2555, 0x2555, 0x0016, 0xff80, 0x0013, 0x0f00, 0x0016, 0xff00, 0x0213, 0xff00, 0x24e4, 0x2424, 0x3133, 0x6613, 0x0013, 0x04e4, 0x3133, 0x1113, 0x2dcb, 0x9006, 0x90aa, 0x90aa, 0x90aa, 0x90ea, 0x90fa, 0x90fe, 0xd0bf, 0xdd22, 0x0012, 0xee02, 0x8912, 0x1331, 0x8912, 0x9231, 0x5002, 0x48ca, 0x282a, 0xcaaa, 0x0221, 0xee7e, 0xefef, 0x9fef, 0x9812, 0x4003, 0x9005, 0x9007, 0xd001, 0x5001, 0xecb2, 0x0004, 0x5555, 0xd55a, 0xaaaa, 0xeaa9, 0xd555, 0x2abe, 0x0002, 0x5585, 0xff00, 0x4755, 0xe2cb, 0x540f, 0x50ca, 0x43ca, 0x0c2a, 0xf2aa, 0x0aaa, 0x15aa, 0x058c, 0xc1a3, 0x30a3, 0x8fa8, 0xa0aa, 0x03aa, 0x0000, 0x5750, 0x5555, 0x0315, 0xbbbb, 0xbbea, 0x00be, 0xff00, 0xffd2, 0x0000, 0x5554, 0x00bc, 0x0f00, 0x1f2c, 0x0000, 0x4e55, 0xddd2, 0xbc1a, 0xa403, 0xf4aa, 0x74ff, 0x14fd, 0x00fd, 0xccc1, 0xf11a, 0xca21, 0x5400, 0x5432, 0x03bc, 0x7e7e, 0x7e7e, 0x7e7e, 0x007e, 0x00cd, 0xff00, 0xf2cb, 0x0000, 0x5555, 0x2222, 0x33f2, 0x00bc, 0x0f00, 0xf12c, 0x0000, 0xaa55, 0x1caf, 0x5000, 0x4faa, 0xaf1b, 0x0001, 0x4090, 0x4091, 0xcf1a, 0x9400, 0x807f, 0xcf12, 0x4001, 0x4096, 0x6a9d, 0xc1fa, 0x9400, 0xaabf, 0x1bbb, 0x1ffa, 0x001b, 0x0070, 0xa21c, 0x0001, 0x5500, 0xfda5, 0x221a, 0x2165, 0xe403, 0xe4ff, 0xf9ff, 0xf9ff, 0xfeff, 0x2222, 0x0043, 0x8080, 0x6543, 0x0002, 0x5590, 0xaae5, 0xfffa, 0x1166, 0x0021, 0xffc0, 0x4456, 0x4433, 0x5561, 0x5544, 0x6112, 0x1655, 0x0012, 0x8078, 0x2222, 0x6612, 0x3345, 0x6612, 0x3345, 0x6122, 0x3456, 0x6122, 0x4556, 0x5612, 0x4000, 0x00fa, 0x6611, 0x0012, 0x00c0, 0x2165, 0xe401, 0xf9ff, 0xfeff, 0x2222, 0x02bc, 0x7e7e, 0x7e7e, 0x007e, 0x5412, 0x0006, 0x0050, 0x00a4, 0x0055, 0x00fd, 0x00fd, 0x00fd, 0x55f5, 0xfac1, 0x0000, 0xaa55, 0x00c1, 0xf7f0, 0xff1c, 0x4000, 0x4000, 0x011a, 0xfcfc, 0xff80, 0x0012, 0xf000, 0x0041, 0x0ff0, 0xff51, 0x0000, 0x5550, 0x0012, 0x0700, 0x0014, 0x07f8, 0xff15, 0x5400, 0x0055, 0x0012, 0x0300, 0x5214, 0x9004, 0x55aa, 0x7faa, 0x7faa, 0x7faa, 0x5faa, 0x2222, 0x00c1, 0xff00, 0x00a1, 0x00f0, 0xf1a3, 0x0000, 0xa900, 0xfcf1, 0x0000, 0xaaa1, 0x00a1, 0x00f0, 0xc123, 0x0003, 0x9500, 0xe5aa, 0xf9ff, 0xfeff, 0xcccc, 0x00a1, 0xfefe, 0xc612, 0x5404, 0x4055, 0x05aa, 0x5f00, 0xf501, 0xd507, 0xa21c, 0x9002, 0x9fff, 0x9fff, 0xa555, 0x3333, 0x0021, 0x31fe, 0xf2c1, 0x5400, 0x0152, 0xccc1, 0x00a1, 0xefe0, 0x312a, 0x0001, 0xaaa9, 0xff95, 0xfcf1, 0x0000, 0xaa40, 0xf1cc, 0x00a1, 0x00f0, 0x0013, 0xff00, 0x00c1, 0xfefe, 0xccc1, 0xcccc, 0x00a1, 0xc0c0, 0xaaa1, 0xaaaa, 0x00c1, 0xf7f0, 0xff1c, 0x4000, 0x4000, 0x001a, 0x8080, 0x0061, 0x7f00, 0xfac1, 0x0000, 0x5500, 0xaaaa, 0x0061, 0xff00, 0x7834, 0x0000, 0xe955, 0x0183, 0x1800, 0x7000, 0xf783, 0x0002, 0x0940, 0x4000, 0x9400, 0x0083, 0xe070, 0x0037, 0xeffe, 0x0183, 0x2060, 0x8000, 0x4183, 0x5401, 0xaa00, 0x00ff, 0x0000
};

// [D_08CF0048] D_08CF01E0 Huffman Window 1
u32 D_08cf01e0_window1[] = {
	0xfeefb25d, 0x9fefdf7c, 0xbb7f3fbf, 0x2dfb7dff, 0xbf3df297, 0x23edb3db, 0xdbf3779c, 0x7f2f9c1b, 0xde000000, 0x0245ef7b, 0x99d95ddf, 0x6ededcfd, 0xcfc527f9, 0x2d67f3cb, 0xfffb4010, 0xf2776efd, 0x000003fd
};

// [D_08CF008C] D_08CF01E0 Huffman Window 2
u32 D_08cf01e0_window2[] = {
	0xad38de85, 0xc4aa3149, 0x12c5fd2f, 0x56a92810, 0x5d6ebd57, 0x55797bd5, 0x5316f565, 0x52d550a8, 0x6fd3af50, 0x5aca45a9, 0x00045483
};

// [D_08CF00B8] D_08CF01E0 Huffman
struct Huffman D_08cf01e0_huffman[] = {
	/* Data */			D_08cf01e0_huffmandata,
	/* Size */			0xaa7,
	/* Count */			0x20b,
	/* Window 1 */		D_08cf01e0_window1,
	/* Window 2 */		D_08cf01e0_window2,
};

// [D_08CF00C8] D_08CF01E0 RLE Data
u8 D_08cf01e0_rledata[] = {
	0x1, 0x13, 0x9, 0x3, 0x8, 0x8, 0x9, 0xb, 0x3, 0x9, 0x1, 0x4, 0x1a, 0x7, 0xb, 0x6, 0x9, 0x10, 0x11, 0xd, 0x3b, 0x5, 0x19, 0x7, 0x28, 0x8, 0x41, 0x11, 0x1, 0x10, 0x10, 0x10, 0x14, 0x9, 0x6, 0xa, 0xb3, 0x5, 0x1b, 0xb, 0x1, 0x3, 0x11, 0x9, 0x3, 0x3, 0x1, 0x9, 0x17, 0x3, 0x3, 0x5, 0x17, 0x3, 0x17, 0x3, 0x3d, 0x3, 0x31, 0x9, 0x17, 0x3, 0xd, 0x3, 0x9, 0x3, 0x15, 0x3, 0x1, 0x7, 0x5, 0x3, 0x1, 0x7, 0x4, 0x4, 0x1, 0x7, 0x5, 0x3, 0x1, 0x7, 0x1, 0x7, 0x1, 0x7, 0x5, 0x3, 0x1, 0x7, 0x5, 0x3, 0x1, 0x12, 0x2, 0xa, 0x5, 0xe, 0x3, 0x5, 0x2, 0x6, 0x2, 0xa, 0x2, 0xf, 0x6, 0x9, 0x2, 0x6, 0x2, 0x7, 0x2, 0x7, 0x1, 0x3, 0x1, 0xf, 0x1, 0x9, 0x3, 0x3, 0x1, 0xa, 0x2, 0x3, 0x1, 0xa, 0x2, 0x3, 0x1, 0xa, 0x2, 0x3, 0x1, 0xa, 0x16, 0x5, 0xb, 0x5, 0xb, 0x5, 0x3, 0x4, 0x4, 0x5, 0x3, 0x3, 0x5, 0x5, 0x47, 0x4, 0xc, 0x3, 0x1d, 0x6, 0x29, 0x5, 0x40, 0x5, 0x3, 0x3, 0x11, 0xe, 0x2, 0xc, 0x4, 0x9, 0xa8, 0xe, 0x51, 0xf, 0x51, 0x8, 0x81, 0x6, 0x21, 0x3, 0xd, 0x5, 0xcd, 0x7, 0xb9, 0x3, 0x5d, 0x3, 0x29, 0x3, 0x1, 0x5, 0x35, 0x3, 0xc, 0x5, 0xb, 0x4, 0x1d, 0x3, 0xc, 0x4, 0x15, 0x5, 0x3, 0x3, 0x25, 0x5, 0x3, 0x4, 0x4, 0x5, 0x3, 0x3, 0x2a, 0x6, 0x19, 0x8, 0x2, 0xd, 0x16, 0xa, 0xd, 0x6, 0x10, 0x5, 0x1, 0x5, 0x1, 0x3, 0x19, 0x5, 0xb, 0x5, 0x15, 0x3, 0x1, 0x3, 0x9, 0x3, 0x1, 0x3, 0x39, 0x3, 0x1, 0x3, 0x13, 0x3, 0x11, 0x5, 0x1, 0x3, 0x5, 0x3, 0x1, 0xa, 0xa, 0x9, 0x3, 0x6, 0x2, 0x6, 0x2, 0xe, 0x2, 0x11, 0x6, 0x7, 0x2, 0xd, 0x7, 0x13, 0x1, 0x3, 0x1, 0x3, 0x1, 0xb, 0x1, 0x0, 0xb0, 0x0
};

// [D_08CF01E0] D_08CF01E0 Graphics
struct CompressedGraphics D_08cf01e0 = {
	/* Huffman Data */		D_08cf01e0_huffman,
	/* RLE Data */			D_08cf01e0_rledata,
	/* RLE Size */			0x116,
	/* RLE Offset */		0x1000,
	/* Double Compressed */	TRUE,
};

u8 D_08cf01f0[136] = {
	0xB4, 0x00, 0x73, 0x00, 0xB4, 0x00, 0x73, 0x00, 0xB4, 0x00, 0x73, 0x00,
	0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00,
	0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00,
	0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00,
	0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00,
	0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x78, 0x00,
	0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00, 0x78, 0x00, 0x73, 0x00,
	0xF0, 0x00, 0xA0, 0x00, 0xB4, 0x00, 0x73, 0x00, 0xB4, 0x00, 0x73, 0x00,
	0xB4, 0x00, 0x73, 0x00, 0xB4, 0x00, 0x73, 0x00, 0xB4, 0x00, 0x73, 0x00,
	0xB4, 0x00, 0x73, 0x00, 0xB4, 0x00, 0x73, 0x00, 0xB4, 0x00, 0x73, 0x00,
	0xB4, 0x00, 0x73, 0x00, 0xB4, 0x00, 0x73, 0x00, 0xB4, 0x00, 0x73, 0x00,
	0xB4, 0x00, 0x73, 0x00
};
