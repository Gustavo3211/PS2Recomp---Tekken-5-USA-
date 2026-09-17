#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BE848
// Address: 0x2be848 - 0x2befc8
void sub_002BE848_0x2be848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE848_0x2be848");
#endif

    switch (ctx->pc) {
        case 0x2be9c8u: goto label_2be9c8;
        case 0x2be9e8u: goto label_2be9e8;
        case 0x2be9f4u: goto label_2be9f4;
        case 0x2bea00u: goto label_2bea00;
        case 0x2bea0cu: goto label_2bea0c;
        case 0x2bea28u: goto label_2bea28;
        case 0x2bea44u: goto label_2bea44;
        case 0x2bea5cu: goto label_2bea5c;
        case 0x2bea6cu: goto label_2bea6c;
        case 0x2bea84u: goto label_2bea84;
        case 0x2beab8u: goto label_2beab8;
        case 0x2bead4u: goto label_2bead4;
        case 0x2beb00u: goto label_2beb00;
        case 0x2beb6cu: goto label_2beb6c;
        case 0x2beb7cu: goto label_2beb7c;
        case 0x2bebe4u: goto label_2bebe4;
        case 0x2bec40u: goto label_2bec40;
        case 0x2bec6cu: goto label_2bec6c;
        case 0x2bec94u: goto label_2bec94;
        case 0x2becbcu: goto label_2becbc;
        case 0x2becccu: goto label_2beccc;
        case 0x2bece0u: goto label_2bece0;
        case 0x2bed88u: goto label_2bed88;
        case 0x2bed90u: goto label_2bed90;
        case 0x2bedccu: goto label_2bedcc;
        case 0x2beddcu: goto label_2beddc;
        case 0x2beea4u: goto label_2beea4;
        case 0x2bef74u: goto label_2bef74;
        default: break;
    }

    ctx->pc = 0x2be848u;

    // 0x2be848: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2be848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2be84c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2be84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2be850: 0x8fac01f0  lw          $t4, 0x1F0($sp)
    ctx->pc = 0x2be850u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2be854: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2be854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be85c: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x2be85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x2be860: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x2be860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2be864: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2be864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be868: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2be868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2be86c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2be86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2be870: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be874: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x2be874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
    // 0x2be878: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x2be878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2be87c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2be87cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be880: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2be880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2be884: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x2be884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x2be888: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2be888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be88c: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x2be88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2be890: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x2be890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
    // 0x2be894: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2be894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2be898: 0x24217b90  addiu       $at, $at, 0x7B90
    ctx->pc = 0x2be898u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31632));
    // 0x2be89c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x2be89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2be8a0: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x2be8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
    // 0x2be8a4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2be8a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8a8: 0xffb50188  sd          $s5, 0x188($sp)
    ctx->pc = 0x2be8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 21));
    // 0x2be8ac: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2be8acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8b0: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x2be8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x2be8b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2be8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2be8b8: 0xffb70198  sd          $s7, 0x198($sp)
    ctx->pc = 0x2be8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 23));
    // 0x2be8bc: 0xffbe01a0  sd          $fp, 0x1A0($sp)
    ctx->pc = 0x2be8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 30));
    // 0x2be8c0: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x2be8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x2be8c4: 0xe7bb01e8  swc1        $f27, 0x1E8($sp)
    ctx->pc = 0x2be8c4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2be8c8: 0xe7ba01e0  swc1        $f26, 0x1E0($sp)
    ctx->pc = 0x2be8c8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2be8cc: 0xe7b901d8  swc1        $f25, 0x1D8($sp)
    ctx->pc = 0x2be8ccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2be8d0: 0xe7b801d0  swc1        $f24, 0x1D0($sp)
    ctx->pc = 0x2be8d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2be8d4: 0xe7b701c8  swc1        $f23, 0x1C8($sp)
    ctx->pc = 0x2be8d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2be8d8: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x2be8d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2be8dc: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2be8dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2be8e0: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2be8e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2be8e4: 0xafab0150  sw          $t3, 0x150($sp)
    ctx->pc = 0x2be8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 11));
    // 0x2be8e8: 0xd9500000  lqc2        $vf16, 0x0($t2)
    ctx->pc = 0x2be8e8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2be8ec: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2be8ecu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be8f0: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2be8f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2be8f4: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2be8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2be8f8: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2be8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2be8fc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2be8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be900: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2be900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2be904: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x2be904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2be908: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2be908u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2be90c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2be90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be910: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2be910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2be914: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2be914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be918: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2be918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2be91c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2be91cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2be920: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2be920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be924: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2be924u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2be928: 0xc4e40014  lwc1        $f4, 0x14($a3)
    ctx->pc = 0x2be928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2be92c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2be92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be930: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2be930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2be934: 0xc4e60010  lwc1        $f6, 0x10($a3)
    ctx->pc = 0x2be934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2be938: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2be938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be93c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2be93cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2be940: 0xc4e50018  lwc1        $f5, 0x18($a3)
    ctx->pc = 0x2be940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2be944: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2be944u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2be948: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be94c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2be94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2be950: 0xc4e70020  lwc1        $f7, 0x20($a3)
    ctx->pc = 0x2be950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2be954: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x2be954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2be958: 0xc4e90028  lwc1        $f9, 0x28($a3)
    ctx->pc = 0x2be958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2be95c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2be95cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2be960: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x2be960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2be964: 0xc4da0440  lwc1        $f26, 0x440($a2)
    ctx->pc = 0x2be964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2be968: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x2be968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2be96c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2be96cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2be970: 0xc4b50440  lwc1        $f21, 0x440($a1)
    ctx->pc = 0x2be970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2be974: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2be974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2be978: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2be978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be97c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2be97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be980: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2be980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2be984: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2be984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be988: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2be988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2be98c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2be98cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2be990: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2be990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2be994: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be998: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2be998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2be99c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2be99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be9a0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2be9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be9a4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2be9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2be9a8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2be9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be9ac: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x2be9acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2be9b0: 0xe503000c  swc1        $f3, 0xC($t0)
    ctx->pc = 0x2be9b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2be9b4: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2be9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2be9b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2be9b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2be9bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2be9bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2be9c0: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2BE9C0u;
    SET_GPR_U32(ctx, 31, 0x2BE9C8u);
    ctx->pc = 0x2BE9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9C0u;
    // 0x2be9c4: 0xe5010008  swc1        $f1, 0x8($t0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2BE9C0u, 0x2BE9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9C8u;
