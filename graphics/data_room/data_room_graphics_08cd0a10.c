#include "global.h"
#include "graphics.h"

// // //  D_08CD0A10  // // //

// [D_08CCFA6C] D_08CD0A10 Huffman Data
u16 D_08cd0a10_huffmandata[] = {
	0x0000, 0xdc8a, 0x8bcd, 0xf8ce, 0xd8ab, 0xa400, 0xa8ff, 0xd9be, 0x8889, 0xcaae, 0xbc98, 0x0002, 0x0021, 0x0003, 0x0006, 0xcea8, 0x4000, 0x9000, 0xafc8, 0x0000, 0x0090, 0xfda8, 0xec98, 0x0000, 0x00f9, 0xcfe9, 0xbec8, 0x0000, 0x00d9, 0x8ba8, 0xdc98, 0x0000, 0x00f9, 0xdeeb, 0xa888, 0xcffe, 0xd888, 0xecfe, 0xea88, 0xdcff, 0xfa98, 0x8bdf, 0xbe98, 0x89ee, 0xaeeb, 0x9bc8, 0x0000, 0x0019, 0x89cc, 0x00c8, 0x1030, 0x9fb8, 0x0000, 0xc069, 0xb9dc, 0x9888, 0xa8fd, 0x5000, 0x54ea, 0xfe98, 0x4000, 0x00ee, 0xffac, 0x9ec8, 0x0000, 0x0064, 0xef98, 0x4002, 0x2aaa, 0xeaaa, 0xeaac, 0xeffe, 0xffec, 0xadff, 0xffff, 0x88ac, 0x9cec, 0x9df8, 0x0000, 0x03a1, 0xefff, 0x8888, 0x9dfe, 0xcbe8, 0x0001, 0x0009, 0x0003, 0xfda9, 0x8888, 0xdfba, 0xa9b8, 0x0000, 0x0094, 0xdfa8, 0xe400, 0xd000, 0xcdb8, 0x0001, 0x0040, 0x03aa, 0xe8de, 0x889b, 0xedec, 0x8add, 0xdfba, 0xbeee, 0xcdb8, 0x9bdf, 0x9a88, 0xecef, 0x8888, 0xbefd, 0x8888, 0xbefb, 0x8af9, 0xdfe8, 0x0000, 0x0039, 0xf8ae, 0x4000, 0x03aa, 0x888a, 0xeeeb, 0x8889, 0xcff8, 0x88bd, 0xffec, 0x8bbc, 0xfcca, 0x8ecf, 0x9de8, 0x0000, 0x0069, 0xece9, 0xfda8, 0x0000, 0x00e4, 0x9dc8, 0x9000, 0xc000, 0xdba8, 0x0001, 0x0040, 0x00e0, 0xfeb9, 0xb888, 0xeead, 0xec98, 0xfecc, 0xcdb9, 0xe9f8, 0x5400, 0xf580, 0xeca9, 0x8eff, 0xeedb, 0xafff, 0xedee, 0x9dcf, 0x9abe, 0x0400, 0x40e6, 0x89ab, 0x9abf, 0x9ae8, 0x0002, 0x0029, 0x000e, 0x000e, 0x888c, 0x00a8, 0x0010, 0x8888, 0xcdee, 0xcb89, 0x5400, 0x553a, 0x9c8a, 0x5401, 0x5655, 0x4355, 0x9cd8, 0x0001, 0x00e5, 0x0070, 0xa888, 0x88b9, 0xeb88, 0xbcab, 0xfc98, 0xccce, 0xefe9, 0xccde, 0xefee, 0x9bcd, 0xddc8, 0x888a, 0xedea, 0x8898, 0xdfec, 0x9b8d, 0xbfea, 0xefec, 0xdeb8, 0xceee, 0xea88, 0xdbce, 0xa888, 0xfe98, 0xeca8, 0x0000, 0x00e4, 0xdf89, 0x5400, 0x5e55, 0xabf8, 0x0000, 0x0039, 0x8dce, 0x9ca8, 0x0001, 0x0001, 0x000e, 0xa9b8, 0x2402, 0x0000, 0x0070, 0x0040, 0xf8ed, 0x5400, 0xdfa9, 0x88bf, 0xffed, 0x8bdd, 0xe9ba, 0x9dfb, 0xc888, 0xbdff, 0xea88, 0xcdfe, 0xe988, 0xdccf, 0xb888, 0x8fcd, 0xfecc, 0x98df, 0x1000, 0x007a, 0xfda8, 0x4000, 0x00fe, 0xffdc, 0xeda8, 0x0000, 0x00e9, 0xfa98, 0x2400, 0x0b00, 0x9ef8, 0x0000, 0x0039, 0xd8ae, 0x9000, 0x9faa, 0xabc8, 0x0000, 0x0039, 0xb8a9, 0xa400, 0xd2aa, 0xdfeb, 0xacb8, 0x9cda, 0xb9a8, 0xa402, 0x001a, 0x0020, 0x00e0, 0xeba8, 0xe400, 0xfe00, 0xa888, 0x889a, 0xdb98, 0x88bb, 0xca98, 0x8acd, 0xc989, 0x89be, 0xc88a, 0x89be, 0xc88b, 0x88ac, 0x9ba8, 0x0089, 0xfffe, 0xeda9, 0x9888, 0xdddb, 0xaa88, 0xdbdc, 0xdea8, 0xfcdb, 0xfed8, 0xe400, 0xb8e6, 0xdccc, 0xdfff, 0x9bbb, 0xf8ce, 0x1000, 0x53a9, 0x8adc, 0xeeee, 0x9ace, 0xcfee, 0x889a, 0xacce, 0x9be8, 0x0000, 0x0039, 0xeb8a, 0x5400, 0xf955, 0xeecc, 0xdeca, 0x9efc, 0xccba, 0x8bee, 0xaccb, 0xb98a, 0x5401, 0x5589, 0x5556, 0xdb88, 0xbec8, 0x0000, 0x0064, 0xdfb8, 0x8888, 0xfde9, 0xfdb8, 0x0000, 0x00f9, 0xffec, 0xefb8, 0x0000, 0x00b9, 0xfdec, 0xffe8, 0x008f, 0x0010, 0xbf8e, 0xa400, 0xeaaa, 0x888b, 0xdfff, 0x88ad, 0x8bef, 0x4004, 0x00f8, 0x00f8, 0x00f8, 0xc0fe, 0xe0ff, 0xab98, 0x0001, 0x0040, 0x0080, 0xfea8, 0x9000, 0xe000, 0xbf98, 0x0001, 0x00a4, 0x00ac, 0xfda8, 0xeda8, 0x0000, 0x00e4, 0xefd8, 0x9888, 0xfdab, 0xcb98, 0xedde, 0xefb9, 0xbfcd, 0xefeb, 0xcbad, 0xceff, 0x9cae, 0xcbef, 0x88cc, 0xecee, 0x8ade, 0xfbbe, 0x88bc, 0xbe8a, 0x888a, 0x9ccd, 0x9bc8, 0x0000, 0x0039, 0xff8a, 0x5400, 0xa955, 0x01ef, 0x0020, 0x2004, 0x008f, 0x8000, 0xb9f8, 0x0000, 0x0c95, 0x8cef, 0x4000, 0x80fa, 0x88cd, 0xeeff, 0x889f, 0x8dcf, 0x5000, 0x40fe, 0x888d, 0xbaff, 0x888b, 0x8edc, 0xe400, 0xf6ff, 0xa9b8, 0x0002, 0x0001, 0x0080, 0x0070, 0xe9ba, 0x9ca8, 0x0000, 0x0090, 0xcdb9, 0xec98, 0x4000, 0x40fe, 0xedef, 0xeca8, 0xcfee, 0xecb8, 0x9000, 0xb4f2, 0xd99e, 0xecbb, 0xdbcf, 0xcdda, 0xbcbe, 0xeeff, 0x8acc, 0xcdfd, 0x8888, 0x9dec, 0xdac8, 0x0001, 0x0029, 0xe800, 0x00a8, 0x80c0, 0x8888, 0xc988, 0xcfa8, 0xbdee, 0xfc98, 0xbeed, 0xdea8, 0x9000, 0x40fb, 0xdced, 0x8888, 0xceeb, 0x9888, 0xfffa, 0xc988, 0xfffe, 0xfc98, 0xffff, 0x00a8, 0x0100, 0x88ac, 0xdbe8, 0x0001, 0x0009, 0x0009, 0x8bcd, 0xdaf8, 0x0000, 0x0095, 0xadff, 0x8889, 0xdefc, 0xa400, 0xaae6, 0x9ace, 0x9400, 0xe804, 0xccdd, 0x889b, 0xaced, 0xacd8, 0x0001, 0x0039, 0x000e, 0xcb89, 0x5403, 0x9555, 0x1555, 0xc555, 0xac55, 0x9888, 0x8eec, 0xb988, 0xaddf, 0xfea8, 0xefcc, 0xffeb, 0xdfcc, 0xfefd, 0x9bee, 0xdfcd, 0x8888, 0xeeee, 0xa89d, 0xfffe, 0xecff, 0xcfd8, 0xa400, 0xa4aa, 0xff8f, 0xffec, 0xf8af, 0xfffd, 0x008f, 0xf010, 0xfea8, 0x0001, 0x0001, 0x0006, 0x88df, 0xaed8, 0x0000, 0x0039, 0xe8df, 0x4000, 0xc0aa, 0x8889, 0x8cdf, 0x9000, 0xfffe, 0xfeb8, 0xa888, 0xceec, 0xbb88, 0xdcee, 0xddb8, 0xebff, 0xc9dd, 0xbeee, 0xa8ee, 0xaced, 0x8abe, 0x8acd, 0xcebd, 0x888b, 0x8cde, 0x4400, 0x10f9, 0x888b, 0xaceb, 0xabd8, 0x0001, 0x0039, 0x0002, 0xfa98, 0x4000, 0xe000, 0xfda8, 0x0000, 0x40e1, 0xefd8, 0xe400, 0xaac0, 0xbf98, 0x8400, 0xacaa, 0xfaef, 0x5000, 0x0006, 0xfffe, 0x00df, 0x0010, 0xedbf, 0x4000, 0x8000, 0xbf8e, 0xa402, 0xaa2a, 0xaaea, 0x556a, 0xab98, 0x4002, 0x8000, 0xc000, 0x0002, 0x88ad, 0xfbf8, 0x0000, 0x0009, 0x88bf, 0x00b8, 0x1030, 0xfa98, 0x0001, 0x0040, 0x00e0, 0xfd8a, 0x00e8, 0xe0c0, 0xa888, 0xb8ec, 0x5400, 0x45fa, 0xddb8, 0xebff, 0xc9dd, 0xbeee, 0xa8ee, 0xaced, 0x8abe, 0x8acd, 0x01a8, 0x0300, 0x0101, 0x008e, 0xe0e0, 0xdb8e, 0x0002, 0x4255, 0x5b55, 0x5655, 0xce98, 0x4001, 0x9000, 0xa000, 0xabc8, 0x4002, 0xd0fe, 0xf4ff, 0xfcff, 0xaaaa, 0xaaeb, 0x9aac, 0xcefc, 0x8ccc, 0xdeef, 0x8acc, 0xcdef, 0xa89b, 0xa401, 0x7eaa, 0x5aaa, 0xcd98, 0x0000, 0x0090, 0x9ec8, 0x9000, 0x6000, 0xfe98, 0x0000, 0x00e4, 0xbdc8, 0x5000, 0x0200, 0xa9b8, 0x0000, 0x0039, 0x8bed, 0x8888, 0xabed, 0x8888, 0xccbd, 0x8889, 0xcdfe, 0x5401, 0x5490, 0x5550, 0xedcf, 0xff8d, 0xbdef, 0x9edf, 0x0400, 0x08e0, 0xc8ef, 0x9000, 0xc017, 0xffeb, 0x8fff, 0x8aeb, 0xdce8, 0x0000, 0x0009, 0xc89d, 0xa401, 0xa9aa, 0xabaa, 0x0098, 0x0030, 0x98fc, 0x5400, 0x5eaa, 0xfe98, 0x0000, 0x00e4, 0xfb88, 0xad98, 0x0000, 0x00a4, 0xefda, 0x8888, 0xffec, 0x9b98, 0xcddd, 0xa9b8, 0x0000, 0x0024, 0x888a, 0x0098, 0x0808, 0xd9a8, 0x4002, 0xe000, 0x8000, 0xd800, 0x8888, 0xeeb9, 0xa988, 0xbedd, 0xdb98, 0xeedd, 0xdcaa, 0xeedb, 0xdbde, 0xcefc, 0xdefe, 0xbefe, 0xea9a, 0x888b, 0xbccb, 0x00b8, 0x8060, 0xedb8, 0x0001, 0x0090, 0x00f0, 0xefc8, 0x9ed8, 0x0000, 0x00a5, 0xe9e8, 0xec98, 0xfe8a, 0xd9b8, 0x0001, 0x0040, 0x0080, 0x8edb, 0x9000, 0x95c6, 0x88ad, 0xcbdf, 0xce8b, 0x5400, 0x55e2, 0xa8ee, 0x9bd8, 0x0001, 0x0009, 0x000e, 0x88ac, 0xfae8, 0x0000, 0xffe5, 0xffdd, 0xecaf, 0x0000, 0x03b9, 0xa988, 0xf8cb, 0x0401, 0xffaa, 0xff83, 0x88bf, 0xdffe, 0xa98b, 0x5402, 0x5579, 0x5515, 0x55d5, 0x88ad, 0x9a88, 0xdc8f, 0x5401, 0x94e9, 0x558a, 0x89a8, 0x9db8, 0x0002, 0x0019, 0x00da, 0x0019, 0xadb8, 0xefa8, 0x0000, 0x40b9, 0xffec, 0xfca8, 0x4000, 0x80fe, 0xefd8, 0xe988, 0xee8c, 0xdb88, 0xd99e, 0xde88, 0xdbcf, 0xf998, 0xbcbe, 0xfebb, 0x89de, 0xffeb, 0x88cf, 0xfcbd, 0x889e, 0xcebd, 0x888b, 0x8edc, 0xe400, 0xf6ff, 0x8888, 0x888b, 0x00a8, 0x8080, 0xeda8, 0x0001, 0x00b9, 0x00ff, 0x8bfe, 0x2400, 0xd5bf, 0xb888, 0xceff, 0xf888, 0xcaee, 0xe888, 0xbcbe, 0xb8e9, 0x9dee, 0xcdde, 0xbed8, 0x0000, 0x0039, 0x98ac, 0xa401, 0xa9aa, 0xabaa, 0xadf8, 0x0000, 0x0395, 0xcfff, 0x888c, 0xd9ff, 0x888b, 0x8cef, 0x8401, 0xe4ff, 0xe4ff, 0x9ef8, 0x0001, 0x0039, 0x000e, 0xfeb8, 0x0000, 0x00e4, 0xffd8, 0x8888, 0xdfca, 0xcfe8, 0x0002, 0x00a5, 0x00a9, 0xc0aa, 0xea8f, 0x0001, 0x0095, 0x3000, 0x8efd, 0x5401, 0x5655, 0x5755, 0x00bf, 0x0010, 0xec8f, 0x0400, 0x9500, 0xffee, 0xeb98, 0xfdce, 0xaaea, 0x9eea, 0xddeb, 0x9dde, 0xdddf, 0x888c, 0xbdfc, 0x888b, 0xbeda, 0xced8, 0x0000, 0x0039, 0xc8be, 0xa400, 0xabaa, 0xda98, 0x0003, 0x0001, 0x0080, 0x0060, 0x00e8, 0xbdca, 0x9888, 0x8cde, 0x2400, 0x912f, 0xda88, 0xcabe, 0xde98, 0x4000, 0x00c6, 0x8dca, 0x9401, 0xafff, 0x5fff, 0xbc98, 0x0002, 0x0090, 0x02c0, 0x0600, 0xfce8, 0x0000, 0x0009, 0x8bef, 0x9fd8, 0x0000, 0x00e9, 0xaddd, 0xace8, 0x0000, 0x0ca5, 0xbdfc, 0x8aeb, 0xda8c, 0x5402, 0x9555, 0xe555, 0xf955, 0xa888, 0xddce, 0xc988, 0xdecc, 0xdda8, 0xe8cc, 0xfcd9, 0xebbc, 0xfeea, 0xcced, 0xcfee, 0x9cbc, 0xb9df, 0x8cef, 0xeeed, 0x88ad, 0xeced, 0x888a, 0x9cdd, 0xbae8, 0x0001, 0x0009, 0x0003, 0x8889, 0xaef8, 0x0000, 0x0039, 0xe89f, 0x4000, 0x00aa, 0x8888, 0xdeff, 0xcf8a, 0x5400, 0x57aa, 0xecb8, 0x0000, 0x0040, 0xec88, 0xedc8, 0x9aef, 0xfcb8, 0xbe8f, 0xfd88, 0xffde, 0xdb88, 0xf8ef, 0xfca8, 0x98ef, 0x1001, 0x000e, 0x0402, 0x98bf, 0x0001, 0xaa04, 0xaa6a, 0xe988, 0xefb8, 0x0001, 0x00e4, 0x00e9, 0xbdff, 0xe988, 0xceee, 0xefa8, 0xbdef, 0xa400, 0xf047, 0xbeee, 0x8ade, 0xdeff, 0xd89c, 0xa400, 0xaaf3, 0xc8eb, 0x8400, 0xaaaa, 0xfec8, 0x8888, 0xdc88, 0x00b8, 0x8080, 0x9da8, 0x0000, 0x0040, 0xbe9d, 0x8888, 0xbdec, 0x8888, 0xceef, 0x8889, 0xdedf, 0xed8a, 0x5400, 0x56e2, 0x8edb, 0xa400, 0x97f2, 0xb89e, 0x9000, 0x4006, 0xeb88, 0x8cdd, 0xfd88, 0x9eee, 0xee8b, 0xccee, 0xdcdd, 0x9bde, 0xedee, 0x88bc, 0xfdbc, 0x8888, 0xbcde, 0x9cb8, 0x0000, 0x0039, 0x8ced, 0x9ac8, 0x0001, 0x0009, 0x0003, 0x8bda, 0x9ae8, 0x0001, 0x0009, 0x0003, 0xba88, 0xfec8, 0x0000, 0x0090, 0xbfe8, 0x9888, 0xeef9, 0xcb98, 0xddef, 0xab98, 0x0001, 0x0040, 0x0080, 0xaa88, 0xa8db, 0xb89a, 0xa400, 0xa9af, 0xeda8, 0x0000, 0x00f9, 0xef88, 0xdc88, 0xceee, 0xedb8, 0xdeed, 0xeeda, 0x8bd8, 0xeeed, 0x89ae, 0xeeff, 0x88ab, 0xdeee, 0x888a, 0x89fd, 0xe400, 0xfcff, 0xeda8, 0x0000, 0x0001, 0xfded, 0x88be, 0xe8cf, 0x0001, 0x00a4, 0x00ab, 0xf8ae, 0xa401, 0xabfc, 0xa7ff, 0x89ef, 0x0000, 0x00f9, 0xce8b, 0x5400, 0x9555, 0xbfc8, 0x0000, 0x0090, 0xfeb8, 0x8888, 0xfce9, 0xfda8, 0x0000, 0x00e4, 0xdedd, 0xfea8, 0x9000, 0xfcff, 0x00ef, 0x8080, 0xfffb, 0x008f, 0x0010, 0xbfe8, 0x0000, 0x00e9, 0xffda, 0xec98, 0x0000, 0x00a4, 0xa8fe, 0x5400, 0x5605, 0x8aef, 0xdeff, 0xc98d, 0x5401, 0x5559, 0x555f, 0x88ac, 0x0098, 0x8010, 0xcba8, 0x0000, 0x00e4, 0xecca, 0xfed8, 0x0000, 0x40a9, 0xefef, 0xfc88, 0xbefe, 0x9cc9, 0x9ace, 0xaaeb, 0xb8da, 0x8401, 0xeaaa, 0x0aaa, 0xca98, 0x0000, 0x00e4, 0xecc9, 0xc888, 0xfeef, 0xeb88, 0xceef, 0xbbb8, 0xdfff, 0xdb9b, 0x9bdc, 0xed9a, 0x89dd, 0xdcda, 0x889e, 0xaeed, 0x888a, 0xadfe, 0xca98, 0x0001, 0x0001, 0x000e, 0x8aee, 0x9cb8, 0x0000, 0x00e1, 0xddae, 0x888a, 0xffce, 0x888d, 0xefe8, 0x9cdc, 0xfdb9, 0xcddc, 0xea88, 0xddef, 0xd988, 0xdfa8, 0xefd8, 0x0000, 0x00e4, 0xfeb8, 0xbdc8, 0x0000, 0x0090, 0xcb88, 0xfbe8, 0x9bef, 0xefcb, 0x88cc, 0xbfee, 0xbe89, 0x5400, 0x553a, 0xe89a, 0x9400, 0xa4aa, 0xfe98, 0x0000, 0x00e4, 0xffc8, 0x8888, 0xeffb, 0xc988, 0xfffc, 0xbdc8, 0x8cfd, 0x1400, 0xe8aa, 0xaddd, 0xb8ec, 0xa400, 0xaebf, 0x8def, 0x0400, 0x40fe, 0xef8c, 0x5400, 0x57aa, 0xdebc, 0x8abe, 0xcd89, 0x8bfd, 0xee88, 0x9aff, 0xfd88, 0xb8ae, 0xd988, 0xebcd, 0xed98, 0x0002, 0x0010, 0x0002, 0x0064, 0xade9, 0x9888, 0x88fd, 0xea98, 0xafef, 0xedc9, 0xffce, 0xedeb, 0xebee, 0xe8ef, 0x9ccf, 0x8ac8, 0xbfc8, 0x0000, 0x0039, 0x9aef, 0xade8, 0x0000, 0x00e5, 0xcefa, 0xdf89, 0x5400, 0x54ea, 0x8cef, 0x9000, 0x82ff, 0xc8ba, 0x8402, 0x6aaa, 0xf2aa, 0x6eaa, 0xdb98, 0x4000, 0x808e, 0x8edb, 0xa400, 0xaa4f, 0xf989, 0xbfee, 0xddeb, 0xabfe, 0xdddb, 0x88bc, 0xeddf, 0x889c, 0xdfff, 0x88bd, 0xdfee, 0xbe89, 0x5402, 0x552a, 0x554e, 0x5553, 0xfcb8, 0x9ace, 0xde98, 0xc8b9, 0xa401, 0xaa82, 0xaaca, 0xdd98, 0xcda8, 0xdaef, 0x9000, 0xfd57, 0xeeed, 0x8bee, 0xabed, 0x89bd, 0x8aed, 0x888a, 0x8abe, 0xac89, 0x5400, 0x554e, 0x9c8b, 0x5400, 0x7955, 0xbca8, 0x0001, 0x0001, 0x0080, 0xeba8, 0x8888, 0xeedc, 0xba88, 0xdede, 0xfeb8, 0xfece, 0xdfe9, 0xe9ad, 0xda98, 0x0000, 0x0019, 0x9dda, 0xdcb8, 0x4000, 0x0079, 0x98dc, 0x1400, 0x55ea, 0xfeb8, 0x0001, 0x00f9, 0x00bc, 0xece9, 0xdea8, 0x0001, 0x0040, 0x00e0, 0xcbd8, 0xa88a, 0xecfc, 0xfb9b, 0x8cde, 0xedbc, 0xbabe, 0xbd9f, 0xadfd, 0xef8f, 0x8ddc, 0xfdb8, 0x0001, 0x00f9, 0x00fd, 0xd8fe, 0x1000, 0x03aa, 0xceb8, 0x0000, 0x00a9, 0xefc8, 0xedb8, 0x0000, 0x00e4, 0xcd88, 0x89ab, 0xbca8, 0x0000, 0x0025, 0x999b, 0xabd8, 0x0001, 0x0039, 0x0005, 0x88ad, 0x00a8, 0x0010, 0x8888, 0x00ef, 0x0010, 0xcbef, 0x0000, 0x0240, 0xacff, 0xedec, 0x88bd, 0xab99, 0xabf8, 0x0003, 0x0025, 0x000d, 0x0003, 0x0058, 0xfe98, 0xde98, 0x0000, 0x00e4, 0xeba8, 0x1000, 0x8000, 0xbde8, 0x0000, 0x00e5, 0x9ade, 0x9be8, 0x0003, 0x0009, 0x0002, 0x00e0, 0x00c0, 0xfd98, 0x9000, 0xe400, 0x9888, 0xffbb, 0xca88, 0xffbc, 0xaeb9, 0xebea, 0xceeb, 0xefc8, 0x5401, 0x31f9, 0xa6aa, 0xffff, 0xfbff, 0x00ef, 0x0040, 0xdcef, 0x0003, 0x0240, 0x415c, 0x136b, 0x60b4, 0xdf89, 0x5400, 0x55ea, 0x8fee, 0x9bf8, 0x0000, 0x0039, 0x88cf, 0xbad8, 0x0001, 0x0009, 0x0003, 0xab98, 0x4000, 0xa000, 0xcda8, 0x0000, 0x00e4, 0xfdbb, 0xef98, 0x1000, 0x40fe, 0xe88c, 0xcdb8, 0x9000, 0xa4ca, 0xdbed, 0xeee9, 0xdfdd, 0xee8b, 0x9bee, 0xffcb, 0x888d, 0xdfce, 0x888b, 0xadef, 0x8888, 0xeddb, 0xbedf, 0xecee, 0x8bcf, 0xedcf, 0x88ba, 0xadce, 0xfbd8, 0x0000, 0x0009, 0x888d, 0x0098, 0x0030, 0x8888, 0xcccb, 0x8bfe, 0xfe98, 0x8dde, 0xcd98, 0xccee, 0xbca8, 0x4000, 0x00be, 0x8dc9, 0x9400, 0x93ff, 0xcea8, 0x0001, 0x0050, 0x0038, 0xcedd, 0x8888, 0xdefa, 0xcfd8, 0x0000, 0x01d9, 0xeadc, 0x98ce, 0xa400, 0xeaaa, 0xecb8, 0x0002, 0x0090, 0x00f4, 0x00f9, 0xd988, 0xfdb8, 0x0000, 0x00e4, 0xfde9, 0x8888, 0xdce9, 0xed98, 0x0001, 0x00f9, 0x0040, 0xd988, 0xebfe, 0xdc88, 0xd88e, 0xfeca, 0x98ee, 0xeede, 0x889b, 0xbde8, 0x88bc, 0xddcf, 0x888c, 0xbead, 0xdf89, 0x5400, 0x557a, 0xb8cd, 0xa400, 0xabaa, 0xcb98, 0x0000, 0x0090, 0xecc9, 0xa888, 0xd8fc, 0x8888, 0xfeb9, 0x8888, 0xefed, 0xec98, 0xefde, 0xefba, 0xbced, 0x5400, 0xc4d6, 0xeeff, 0x8ace, 0xdcef, 0x889b, 0x9cde, 0x8888, 0x9888, 0xeeda, 0xb988, 0xfeec, 0xfe88, 0xfaee, 0xefd8, 0xcfbe, 0xbedc, 0x8a8d, 0xfece, 0x88af, 0xdedb, 0x888a, 0xbde8, 0x9be8, 0x0000, 0x00e5, 0x8acf, 0xd9e8, 0x0001, 0x0001, 0x0002, 0xcdee, 0xe89c, 0xa400, 0xaa6b, 0xa8cd, 0xa400, 0xabaa, 0xcab8, 0x0000, 0x0090, 0xa888, 0xedca, 0x8888, 0xbefa, 0x8888, 0xabd9, 0xcb98, 0x0002, 0x0040, 0x0002, 0x001f, 0x8bee, 0x8888, 0xadfe, 0xed8a, 0x5400, 0x54f2, 0xedfb, 0x88ee, 0x889d, 0x00b8, 0x1010, 0x8888, 0xfcde, 0x889c, 0xbcfe, 0xae89, 0x5400, 0x555e, 0xec8b, 0x5400, 0xb955, 0x9eec, 0xed88, 0xcefe, 0xe988, 0xefee, 0xb888, 0xdceb, 0xecb8, 0x0000, 0x00e5, 0xee98, 0xbdc8, 0x0001, 0x0090, 0x00c0, 0xad98, 0x5000, 0x9000, 0x8888, 0xfba8, 0x9888, 0xeefd, 0xac98, 0x0000, 0x30a9, 0xbeda, 0xeea8, 0xfbb8, 0xefd9, 0xcdba, 0xeefd, 0x9ced, 0xceee, 0x89ba, 0xb89e, 0x4000, 0xb0aa, 0x8888, 0xceed, 0x8889, 0x8bfa, 0xc9e8, 0x0001, 0x0009, 0x0003, 0xa888, 0xec98, 0x0002, 0x00e4, 0x0040, 0x0080, 0xf988, 0xed98, 0x0000, 0x00e4, 0xeef8, 0xecb8, 0x4000, 0x50fe, 0xeeea, 0xadb8, 0xccde, 0x9edc, 0xbfec, 0xcdee, 0x8bed, 0xcfee, 0x88bb, 0xdccf, 0xcb8a, 0x5400, 0x9555, 0xdec8, 0x0000, 0x0090, 0xefdc, 0xc888, 0xebee, 0xcb98, 0xeeee, 0xcab8, 0xeffe, 0xedbb, 0x8bee, 0xeced, 0x89bf, 0xccde, 0xaaee, 0xecab, 0x89de, 0xcee8, 0x888c, 0xbdfd, 0x9cb8, 0x0000, 0x0039, 0x888c, 0x0098, 0x0010, 0x8888, 0x0000, 0x0000
};

