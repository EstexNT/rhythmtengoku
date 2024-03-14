#include "global.h"
#include "graphics.h"

// // //  D_08C5BADC  // // //

// [D_08C5AF14] D_08C5BADC Huffman Data
u16 D_08c5badc_huffmandata[] = {
	0x6e80, 0x0004, 0x5af9, 0x5be9, 0x5be5, 0x5be5, 0x5be5, 0x00e8, 0x303c, 0x8888, 0x888e, 0x00f8, 0xc080, 0xf0f8, 0x0001, 0x0054, 0x4095, 0x00ff, 0x006e, 0x7ce6, 0x6ee8, 0xee66, 0x00e8, 0x807c, 0xe66e, 0xee8e, 0x00e6, 0x2c78, 0xf8e6, 0x940b, 0xa500, 0xa940, 0xa940, 0xa501, 0x501a, 0x405a, 0x016a, 0x05aa, 0x16aa, 0x16aa, 0x05aa, 0x016a, 0xfff8, 0x01f0, 0x3070, 0x1030, 0xf8f0, 0x0003, 0xa950, 0xa540, 0xa500, 0x9500, 0x01f0, 0xc0e0, 0x0080, 0xf6e8, 0x4004, 0x405a, 0x405a, 0x406a, 0x00a9, 0x00a5, 0x6ee8, 0x00e8, 0x80c0, 0x01f8, 0x3010, 0x0070, 0x6ef8, 0x4007, 0x2a00, 0xaf00, 0xff02, 0x55aa, 0x0015, 0x000a, 0x000b, 0x000b, 0x88e6, 0x00f8, 0x0ff0, 0xf6e8, 0x5002, 0x9000, 0x9000, 0x9000, 0x006e, 0x773e, 0xf8e6, 0x5001, 0x9501, 0xaa05, 0x6ee8, 0x00e8, 0xc0c0, 0xf8e6, 0x4005, 0x016a, 0x05a9, 0x56a5, 0xaa94, 0xaa50, 0xa940, 0x666e, 0x008e, 0xf8fc, 0xee66, 0x888e, 0x00e6, 0x81f0, 0xf86e, 0x4000, 0x0a55, 0x6eee, 0x00e8, 0x0100, 0xf68e, 0x5001, 0x5201, 0x50a1, 0x66e8, 0x028e, 0xef1e, 0xefef, 0xefef, 0xf0f8, 0x0000, 0xa950, 0xfff8, 0x00f0, 0x3070, 0xfff0, 0x0000, 0x0001, 0x00f8, 0xe0c0, 0xe0f8, 0x0002, 0x5095, 0x54a5, 0xffa9, 0xf6e8, 0x0008, 0x0169, 0x05a9, 0x16a5, 0x1a94, 0x5a50, 0x6940, 0xa900, 0x0015, 0x001a, 0x8e66, 0x00e8, 0xf070, 0xf68e, 0x500a, 0x42a0, 0x0a81, 0x2a05, 0x2815, 0xa855, 0xa055, 0xa055, 0xa855, 0x2a05, 0x0a81, 0x42a1, 0x66e8, 0x018e, 0xfe1c, 0xcfef, 0x00f8, 0x3010, 0xf0f8, 0x0004, 0x0055, 0x0156, 0x0056, 0x015a, 0x056a, 0x00f0, 0xe0f0, 0x8ef0, 0x0001, 0x0040, 0xffea, 0xf8e6, 0x5003, 0x00a5, 0x00a4, 0x55a4, 0xaaa5, 0x006e, 0x0f7e, 0x008e, 0xf7e0, 0x88e6, 0xeee8, 0x01e6, 0x003e, 0xff80, 0xf68e, 0x5402, 0x5428, 0x0028, 0x5528, 0x6e88, 0x016e, 0xfe80, 0xc0fe, 0xf6e8, 0x0003, 0x00a4, 0x00a4, 0xa5a4, 0x9406, 0x88e6, 0x00e8, 0xc03c, 0xf6e8, 0x0008, 0x0054, 0x40a5, 0x40a9, 0x506a, 0x905a, 0x901a, 0x401a, 0x40a9, 0x406a, 0xee66, 0x00e8, 0x0f78, 0xf86e, 0x1401, 0x152a, 0x052a, 0x00e8, 0x3c08, 0xf6e8, 0x9005, 0x9016, 0x505a, 0x405a, 0x00aa, 0x0055, 0x006a, 0x6666, 0x008e, 0xfe0e, 0x068e, 0x4003, 0x0855, 0x2a55, 0xa804, 0xff80, 0xf8f0, 0x5401, 0x9500, 0xa550, 0xfff0, 0x008f, 0xcf8e, 0x8888, 0x00f0, 0xc080, 0xf8f0, 0x0006, 0x5055, 0xaa95, 0x6a05, 0x6a05, 0x5a01, 0x5a01, 0x5600, 0x00f0, 0x3070, 0xfe80, 0x0000, 0xa555, 0x00f8, 0x7030, 0xff08, 0x0005, 0x0029, 0x00a9, 0x00a5, 0x02a5, 0x0a95, 0x0a55, 0x008e, 0x3efe, 0xf68e, 0x5401, 0x5481, 0x55a1, 0x6ee8, 0x00e8, 0x80c0, 0xf6e8, 0x0003, 0x5500, 0x0069, 0x00a9, 0x00a5, 0xeee8, 0x00f8, 0x80c0, 0xf68e, 0x5002, 0x4255, 0x4a55, 0x4255, 0x01e8, 0x1030, 0x1000, 0xf6e8, 0x0002, 0x4005, 0x5016, 0x945a, 0x00e6, 0x1138, 0x66ee, 0xe666, 0x01f0, 0xf030, 0x3010, 0xf8f0, 0x0002, 0x0055, 0x0156, 0x156a, 0x00f8, 0xc0f0, 0xe6f8, 0x000d, 0x3e40, 0x0e00, 0x3e00, 0xfa00, 0xea00, 0xeb00, 0xab03, 0xaf03, 0xc003, 0x00ab, 0xc0af, 0xf0ab, 0xb0aa, 0xb0fa, 0xeee6, 0x00e8, 0x003c, 0xe666, 0x00e8, 0x30f0, 0xfe68, 0x0007, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x595a, 0x5568, 0x5568, 0x66e8, 0x00e6, 0x9730, 0xf68e, 0x8401, 0x8128, 0xa028, 0x00f0, 0xc000, 0xfff0, 0x4000, 0x5455, 0x008f, 0xcf08, 0x8888, 0x00f0, 0xfcc0, 0x008f, 0xf880, 0x016e, 0x7f00, 0x007f, 0xf8e6, 0x0000, 0x0090, 0x8e66, 0x008e, 0x0f80, 0xfe8f, 0x0001, 0x4094, 0x5495, 0x00e8, 0x0c08, 0xf6e8, 0x9002, 0x9000, 0x5550, 0x1690, 0x000f, 0xfefc, 0x01f8, 0xc080, 0xe0c0, 0xf0f8, 0x0002, 0x0095, 0x40a5, 0x50a5, 0x000f, 0x01f8, 0x3010, 0x7030, 0xff08, 0x0001, 0x00a9, 0x2a55, 0x01f0, 0xc0e0, 0x80c0, 0x0000, 0x00e8, 0xc080, 0xf6e8, 0x0002, 0x0094, 0x40a5, 0x40a9, 0xe666, 0x00f0, 0xf0f0, 0xffff, 0xf888, 0x000f, 0xf8f0, 0xffff, 0x000f, 0x01f8, 0xf0fc, 0x0080, 0x01f0, 0xffe0, 0xf010, 0xffff, 0x00e8, 0xc100, 0xf68e, 0x5000, 0x4281, 0x016e, 0x7e3c, 0xc3e7, 0x8ee6, 0x6ee8, 0x01e6, 0x183c, 0xc380, 0x6ee8, 0x00e6, 0xeffe, 0xf68e, 0x8400, 0xfd0a, 0x00ff, 0x00f8, 0xe0f8, 0x8888, 0xf888, 0x00e8, 0x3010, 0x8888, 0x88e6, 0x00e8, 0x1030, 0x8888, 0x010f, 0xfec0, 0x00f0, 0xfff0, 0x0000, 0x0054, 0x00f8, 0xffc0, 0x830f, 0x000b, 0x0a50, 0x0a55, 0x0a55, 0x0a55, 0x0a55, 0xff55, 0x00ff, 0xa055, 0xa055, 0xa055, 0xa055, 0xa055, 0x01f0, 0xc030, 0xffef, 0x5fff, 0x001f, 0x7c18, 0xf3f0, 0x0005, 0x5a40, 0x5a00, 0x5a00, 0x5a00, 0x5a00, 0x5a00, 0x00ff, 0x00f3, 0xfcfc, 0xf3f0, 0x0001, 0x00a5, 0x00a5, 0x003f, 0x0c0c, 0x33ff, 0x5555, 0x003f, 0x0c0c, 0x33ff, 0x00f8, 0xc000, 0xf0f8, 0x0001, 0x4054, 0x5495, 0x000f, 0xcf0c, 0xf8e0, 0x0000, 0x0000, 0x888e, 0x00f8, 0xe080, 0xf888, 0x000f, 0xcf00, 0xe8f0, 0x0000, 0x0001, 0xf6e8, 0x0000, 0x00a5, 0x6ee8, 0x00e8, 0x80c0, 0xfe68, 0x0000, 0x2955, 0x00e6, 0x8fc0, 0x06e8, 0x4011, 0x0069, 0x0069, 0x0069, 0x0069, 0x4069, 0x5469, 0xa46a, 0xa45a, 0x5416, 0x0005, 0x0016, 0x005a, 0x016a, 0x05a9, 0x16a5, 0x1a94, 0x1a50, 0x1540, 0xff00, 0x88ff, 0x00f0, 0xe0f0, 0xfff0, 0x0000, 0x0040, 0x02e8, 0x8080, 0x8080, 0x7080, 0xfe68, 0x0001, 0x2aa5, 0x2555, 0x00e6, 0x68e0, 0xf8e6, 0x5004, 0x9414, 0xa400, 0xa400, 0xa500, 0x056a, 0xeee8, 0x01e6, 0x1030, 0xc786, 0xf6e8, 0x9001, 0x901a, 0x901a, 0x01f8, 0x7010, 0x7010, 0xf0f8, 0x0001, 0x0155, 0x155a, 0x00f0, 0xc0f0, 0xf6e8, 0x9007, 0x9016, 0x9006, 0x9016, 0x501a, 0x405a, 0x406a, 0x00a9, 0xfca5, 0x000f, 0xcf0c, 0x0000, 0x00f8, 0xffe0, 0xe888, 0x006e, 0xf786, 0xf8e6, 0x5000, 0x9540, 0xeeee, 0x01f8, 0x0080, 0xf0c0, 0xfff8, 0x000f, 0xce08, 0x0000, 0x00f8, 0xfce0, 0x000f, 0xf880, 0x00e8, 0x8080, 0xf6e8, 0x0002, 0x0040, 0x1aa9, 0x1555, 0x00f8, 0xf010, 0xe68f, 0x4005, 0x57aa, 0xffea, 0xadeb, 0xadff, 0xfd55, 0xfa55, 0x6ee8, 0x00e6, 0x0138, 0xf86e, 0x5002, 0x0215, 0xaa00, 0xabff, 0x00f0, 0xf0fc, 0xe8f0, 0x0001, 0x0040, 0xfeaa, 0x00f8, 0xf010, 0x8888, 0x000f, 0x0700, 0x00f8, 0xf030, 0x888f, 0x01f0, 0xf0fe, 0xf080, 0xf8f0, 0x5000, 0x5555, 0x888f, 0x01f0, 0x7010, 0xf7f0, 0xf08f, 0x0002, 0x0555, 0x00aa, 0x5555, 0x01f0, 0xe080, 0x30f8, 0xf8f0, 0x0001, 0x0055, 0x0556, 0x008f, 0xfef8, 0xff78, 0x4000, 0x5000, 0x00f0, 0xc080, 0xf8f0, 0x0003, 0x0054, 0x4095, 0x50a5, 0x54a9, 0x00f8, 0xe070, 0x780f, 0x5404, 0x500a, 0x40ab, 0x02ab, 0x0aaf, 0x2aaf, 0x0287, 0xfcfc, 0x70f1, 0x7070, 0x7777, 0x01f0, 0x3010, 0x7030, 0x0000, 0xfff0, 0x008f, 0xcf0c, 0xf0f8, 0x0001, 0x0001, 0xa1aa, 0x00f0, 0x7030, 0xff80, 0x0003, 0x00a9, 0x02a5, 0x0a95, 0x2a95, 0x00f8, 0xc0e0, 0xfff8, 0x0000, 0x0040, 0x00f0, 0xc080, 0xf8f0, 0x0002, 0x0054, 0x0095, 0x40a5, 0x028f, 0xcf8c, 0xcfcf, 0xefef, 0x8888, 0x01f0, 0x8080, 0xc0c0, 0x0000, 0xfff0, 0x00e8, 0x8080, 0xf6e8, 0x0005, 0x0550, 0x5690, 0x1500, 0x5900, 0x6a00, 0xfc01, 0xff80, 0x0002, 0x0029, 0x0029, 0x0029, 0x0ff8, 0x00f0, 0x3070, 0xfff0, 0x0000, 0x0005, 0x006e, 0xe77e, 0xf8e6, 0x5001, 0x5005, 0x4016, 0x6e8e, 0x00e6, 0x01f0, 0x6eee, 0x6666, 0x03e8, 0x8080, 0x8080, 0x8080, 0x0080, 0xf8e6, 0x9404, 0x50aa, 0x40aa, 0x01a9, 0x00a9, 0x40a9, 0x008e, 0xff0e, 0xf6e8, 0x0002, 0xa501, 0x9401, 0x5005, 0x8ee6, 0x016e, 0xfe30, 0x73ff, 0xf08e, 0x400d, 0x57fa, 0x57ea, 0x57ea, 0x57ea, 0x57ea, 0x5fea, 0x5faa, 0x5faa, 0xabaa, 0xd5aa, 0x55af, 0x55af, 0x55af, 0x55bf, 0x0ff8, 0x00f8, 0xc0e0, 0x6ef8, 0x0001, 0x0050, 0x00a0, 0x6eee, 0xf8f0, 0x0003, 0x0094, 0x4095, 0x50a5, 0x54a9, 0x00f8, 0x3070, 0x6ef8, 0x0003, 0x0001, 0x800a, 0x002b, 0x0aaf, 0x00e6, 0x83e0, 0xf6e8, 0x5404, 0x40aa, 0x0095, 0x9050, 0x506a, 0x40aa, 0x66ee, 0x01e8, 0x80e0, 0x1f00, 0x6666, 0x888e, 0x00f0, 0xc080, 0x02f8, 0x8080, 0xc0c0, 0xe0c0, 0xe0f8, 0x0000, 0x0094, 0x0fff, 0xf86e, 0x5406, 0x50a0, 0x42a1, 0x42a1, 0x50a1, 0x55a1, 0x55a1, 0x00a0, 0x888e, 0x010f, 0xfefc, 0xfefe, 0x00e8, 0x80fc, 0xf68e, 0x0002, 0xaa15, 0xaa15, 0x8015, 0x01f8, 0x1010, 0x0030, 0xf6e8, 0x000a, 0x1550, 0x1a94, 0x1aa5, 0x15aa, 0x016a, 0x0056, 0x0005, 0x01a9, 0x05a5, 0x0694, 0x4690, 0x6e8e, 0x00e6, 0x807e, 0xf8f0, 0x0000, 0x0095, 0x8ff0, 0x03f0, 0xe0e0, 0xc0c0, 0x8080, 0x0301, 0xf80f, 0x4003, 0x0255, 0x0a55, 0x2a54, 0xaa50, 0x0fff, 0x00f8, 0x80e0, 0x8888, 0xf888, 0x0008, 0xfff0, 0x01f0, 0x0c08, 0x0e0c, 0xf8f0, 0x9401, 0x9500, 0xa500, 0x0178, 0xe0e0, 0xc0e0, 0x00f8, 0x3030, 0x8888, 0x888f, 0x0278, 0x3030, 0x3030, 0xf030, 0xf0f8, 0x0009, 0xaa94, 0xaa94, 0xaa94, 0xaa54, 0xaa50, 0xaa50, 0xaa50, 0xaa50, 0xa500, 0x9500, 0x02f8, 0xc0e0, 0x80c0, 0x0080, 0xf8f0, 0x4006, 0x40a9, 0x40a9, 0x50a9, 0x50a9, 0x50aa, 0x50aa, 0x50aa, 0x8888, 0x01f0, 0x1010, 0x3030, 0xe8f0, 0x0008, 0xa540, 0xa940, 0xa940, 0xa950, 0xaa50, 0xaa54, 0xaa94, 0xaa94, 0xeafe, 0xf86e, 0x5001, 0x552a, 0x152a, 0x00e8, 0x10f8, 0xf6e8, 0x0002, 0x0005, 0x0016, 0x001a, 0x8e66, 0x00e8, 0x0070, 0xffe8, 0x0000, 0x0555, 0x006e, 0x7f0e, 0xf8e6, 0x5400, 0x6500, 0x6eee, 0x00e8, 0x80c0, 0xe0f8, 0x5008, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x00aa, 0x3ffc, 0x66ee, 0xee66, 0x01e8, 0x3010, 0x8780, 0x08e6, 0x5001, 0x406a, 0x016a, 0xf8f0, 0x500e, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x15aa, 0x1600, 0x1600, 0x5600, 0x5a00, 0x5a00, 0x6a01, 0x6a01, 0x010f, 0xfefe, 0xfcfe, 0x0fff, 0x0000, 0x03f1, 0x3030, 0x7070, 0x6060, 0xe0e0, 0x000f, 0xe0f0, 0xff11, 0x0fff, 0x02f1, 0xe0f0, 0x80c0, 0xc000, 0x1111, 0x03f0, 0xc0c0, 0xc0c0, 0x8080, 0x8080, 0x03f1, 0x3cfe, 0x0101, 0x0101, 0x0301, 0xf10f, 0x4004, 0x0255, 0x0a55, 0x2a54, 0x2a50, 0xaa50, 0x0fff, 0x09f1, 0xe0e0, 0xc1c0, 0x61e1, 0x7363, 0x1f7f, 0xc0c0, 0x80c0, 0x8080, 0x3030, 0x7030, 0xf0f1, 0x0003, 0x0015, 0x0016, 0x0016, 0x0056, 0x01f0, 0x0100, 0x0703, 0xf10f, 0x0003, 0x0a55, 0x0a54, 0x2a50, 0x0040, 0x00ff, 0x06f1, 0xf0fe, 0x0080, 0x0301, 0x0303, 0x0101, 0x0101, 0x0101, 0x11ff, 0x1111, 0x03f0, 0x8080, 0x8080, 0x8080, 0x8080, 0xf1f3, 0x5000, 0x506a, 0x00f1, 0xf0f0, 0x7e1f, 0x5003, 0x400a, 0x00ab, 0x02ab, 0x0eaf, 0xf3f1, 0x0000, 0x00a5, 0x33ff, 0x00f1, 0xf8f0, 0xf7f1, 0x5002, 0x50a5, 0x54a9, 0x54aa, 0x7777, 0x04f1, 0xe0f0, 0x7080, 0xf070, 0xf1f0, 0x81b1, 0xff1f, 0x5400, 0x5015, 0x01f0, 0x0100, 0x0703, 0xf10f, 0x0001, 0x0a55, 0x0a50, 0x0fff, 0x00f1, 0x03f0, 0xf01f, 0x4002, 0x0215, 0x0215, 0x0a15, 0xf1ff, 0x00f0, 0xf0f8, 0xe7f0, 0x0004, 0xfa50, 0xfa6f, 0xea6f, 0xea6f, 0xea7f, 0x001f, 0xfcc0, 0x027f, 0xf8f8, 0xf8f8, 0xf8f8, 0xf7f1, 0x9400, 0x945a, 0xfff7, 0x0201, 0xc0fe, 0x8000, 0xfcf0, 0x01f1, 0xfe7e, 0xfcfc, 0xf0f1, 0x4000, 0x0095, 0x00ff, 0x0001, 0xfff8, 0x031f, 0xfefe, 0xfefe, 0xfefe, 0xfcfc, 0x03f0, 0x8080, 0x8080, 0x8080, 0x0080, 0x0101, 0x00f8, 0xfcc0, 0x001f, 0xfcfc, 0xf01f, 0x4000, 0x4055, 0x0111, 0x020f, 0xfef8, 0xfcfc, 0xf8f8, 0xf0f1, 0x5401, 0x54aa, 0x50aa, 0x000f, 0x06f1, 0x80c0, 0xe080, 0xc7e1, 0xcfc7, 0x8fcf, 0x0f8f, 0x010c, 0xf1f0, 0x5004, 0x50a9, 0x40a9, 0x00a5, 0x00a5, 0x0095, 0x1ff0, 0x00f0, 0xc0e0, 0xf0f1, 0x4001, 0x00a9, 0x00a5, 0x00ff, 0x0101, 0xf8f0, 0xf0c0, 0x0df1, 0xf8f8, 0xf0f0, 0xc0e0, 0x0080, 0xf0e0, 0x1f3f, 0x7030, 0xf0f0, 0xf1f0, 0xf3f1, 0x0003, 0x1e1e, 0x1010, 0x1010, 0x1111, 0x03f0, 0xc0c0, 0x80c0, 0x8080, 0x8080, 0x0000, 0x0000
};