label_2be9c8:
    // 0x2be9c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2be9c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2be9cc: 0x4600d006  mov.s       $f0, $f26
    ctx->pc = 0x2be9ccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[26]);
    // 0x2be9d0: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x2be9d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[21]));
    // 0x2be9d4: 0x460006dd  msub.s      $f27, $f0, $f0
    ctx->pc = 0x2be9d4u;
    ctx->f[27] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2be9d8: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x2be9d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2be9dc: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2be9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2be9e0: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2BE9E0u;
    SET_GPR_U32(ctx, 31, 0x2BE9E8u);
    ctx->pc = 0x2BE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9E0u;
    // 0x2be9e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2BE9E0u, 0x2BE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9E8u;
label_2be9e8:
    // 0x2be9e8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2be9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2be9ec: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2BE9ECu;
    SET_GPR_U32(ctx, 31, 0x2BE9F4u);
    ctx->pc = 0x2BE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9ECu;
    // 0x2be9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2BE9ECu, 0x2BE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9F4u;
label_2be9f4:
    // 0x2be9f4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2be9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2be9f8: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2BE9F8u;
    SET_GPR_U32(ctx, 31, 0x2BEA00u);
    ctx->pc = 0x2BE9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9F8u;
    // 0x2be9fc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2BE9F8u, 0x2BEA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA00u;
label_2bea00:
    // 0x2bea00: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2bea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bea04: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2BEA04u;
    SET_GPR_U32(ctx, 31, 0x2BEA0Cu);
    ctx->pc = 0x2BEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA04u;
    // 0x2bea08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2BEA04u, 0x2BEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA0Cu;
label_2bea0c:
    // 0x2bea0c: 0xc7809268  lwc1        $f0, -0x6D98($gp)
    ctx->pc = 0x2bea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bea10: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2bea10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2bea14: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2bea14u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2bea18: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bea18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bea1c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2bea1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2bea20: 0xc0b73fc  jal         func_2DCFF0
    ctx->pc = 0x2BEA20u;
    SET_GPR_U32(ctx, 31, 0x2BEA28u);
    ctx->pc = 0x2BEA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA20u;
    // 0x2bea24: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCFF0u, 0x2BEA20u, 0x2BEA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA28u;
label_2bea28:
    // 0x2bea28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bea28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea2c: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x2bea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bea30: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x2bea30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2bea34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bea34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea38: 0x460cd302  mul.s       $f12, $f26, $f12
    ctx->pc = 0x2bea38u;
    ctx->f[12] = FPU_MUL_S(ctx->f[26], ctx->f[12]);
    // 0x2bea3c: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BEA3Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA44u);
    ctx->pc = 0x2BEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA3Cu;
    // 0x2bea40: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BEA3Cu, 0x2BEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA44u;
