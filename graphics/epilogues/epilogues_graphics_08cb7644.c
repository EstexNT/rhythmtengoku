#include "global.h"
#include "graphics.h"

// // //  D_08CB7644  // // //

// [D_08CB63A4] D_08CB7644 Huffman Data
u16 D_08cb7644_huffmandata[] = {
	0x0000, 0x01c9, 0x3010, 0xf0f0, 0xff9c, 0x5400, 0x5000, 0x00f5, 0x0700, 0x65fd, 0x4004, 0x03a9, 0x0fa4, 0x3fa4, 0xff90, 0xff50, 0x6fd6, 0x00f5, 0xe000, 0x6df5, 0x4004, 0x90a9, 0x90ea, 0xa4fa, 0xa5fe, 0xe7ff, 0x6666, 0x0259, 0xf0f0, 0xe0e0, 0xc0e0, 0x6f59, 0x0000, 0x0090, 0x6f99, 0x009c, 0xc0f0, 0xcccc, 0x9ccc, 0x046c, 0x2010, 0xc040, 0x90a0, 0x8080, 0x8080, 0xcccc, 0x6ccc, 0x019c, 0xf8fe, 0xe0f0, 0xc6cc, 0x9ccc, 0x046c, 0x0102, 0x800f, 0x8080, 0x9080, 0xc0a0, 0x6ccc, 0x6666, 0x03c9, 0x7030, 0xf7f0, 0x70f1, 0x0030, 0x9999, 0x016c, 0x2040, 0xf010, 0xcccc, 0x999c, 0x0359, 0xfef0, 0xfcfe, 0xfcfc, 0xf8f8, 0x9999, 0x5555, 0x006c, 0x8080, 0xf6cf, 0x5401, 0x5495, 0x5495, 0x00c6, 0xf5f6, 0xff6c, 0x5000, 0x5540, 0x00c5, 0x8080, 0xc6f5, 0x000c, 0x4050, 0x90a4, 0x64a9, 0xa46a, 0x90da, 0x69da, 0xd9ff, 0xdaff, 0xdaff, 0xf6ff, 0xf6ff, 0xf6ff, 0xf6ff, 0xcccc, 0x01f6, 0x4c40, 0xe0cc, 0x256f, 0x5401, 0x5421, 0xf448, 0x76f2, 0x9000, 0x9eb0, 0x01f6, 0x3202, 0x0732, 0x96f5, 0x9000, 0x436a, 0xf666, 0x2259, 0xf622, 0x6729, 0x2276, 0x029c, 0xf0e0, 0xfcf8, 0xc080, 0x6f9c, 0x0001, 0x5554, 0x55e5, 0x6f99, 0x00f9, 0x0080, 0x0469, 0x0204, 0x0f01, 0x8080, 0x8080, 0xa090, 0xfc69, 0x0000, 0x4a50, 0x6666, 0x02c9, 0x0100, 0x0f07, 0x7f1f, 0xcccc, 0x0496, 0xfdfe, 0xf3fb, 0xf6f5, 0xf7f7, 0xf7f7, 0x6999, 0x00c6, 0xfdfe, 0x596c, 0x1000, 0x8000, 0xc6f5, 0x9006, 0x90f6, 0x90f6, 0xa4f6, 0xa4fd, 0xa4fd, 0x65fd, 0x69ff, 0xcccc, 0x0569, 0x2040, 0xf010, 0x0800, 0x0808, 0x0908, 0x8c0a, 0x6666, 0x039c, 0xc080, 0xf0e0, 0xfefc, 0x30f1, 0xf69c, 0x0008, 0x0001, 0x57a8, 0x57aa, 0x5eaa, 0x7aaa, 0xeaaf, 0xeab5, 0xeab5, 0xeab5, 0x0069, 0xa0c0, 0xf569, 0x0004, 0x0241, 0x0240, 0x0a40, 0x0a40, 0x0a40, 0x6999, 0x005f, 0xfcfc, 0xc65f, 0x500c, 0x4a55, 0x4a55, 0x2a55, 0x2855, 0xa855, 0x7f54, 0x7fa1, 0x5fa1, 0x5fa8, 0x1728, 0x172a, 0x852a, 0x852a, 0x5f66, 0x0095, 0xf8e0, 0xc6fa, 0x4004, 0x00ea, 0x00a9, 0x00a9, 0x00a9, 0x4069, 0x59f6, 0x9001, 0xa415, 0xa406, 0x9af5, 0x0002, 0xf094, 0xffa7, 0xffa7, 0x6af9, 0xa403, 0xa430, 0x900c, 0x4003, 0x00ff, 0x0065, 0x8080, 0xf965, 0x0001, 0x0040, 0x8068, 0x0096, 0xf5f6, 0x6699, 0x6999, 0x0056, 0xfff0, 0x96f5, 0x5005, 0xa400, 0xa900, 0xa900, 0x6a40, 0xaa40, 0x6900, 0xaf95, 0x9000, 0xeafb, 0x96fa, 0x500a, 0x001a, 0x001a, 0x0019, 0x0067, 0x015f, 0x57ff, 0x5296, 0xa515, 0xaa41, 0x9694, 0x7da1, 0x66ac, 0x999f, 0x66ac, 0x6c9f, 0x5400, 0x54fe, 0x56af, 0x9004, 0x0aa2, 0xaa09, 0xaa14, 0x8042, 0x3f1a, 0xca66, 0xf95f, 0xfca6, 0x9000, 0x833f, 0xf5fa, 0x9004, 0x90aa, 0x94aa, 0x90aa, 0x90aa, 0xa4aa, 0x00f5, 0x0010, 0x6af5, 0x000c, 0xa640, 0x5a95, 0xaa9f, 0xaa9f, 0xaa9d, 0xaa74, 0xa950, 0x5400, 0x5bd7, 0xf595, 0xff69, 0xd7d6, 0x41f9, 0x66ac, 0x555f, 0x66ac, 0x6c5f, 0x5400, 0x54fe, 0x596f, 0x5406, 0x14a8, 0x11ab, 0x11ab, 0xc1af, 0xc1af, 0xc1af, 0xf0bf, 0x9555, 0x56fc, 0x4006, 0x00aa, 0x00a9, 0x00a4, 0x00a4, 0x009c, 0x009f, 0xc09f, 0x66f5, 0xc9fa, 0x9004, 0x90fa, 0x94fe, 0xd0ff, 0xd0ff, 0xf4ff, 0x00fc, 0x0010, 0x6afc, 0x0007, 0xf7e5, 0x5e5f, 0x69ff, 0x97ff, 0x6fd5, 0x2f40, 0x2f41, 0x3dd5, 0x6f5c, 0x5006, 0x0055, 0x00a5, 0x00f8, 0x30fe, 0x8cfe, 0x83bf, 0xffff, 0xc96f, 0x1403, 0x7ffa, 0x7faa, 0x7eaa, 0x7aaa, 0x0169, 0xa090, 0xf8c0, 0x00f9, 0x8000, 0xa6f9, 0x0004, 0x0090, 0x00a4, 0x40a9, 0x55aa, 0xffa9, 0xfffa, 0x0295, 0xf8f8, 0xf0f0, 0xe0f0, 0x6f95, 0x0008, 0x0254, 0xfe94, 0xfe02, 0xf80b, 0xf80b, 0xf82f, 0xe02f, 0xe0bf, 0xe0bf, 0xafc6, 0x0008, 0x5a55, 0x6f55, 0x6f55, 0x6f55, 0x5a55, 0x2555, 0x0960, 0x0260, 0x0a58, 0xfff6, 0x00af, 0xfee2, 0x6af9, 0x9401, 0x40aa, 0xfd55, 0x96cf, 0x5405, 0x5caa, 0xff2a, 0xff2a, 0xff2a, 0xffca, 0xffc0, 0x69fa, 0xa400, 0xdaaa, 0x9cf6, 0x9002, 0x9007, 0xa401, 0x5405, 0x00af, 0xfee2, 0x6afc, 0x9401, 0x40aa, 0xfd55, 0xc69f, 0x5405, 0x54aa, 0x552a, 0x552a, 0xf52a, 0xfd4a, 0xff40, 0xc9fa, 0xf96c, 0x0006, 0xaaa9, 0xeaa6, 0x7a9a, 0x5eaa, 0x57aa, 0x55ea, 0x57ff, 0x65fa, 0x0005, 0xf654, 0xf69f, 0xfd9f, 0xfda7, 0xffa7, 0xffa7, 0x65fd, 0xa401, 0xa4ff, 0xa43f, 0x015c, 0x8080, 0xc080, 0x6f5c, 0x000a, 0x0090, 0x0094, 0x00e4, 0x55e5, 0x5570, 0x550c, 0x5003, 0x00ff, 0xd550, 0xd500, 0xd000, 0x016c, 0x9080, 0xc0a0, 0x5f6c, 0x4007, 0x5455, 0x55fe, 0x55fe, 0x55f9, 0x5a25, 0x6095, 0x6095, 0x6095, 0xcaf6, 0x4006, 0xc06a, 0x01aa, 0x01aa, 0x01aa, 0x41aa, 0xd06a, 0xf415, 0xc6f9, 0xa400, 0x02f6, 0xaffc, 0xaf69, 0x0403, 0x10f8, 0x00f8, 0x00f8, 0x00f8, 0xaf99, 0x00f9, 0x0080, 0x01c5, 0xf030, 0xf3f0, 0x56fc, 0x000b, 0x6a40, 0x1a90, 0x06a4, 0x01a4, 0x06a4, 0x1a9f, 0x6a7f, 0xa9ff, 0x1500, 0x6a00, 0xaaff, 0xaafd, 0xca5f, 0x5404, 0xfff2, 0xffca, 0xfc2a, 0xf2aa, 0x4aaa, 0x00fa, 0x8080, 0x6aaa, 0xfaa6, 0xd59c, 0x5000, 0xaa55, 0x9cfd, 0x9005, 0x90aa, 0x90aa, 0x90ea, 0x90fa, 0x40fe, 0x40ff, 0xfd59, 0x5002, 0x55ea, 0xac00, 0xac00, 0xdf9c, 0x5402, 0x40f9, 0x00f9, 0x00f9, 0x65df, 0x5401, 0x540a, 0x54f0, 0x00c5, 0xf0c0, 0x5afc, 0x9002, 0xa400, 0xa940, 0xaa9f, 0xaaf5, 0x00fa, 0x1010, 0xc6fa, 0x0000, 0x0281, 0x6f5c, 0x0003, 0xa955, 0xfe55, 0xff95, 0xff95, 0x005c, 0x7f00, 0x69c5, 0x0002, 0xfa95, 0xee55, 0xe755, 0x016c, 0x8080, 0x8080, 0xcccc, 0x6ccc, 0x00fc, 0x8010, 0x65f9, 0x0001, 0x0001, 0xffaa, 0x2f76, 0x2403, 0x0d00, 0x0bd5, 0x883f, 0x8800, 0xcfd6, 0x5001, 0x55e9, 0x95fa, 0xcccc, 0x6729, 0xe400, 0x90ff, 0x6666, 0x2ff9, 0x6f72, 0x5401, 0x03ee, 0xffef, 0x9df6, 0x9001, 0x540a, 0xf5aa, 0xdddf, 0x0196, 0xfdfe, 0xfffb, 0x6f9c, 0x5403, 0x5095, 0x00e5, 0x00f9, 0x55fe, 0xf999, 0x009c, 0xfcf0, 0x999c, 0x9999, 0x00cf, 0xfefe, 0xcccf, 0x019c, 0xe080, 0xf8f0, 0x96f5, 0x4006, 0x406a, 0x406a, 0x006a, 0x0069, 0x006d, 0x0067, 0x00d0, 0xf555, 0x00c5, 0xf030, 0xd9c5, 0x0001, 0x0555, 0x5556, 0x5f9d, 0x4001, 0x15fe, 0x00fe, 0xd5cf, 0xa403, 0x53ff, 0x53ff, 0x4fff, 0x3fff, 0x569f, 0x0003, 0xa840, 0xa8fc, 0xa8fc, 0x28c0, 0x96af, 0x1401, 0x1438, 0x54c8, 0x55f9, 0x65af, 0x0400, 0x50c8, 0x006a, 0x3c3c, 0xff6a, 0x5404, 0x5515, 0xaa1a, 0xa91a, 0x5506, 0x5585, 0xfaa6, 0x006a, 0x3c3c, 0x9f6a, 0x5005, 0xa415, 0xa455, 0x90aa, 0x526a, 0x4255, 0x9555, 0xf6d9, 0x5405, 0x03aa, 0x5eab, 0x5eac, 0x57f0, 0x5570, 0x555c, 0x65fc, 0x5000, 0xaa55, 0x6ff5, 0x00f5, 0x0080, 0x0095, 0xf0c0, 0x009f, 0xfcfe, 0x9faa, 0x9999, 0x00f5, 0x3010, 0x9fa5, 0x0005, 0x0025, 0xfff9, 0xffe5, 0x0295, 0x0955, 0x2555, 0x00fa, 0x8080, 0x9f6a, 0x4003, 0xff81, 0xff2f, 0xbf0b, 0x2f02, 0xaaaa, 0xaaf5, 0x00fa, 0x1010, 0x96fa, 0x0000, 0x0281, 0x6f59, 0x0002, 0x55a9, 0x95fe, 0x95ff, 0x6666, 0x0059, 0x00f0, 0x6f59, 0x0003, 0x6a55, 0xbf55, 0xff55, 0xff56, 0xca5f, 0x5401, 0x0aaa, 0xf000, 0x00c9, 0xfcf0, 0xafc9, 0x5404, 0x0055, 0x00e0, 0x00e0, 0x00e0, 0x0080, 0xccfa, 0x00fc, 0x1010, 0x039c, 0x3010, 0xf070, 0xf3f0, 0xf7f7, 0x6df5, 0x900b, 0x90ff, 0x90ff, 0x90fe, 0x40fe, 0x40aa, 0x00aa, 0x00a9, 0xbf54, 0xaa06, 0xaa01, 0x6a01, 0x1500, 0xdfc5, 0x0003, 0xe055, 0xe055, 0xe015, 0x8015, 0x015c, 0xfcfc, 0xfefe, 0x99fa, 0x00f9, 0x1010, 0x5fa9, 0x0003, 0xa555, 0x0aaa, 0x0300, 0xfe00, 0x6af5, 0x9001, 0x9007, 0x9007, 0x95fd, 0xa401, 0xa46a, 0xa4ea, 0x00f5, 0x0010, 0x5555, 0x01f7, 0x1010, 0xf010, 0x5a7f, 0x540d, 0x52aa, 0x52aa, 0x52aa, 0x5400, 0xff15, 0xff15, 0xff15, 0xfc15, 0x0215, 0xaa15, 0xa055, 0x0555, 0x0fc5, 0x0fc5, 0xd5f7, 0xa40b, 0xa476, 0x5d76, 0xfd7d, 0xfd1f, 0x541f, 0x4005, 0x401a, 0x901a, 0xa51a, 0xaa1a, 0x5516, 0xff1d, 0x77fd, 0x007f, 0x7fe0, 0xd5f7, 0x0006, 0x0094, 0x007d, 0x00fd, 0xaa54, 0xaa01, 0xaa01, 0x6a01, 0xfa7f, 0x5401, 0x5480, 0x54aa, 0xffaa, 0x01f7, 0x0030, 0x0808, 0xfaf7, 0x4004, 0x5540, 0xaa90, 0xaa90, 0xaa90, 0x5540, 0x0087, 0x1010, 0xf287, 0x0007, 0x0001, 0x0006, 0x0004, 0x0018, 0x0010, 0x1660, 0x6000, 0x8001, 0x0178, 0xfefe, 0xfefe, 0xf578, 0x5420, 0x5455, 0x57aa, 0x57aa, 0x5eaa, 0x7aaa, 0x7aaf, 0xeab5, 0xead5, 0xead5, 0xaad5, 0xaad5, 0xaab5, 0xaaad, 0xfaad, 0x5eab, 0x57ab, 0x57ab, 0x7ad5, 0x7ad5, 0x7ad5, 0x7ad5, 0x7ad5, 0x7ad5, 0x7ad5, 0x7ad5, 0x57ab, 0x5ead, 0x5ead, 0x5ead, 0x7ab5, 0x7ab5, 0x7ab5, 0xfab5, 0xf827, 0x0007, 0x0040, 0x0002, 0x0019, 0x2008, 0x2024, 0x2a90, 0x2400, 0x9000, 0x0087, 0x8080, 0x0027, 0x0100, 0xf287, 0x4003, 0x9000, 0x2400, 0x0955, 0x0200, 0x0087, 0x1010, 0xf827, 0x0015, 0x0009, 0xaa98, 0x00a0, 0x0240, 0x2900, 0x9000, 0x0018, 0x0006, 0x0001, 0xaaaa, 0x0018, 0x0008, 0x0006, 0x0002, 0x0001, 0xa0a0, 0x1a1a, 0x0800, 0xa600, 0x0180, 0x0060, 0x0020, 0x7727, 0x0087, 0x2120, 0xf278, 0x5400, 0x5261, 0x7827, 0x0027, 0x4000, 0x0087, 0x4040, 0xf827, 0x0000, 0x0090, 0x8777, 0x0127, 0x0080, 0x8080, 0xf57f, 0x5400, 0x5255, 0x00f7, 0x7000, 0x5fd7, 0x0003, 0x0295, 0x0957, 0x095f, 0x257f, 0xfd45, 0x0400, 0x50fa, 0x5fd5, 0x00f7, 0xe000, 0x5df7, 0x4003, 0x90a9, 0x90ea, 0xa4fa, 0xa5fe, 0xdf45, 0x1000, 0x0538, 0xf827, 0x0000, 0xaa40, 0x0027, 0x0080, 0x0187, 0x8080, 0x8080, 0xf287, 0x0005, 0x0090, 0x4024, 0x9509, 0x0100, 0x1600, 0x6000, 0x0087, 0x0108, 0x5f87, 0x5001, 0x8000, 0xe000, 0x0487, 0x0204, 0x0801, 0x8204, 0x2041, 0x1010, 0xf287, 0x0004, 0x0001, 0x0006, 0x0058, 0x01a0, 0x0600, 0x975f, 0x5404, 0x54a8, 0x54a8, 0x14a8, 0x34aa, 0xc4aa, 0x5fa7, 0x0004, 0x0009, 0x0025, 0x5ff9, 0x7fad, 0x7fff, 0xaf45, 0x9004, 0x90c6, 0x40f6, 0x00a9, 0x82fe, 0x80ff, 0xff57, 0x0003, 0x0095, 0x0025, 0x0025, 0x0009, 0x77f5, 0x00f7, 0x1010, 0xa5f7, 0x000a, 0x5a40, 0x5a40, 0x9a40, 0x9a40, 0x9a40, 0xa640, 0xa640, 0xa640, 0xdaaf, 0xe5ab, 0xaaab, 0xf45a, 0xe403, 0xe05b, 0xbf5b, 0xc056, 0x0055, 0x975f, 0x1405, 0x152a, 0x152a, 0x152a, 0x14aa, 0x1caa, 0x13aa, 0x5af7, 0x0019, 0x0090, 0x00a4, 0x0054, 0x40fd, 0x40ff, 0x00ff, 0x0015, 0x007f, 0x01ff, 0x01ff, 0x0006, 0x001a, 0x016a, 0x06aa, 0x1aaa, 0x6aaa, 0x6bea, 0x6ffa, 0x9000, 0xa400, 0xa940, 0xaa90, 0xaaa4, 0xaaa9, 0xabe9, 0xaff9, 0xf827, 0x4007, 0x0002, 0x0009, 0x0008, 0x0024, 0x0020, 0x0090, 0x0080, 0xc040, 0xf7d9, 0x540d, 0x01ea, 0x55ea, 0x557a, 0x557a, 0x557a, 0x555e, 0xffff, 0xab15, 0xab40, 0xab55, 0xad55, 0xad55, 0xad55, 0xb555, 0x007f, 0xfe00, 0xa7f5, 0xa412, 0xa4aa, 0x90aa, 0x90aa, 0x40aa, 0x41aa, 0x01aa, 0x6aa9, 0x6a04, 0x6a10, 0x6a10, 0x6a10, 0x6a50, 0x6a50, 0x6a90, 0xff90, 0xff41, 0xff0d, 0x7ff5, 0x5550, 0xca55, 0xf7ff, 0xca55, 0xc5f7, 0x4001, 0x40ea, 0x00ea, 0x5af7, 0xa404, 0xa400, 0xa500, 0x9f40, 0x7f40, 0xfd00, 0x00f7, 0x00e0, 0xca5f, 0x1404, 0x25aa, 0x0aaa, 0x50aa, 0x5ba8, 0x5b00, 0x5c7f, 0x1401, 0x54fe, 0x54fe, 0x57fa, 0x9005, 0x90aa, 0x50aa, 0xf4aa, 0xfda9, 0x7da9, 0x96aa, 0xf827, 0x0001, 0x00a9, 0x00a0, 0x7287, 0x0187, 0x2020, 0x2020, 0x6287, 0x0000, 0x0004, 0x7827, 0x5f76, 0x9000, 0x556f, 0x275f, 0x1400, 0x53ea, 0x6222, 0x5ff7, 0xd766, 0x75fd, 0x6402, 0xa50f, 0x9d00, 0x7f40, 0x65f7, 0xa400, 0x69f1, 0x2f57, 0x0000, 0x03e5, 0x7ff5, 0x2226, 0xdf5f, 0x667d, 0x7df5, 0x5001, 0x74fa, 0xfdaa, 0x72df, 0x5401, 0xfffe, 0xff3f, 0xf5f7, 0x9003, 0xa400, 0x6900, 0x9a40, 0xa690, 0x0087, 0x0100, 0xf782, 0xa403, 0x52aa, 0x0a5a, 0xaa05, 0xaaa0, 0x8827, 0x0027, 0x10c0, 0xf287, 0x0005, 0x5555, 0x1602, 0x6000, 0x0001, 0x0016, 0x0058, 0x2877, 0x0087, 0x4040, 0xf287, 0x0004, 0x0010, 0x50a5, 0x2502, 0x0200, 0x0600, 0x0087, 0x07f8, 0xf287, 0x4004, 0x9000, 0x1000, 0x2400, 0x0800, 0x0900, 0x0387, 0x1010, 0x1010, 0x1010, 0x1010, 0x7777, 0x00f5, 0x3302, 0x2f45, 0x2403, 0x240a, 0x2405, 0x9280, 0x4280, 0x752f, 0xa402, 0x5ca3, 0x8fff, 0x8fff, 0x7772, 0x00f7, 0x0808, 0x28f7, 0x4006, 0x8000, 0xe000, 0x2000, 0x3800, 0x0802, 0x0eab, 0xeac0, 0xff57, 0x0000, 0x0009, 0x77f5, 0x00f7, 0x1010, 0xfff7, 0x0000, 0x0001, 0x00f5, 0xcc40, 0x24f5, 0x5003, 0xa024, 0x0124, 0x0124, 0x7049, 0xf554, 0x5f72, 0x9004, 0xbe6f, 0xf96f, 0xe56f, 0x956f, 0x555a, 0x27fd, 0x900f, 0x90aa, 0x90aa, 0x90aa, 0x90aa, 0x40aa, 0x40aa, 0x40aa, 0xaaaa, 0xaa06, 0xaa06, 0xaa06, 0xaa06, 0xaa06, 0xaa01, 0xaa01, 0xaa01, 0xf777, 0x8277, 0x0087, 0x4040, 0xf827, 0x0003, 0x0010, 0x0090, 0x0040, 0x0003, 0x85f7, 0xa404, 0xa469, 0xa41a, 0x5006, 0x0001, 0x0003, 0xf782, 0xa402, 0xa2aa, 0x95aa, 0x4aaa, 0x0078, 0xeffe, 0xf827, 0x0000, 0x0029, 0x8277, 0x0087, 0x0180, 0x8882, 0x0027, 0x00e0, 0xf728, 0xa403, 0xa2aa, 0x86aa, 0x1aaa, 0x6aaa, 0x0078, 0xfefe, 0xf278, 0x5401, 0x5615, 0x5755, 0x8f57, 0x0005, 0x0009, 0x0025, 0x0096, 0x0259, 0x0965, 0x0300, 0x7777, 0x7882, 0x0065, 0xc080, 0xf265, 0x0002, 0x0050, 0xdefe, 0xdedf, 0x6df2, 0x9001, 0x90f6, 0x40c5, 0x6f55, 0x00f2, 0xc770, 0x62fd, 0x5004, 0x9da9, 0x9da6, 0x1f66, 0x5b95, 0x97a9, 0x00f2, 0x9f22, 0x2df5, 0xa400, 0xa41f, 0x0065, 0x0306, 0xff56, 0x5404, 0x5495, 0x5495, 0x5595, 0x5525, 0x5525, 0x6f55, 0x0f45, 0x7078, 0x80c0, 0x8080, 0x1040, 0x0300, 0x0e07, 0x1c0c, 0x0c0c, 0x0606, 0x0e06, 0x071c, 0x0303, 0x0101, 0xcc08, 0xffef, 0x3077, 0x5555, 0x26f7, 0x6400, 0x950e, 0x657f, 0x5000, 0x56ca, 0x6725, 0x5002, 0xe4a5, 0xe45a, 0x90aa, 0x2f57, 0x0000, 0xa3e9, 0x5445, 0xf555, 0x0145, 0x701c, 0x70f0, 0x5555, 0x5554, 0x0065, 0x01c0, 0xff56, 0x5000, 0x4055, 0x555f, 0x0045, 0x0800, 0x4445, 0x5555, 0xf627, 0x9000, 0xf03b, 0x57f6, 0x5400, 0xf4ea, 0x6527, 0x5002, 0x05a5, 0x0093, 0x0093, 0xf527, 0xa400, 0xbd43, 0x5f62, 0xe401, 0xe4ff, 0xfaff, 0x2fd5, 0x0004, 0xf825, 0xe025, 0x8095, 0x0095, 0x0095, 0x5f9d, 0x4001, 0x15fe, 0x00fe, 0xd25f, 0x5404, 0xf152, 0xf152, 0xfc54, 0xfc54, 0xfc55, 0xd9f5, 0x4001, 0x40fe, 0x40ab, 0xdddd, 0x0954, 0xfcfc, 0xf8fc, 0xf9f8, 0xfcfc, 0x7f7f, 0x7f7f, 0xcfdf, 0x0f8f, 0xfe0f, 0xf3f7, 0x26f5, 0xe402, 0xe400, 0xe400, 0x5000, 0x0d45, 0x7cf0, 0x7078, 0x1030, 0xc380, 0xfeff, 0xc07c, 0x70e0, 0x1830, 0xfc70, 0xfffe, 0xc080, 0xfcf8, 0x0f1e, 0x0307, 0x5555, 0x5665, 0x0045, 0x0080, 0xff65, 0x0005, 0x0205, 0x0214, 0x0250, 0x0950, 0x0950, 0x0900, 0x0d45, 0x3030, 0x3010, 0x7070, 0xf0f0, 0xe0f0, 0x03c1, 0x0c08, 0x0c0c, 0x080c, 0x1f03, 0x3c3c, 0x3c3c, 0xf878, 0xf0f0, 0x5555, 0x5fff, 0x0265, 0x1008, 0x3030, 0x2030, 0x64f5, 0x0003, 0xaa54, 0xaa2a, 0x2ac0, 0x0af0, 0x6655, 0x0754, 0xf8fc, 0xe1f0, 0x8fef, 0x080f, 0x0808, 0x1018, 0x3030, 0xf070, 0xd65f, 0x5407, 0x5255, 0x5255, 0x5255, 0x3f55, 0xfe54, 0xfa53, 0xea53, 0xaa4f, 0x67fd, 0x5001, 0xd3fe, 0x9ffe, 0x6627, 0x7f66, 0x6df5, 0x4004, 0x90a9, 0x90ea, 0xa4fa, 0xa5fe, 0xe7ff, 0xff76, 0x4001, 0x4009, 0x5009, 0x0e45, 0x8000, 0x8080, 0x1010, 0xe0c0, 0x78f0, 0x1818, 0x0c0c, 0x30c0, 0xf070, 0xc1e0, 0x8383, 0xf383, 0xc0e0, 0xc1c1, 0x70e0, 0x64f5, 0x4002, 0xd02a, 0xd00a, 0xd00a, 0x0065, 0xe7c0, 0x5556, 0x5665, 0x0d45, 0xc3f0, 0x0707, 0x8387, 0x8383, 0x70f3, 0x3030, 0x7070, 0x7070, 0x31f0, 0x0010, 0x8f0c, 0x078f, 0x0f07, 0x0c0e, 0x0065, 0x1f1e, 0x5556, 0x0545, 0xf1f0, 0xf010, 0xfcfc, 0x3e7e, 0x1f1e, 0xe00f, 0x6245, 0x0000, 0x0040, 0x5f62, 0x9002, 0x52ff, 0x52fe, 0xaafe, 0xca5f, 0x5403, 0x54aa, 0x52aa, 0x52aa, 0x52aa, 0x22ac, 0xf5f2, 0x22ac, 0x55f2, 0x222c, 0x25f6, 0xa401, 0xa43f, 0x5000, 0x662f, 0xaf66, 0x62f5, 0xaf66, 0x2f55, 0xaf66, 0xd2f4, 0xa40d, 0xb41a, 0xf46a, 0xd0aa, 0x40af, 0x00ff, 0x00fd, 0x00d4, 0xa400, 0xa91a, 0xaa1e, 0xfa1f, 0xff07, 0x7f01, 0x1700, 0x0154, 0xf000, 0xf1f3, 0x25f4, 0x4000, 0xd0aa, 0xdf45, 0x4003, 0x40f9, 0x40fe, 0x40fe, 0x02a9, 0xca2f, 0x555f, 0xc26f, 0xf5fa, 0xc2ff, 0x26fa, 0x9402, 0xa4aa, 0xa4aa, 0xe957, 0x265f, 0x5400, 0x553a, 0xaf45, 0x5406, 0x95aa, 0xe5ff, 0xe1ff, 0xe0ff, 0xe0ff, 0x80ff, 0x00ff, 0xffff, 0x0245, 0xe0c0, 0x70f0, 0x3838, 0x96f5, 0x0004, 0x2aa4, 0x0ab4, 0x029c, 0x0264, 0x00a4, 0x526f, 0x9400, 0x94ff, 0x4555, 0x266f, 0x0054, 0xf8f8, 0xf654, 0x4001, 0x5095, 0x5095, 0x6555, 0x0054, 0xfefc, 0x6fa5, 0x0000, 0xf900, 0x555f, 0x96fa, 0x965f, 0x5402, 0x9728, 0x554c, 0x5540, 0x5f62, 0xe404, 0x94ff, 0x90ff, 0x00ff, 0xaa60, 0xa06a, 0x2a6f, 0x9002, 0xa7ff, 0x25ff, 0xc2ff, 0x25fa, 0x4000, 0xd565, 0xf5f2, 0x26af, 0x2401, 0x24fc, 0x9200, 0xffff, 0xaaf9, 0xaf26, 0x5400, 0x50e5, 0xa5f2, 0x6402, 0xa90d, 0xa9d5, 0xaa71, 0x96f5, 0xa403, 0xb40a, 0x9c02, 0x6402, 0xa402, 0x26f5, 0x0001, 0x00e9, 0x00e9, 0x266f, 0x0254, 0x81c0, 0x1f0f, 0x7f7f, 0x6fa5, 0x0000, 0x02f9, 0x96fa, 0x965f, 0x5402, 0x5728, 0x554c, 0x5540, 0x5f62, 0x5455, 0xf662, 0x4455, 0xf622, 0x2f45, 0x5008, 0x2f80, 0x2f80, 0x2f80, 0x2f80, 0x2f80, 0x2f80, 0x6f94, 0x6fe5, 0x4000, 0x0365, 0x7030, 0x6060, 0xc080, 0xc0c0, 0x42f5, 0x0007, 0x01a4, 0x01a4, 0x01a4, 0x01a4, 0x01a4, 0x01a4, 0x3da7, 0xf6a7, 0x0345, 0x0300, 0x0707, 0x0707, 0x0307, 0xfaf5, 0x0006, 0x4055, 0x90aa, 0x90aa, 0x90aa, 0x90aa, 0x40aa, 0x00aa, 0xffff, 0x0054, 0xf0f8, 0x254f, 0x5400, 0x53aa, 0xfd54, 0x5403, 0x543a, 0x54ea, 0x54ea, 0x543f, 0xf622, 0x4455, 0x662f, 0x445f, 0x662f, 0xa45f, 0x9404, 0x5400, 0x54ff, 0x53ff, 0x53ff, 0x93ff, 0x0165, 0xf0e0, 0x0878, 0x2a5f, 0x5013, 0x4a55, 0x2a55, 0xaa55, 0xaa50, 0xf14a, 0xf154, 0xf154, 0xf154, 0xf154, 0xf154, 0xf154, 0xf154, 0x1554, 0x154f, 0x154f, 0x154f, 0x154f, 0x154f, 0x154f, 0x154f, 0x5f22, 0x0145, 0x6000, 0x0c18, 0xaf45, 0x5402, 0x1580, 0x05e0, 0x80fa, 0xaaaa, 0x0c45, 0xe3c0, 0x0e3f, 0x1e0c, 0xf3f7, 0xc061, 0x0f83, 0x0e0f, 0x1e08, 0x030f, 0xf079, 0x80c0, 0x40c1, 0x1040, 0x0065, 0xe1c0, 0xdf56, 0x5405, 0x5500, 0xffe5, 0xffe5, 0xffe5, 0xfff9, 0xaaaa, 0xf2f5, 0x4001, 0x401a, 0x401a, 0x5f22, 0x0045, 0x78ec, 0x2fd5, 0x0007, 0x0955, 0x0955, 0x0955, 0x2555, 0xaaaa, 0x02f8, 0x02f8, 0x02f8, 0x6af5, 0x9004, 0xa4aa, 0xa5aa, 0xa7aa, 0xa9aa, 0xe9af, 0xfa26, 0x9001, 0x942b, 0x550b, 0xa6f5, 0x0006, 0x0050, 0x00a4, 0x00a9, 0x00a9, 0x00a9, 0xffa9, 0xff7f, 0xf2a6, 0x5002, 0x4095, 0x4295, 0x0aa5, 0x0054, 0xfefc, 0x6f54, 0x5404, 0x55a5, 0x55f9, 0x55fe, 0x55fe, 0x55fe, 0x666f, 0x00f5, 0x0100, 0xa65f, 0x0004, 0xa855, 0xa354, 0xa352, 0xa352, 0xa352, 0x55f6, 0x0354, 0xf9fc, 0xf9f9, 0xfcf8, 0xf0f8, 0x00f5, 0x0100, 0xa65f, 0x0001, 0xa855, 0xa354, 0x45f6, 0x66fa, 0x45f6, 0x66fa, 0x45f6, 0x66fa, 0x55f6, 0x0045, 0x3010, 0x0265, 0xf070, 0x80e0, 0x1030, 0x5555, 0x5556, 0x0145, 0x0780, 0x080e, 0xaf56, 0x5403, 0x5455, 0x5495, 0x55e5, 0x95fa, 0x005a, 0xfff0, 0x0245, 0x8e08, 0xf3ef, 0x70f0, 0x5555, 0x0000, 0x0000
};

