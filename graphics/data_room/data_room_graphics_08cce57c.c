#include "global.h"
#include "graphics.h"

// // //  D_08CCE57C  // // //

// [D_08CCE130] D_08CCE57C Data
u16 D_08cce57c_data[] = {
	0x201b, 0x2092, 0x2091, 0x2043, 0x2043, 0x208f, 0x208e, 0x201b, 0x201b, 0x2090, 0x2043, 0x2043, 0x2095, 0x201b, 0x201b, 0x2094, 0x2097, 0x2043, 0x2043, 0x2096, 0x2093, 0x201b, 0x2000, 0x2000, 0x2036, 0x2087, 0x201b, 0x2088, 0x2043, 0x2043, 0x2085, 0x2084, 0x201b, 0x201b, 0x2086, 0x2043, 0x2043, 0x208c, 0x201b, 0x201b, 0x208b, 0x2043, 0x2043, 0x2043, 0x208d, 0x201b, 0x2089, 0x208a, 0x2000, 0x2000, 0x2043, 0x20b2, 0x20b1, 0x201b, 0x20b3, 0x20ab, 0x20ac, 0x20a9, 0x20aa, 0x20af, 0x20b0, 0x20ad, 0x20ae, 0x20b8, 0x205e, 0x20b6, 0x20b7, 0x2043, 0x2043, 0x20b9, 0x201b, 0x20b4, 0x20b5, 0x2043, 0x2000, 0x2000, 0x2043, 0x2043, 0x209e, 0x209f, 0x20a1, 0x201b, 0x201b, 0x20a0, 0x209a, 0x209b, 0x2098, 0x2099, 0x209c, 0x209d, 0x2004, 0x2004, 0x2004, 0x20a6, 0x20a5, 0x2043, 0x2043, 0x20a8, 0x20a7, 0x201b, 0x201b, 0x20a4, 0x20a2, 0x20a3, 0x2043, 0x2043, 0x2000, 0x2000, 0x203f, 0x2040, 0x2043, 0x2043, 0x2056, 0x2057, 0x201b, 0x2055, 0x204f, 0x2050, 0x204d, 0x204e, 0x2053, 0x2054, 0x2051, 0x2052, 0x2004, 0x205c, 0x205a, 0x205b, 0x205f, 0x2060, 0x205d, 0x205e, 0x2058, 0x2059, 0x2043, 0x2043, 0x2045, 0x2046, 0x2000, 0x2000, 0x201b, 0x2041, 0x203f, 0x2040, 0x2043, 0x2044, 0x2042, 0x201b, 0x2039, 0x203a, 0x2037, 0x2038, 0x203d, 0x203e, 0x203b, 0x203c, 0x204b, 0x2004, 0x2049, 0x204a, 0x2004, 0x2004, 0x2004, 0x204c, 0x2047, 0x2043, 0x2045, 0x2046, 0x2048, 0x201b, 0x2000, 0x2000, 0x201b, 0x201b, 0x201b, 0x2041, 0x203f, 0x2040, 0x2043, 0x207a, 0x2075, 0x2076, 0x2073, 0x2074, 0x2079, 0x201b, 0x2077, 0x2078, 0x207f, 0x2080, 0x207d, 0x207e, 0x2004, 0x2083, 0x2081, 0x2082, 0x207b, 0x207c, 0x2048, 0x201b, 0x201b, 0x201b, 0x2000, 0x2000, 0x201b, 0x2041, 0x2067, 0x2068, 0x2063, 0x2064, 0x2061, 0x2062, 0x2066, 0x201b, 0x201b, 0x2065, 0x206e, 0x206f, 0x206c, 0x206d, 0x2004, 0x2072, 0x2070, 0x2071, 0x206a, 0x206b, 0x2069, 0x201b, 0x201b, 0x201b, 0x2000, 0x2000, 0x201b, 0x210f, 0x20f4, 0x210a, 0x210b, 0x2108, 0x2109, 0x2004, 0x210e, 0x210c, 0x210d, 0x2114, 0x2115, 0x2112, 0x2113, 0x2004, 0x2004, 0x2116, 0x2117, 0x201b, 0x2111, 0x2110, 0x201b, 0x201b, 0x201b, 0x2000, 0x2000, 0x201b, 0x20fc, 0x20f4, 0x20f8, 0x20f9, 0x20f7, 0x2004, 0x2004, 0x20fb, 0x2002, 0x20fa, 0x2102, 0x2103, 0x2100, 0x2101, 0x2106, 0x2107, 0x2104, 0x2105, 0x20fe, 0x20ff, 0x20fd, 0x201b, 0x201b, 0x201b, 0x2000, 0x2000, 0x201b, 0x2127, 0x2128, 0x2123, 0x2124, 0x2122, 0x2004, 0x2004, 0x2126, 0x2002, 0x2125, 0x212d, 0x212e, 0x212b, 0x212c, 0x2131, 0x2132, 0x212f, 0x2130, 0x201b, 0x212a, 0x2129, 0x201b, 0x201b, 0x201b, 0x2000, 0x2000, 0x201b, 0x211a, 0x211b, 0x2004, 0x2118, 0x2119, 0x211e, 0x211f, 0x211c, 0x211d, 0x2121, 0x2004, 0x2004, 0x2120, 0x201b, 0x2000, 0x2000, 0x201b, 0x20cf, 0x20cd, 0x20ce, 0x2004, 0x20cb, 0x20cc, 0x20c9, 0x20ca, 0x20d5, 0x20d6, 0x20d3, 0x20d4, 0x20d8, 0x2004, 0x2004, 0x20d7, 0x20d1, 0x20d2, 0x20d0, 0x201b, 0x201b, 0x201b, 0x2000, 0x2000, 0x201b, 0x20bf, 0x20bd, 0x20be, 0x2004, 0x20bb, 0x20bc, 0x20ba, 0x20ba, 0x20c4, 0x20c5, 0x20c2, 0x20c3, 0x2004, 0x20c8, 0x20c6, 0x20c7, 0x20c1, 0x2004, 0x20c0, 0x201b, 0x201b, 0x201b, 0x2000, 0x2000, 0x201b, 0x20ec, 0x20eb, 0x2004, 0x20e7, 0x20e9, 0x20ea, 0x20e8, 0x20e8, 0x20f1, 0x20f2, 0x20f0, 0x2004, 0x20f5, 0x20f6, 0x20f3, 0x20f4, 0x20ee, 0x20ef, 0x20ed, 0x201b, 0x201b, 0x201b, 0x2000, 0x2000, 0x201b, 0x2015, 0x20dd, 0x20dc, 0x2004, 0x20d9, 0x20db, 0x20da, 0x20da, 0x20da, 0x20e1, 0x20e2, 0x2004, 0x20e0, 0x20e5, 0x20e6, 0x20e3, 0x20e4, 0x20de, 0x20df, 0x201b, 0x2000, 0x2000, 0x201b, 0x2015, 0x2016, 0x2014, 0x2006, 0x2017, 0x2018, 0x2004, 0x2010, 0x2011, 0x2012, 0x2012, 0x2012, 0x2013, 0x201e, 0x2004, 0x201c, 0x201d, 0x2021, 0x2022, 0x201f, 0x2020, 0x2009, 0x200a, 0x2019, 0x201a, 0x201b, 0x2000, 0x2000, 0x2014, 0x2006, 0x2002, 0x2002, 0x2002, 0x2007, 0x2008, 0x2004, 0x2004, 0x2003, 0x2004, 0x2001, 0x2002, 0x2005, 0x200b, 0x200c, 0x2002, 0x2002, 0x200e, 0x200f, 0x200d, 0x2002, 0x2009, 0x200a, 0x2000, 0x2000, 0x2002, 0x2031, 0x2032, 0x2004, 0x2030, 0x202d, 0x202e, 0x2002, 0x202f, 0x2033, 0x202a, 0x2002, 0x2002, 0x2034, 0x2035, 0x2002, 0x2000, 0x2000, 0x2002, 0x2027, 0x2004, 0x2026, 0x2023, 0x2024, 0x2002, 0x2025, 0x2029, 0x202a, 0x2002, 0x2028, 0x202b, 0x202c, 0x2002, 0x2000
};

// [D_08CCE53A] D_08CCE57C RLE Data
u8 D_08cce57c_rledata[] = {
	0x1, 0x4, 0x15, 0x4, 0x5, 0x3, 0x13, 0x3, 0x8, 0x3, 0x11, 0x3, 0x86, 0x4, 0x1c, 0x5, 0x1b, 0x5, 0x1b, 0x5, 0x1b, 0x5, 0x3, 0x5, 0xb, 0x5, 0x3, 0x4, 0x4, 0x3, 0x15, 0x4, 0x4, 0x3, 0x15, 0x4, 0x3, 0x3, 0x16, 0x3, 0x4, 0x3, 0x10, 0x3, 0xa, 0x3, 0x22, 0x3, 0x9, 0x3, 0x5, 0x4, 0x7, 0x4, 0x8, 0x6, 0x3, 0x5, 0x6, 0x4, 0x8, 0x6, 0x1, 0x0, 0x82, 0x0
};

// [D_08CCE57C] D_08CCE57C Graphics
struct CompressedGraphics D_08cce57c = {
	/* Data */				{.raw = D_08cce57c_data},
	/* RLE Data */			D_08cce57c_rledata,
	/* RLE Size */			0x40,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};
