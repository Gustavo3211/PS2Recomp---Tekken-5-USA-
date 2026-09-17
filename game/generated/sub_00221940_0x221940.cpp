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

// Function: sub_00221940
// Address: 0x221940 - 0x221fd8
void sub_00221940_0x221940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221940_0x221940");
#endif

    switch (ctx->pc) {
        case 0x221bd4u: goto label_221bd4;
        case 0x221d94u: goto label_221d94;
        case 0x221db8u: goto label_221db8;
        case 0x221dd8u: goto label_221dd8;
        case 0x221df8u: goto label_221df8;
        case 0x221e18u: goto label_221e18;
        case 0x221e38u: goto label_221e38;
        case 0x221e58u: goto label_221e58;
        case 0x221e78u: goto label_221e78;
        case 0x221e98u: goto label_221e98;
        case 0x221eb8u: goto label_221eb8;
        case 0x221ed8u: goto label_221ed8;
        case 0x221ef8u: goto label_221ef8;
        case 0x221f18u: goto label_221f18;
        case 0x221f38u: goto label_221f38;
        case 0x221f58u: goto label_221f58;
        case 0x221f78u: goto label_221f78;
        case 0x221f98u: goto label_221f98;
        default: break;
    }

    ctx->pc = 0x221940u;

    // 0x221940: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x221940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x221944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22194c: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x22194cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x221950: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x221950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221954: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x221954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x221958: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x221958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22195c: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x22195cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x221960: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x221960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221964: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x221964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x221968: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x221968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x22196c: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x22196cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x221970: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x221970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x221974: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x221974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x221978: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x221978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x22197c: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x22197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x221980: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x221980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x221984: 0xc6670010  lwc1        $f7, 0x10($s3)
    ctx->pc = 0x221984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x221988: 0xc6680018  lwc1        $f8, 0x18($s3)
    ctx->pc = 0x221988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x22198c: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x22198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x221990: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x221990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x221994: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x221994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221998: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x221998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22199c: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x22199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2219a0: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x2219a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2219a4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2219a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2219a8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2219a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2219ac: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2219acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2219b0: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x2219b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2219b4: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x2219b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2219b8: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x2219b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2219bc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2219bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2219c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2219c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2219c4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2219c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2219c8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2219c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2219cc: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2219ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2219d0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2219d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2219d4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2219d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2219d8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2219d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2219dc: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x2219dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2219e0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2219e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2219e4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2219e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2219e8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2219e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2219ec: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x2219ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2219f0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2219f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2219f4: 0xe7a60048  swc1        $f6, 0x48($sp)
    ctx->pc = 0x2219f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2219f8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2219f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2219fc: 0xe7a70050  swc1        $f7, 0x50($sp)
    ctx->pc = 0x2219fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x221a00: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x221a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x221a04: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x221a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x221a08: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x221a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x221a0c: 0xe7a80068  swc1        $f8, 0x68($sp)
    ctx->pc = 0x221a0cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x221a10: 0xe7a70070  swc1        $f7, 0x70($sp)
    ctx->pc = 0x221a10u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x221a14: 0xe7a80078  swc1        $f8, 0x78($sp)
    ctx->pc = 0x221a14u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x221a18: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x221a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x221a1c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x221a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x221a20: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x221a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x221a24: 0x7a470000  lq          $a3, 0x0($s2)
    ctx->pc = 0x221a24u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x221a28: 0x7a450010  lq          $a1, 0x10($s2)
    ctx->pc = 0x221a28u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x221a2c: 0x7a480020  lq          $t0, 0x20($s2)
    ctx->pc = 0x221a2cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x221a30: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x221a30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x221a34: 0x70a73488  pextlw      $a2, $a1, $a3
    ctx->pc = 0x221a34u;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x221a38: 0x70a72ca8  pextuw      $a1, $a1, $a3
    ctx->pc = 0x221a38u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTUW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x221a3c: 0x70681488  pextlw      $v0, $v1, $t0
    ctx->pc = 0x221a3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x221a40: 0x70681ca8  pextuw      $v1, $v1, $t0
    ctx->pc = 0x221a40u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x221a44: 0x70463b89  pcpyld      $a3, $v0, $a2
    ctx->pc = 0x221a44u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x221a48: 0x70c233a9  pcpyud      $a2, $a2, $v0
    ctx->pc = 0x221a48u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x221a4c: 0x70651b89  pcpyld      $v1, $v1, $a1
    ctx->pc = 0x221a4cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x221a50: 0xda470030  lqc2        $vf7, 0x30($s2)
    ctx->pc = 0x221a50u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x221a54: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x221a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x221a58: 0x48a62800  qmtc2.ni    $a2, $vf5
    ctx->pc = 0x221a58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x221a5c: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x221a5cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x221a60: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x221a60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x221a64: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x221a64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x221a68: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x221a68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x221a6c: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x221a6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x221a70: 0x7d270000  sq          $a3, 0x0($t1)
    ctx->pc = 0x221a70u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 7));
    // 0x221a74: 0x7d260010  sq          $a2, 0x10($t1)
    ctx->pc = 0x221a74u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 6));
    // 0x221a78: 0x7d230020  sq          $v1, 0x20($t1)
    ctx->pc = 0x221a78u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 3));
    // 0x221a7c: 0xf9270030  sqc2        $vf7, 0x30($t1)
    ctx->pc = 0x221a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x221a80: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x221a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x221a84: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x221a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a88: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x221a88u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221a8c: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x221a8cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x221a90: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x221a90u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x221a94: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x221a94u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x221a98: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x221a98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221a9c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x221a9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x221aa0: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x221aa0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x221aa4: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x221aa4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x221aa8: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x221aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221aac: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x221aacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221ab0: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x221ab0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221ab4: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x221ab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x221ab8: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x221ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221abc: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x221abcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221ac0: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x221ac0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221ac4: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x221ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x221ac8: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x221ac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221acc: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x221accu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221ad0: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x221ad0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221ad4: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x221ad4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x221ad8: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x221ad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221adc: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x221adcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221ae0: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x221ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221ae4: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x221ae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x221ae8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x221ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x221aec: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x221aecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x221af0: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x221af0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x221af4: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x221af4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x221af8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x221af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x221afc: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x221afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x221b00: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x221b00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x221b04: 0xdbd00000  lqc2        $vf16, 0x0($fp)
    ctx->pc = 0x221b04u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x221b08: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x221b08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221b0c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x221b0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x221b10: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x221b10u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x221b14: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x221b14u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x221b18: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x221b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221b1c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x221b1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221b20: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x221b20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221b24: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x221b24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x221b28: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x221b28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x221b2c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x221b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x221b30: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x221b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x221b34: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x221b34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x221b38: 0xdab00000  lqc2        $vf16, 0x0($s5)
    ctx->pc = 0x221b38u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x221b3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x221b3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221b40: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x221b40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x221b44: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x221b44u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x221b48: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x221b48u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x221b4c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x221b4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221b50: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x221b50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221b54: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x221b54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221b58: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x221b58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x221b5c: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x221b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x221b60: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x221b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x221b64: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x221b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x221b68: 0x27b70060  addiu       $s7, $sp, 0x60
    ctx->pc = 0x221b68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x221b6c: 0xdaf00000  lqc2        $vf16, 0x0($s7)
    ctx->pc = 0x221b6cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x221b70: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x221b70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221b74: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x221b74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x221b78: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x221b78u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x221b7c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x221b7cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x221b80: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x221b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221b84: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x221b84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221b88: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x221b88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221b8c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x221b8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x221b90: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x221b90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x221b94: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x221b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x221b98: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x221b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x221b9c: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x221b9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x221ba0: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x221ba0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x221ba4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x221ba4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221ba8: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x221ba8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x221bac: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x221bacu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x221bb0: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x221bb0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x221bb4: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x221bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221bb8: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x221bb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221bbc: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x221bbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221bc0: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x221bc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x221bc4: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x221bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x221bc8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x221bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x221bcc: 0xc088554  jal         func_221550
    ctx->pc = 0x221BCCu;
    SET_GPR_U32(ctx, 31, 0x221BD4u);
    ctx->pc = 0x221BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BCCu;
    // 0x221bd0: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221550u, 0x221BCCu, 0x221BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BD4u;
