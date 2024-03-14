#include "global.h"
#include "graphics.h"

// // //  D_08D20534  // // //

// [D_08D1FB80] D_08D20534 Data
u16 D_08d20534_data[] = {
	0x9999, 0x9989, 0x9999, 0x9989, 0x9999, 0x9988, 0x9999, 0x9988, 0x9999, 0x9911, 0x9999, 0x9991, 0x9999, 0x9899, 0x9999, 0x9889, 0x9999, 0x9888, 0x9999, 0x1101, 0x9999, 0x9911, 0x9999, 0x0019, 0x9999, 0x0001, 0x9999, 0x0001, 0x1999, 0x0000, 0x1999, 0x0000, 0x0199, 0x0000, 0x1199, 0x1111, 0x9999, 0x9999, 0x0000, 0x1111, 0x0111, 0x9999, 0x0019, 0x9999, 0x0001, 0x0000, 0x1100, 0x1111, 0x8100, 0x8888, 0x7100, 0x7777, 0x6100, 0x6116, 0x5100, 0x5115, 0x5100, 0x5555, 0x0000, 0x1101, 0x1111, 0x8111, 0x1888, 0x7717, 0x7777, 0x6616, 0x6611, 0x5515, 0x5511, 0x5515, 0x5555, 0x0000, 0x1111, 0x1111, 0x1881, 0x1881, 0x1771, 0x1771, 0x1661, 0x1661, 0x1551, 0x0000, 0x1111, 0x1111, 0x8881, 0x8188, 0x7777, 0x7177, 0x1166, 0x6111, 0x1155, 0x5111, 0x5555, 0x5115, 0x0000, 0x1000, 0x0000, 0x9100, 0x0000, 0x9100, 0x0000, 0x9910, 0x0000, 0x9991, 0x0010, 0x0000, 0x0011, 0x0000, 0x0011, 0x0000, 0x0199, 0x0000, 0x0199, 0x0000, 0x0199, 0x0000, 0x0199, 0x0000, 0x0199, 0x0000, 0x0010, 0x0000, 0x0011, 0x1000, 0x0019, 0x0000, 0x1110, 0x1000, 0xccc1, 0xc100, 0xcdcc, 0xcc10, 0xdefe, 0xec10, 0xccff, 0xfcc1, 0xcccf, 0xedc1, 0xcccc, 0xdcc1, 0xcccc, 0x0111, 0x0000, 0x1ccc, 0x1101, 0xcccc, 0xff11, 0x1fcc, 0x1dff, 0xf1fc, 0x011e, 0x11ec, 0x1cc1, 0xdecc, 0x1ccc, 0xcccc, 0x1dcc, 0x0000, 0x1000, 0x0000, 0x9100, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x1111, 0x0011, 0xffff, 0x11ff, 0x111e, 0xffd1, 0x0001, 0xe110, 0x0000, 0x1000, 0x0000, 0x1000, 0x0000, 0x0001, 0x0000, 0x001f, 0x0000, 0x001f, 0x0000, 0x01fe, 0x0000, 0x01f1, 0x0000, 0x01f1, 0x0000, 0x0000, 0x1111, 0x1000, 0x8881, 0x1000, 0x8888, 0x1000, 0x1188, 0x1000, 0x0111, 0x0000, 0x1000, 0x1111, 0x0000, 0x1888, 0x0001, 0x8888, 0x0001, 0x8881, 0x0001, 0x8811, 0x0001, 0x8810, 0x0001, 0x8811, 0x0001, 0x8881, 0x0001, 0x0000, 0x1100, 0x0000, 0x9100, 0x0000, 0x9110, 0x0000, 0x9910, 0x0000, 0x9910, 0x0000, 0x9110, 0x0000, 0x9100, 0x0000, 0x9100, 0x0011, 0x0000, 0x0019, 0x0000, 0x0019, 0x0000, 0x0019, 0x0000, 0x0019, 0x0000, 0x0019, 0x0000, 0x0019, 0x0000, 0x0019, 0x0000, 0x1000, 0x0000, 0x0010, 0x0000, 0x0011, 0x0000, 0x0000, 0x1111, 0x0000, 0xfff1, 0x0000, 0xfff1, 0x0000, 0x1111, 0x0000, 0x1111, 0x0000, 0xfff1, 0x1111, 0x0000, 0x1fff, 0x0001, 0xffff, 0x0001, 0xfff1, 0x0001, 0xff11, 0x0001, 0xff10, 0x0001, 0xff11, 0x0001, 0xffff, 0x0001, 0x0000, 0x1111, 0x0011, 0x8888, 0x0018, 0x7777, 0x0017, 0x1116, 0x0011, 0x1115, 0x0001, 0x5555, 0x0001, 0x1110, 0x0111, 0x8811, 0x1188, 0x1881, 0x8881, 0x1888, 0x1881, 0x1111, 0x1111, 0x8999, 0x9988, 0x8999, 0x9888, 0x8898, 0x9888, 0x8898, 0x9888, 0x8888, 0x1888, 0x8888, 0x1888, 0x8999, 0x9888, 0x8899, 0x9888, 0x8889, 0x9888, 0x8888, 0x9888, 0x1188, 0x9881, 0x1111, 0x9811, 0x1111, 0x8811, 0x8888, 0x8888, 0x9999, 0x9889, 0x8999, 0x9988, 0x8889, 0x9988, 0x8888, 0x9998, 0x8888, 0x9999, 0x1999, 0x9999, 0x0199, 0x9999, 0x0019, 0x9999, 0x0001, 0x1999, 0x0000, 0x1999, 0x0000, 0x0199, 0x0000, 0x0019, 0x0000, 0x0001, 0x0000, 0x5100, 0x5555, 0x5100, 0x1115, 0x4100, 0x0014, 0x3100, 0x0013, 0x2100, 0x0012, 0x1100, 0x0011, 0x0000, 0x5511, 0x5555, 0x5511, 0x5511, 0x4410, 0x4411, 0x3310, 0x3311, 0x2210, 0x2211, 0x1110, 0x1111, 0x0000, 0x1551, 0x1441, 0x1441, 0x3331, 0x1333, 0x2211, 0x1122, 0x1111, 0x1111, 0x0000, 0x5551, 0x5155, 0x1111, 0x5155, 0x1111, 0x4144, 0x3333, 0x3133, 0x2222, 0x2112, 0x1111, 0x1111, 0x0000, 0x1000, 0x9999, 0x1000, 0x9999, 0x9100, 0x9999, 0x9910, 0x9999, 0x9910, 0x9999, 0x9991, 0x9999, 0x9991, 0x9999, 0x9999, 0x9999, 0x0199, 0x0000, 0x1999, 0x0000, 0x1999, 0x0000, 0x1999, 0x0000, 0x1999, 0x0000, 0x1999, 0x1000, 0x1999, 0x9100, 0x9999, 0x9911, 0x1000, 0x0019, 0x9100, 0x0019, 0x9910, 0x0019, 0x9991, 0x0019, 0x9991, 0x0001, 0x9999, 0x0001, 0x9999, 0x0001, 0x9999, 0x0001, 0x0000, 0x1000, 0x0000, 0x9110, 0x1000, 0x9991, 0x9100, 0x9999, 0x9911, 0x9999, 0xccc1, 0xcccc, 0xccc1, 0xcccc, 0xccc1, 0xcccc, 0xcc10, 0xcccc, 0xcd10, 0xcccc, 0xd100, 0xcccc, 0x1000, 0xdcd1, 0x0000, 0x1110, 0xcccc, 0x1dcc, 0xcccc, 0x1dcc, 0xcccc, 0x1dcc, 0xcccc, 0x01dc, 0xcccc, 0x01ed, 0xdccc, 0x001e, 0x1ddd, 0x0001, 0x0111, 0x0000, 0x0000, 0x9910, 0x0000, 0x9991, 0x1000, 0x9999, 0x8100, 0x9998, 0x8810, 0x9998, 0x8881, 0x9988, 0x8888, 0x9888, 0x1111, 0x1111, 0x0001, 0x0000, 0x0111, 0x0000, 0x0199, 0x0000, 0x0199, 0x0000, 0x0199, 0x0000, 0x1999, 0x0000, 0x9999, 0x0001, 0x1111, 0x0011, 0x0000, 0x0110, 0x0000, 0x0191, 0x1000, 0x1199, 0x9100, 0x9999, 0x9810, 0x9999, 0x8881, 0x9999, 0x8888, 0x9999, 0x1111, 0x1111, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0019, 0x0000, 0x0011, 0x0000, 0x1fe1, 0x0000, 0x1f10, 0x0000, 0xfe10, 0x0001, 0xf100, 0x0001, 0xe100, 0x011f, 0x1000, 0x1ffe, 0x0000, 0xfe11, 0x0000, 0x1110, 0x0000, 0x1100, 0x0000, 0x8110, 0x0000, 0x8811, 0x1000, 0x8881, 0x1100, 0x1888, 0x8100, 0x8888, 0x8100, 0x8888, 0x1100, 0x1111, 0x1888, 0x0001, 0x1188, 0x0000, 0x0118, 0x0000, 0x0011, 0x0000, 0x1111, 0x0001, 0x8888, 0x0001, 0x8888, 0x0001, 0x1111, 0x0001, 0x0000, 0x9100, 0x0000, 0x9100, 0x0000, 0x9100, 0x0000, 0x9100, 0x0000, 0x9111, 0x0000, 0x9991, 0x0000, 0x9991, 0x0000, 0x1111, 0x0019, 0x0000, 0x0019, 0x0000, 0x0019, 0x0000, 0x0019, 0x0000, 0x1119, 0x0000, 0x1999, 0x0000, 0x1999, 0x0000, 0x1111, 0x0000, 0x0000, 0x9110, 0x1000, 0x9991, 0x9110, 0x1999, 0x9991, 0x1999, 0x9999, 0x0199, 0x9999, 0x0199, 0x9999, 0x0019, 0x9999, 0x0019, 0x0001, 0x0000, 0x0001, 0x0000, 0xfff1, 0x0000, 0x1111, 0x0000, 0x0000, 0x1100, 0x0011, 0xf100, 0x111f, 0xf100, 0xffff, 0x1100, 0xffff, 0x1000, 0x1111, 0x1fff, 0x0001, 0xfff1, 0x0001, 0xff11, 0x0001, 0xff10, 0x0001, 0xff11, 0x0001, 0xffff, 0x0001, 0x1fff, 0x0001, 0x1111, 0x0000, 0x5555, 0x0001, 0x1115, 0x0001, 0x1114, 0x0011, 0x3333, 0x0013, 0x2222, 0x0012, 0x1111, 0x0011, 0x0000, 0x1110, 0x0111, 0x9911, 0x1199, 0x1991, 0x9911, 0x1199, 0x1110, 0x0111, 0x8888, 0x8888, 0x8888, 0x8881, 0x1888, 0x1881, 0x1888, 0x1881, 0x1188, 0x8888, 0x1188, 0x8888, 0x1888, 0x8888, 0x8888, 0x1888, 0x8888, 0x8818, 0x8888, 0x8111, 0x8111, 0x1118, 0x1111, 0x1188, 0x1811, 0x8188, 0x8888, 0x8811, 0x8188, 0x8118, 0x9999, 0x1118, 0x9999, 0x1188, 0x9999, 0x1988, 0x9999, 0x1888, 0x8888, 0x8888, 0x8888, 0x8188, 0x9998, 0x9188, 0x9999, 0x9988, 0x9999, 0x0199, 0x0000, 0x1119, 0x1111, 0x9999, 0x1199, 0x9999, 0x0011, 0x1199, 0x0001, 0x9999, 0x1119, 0x0000, 0x0000, 0x1111, 0x0001, 0x1199, 0x0000, 0x0011, 0x0000, 0x0001, 0x0000, 0x0000, 0x1000, 0x0000, 0x1111, 0x1100, 0xccc1, 0xc110, 0xcccc, 0xdd10, 0xdddd, 0xee11, 0xeeee, 0x2221, 0x2222, 0x2221, 0x2222, 0x1111, 0x1111, 0xcccc, 0xdddd, 0xdddd, 0xeeee, 0xeeee, 0x2222, 0x1111, 0x1111, 0xcccc, 0xdddd, 0xdddd, 0xeeee, 0xeeee, 0x2222, 0x1111, 0x1111, 0xcccc, 0xdddd, 0xdddd, 0xeeee, 0xeeee, 0x2222, 0x0000, 0x1000, 0x0000, 0x1111, 0x1100, 0x9991, 0x9110, 0x9999, 0xaa10, 0xaaaa, 0xbb11, 0xbbbb, 0x8881, 0x8888, 0x8881, 0x8888, 0x1111, 0x1111, 0x9999, 0xaaaa, 0xaaaa, 0xbbbb, 0xbbbb, 0x8888, 0x1111, 0x1111, 0x9999, 0xaaaa, 0xaaaa, 0xbbbb, 0xbbbb, 0x8888, 0x1111, 0x1111, 0x9999, 0xaaaa, 0xaaaa, 0xbbbb, 0xbbbb, 0x8888, 0x0000, 0x1111, 0x1111, 0xffff, 0xffff, 0x1111, 0x1111, 0x0000, 0x1111, 0x1111, 0xffff, 0xffff, 0x1111, 0x1111, 0x0000, 0x1111, 0x1111, 0xffff, 0xffff, 0x1111, 0x1111, 0x0000, 0x1111, 0x1111, 0xffff, 0xffff, 0x1111, 0x1111, 0x0000, 0x0000, 0x1110, 0x1111, 0x5511, 0x5551, 0x1151, 0x5151, 0x1171, 0x7171, 0x1171, 0x7171, 0x8811, 0x8881, 0x1110, 0x1111, 0x0000, 0x0000, 0x1111, 0x1111, 0x1151, 0x5515, 0x1551, 0x5115, 0x7771, 0x7117, 0x7171, 0x7117, 0x1181, 0x8118, 0x1111, 0x1111, 0x0000, 0x0000, 0x1111, 0x1111, 0x1515, 0x5115, 0x1511, 0x5155, 0x1711, 0x7777, 0x1711, 0x7717, 0x1811, 0x8118, 0x1111, 0x1111, 0x0000, 0x0000, 0x1111, 0x1111, 0x5151, 0x5551, 0x5151, 0x1151, 0x7171, 0x7771, 0x7171, 0x1171, 0x8881, 0x8881, 0x1111, 0x1111, 0x0000, 0x1111, 0x0000, 0x5151, 0x1000, 0x5551, 0x1000, 0x1555, 0x1000, 0x1711, 0x0000, 0x7110, 0x0000, 0x8100, 0x0000, 0x1100, 0x1001, 0x1111, 0x1011, 0x5115, 0x1115, 0x5555, 0x5151, 0x1515, 0x7171, 0x1711, 0x7111, 0x1171, 0x1101, 0x8188, 0x1001, 0x1111, 0x1101, 0x0111, 0x5101, 0x0155, 0x1111, 0x0115, 0x5115, 0x0115, 0x1117, 0x0171, 0x7717, 0x0171, 0x8811, 0x0118, 0x1111, 0x0011, 0x0000, 0x1110, 0x1000, 0x5511, 0x1000, 0x1177, 0x1000, 0x1111, 0x0000, 0x8100, 0x0000, 0x1100, 0x0000, 0x1100, 0x0000, 0x5100, 0x0011, 0x1111, 0x1115, 0x5551, 0x7171, 0x1117, 0x1171, 0x1111, 0x0118, 0x8810, 0x0011, 0x1110, 0x0111, 0x1110, 0x1151, 0x1511, 0x5111, 0x5551, 0x5111, 0x1511, 0x7117, 0x1711, 0x1117, 0x1711, 0x0011, 0x1181, 0x0001, 0x0111, 0x1110, 0x0011, 0x5511, 0x0015, 0x5111, 0x0011, 0x5511, 0x0011, 0x1111, 0x0017, 0x1771, 0x0017, 0x8881, 0x0011, 0x1111, 0x0001, 0x0000, 0x0000, 0x1111, 0x1111, 0x5551, 0x5151, 0x1151, 0x5151, 0x7771, 0x1711, 0x1171, 0x7171, 0x8881, 0x8181, 0x1111, 0x1111, 0x0000, 0x0000, 0x1111, 0x0111, 0x5151, 0x0155, 0x1151, 0x0115, 0x1171, 0x0017, 0x1171, 0x0017, 0x1181, 0x0018, 0x1111, 0x0011, 0x8888, 0x8888, 0x8888, 0x8811, 0x8888, 0x8111, 0x8888, 0x1118, 0x8888, 0x1188, 0x8888, 0x8111, 0x1188, 0x8818, 0x1118, 0x8888, 0x8111, 0x1881, 0x8881, 0x8888, 0x1888, 0x8888, 0x1118, 0x1888, 0x8111, 0x8888, 0x8888, 0x9118, 0x9999, 0x8118, 0x9888, 0x8888, 0x8881, 0x9999, 0x8881, 0x9888, 0x8888, 0x9999, 0x9888, 0x9999, 0x9998, 0x9999, 0x8888, 0x9999, 0x1199, 0x9999, 0x0011, 0x1199, 0x0000, 0x1119, 0x0001, 0x9999, 0x1119, 0x9999, 0x0011, 0x1199, 0x0000, 0x0011, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000
};