label_2bea44:
    // 0x2bea44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bea44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea48: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x2bea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bea4c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2bea4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bea50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea54: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BEA54u;
    SET_GPR_U32(ctx, 31, 0x2BEA5Cu);
    ctx->pc = 0x2BEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA54u;
    // 0x2bea58: 0x460cd302  mul.s       $f12, $f26, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[26], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BEA54u, 0x2BEA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA5Cu;
label_2bea5c:
    // 0x2bea5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bea5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bea60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea64: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BEA64u;
    SET_GPR_U32(ctx, 31, 0x2BEA6Cu);
    ctx->pc = 0x2BEA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA64u;
    // 0x2bea68: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BEA64u, 0x2BEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA6Cu;
label_2bea6c:
    // 0x2bea6c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2bea6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bea70: 0x27b70130  addiu       $s7, $sp, 0x130
    ctx->pc = 0x2bea70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bea74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2bea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea78: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2bea78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea7c: 0xc084814  jal         func_212050
    ctx->pc = 0x2BEA7Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA84u);
    ctx->pc = 0x2BEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA7Cu;
    // 0x2bea80: 0x7ee20000  sq          $v0, 0x0($s7) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BEA7Cu, 0x2BEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA84u;
label_2bea84:
    // 0x2bea84: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bea84u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bea88: 0xc780926c  lwc1        $f0, -0x6D94($gp)
    ctx->pc = 0x2bea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bea8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bea8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bea90: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2BEA90u;
    {
        const bool branch_taken_0x2bea90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA90u;
        // 0x2bea94: 0x8fa20150  lw          $v0, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea90) {
            ctx->pc = 0x2BEAE0u;
            goto label_2beae0;
        }
    }
    ctx->pc = 0x2BEA98u;
    // 0x2bea98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BEA98u;
    {
        const bool branch_taken_0x2bea98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA98u;
        // 0x2bea9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea98) {
            ctx->pc = 0x2BEAC0u;
            goto label_2beac0;
        }
    }
    ctx->pc = 0x2BEAA0u;
    // 0x2beaa0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2beaa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2beaa4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2beaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2beaa8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2beaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2beaac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2beaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2beab0: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BEAB0u;
    SET_GPR_U32(ctx, 31, 0x2BEAB8u);
    ctx->pc = 0x2BEAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAB0u;
    // 0x2beab4: 0x7ea20000  sq          $v0, 0x0($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BEAB0u, 0x2BEAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAB8u;
label_2beab8:
    // 0x2beab8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2BEAB8u;
    {
        const bool branch_taken_0x2beab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAB8u;
        // 0x2beabc: 0x26510020  addiu       $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beab8) {
            ctx->pc = 0x2BEB4Cu;
            goto label_2beb4c;
        }
    }
    ctx->pc = 0x2BEAC0u;
label_2beac0:
    // 0x2beac0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2beac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2beac4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2beac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2beac8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2beac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beacc: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BEACCu;
    SET_GPR_U32(ctx, 31, 0x2BEAD4u);
    ctx->pc = 0x2BEAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEACCu;
    // 0x2bead0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BEACCu, 0x2BEAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAD4u;
label_2bead4:
    // 0x2bead4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2bead4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bead8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2BEAD8u;
    {
        const bool branch_taken_0x2bead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAD8u;
        // 0x2beadc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bead8) {
            ctx->pc = 0x2BEB48u;
            goto label_2beb48;
        }
    }
    ctx->pc = 0x2BEAE0u;
label_2beae0:
    // 0x2beae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2beae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2beae4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2beae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2beae8: 0x0  nop
    ctx->pc = 0x2beae8u;
    // NOP
    // 0x2beaec: 0x0  nop
    ctx->pc = 0x2beaecu;
    // NOP
    // 0x2beaf0: 0x46016316  rsqrt.s     $f12, $f12, $f1
    ctx->pc = 0x2beaf0u;
    ctx->f[12] = 1.0f / sqrtf(ctx->f[12]);
    // 0x2beaf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2beaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beaf8: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x2BEAF8u;
    SET_GPR_U32(ctx, 31, 0x2BEB00u);
    ctx->pc = 0x2BEAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAF8u;
    // 0x2beafc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x2BEAF8u, 0x2BEB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB00u;