// [D_08CD088C] D_08CD0A10 Huffman Window 1
u32 D_08cd0a10_window1[] = {
	0xa0015710, 0x01c440d9, 0x40e80300, 0x0000e520, 0x60007700, 0x0100063f, 0xca281811, 0xe0000178, 0xc008ac47, 0x31950040, 0x02d84000, 0xad7bf200, 0x07e01f00, 0x03417c62, 0x95531600, 0xe4000154, 0x07c70e00, 0x02579380, 0x8019a000, 0x0e031885, 0x0320aa00, 0x9b68f980, 0xa0001816, 0x40e05000, 0xd4002007, 0xe0244007, 0xb800ba00, 0x20374354, 0x800015d7, 0x01168e02, 0x000801c0, 0x4440ea00, 0x4010d018, 0x003002a8, 0x00000500
};

// [D_08CD0918] D_08CD0A10 Huffman Window 2
u32 D_08cd0a10_window2[] = {
	0xeffffeff, 0xfdfeffff, 0xff7f5ff3, 0xefffcaf7, 0x7ff7fff5, 0xff7fffff, 0xfffbcfff, 0xe7ffffff, 0xffff7fdf, 0x0003fff7
};

// [D_08CD0940] D_08CD0A10 Huffman
struct Huffman D_08cd0a10_huffman[] = {
	/* Data */			D_08cd0a10_huffmandata,
	/* Size */			0x7c6,
	/* Count */			0x44d,
	/* Window 1 */		D_08cd0a10_window1,
	/* Window 2 */		D_08cd0a10_window2,
};

