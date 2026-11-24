/*-
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 2007-2013 Bruce D. Evans
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice unmodified, this list of conditions, and the following
 *    disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* Adapted from FreeBSD lib/msun/ld128/s_logl.c at c9991e01149b5cd5a6710d70921b203ef7f16fc2. */
#include <float.h>
#include <math.h>
#include <stdint.h>

#include "math_binary128.h"
#include "math_error.h"

static_assert(sizeof(long double) == 16 && LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384);

union binary128
{
	long double value;
	uint64_t words[2];
};

static const uint64_t fraction_mask = UINT64_C(0x0000ffffffffffff);

/*
 * Domain [-0.005280, 0.004838], range ~[-1.1577e-37, 1.1582e-37]:
 * |log(1 + d)/d - p(d)| < 2**-122.7
 */
static const long double P2 = -0.5L,
						 P3 = 3.33333333333333333333333333333233795e-1L, /*  0x15555555555555555555555554d42.0p-114L */
	P4 = -2.49999999999999999999999999941139296e-1L,                     /* -0x1ffffffffffffffffffffffdab14e.0p-115L */
	P5 = 2.00000000000000000000000085468039943e-1L,                      /*  0x19999999999999999999a6d3567f4.0p-115L */
	P6 = -1.66666666666666666666696142372698408e-1L,                     /* -0x15555555555555555567267a58e13.0p-115L */
	P7 = 1.42857142857142857119522943477166120e-1L,                      /*  0x1249249249249248ed79a0ae434de.0p-115L */
	P8 = -1.24999999999999994863289015033581301e-1L;                     /* -0x1fffffffffffffa13e91765e46140.0p-116L */
/* Double precision gives ~ 53 + log2(P9 * max(|d|)**8) ~= 120 bits. */
static const double P9 = 1.1111111111111401e-1, /*  0x1c71c71c71c7ed.0p-56 */
	P10 = -1.0000000000040135e-1,               /* -0x199999999a0a92.0p-56 */
	P11 = 9.0909090728136258e-2,                /*  0x1745d173962111.0p-56 */
	P12 = -8.3333318851855284e-2,               /* -0x1555551722c7a3.0p-56 */
	P13 = 7.6928634666404178e-2,                /*  0x13b1985204a4ae.0p-56 */
	P14 = -7.1626810078462499e-2;               /* -0x12562276cdc5d0.0p-56 */

#define INTERVALS 128
#define LOG2_INTERVALS 7
#define L2I (49 - LOG2_INTERVALS)
#define TSIZE (INTERVALS + 1)
#define G(i) (T[(i)].G)
#define F_hi(i) (T[(i)].F_hi)
#define F_lo(i) (T[(i)].F_lo)
#define ln2_hi F_hi(TSIZE - 1)
#define ln2_lo F_lo(TSIZE - 1)
#define E(i) (U[(i)].E)
#define H(i) (U[(i)].H)