label_2beb00:
    // 0x2beb00: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x2beb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2beb04: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x2beb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2beb08: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2beb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb0c: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x2beb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2beb10: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2beb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beb14: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x2beb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2beb18: 0x46071902  mul.s       $f4, $f3, $f7
    ctx->pc = 0x2beb18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2beb1c: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x2beb1cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2beb20: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2beb20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2beb24: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2beb24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2beb28: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2beb28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2beb2c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2beb2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2beb30: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x2beb30u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x2beb34: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2beb34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2beb38: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2beb38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2beb3c: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2beb3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2beb40: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2beb40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2beb44: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2beb44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2beb48:
    // 0x2beb48: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x2beb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2beb4c:
    // 0x2beb4c: 0x265e0030  addiu       $fp, $s2, 0x30
    ctx->pc = 0x2beb4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2beb50: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2beb50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2beb54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2beb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb58: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x2beb58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2beb5c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2beb5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2beb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb64: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BEB64u;
    SET_GPR_U32(ctx, 31, 0x2BEB6Cu);
    ctx->pc = 0x2BEB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB64u;
    // 0x2beb68: 0x7ec20000  sq          $v0, 0x0($s6) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BEB64u, 0x2BEB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB6Cu;
label_2beb6c:
    // 0x2beb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2beb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb70: 0xc7979270  lwc1        $f23, -0x6D90($gp)
    ctx->pc = 0x2beb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2beb74: 0xc084814  jal         func_212050
    ctx->pc = 0x2BEB74u;
    SET_GPR_U32(ctx, 31, 0x2BEB7Cu);
    ctx->pc = 0x2BEB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB74u;
    // 0x2beb78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BEB74u, 0x2BEB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB7Cu;
label_2beb7c:
    // 0x2beb7c: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x2beb7cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x2beb80: 0x4617c834  c.lt.s      $f25, $f23
    ctx->pc = 0x2beb80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2beb84: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2BEB84u;
    {
        const bool branch_taken_0x2beb84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB84u;
        // 0x2beb88: 0x7ba30030  lq          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb84) {
            ctx->pc = 0x2BEBB8u;
            goto label_2bebb8;
        }
    }
    ctx->pc = 0x2BEB8Cu;
    // 0x2beb8c: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2beb8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2beb90: 0x7ac40000  lq          $a0, 0x0($s6)
    ctx->pc = 0x2beb90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2beb94: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2beb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2beb98: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x2beb98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x2beb9c: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x2beb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    // 0x2beba0: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x2beba0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x2beba4: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x2beba4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x2beba8: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x2beba8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
    // 0x2bebac: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2BEBACu;
    {
        const bool branch_taken_0x2bebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBACu;
        // 0x2bebb0: 0x7e640020  sq          $a0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebac) {
            ctx->pc = 0x2BED90u;
            goto label_2bed90;
        }
    }
    ctx->pc = 0x2BEBB4u;
    // 0x2bebb4: 0x0  nop
    ctx->pc = 0x2bebb4u;
    // NOP
label_2bebb8:
    // 0x2bebb8: 0x0  nop
    ctx->pc = 0x2bebb8u;
    // NOP
    // 0x2bebbc: 0x0  nop
    ctx->pc = 0x2bebbcu;
    // NOP
    // 0x2bebc0: 0x46190584  c1          0x190584
    ctx->pc = 0x2bebc0u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bebc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bebc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bebc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bebc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bebcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bebccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebd0: 0x0  nop
    ctx->pc = 0x2bebd0u;
    // NOP
    // 0x2bebd4: 0x0  nop
    ctx->pc = 0x2bebd4u;
    // NOP
    // 0x2bebd8: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x2bebd8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x2bebdc: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BEBDCu;
    SET_GPR_U32(ctx, 31, 0x2BEBE4u);
    ctx->pc = 0x2BEBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBDCu;
    // 0x2bebe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BEBDCu, 0x2BEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEBE4u;
label_2bebe4:
    // 0x2bebe4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2bebe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebe8: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2bebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bebec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2bebecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bebf0: 0xc7a70128  lwc1        $f7, 0x128($sp)
    ctx->pc = 0x2bebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bebf4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2bebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bebf8: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2bebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bebfc: 0x460720c2  mul.s       $f3, $f4, $f7
    ctx->pc = 0x2bebfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2bec00: 0xc7a50120  lwc1        $f5, 0x120($sp)
    ctx->pc = 0x2bec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bec04: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2bec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bec08: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x2bec08u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bec0c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2bec0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2bec10: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2bec10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bec14: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2bec14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2bec18: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2bec18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2bec1c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2bec1cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2bec20: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2bec20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2bec24: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2bec24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bec28: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2bec28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bec2c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2bec2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bec30: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2bec30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bec34: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x2bec34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bec38: 0xc084814  jal         func_212050
    ctx->pc = 0x2BEC38u;
    SET_GPR_U32(ctx, 31, 0x2BEC40u);
    ctx->pc = 0x2BEC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC38u;
    // 0x2bec3c: 0x7ee20000  sq          $v0, 0x0($s7) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BEC38u, 0x2BEC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC40u;