// [D_08CB748C] D_08CB7644 Huffman Window 1
u32 D_08cb7644_window1[] = {
	0x252496de, 0x75760fbf, 0x98f3fdbd, 0xff77fac7, 0xf7f3ebfe, 0xfda5b2f3, 0xbee79dee, 0x7ffbbbef, 0xefffefbb, 0x0e36fe3f, 0x37bbbedf, 0xebf73ebf, 0x39dff2c9, 0x083d9f3b, 0x79b3b83c, 0x83be0b79, 0x03b7fbdb, 0x000001e6
};

// [D_08CB74D4] D_08CB7644 Huffman Window 2
u32 D_08cb7644_window2[] = {
	0x4ad500aa, 0xf7f2f54c, 0x9ebef69d, 0xe8bf2d7d, 0xccb6a1d7, 0xb52a6ad9, 0xdeefdf53, 0xeeb6557f, 0xfd3d56d2, 0xf7c2f497, 0x5d5dffad, 0x002257d9
};

// [D_08CB7504] D_08CB7644 Huffman
struct Huffman D_08cb7644_huffman[] = {
	/* Data */			D_08cb7644_huffmandata,
	/* Size */			0xefb,
	/* Count */			0x22b,
	/* Window 1 */		D_08cb7644_window1,
	/* Window 2 */		D_08cb7644_window2,
};