static const struct
{
	float G;    /* 1/(1 + i/128) rounded to 8/9 bits */
	float F_hi; /* log(1 / G_i) rounded (see below) */
	/* The compiler will insert 8 bytes of padding here. */
	long double F_lo; /* next 113 bits for log(1 / G_i) */
} T[TSIZE] = {
	/*
	 * ln2_hi and each F_hi(i) are rounded to a number of bits that
	 * makes F_hi(i) + dk*ln2_hi exact for all i and all dk.
	 *
	 * The last entry (for X just below 2) is used to define ln2_hi
	 * and ln2_lo, to ensure that F_hi(i) and F_lo(i) cancel exactly
	 * with dk*ln2_hi and dk*ln2_lo, respectively, when dk = -1.
	 * This is needed for accuracy when x is just below 1.  (To avoid
	 * special cases, such x are "reduced" strangely to X just below
	 * 2 and dk = -1, and then the exact cancellation is needed
	 * because any the error from any non-exactness would be too
	 * large).
	 *
	 * The relevant range of dk is [-16445, 16383].  The maximum number
	 * of bits in F_hi(i) that works is very dependent on i but has
	 * a minimum of 93.  We only need about 12 bits in F_hi(i) for
	 * it to provide enough extra precision.
	 *
	 * We round F_hi(i) to 24 bits so that it can have type float,
	 * mainly to minimize the size of the table.  Using all 24 bits
	 * in a float for it automatically satisfies the above constraints.
	 */
	0x800000.0p-23,
	0,
	0,
	0xfe0000.0p-24,
	0x8080ac.0p-30,
	-0x14ee431dae6674afa0c4bfe16e8fd.0p-144L,
	0xfc0000.0p-24,
	0x8102b3.0p-29,
	-0x1db29ee2d83717be918e1119642ab.0p-144L,
	0xfa0000.0p-24,
	0xc24929.0p-29,
	0x1191957d173697cf302cc9476f561.0p-143L,
	0xf80000.0p-24,
	0x820aec.0p-28,
	0x13ce8888e02e78eba9b1113bc1c18.0p-142L,
	0xf60000.0p-24,
	0xa33577.0p-28,
	-0x17a4382ce6eb7bfa509bec8da5f22.0p-142L,
	0xf48000.0p-24,
	0xbc42cb.0p-28,
	-0x172a21161a107674986dcdca6709c.0p-143L,
	0xf30000.0p-24,
	0xd57797.0p-28,
	-0x1e09de07cb958897a3ea46e84abb3.0p-142L,
	0xf10000.0p-24,
	0xf7518e.0p-28,
	0x1ae1eec1b036c484993c549c4bf40.0p-151L,
	0xef0000.0p-24,
	0x8cb9df.0p-27,
	-0x1d7355325d560d9e9ab3d6ebab580.0p-141L,
	0xed8000.0p-24,
	0x999ec0.0p-27,
	-0x1f9f02d256d5037108f4ec21e48cd.0p-142L,
	0xec0000.0p-24,
	0xa6988b.0p-27,
	-0x16fc0a9d12c17a70f7a684c596b12.0p-143L,
	0xea0000.0p-24,
	0xb80698.0p-27,
	0x15d581c1e8da99ded322fb08b8462.0p-141L,
	0xe80000.0p-24,
	0xc99af3.0p-27,
	-0x1535b3ba8f150ae09996d7bb4653e.0p-143L,
	0xe70000.0p-24,
	0xd273b2.0p-27,
	0x163786f5251aefe0ded34c8318f52.0p-145L,
	0xe50000.0p-24,
	0xe442c0.0p-27,
	0x1bc4b2368e32d56699c1799a244d4.0p-144L,
	0xe38000.0p-24,
	0xf1b83f.0p-27,
	0x1c6090f684e6766abceccab1d7174.0p-141L,
	0xe20000.0p-24,
	0xff448a.0p-27,
	-0x1890aa69ac9f4215f93936b709efb.0p-142L,
	0xe08000.0p-24,
	0x8673f6.0p-26,
	0x1b9985194b6affd511b534b72a28e.0p-140L,
	0xdf0000.0p-24,
	0x8d515c.0p-26,
	-0x1dc08d61c6ef1d9b2ef7e68680598.0p-143L,
	0xdd8000.0p-24,
	0x943a9e.0p-26,
	-0x1f72a2dac729b3f46662238a9425a.0p-142L,
	0xdc0000.0p-24,
	0x9b2fe6.0p-26,
	-0x1fd4dfd3a0afb9691aed4d5e3df94.0p-140L,
	0xda8000.0p-24,
	0xa2315d.0p-26,
	-0x11b26121629c46c186384993e1c93.0p-142L,
	0xd90000.0p-24,
	0xa93f2f.0p-26,
	0x1286d633e8e5697dc6a402a56fce1.0p-141L,
	0xd78000.0p-24,
	0xb05988.0p-26,
	0x16128eba9367707ebfa540e45350c.0p-144L,
	0xd60000.0p-24,
	0xb78094.0p-26,
	0x16ead577390d31ef0f4c9d43f79b2.0p-140L,
	0xd50000.0p-24,
	0xbc4c6c.0p-26,
	0x151131ccf7c7b75e7d900b521c48d.0p-141L,
	0xd38000.0p-24,
	0xc3890a.0p-26,
	-0x115e2cd714bd06508aeb00d2ae3e9.0p-140L,
	0xd20000.0p-24,
	0xcad2d7.0p-26,
	-0x1847f406ebd3af80485c2f409633c.0p-142L,
	0xd10000.0p-24,
	0xcfb620.0p-26,
	0x1c2259904d686581799fbce0b5f19.0p-141L,
	0xcf8000.0p-24,
	0xd71653.0p-26,
	0x1ece57a8d5ae54f550444ecf8b995.0p-140L,
	0xce0000.0p-24,
	0xde843a.0p-26,
	-0x1f109d4bc4595412b5d2517aaac13.0p-141L,
	0xcd0000.0p-24,
	0xe37fde.0p-26,
	0x1bc03dc271a74d3a85b5b43c0e727.0p-141L,
	0xcb8000.0p-24,
	0xeb050c.0p-26,
	-0x1bf2badc0df841a71b79dd5645b46.0p-145L,
	0xca0000.0p-24,
	0xf29878.0p-26,
	-0x18efededd89fbe0bcfbe6d6db9f66.0p-147L,
	0xc90000.0p-24,
	0xf7ad6f.0p-26,
	0x1373ff977baa6911c7bafcb4d84fb.0p-141L,
	0xc80000.0p-24,
	0xfcc8e3.0p-26,
	0x196766f2fb328337cc050c6d83b22.0p-140L,
	0xc68000.0p-24,
	0x823f30.0p-25,
	0x19bd076f7c434e5fcf1a212e2a91e.0p-139L,
	0xc58000.0p-24,
	0x84d52c.0p-25,
	-0x1a327257af0f465e5ecab5f2a6f81.0p-139L,
	0xc40000.0p-24,
	0x88bc74.0p-25,
	0x113f23def19c5a0fe396f40f1dda9.0p-141L,
	0xc30000.0p-24,
	0x8b5ae6.0p-25,
	0x1759f6e6b37de945a049a962e66c6.0p-139L,
	0xc20000.0p-24,
	0x8dfccb.0p-25,
	0x1ad35ca6ed5147bdb6ddcaf59c425.0p-141L,
	0xc10000.0p-24,
	0x90a22b.0p-25,
	0x1a1d71a87deba46bae9827221dc98.0p-139L,
	0xbf8000.0p-24,
	0x94a0d8.0p-25,
	-0x139e5210c2b730e28aba001a9b5e0.0p-140L,
	0xbe8000.0p-24,
	0x974f16.0p-25,
	-0x18f6ebcff3ed72e23e13431adc4a5.0p-141L,
	0xbd8000.0p-24,
	0x9a00f1.0p-25,
	-0x1aa268be39aab7148e8d80caa10b7.0p-139L,
	0xbc8000.0p-24,
	0x9cb672.0p-25,
	-0x14c8815839c5663663d15faed7771.0p-139L,
	0xbb0000.0p-24,
	0xa0cda1.0p-25,
	0x1eaf46390dbb2438273918db7df5c.0p-141L,
	0xba0000.0p-24,
	0xa38c6e.0p-25,
	0x138e20d831f698298adddd7f32686.0p-141L,
	0xb90000.0p-24,
	0xa64f05.0p-25,
	-0x1e8d3c41123615b147a5d47bc208f.0p-142L,
	0xb80000.0p-24,
	0xa91570.0p-25,
	0x1ce28f5f3840b263acb4351104631.0p-140L,
	0xb70000.0p-24,
	0xabdfbb.0p-25,
	-0x186e5c0a42423457e22d8c650b355.0p-139L,
	0xb60000.0p-24,
	0xaeadef.0p-25,
	-0x14d41a0b2a08a465dc513b13f567d.0p-143L,
	0xb50000.0p-24,
	0xb18018.0p-25,
	0x16755892770633947ffe651e7352f.0p-139L,
	0xb40000.0p-24,
	0xb45642.0p-25,
	-0x16395ebe59b15228bfe8798d10ff0.0p-142L,
	0xb30000.0p-24,
	0xb73077.0p-25,
	0x1abc65c8595f088b61a335f5b688c.0p-140L,
	0xb20000.0p-24,
	0xba0ec4.0p-25,
	-0x1273089d3dad88e7d353e9967d548.0p-139L,
	0xb10000.0p-24,
	0xbcf133.0p-25,
	0x10f9f67b1f4bbf45de06ecebfaf6d.0p-139L,
	0xb00000.0p-24,
	0xbfd7d2.0p-25,
	-0x109fab904864092b34edda19a831e.0p-140L,
	0xaf0000.0p-24,
	0xc2c2ac.0p-25,
	-0x1124680aa43333221d8a9b475a6ba.0p-139L,
	0xae8000.0p-24,
	0xc439b3.0p-25,
	-0x1f360cc4710fbfe24b633f4e8d84d.0p-140L,
	0xad8000.0p-24,
	0xc72afd.0p-25,
	-0x132d91f21d89c89c45003fc5d7807.0p-140L,
	0xac8000.0p-24,
	0xca20a2.0p-25,
	-0x16bf9b4d1f8da8002f2449e174504.0p-139L,
	0xab8000.0p-24,
	0xcd1aae.0p-25,
	0x19deb5ce6a6a8717d5626e16acc7d.0p-141L,
	0xaa8000.0p-24,
	0xd0192f.0p-25,
	0x1a29fb48f7d3ca87dabf351aa41f4.0p-139L,
	0xaa0000.0p-24,
	0xd19a20.0p-25,
	0x1127d3c6457f9d79f51dcc73014c9.0p-141L,
	0xa90000.0p-24,
	0xd49f6a.0p-25,
	-0x1ba930e486a0ac42d1bf9199188e7.0p-141L,
	0xa80000.0p-24,
	0xd7a94b.0p-25,
	-0x1b6e645f31549dd1160bcc45c7e2c.0p-139L,
	0xa70000.0p-24,
	0xdab7d0.0p-25,
	0x1118a425494b610665377f15625b6.0p-140L,
	0xa68000.0p-24,
	0xdc40d5.0p-25,
	0x1966f24d29d3a2d1b2176010478be.0p-140L,
	0xa58000.0p-24,
	0xdf566d.0p-25,
	-0x1d8e52eb2248f0c95dd83626d7333.0p-142L,
	0xa48000.0p-24,
	0xe270ce.0p-25,
	-0x1ee370f96e6b67ccb006a5b9890ea.0p-140L,
	0xa40000.0p-24,
	0xe3ffce.0p-25,
	0x1d155324911f56db28da4d629d00a.0p-140L,
	0xa30000.0p-24,
	0xe72179.0p-25,
	-0x1fe6e2f2f867d8f4d60c713346641.0p-140L,
	0xa20000.0p-24,
	0xea4812.0p-25,
	0x1b7be9add7f4d3b3d406b6cbf3ce5.0p-140L,
	0xa18000.0p-24,
	0xebdd3d.0p-25,
	0x1b3cfb3f7511dd73692609040ccc2.0p-139L,
	0xa08000.0p-24,
	0xef0b5b.0p-25,
	-0x1220de1f7301901b8ad85c25afd09.0p-139L,
	0xa00000.0p-24,
	0xf0a451.0p-25,
	-0x176364c9ac81cc8a4dfb804de6867.0p-140L,
	0x9f0000.0p-24,
	0xf3da16.0p-25,
	0x1eed6b9aafac8d42f78d3e65d3727.0p-141L,
	0x9e8000.0p-24,
	0xf576e9.0p-25,
	0x1d593218675af269647b783d88999.0p-139L,
	0x9d8000.0p-24,
	0xf8b47c.0p-25,
	-0x13e8eb7da053e063714615f7cc91d.0p-144L,
	0x9d0000.0p-24,
	0xfa553f.0p-25,
	0x1c063259bcade02951686d5373aec.0p-139L,
	0x9c0000.0p-24,
	0xfd9ac5.0p-25,
	0x1ef491085fa3c1649349630531502.0p-139L,
	0x9b8000.0p-24,
	0xff3f8c.0p-25,
	0x1d607a7c2b8c5320619fb9433d841.0p-139L,
	0x9a8000.0p-24,
	0x814697.0p-24,
	-0x12ad3817004f3f0bdff99f932b273.0p-138L,
	0x9a0000.0p-24,
	0x821b06.0p-24,
	-0x189fc53117f9e54e78103a2bc1767.0p-141L,
	0x990000.0p-24,
	0x83c5f8.0p-24,
	0x14cf15a048907b7d7f47ddb45c5a3.0p-139L,
	0x988000.0p-24,
	0x849c7d.0p-24,
	0x1cbb1d35fb82873b04a9af1dd692c.0p-138L,
	0x978000.0p-24,
	0x864ba6.0p-24,
	0x1128639b814f9b9770d8cb6573540.0p-138L,
	0x970000.0p-24,
	0x87244c.0p-24,
	0x184733853300f002e836dfd47bd41.0p-139L,
	0x968000.0p-24,
	0x87fdaa.0p-24,
	0x109d23aef77dd5cd7cc94306fb3ff.0p-140L,
	0x958000.0p-24,
	0x89b293.0p-24,
	-0x1a81ef367a59de2b41eeebd550702.0p-138L,
	0x950000.0p-24,
	0x8a8e20.0p-24,
	-0x121ad3dbb2f45275c917a30df4ac9.0p-138L,
	0x948000.0p-24,
	0x8b6a6a.0p-24,
	-0x1cfb981628af71a89df4e6df2e93b.0p-139L,
	0x938000.0p-24,
	0x8d253a.0p-24,
	-0x1d21730ea76cfdec367828734cae5.0p-139L,
	0x930000.0p-24,
	0x8e03c2.0p-24,
	0x135cc00e566f76b87333891e0dec4.0p-138L,
	0x928000.0p-24,
	0x8ee30d.0p-24,
	-0x10fcb5df257a263e3bf446c6e3f69.0p-140L,
	0x918000.0p-24,
	0x90a3ee.0p-24,
	-0x16e171b15433d723a4c7380a448d8.0p-139L,
	0x910000.0p-24,
	0x918587.0p-24,
	-0x1d050da07f3236f330972da2a7a87.0p-139L,
	0x908000.0p-24,
	0x9267e7.0p-24,
	0x1be03669a5268d21148c6002becd3.0p-139L,
	0x8f8000.0p-24,
	0x942f04.0p-24,
	0x10b28e0e26c336af90e00533323ba.0p-139L,
	0x8f0000.0p-24,
	0x9513c3.0p-24,
	0x1a1d820da57cf2f105a89060046aa.0p-138L,
	0x8e8000.0p-24,
	0x95f950.0p-24,
	-0x19ef8f13ae3cf162409d8ea99d4c0.0p-139L,
	0x8e0000.0p-24,
	0x96dfab.0p-24,
	-0x109e417a6e507b9dc10dac743ad7a.0p-138L,
	0x8d0000.0p-24,
	0x98aed2.0p-24,
	0x10d01a2c5b0e97c4990b23d9ac1f5.0p-139L,
	0x8c8000.0p-24,
	0x9997a2.0p-24,
	-0x1d6a50d4b61ea74540bdd2aa99a42.0p-138L,
	0x8c0000.0p-24,
	0x9a8145.0p-24,
	0x1b3b190b83f9527e6aba8f2d783c1.0p-138L,
	0x8b8000.0p-24,
	0x9b6bbf.0p-24,
	0x13a69fad7e7abe7ba81c664c107e0.0p-138L,
	0x8b0000.0p-24,
	0x9c5711.0p-24,
	-0x11cd12316f576aad348ae79867223.0p-138L,
	0x8a8000.0p-24,
	0x9d433b.0p-24,
	0x1c95c444b807a246726b304ccae56.0p-139L,
	0x898000.0p-24,
	0x9f1e22.0p-24,
	-0x1b9c224ea698c2f9b47466d6123fe.0p-139L,
	0x890000.0p-24,
	0xa00ce1.0p-24,
	0x125ca93186cf0f38b4619a2483399.0p-141L,
	0x888000.0p-24,
	0xa0fc80.0p-24,
	-0x1ee38a7bc228b3597043be78eaf49.0p-139L,
	0x880000.0p-24,
	0xa1ed00.0p-24,
	-0x1a0db876613d204147dc69a07a649.0p-138L,
	0x878000.0p-24,
	0xa2de62.0p-24,
	0x193224e8516c008d3602a7b41c6e8.0p-139L,
	0x870000.0p-24,
	0xa3d0a9.0p-24,
	0x1fa28b4d2541aca7d5844606b2421.0p-139L,
	0x868000.0p-24,
	0xa4c3d6.0p-24,
	0x1c1b5760fb4571acbcfb03f16daf4.0p-138L,
	0x858000.0p-24,
	0xa6acea.0p-24,
	0x1fed5d0f65949c0a345ad743ae1ae.0p-140L,
	0x850000.0p-24,
	0xa7a2d4.0p-24,
	0x1ad270c9d749362382a7688479e24.0p-140L,
	0x848000.0p-24,
	0xa899ab.0p-24,
	0x199ff15ce532661ea9643a3a2d378.0p-139L,
	0x840000.0p-24,
	0xa99171.0p-24,
	0x1a19e15ccc45d257530a682b80490.0p-139L,
	0x838000.0p-24,
	0xaa8a28.0p-24,
	-0x121a14ec532b35ba3e1f868fd0b5e.0p-140L,
	0x830000.0p-24,
	0xab83d1.0p-24,
	0x1aee319980bff3303dd481779df69.0p-139L,
	0x828000.0p-24,
	0xac7e6f.0p-24,
	-0x18ffd9e3900345a85d2d86161742e.0p-140L,
	0x820000.0p-24,
	0xad7a03.0p-24,
	-0x1e4db102ce29f79b026b64b42caa1.0p-140L,
	0x818000.0p-24,
	0xae768f.0p-24,
	0x17c35c55a04a82ab19f77652d977a.0p-141L,
	0x810000.0p-24,
	0xaf7415.0p-24,
	0x1448324047019b48d7b98c1cf7234.0p-138L,
	0x808000.0p-24,
	0xb07298.0p-24,
	-0x1750ee3915a197e9c7359dd94152f.0p-138L,
	0x800000.0p-24,
	0xb17218.0p-24,
	-0x105c610ca86c3898cff81a12a17e2.0p-141L,
};

