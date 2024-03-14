#include "global.h"
#include "graphics.h"

// // //  D_08C47038  // // //

// [D_08C45F20] D_08C47038 Huffman Data
u16 D_08c47038_huffmandata[] = {
	0x0000, 0xeeee, 0x8753, 0xdca9, 0x1111, 0xeeee, 0x6532, 0xca97, 0x1111, 0x00de, 0x0100, 0x7531, 0xcba8, 0x2de1, 0x0000, 0x5655, 0xeeee, 0x8642, 0xdca9, 0x2de1, 0x0002, 0x5655, 0xffa5, 0x55ff, 0xcddd, 0x9aab, 0xde12, 0x5401, 0xaa55, 0xaaaf, 0x4321, 0x8765, 0xa9e1, 0x0000, 0x5500, 0xcba9, 0xb21d, 0x0000, 0xa555, 0x79bd, 0x3356, 0xde21, 0x0001, 0x0001, 0xeaaa, 0x249e, 0x0000, 0x00e4, 0xb12e, 0xa400, 0xab00, 0x619e, 0x0001, 0x00a9, 0x00ab, 0xde13, 0x5400, 0x55ea, 0x8765, 0xddb9, 0x3e21, 0x0001, 0x0040, 0xaaaa, 0x7643, 0xca98, 0x4321, 0x0000, 0x00e4, 0xcde7, 0x0000, 0x9555, 0x9acd, 0x2345, 0xde21, 0x0000, 0xaa40, 0x9acd, 0x3578, 0x1111, 0x6311, 0xa864, 0xeedb, 0xeeee, 0x6678, 0x1345, 0x9000, 0xffff, 0xeeee, 0xbdde, 0x679a, 0x0012, 0xfffe, 0x357a, 0x7421, 0x0000, 0x9000, 0x4211, 0xeda7, 0xedb8, 0xeeee, 0x3111, 0xec97, 0xeb96, 0xeeee, 0xdeee, 0x68ab, 0x1358, 0x1111, 0xa974, 0xdba8, 0x9bde, 0x0000, 0xe440, 0x1357, 0xe401, 0xfffe, 0x6fff, 0x7531, 0x1eda, 0xa400, 0xaaa9, 0xed21, 0x11be, 0xee91, 0x113e, 0xeee4, 0x1117, 0xceeb, 0xde12, 0x5400, 0xffea, 0x271e, 0x0000, 0x0095, 0xd211, 0xceee, 0xe911, 0x8eee, 0xed31, 0xe400, 0xfa7f, 0x1cee, 0x24de, 0x0000, 0x0090, 0x1112, 0x6731, 0x0000, 0xc039, 0xc56e, 0x9000, 0x00ea, 0xde91, 0x1113, 0x8ee4, 0x4eb1, 0x0001, 0x0019, 0x003a, 0x99de, 0x9789, 0xa19e, 0x0001, 0x00a9, 0x00ab, 0x112d, 0x24be, 0x0000, 0x00e4, 0x21de, 0x4000, 0xaa00, 0x6211, 0x3211, 0xed85, 0xe400, 0xffea, 0x1115, 0x1111, 0xc742, 0xcaab, 0x51ed, 0x5403, 0x5555, 0x557a, 0x557a, 0x557a, 0xe611, 0xd94e, 0x0000, 0x0039, 0x1111, 0x6311, 0x8665, 0xeeda, 0x001e, 0xfff0, 0xa411, 0x1111, 0xee94, 0xb621, 0xcdae, 0x0000, 0x0009, 0xbcdd, 0xce9a, 0x5000, 0xeaaa, 0x195e, 0x0001, 0x0040, 0x00e0, 0x12de, 0xd15e, 0x0000, 0x00a4, 0x556d, 0x316e, 0x0001, 0xaaa4, 0xaaac, 0x481b, 0x5400, 0x5655, 0x1111, 0x224b, 0xc853, 0xc7de, 0x5000, 0x0600, 0x41ce, 0xa400, 0xac00, 0xc19e, 0x0001, 0xc0a9, 0x40aa, 0x5543, 0x189e, 0x0000, 0x56a9, 0x7ec1, 0x0000, 0xc0a9, 0xd21e, 0x0000, 0x00e5, 0xe711, 0xd76e, 0x0000, 0x0039, 0xdbaa, 0x96ed, 0x5000, 0x5552, 0x19ee, 0x12de, 0x0000, 0x00e4, 0x114d, 0xceee, 0x1116, 0x148b, 0x2111, 0x1111, 0xd831, 0x9411, 0xeeec, 0xeec9, 0x001e, 0xfff0, 0xa411, 0x1111, 0xee94, 0xa511, 0x8b6e, 0x0000, 0x0009, 0xc18e, 0x9000, 0xacaa, 0x64e1, 0x0000, 0xc009, 0x1118, 0xc321, 0xedcb, 0x9000, 0xfffa, 0x1be4, 0x5400, 0x5655, 0xa21e, 0x0000, 0x00e5, 0xec51, 0xcdae, 0x0001, 0x8001, 0xc000, 0xc13e, 0x0000, 0xeaa4, 0x111a, 0xe511, 0x1113, 0xeb11, 0xe734, 0x4000, 0xfff9, 0x1111, 0x4567, 0x5444, 0xeeee, 0x369c, 0x9eb1, 0x0000, 0x0090, 0xee91, 0x5111, 0xeeeb, 0xec96, 0xeeee, 0x37ad, 0x369d, 0x7e51, 0x0001, 0x4000, 0x0eaa, 0x12de, 0x0000, 0x00f9, 0x1116, 0x187e, 0x0000, 0x0095, 0x1111, 0xbeea, 0x3111, 0x3dee, 0x9111, 0x17ee, 0xea98, 0x9cee, 0xad7e, 0x0001, 0x0009, 0x00c0, 0x5a4e, 0x4000, 0xe000, 0xeeee, 0xdbee, 0x114e, 0x2111, 0x111d, 0xc611, 0x1119, 0xeeb4, 0x7113, 0xa21e, 0x0000, 0x0039, 0xeec3, 0x00de, 0x0010, 0xd21e, 0x0005, 0xaa55, 0xff55, 0x00ff, 0xa955, 0xffaa, 0x00ff, 0x4561, 0x0000, 0xffa5, 0x231e, 0x0001, 0xaa55, 0x00ff, 0x71de, 0x5400, 0xaa00, 0xa987, 0xdcba, 0xeeee, 0x1111, 0x4322, 0x7655, 0x21ed, 0x5400, 0xaa55, 0x3222, 0xed43, 0x4000, 0xfffe, 0x1111, 0x5544, 0x1e76, 0x4000, 0xffaa, 0x7211, 0x1111, 0xeda5, 0xb721, 0x641e, 0x0000, 0xe555, 0x9621, 0xaedb, 0xa400, 0xaaa7, 0x619e, 0x4000, 0xc0aa, 0xd3e1, 0x0001, 0x0095, 0x0035, 0x519e, 0x9000, 0xb0aa, 0x2de1, 0x0000, 0x0039, 0x119e, 0xe231, 0x0000, 0x00a5, 0xbcde, 0x4000, 0x00e5, 0x1111, 0x89aa, 0x6778, 0xeeee, 0x1111, 0x5432, 0xdca7, 0x451e, 0x0001, 0xaa55, 0x00ea, 0x8764, 0xdcb9, 0x001e, 0xfff0, 0x4321, 0xcb98, 0x21ed, 0x5000, 0xaa55, 0x3211, 0x9765, 0x7edb, 0x9400, 0xffaa, 0x7776, 0x7777, 0x006d, 0x00fe, 0xfd67, 0x0002, 0x5555, 0x00aa, 0x0005, 0x66dd, 0x0076, 0x10f8, 0xf67d, 0x0005, 0x0009, 0xaa55, 0x006a, 0x0080, 0xaa55, 0x00aa, 0x0472, 0xe0f0, 0x8fe0, 0x8f8f, 0x8f8f, 0x707f, 0x2222, 0x7777, 0x00fe, 0xff00, 0x0272, 0xf1f0, 0xf1f1, 0xf1f1, 0x7ef2, 0xa401, 0x54aa, 0x0055, 0x7777, 0x00ba, 0xff00, 0xba72, 0x0005, 0xaa55, 0xff3a, 0x003f, 0xac55, 0xfcaa, 0x00ff, 0x7777, 0x00dc, 0xff00, 0xdc72, 0x0002, 0xaa55, 0xff3a, 0x003f, 0x2fe7, 0x0002, 0xe555, 0xeaaa, 0x00ff, 0x7cd2, 0xa401, 0x54aa, 0x0055, 0x9d67, 0x0000, 0x7f69, 0x6dd6, 0x0069, 0x08f8, 0x9f69, 0x4000, 0x4055, 0x006d, 0xff24, 0x0069, 0x7f80, 0x7869, 0x000f, 0x0040, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0x5507, 0x0107, 0x0107, 0x011f, 0x011f, 0x011f, 0x011f, 0x9677, 0x0196, 0xc07e, 0xf037, 0xfd96, 0x5401, 0x5255, 0x4a55, 0x0169, 0x8070, 0xc70f, 0x6ddd, 0xdd69, 0x006d, 0x0710, 0x6ddd, 0x0196, 0x7f00, 0x707e, 0xdddd, 0x0096, 0x0f00, 0x00d6, 0xfdb0, 0x876d, 0x9007, 0x9500, 0x9f50, 0x9ff5, 0x9fff, 0x9fff, 0x9fff, 0x9fff, 0x5556, 0xd967, 0xa407, 0xa4aa, 0xa456, 0xa4f6, 0xa4f6, 0xa456, 0xa4aa, 0xffaa, 0xd555, 0x0069, 0x0380, 0xf96d, 0x6401, 0x6495, 0x6550, 0x006d, 0xf00c, 0xd666, 0x0096, 0xf07e, 0x00d6, 0xb606, 0x59d6, 0x0002, 0x2a45, 0xff00, 0xaaaa, 0x9758, 0x0000, 0xa955, 0x8495, 0x0004, 0xaaa9, 0xaa9f, 0xaa7f, 0xa9ff, 0xabff, 0x0075, 0xf8f8, 0x7555, 0x0147, 0x7070, 0x7c70, 0x9547, 0x5002, 0x5015, 0xaa80, 0xd555, 0x5894, 0x0003, 0x00a4, 0x40a9, 0x80aa, 0xffaa, 0x5fef, 0x0000, 0x5500, 0x0057, 0xe0e0, 0x7777, 0x5557, 0x0147, 0xe0e0, 0xe3e3, 0xf574, 0x5001, 0xaa01, 0xfffc, 0x5ef4, 0xa403, 0xa4aa, 0xa4aa, 0xa4aa, 0xffaa, 0x45ab, 0x000b, 0x5500, 0x00aa, 0x55c0, 0x55c5, 0x55c5, 0x55c5, 0xaac5, 0x0003, 0x5553, 0x5553, 0x5553, 0x5553, 0x4cd5, 0x0006, 0x5555, 0x00aa, 0xd555, 0xdaaa, 0xdaaa, 0xdaaa, 0xdaaa, 0xe4f5, 0x0004, 0x9555, 0x9fff, 0x9fff, 0x9fff, 0x9fff, 0xcd45, 0x0004, 0xaaa9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0x0067, 0x7d7c, 0x6666, 0x5555, 0x0267, 0x7ffe, 0x1f3f, 0x070f, 0x0075, 0xe0fc, 0x0276, 0x0180, 0x0703, 0x1f0f, 0x0057, 0xf8c0, 0x0267, 0xe0e0, 0xe0e0, 0xe0e0, 0x0057, 0xe0e0, 0x0276, 0xfcfc, 0xfcfc, 0xfcfc, 0x0075, 0xfcfc, 0x3298, 0x0006, 0x5555, 0x00aa, 0x00f4, 0x00a8, 0x40a9, 0x90aa, 0xa9aa, 0xf732, 0x0000, 0x5a95, 0x7333, 0x0227, 0x7c7c, 0x7c7c, 0x7070, 0x8937, 0x0000, 0xffe5, 0x3982, 0x4004, 0x8055, 0x0055, 0x0056, 0x0058, 0x0080, 0xf273, 0x5000, 0x5a01, 0x3337, 0x0272, 0x1c1c, 0x1f1c, 0x1f1f, 0x2ef3, 0xa406, 0xa4aa, 0xa7aa, 0xa7aa, 0xa7aa, 0xa7aa, 0xa7aa, 0xa7aa, 0x3bae, 0x0000, 0xe555, 0x32ba, 0x000d, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0x0790, 0x0700, 0x0600, 0x0600, 0x0600, 0x0600, 0x0600, 0x0600, 0x3dca, 0x0000, 0xe555, 0xe2dc, 0x0006, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0xff90, 0x23fe, 0x9006, 0xd000, 0xd000, 0xd000, 0xd000, 0xd000, 0xd000, 0xd000, 0x2cd3, 0xa406, 0xa4aa, 0xa7aa, 0xa7aa, 0xa7aa, 0xa7aa, 0xa7aa, 0xa7aa, 0x498c, 0x0001, 0xf955, 0xf955, 0xf398, 0x0004, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x3398, 0x0074, 0x3838, 0x0073, 0x3838, 0x8943, 0x0007, 0xffe5, 0xffe5, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0xffe0, 0x0074, 0x1c1c, 0x0073, 0x1c1c, 0xef43, 0x0007, 0xfff9, 0xfff9, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0x34ba, 0x000e, 0x0090, 0x0090, 0x00d0, 0x00d0, 0x00d0, 0x00d0, 0x00d0, 0x06d0, 0x0600, 0x0700, 0x0700, 0x0700, 0x0700, 0x0700, 0x0700, 0x4dca, 0x0001, 0xe555, 0xe555, 0xe3dc, 0x0005, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0xff90, 0x34fe, 0x9006, 0x9000, 0xd000, 0xd000, 0xd000, 0xd000, 0xd000, 0xd000, 0x3cd4, 0xa406, 0xa4aa, 0xa7aa, 0xa7aa, 0xa7aa, 0xa7aa, 0xa7aa, 0xa7aa, 0xdaec, 0x0001, 0x5555, 0x555e, 0xe821, 0xa51e, 0x0001, 0x0095, 0x0355, 0xfe71, 0x0001, 0x00a9, 0x00a9, 0x00e9, 0xfffe, 0x19ae, 0x9000, 0xf800, 0x51ce, 0x0000, 0x00a9, 0xae15, 0x5400, 0x55ea, 0x2dee, 0x67e1, 0x0001, 0x0025, 0x5555, 0x5567, 0x8654, 0x1111, 0x9aa7, 0x1116, 0xabde, 0x0001, 0x0090, 0x001b, 0xdcde, 0xeeee, 0x1113, 0xed83, 0xbe51, 0x0001, 0x0090, 0x00c0, 0x2b91, 0x4000, 0x8000, 0x4d12, 0x5400, 0x5785, 0xe611, 0x3abe, 0x0000, 0x0090, 0xe13a, 0xa400, 0xaa3f, 0x2dee, 0x58e1, 0x0000, 0x0025, 0x15ee, 0x2111, 0x19ee, 0xc511, 0xa69e, 0x4000, 0x000e, 0xa17e, 0x4001, 0x9000, 0x0000, 0x46ae, 0x0000, 0x0090, 0x114a, 0x5cee, 0x1111, 0x12ae, 0x0091, 0x0010, 0xcd92, 0xed41, 0x4000, 0xfffe, 0x15be, 0x4002, 0x8000, 0xd000, 0xe000, 0xeeee, 0x11ce, 0x756e, 0xea98, 0xe51b, 0x5400, 0x56e5, 0x4ea1, 0x9001, 0xac00, 0xa400, 0x8e31, 0x0001, 0x00a9, 0x00ab, 0x1ced, 0x5400, 0x5556, 0x2e81, 0xa400, 0xacaa, 0x251e, 0x0000, 0x0009, 0xbec2, 0xa400, 0xabaa, 0xeeee, 0x0069, 0x08f8, 0xf769, 0x4000, 0x4055, 0x7777, 0x0196, 0xf0f0, 0xf00f, 0xf867, 0x0006, 0x0055, 0x01aa, 0x01aa, 0x006a, 0x006a, 0x001a, 0x001a, 0x7768, 0x0067, 0x0030, 0x6677, 0x7777, 0x0096, 0x07f8, 0xa796, 0x4004, 0x2a55, 0xaa00, 0x0550, 0x500a, 0x0aaa, 0x7777, 0x111a, 0xee41, 0xeb12, 0x5400, 0x55f9, 0x9ee5, 0x1111, 0x3eec, 0x7111, 0x17ee, 0xd211, 0x11be, 0xe811, 0x114e, 0xee31, 0x111a, 0x111b, 0xd211, 0xea14, 0x5400, 0x55e5, 0xee61, 0xed21, 0x0000, 0x00f9, 0xdeea, 0x5111, 0xc18e, 0x4000, 0xb0ea, 0x7e61, 0x9000, 0x901a, 0x117e, 0xee51, 0x111b, 0xeed2, 0xea14, 0x5401, 0x55be, 0x553f, 0x1aee, 0x2111, 0x15ee, 0x7111, 0x11ce, 0xe581, 0x4000, 0xffe0, 0x7ec1, 0x9000, 0xac6a, 0x4eee, 0xeed2, 0x816e, 0x9000, 0xac03, 0xeeed, 0x1117, 0x6dee, 0x3ad1, 0x0000, 0x0039, 0xd9e3, 0x5401, 0x5655, 0x5755, 0x58ae, 0x0000, 0x0024, 0xe415, 0x008e, 0x0800, 0x61ce, 0x9000, 0xb000, 0x71de, 0x0001, 0x00a4, 0x00ac, 0xc13e, 0xa400, 0xab00, 0xeeee, 0x111a, 0x12de, 0x79e1, 0x0000, 0xc009, 0x113e, 0xd311, 0x1119, 0xea11, 0xe513, 0x5400, 0x55f9, 0x6eb1, 0xa400, 0xab00, 0x1111, 0xeeec, 0x6eea, 0xa2e1, 0x0001, 0x0095, 0x8035, 0x15ee, 0xce81, 0x4000, 0xc00e, 0x117e, 0xe411, 0x112e, 0xe911, 0xeb1a, 0x5400, 0xffa5, 0x4e1c, 0x5400, 0x57aa, 0x9eee, 0x2de1, 0x0000, 0x00e5, 0x16ee, 0x3111, 0x11ae, 0xb111, 0x113e, 0xe611, 0x1117, 0x4511, 0x1de9, 0xa5e1, 0x0001, 0x0025, 0x000d, 0x612d, 0xa400, 0xabea, 0xce41, 0x9000, 0xb000, 0x4e91, 0x0000, 0x00a4, 0xeee4, 0xb411, 0x117e, 0xee61, 0x112d, 0xeee7, 0x1118, 0x12de, 0x4000, 0x40fe, 0xcbba, 0x481e, 0x0001, 0x0025, 0x000d, 0x7eb1, 0xa400, 0xabaa, 0x8eee, 0xeeed, 0x15ce, 0xceee, 0x1117, 0x16ad, 0xe400, 0xffff, 0x98e1, 0x0000, 0x0025, 0x519e, 0xa400, 0xa9ea, 0xc211, 0x9ea1, 0x0002, 0x0090, 0x00a4, 0xc069, 0x4eee, 0xeb31, 0x18ee, 0x0021, 0x8000, 0xe591, 0x0001, 0x0040, 0x00e0, 0xed41, 0x1111, 0xeed5, 0x7111, 0x921e, 0x0000, 0x0039, 0xed31, 0x4000, 0x00fe, 0x71e6, 0x5401, 0x5eaa, 0x7aaa, 0xab12, 0x5400, 0x5795, 0xac91, 0x4000, 0xc002, 0xed12, 0x5400, 0xff85, 0x513e, 0x9001, 0x9000, 0xb000, 0x816e, 0x0001, 0x0090, 0x00b0, 0xd1be, 0x9001, 0xb000, 0xb000, 0x1de7, 0x5400, 0x5655, 0x3a1e, 0x0000, 0x5c25, 0xee61, 0x1119, 0xeed2, 0xea14, 0x5402, 0x55be, 0x553f, 0x556f, 0xa13e, 0x9000, 0xacaa, 0x6111, 0xd211, 0x8eee, 0xe911, 0x1bee, 0xed21, 0x14ee, 0xee81, 0x11ae, 0xeed2, 0x112d, 0xeee8, 0x1116, 0xaeed, 0xc4e1, 0x0001, 0x0095, 0x5700, 0xbe51, 0x4000, 0xc0aa, 0x31be, 0x4000, 0x403a, 0x4e61, 0x9001, 0x90aa, 0xb0aa, 0x9dee, 0x6111, 0x1379, 0x111c, 0x0061, 0x0010, 0xe781, 0x0000, 0x0025, 0x15ee, 0x8111, 0x114c, 0x2e71, 0x9002, 0xa403, 0xa900, 0xc006, 0x781c, 0x5400, 0x5795, 0xd211, 0xbe61, 0x0001, 0x0090, 0x00b0, 0xae51, 0xa400, 0xac00, 0xde41, 0x0002, 0xaaa9, 0xaa0e, 0xaa1a, 0x519e, 0x9000, 0xc000, 0x00de, 0x0080, 0xeb9e, 0xeeee, 0x2119, 0x8986, 0x4a21, 0x0000, 0x0090, 0xec41, 0xed21, 0x0000, 0x00f9, 0x91eb, 0x5400, 0x55ea, 0xe611, 0xd21e, 0x0000, 0x0039, 0x3e91, 0xa400, 0x3aaa, 0xb111, 0x119e, 0xea11, 0x112d, 0xee71, 0x776b, 0x7ce8, 0x9400, 0xd555, 0x72de, 0x0000, 0x0090, 0x17ee, 0x12de, 0x0001, 0x00e4, 0x0000, 0x456d, 0xb16e, 0x0000, 0xc0a9, 0x24e1, 0x0000, 0xc095, 0x19ee, 0x9111, 0x12ce, 0xd311, 0x116e, 0xea11, 0xeede, 0xccde, 0xee72, 0x113d, 0xeec1, 0x1116, 0xbee8, 0x3ed1, 0x0000, 0x00e9, 0x19ee, 0x2de1, 0x0000, 0x0039, 0x417e, 0xa400, 0x00ea, 0xeeee, 0x459c, 0x91e8, 0x5401, 0x5eaa, 0x5eaa, 0x7ed1, 0x0000, 0x0064, 0x5ee7, 0x2111, 0x1aed, 0x9111, 0x12de, 0xe400, 0x0040, 0x24ee, 0xc643, 0x116e, 0xd611, 0x1119, 0xed21, 0xea12, 0x5400, 0x55f9, 0xeee6, 0x2111, 0xa1ed, 0x5400, 0x55ea, 0xeeba, 0x491e, 0x0001, 0x0025, 0x0035, 0x9e61, 0x9000, 0xb0aa, 0x6c1e, 0x0001, 0x0025, 0x000d, 0xbea1, 0xa400, 0xafaa, 0xabde, 0xdd11, 0x7128, 0xa400, 0xaa7a, 0x15b4, 0xd5e1, 0x0000, 0x0025, 0x3ced, 0x5400, 0x5b95, 0x15ae, 0xbc21, 0xb314, 0x5400, 0x9555, 0xcb31, 0x0000, 0x00e4, 0xaed2, 0x5ce1, 0x0001, 0x9555, 0xd555, 0xd1ae, 0x0000, 0x0090, 0x13de, 0xc18e, 0x0000, 0xaaa4, 0xeeec, 0x5111, 0x6eee, 0xa111, 0x19ee, 0xd211, 0x13ee, 0xe611, 0x117e, 0xec11, 0x111b, 0xee71, 0x1113, 0x8ed2, 0x1111, 0xbccd, 0xeedb, 0xbe41, 0x0000, 0x00a9, 0x6ceb, 0x7111, 0x116d, 0x6241, 0x4000, 0x0002, 0x1156, 0x11ce, 0x7111, 0x114e, 0xd311, 0xeb18, 0x5400, 0x55e5, 0xee51, 0xed21, 0x0000, 0x00f9, 0x51e9, 0x5400, 0x55ea, 0xec21, 0x9000, 0xffff, 0xd19e, 0xa400, 0xac00, 0x61ae, 0x0001, 0x00a4, 0x00ac, 0x6e1d, 0x5400, 0x57aa, 0x51ce, 0x4001, 0xc0aa, 0x00aa, 0x67ce, 0xeee9, 0xe618, 0x5400, 0x55f9, 0x6db1, 0x9000, 0xf000, 0x9ae1, 0x0001, 0x5555, 0x5b95, 0x13be, 0xb311, 0xe21a, 0x5400, 0x5695, 0x1111, 0xbeee, 0x1137, 0x14ae, 0x0061, 0x0010, 0x1341, 0x3111, 0x1dec, 0x9111, 0x1cee, 0xa111, 0xbdee, 0x8111, 0xa31e, 0x0000, 0x00e5, 0x6ec1, 0x0001, 0x00a9, 0x00ab, 0xeee5, 0x7e61, 0x0000, 0x00e9, 0x1be9, 0xbbbb, 0x16ed, 0xd14e, 0x0001, 0x0090, 0x0003, 0xeee6, 0x003e, 0x1010, 0x124e, 0x0000, 0x0001, 0xeb12, 0x5400, 0x55e5, 0xee51, 0x8765, 0xaed9, 0xa400, 0xeaaa, 0xad4e, 0x0000, 0xaa40, 0x1aee, 0x9111, 0x13ee, 0xd311, 0xd1ae, 0xa400, 0x003c, 0x221a, 0xed43, 0xe413, 0x5400, 0x55f9, 0x4eb1, 0xa402, 0xab00, 0xa900, 0xaac0, 0x8e91, 0x4001, 0xaaaa, 0xaa0e, 0xae19, 0x5400, 0x55ea, 0x2cee, 0x3111, 0x14ee, 0xc211, 0xa17e, 0xa400, 0xab3a, 0xee81, 0x1113, 0xeee4, 0xe611, 0xdeee, 0xae51, 0xa400, 0xa9ea, 0x9eee, 0x00ed, 0xfffe, 0xddee, 0xdddd, 0x12ce, 0x97e1, 0x0000, 0x0009, 0xeec9, 0x115e, 0xeb21, 0x111c, 0xe811, 0x4c15, 0x5400, 0x55a5, 0x6e41, 0x7cb1, 0x0000, 0x0024, 0xc1e7, 0x8402, 0xadaa, 0x2aaa, 0xea55, 0xb61e, 0x0001, 0x0025, 0x8035, 0xee51, 0x1aee, 0xeeb1, 0x15ee, 0xeee3, 0x11de, 0x1ce9, 0x5400, 0x55f9, 0x566a, 0x41ce, 0x4000, 0xc0aa, 0xd9e1, 0x0000, 0x0025, 0x12de, 0xb6e1, 0x0001, 0x0009, 0x0003, 0x1113, 0x1111, 0xee65, 0xacee, 0xee91, 0x116b, 0x5be5, 0x2571, 0x0001, 0x0009, 0x003c, 0x18e7, 0x3111, 0x0069, 0x8b88, 0xf96d, 0x6401, 0x646a, 0x656a, 0x6999, 0x006d, 0x00f0, 0x79d6, 0x400c, 0x2a55, 0xaa50, 0xaa0a, 0xa88f, 0xa88f, 0xa88f, 0xa88f, 0xa88f, 0xa88f, 0xa88f, 0xa88f, 0x4aa8, 0x4aaa, 0x0069, 0x30c0, 0xfd69, 0x0000, 0x6a50, 0x0069, 0x6070, 0x9999, 0x6dd6, 0x0269, 0x9880, 0x9898, 0x9898, 0xfd69, 0x4003, 0x4015, 0x405a, 0x40aa, 0x40aa, 0xdd66, 0x0069, 0x00c0, 0xd796, 0x000f, 0x4a55, 0x4a54, 0x4a14, 0x4a14, 0x4a14, 0x4a14, 0x4a54, 0x4a54, 0x4f54, 0x3c55, 0x3c55, 0x3c55, 0x3c55, 0x4f55, 0x4f55, 0x5355, 0x6699, 0x02d6, 0x0306, 0x0303, 0x0603, 0xf9d6, 0x5402, 0x5240, 0x2155, 0x212a, 0x0069, 0x9898, 0x6999, 0x01d6, 0x8080, 0xe3c1, 0xf96d, 0x0000, 0x0540, 0x966d, 0x0069, 0x001c, 0x9768, 0x000f, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0x00a4, 0x6aa4, 0x6af7, 0x6a77, 0x6a77, 0x6a77, 0x6af7, 0x6af7, 0x6a5f, 0xf5f5, 0xfd69, 0xa403, 0xa41a, 0x9065, 0x9065, 0x4065, 0x96dd, 0x0069, 0x0030, 0xfd69, 0x0004, 0x0069, 0x4196, 0x9196, 0x9196, 0x9069, 0x0169, 0x0386, 0x983c, 0xfd69, 0x4001, 0x4041, 0x4046, 0x696d, 0x0069, 0xc008, 0xfd96, 0x5400, 0x42a0, 0x016d, 0x1c80, 0x7f3e, 0x97d6, 0x0013, 0xca40, 0xca3c, 0xca3c, 0xca3c, 0x2af3, 0x2af3, 0x2af3, 0x2af3, 0xc5f3, 0x10ff, 0x10ff, 0x10ff, 0xc53f, 0xf04f, 0xff4f, 0xff53, 0x4153, 0x413c, 0x414c, 0x144c, 0xd699, 0x0069, 0x6086, 0x9999, 0x0000, 0x0000
};