label_2bec40:
    // 0x2bec40: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bec40u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bec44: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x2bec44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bec48: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2BEC48u;
    {
        const bool branch_taken_0x2bec48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC48u;
        // 0x2bec4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec48) {
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BEC50u;
    // 0x2bec50: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2bec50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2bec54: 0x7ac50000  lq          $a1, 0x0($s6)
    ctx->pc = 0x2bec54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2bec58: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2bec58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bec5c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x2bec5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x2bec60: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x2bec60u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    // 0x2bec64: 0xc0849ca  jal         func_212728
    ctx->pc = 0x2BEC64u;
    SET_GPR_U32(ctx, 31, 0x2BEC6Cu);
    ctx->pc = 0x2BEC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC64u;
    // 0x2bec68: 0x7e250000  sq          $a1, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212728u, 0x2BEC64u, 0x2BEC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC6Cu;
label_2bec6c:
    // 0x2bec6c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2BEC6Cu;
    {
        const bool branch_taken_0x2bec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC6Cu;
        // 0x2bec70: 0x461aa800  add.s       $f0, $f21, $f26 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[26]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec6c) {
            ctx->pc = 0x2BED94u;
            goto label_2bed94;
        }
    }
    ctx->pc = 0x2BEC74u;
    // 0x2bec74: 0x0  nop
    ctx->pc = 0x2bec74u;
    // NOP
label_2bec78:
    // 0x2bec78: 0x0  nop
    ctx->pc = 0x2bec78u;
    // NOP
    // 0x2bec7c: 0x0  nop
    ctx->pc = 0x2bec7cu;
    // NOP
    // 0x2bec80: 0x46010004  c1          0x10004
    ctx->pc = 0x2bec80u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bec84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bec84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bec88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec8c: 0xc084814  jal         func_212050
    ctx->pc = 0x2BEC8Cu;
    SET_GPR_U32(ctx, 31, 0x2BEC94u);
    ctx->pc = 0x2BEC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC8Cu;
    // 0x2bec90: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BEC8Cu, 0x2BEC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC94u;
label_2bec94:
    // 0x2bec94: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x2bec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bec98: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x2bec98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2bec9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beca0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2beca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beca4: 0x0  nop
    ctx->pc = 0x2beca4u;
    // NOP
    // 0x2beca8: 0x0  nop
    ctx->pc = 0x2beca8u;
    // NOP
    // 0x2becac: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x2becacu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[12];
    // 0x2becb0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2becb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2becb4: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BECB4u;
    SET_GPR_U32(ctx, 31, 0x2BECBCu);
    ctx->pc = 0x2BECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BECB4u;
    // 0x2becb8: 0xe7a10138  swc1        $f1, 0x138($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BECB4u, 0x2BECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECBCu;
label_2becbc:
    // 0x2becbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2becbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becc0: 0xc7ac0138  lwc1        $f12, 0x138($sp)
    ctx->pc = 0x2becc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2becc4: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BECC4u;
    SET_GPR_U32(ctx, 31, 0x2BECCCu);
    ctx->pc = 0x2BECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BECC4u;
    // 0x2becc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BECC4u, 0x2BECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECCCu;
label_2beccc:
    // 0x2beccc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2becccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becd0: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x2becd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2becd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2becd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becd8: 0xc08479c  jal         func_211E70
    ctx->pc = 0x2BECD8u;
    SET_GPR_U32(ctx, 31, 0x2BECE0u);
    ctx->pc = 0x2BECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BECD8u;
    // 0x2becdc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E70u, 0x2BECD8u, 0x2BECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECE0u;
