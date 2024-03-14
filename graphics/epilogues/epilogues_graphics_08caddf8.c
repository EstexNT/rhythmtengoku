#include "global.h"
#include "graphics.h"

// // //  D_08CADDF8  // // //

// [D_08CADBF0] D_08CADDF8 Data
u16 D_08caddf8_data[] = {
	0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x10ff, 0x10fe, 0x1102, 0x1101, 0x1100, 0x1109, 0x1108, 0x1107, 0x110c, 0x110b, 0x110a, 0x1104, 0x1101, 0x1103, 0x1106, 0x1105, 0x0000, 0x0001, 0x0001, 0x0000, 0x10fd, 0x10fc, 0x10fb, 0x10f7, 0x10f6, 0x10f5, 0x10fa, 0x10f9, 0x10f8, 0x1118, 0x1117, 0x1116, 0x111a, 0x1119, 0x10fc, 0x1115, 0x0000, 0x0001, 0x0001, 0x0000, 0x111b, 0x1009, 0x1112, 0x1111, 0x1113, 0x1003, 0x1003, 0x1003, 0x110e, 0x110d, 0x1003, 0x1110, 0x110f, 0x1114, 0x1009, 0x1009, 0x0000, 0x0001, 0x0001, 0x0000, 0x10d5, 0x10d4, 0x10d8, 0x10d7, 0x10d6, 0x10df, 0x10de, 0x10dd, 0x1003, 0x10e0, 0x1003, 0x10db, 0x10da, 0x10d9, 0x10dc, 0x1009, 0x0000, 0x0001, 0x0001, 0x0000, 0x10d3, 0x10d2, 0x10d1, 0x10cd, 0x10cc, 0x10cb, 0x10d0, 0x10cf, 0x10ce, 0x10f0, 0x1003, 0x10ef, 0x10f3, 0x10f2, 0x10f1, 0x1009, 0x0000, 0x0001, 0x0001, 0x0000, 0x10f4, 0x10e9, 0x10e8, 0x10e7, 0x10ec, 0x10eb, 0x10ea, 0x10e3, 0x10e2, 0x10e1, 0x10e6, 0x10e5, 0x10e4, 0x10ee, 0x1009, 0x10ed, 0x0000, 0x0001, 0x0001, 0x0000, 0x1130, 0x112f, 0x1133, 0x1132, 0x1131, 0x113a, 0x1024, 0x1139, 0x113d, 0x113c, 0x113b, 0x1136, 0x1135, 0x1134, 0x1138, 0x1137, 0x0000, 0x0001, 0x0001, 0x0000, 0x112e, 0x112d, 0x112c, 0x1129, 0x1128, 0x1127, 0x112b, 0x112a, 0x1024, 0x114f, 0x114e, 0x114d, 0x1152, 0x1151, 0x1150, 0x1009, 0x0000, 0x0001, 0x0001, 0x0000, 0x1153, 0x1146, 0x1145, 0x1144, 0x1149, 0x1148, 0x1147, 0x1140, 0x113f, 0x113e, 0x1143, 0x1142, 0x1141, 0x114c, 0x114b, 0x114a, 0x0000, 0x0001, 0x0001, 0x0000, 0x111d, 0x111c, 0x1120, 0x111f, 0x111e, 0x103e, 0x1126, 0x1125, 0x1123, 0x1122, 0x1121, 0x1124, 0x1045, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001
};

// [D_08CADDB4] D_08CADDF8 RLE Data
u8 D_08caddf8_rledata[] = {
	0x1, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x6, 0x3, 0x8, 0x6, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x1, 0x0, 0x82, 0x0, 0x0, 0x0
};

// [D_08CADDF8] D_08CADDF8 Graphics
struct CompressedGraphics D_08caddf8 = {
	/* Data */				{.raw = D_08caddf8_data},
	/* RLE Data */			D_08caddf8_rledata,
	/* RLE Size */			0x40,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