static const struct
{
	float H; /* 1 + i/INTERVALS (exact) */
	float E; /* H(i) * G(i) - 1 (exact) */
} U[TSIZE] = {
	0x800000.0p-23,
	0,
	0x810000.0p-23,
	-0x800000.0p-37,
	0x820000.0p-23,
	-0x800000.0p-35,
	0x830000.0p-23,
	-0x900000.0p-34,
	0x840000.0p-23,
	-0x800000.0p-33,
	0x850000.0p-23,
	-0xc80000.0p-33,
	0x860000.0p-23,
	-0xa00000.0p-36,
	0x870000.0p-23,
	0x940000.0p-33,
	0x880000.0p-23,
	0x800000.0p-35,
	0x890000.0p-23,
	-0xc80000.0p-34,
	0x8a0000.0p-23,
	0xe00000.0p-36,
	0x8b0000.0p-23,
	0x900000.0p-33,
	0x8c0000.0p-23,
	-0x800000.0p-35,
	0x8d0000.0p-23,
	-0xe00000.0p-33,
	0x8e0000.0p-23,
	0x880000.0p-33,
	0x8f0000.0p-23,
	-0xa80000.0p-34,
	0x900000.0p-23,
	-0x800000.0p-35,
	0x910000.0p-23,
	0x800000.0p-37,
	0x920000.0p-23,
	0x900000.0p-35,
	0x930000.0p-23,
	0xd00000.0p-35,
	0x940000.0p-23,
	0xe00000.0p-35,
	0x950000.0p-23,
	0xc00000.0p-35,
	0x960000.0p-23,
	0xe00000.0p-36,
	0x970000.0p-23,
	-0x800000.0p-38,
	0x980000.0p-23,
	-0xc00000.0p-35,
	0x990000.0p-23,
	-0xd00000.0p-34,
	0x9a0000.0p-23,
	0x880000.0p-33,
	0x9b0000.0p-23,
	0xe80000.0p-35,
	0x9c0000.0p-23,
	-0x800000.0p-35,
	0x9d0000.0p-23,
	0xb40000.0p-33,
	0x9e0000.0p-23,
	0x880000.0p-34,
	0x9f0000.0p-23,
	-0xe00000.0p-35,
	0xa00000.0p-23,
	0x800000.0p-33,
	0xa10000.0p-23,
	-0x900000.0p-36,
	0xa20000.0p-23,
	-0xb00000.0p-33,
	0xa30000.0p-23,
	-0xa00000.0p-36,
	0xa40000.0p-23,
	0x800000.0p-33,
	0xa50000.0p-23,
	-0xf80000.0p-35,
	0xa60000.0p-23,
	0x880000.0p-34,
	0xa70000.0p-23,
	-0x900000.0p-33,
	0xa80000.0p-23,
	-0x800000.0p-35,
	0xa90000.0p-23,
	0x900000.0p-34,
	0xaa0000.0p-23,
	0xa80000.0p-33,
	0xab0000.0p-23,
	-0xac0000.0p-34,
	0xac0000.0p-23,
	-0x800000.0p-37,
	0xad0000.0p-23,
	0xf80000.0p-35,
	0xae0000.0p-23,
	0xf80000.0p-34,
	0xaf0000.0p-23,
	-0xac0000.0p-33,
	0xb00000.0p-23,
	-0x800000.0p-33,
	0xb10000.0p-23,
	-0xb80000.0p-34,
	0xb20000.0p-23,
	-0x800000.0p-34,
	0xb30000.0p-23,
	-0xb00000.0p-35,
	0xb40000.0p-23,
	-0x800000.0p-35,
	0xb50000.0p-23,
	-0xe00000.0p-36,
	0xb60000.0p-23,
	-0x800000.0p-35,
	0xb70000.0p-23,
	-0xb00000.0p-35,
	0xb80000.0p-23,
	-0x800000.0p-34,
	0xb90000.0p-23,
	-0xb80000.0p-34,
	0xba0000.0p-23,
	-0x800000.0p-33,
	0xbb0000.0p-23,
	-0xac0000.0p-33,
	0xbc0000.0p-23,
	0x980000.0p-33,
	0xbd0000.0p-23,
	0xbc0000.0p-34,
	0xbe0000.0p-23,
	0xe00000.0p-36,
	0xbf0000.0p-23,
	-0xb80000.0p-35,
	0xc00000.0p-23,
	-0x800000.0p-33,
	0xc10000.0p-23,
	0xa80000.0p-33,
	0xc20000.0p-23,
	0x900000.0p-34,
	0xc30000.0p-23,
	-0x800000.0p-35,
	0xc40000.0p-23,
	-0x900000.0p-33,
	0xc50000.0p-23,
	0x820000.0p-33,
	0xc60000.0p-23,
	0x800000.0p-38,
	0xc70000.0p-23,
	-0x820000.0p-33,
	0xc80000.0p-23,
	0x800000.0p-33,
	0xc90000.0p-23,
	-0xa00000.0p-36,
	0xca0000.0p-23,
	-0xb00000.0p-33,
	0xcb0000.0p-23,
	0x840000.0p-34,
	0xcc0000.0p-23,
	-0xd00000.0p-34,
	0xcd0000.0p-23,
	0x800000.0p-33,
	0xce0000.0p-23,
	-0xe00000.0p-35,
	0xcf0000.0p-23,
	0xa60000.0p-33,
	0xd00000.0p-23,
	-0x800000.0p-35,
	0xd10000.0p-23,
	0xb40000.0p-33,
	0xd20000.0p-23,
	-0x800000.0p-35,
	0xd30000.0p-23,
	0xaa0000.0p-33,
	0xd40000.0p-23,
	-0xe00000.0p-35,
	0xd50000.0p-23,
	0x880000.0p-33,
	0xd60000.0p-23,
	-0xd00000.0p-34,
	0xd70000.0p-23,
	0x9c0000.0p-34,
	0xd80000.0p-23,
	-0xb00000.0p-33,
	0xd90000.0p-23,
	-0x800000.0p-38,
	0xda0000.0p-23,
	0xa40000.0p-33,
	0xdb0000.0p-23,
	-0xdc0000.0p-34,
	0xdc0000.0p-23,
	0xc00000.0p-35,
	0xdd0000.0p-23,
	0xca0000.0p-33,
	0xde0000.0p-23,
	-0xb80000.0p-34,
	0xdf0000.0p-23,
	0xd00000.0p-35,
	0xe00000.0p-23,
	0xc00000.0p-33,
	0xe10000.0p-23,
	-0xf40000.0p-34,
	0xe20000.0p-23,
	0x800000.0p-37,
	0xe30000.0p-23,
	0x860000.0p-33,
	0xe40000.0p-23,
	-0xc80000.0p-33,
	0xe50000.0p-23,
	-0xa80000.0p-34,
	0xe60000.0p-23,
	0xe00000.0p-36,
	0xe70000.0p-23,
	0x880000.0p-33,
	0xe80000.0p-23,
	-0xe00000.0p-33,
	0xe90000.0p-23,
	-0xfc0000.0p-34,
	0xea0000.0p-23,
	-0x800000.0p-35,
	0xeb0000.0p-23,
	0xe80000.0p-35,
	0xec0000.0p-23,
	0x900000.0p-33,
	0xed0000.0p-23,
	0xe20000.0p-33,
	0xee0000.0p-23,
	-0xac0000.0p-33,
	0xef0000.0p-23,
	-0xc80000.0p-34,
	0xf00000.0p-23,
	-0x800000.0p-35,
	0xf10000.0p-23,
	0x800000.0p-35,
	0xf20000.0p-23,
	0xb80000.0p-34,
	0xf30000.0p-23,
	0x940000.0p-33,
	0xf40000.0p-23,
	0xc80000.0p-33,
	0xf50000.0p-23,
	-0xf20000.0p-33,
	0xf60000.0p-23,
	-0xc80000.0p-33,
	0xf70000.0p-23,
	-0xa20000.0p-33,
	0xf80000.0p-23,
	-0x800000.0p-33,
	0xf90000.0p-23,
	-0xc40000.0p-34,
	0xfa0000.0p-23,
	-0x900000.0p-34,
	0xfb0000.0p-23,
	-0xc80000.0p-35,
	0xfc0000.0p-23,
	-0x800000.0p-35,
	0xfd0000.0p-23,
	-0x900000.0p-36,
	0xfe0000.0p-23,
	-0x800000.0p-37,
	0xff0000.0p-23,
	-0x800000.0p-39,
	0x800000.0p-22,
	0,
};

