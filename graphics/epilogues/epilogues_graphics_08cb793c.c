#include "global.h"
#include "graphics.h"

// // //  D_08CB793C  // // //

// [D_08CB77CC] D_08CB793C Data
u16 D_08cb793c_data[] = {
	0x0000, 0x00fd, 0x00fc, 0x0010, 0x00f8, 0x00f7, 0x00f6, 0x00fb, 0x00fa, 0x00f9, 0x010d, 0x010c, 0x010b, 0x0010, 0x010f, 0x010e, 0x0010, 0x0000, 0x0110, 0x0106, 0x0105, 0x0104, 0x0109, 0x0108, 0x0107, 0x0100, 0x00ff, 0x00fe, 0x0103, 0x0102, 0x0101, 0x010a, 0x0010, 0x0010, 0x0000, 0x0010, 0x0010, 0x00db, 0x0010, 0x00da, 0x00e0, 0x00df, 0x00de, 0x00e3, 0x00e2, 0x00e1, 0x0010, 0x00dd, 0x00dc, 0x0010, 0x0010, 0x0000, 0x00d9, 0x0010, 0x00d8, 0x0010, 0x0010, 0x00d4, 0x00d7, 0x00d6, 0x00d5, 0x00f3, 0x00f2, 0x00f1, 0x00f4, 0x0010, 0x0010, 0x00f0, 0x0000, 0x00f5, 0x00eb, 0x00ea, 0x00e9, 0x0010, 0x0010, 0x00ec, 0x00e6, 0x00e5, 0x00e4, 0x00e8, 0x00e7, 0x0010, 0x00ef, 0x00ee, 0x00ed, 0x0000, 0x0131, 0x0130, 0x0133, 0x0132, 0x0010, 0x0010, 0x0010, 0x0137, 0x0139, 0x0010, 0x0138, 0x0135, 0x0010, 0x0134, 0x0136, 0x0010, 0x0000, 0x0010, 0x012f, 0x012e, 0x012b, 0x012a, 0x0010, 0x0010, 0x012d, 0x012c, 0x0010, 0x0010, 0x0142, 0x0144, 0x012b, 0x0143, 0x0141, 0x0000, 0x0145, 0x013d, 0x013a, 0x013c, 0x013e, 0x0010, 0x0010, 0x012d, 0x012c, 0x0010, 0x0010, 0x013b, 0x013a, 0x013c, 0x0140, 0x013f, 0x0000, 0x011a, 0x0119, 0x011d, 0x011c, 0x011b, 0x0123, 0x0122, 0x0121, 0x0125, 0x00d9, 0x0124, 0x011e, 0x011d, 0x011c, 0x0120, 0x011f, 0x0000, 0x0118, 0x0117, 0x0116, 0x0112, 0x0111, 0x0010, 0x0115, 0x0114, 0x0113, 0x0128, 0x0010, 0x0127, 0x0116, 0x0112, 0x0129, 0x0126, 0x0000
};

// [D_08CB7922] D_08CB793C RLE Data
u8 D_08cb793c_rledata[] = {
	0x1, 0xa6, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0xf, 0x11, 0x0, 0x0, 0x2a, 0x0, 0x0
};

// [D_08CB793C] D_08CB793C Graphics
struct CompressedGraphics D_08cb793c = {
	/* Data */				{.raw = D_08cb793c_data},
	/* RLE Data */			D_08cb793c_rledata,
	/* RLE Size */			0x16,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