label_2bece0:
    // 0x2bece0: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x2bece0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2bece4: 0xc7a60130  lwc1        $f6, 0x130($sp)
    ctx->pc = 0x2bece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bece8: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x2bece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2becec: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2bececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2becf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2becf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becf4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2becf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2becf8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2becf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becfc: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x2becfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bed00: 0x46061b02  mul.s       $f12, $f3, $f6
    ctx->pc = 0x2bed00u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2bed04: 0xc7a90120  lwc1        $f9, 0x120($sp)
    ctx->pc = 0x2bed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2bed08: 0x460612c2  mul.s       $f11, $f2, $f6
    ctx->pc = 0x2bed08u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2bed0c: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2bed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bed10: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bed10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed14: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2bed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bed18: 0x460911c2  mul.s       $f7, $f2, $f9
    ctx->pc = 0x2bed18u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2bed1c: 0x46002a02  mul.s       $f8, $f5, $f0
    ctx->pc = 0x2bed1cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2bed20: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x2bed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bed24: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2bed24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bed28: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2bed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x2bed2c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bed2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bed30: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x2bed30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x2bed34: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2bed34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2bed38: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2bed38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2bed3c: 0x460b0241  sub.s       $f9, $f0, $f11
    ctx->pc = 0x2bed3cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x2bed40: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2bed40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2bed44: 0x460c0981  sub.s       $f6, $f1, $f12
    ctx->pc = 0x2bed44u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2bed48: 0x46053a80  add.s       $f10, $f7, $f5
    ctx->pc = 0x2bed48u;
    ctx->f[10] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x2bed4c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2bed4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2bed50: 0xe7a900f0  swc1        $f9, 0xF0($sp)
    ctx->pc = 0x2bed50u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2bed54: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x2bed54u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x2bed58: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x2bed58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2bed5c: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x2bed5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x2bed60: 0xe7a60104  swc1        $f6, 0x104($sp)
    ctx->pc = 0x2bed60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2bed64: 0x460539c1  sub.s       $f7, $f7, $f5
    ctx->pc = 0x2bed64u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x2bed68: 0xe7aa0100  swc1        $f10, 0x100($sp)
    ctx->pc = 0x2bed68u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2bed6c: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2bed6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2bed70: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x2bed70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2bed74: 0xe7a800f4  swc1        $f8, 0xF4($sp)
    ctx->pc = 0x2bed74u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2bed78: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2bed78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2bed7c: 0xe7a700e8  swc1        $f7, 0xE8($sp)
    ctx->pc = 0x2bed7cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2bed80: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BED80u;
    SET_GPR_U32(ctx, 31, 0x2BED88u);
    ctx->pc = 0x2BED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED80u;
    // 0x2bed84: 0xe7a100f8  swc1        $f1, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BED80u, 0x2BED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED88u;
label_2bed88:
    // 0x2bed88: 0xc0849ca  jal         func_212728
    ctx->pc = 0x2BED88u;
    SET_GPR_U32(ctx, 31, 0x2BED90u);
    ctx->pc = 0x2BED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED88u;
    // 0x2bed8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212728u, 0x2BED88u, 0x2BED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED90u;
label_2bed90:
    // 0x2bed90: 0x461aa800  add.s       $f0, $f21, $f26
    ctx->pc = 0x2bed90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[26]);
label_2bed94:
    // 0x2bed94: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x2bed94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bed98: 0x45010077  bc1t        . + 4 + (0x77 << 2)
    ctx->pc = 0x2BED98u;
    {
        const bool branch_taken_0x2bed98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED98u;
        // 0x2bed9c: 0xdfb00160  ld          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed98) {
            ctx->pc = 0x2BEF78u;
            goto label_2bef78;
        }
    }
    ctx->pc = 0x2BEDA0u;
    // 0x2beda0: 0x461aa801  sub.s       $f0, $f21, $f26
    ctx->pc = 0x2beda0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[26]);
    // 0x2beda4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2beda4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2beda8: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2beda8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bedac: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x2BEDACu;
    {
        const bool branch_taken_0x2bedac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bedac) {
            ctx->pc = 0x2BEDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEDACu;
            // 0x2bedb0: 0x4616b600  add.s       $f24, $f22, $f22 (Delay Slot)
            ctx->f[24] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEDE8u;
            goto label_2bede8;
        }
    }
    ctx->pc = 0x2BEDB4u;
    // 0x2bedb4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2bedb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2bedb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bedb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bedbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bedbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bedc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bedc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bedc4: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BEDC4u;
    SET_GPR_U32(ctx, 31, 0x2BEDCCu);
    ctx->pc = 0x2BEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDC4u;
    // 0x2bedc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BEDC4u, 0x2BEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEDCCu;
label_2bedcc:
    // 0x2bedcc: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2bedccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2bedd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bedd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bedd4: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BEDD4u;
    SET_GPR_U32(ctx, 31, 0x2BEDDCu);
    ctx->pc = 0x2BEDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDD4u;
    // 0x2bedd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BEDD4u, 0x2BEDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEDDCu;
label_2beddc:
    // 0x2beddc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2BEDDCu;
    {
        const bool branch_taken_0x2beddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDDCu;
        // 0x2bede0: 0xdfb00160  ld          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beddc) {
            ctx->pc = 0x2BEF78u;
            goto label_2bef78;
        }
    }
    ctx->pc = 0x2BEDE4u;
    // 0x2bede4: 0x0  nop
    ctx->pc = 0x2bede4u;
    // NOP