// [D_08C46E0C] D_08C47038 Huffman Window 1
u32 D_08c47038_window1[] = {
	0xf9491200, 0x01440264, 0x350c0580, 0x684284d2, 0x400abb8d, 0x01043738, 0x3e80300b, 0x80df4250, 0x7db9d924, 0xdfbfa9df, 0xbdff9fe7, 0x5fbffdff, 0xd0e16e10, 0x0465b7f0, 0x26086500, 0x614611ee, 0xc1a03c01, 0x0c7ff0c5, 0x7d8c3c00, 0x006b0368, 0xf4810cd0, 0x00005b34, 0x84e7f411, 0x90ce8b00, 0x3a08a087, 0xcfb202d0, 0x02f7bb76
};

// [D_08C46E78] D_08C47038 Huffman Window 2
u32 D_08c47038_window2[] = {
	0xfffefffe, 0xfffbfffb, 0x456ffff7, 0xce2c14bd, 0xfeec01f9, 0x7ffeff93, 0xefff95ff, 0xfff7ffff, 0xffffbfbf, 0xf7ffffff, 0x957feffe, 0x0002ab4a
};

// [D_08C46EA8] D_08C47038 Huffman
struct Huffman D_08c47038_huffman[] = {
	/* Data */			D_08c47038_huffmandata,
	/* Size */			0x9c1,
	/* Count */			0x35c,
	/* Window 1 */		D_08c47038_window1,
	/* Window 2 */		D_08c47038_window2,
};