struct log_scale
{
	double high;
	long double low;
	long double full;
};

// The leading factors have few enough bits to multiply a float exactly.
#define LOG2_HIGH 0x17154765000000p-52
#define LOG2_LOW 0x15c17f0bbbe87fed0691d3e88eb57p-143L
#define LOG10_HIGH 0x1bcb7b15000000p-54
#define LOG10_LOW 0x137287195355baaafad33dc323ee3p-145L

static const struct log_scale scale2 = { LOG2_HIGH, LOG2_LOW, LOG2_HIGH + LOG2_LOW };
static const struct log_scale scale10 = { LOG10_HIGH, LOG10_LOW, LOG10_HIGH + LOG10_LOW };

// The natural logarithm rounds back to x below 2^-113.
enum
{
	SMALL_ARGUMENT_EXPONENT = 0x3f8d
};

struct log_reduction
{
	long double delta;
	long double residual;
	double shift;
	unsigned index;
};

static inline struct log_reduction reduce_log_argument(union binary128 reduced, long double low, int subnormal_shift)
{
	const unsigned exponent = reduced.words[1] >> 48;
	const double shift = (int)exponent - 16383 - subnormal_shift;
	const uint64_t fraction = reduced.words[1] & fraction_mask;
	reduced.words[1] = fraction | (UINT64_C(0x3fff) << 48);
	const union binary128 exponent_scale = { .words = { 0, (uint64_t)(0x7ffe - exponent) << 48 } };
	low *= exponent_scale.value;

	const unsigned i = (fraction + (UINT64_C(1) << (L2I - 2))) >> (L2I - 1);
	const long double d_high = (reduced.value - H(i)) * G(i) + E(i);
	// Keep the residual in binary128. At table index zero it can carry
	// the entire argument, so narrowing it would lose significant bits.
	const long double d_low = low * G(i);
	const long double d = d_high + d_low;
	return (struct log_reduction){ d, d_low + (d_high - d), shift, i };
}