label_2bede8:
    // 0x2bede8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bede8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bedec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bedecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bedf0: 0x461bc840  add.s       $f1, $f25, $f27
    ctx->pc = 0x2bedf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[25], ctx->f[27]);
    // 0x2bedf4: 0x4615c002  mul.s       $f0, $f24, $f21
    ctx->pc = 0x2bedf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x2bedf8: 0x0  nop
    ctx->pc = 0x2bedf8u;
    // NOP
    // 0x2bedfc: 0x0  nop
    ctx->pc = 0x2bedfcu;
    // NOP
    // 0x2bee00: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2bee00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2bee04: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2bee04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bee08: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEE08u;
    {
        const bool branch_taken_0x2bee08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bee08) {
            ctx->pc = 0x2BEE20u;
            goto label_2bee20;
        }
    }
    ctx->pc = 0x2BEE10u;
    // 0x2bee10: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2bee10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2bee14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BEE14u;
    {
        const bool branch_taken_0x2bee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE14u;
        // 0x2bee18: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee14) {
            ctx->pc = 0x2BEE5Cu;
            goto label_2bee5c;
        }
    }
    ctx->pc = 0x2BEE1Cu;
    // 0x2bee1c: 0x0  nop
    ctx->pc = 0x2bee1cu;
    // NOP
label_2bee20:
    // 0x2bee20: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2bee20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2bee24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bee24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bee28: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bee28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bee2c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEE2Cu;
    {
        const bool branch_taken_0x2bee2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bee2c) {
            ctx->pc = 0x2BEE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEE2Cu;
            // 0x2bee30: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEE40u;
            goto label_2bee40;
        }
    }
    ctx->pc = 0x2BEE34u;
    // 0x2bee34: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2bee34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2bee38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BEE38u;
    {
        const bool branch_taken_0x2bee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE38u;
        // 0x2bee3c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee38) {
            ctx->pc = 0x2BEE5Cu;
            goto label_2bee5c;
        }
    }
    ctx->pc = 0x2BEE40u;
label_2bee40:
    // 0x2bee40: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2bee40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bee44: 0x0  nop
    ctx->pc = 0x2bee44u;
    // NOP
    // 0x2bee48: 0x0  nop
    ctx->pc = 0x2bee48u;
    // NOP
    // 0x2bee4c: 0x460005c4  c1          0x5C4
    ctx->pc = 0x2bee4cu;
    ctx->f[23] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bee50: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2bee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bee54: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BEE54u;
    {
        const bool branch_taken_0x2bee54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bee54) {
            ctx->pc = 0x2BEE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEE54u;
            // 0x2bee58: 0x4600bdc7  neg.s       $f23, $f23 (Delay Slot)
            ctx->f[23] = FPU_NEG_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEE5Cu;
            goto label_2bee5c;
        }
    }
    ctx->pc = 0x2BEE5Cu;
label_2bee5c:
    // 0x2bee5c: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x2bee5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x2bee60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee64: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2bee64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2bee68: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2bee68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bee6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bee6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bee70: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2bee70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2bee74: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2bee74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2bee78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee7c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2bee7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bee80: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2bee80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bee84: 0xe7b70064  swc1        $f23, 0x64($sp)
    ctx->pc = 0x2bee84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2bee88: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2bee88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2bee8c: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x2bee8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2bee90: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2bee90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2bee94: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x2bee94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2bee98: 0xe7b50084  swc1        $f21, 0x84($sp)
    ctx->pc = 0x2bee98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2bee9c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BEE9Cu;
    SET_GPR_U32(ctx, 31, 0x2BEEA4u);
    ctx->pc = 0x2BEEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE9Cu;
    // 0x2beea0: 0xe7b60088  swc1        $f22, 0x88($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BEE9Cu, 0x2BEEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEEA4u;
label_2beea4:
    // 0x2beea4: 0x461bc841  sub.s       $f1, $f25, $f27
    ctx->pc = 0x2beea4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[27]);
    // 0x2beea8: 0x461ac002  mul.s       $f0, $f24, $f26
    ctx->pc = 0x2beea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[26]);
    // 0x2beeac: 0x0  nop
    ctx->pc = 0x2beeacu;
    // NOP
    // 0x2beeb0: 0x0  nop
    ctx->pc = 0x2beeb0u;
    // NOP
    // 0x2beeb4: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x2beeb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x2beeb8: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x2beeb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2beebc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEEBCu;
    {
        const bool branch_taken_0x2beebc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2beebc) {
            ctx->pc = 0x2BEEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEEBCu;
            // 0x2beec0: 0xc7a00134  lwc1        $f0, 0x134($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEED0u;
            goto label_2beed0;
        }
    }
    ctx->pc = 0x2BEEC4u;
    // 0x2beec4: 0x4600b086  mov.s       $f2, $f22
    ctx->pc = 0x2beec4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[22]);
    // 0x2beec8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BEEC8u;
    {
        const bool branch_taken_0x2beec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEC8u;
        // 0x2beecc: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beec8) {
            ctx->pc = 0x2BEF00u;
            goto label_2bef00;
        }
    }
    ctx->pc = 0x2BEED0u;