// [D_08C46EB8] D_08C47038 RLE Data
u8 D_08c47038_rledata[] = {
	0x1, 0xf, 0x1, 0x7, 0x3, 0x5, 0x1, 0x9, 0x3, 0x3, 0x7, 0x9, 0x1, 0x3, 0x5, 0x7, 0x1, 0xb, 0x5, 0xb, 0x5, 0x9, 0x7, 0xb, 0x7, 0xd, 0x2, 0xe, 0x1, 0x10, 0x14, 0xb, 0x5, 0x1c, 0x2, 0xd, 0x1, 0xf, 0x1, 0x7, 0x4, 0x3, 0x2, 0x6, 0x3, 0x3, 0x4, 0xb, 0x5, 0x9, 0xe, 0x8, 0x4, 0x10, 0x4, 0x3, 0x3, 0x3, 0xb, 0x4, 0xb, 0x5, 0xd, 0x3, 0x2, 0x4, 0x5, 0x5, 0xb, 0x6, 0xa, 0x5, 0x1, 0x4, 0x5, 0x6, 0x2, 0x9, 0xf, 0x6, 0x1, 0x8, 0x4, 0x3, 0xa, 0x4, 0xf, 0x3, 0xc, 0x4, 0xb, 0x3, 0xc, 0x4, 0x4, 0xf, 0x19, 0x6, 0xb, 0x5, 0x4, 0xc, 0x9, 0x7, 0x9, 0x7, 0x1, 0x5, 0x3, 0x6, 0x9, 0x3, 0xe, 0x7, 0x9, 0x7, 0x2, 0x17, 0x18, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x3, 0x7, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x3, 0x7, 0x1, 0x3, 0x4, 0x8, 0x1, 0x5, 0x4, 0x6, 0x1, 0x5, 0x3, 0x7, 0x1, 0xa, 0x6, 0x6, 0x5, 0x4, 0x10, 0x4, 0x5, 0x7, 0x1, 0x5, 0x3, 0x7, 0x1, 0x4, 0x3, 0x8, 0x1, 0x3, 0x3, 0x9, 0x3, 0xd, 0x7, 0x9, 0x5, 0xb, 0x1, 0x9, 0x7, 0x9, 0x3, 0x3, 0x1, 0xb, 0x5, 0xa, 0x6, 0x7, 0x5, 0x3, 0x1, 0x7, 0x3, 0x5, 0x1, 0x3, 0x1, 0xb, 0x5, 0xb, 0xa, 0x6, 0x5, 0xb, 0x5, 0x5, 0x1, 0x6, 0xa, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0x5, 0x5, 0x1, 0x5, 0xa, 0x6, 0xb, 0x5, 0x27, 0x3, 0xb, 0x4, 0x8, 0x6, 0xa, 0x5, 0x3, 0x3, 0x25, 0x3, 0x1d, 0x5, 0x3, 0x7, 0x3, 0x3, 0x1c, 0x4, 0xb, 0x5, 0x3, 0x7, 0x11, 0x5, 0xb, 0x5, 0x3, 0x7, 0x1, 0x5, 0xb, 0x5, 0xb, 0x5, 0x3, 0x7, 0x1, 0x5, 0xb, 0x5, 0xb, 0x5, 0xf, 0x7, 0x1, 0x3, 0x41, 0x9, 0x3, 0x3, 0xc, 0x4, 0x1d, 0x3, 0x21, 0x10, 0x20, 0x10, 0x30, 0x10, 0x18, 0x7, 0x19, 0x7, 0x85, 0x9, 0x3, 0xe, 0x2, 0xd, 0x23, 0xc, 0x14, 0x6, 0x25, 0x4, 0x1, 0x7, 0x9, 0x3, 0x9, 0x3, 0x13, 0xd, 0x9, 0x7, 0x7, 0x9, 0x46, 0x6, 0x5f, 0x5, 0x54, 0xc, 0xd6, 0x6, 0xb, 0x3, 0x7, 0x6, 0x24, 0x4, 0x22, 0x3, 0x9, 0x3, 0xa, 0x6, 0x21, 0x5, 0x82, 0x4, 0xe, 0x6, 0xb, 0x5, 0x17, 0x7, 0x7, 0x7, 0x10, 0x5, 0x47, 0x8, 0x51, 0x7, 0x43, 0x3, 0x3, 0x0, 0x40, 0x0, 0x0, 0x0
};

// [D_08C47038] D_08C47038 Graphics
struct CompressedGraphics D_08c47038 = {
	/* Huffman Data */		D_08c47038_huffman,
	/* RLE Data */			D_08c47038_rledata,
	/* RLE Size */			0x17c,
	/* RLE Offset */		0x1000,
	/* Double Compressed */	TRUE,
};
