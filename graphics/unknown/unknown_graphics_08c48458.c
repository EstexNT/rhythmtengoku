#include "global.h"
#include "graphics.h"

// // //  D_08C48458  // // //

// [D_08C48338] D_08C48458 Data
u16 D_08c48458_data[] = {
	0x0000, 0x4121, 0x4120, 0x0000, 0x4126, 0x4125, 0x0000, 0x40fb, 0x4151, 0x40df, 0x0000, 0x40fa, 0x40f9, 0x0000, 0x4100, 0x40ee, 0x0000, 0x4000, 0x403d, 0x40ec, 0x4152, 0x414a, 0x40f3, 0x4000, 0x4000, 0x4153, 0x40f5, 0x40f0, 0x4000, 0x4400, 0x44f6, 0x4400, 0x4400, 0x4110, 0x4113, 0x4549, 0x4548, 0x443d, 0x4400, 0x0000, 0x0000, 0x410b, 0x4003, 0x4117, 0x410f, 0x4014, 0x4107, 0x4003, 0x4106, 0x4000, 0x4109, 0x4108, 0x4000, 0x4400, 0x4508, 0x4509, 0x4400, 0x4506, 0x450d, 0x450c, 0x4414, 0x450f, 0x410e, 0x4403, 0x450a, 0x4437, 0x4403, 0x450b, 0x0000, 0x0000, 0x412d, 0x4003, 0x4003, 0x412b, 0x4003, 0x412c, 0x4135, 0x4003, 0x4134, 0x4003, 0x4003, 0x4136, 0x4003, 0x4092, 0x4000, 0x4400, 0x4492, 0x4403, 0x4536, 0x4403, 0x4403, 0x4537, 0x4403, 0x4535, 0x452c, 0x4403, 0x452b, 0x4403, 0x4403, 0x452d, 0x0000, 0x0000, 0x4003, 0x4003, 0x4003, 0x412a, 0x4003, 0x4132, 0x4003, 0x4003, 0x4001, 0x4133, 0x412f, 0x412e, 0x4003, 0x4131, 0x4130, 0x4530, 0x4531, 0x4403, 0x452e, 0x452f, 0x4533, 0x4538, 0x4403, 0x4403, 0x4532, 0x4403, 0x452a, 0x4403, 0x4403, 0x4403, 0x0000
};

// [D_08C48442] D_08C48458 RLE Data
u8 D_08c48458_rledata[] = {
	0x1, 0x0, 0xc9, 0x3, 0xb, 0x3, 0x8, 0x4, 0x3, 0x3, 0xb, 0x3, 0x6, 0xc, 0x3, 0x1, 0x5, 0xd, 0x3, 0x5a, 0x0, 0x82
};

// [D_08C48458] D_08C48458 Graphics
struct CompressedGraphics D_08c48458 = {
	/* Data */				{.raw = D_08c48458_data},
	/* RLE Data */			D_08c48458_rledata,
	/* RLE Size */			0x14,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