label_2beed0:
    // 0x2beed0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2beed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2beed4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2beed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2beed8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2beed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2beedc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEEDCu;
    {
        const bool branch_taken_0x2beedc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2beedc) {
            ctx->pc = 0x2BEEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEEDCu;
            // 0x2beee0: 0x46021002  mul.s       $f0, $f2, $f2 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEEF0u;
            goto label_2beef0;
        }
    }
    ctx->pc = 0x2BEEE4u;
    // 0x2beee4: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2beee4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2beee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEEE8u;
    {
        const bool branch_taken_0x2beee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEE8u;
        // 0x2beeec: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beee8) {
            ctx->pc = 0x2BEF00u;
            goto label_2bef00;
        }
    }
    ctx->pc = 0x2BEEF0u;
label_2beef0:
    // 0x2beef0: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x2beef0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x2beef4: 0x0  nop
    ctx->pc = 0x2beef4u;
    // NOP
    // 0x2beef8: 0x0  nop
    ctx->pc = 0x2beef8u;
    // NOP
    // 0x2beefc: 0x46000004  c1          0x4
    ctx->pc = 0x2beefcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2bef00:
    // 0x2bef00: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2bef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bef04: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BEF04u;
    {
        const bool branch_taken_0x2bef04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bef04) {
            ctx->pc = 0x2BEF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEF04u;
            // 0x2bef08: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEF0Cu;
            goto label_2bef0c;
        }
    }
    ctx->pc = 0x2BEF0Cu;
label_2bef0c:
    // 0x2bef0c: 0x4602b842  mul.s       $f1, $f23, $f2
    ctx->pc = 0x2bef0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x2bef10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef14: 0x4600a102  mul.s       $f4, $f20, $f0
    ctx->pc = 0x2bef14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2bef18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bef18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bef1c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2bef1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2bef20: 0x4600b8c2  mul.s       $f3, $f23, $f0
    ctx->pc = 0x2bef20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2bef24: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2bef24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2bef28: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2bef28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2bef2c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2bef2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bef30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bef34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2bef34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef38: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2bef38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2bef3c: 0xe7a500c8  swc1        $f5, 0xC8($sp)
    ctx->pc = 0x2bef3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2bef40: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2bef40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2bef44: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2bef44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2bef48: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2bef48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2bef4c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2bef4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2bef50: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x2bef50u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x2bef54: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x2bef54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2bef58: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x2bef58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2bef5c: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2bef5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2bef60: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x2bef60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2bef64: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x2bef64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2bef68: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x2bef68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2bef6c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BEF6Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF74u);
    ctx->pc = 0x2BEF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF6Cu;
    // 0x2bef70: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BEF6Cu, 0x2BEF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF74u;
label_2bef74:
    // 0x2bef74: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x2bef74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2bef78:
    // 0x2bef78: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x2bef78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2bef7c: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x2bef7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bef80: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x2bef80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2bef84: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x2bef84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bef88: 0xdfb50188  ld          $s5, 0x188($sp)
    ctx->pc = 0x2bef88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2bef8c: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x2bef8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2bef90: 0xdfb70198  ld          $s7, 0x198($sp)
    ctx->pc = 0x2bef90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2bef94: 0xdfbe01a0  ld          $fp, 0x1A0($sp)
    ctx->pc = 0x2bef94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bef98: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x2bef98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2bef9c: 0xc7bb01e8  lwc1        $f27, 0x1E8($sp)
    ctx->pc = 0x2bef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2befa0: 0xc7ba01e0  lwc1        $f26, 0x1E0($sp)
    ctx->pc = 0x2befa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2befa4: 0xc7b901d8  lwc1        $f25, 0x1D8($sp)
    ctx->pc = 0x2befa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2befa8: 0xc7b801d0  lwc1        $f24, 0x1D0($sp)
    ctx->pc = 0x2befa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2befac: 0xc7b701c8  lwc1        $f23, 0x1C8($sp)
    ctx->pc = 0x2befacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2befb0: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x2befb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2befb4: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2befb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2befb8: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2befb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2befbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFBCu;
        // 0x2befc0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEFC4u;
    // 0x2befc4: 0x0  nop
    ctx->pc = 0x2befc4u;
    // NOP
    ctx->pc = 0x2befc8u;
}
