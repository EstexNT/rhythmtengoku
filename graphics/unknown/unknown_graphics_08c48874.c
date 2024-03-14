#include "global.h"
#include "graphics.h"

// // //  D_08C48874  // // //

// [D_08C48704] D_08C48874 Data
u16 D_08c48874_data[] = {
	0x0000, 0x4030, 0x402f, 0x0000, 0x0000, 0x0000, 0x4031, 0x0000, 0x405f, 0x4060, 0x0000, 0x0000, 0x405e, 0x405d, 0x405c, 0x0000, 0x4065, 0x0000, 0x0000, 0x0000, 0x4062, 0x4061, 0x0000, 0x0000, 0x4064, 0x4063, 0x0000, 0x4054, 0x4053, 0x4052, 0x0000, 0x0000, 0x4058, 0x405b, 0x405a, 0x4059, 0x0000, 0x0000, 0x0000, 0x4057, 0x4056, 0x4055, 0x0000, 0x0000, 0x4074, 0x4075, 0x0000, 0x0000, 0x4072, 0x4071, 0x0000, 0x0000, 0x4073, 0x0000, 0x4000, 0x4021, 0x407a, 0x4003, 0x4077, 0x4076, 0x4000, 0x4079, 0x4078, 0x406b, 0x406a, 0x4000, 0x4067, 0x4066, 0x4400, 0x4400, 0x4069, 0x4068, 0x4400, 0x4400, 0x4400, 0x4070, 0x406f, 0x406e, 0x406d, 0x406c, 0x4400, 0x0000, 0x0000, 0x4035, 0x4036, 0x4003, 0x4003, 0x4003, 0x403f, 0x403e, 0x4036, 0x403c, 0x4003, 0x4037, 0x4000, 0x403d, 0x4045, 0x4000, 0x4044, 0x4046, 0x443d, 0x4400, 0x4437, 0x4441, 0x4440, 0x4443, 0x443e, 0x4042, 0x4403, 0x4434, 0x4033, 0x4436, 0x4435, 0x0000, 0x0000, 0x4032, 0x4003, 0x4003, 0x4027, 0x4003, 0x403b, 0x403a, 0x4003, 0x4038, 0x4003, 0x4037, 0x4000, 0x4039, 0x4003, 0x4403, 0x4438, 0x4403, 0x4403, 0x4450, 0x4403, 0x443a, 0x443b, 0x4403, 0x4427, 0x4403, 0x4403, 0x4432, 0x0000, 0x0000, 0x4003, 0x4003, 0x4003, 0x404e, 0x4003, 0x404f, 0x4003, 0x4003, 0x4051, 0x404c, 0x404a, 0x404b, 0x4003, 0x4047, 0x4048, 0x4448, 0x4447, 0x4403, 0x444b, 0x444a, 0x4049, 0x444d, 0x4403, 0x4403, 0x444f, 0x4403, 0x444e, 0x4403, 0x4403, 0x4403, 0x0000
};

// [D_08C48862] D_08C48874 RLE Data
u8 D_08c48874_rledata[] = {
	0x1, 0x0, 0xa3, 0x7, 0x19, 0x8, 0x4, 0xb, 0x8, 0x1b, 0x3, 0xc, 0x3, 0x39, 0x3, 0x34, 0x0, 0x82
};

// [D_08C48874] D_08C48874 Graphics
struct CompressedGraphics D_08c48874 = {
	/* Data */				{.raw = D_08c48874_data},
	/* RLE Data */			D_08c48874_rledata,
	/* RLE Size */			0x10,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