// [D_08CB7514] D_08CB7644 RLE Data
u8 D_08cb7644_rledata[] = {
	0x1, 0xf, 0x1, 0x15, 0x41, 0x9, 0x6, 0xb, 0x30, 0xb, 0x5, 0x4, 0xc, 0x17, 0xa, 0xe, 0x1, 0xf, 0x68, 0x8, 0x1, 0xa, 0x32, 0x3, 0x6, 0xb, 0x15, 0x9, 0x12, 0x7, 0x24, 0x5, 0x7, 0x8, 0x41, 0xc, 0x0, 0x35, 0x5, 0x7b, 0x7, 0x49, 0x7, 0x19, 0x7, 0x1a, 0x9, 0x1, 0x4, 0x23, 0xd, 0x11, 0x3, 0x1, 0x4, 0xc, 0xb, 0x11, 0xd, 0x2, 0xf, 0x2, 0xd, 0x2, 0xf, 0x32, 0xe, 0x7, 0xa, 0x6, 0x3, 0x18, 0x7, 0x69, 0x9, 0x27, 0x8, 0x9, 0xe, 0x4, 0x4, 0x9, 0x6, 0x12, 0x7, 0x6, 0xe, 0xf, 0xd, 0x1a, 0x6, 0x16, 0xa, 0x1, 0x6, 0x4, 0x3, 0x13, 0xf, 0x41, 0x6, 0x8a, 0x8, 0x2, 0x11, 0x16, 0xf, 0x8, 0x5, 0x18, 0xe, 0xc, 0x5, 0x5, 0xd, 0x9, 0x7, 0x1c, 0x18, 0x26, 0x9, 0x16, 0xa, 0x7, 0xd, 0x2, 0xf, 0x2, 0xc, 0x9, 0xf, 0xb, 0xc, 0x4, 0x6, 0x6b, 0x8, 0x8, 0x7, 0xb6, 0x3, 0x2, 0xe, 0x31, 0x3, 0x18, 0x4, 0x4, 0x11, 0x2, 0x5, 0x1b, 0x8, 0x5, 0xe, 0xa, 0x3, 0x12, 0xe, 0x1b, 0xa, 0xe, 0xd, 0xa, 0x6, 0x19, 0x7, 0x21, 0xe, 0x9, 0x9, 0x4, 0x9, 0xb, 0x9, 0x6, 0x14, 0x25, 0x3, 0xd, 0xc, 0x4, 0x4, 0x6, 0x5, 0x3f, 0xf, 0xb, 0x7, 0x1a, 0x9, 0x22, 0x11, 0x2, 0x8, 0x6, 0x4, 0xd, 0x9, 0x16, 0xa, 0x37, 0x8, 0x2, 0xc, 0x4, 0x9, 0x7, 0xc, 0xc, 0x7, 0xc, 0x9, 0xa, 0x8, 0xa, 0x8, 0x1a, 0xc, 0x17, 0xa, 0x1d, 0xf, 0x15, 0xd, 0xe, 0x3, 0x12, 0x9, 0x17, 0x7, 0x31, 0x7, 0x4, 0xd, 0x12, 0xd, 0x11, 0x3, 0x3, 0x9, 0x11, 0x3, 0x6, 0x6, 0x24, 0xa, 0x13, 0x9, 0xc, 0xb, 0x14, 0xb, 0x71, 0x4, 0x78, 0x3, 0x21, 0xe, 0x2, 0x3, 0x8, 0x9, 0x8, 0x3, 0x51, 0x8, 0x7, 0x6, 0x3b, 0x9, 0x12, 0x4, 0xb, 0x5, 0x6, 0xa, 0x7, 0x9, 0x8, 0x8, 0x2, 0x18, 0x1b, 0xb, 0x21, 0x4, 0xe, 0x6, 0x48, 0xb, 0x4, 0x3, 0x8, 0x5, 0x6, 0x4, 0x7, 0x5, 0x1b, 0x0, 0xa0, 0x0, 0x0
};

// [D_08CB7644] D_08CB7644 Graphics
struct CompressedGraphics D_08cb7644 = {
	/* Huffman Data */		D_08cb7644_huffman,
	/* RLE Data */			D_08cb7644_rledata,
	/* RLE Size */			0x12c,
	/* RLE Offset */		0x1600,
	/* Double Compressed */	TRUE,
};