// [D_08D204A8] D_08D20534 RLE Data
u8 D_08d20534_rledata[] = {
	0x1, 0x8, 0xc, 0x6, 0xa, 0x1c, 0x10, 0x9, 0x7, 0x3, 0xd, 0x3, 0xd, 0x3, 0x9, 0x3, 0x1, 0x3, 0xd, 0x6, 0x19, 0xb, 0x6, 0x10, 0x20, 0xc, 0x4, 0x9, 0x6, 0x20, 0xd, 0x7, 0x17, 0x4, 0x31, 0xf, 0x2, 0xb, 0xd, 0x4, 0x14, 0x3, 0x11, 0x3, 0x3, 0x3, 0xb, 0x4, 0x14, 0x6, 0x9, 0x17, 0x11, 0x8, 0xd, 0x3, 0xd, 0x3, 0x1, 0x3, 0x9, 0x3, 0xd, 0x3, 0x31, 0x6, 0x5a, 0x3, 0xc, 0x10, 0x64, 0xd, 0x2c, 0x3, 0x5, 0x7, 0x1f, 0x3, 0x12, 0x8, 0x2, 0x6, 0x5, 0x4, 0xf, 0x6, 0x15, 0x5, 0x5, 0x3, 0x3, 0x5, 0x5, 0x3, 0x3, 0x5, 0x5, 0x3, 0x13, 0x5, 0x5, 0x3, 0x3, 0x5, 0x5, 0x3, 0x3, 0x5, 0x5, 0x3, 0x1, 0x9, 0x7, 0x9, 0x7, 0x9, 0x7, 0x9, 0x77, 0x14, 0x66, 0x5, 0x15, 0x3, 0x5, 0x3, 0x1, 0x3, 0x2, 0x6, 0x4, 0xb, 0xf, 0x8, 0xe, 0x0, 0x91, 0x0, 0x0, 0x0
};

// [D_08D20534] D_08D20534 Graphics
struct CompressedGraphics D_08d20534 = {
	/* Data */				{.raw = D_08d20534_data},
	/* RLE Data */			D_08d20534_rledata,
	/* RLE Size */			0x88,
	/* RLE Offset */		0x800,
	/* Double Compressed */	FALSE,
};

u8 D_08d20544[64] = {
	0x78, 0x00, 0x50, 0x00, 0x78, 0x00, 0xA0, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x78, 0x00, 0xA0, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0xDC, 0x00, 0x96, 0x00, 0xE5, 0x00, 0x96, 0x00,
	0x78, 0x00, 0xA0, 0x00, 0x58, 0x00, 0x64, 0x00, 0x98, 0x00, 0x64, 0x00,
	0x00, 0x00, 0x00, 0x00
};