static inline long double evaluate_log(struct log_reduction base, const struct log_scale* scale)
{
	const long double d = base.delta;
	const long double d_low = base.residual;
	const unsigned i = base.index;
	const double shift = base.shift;
	const double dd = (double)d;
	const long double tail = d * d * d *
			(P3 +
				d *
					(P4 +
						d *
							(P5 +
								d *
									(P6 +
										d *
											(P7 +
												d *
													(P8 +
														dd *
															(P9 +
																dd *
																	(P10 +
																		dd *
																			(P11 +
																				dd *
																					(P12 +
																						dd *
																							(P13 + dd * P14))))))))))) +
		(F_lo(i) + shift * ln2_lo + d_low) + d * d * P2;
	const long double table_hi = F_hi(i) + shift * ln2_hi;
	const long double result = table_hi + d;
	const long double residual = tail + ((table_hi - result) + d);
	if (scale == nullptr)
		return result + residual;
	// Scale the leading product exactly and add the corrections together.
	const long double leading = (float)result;
	const long double trailing = residual + (result - leading);
	return scale->high * leading + (scale->full * trailing + scale->low * leading);
}

static long double log1p_scaled(long double x, const struct log_scale* scale)
{
	const union binary128 input = { .value = x };
	const int16_t sign_exponent = (int16_t)(input.words[1] >> 48);
	long double high;
	long double low;
	if (sign_exponent < 0x3fff)
	{
		const unsigned exponent = sign_exponent & 0x7fff;
		if (exponent >= 0x3fff)
		{
			const uint64_t fraction = (input.words[1] & fraction_mask) | input.words[0];
			if (exponent == 0x7fff && fraction != 0)
				return x + x;
			if (exponent == 0x3fff && fraction == 0)
				return -math_range_error();
			return math_domain_error();
		}
		if (exponent <= SMALL_ARGUMENT_EXPONENT)
			return scale == nullptr ? x : scale->full * x;
		high = 1.0L;
		low = x;
	}
	else if (sign_exponent == 0x7fff)
	{
		return x + x;
	}
	else
	{
		high = x;
		// For x at least 2^226 the logarithm rounds without the increment.
		low = sign_exponent < 0x40e1 ? 1.0L : 0.0L;
	}

	// Form 1+x as a sum of two binary128 values with an exact residual.
	union binary128 reduced = { .value = high + low };
	low = (high - reduced.value) + low;
	return evaluate_log(reduce_log_argument(reduced, low, 0), scale);
}