// [D_08C5B968] D_08C5BADC Huffman Window 1
u32 D_08c5badc_window1[] = {
	0xdeef64b3, 0x3fdbedb2, 0x6ff5dedb, 0xf7bed79f, 0x5a764b77, 0xebd3b7d2, 0xab5fdf9e, 0x5ffdb7df, 0xbcbdcbfe, 0x6df5cbed, 0xcdefbcf9, 0xb7cbdd33, 0xdb7eefb7, 0x00000016
};

// [D_08C5B9A0] D_08C5BADC Huffman Window 2
u32 D_08c5badc_window2[] = {
	0xaa954a89, 0x54d551a5, 0x4a854a55, 0xa2942209, 0xa08aaaac, 0x1545550a, 0xa98ad52b, 0x03556a22, 0x04955695, 0x00000055
};

// [D_08C5B9C8] D_08C5BADC Huffman
struct Huffman D_08c5badc_huffman[] = {
	/* Data */			D_08c5badc_huffmandata,
	/* Size */			0x966,
	/* Count */			0x1a6,
	/* Window 1 */		D_08c5badc_window1,
	/* Window 2 */		D_08c5badc_window2,
};

// [D_08C5B9D8] D_08C5BADC RLE Data
u8 D_08c5badc_rledata[] = {
	0x1, 0xf, 0xd, 0x13, 0x4, 0x3, 0x12, 0x7, 0x2a, 0x6, 0x21, 0x9, 0x9, 0x17, 0x9, 0x5, 0xb, 0x6, 0x14, 0x3, 0x11, 0x3, 0x19, 0x9, 0x14, 0x6, 0x1, 0x6, 0x21, 0x6, 0x22, 0x8, 0x15, 0x3, 0xb, 0x5, 0x3, 0x3, 0x5, 0x5, 0x27, 0xa, 0x20, 0x5, 0xb, 0xb, 0x9, 0x3, 0x14, 0x4, 0x1, 0x8, 0x1a, 0xd, 0x29, 0x8, 0x20, 0xb, 0x60, 0x4, 0x1, 0x8, 0x2b, 0xc, 0x11, 0x5, 0x15, 0x5, 0x1, 0x4, 0xc, 0x9, 0x7, 0x3, 0xd, 0xc, 0x4, 0xb, 0x2d, 0x9, 0xa, 0x4, 0x4, 0xc, 0x1, 0x3, 0x1, 0xb, 0x5, 0xb, 0x13, 0x3, 0xb, 0xd, 0x2, 0x6, 0xb, 0xe, 0x33, 0x9, 0xb, 0xa, 0x9, 0x7, 0x1b, 0x5, 0x19, 0x7, 0x1, 0x6, 0xa, 0x9, 0x7, 0x3, 0x1d, 0xb, 0x4, 0x4, 0x22, 0xa, 0x1, 0xc, 0xd, 0x5, 0xd, 0x4, 0x1, 0x8, 0xe, 0x9, 0x5, 0x7, 0xf, 0x5, 0xb, 0x5, 0x9, 0x7, 0x3, 0x5, 0x9, 0x3, 0xb, 0xc, 0x6, 0xb, 0x4, 0xa, 0x7, 0x9, 0x1, 0x3, 0x3, 0xa, 0x6, 0x9, 0xa, 0x9, 0x23, 0x3, 0x9, 0x4, 0x1, 0x7, 0x10, 0x8, 0x1, 0x3, 0x15, 0x7, 0x1, 0x4, 0x17, 0x4, 0x1, 0x6, 0xa, 0xc, 0x4, 0xb, 0x5, 0x9, 0x67, 0xd, 0x13, 0xc, 0x34, 0xc, 0x2b, 0x8, 0x3, 0x5, 0x9, 0x9, 0x22, 0x3, 0x26, 0xb, 0x19, 0x7, 0x6, 0xa, 0xa, 0x6, 0x1, 0x9, 0x1, 0x5, 0x31, 0x7, 0x18, 0x5, 0xa, 0x5, 0x2d, 0xb, 0x5, 0xb, 0x4, 0x8, 0x29, 0x7, 0x9, 0x10, 0x22, 0xd, 0x4d, 0x3, 0x77, 0x9, 0x3a, 0x3, 0x15, 0xe, 0x1, 0xe, 0x9, 0x8, 0x32, 0xe, 0x6, 0xa, 0xa, 0x6, 0x17, 0x9, 0x11, 0xe, 0x2, 0xd, 0x1c, 0x6, 0x1, 0xc, 0x1c, 0x7, 0x31, 0x9f, 0x0, 0x0
};

// [D_08C5BADC] D_08C5BADC Graphics
struct CompressedGraphics D_08c5badc = {
	/* Huffman Data */		D_08c5badc_huffman,
	/* RLE Data */			D_08c5badc_rledata,
	/* RLE Size */			0x102,
	/* RLE Offset */		0xe00,
	/* Double Compressed */	TRUE,
};

u8 D_08c5baec[60] = {
	0x78, 0x00, 0x10, 0x00, 0x78, 0x00, 0x10, 0x00, 0x5A, 0x00, 0x58, 0x00,
	0x78, 0x00, 0x5C, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x78, 0x00, 0x96, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x64, 0x00, 0x40, 0x00, 0xA4, 0x00, 0x40, 0x00, 0x78, 0x00, 0x10, 0x00
};