// [D_08CD0950] D_08CD0A10 RLE Data
u8 D_08cd0a10_rledata[] = {
	0x1, 0xf, 0x10, 0x13, 0x27, 0x7, 0x10, 0x3, 0x16, 0x7, 0x6, 0xa, 0x6, 0x9, 0x29, 0x4, 0x2, 0x6, 0x1b, 0x6, 0xe, 0x14, 0x8, 0xf, 0x2, 0x5, 0x1b, 0x7, 0x8, 0xa, 0xb, 0xb, 0x1d, 0x3, 0xc, 0x4, 0x7, 0x12, 0x33, 0x4, 0xa, 0x6, 0x2, 0xf, 0x16, 0x9, 0x10, 0x3, 0x29, 0x4, 0x2, 0x4, 0x20, 0x15, 0x6, 0x6, 0x1e, 0x8, 0x33, 0xf, 0x4b, 0xf, 0x11, 0x4, 0x9, 0x6, 0x4, 0xa, 0x11, 0xf, 0x1d, 0x8, 0x21, 0xd, 0x2, 0x5, 0xc, 0x5, 0x22, 0x4, 0x15, 0x6, 0x7, 0xf, 0x19, 0xd, 0x12, 0xb, 0x19, 0x7, 0x8, 0x9, 0x4, 0x15, 0x7, 0x7, 0x8, 0x9, 0x1f, 0x15, 0x1d, 0x6, 0x2d, 0x3, 0x16, 0x11, 0x2b, 0x11, 0x1d, 0x4, 0xd, 0xc, 0x14, 0x8, 0x22, 0x5, 0x26, 0xa, 0x6, 0x11, 0xa, 0xa, 0xa, 0xc, 0x15, 0xa, 0x11, 0x8, 0x1e, 0x9, 0x8, 0x8, 0x6, 0xb, 0x10, 0x8, 0x17, 0x4, 0x28, 0x5, 0x22, 0x1b, 0x2, 0x3, 0x1e, 0xc, 0x1d, 0x6, 0x6, 0x17, 0x17, 0x11, 0x57, 0x4, 0x6, 0xb, 0xa, 0x5, 0x8, 0x17, 0x2f, 0x9, 0x38, 0x7, 0xb, 0x8, 0x8, 0x6, 0xc, 0xd, 0x14, 0x17, 0x2d, 0x8, 0x8, 0x8, 0x2, 0xe, 0x9, 0xb, 0x12, 0xa, 0x8, 0x8, 0x11, 0x8, 0x1f, 0x15, 0x4, 0x8, 0x38, 0x7f
};

// [D_08CD0A10] D_08CD0A10 Graphics
struct CompressedGraphics D_08cd0a10 = {
	/* Huffman Data */		D_08cd0a10_huffman,
	/* RLE Data */			D_08cd0a10_rledata,
	/* RLE Size */			0xc0,
	/* RLE Offset */		0xc00,
	/* Double Compressed */	TRUE,
};