long double log1pl(long double x)
{
	const union binary128 bits = { .value = x };
	if (((bits.words[1] >> 48) & 0x7fff) <= SMALL_ARGUMENT_EXPONENT)
		return x;
	return log1p_scaled(x, nullptr);
}

long double logp1l(long double x)
{
	return log1pl(x);
}

long double log2p1l(long double x)
{
	return log1p_scaled(x, &scale2);
}

long double log10p1l(long double x)
{
	return log1p_scaled(x, &scale10);
}

static inline struct log_reduction reduce_positive_log(long double x, long double low)
{
	union binary128 bits = { .value = x };
	int subnormal_shift = 0;
	if ((bits.words[1] >> 48) == 0)
	{
		bits.value *= 0x1p113L;
		subnormal_shift = 113;
	}
	return reduce_log_argument(bits, low, subnormal_shift);
}

static long double logarithm(long double x, const struct log_scale* scale)
{
	if (isnan(x))
		return x + x;
	if (x == 0)
		return -math_range_error();
	if (x < 0)
		return math_domain_error();
	if (isinf(x))
		return x;

	const struct log_reduction base = reduce_positive_log(x, 0.0L);
	if (scale == &scale2 && base.index == 0 && base.delta == 0)
		return base.shift;
	return evaluate_log(base, scale);
}