label_221bd4:
    // 0x221bd4: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x221BD4u;
    {
        const bool branch_taken_0x221bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BD4u;
        // 0x221bd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bd4) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221BDCu;
    // 0x221bdc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x221bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221be0: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x221be0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x221be4: 0x7a240010  lq          $a0, 0x10($s1)
    ctx->pc = 0x221be4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x221be8: 0x7a270020  lq          $a3, 0x20($s1)
    ctx->pc = 0x221be8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x221bec: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x221becu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x221bf0: 0x70862c88  pextlw      $a1, $a0, $a2
    ctx->pc = 0x221bf0u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x221bf4: 0x708624a8  pextuw      $a0, $a0, $a2
    ctx->pc = 0x221bf4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x221bf8: 0x70671488  pextlw      $v0, $v1, $a3
    ctx->pc = 0x221bf8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x221bfc: 0x70671ca8  pextuw      $v1, $v1, $a3
    ctx->pc = 0x221bfcu;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x221c00: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x221c00u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x221c04: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x221c04u;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x221c08: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x221c08u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x221c0c: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x221c0cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x221c10: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x221c10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x221c14: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x221c14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x221c18: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x221c18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x221c1c: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x221c1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x221c20: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x221c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x221c24: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x221c24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x221c28: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x221c28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x221c2c: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x221c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x221c30: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x221c30u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
    // 0x221c34: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x221c34u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
    // 0x221c38: 0xf9070030  sqc2        $vf7, 0x30($t0)
    ctx->pc = 0x221c38u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x221c3c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x221c3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c40: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x221c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x221c44: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x221c44u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221c48: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x221c48u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x221c4c: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x221c4cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x221c50: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x221c50u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x221c54: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x221c54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221c58: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x221c58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x221c5c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x221c5cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x221c60: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x221c60u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x221c64: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x221c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c68: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x221c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c6c: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x221c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c70: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x221c70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x221c74: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x221c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c78: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x221c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c7c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x221c7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c80: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x221c80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x221c84: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x221c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c88: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x221c88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c8c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x221c8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c90: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x221c90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x221c94: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x221c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c98: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x221c98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221c9c: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x221c9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221ca0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x221ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x221ca4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x221ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x221ca8: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x221ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x221cac: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x221cacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x221cb0: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x221cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x221cb4: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x221cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x221cb8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x221cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x221cbc: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x221cbcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221cc0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x221cc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221cc4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x221cc4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x221cc8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x221cc8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x221ccc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x221cccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x221cd0: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x221cd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221cd4: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x221cd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221cd8: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x221cd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221cdc: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x221cdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x221ce0: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x221ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x221ce4: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x221ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x221ce8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x221ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x221cec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x221cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x221cf0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x221cf0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221cf4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x221cf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221cf8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x221cf8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x221cfc: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x221cfcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x221d00: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x221d00u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x221d04: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x221d04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221d08: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x221d08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221d0c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x221d0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221d10: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x221d10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x221d14: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x221d14u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x221d18: 0x27b40120  addiu       $s4, $sp, 0x120
    ctx->pc = 0x221d18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x221d1c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x221d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x221d20: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x221d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x221d24: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x221d24u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221d28: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x221d28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221d2c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x221d2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x221d30: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x221d30u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x221d34: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x221d34u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x221d38: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x221d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221d3c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x221d3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221d40: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x221d40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221d44: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x221d44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x221d48: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x221d48u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x221d4c: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x221d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x221d50: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x221d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x221d54: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x221d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x221d58: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x221d58u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221d5c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x221d5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221d60: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x221d60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x221d64: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x221d64u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x221d68: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x221d68u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x221d6c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x221d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221d70: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x221d70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221d74: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x221d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x221d78: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x221d78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x221d7c: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x221d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x221d80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x221d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d84: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x221d84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x221d88: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x221d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x221d8c: 0xc088554  jal         func_221550
    ctx->pc = 0x221D8Cu;
    SET_GPR_U32(ctx, 31, 0x221D94u);
    ctx->pc = 0x221D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D8Cu;
    // 0x221d90: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221550u, 0x221D8Cu, 0x221D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D94u;
label_221d94:
    // 0x221d94: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x221D94u;
    {
        const bool branch_taken_0x221d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D94u;
        // 0x221d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d94) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221D9Cu;
    // 0x221d9c: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x221d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x221da0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x221da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221da8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x221da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x221dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221db0: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221DB0u;
    SET_GPR_U32(ctx, 31, 0x221DB8u);
    ctx->pc = 0x221DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DB0u;
    // 0x221db4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221DB0u, 0x221DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DB8u;
label_221db8:
    // 0x221db8: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x221DB8u;
    {
        const bool branch_taken_0x221db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DB8u;
        // 0x221dbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221db8) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221DC0u;
    // 0x221dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dc4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x221dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dc8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x221dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dcc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x221dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dd0: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221DD0u;
    SET_GPR_U32(ctx, 31, 0x221DD8u);
    ctx->pc = 0x221DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DD0u;
    // 0x221dd4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221DD0u, 0x221DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DD8u;
label_221dd8:
    // 0x221dd8: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x221DD8u;
    {
        const bool branch_taken_0x221dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DD8u;
        // 0x221ddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dd8) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221DE0u;
    // 0x221de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221de4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x221de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221de8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x221de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x221decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221df0: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221DF0u;
    SET_GPR_U32(ctx, 31, 0x221DF8u);
    ctx->pc = 0x221DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DF0u;
    // 0x221df4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221DF0u, 0x221DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DF8u;
label_221df8:
    // 0x221df8: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x221DF8u;
    {
        const bool branch_taken_0x221df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DF8u;
        // 0x221dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221df8) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221E00u;
    // 0x221e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x221e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e08: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x221e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e0c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x221e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e10: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221E10u;
    SET_GPR_U32(ctx, 31, 0x221E18u);
    ctx->pc = 0x221E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E10u;
    // 0x221e14: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221E10u, 0x221E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E18u;
label_221e18:
    // 0x221e18: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x221E18u;
    {
        const bool branch_taken_0x221e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E18u;
        // 0x221e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e18) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221E20u;
    // 0x221e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e24: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x221e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e28: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x221e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x221e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e30: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221E30u;
    SET_GPR_U32(ctx, 31, 0x221E38u);
    ctx->pc = 0x221E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E30u;
    // 0x221e34: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221E30u, 0x221E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E38u;
label_221e38:
    // 0x221e38: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x221E38u;
    {
        const bool branch_taken_0x221e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E38u;
        // 0x221e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e38) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221E40u;
    // 0x221e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x221e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e48: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x221e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x221e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e50: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221E50u;
    SET_GPR_U32(ctx, 31, 0x221E58u);
    ctx->pc = 0x221E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E50u;
    // 0x221e54: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221E50u, 0x221E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E58u;
label_221e58:
    // 0x221e58: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x221E58u;
    {
        const bool branch_taken_0x221e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E58u;
        // 0x221e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e58) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221E60u;
    // 0x221e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x221e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e68: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x221e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x221e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e70: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221E70u;
    SET_GPR_U32(ctx, 31, 0x221E78u);
    ctx->pc = 0x221E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E70u;
    // 0x221e74: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221E70u, 0x221E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E78u;
label_221e78:
    // 0x221e78: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x221E78u;
    {
        const bool branch_taken_0x221e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E78u;
        // 0x221e7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e78) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221E80u;
    // 0x221e80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x221e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e88: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x221e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e8c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x221e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e90: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221E90u;
    SET_GPR_U32(ctx, 31, 0x221E98u);
    ctx->pc = 0x221E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E90u;
    // 0x221e94: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221E90u, 0x221E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E98u;
label_221e98:
    // 0x221e98: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x221E98u;
    {
        const bool branch_taken_0x221e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E98u;
        // 0x221e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e98) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221EA0u;
    // 0x221ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ea4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x221ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ea8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x221ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221eac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x221eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221eb0: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221EB0u;
    SET_GPR_U32(ctx, 31, 0x221EB8u);
    ctx->pc = 0x221EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EB0u;
    // 0x221eb4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221EB0u, 0x221EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EB8u;
label_221eb8:
    // 0x221eb8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x221EB8u;
    {
        const bool branch_taken_0x221eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EB8u;
        // 0x221ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221eb8) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221EC0u;
    // 0x221ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ec4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x221ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ec8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x221ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ecc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x221eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ed0: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221ED0u;
    SET_GPR_U32(ctx, 31, 0x221ED8u);
    ctx->pc = 0x221ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221ED0u;
    // 0x221ed4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221ED0u, 0x221ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221ED8u;
label_221ed8:
    // 0x221ed8: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x221ED8u;
    {
        const bool branch_taken_0x221ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221ED8u;
        // 0x221edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ed8) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221EE0u;
    // 0x221ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ee4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x221ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ee8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x221ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221eec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x221eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ef0: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221EF0u;
    SET_GPR_U32(ctx, 31, 0x221EF8u);
    ctx->pc = 0x221EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EF0u;
    // 0x221ef4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221EF0u, 0x221EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EF8u;
label_221ef8:
    // 0x221ef8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x221EF8u;
    {
        const bool branch_taken_0x221ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EF8u;
        // 0x221efc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ef8) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221F00u;
    // 0x221f00: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x221f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f08: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x221f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f0c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x221f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f10: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221F10u;
    SET_GPR_U32(ctx, 31, 0x221F18u);
    ctx->pc = 0x221F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F10u;
    // 0x221f14: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221F10u, 0x221F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F18u;
label_221f18:
    // 0x221f18: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x221F18u;
    {
        const bool branch_taken_0x221f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F18u;
        // 0x221f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f18) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221F20u;
    // 0x221f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f24: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x221f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f28: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x221f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x221f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f30: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221F30u;
    SET_GPR_U32(ctx, 31, 0x221F38u);
    ctx->pc = 0x221F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F30u;
    // 0x221f34: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221F30u, 0x221F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F38u;
label_221f38:
    // 0x221f38: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x221F38u;
    {
        const bool branch_taken_0x221f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F38u;
        // 0x221f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f38) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221F40u;
    // 0x221f40: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x221f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f48: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x221f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f4c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x221f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f50: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221F50u;
    SET_GPR_U32(ctx, 31, 0x221F58u);
    ctx->pc = 0x221F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F50u;
    // 0x221f54: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221F50u, 0x221F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F58u;
label_221f58:
    // 0x221f58: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x221F58u;
    {
        const bool branch_taken_0x221f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F58u;
        // 0x221f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f58) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221F60u;
    // 0x221f60: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x221f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f68: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x221f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f6c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x221f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f70: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221F70u;
    SET_GPR_U32(ctx, 31, 0x221F78u);
    ctx->pc = 0x221F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F70u;
    // 0x221f74: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221F70u, 0x221F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F78u;
label_221f78:
    // 0x221f78: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x221F78u;
    {
        const bool branch_taken_0x221f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F78u;
        // 0x221f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f78) {
            ctx->pc = 0x221FA4u;
            goto label_221fa4;
        }
    }
    ctx->pc = 0x221F80u;
    // 0x221f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f84: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x221f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f88: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x221f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f8c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x221f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f90: 0xc0885d4  jal         func_221750
    ctx->pc = 0x221F90u;
    SET_GPR_U32(ctx, 31, 0x221F98u);
    ctx->pc = 0x221F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F90u;
    // 0x221f94: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x221F90u, 0x221F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F98u;
label_221f98:
    // 0x221f98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221F98u;
    {
        const bool branch_taken_0x221f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F98u;
        // 0x221f9c: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f98) {
            ctx->pc = 0x221FA8u;
            goto label_221fa8;
        }
    }
    ctx->pc = 0x221FA0u;
    // 0x221fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221fa4:
    // 0x221fa4: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x221fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_221fa8:
    // 0x221fa8: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x221fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x221fac: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x221facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x221fb0: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x221fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x221fb4: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x221fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x221fb8: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x221fb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x221fbc: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x221fbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x221fc0: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x221fc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x221fc4: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x221fc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x221fc8: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x221fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x221fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x221FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FCCu;
        // 0x221fd0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221FD4u;
    // 0x221fd4: 0x0  nop
    ctx->pc = 0x221fd4u;
    // NOP
    ctx->pc = 0x221fd8u;
}