long double logl(long double x)
{
	return logarithm(x, nullptr);
}

long double log2l(long double x)
{
	return logarithm(x, &scale2);
}

long double log10l(long double x)
{
	return logarithm(x, &scale10);
}

struct math_split __cppgm_wasi_log_split(long double x, long double low)
{
	const struct log_reduction base = reduce_positive_log(x, low);
	const unsigned i = base.index;
	const double shift = base.shift;
	const long double d = base.delta;
	const long double d_low = base.residual;

	// The table bounds |d| by 0.0053. Preserve the square's residual and
	// use the Taylor coefficients through degree 18 for large exponents.
	const double dd = d;
	const double last = 1.0 / 13.0 +
		dd * (-1.0 / 14.0 + dd * (1.0 / 15.0 + dd * (-1.0 / 16.0 + dd * (1.0 / 17.0 + dd * (-1.0 / 18.0)))));
	const long double cubic = 1.0L / 3.0L +
		d *
			(-1.0L / 4.0L +
				d *
					(1.0L / 5.0L +
						d *
							(-1.0L / 6.0L +
								d *
									(1.0L / 7.0L +
										d *
											(-1.0L / 8.0L +
												d *
													(1.0L / 9.0L +
														d *
															(-1.0L / 10.0L +
																d *
																	(1.0L / 11.0L +
																		d * (-1.0L / 12.0L + d * last)))))))));
	const long double square = d * d;
	const long double half_square_tail = 0.5L * __builtin_fmal(d, d, -square);
	const long double table_hi = F_hi(i) + shift * ln2_hi;
	const long double first = table_hi + d;
	const long double table_lo = F_lo(i) + shift * ln2_lo;
	const long double middle = first - 0.5L * square;
	const long double middle_tail = ((table_hi - first) + d) + ((first - middle) - 0.5L * square);
	const long double correction = d_low != 0 ? d_low / (1.0L + d) : 0.0L;
	const long double small = square * d * cubic + correction - half_square_tail;
	const long double result = middle + table_lo;
	const long double residual = ((middle - result) + table_lo) + (middle_tail + small);
	return (struct math_split){ result, residual };
}
