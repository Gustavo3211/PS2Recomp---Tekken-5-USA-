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

// Function: sub_002B9470
// Address: 0x2b9470 - 0x2bbc88
void sub_002B9470_0x2b9470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9470_0x2b9470");
#endif

    switch (ctx->pc) {
        case 0x2b95acu: goto label_2b95ac;
        case 0x2b95c8u: goto label_2b95c8;
        case 0x2b9738u: goto label_2b9738;
        case 0x2b9818u: goto label_2b9818;
        case 0x2b9834u: goto label_2b9834;
        case 0x2b999cu: goto label_2b999c;
        case 0x2b9ac8u: goto label_2b9ac8;
        case 0x2b9ae4u: goto label_2b9ae4;
        case 0x2b9c3cu: goto label_2b9c3c;
        case 0x2b9ea8u: goto label_2b9ea8;
        case 0x2b9f1cu: goto label_2b9f1c;
        case 0x2b9f34u: goto label_2b9f34;
        case 0x2b9f48u: goto label_2b9f48;
        case 0x2b9f64u: goto label_2b9f64;
        case 0x2b9f74u: goto label_2b9f74;
        case 0x2b9f84u: goto label_2b9f84;
        case 0x2b9fa8u: goto label_2b9fa8;
        case 0x2b9ffcu: goto label_2b9ffc;
        case 0x2ba00cu: goto label_2ba00c;
        case 0x2ba038u: goto label_2ba038;
        case 0x2ba0d4u: goto label_2ba0d4;
        case 0x2ba3f8u: goto label_2ba3f8;
        case 0x2ba468u: goto label_2ba468;
        case 0x2ba478u: goto label_2ba478;
        case 0x2ba488u: goto label_2ba488;
        case 0x2ba498u: goto label_2ba498;
        case 0x2ba620u: goto label_2ba620;
        case 0x2ba6bcu: goto label_2ba6bc;
        case 0x2ba6d4u: goto label_2ba6d4;
        case 0x2ba834u: goto label_2ba834;
        case 0x2ba918u: goto label_2ba918;
        case 0x2ba930u: goto label_2ba930;
        case 0x2baa88u: goto label_2baa88;
        case 0x2babacu: goto label_2babac;
        case 0x2babc4u: goto label_2babc4;
        case 0x2bad20u: goto label_2bad20;
        case 0x2baf88u: goto label_2baf88;
        case 0x2baffcu: goto label_2baffc;
        case 0x2bb010u: goto label_2bb010;
        case 0x2bb024u: goto label_2bb024;
        case 0x2bb040u: goto label_2bb040;
        case 0x2bb050u: goto label_2bb050;
        case 0x2bb060u: goto label_2bb060;
        case 0x2bb084u: goto label_2bb084;
        case 0x2bb0d8u: goto label_2bb0d8;
        case 0x2bb0e8u: goto label_2bb0e8;
        case 0x2bb114u: goto label_2bb114;
        case 0x2bb1acu: goto label_2bb1ac;
        case 0x2bb4d0u: goto label_2bb4d0;
        case 0x2bb540u: goto label_2bb540;
        case 0x2bb550u: goto label_2bb550;
        case 0x2bb560u: goto label_2bb560;
        case 0x2bb570u: goto label_2bb570;
        case 0x2bb6f8u: goto label_2bb6f8;
        case 0x2bb75cu: goto label_2bb75c;
        case 0x2bb7e4u: goto label_2bb7e4;
        case 0x2bb7f8u: goto label_2bb7f8;
        case 0x2bb804u: goto label_2bb804;
        case 0x2bb82cu: goto label_2bb82c;
        case 0x2bb844u: goto label_2bb844;
        case 0x2bb850u: goto label_2bb850;
        case 0x2bb884u: goto label_2bb884;
        case 0x2bb8f0u: goto label_2bb8f0;
        case 0x2bb9d8u: goto label_2bb9d8;
        case 0x2bba58u: goto label_2bba58;
        case 0x2bba6cu: goto label_2bba6c;
        case 0x2bba78u: goto label_2bba78;
        case 0x2bbaa0u: goto label_2bbaa0;
        case 0x2bbab8u: goto label_2bbab8;
        case 0x2bbac4u: goto label_2bbac4;
        case 0x2bbaf4u: goto label_2bbaf4;
        case 0x2bbb60u: goto label_2bbb60;
        default: break;
    }

    ctx->pc = 0x2b9470u;

    // 0x2b9470: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2b9470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x2b9474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b9474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b9478: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x2b9478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x2b947c: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2b947cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b9480: 0xffb301b8  sd          $s3, 0x1B8($sp)
    ctx->pc = 0x2b9480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 19));
    // 0x2b9484: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b9484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9488: 0xffb601d0  sd          $s6, 0x1D0($sp)
    ctx->pc = 0x2b9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 22));
    // 0x2b948c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b948cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9490: 0xffb101a8  sd          $s1, 0x1A8($sp)
    ctx->pc = 0x2b9490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 17));
    // 0x2b9494: 0xffb201b0  sd          $s2, 0x1B0($sp)
    ctx->pc = 0x2b9494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
    // 0x2b9498: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x2b9498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
    // 0x2b949c: 0xffb501c8  sd          $s5, 0x1C8($sp)
    ctx->pc = 0x2b949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 21));
    // 0x2b94a0: 0xffb701d8  sd          $s7, 0x1D8($sp)
    ctx->pc = 0x2b94a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 23));
    // 0x2b94a4: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x2b94a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x2b94a8: 0xffbf01e8  sd          $ra, 0x1E8($sp)
    ctx->pc = 0x2b94a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 31));
    // 0x2b94ac: 0xe7b80210  swc1        $f24, 0x210($sp)
    ctx->pc = 0x2b94acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x2b94b0: 0xe7b70208  swc1        $f23, 0x208($sp)
    ctx->pc = 0x2b94b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x2b94b4: 0xe7b60200  swc1        $f22, 0x200($sp)
    ctx->pc = 0x2b94b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2b94b8: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x2b94b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x2b94bc: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x2b94bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2b94c0: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x2b94c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x2b94c4: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x2b94c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x2b94c8: 0x7e000020  sq          $zero, 0x20($s0)
    ctx->pc = 0x2b94c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 0));
    // 0x2b94cc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x2b94ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b94d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b94d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b94d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b94d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b94d8: 0xc6c40010  lwc1        $f4, 0x10($s6)
    ctx->pc = 0x2b94d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b94dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2b94dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b94e0: 0xc6c30014  lwc1        $f3, 0x14($s6)
    ctx->pc = 0x2b94e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b94e4: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x2b94e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x2b94e8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b94e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b94ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b94ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b94f0: 0x26630230  addiu       $v1, $s3, 0x230
    ctx->pc = 0x2b94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
    // 0x2b94f4: 0xc78290d0  lwc1        $f2, -0x6F30($gp)
    ctx->pc = 0x2b94f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b94f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b94f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b94fc: 0x46022582  mul.s       $f22, $f4, $f2
    ctx->pc = 0x2b94fcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2b9500: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2b9500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2b9504: 0x46021dc2  mul.s       $f23, $f3, $f2
    ctx->pc = 0x2b9504u;
    ctx->f[23] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b9508: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2b9508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2b950c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b950cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2b9510: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x2b9510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x2b9514: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2b9514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b9518: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2b9518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2b951c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2b951cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b9520: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2b9520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2b9524: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2b9524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2b9528: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2b9528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b952c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b952cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2b9530: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b9530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2b9534: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b9534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2b9538: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2b9538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b953c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2b953cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2b9540: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2b9540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2b9544: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2b9544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2b9548: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2b9548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2b954c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2b954cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2b9550: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2b9550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2b9554: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2b9554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2b9558: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2b9558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2b955c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2b955cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2b9560: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2b9560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2b9564: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2b9564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2b9568: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2b9568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2b956c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2b956cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9570: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2b9570u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b9574: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2b9574u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2b9578: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2b9578u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b957c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b957cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9580: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2b9580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9584: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2b9584u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9588: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2b9588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b958c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2b958cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9590: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2b9590u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b9594: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2b9594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9598: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2b9598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x2b959c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b959cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b95a0: 0x266408c0  addiu       $a0, $s3, 0x8C0
    ctx->pc = 0x2b95a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2240));
    // 0x2b95a4: 0xc0aef22  jal         func_2BBC88
    ctx->pc = 0x2B95A4u;
    SET_GPR_U32(ctx, 31, 0x2B95ACu);
    ctx->pc = 0x2B95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95A4u;
    // 0x2b95a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC88u, 0x2B95A4u, 0x2B95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95ACu;
label_2b95ac:
    // 0x2b95ac: 0x7a6201c0  lq          $v0, 0x1C0($s3)
    ctx->pc = 0x2b95acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x2b95b0: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2b95b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2b95b4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b95b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2b95b8: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x2b95b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b95bc: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2b95bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b95c0: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2B95C0u;
    SET_GPR_U32(ctx, 31, 0x2B95C8u);
    ctx->pc = 0x2B95C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95C0u;
    // 0x2b95c4: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2B95C0u, 0x2B95C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95C8u;
label_2b95c8:
    // 0x2b95c8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2b95c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b95cc: 0x45020054  bc1fl       . + 4 + (0x54 << 2)
    ctx->pc = 0x2B95CCu;
    {
        const bool branch_taken_0x2b95cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b95cc) {
            ctx->pc = 0x2B95D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B95CCu;
            // 0x2b95d0: 0x27b700d0  addiu       $s7, $sp, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9720u;
            goto label_2b9720;
        }
    }
    ctx->pc = 0x2B95D4u;
    // 0x2b95d4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2b95d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b95d8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2b95d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b95dc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b95dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b95e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b95e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b95e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b95e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b95e8: 0x0  nop
    ctx->pc = 0x2b95e8u;
    // NOP
    // 0x2b95ec: 0x0  nop
    ctx->pc = 0x2b95ecu;
    // NOP
    // 0x2b95f0: 0x46000144  c1          0x144
    ctx->pc = 0x2b95f0u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b95f4: 0xc78090d4  lwc1        $f0, -0x6F2C($gp)
    ctx->pc = 0x2b95f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b95f8: 0xc78290d8  lwc1        $f2, -0x6F28($gp)
    ctx->pc = 0x2b95f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b95fc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2b95fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9600: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9600u;
    {
        const bool branch_taken_0x2b9600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9600u;
        // 0x2b9604: 0x4600b046  mov.s       $f1, $f22 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9600) {
            ctx->pc = 0x2B9610u;
            goto label_2b9610;
        }
    }
    ctx->pc = 0x2B9608u;
    // 0x2b9608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9608u;
    {
        const bool branch_taken_0x2b9608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9608u;
        // 0x2b960c: 0x46161041  sub.s       $f1, $f2, $f22 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9608) {
            ctx->pc = 0x2B9628u;
            goto label_2b9628;
        }
    }
    ctx->pc = 0x2B9610u;
label_2b9610:
    // 0x2b9610: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b9610u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b9614: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2b9614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9618: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9618u;
    {
        const bool branch_taken_0x2b9618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9618) {
            ctx->pc = 0x2B9628u;
            goto label_2b9628;
        }
    }
    ctx->pc = 0x2B9620u;
    // 0x2b9620: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2b9620u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2b9624: 0x46160041  sub.s       $f1, $f0, $f22
    ctx->pc = 0x2b9624u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_2b9628:
    // 0x2b9628: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2b9628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b962c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b962cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b9630: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2b9630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2b9634: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2b9634u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9638: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2b9638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b963c: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x2b963cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b9640: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x2b9640u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b9644: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x2b9644u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x2b9648: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2b9648u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b964c: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2b964cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2b9650: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2b9650u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9654: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x2b9654u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b9658: 0x4606181e  madda.s     $f3, $f6
    ctx->pc = 0x2b9658u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6])));
    // 0x2b965c: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x2b965cu;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b9660: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2b9660u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b9664: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2b9664u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2b9668: 0x4606181c  madd.s      $f0, $f3, $f6
    ctx->pc = 0x2b9668u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x2b966c: 0xc78290dc  lwc1        $f2, -0x6F24($gp)
    ctx->pc = 0x2b966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9670: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b9670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b9674: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2b9674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b9678: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x2b9678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b967c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B967Cu;
    {
        const bool branch_taken_0x2b967c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B967Cu;
        // 0x2b9680: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b967c) {
            ctx->pc = 0x2B9690u;
            goto label_2b9690;
        }
    }
    ctx->pc = 0x2B9684u;
    // 0x2b9684: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9684u;
    {
        const bool branch_taken_0x2b9684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9684u;
        // 0x2b9688: 0x4602b000  add.s       $f0, $f22, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9684) {
            ctx->pc = 0x2B9698u;
            goto label_2b9698;
        }
    }
    ctx->pc = 0x2B968Cu;
    // 0x2b968c: 0x0  nop
    ctx->pc = 0x2b968cu;
    // NOP
label_2b9690:
    // 0x2b9690: 0x46161001  sub.s       $f0, $f2, $f22
    ctx->pc = 0x2b9690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
    // 0x2b9694: 0xc78290e0  lwc1        $f2, -0x6F20($gp)
    ctx->pc = 0x2b9694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b9698:
    // 0x2b9698: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b9698u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2b969c: 0xc78390e4  lwc1        $f3, -0x6F1C($gp)
    ctx->pc = 0x2b969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b96a0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2b96a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b96a4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B96A4u;
    {
        const bool branch_taken_0x2b96a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b96a4) {
            ctx->pc = 0x2B96A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B96A4u;
            // 0x2b96a8: 0x46001007  neg.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B96B8u;
            goto label_2b96b8;
        }
    }
    ctx->pc = 0x2B96ACu;
    // 0x2b96ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B96ACu;
    {
        const bool branch_taken_0x2b96ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96ACu;
        // 0x2b96b0: 0x46011841  sub.s       $f1, $f3, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96ac) {
            ctx->pc = 0x2B96CCu;
            goto label_2b96cc;
        }
    }
    ctx->pc = 0x2B96B4u;
    // 0x2b96b4: 0x0  nop
    ctx->pc = 0x2b96b4u;
    // NOP
label_2b96b8:
    // 0x2b96b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b96b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b96bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B96BCu;
    {
        const bool branch_taken_0x2b96bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b96bc) {
            ctx->pc = 0x2B96CCu;
            goto label_2b96cc;
        }
    }
    ctx->pc = 0x2B96C4u;
    // 0x2b96c4: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2b96c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2b96c8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2b96c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2b96cc:
    // 0x2b96cc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2b96ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b96d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b96d4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2b96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2b96d8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2b96d8u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b96dc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2b96dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b96e0: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x2b96e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b96e4: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x2b96e4u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b96e8: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x2b96e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x2b96ec: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2b96ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b96f0: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2b96f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2b96f4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2b96f4u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b96f8: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x2b96f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b96fc: 0x4606181e  madda.s     $f3, $f6
    ctx->pc = 0x2b96fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6])));
    // 0x2b9700: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x2b9700u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b9704: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2b9704u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b9708: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2b9708u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2b970c: 0x4606181c  madd.s      $f0, $f3, $f6
    ctx->pc = 0x2b970cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x2b9710: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b9710u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b9714: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2b9714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b9718: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2b9718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b971c: 0x27b700d0  addiu       $s7, $sp, 0xD0
    ctx->pc = 0x2b971cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b9720:
    // 0x2b9720: 0x267201e0  addiu       $s2, $s3, 0x1E0
    ctx->pc = 0x2b9720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
    // 0x2b9724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9728: 0x26710200  addiu       $s1, $s3, 0x200
    ctx->pc = 0x2b9728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x2b972c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9730: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2B9730u;
    SET_GPR_U32(ctx, 31, 0x2B9738u);
    ctx->pc = 0x2B9734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9730u;
    // 0x2b9734: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2B9730u, 0x2B9738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9738u;
label_2b9738:
    // 0x2b9738: 0x7a6201f0  lq          $v0, 0x1F0($s3)
    ctx->pc = 0x2b9738u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 496)));
    // 0x2b973c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2b973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2b9740: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2b9740u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9744: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x2b9744u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b9748: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x2b9748u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b974c: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x2b974cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2b9750: 0xdae80000  lqc2        $vf8, 0x0($s7)
    ctx->pc = 0x2b9750u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2b9754: 0xdae90010  lqc2        $vf9, 0x10($s7)
    ctx->pc = 0x2b9754u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2b9758: 0xdaea0020  lqc2        $vf10, 0x20($s7)
    ctx->pc = 0x2b9758u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x2b975c: 0xdaeb0030  lqc2        $vf11, 0x30($s7)
    ctx->pc = 0x2b975cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x2b9760: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2b9760u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9764: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2b9764u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9768: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2b9768u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b976c: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2b976cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b9770: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2b9770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9774: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2b9774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9778: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2b9778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b977c: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2b977cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b9780: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2b9780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9784: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2b9784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9788: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2b9788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b978c: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2b978cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b9790: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2b9790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9794: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2b9794u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9798: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2b9798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b979c: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2b979cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2b97a0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2b97a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b97a4: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2b97a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b97a8: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2b97a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b97ac: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2b97acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b97b0: 0xc6600270  lwc1        $f0, 0x270($s3)
    ctx->pc = 0x2b97b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b97b4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2b97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b97b8: 0xc78290e8  lwc1        $f2, -0x6F18($gp)
    ctx->pc = 0x2b97b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b97bc: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2b97bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b97c0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b97c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b97c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b97c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b97c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b97c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b97cc: 0x0  nop
    ctx->pc = 0x2b97ccu;
    // NOP
    // 0x2b97d0: 0x0  nop
    ctx->pc = 0x2b97d0u;
    // NOP
    // 0x2b97d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b97d4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2b97d8: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2b97d8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b97dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b97dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b97e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b97e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b97e4: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2b97e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b97e8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b97e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b97ec: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2b97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b97f0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2b97f0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b97f4: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x2b97f4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b97f8: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2b97f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b97fc: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b97fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b9800: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2b9800u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9804: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2b9804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2b9808: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b9808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b980c: 0x26640800  addiu       $a0, $s3, 0x800
    ctx->pc = 0x2b980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2048));
    // 0x2b9810: 0xc0aef22  jal         func_2BBC88
    ctx->pc = 0x2B9810u;
    SET_GPR_U32(ctx, 31, 0x2B9818u);
    ctx->pc = 0x2B9814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9810u;
    // 0x2b9814: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC88u, 0x2B9810u, 0x2B9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9818u;
label_2b9818:
    // 0x2b9818: 0x7a6201c0  lq          $v0, 0x1C0($s3)
    ctx->pc = 0x2b9818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x2b981c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2b981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2b9820: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b9820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2b9824: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x2b9824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b9828: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2b9828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b982c: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2B982Cu;
    SET_GPR_U32(ctx, 31, 0x2B9834u);
    ctx->pc = 0x2B9830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B982Cu;
    // 0x2b9830: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2B982Cu, 0x2B9834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9834u;
label_2b9834:
    // 0x2b9834: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x2b9834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9838: 0x45000055  bc1f        . + 4 + (0x55 << 2)
    ctx->pc = 0x2B9838u;
    {
        const bool branch_taken_0x2b9838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9838u;
        // 0x2b983c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9838) {
            ctx->pc = 0x2B9990u;
            goto label_2b9990;
        }
    }
    ctx->pc = 0x2B9840u;
    // 0x2b9840: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2b9840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9844: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2b9844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9848: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b9848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b984c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b984cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b9850: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b9850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b9854: 0x0  nop
    ctx->pc = 0x2b9854u;
    // NOP
    // 0x2b9858: 0x0  nop
    ctx->pc = 0x2b9858u;
    // NOP
    // 0x2b985c: 0x46000144  c1          0x144
    ctx->pc = 0x2b985cu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b9860: 0xc78090ec  lwc1        $f0, -0x6F14($gp)
    ctx->pc = 0x2b9860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9864: 0xc78290f0  lwc1        $f2, -0x6F10($gp)
    ctx->pc = 0x2b9864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9868: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x2b9868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b986c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B986Cu;
    {
        const bool branch_taken_0x2b986c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B986Cu;
        // 0x2b9870: 0x4600b846  mov.s       $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b986c) {
            ctx->pc = 0x2B9880u;
            goto label_2b9880;
        }
    }
    ctx->pc = 0x2B9874u;
    // 0x2b9874: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9874u;
    {
        const bool branch_taken_0x2b9874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9874u;
        // 0x2b9878: 0x46171041  sub.s       $f1, $f2, $f23 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9874) {
            ctx->pc = 0x2B9898u;
            goto label_2b9898;
        }
    }
    ctx->pc = 0x2B987Cu;
    // 0x2b987c: 0x0  nop
    ctx->pc = 0x2b987cu;
    // NOP
label_2b9880:
    // 0x2b9880: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b9880u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b9884: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2b9884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9888: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9888u;
    {
        const bool branch_taken_0x2b9888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9888) {
            ctx->pc = 0x2B9898u;
            goto label_2b9898;
        }
    }
    ctx->pc = 0x2B9890u;
    // 0x2b9890: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2b9890u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2b9894: 0x46170041  sub.s       $f1, $f0, $f23
    ctx->pc = 0x2b9894u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_2b9898:
    // 0x2b9898: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2b9898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b989c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b989cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b98a0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2b98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2b98a4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2b98a4u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b98a8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2b98a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b98ac: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x2b98acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b98b0: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x2b98b0u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b98b4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x2b98b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x2b98b8: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2b98b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b98bc: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2b98bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2b98c0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2b98c0u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b98c4: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x2b98c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b98c8: 0x4606181e  madda.s     $f3, $f6
    ctx->pc = 0x2b98c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6])));
    // 0x2b98cc: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x2b98ccu;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b98d0: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2b98d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b98d4: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2b98d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2b98d8: 0x4606181c  madd.s      $f0, $f3, $f6
    ctx->pc = 0x2b98d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x2b98dc: 0xc78290f4  lwc1        $f2, -0x6F0C($gp)
    ctx->pc = 0x2b98dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b98e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b98e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b98e4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2b98e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b98e8: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x2b98e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b98ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B98ECu;
    {
        const bool branch_taken_0x2b98ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98ECu;
        // 0x2b98f0: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b98ec) {
            ctx->pc = 0x2B9900u;
            goto label_2b9900;
        }
    }
    ctx->pc = 0x2B98F4u;
    // 0x2b98f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B98F4u;
    {
        const bool branch_taken_0x2b98f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98F4u;
        // 0x2b98f8: 0x4602b800  add.s       $f0, $f23, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b98f4) {
            ctx->pc = 0x2B9908u;
            goto label_2b9908;
        }
    }
    ctx->pc = 0x2B98FCu;
    // 0x2b98fc: 0x0  nop
    ctx->pc = 0x2b98fcu;
    // NOP
label_2b9900:
    // 0x2b9900: 0x46171001  sub.s       $f0, $f2, $f23
    ctx->pc = 0x2b9900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[23]);
    // 0x2b9904: 0xc78290f8  lwc1        $f2, -0x6F08($gp)
    ctx->pc = 0x2b9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b9908:
    // 0x2b9908: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b9908u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2b990c: 0xc78390fc  lwc1        $f3, -0x6F04($gp)
    ctx->pc = 0x2b990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9910: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2b9910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9914: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9914u;
    {
        const bool branch_taken_0x2b9914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9914) {
            ctx->pc = 0x2B9918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9914u;
            // 0x2b9918: 0x46001007  neg.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9928u;
            goto label_2b9928;
        }
    }
    ctx->pc = 0x2B991Cu;
    // 0x2b991c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B991Cu;
    {
        const bool branch_taken_0x2b991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B991Cu;
        // 0x2b9920: 0x46011841  sub.s       $f1, $f3, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b991c) {
            ctx->pc = 0x2B993Cu;
            goto label_2b993c;
        }
    }
    ctx->pc = 0x2B9924u;
    // 0x2b9924: 0x0  nop
    ctx->pc = 0x2b9924u;
    // NOP
label_2b9928:
    // 0x2b9928: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b992c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B992Cu;
    {
        const bool branch_taken_0x2b992c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b992c) {
            ctx->pc = 0x2B993Cu;
            goto label_2b993c;
        }
    }
    ctx->pc = 0x2B9934u;
    // 0x2b9934: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2b9934u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2b9938: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2b9938u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2b993c:
    // 0x2b993c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2b993cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b9940: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b9940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b9944: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2b9944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2b9948: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2b9948u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b994c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2b994cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b9950: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x2b9950u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b9954: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x2b9954u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b9958: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x2b9958u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x2b995c: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2b995cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b9960: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2b9960u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2b9964: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2b9964u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9968: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x2b9968u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b996c: 0x4606181e  madda.s     $f3, $f6
    ctx->pc = 0x2b996cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6])));
    // 0x2b9970: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x2b9970u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b9974: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2b9974u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b9978: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2b9978u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2b997c: 0x4606181c  madd.s      $f0, $f3, $f6
    ctx->pc = 0x2b997cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x2b9980: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b9980u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b9984: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2b9984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2b9988: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2b9988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b998c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b998cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9990:
    // 0x2b9990: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b9990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9994: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2B9994u;
    SET_GPR_U32(ctx, 31, 0x2B999Cu);
    ctx->pc = 0x2B9998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9994u;
    // 0x2b9998: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2B9994u, 0x2B999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B999Cu;
label_2b999c:
    // 0x2b999c: 0x7a6201f0  lq          $v0, 0x1F0($s3)
    ctx->pc = 0x2b999cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 496)));
    // 0x2b99a0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2b99a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2b99a4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2b99a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b99a8: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x2b99a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b99ac: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x2b99acu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b99b0: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x2b99b0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2b99b4: 0xdae80000  lqc2        $vf8, 0x0($s7)
    ctx->pc = 0x2b99b4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2b99b8: 0xdae90010  lqc2        $vf9, 0x10($s7)
    ctx->pc = 0x2b99b8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2b99bc: 0xdaea0020  lqc2        $vf10, 0x20($s7)
    ctx->pc = 0x2b99bcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x2b99c0: 0xdaeb0030  lqc2        $vf11, 0x30($s7)
    ctx->pc = 0x2b99c0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x2b99c4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2b99c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99c8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2b99c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99cc: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2b99ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99d0: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2b99d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b99d4: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2b99d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99d8: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2b99d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99dc: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2b99dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99e0: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2b99e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b99e4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2b99e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99e8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2b99e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99ec: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2b99ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99f0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2b99f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b99f4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2b99f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99f8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2b99f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b99fc: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2b99fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9a00: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2b9a00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2b9a04: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2b9a04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b9a08: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2b9a08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b9a0c: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2b9a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b9a10: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2b9a10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b9a14: 0xc6600270  lwc1        $f0, 0x270($s3)
    ctx->pc = 0x2b9a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9a18: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2b9a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9a1c: 0xc7829100  lwc1        $f2, -0x6F00($gp)
    ctx->pc = 0x2b9a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9a20: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x2b9a20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b9a24: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b9a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b9a28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b9a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b9a2c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b9a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b9a30: 0x0  nop
    ctx->pc = 0x2b9a30u;
    // NOP
    // 0x2b9a34: 0x0  nop
    ctx->pc = 0x2b9a34u;
    // NOP
    // 0x2b9a38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b9a38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2b9a3c: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2b9a3cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b9a40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b9a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b9a44: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b9a44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b9a48: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2b9a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9a4c: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2b9a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b9a50: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2b9a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9a54: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b9a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9a58: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b9a5c: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2b9a5cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9a60: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2b9a60u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b9a64: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2b9a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9a68: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b9a68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b9a6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b9a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9a70: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2b9a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9a74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b9a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9a78: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9A78u;
    {
        const bool branch_taken_0x2b9a78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A78u;
        // 0x2b9a7c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a78) {
            ctx->pc = 0x2B9A90u;
            goto label_2b9a90;
        }
    }
    ctx->pc = 0x2B9A80u;
    // 0x2b9a80: 0xc6c00020  lwc1        $f0, 0x20($s6)
    ctx->pc = 0x2b9a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9a84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b9a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9a88: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2b9a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b9a8c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2b9a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b9a90:
    // 0x2b9a90: 0xc6c2001c  lwc1        $f2, 0x1C($s6)
    ctx->pc = 0x2b9a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9a94: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2b9a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9a98: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9A98u;
    {
        const bool branch_taken_0x2b9a98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A98u;
        // 0x2b9a9c: 0x267007c0  addiu       $s0, $s3, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a98) {
            ctx->pc = 0x2B9AB4u;
            goto label_2b9ab4;
        }
    }
    ctx->pc = 0x2B9AA0u;
    // 0x2b9aa0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b9aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b9aa4: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x2b9aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9aa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b9aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b9aac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b9aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b9ab0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b9ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2b9ab4:
    // 0x2b9ab4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2b9ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2b9ab8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b9ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b9abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ac0: 0xc0aef22  jal         func_2BBC88
    ctx->pc = 0x2B9AC0u;
    SET_GPR_U32(ctx, 31, 0x2B9AC8u);
    ctx->pc = 0x2B9AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9AC0u;
    // 0x2b9ac4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC88u, 0x2B9AC0u, 0x2B9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AC8u;
label_2b9ac8:
    // 0x2b9ac8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2b9ac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9acc: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2b9accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2b9ad0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b9ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2b9ad4: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2b9ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b9ad8: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x2b9ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b9adc: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2B9ADCu;
    SET_GPR_U32(ctx, 31, 0x2B9AE4u);
    ctx->pc = 0x2B9AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9ADCu;
    // 0x2b9ae0: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2B9ADCu, 0x2B9AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AE4u;
label_2b9ae4:
    // 0x2b9ae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b9ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b9ae8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b9ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b9aec: 0x8ec30028  lw          $v1, 0x28($s6)
    ctx->pc = 0x2b9aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x2b9af0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b9af0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2b9af4: 0xc7809104  lwc1        $f0, -0x6EFC($gp)
    ctx->pc = 0x2b9af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9af8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2b9af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b9afc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2b9afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2b9b00: 0xe7a3016c  swc1        $f3, 0x16C($sp)
    ctx->pc = 0x2b9b00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x2b9b04: 0xe7a30168  swc1        $f3, 0x168($sp)
    ctx->pc = 0x2b9b04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2b9b08: 0xe7a30164  swc1        $f3, 0x164($sp)
    ctx->pc = 0x2b9b08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2b9b0c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2b9b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b9b10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b9b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9b14: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2B9B14u;
    {
        const bool branch_taken_0x2b9b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B14u;
        // 0x2b9b18: 0xe7a30160  swc1        $f3, 0x160($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b14) {
            ctx->pc = 0x2B9B54u;
            goto label_2b9b54;
        }
    }
    ctx->pc = 0x2B9B1Cu;
    // 0x2b9b1c: 0xc7809108  lwc1        $f0, -0x6EF8($gp)
    ctx->pc = 0x2b9b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9b20: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2b9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2b9b24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2b9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b9b28: 0xc6c20024  lwc1        $f2, 0x24($s6)
    ctx->pc = 0x2b9b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9b2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b9b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9b30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b9b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b9b34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b9b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b9b38: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2b9b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2b9b3c: 0x0  nop
    ctx->pc = 0x2b9b3cu;
    // NOP
    // 0x2b9b40: 0x0  nop
    ctx->pc = 0x2b9b40u;
    // NOP
    // 0x2b9b44: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b9b44u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2b9b48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b9b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b9b4c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2b9b4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2b9b50: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2b9b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2b9b54:
    // 0x2b9b54: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x2b9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2b9b58: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2b9b58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b9b5c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2b9b5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b9b60: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2b9b60u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b9b64: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2b9b64u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b9b68: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2b9b68u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2b9b6c: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2b9b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b9b70: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2b9b70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b9b74: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2b9b74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b9b78: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2b9b78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b9b7c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x2b9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2b9b80: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b9b80u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9b84: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2b9b84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b9b88: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2b9b88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b9b8c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2b9b8cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b9b90: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2b9b90u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2b9b94: 0x4bd0212a  vmul.xyz    $vf4, $vf4, $vf16
    ctx->pc = 0x2b9b94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b9b98: 0x4bd0296a  vmul.xyz    $vf5, $vf5, $vf16
    ctx->pc = 0x2b9b98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b9b9c: 0x4bd031aa  vmul.xyz    $vf6, $vf6, $vf16
    ctx->pc = 0x2b9b9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b9ba0: 0x4bd039ea  vmul.xyz    $vf7, $vf7, $vf16
    ctx->pc = 0x2b9ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2b9ba4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2b9ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b9ba8: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2b9ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b9bac: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2b9bacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b9bb0: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2b9bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b9bb4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2b9bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2b9bb8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2b9bb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9bbc: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2b9bbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b9bc0: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2b9bc0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2b9bc4: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2b9bc4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b9bc8: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x2b9bc8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9bcc: 0xda090010  lqc2        $vf9, 0x10($s0)
    ctx->pc = 0x2b9bccu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b9bd0: 0xda0a0020  lqc2        $vf10, 0x20($s0)
    ctx->pc = 0x2b9bd0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b9bd4: 0xda0b0030  lqc2        $vf11, 0x30($s0)
    ctx->pc = 0x2b9bd4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b9bd8: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2b9bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9bdc: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2b9bdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9be0: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2b9be0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9be4: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2b9be4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b9be8: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2b9be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9bec: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2b9becu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9bf0: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2b9bf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9bf4: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2b9bf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b9bf8: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2b9bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9bfc: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2b9bfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9c00: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2b9c00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9c04: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2b9c04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b9c08: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2b9c08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9c0c: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2b9c0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9c10: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2b9c10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b9c14: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2b9c14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2b9c18: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2b9c18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b9c1c: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2b9c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b9c20: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2b9c20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b9c24: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2b9c24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b9c28: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2b9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2b9c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c34: 0xc04a151  jal         func_128544
    ctx->pc = 0x2B9C34u;
    SET_GPR_U32(ctx, 31, 0x2B9C3Cu);
    ctx->pc = 0x2B9C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C34u;
    // 0x2b9c38: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2B9C34u, 0x2B9C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C3Cu;
label_2b9c3c:
    // 0x2b9c3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b9c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b9c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b9c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b9c44: 0xc780910c  lwc1        $f0, -0x6EF4($gp)
    ctx->pc = 0x2b9c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9c48: 0x27be0110  addiu       $fp, $sp, 0x110
    ctx->pc = 0x2b9c48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2b9c4c: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x2b9c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x2b9c50: 0xc7829110  lwc1        $f2, -0x6EF0($gp)
    ctx->pc = 0x2b9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9c54: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2b9c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2b9c58: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2b9c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9c5c: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x2b9c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2b9c60: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2b9c60u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x2b9c64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9c68: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x2b9c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2b9c6c: 0xc7829114  lwc1        $f2, -0x6EEC($gp)
    ctx->pc = 0x2b9c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9c70: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9C70u;
    {
        const bool branch_taken_0x2b9c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C70u;
        // 0x2b9c74: 0xafa0011c  sw          $zero, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c70) {
            ctx->pc = 0x2B9C88u;
            goto label_2b9c88;
        }
    }
    ctx->pc = 0x2B9C78u;
    // 0x2b9c78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b9c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b9c7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9C7Cu;
    {
        const bool branch_taken_0x2b9c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C7Cu;
        // 0x2b9c80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c7c) {
            ctx->pc = 0x2B9C90u;
            goto label_2b9c90;
        }
    }
    ctx->pc = 0x2B9C84u;
    // 0x2b9c84: 0x0  nop
    ctx->pc = 0x2b9c84u;
    // NOP
label_2b9c88:
    // 0x2b9c88: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2b9c88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b9c8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b9c8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c90:
    // 0x2b9c90: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b9c90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b9c94: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2b9c94u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b9c98: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b9c9c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2b9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2b9ca0: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2b9ca0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2b9ca4: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2b9ca4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2b9ca8: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2b9ca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cac: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2b9cacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cb0: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2b9cb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cb4: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9cb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cb8: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cbc: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2b9cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cc0: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9cc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cc4: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2b9cc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cc8: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9cc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9ccc: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2b9cccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cd0: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2b9cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cd4: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2b9cd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2b9cd8: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2b9cd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9CDCu;
    {
        const bool branch_taken_0x2b9cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CDCu;
        // 0x2b9ce0: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cdc) {
            ctx->pc = 0x2B9CF0u;
            goto label_2b9cf0;
        }
    }
    ctx->pc = 0x2B9CE4u;
    // 0x2b9ce4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b9ce4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b9ce8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9CE8u;
    {
        const bool branch_taken_0x2b9ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CE8u;
        // 0x2b9cec: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ce8) {
            ctx->pc = 0x2B9CF8u;
            goto label_2b9cf8;
        }
    }
    ctx->pc = 0x2B9CF0u;
label_2b9cf0:
    // 0x2b9cf0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b9cf0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b9cf4: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2b9cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2b9cf8:
    // 0x2b9cf8: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x2b9cf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b9cfc: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x2b9cfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d00: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x2b9d00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d04: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2b9d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d08: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2b9d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d0c: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x2b9d0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d10: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x2b9d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d14: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x2b9d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d18: 0xc7829118  lwc1        $f2, -0x6EE8($gp)
    ctx->pc = 0x2b9d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9d1c: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x2b9d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9d20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b9d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9d24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9d28: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9D28u;
    {
        const bool branch_taken_0x2b9d28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9d28) {
            ctx->pc = 0x2B9D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D28u;
            // 0x2b9d2c: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D40u;
            goto label_2b9d40;
        }
    }
    ctx->pc = 0x2B9D30u;
    // 0x2b9d30: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b9d30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b9d34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9D34u;
    {
        const bool branch_taken_0x2b9d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D34u;
        // 0x2b9d38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d34) {
            ctx->pc = 0x2B9D44u;
            goto label_2b9d44;
        }
    }
    ctx->pc = 0x2B9D3Cu;
    // 0x2b9d3c: 0x0  nop
    ctx->pc = 0x2b9d3cu;
    // NOP
label_2b9d40:
    // 0x2b9d40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b9d40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d44:
    // 0x2b9d44: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b9d44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b9d48: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2b9d48u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b9d4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b9d50: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2b9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2b9d54: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2b9d54u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2b9d58: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2b9d58u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d5c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2b9d5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d60: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2b9d60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d64: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2b9d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d68: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9d68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d6c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d70: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2b9d70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d74: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9d74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d78: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2b9d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d7c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9d7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d80: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2b9d80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d84: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2b9d84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d88: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2b9d88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2b9d8c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2b9d8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9d90: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9D90u;
    {
        const bool branch_taken_0x2b9d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D90u;
        // 0x2b9d94: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d90) {
            ctx->pc = 0x2B9DA8u;
            goto label_2b9da8;
        }
    }
    ctx->pc = 0x2B9D98u;
    // 0x2b9d98: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b9d98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b9d9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9D9Cu;
    {
        const bool branch_taken_0x2b9d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D9Cu;
        // 0x2b9da0: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d9c) {
            ctx->pc = 0x2B9DB0u;
            goto label_2b9db0;
        }
    }
    ctx->pc = 0x2B9DA4u;
    // 0x2b9da4: 0x0  nop
    ctx->pc = 0x2b9da4u;
    // NOP
label_2b9da8:
    // 0x2b9da8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b9da8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b9dac: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2b9dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2b9db0:
    // 0x2b9db0: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2b9db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9db4: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2b9db4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9db8: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2b9db8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9dbc: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2b9dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2b9dc0: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2b9dc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b9dc4: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2b9dc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2b9dc8: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2b9dc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b9dcc: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2b9dccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2b9dd0: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2b9dd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b9dd4: 0xc782911c  lwc1        $f2, -0x6EE4($gp)
    ctx->pc = 0x2b9dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9dd8: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x2b9dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b9ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9de0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9de4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9DE4u;
    {
        const bool branch_taken_0x2b9de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9de4) {
            ctx->pc = 0x2B9DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9DE4u;
            // 0x2b9de8: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9DF8u;
            goto label_2b9df8;
        }
    }
    ctx->pc = 0x2B9DECu;
    // 0x2b9dec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b9decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b9df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9DF0u;
    {
        const bool branch_taken_0x2b9df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DF0u;
        // 0x2b9df4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9df0) {
            ctx->pc = 0x2B9DFCu;
            goto label_2b9dfc;
        }
    }
    ctx->pc = 0x2B9DF8u;
label_2b9df8:
    // 0x2b9df8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b9df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9dfc:
    // 0x2b9dfc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b9dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b9e00: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2b9e00u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b9e04: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b9e08: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2b9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2b9e0c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2b9e0cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2b9e10: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2b9e10u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e14: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2b9e14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e18: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2b9e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e1c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2b9e1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e20: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9e20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e24: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e28: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2b9e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e2c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e30: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2b9e30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e34: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2b9e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e38: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2b9e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e3c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2b9e3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e40: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2b9e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2b9e44: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2b9e44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9E48u;
    {
        const bool branch_taken_0x2b9e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E48u;
        // 0x2b9e4c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e48) {
            ctx->pc = 0x2B9E60u;
            goto label_2b9e60;
        }
    }
    ctx->pc = 0x2B9E50u;
    // 0x2b9e50: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b9e50u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b9e54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9E54u;
    {
        const bool branch_taken_0x2b9e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E54u;
        // 0x2b9e58: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e54) {
            ctx->pc = 0x2B9E68u;
            goto label_2b9e68;
        }
    }
    ctx->pc = 0x2B9E5Cu;
    // 0x2b9e5c: 0x0  nop
    ctx->pc = 0x2b9e5cu;
    // NOP
label_2b9e60:
    // 0x2b9e60: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b9e60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b9e64: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2b9e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2b9e68:
    // 0x2b9e68: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x2b9e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e6c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2b9e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e70: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x2b9e70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e74: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x2b9e74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2b9e78: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x2b9e78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e7c: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x2b9e7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2b9e80: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x2b9e80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e84: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x2b9e84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2b9e88: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x2b9e88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b9e8c: 0xfa800030  sqc2        $vf0, 0x30($s4)
    ctx->pc = 0x2b9e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b9e90: 0xfa840000  sqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2b9e90u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b9e94: 0xfa850010  sqc2        $vf5, 0x10($s4)
    ctx->pc = 0x2b9e94u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b9e98: 0xfa860020  sqc2        $vf6, 0x20($s4)
    ctx->pc = 0x2b9e98u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b9e9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ea0: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x2B9EA0u;
    SET_GPR_U32(ctx, 31, 0x2B9EA8u);
    ctx->pc = 0x2B9EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9EA0u;
    // 0x2b9ea4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x2B9EA0u, 0x2B9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9EA8u;
label_2b9ea8:
    // 0x2b9ea8: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x2b9ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b9eac: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x2b9eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9eb0: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2b9eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9eb4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2b9eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9eb8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2b9eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9ebc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9ec0: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x2b9ec0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x2b9ec4: 0x4601201e  madda.s     $f4, $f1
    ctx->pc = 0x2b9ec4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1])));
    // 0x2b9ec8: 0x46001d1c  madd.s      $f20, $f3, $f0
    ctx->pc = 0x2b9ec8u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2b9ecc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2b9eccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ed0: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x2b9ed0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
    // 0x2b9ed4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2b9ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ed8: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x2b9ed8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9edc: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2b9edcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b9ee0: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x2b9ee0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b9ee4: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x2b9ee4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9ee8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b9ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b9eec: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2b9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9ef0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2b9ef0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b9ef4: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2b9ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b9ef8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2b9ef8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b9efc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2b9efcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b9f00: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2b9f00u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2b9f04: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b9f04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b9f08: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2b9f08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9f0c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2b9f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b9f10: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2b9f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b9f14: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x2B9F14u;
    SET_GPR_U32(ctx, 31, 0x2B9F1Cu);
    ctx->pc = 0x2B9F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F14u;
    // 0x2b9f18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x2B9F14u, 0x2B9F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F1Cu;
label_2b9f1c:
    // 0x2b9f1c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2b9f1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9f20: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2b9f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9f24: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b9f24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b9f28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b9f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f2c: 0xc097066  jal         func_25C198
    ctx->pc = 0x2B9F2Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F34u);
    ctx->pc = 0x2B9F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F2Cu;
    // 0x2b9f30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x2B9F2Cu, 0x2B9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F34u;
label_2b9f34:
    // 0x2b9f34: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b9f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f38: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x2b9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2b9f3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b9f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f40: 0xc097184  jal         func_25C610
    ctx->pc = 0x2B9F40u;
    SET_GPR_U32(ctx, 31, 0x2B9F48u);
    ctx->pc = 0x2B9F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F40u;
    // 0x2b9f44: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x2B9F40u, 0x2B9F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F48u;
label_2b9f48:
    // 0x2b9f48: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2b9f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9f4c: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x2B9F4Cu;
    {
        const bool branch_taken_0x2b9f4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F4Cu;
        // 0x2b9f50: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f4c) {
            ctx->pc = 0x2BA000u;
            goto label_2ba000;
        }
    }
    ctx->pc = 0x2B9F54u;
    // 0x2b9f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b9f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b9f58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b9f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b9f5c: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x2B9F5Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F64u);
    ctx->pc = 0x2B9F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F5Cu;
    // 0x2b9f60: 0x4600c307  neg.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x2B9F5Cu, 0x2B9F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F64u;
label_2b9f64:
    // 0x2b9f64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b9f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f68: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2b9f68u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2b9f6c: 0xc097066  jal         func_25C198
    ctx->pc = 0x2B9F6Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F74u);
    ctx->pc = 0x2B9F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F6Cu;
    // 0x2b9f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x2B9F6Cu, 0x2B9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F74u;
label_2b9f74:
    // 0x2b9f74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b9f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b9f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f7c: 0xc097184  jal         func_25C610
    ctx->pc = 0x2B9F7Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F84u);
    ctx->pc = 0x2B9F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F7Cu;
    // 0x2b9f80: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x2B9F7Cu, 0x2B9F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F84u;
label_2b9f84:
    // 0x2b9f84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b9f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f88: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2b9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2b9f8c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b9f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f94: 0xe7b5018c  swc1        $f21, 0x18C($sp)
    ctx->pc = 0x2b9f94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2b9f98: 0xe7b50180  swc1        $f21, 0x180($sp)
    ctx->pc = 0x2b9f98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2b9f9c: 0xe7b50184  swc1        $f21, 0x184($sp)
    ctx->pc = 0x2b9f9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x2b9fa0: 0xc097184  jal         func_25C610
    ctx->pc = 0x2B9FA0u;
    SET_GPR_U32(ctx, 31, 0x2B9FA8u);
    ctx->pc = 0x2B9FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9FA0u;
    // 0x2b9fa4: 0xe7b40188  swc1        $f20, 0x188($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x2B9FA0u, 0x2B9FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9FA8u;
label_2b9fa8:
    // 0x2b9fa8: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x2b9fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b9fac: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2b9facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9fb0: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x2b9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b9fb4: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2b9fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b9fb8: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x2b9fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9fbc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2b9fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9fc0: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x2b9fc0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[5]));
    // 0x2b9fc4: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2b9fc4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2b9fc8: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x2b9fc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2b9fcc: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x2b9fccu;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x2b9fd0: 0xc7829120  lwc1        $f2, -0x6EE0($gp)
    ctx->pc = 0x2b9fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9fd4: 0x46026002  mul.s       $f0, $f12, $f2
    ctx->pc = 0x2b9fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2b9fd8: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2b9fd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b9fdc: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x2b9fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9fe0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B9FE0u;
    {
        const bool branch_taken_0x2b9fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9fe0) {
            ctx->pc = 0x2B9FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9FE0u;
            // 0x2b9fe4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9FE8u;
            goto label_2b9fe8;
        }
    }
    ctx->pc = 0x2B9FE8u;
label_2b9fe8:
    // 0x2b9fe8: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x2b9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2b9fec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b9fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ff0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b9ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ff4: 0xc097110  jal         func_25C440
    ctx->pc = 0x2B9FF4u;
    SET_GPR_U32(ctx, 31, 0x2B9FFCu);
    ctx->pc = 0x2B9FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9FF4u;
    // 0x2b9ff8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x2B9FF4u, 0x2B9FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9FFCu;
label_2b9ffc:
    // 0x2b9ffc: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2b9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2ba000:
    // 0x2ba000: 0x26640900  addiu       $a0, $s3, 0x900
    ctx->pc = 0x2ba000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2304));
    // 0x2ba004: 0xc097084  jal         func_25C210
    ctx->pc = 0x2BA004u;
    SET_GPR_U32(ctx, 31, 0x2BA00Cu);
    ctx->pc = 0x2BA008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA004u;
    // 0x2ba008: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2BA004u, 0x2BA00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA00Cu;
label_2ba00c:
    // 0x2ba00c: 0x26630220  addiu       $v1, $s3, 0x220
    ctx->pc = 0x2ba00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
    // 0x2ba010: 0x26620920  addiu       $v0, $s3, 0x920
    ctx->pc = 0x2ba010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2336));
    // 0x2ba014: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2ba014u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ba018: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2ba018u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba01c: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2ba01cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba020: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2ba020u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba024: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2ba024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba028: 0x26640940  addiu       $a0, $s3, 0x940
    ctx->pc = 0x2ba028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
    // 0x2ba02c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ba02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba030: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2BA030u;
    SET_GPR_U32(ctx, 31, 0x2BA038u);
    ctx->pc = 0x2BA034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA030u;
    // 0x2ba034: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2BA030u, 0x2BA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA038u;
label_2ba038:
    // 0x2ba038: 0x7a630270  lq          $v1, 0x270($s3)
    ctx->pc = 0x2ba038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x2ba03c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ba03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ba040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ba040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba044: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2ba044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2ba048: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2ba048u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba04c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ba04cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ba050: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ba050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ba054: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2ba054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba058: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2ba058u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba05c: 0x26630970  addiu       $v1, $s3, 0x970
    ctx->pc = 0x2ba05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2416));
    // 0x2ba060: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2ba060u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba064: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x2ba064u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ba068: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x2ba068u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ba06c: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x2ba06cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2ba070: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2ba070u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba074: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2ba074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba078: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2ba078u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba07c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2ba07cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba080: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2ba080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba084: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2ba084u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba088: 0x26630200  addiu       $v1, $s3, 0x200
    ctx->pc = 0x2ba088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x2ba08c: 0x266406f0  addiu       $a0, $s3, 0x6F0
    ctx->pc = 0x2ba08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1776));
    // 0x2ba090: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x2ba090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x2ba094: 0x26620270  addiu       $v0, $s3, 0x270
    ctx->pc = 0x2ba094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 624));
    // 0x2ba098: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ba098u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ba09c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2ba09cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ba0a0: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2ba0a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2ba0a4: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2ba0a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2ba0a8: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2ba0a8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba0ac: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2ba0acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba0b0: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2ba0b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba0b4: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2ba0b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba0b8: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2ba0b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba0bc: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2ba0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba0c0: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2ba0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2ba0c4: 0xc66c0244  lwc1        $f12, 0x244($s3)
    ctx->pc = 0x2ba0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ba0c8: 0x26700a00  addiu       $s0, $s3, 0xA00
    ctx->pc = 0x2ba0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2560));
    // 0x2ba0cc: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2BA0CCu;
    SET_GPR_U32(ctx, 31, 0x2BA0D4u);
    ctx->pc = 0x2BA0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA0CCu;
    // 0x2ba0d0: 0xc66d0240  lwc1        $f13, 0x240($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2BA0CCu, 0x2BA0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0D4u;
label_2ba0d4:
    // 0x2ba0d4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2ba0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2ba0d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ba0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba0dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2ba0dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ba0e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ba0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ba0e4: 0xc7819124  lwc1        $f1, -0x6EDC($gp)
    ctx->pc = 0x2ba0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba0e8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2ba0e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba0ec: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA0ECu;
    {
        const bool branch_taken_0x2ba0ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba0ec) {
            ctx->pc = 0x2BA0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA0ECu;
            // 0x2ba0f0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA100u;
            goto label_2ba100;
        }
    }
    ctx->pc = 0x2BA0F4u;
    // 0x2ba0f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ba0f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ba0f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA0F8u;
    {
        const bool branch_taken_0x2ba0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0F8u;
        // 0x2ba0fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0f8) {
            ctx->pc = 0x2BA104u;
            goto label_2ba104;
        }
    }
    ctx->pc = 0x2BA100u;
label_2ba100:
    // 0x2ba100: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ba100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba104:
    // 0x2ba104: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ba104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ba108: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2ba108u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ba10c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ba10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ba110: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2ba110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2ba114: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2ba114u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2ba118: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2ba118u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ba11c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2ba11cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba120: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2ba120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ba124: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2ba124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba128: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba12c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba12cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba130: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2ba130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba134: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba138: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2ba138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba13c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba13cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba140: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2ba140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba144: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2ba144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba148: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2ba148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2ba14c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2ba14cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba150: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA150u;
    {
        const bool branch_taken_0x2ba150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA150u;
        // 0x2ba154: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba150) {
            ctx->pc = 0x2BA168u;
            goto label_2ba168;
        }
    }
    ctx->pc = 0x2BA158u;
    // 0x2ba158: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ba158u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2ba15c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA15Cu;
    {
        const bool branch_taken_0x2ba15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA15Cu;
        // 0x2ba160: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba15c) {
            ctx->pc = 0x2BA170u;
            goto label_2ba170;
        }
    }
    ctx->pc = 0x2BA164u;
    // 0x2ba164: 0x0  nop
    ctx->pc = 0x2ba164u;
    // NOP
label_2ba168:
    // 0x2ba168: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ba168u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2ba16c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2ba16cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2ba170:
    // 0x2ba170: 0x4a60012c  vsub.zw     $vf4, $vf0, $vf0
    ctx->pc = 0x2ba170u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ba174: 0x4a60016c  vsub.zw     $vf5, $vf0, $vf0
    ctx->pc = 0x2ba174u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba178: 0x4ba001ac  vsub.xyw    $vf6, $vf0, $vf0
    ctx->pc = 0x2ba178u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ba17c: 0x4a400183  vaddw.z     $vf6, $vf0, $vf0w
    ctx->pc = 0x2ba17cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ba180: 0x4b1c0101  vaddy.x     $vf4, $vf0, $vf28y
    ctx->pc = 0x2ba180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ba184: 0x4b1c0144  vsubx.x     $vf5, $vf0, $vf28x
    ctx->pc = 0x2ba184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba188: 0x4a9c0100  vaddx.y     $vf4, $vf0, $vf28x
    ctx->pc = 0x2ba188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ba18c: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2ba18cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba190: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2ba190u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ba194: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2ba194u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ba198: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2ba198u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2ba19c: 0xc7809128  lwc1        $f0, -0x6ED8($gp)
    ctx->pc = 0x2ba19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba1a0: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x2ba1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x2ba1a4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2ba1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2ba1a8: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x2ba1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x2ba1ac: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x2ba1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x2ba1b0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2ba1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba1b4: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2ba1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba1b8: 0xc782912c  lwc1        $f2, -0x6ED4($gp)
    ctx->pc = 0x2ba1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba1bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ba1bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba1c0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA1C0u;
    {
        const bool branch_taken_0x2ba1c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba1c0) {
            ctx->pc = 0x2BA1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA1C0u;
            // 0x2ba1c4: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA1D8u;
            goto label_2ba1d8;
        }
    }
    ctx->pc = 0x2BA1C8u;
    // 0x2ba1c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ba1c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ba1cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA1CCu;
    {
        const bool branch_taken_0x2ba1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1CCu;
        // 0x2ba1d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1cc) {
            ctx->pc = 0x2BA1DCu;
            goto label_2ba1dc;
        }
    }
    ctx->pc = 0x2BA1D4u;
    // 0x2ba1d4: 0x0  nop
    ctx->pc = 0x2ba1d4u;
    // NOP
label_2ba1d8:
    // 0x2ba1d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ba1d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1dc:
    // 0x2ba1dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ba1dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ba1e0: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2ba1e0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ba1e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ba1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ba1e8: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2ba1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2ba1ec: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2ba1ecu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2ba1f0: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2ba1f0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ba1f4: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2ba1f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba1f8: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2ba1f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ba1fc: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2ba1fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba200: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba204: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba208: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2ba208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba20c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba20cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba210: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2ba210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba214: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba218: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2ba218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba21c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2ba21cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba220: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2ba220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2ba224: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2ba224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba228: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA228u;
    {
        const bool branch_taken_0x2ba228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA228u;
        // 0x2ba22c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba228) {
            ctx->pc = 0x2BA240u;
            goto label_2ba240;
        }
    }
    ctx->pc = 0x2BA230u;
    // 0x2ba230: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ba230u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2ba234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA234u;
    {
        const bool branch_taken_0x2ba234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA234u;
        // 0x2ba238: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba234) {
            ctx->pc = 0x2BA248u;
            goto label_2ba248;
        }
    }
    ctx->pc = 0x2BA23Cu;
    // 0x2ba23c: 0x0  nop
    ctx->pc = 0x2ba23cu;
    // NOP
label_2ba240:
    // 0x2ba240: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ba240u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2ba244: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2ba244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2ba248:
    // 0x2ba248: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x2ba248u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ba24c: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x2ba24cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba250: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x2ba250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ba254: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2ba254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ba258: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2ba258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba25c: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x2ba25cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ba260: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x2ba260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba264: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x2ba264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ba268: 0xc7829130  lwc1        $f2, -0x6ED0($gp)
    ctx->pc = 0x2ba268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba26c: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x2ba26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ba270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ba274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba278: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA278u;
    {
        const bool branch_taken_0x2ba278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba278) {
            ctx->pc = 0x2BA27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA278u;
            // 0x2ba27c: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA290u;
            goto label_2ba290;
        }
    }
    ctx->pc = 0x2BA280u;
    // 0x2ba280: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ba280u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ba284: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA284u;
    {
        const bool branch_taken_0x2ba284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA284u;
        // 0x2ba288: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba284) {
            ctx->pc = 0x2BA294u;
            goto label_2ba294;
        }
    }
    ctx->pc = 0x2BA28Cu;
    // 0x2ba28c: 0x0  nop
    ctx->pc = 0x2ba28cu;
    // NOP
label_2ba290:
    // 0x2ba290: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ba290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba294:
    // 0x2ba294: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ba294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ba298: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2ba298u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ba29c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ba29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ba2a0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2ba2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2ba2a4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2ba2a4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2ba2a8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2ba2a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2ac: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2ba2acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2b0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2ba2b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2b4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2ba2b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2b8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2bc: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba2bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2c0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2ba2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2c4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba2c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2c8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2ba2c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2cc: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba2ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2d0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2ba2d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2d4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2ba2d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2d8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2ba2d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2ba2dc: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2ba2dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba2e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA2E0u;
    {
        const bool branch_taken_0x2ba2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2E0u;
        // 0x2ba2e4: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2e0) {
            ctx->pc = 0x2BA2F8u;
            goto label_2ba2f8;
        }
    }
    ctx->pc = 0x2BA2E8u;
    // 0x2ba2e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ba2e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2ba2ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA2ECu;
    {
        const bool branch_taken_0x2ba2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2ECu;
        // 0x2ba2f0: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2ec) {
            ctx->pc = 0x2BA300u;
            goto label_2ba300;
        }
    }
    ctx->pc = 0x2BA2F4u;
    // 0x2ba2f4: 0x0  nop
    ctx->pc = 0x2ba2f4u;
    // NOP
label_2ba2f8:
    // 0x2ba2f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ba2f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2ba2fc: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2ba2fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2ba300:
    // 0x2ba300: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2ba300u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba304: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2ba304u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba308: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2ba308u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba30c: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2ba30cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2ba310: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2ba310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ba314: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2ba314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2ba318: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2ba318u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba31c: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2ba31cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2ba320: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2ba320u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ba324: 0xc7829134  lwc1        $f2, -0x6ECC($gp)
    ctx->pc = 0x2ba324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba328: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x2ba328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba32c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ba32cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba330: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ba330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba334: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA334u;
    {
        const bool branch_taken_0x2ba334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba334) {
            ctx->pc = 0x2BA338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA334u;
            // 0x2ba338: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA348u;
            goto label_2ba348;
        }
    }
    ctx->pc = 0x2BA33Cu;
    // 0x2ba33c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ba33cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ba340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA340u;
    {
        const bool branch_taken_0x2ba340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA340u;
        // 0x2ba344: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba340) {
            ctx->pc = 0x2BA34Cu;
            goto label_2ba34c;
        }
    }
    ctx->pc = 0x2BA348u;
label_2ba348:
    // 0x2ba348: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ba348u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba34c:
    // 0x2ba34c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ba34cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ba350: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2ba350u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ba354: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ba354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ba358: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2ba358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2ba35c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2ba35cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2ba360: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2ba360u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ba364: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2ba364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba368: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2ba368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2ba36c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2ba36cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba370: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba374: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba378: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2ba378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba37c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba37cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba380: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2ba380u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba384: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2ba384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba388: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2ba388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba38c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2ba38cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba390: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2ba390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2ba394: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2ba394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba398: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA398u;
    {
        const bool branch_taken_0x2ba398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA398u;
        // 0x2ba39c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba398) {
            ctx->pc = 0x2BA3B0u;
            goto label_2ba3b0;
        }
    }
    ctx->pc = 0x2BA3A0u;
    // 0x2ba3a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ba3a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2ba3a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA3A4u;
    {
        const bool branch_taken_0x2ba3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3A4u;
        // 0x2ba3a8: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3a4) {
            ctx->pc = 0x2BA3B8u;
            goto label_2ba3b8;
        }
    }
    ctx->pc = 0x2BA3ACu;
    // 0x2ba3ac: 0x0  nop
    ctx->pc = 0x2ba3acu;
    // NOP
label_2ba3b0:
    // 0x2ba3b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ba3b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2ba3b4: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2ba3b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2ba3b8:
    // 0x2ba3b8: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x2ba3b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba3bc: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2ba3bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2ba3c0: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x2ba3c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2ba3c4: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x2ba3c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2ba3c8: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x2ba3c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ba3cc: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x2ba3ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2ba3d0: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x2ba3d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba3d4: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x2ba3d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2ba3d8: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x2ba3d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ba3dc: 0xfa800030  sqc2        $vf0, 0x30($s4)
    ctx->pc = 0x2ba3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ba3e0: 0xfa840000  sqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2ba3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ba3e4: 0xfa850010  sqc2        $vf5, 0x10($s4)
    ctx->pc = 0x2ba3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ba3e8: 0xfa860020  sqc2        $vf6, 0x20($s4)
    ctx->pc = 0x2ba3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2ba3ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ba3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba3f0: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x2BA3F0u;
    SET_GPR_U32(ctx, 31, 0x2BA3F8u);
    ctx->pc = 0x2BA3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA3F0u;
    // 0x2ba3f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x2BA3F0u, 0x2BA3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3F8u;
label_2ba3f8:
    // 0x2ba3f8: 0x26630280  addiu       $v1, $s3, 0x280
    ctx->pc = 0x2ba3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
    // 0x2ba3fc: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2ba3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ba400: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2ba400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ba404: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2ba404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ba408: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x2ba408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba40c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2ba40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba410: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ba410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba414: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x2ba414u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x2ba418: 0x4604081e  madda.s     $f1, $f4
    ctx->pc = 0x2ba418u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4])));
    // 0x2ba41c: 0x4603051c  madd.s      $f20, $f0, $f3
    ctx->pc = 0x2ba41cu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x2ba420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ba420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba424: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ba424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba428: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2ba428u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ba42c: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2ba42cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba430: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x2ba430u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ba434: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x2ba434u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba438: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2ba438u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba43c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2ba43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba440: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2ba440u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba444: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2ba444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2ba448: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2ba448u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2ba44c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2ba44cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2ba450: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2ba450u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2ba454: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ba454u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2ba458: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2ba458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba45c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2ba45cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba460: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x2BA460u;
    SET_GPR_U32(ctx, 31, 0x2BA468u);
    ctx->pc = 0x2BA464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA460u;
    // 0x2ba464: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x2BA460u, 0x2BA468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA468u;
label_2ba468:
    // 0x2ba468: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ba468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba46c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ba46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba470: 0xc097066  jal         func_25C198
    ctx->pc = 0x2BA470u;
    SET_GPR_U32(ctx, 31, 0x2BA478u);
    ctx->pc = 0x2BA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA470u;
    // 0x2ba474: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x2BA470u, 0x2BA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA478u;
label_2ba478:
    // 0x2ba478: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ba478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba47c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ba47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba480: 0xc097184  jal         func_25C610
    ctx->pc = 0x2BA480u;
    SET_GPR_U32(ctx, 31, 0x2BA488u);
    ctx->pc = 0x2BA484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA480u;
    // 0x2ba484: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x2BA480u, 0x2BA488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA488u;
label_2ba488:
    // 0x2ba488: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2ba488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ba48c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ba48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba490: 0xc097084  jal         func_25C210
    ctx->pc = 0x2BA490u;
    SET_GPR_U32(ctx, 31, 0x2BA498u);
    ctx->pc = 0x2BA494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA490u;
    // 0x2ba494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2BA490u, 0x2BA498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA498u;
label_2ba498:
    // 0x2ba498: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2ba498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba49c: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x2ba49cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ba4a0: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x2ba4a0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ba4a4: 0x48250000  qmfc2.ni    $a1, $vf0
    ctx->pc = 0x2ba4a4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ba4a8: 0x70623488  pextlw      $a2, $v1, $v0
    ctx->pc = 0x2ba4a8u;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2ba4ac: 0x70623ca8  pextuw      $a3, $v1, $v0
    ctx->pc = 0x2ba4acu;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2ba4b0: 0x70a44488  pextlw      $t0, $a1, $a0
    ctx->pc = 0x2ba4b0u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x2ba4b4: 0x70a44ca8  pextuw      $t1, $a1, $a0
    ctx->pc = 0x2ba4b4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x2ba4b8: 0x71061389  pcpyld      $v0, $t0, $a2
    ctx->pc = 0x2ba4b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x2ba4bc: 0x70c81ba9  pcpyud      $v1, $a2, $t0
    ctx->pc = 0x2ba4bcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x2ba4c0: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x2ba4c0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
    // 0x2ba4c4: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2ba4c4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ba4c8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x2ba4c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ba4cc: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x2ba4ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ba4d0: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x2ba4d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2ba4d4: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x2ba4d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ba4d8: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x2ba4d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ba4dc: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x2ba4dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ba4e0: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x2ba4e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2ba4e4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2ba4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2ba4e8: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2ba4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2ba4ec: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x2ba4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x2ba4f0: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2ba4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2ba4f4: 0x266a0280  addiu       $t2, $s3, 0x280
    ctx->pc = 0x2ba4f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
    // 0x2ba4f8: 0xd9440000  lqc2        $vf4, 0x0($t2)
    ctx->pc = 0x2ba4f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2ba4fc: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x2ba4fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2ba500: 0xd9460020  lqc2        $vf6, 0x20($t2)
    ctx->pc = 0x2ba500u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x2ba504: 0xd9470030  lqc2        $vf7, 0x30($t2)
    ctx->pc = 0x2ba504u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2ba508: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x2ba508u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba50c: 0xda090010  lqc2        $vf9, 0x10($s0)
    ctx->pc = 0x2ba50cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ba510: 0xda0a0020  lqc2        $vf10, 0x20($s0)
    ctx->pc = 0x2ba510u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ba514: 0xda0b0030  lqc2        $vf11, 0x30($s0)
    ctx->pc = 0x2ba514u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ba518: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2ba518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba51c: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2ba51cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba520: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2ba520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba524: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2ba524u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ba528: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2ba528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba52c: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2ba52cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba530: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2ba530u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba534: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2ba534u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba538: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2ba538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba53c: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2ba53cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba540: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2ba540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba544: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2ba544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ba548: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2ba548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba54c: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2ba54cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba550: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2ba550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba554: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2ba554u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2ba558: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2ba558u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ba55c: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2ba55cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ba560: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2ba560u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2ba564: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2ba564u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2ba568: 0x7a6202b0  lq          $v0, 0x2B0($s3)
    ctx->pc = 0x2ba568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x2ba56c: 0x266509c0  addiu       $a1, $s3, 0x9C0
    ctx->pc = 0x2ba56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2496));
    // 0x2ba570: 0x26630240  addiu       $v1, $s3, 0x240
    ctx->pc = 0x2ba570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
    // 0x2ba574: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x2ba574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ba578: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2ba578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2ba57c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2ba57cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba580: 0xda450010  lqc2        $vf5, 0x10($s2)
    ctx->pc = 0x2ba580u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ba584: 0xda460020  lqc2        $vf6, 0x20($s2)
    ctx->pc = 0x2ba584u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2ba588: 0xda470030  lqc2        $vf7, 0x30($s2)
    ctx->pc = 0x2ba588u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2ba58c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x2ba58cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ba590: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x2ba590u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ba594: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x2ba594u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2ba598: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x2ba598u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2ba59c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2ba59cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5a0: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2ba5a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5a4: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2ba5a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5a8: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2ba5a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ba5ac: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2ba5acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5b0: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2ba5b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5b4: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2ba5b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5b8: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2ba5b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba5bc: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2ba5bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5c0: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2ba5c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5c4: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2ba5c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5c8: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2ba5c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ba5cc: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2ba5ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5d0: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2ba5d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5d4: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2ba5d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba5d8: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2ba5d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2ba5dc: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2ba5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ba5e0: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x2ba5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ba5e4: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x2ba5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2ba5e8: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x2ba5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2ba5ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ba5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba5f0: 0x266309e0  addiu       $v1, $s3, 0x9E0
    ctx->pc = 0x2ba5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2528));
    // 0x2ba5f4: 0x26620260  addiu       $v0, $s3, 0x260
    ctx->pc = 0x2ba5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 608));
    // 0x2ba5f8: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2ba5f8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ba5fc: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2ba5fcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba600: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2ba600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba604: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2ba604u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba608: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2ba608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba60c: 0x26710240  addiu       $s1, $s3, 0x240
    ctx->pc = 0x2ba60cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
    // 0x2ba610: 0x26640980  addiu       $a0, $s3, 0x980
    ctx->pc = 0x2ba610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2432));
    // 0x2ba614: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ba614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba618: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2BA618u;
    SET_GPR_U32(ctx, 31, 0x2BA620u);
    ctx->pc = 0x2BA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA618u;
    // 0x2ba61c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2BA618u, 0x2BA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA620u;
label_2ba620:
    // 0x2ba620: 0x7a6302b0  lq          $v1, 0x2B0($s3)
    ctx->pc = 0x2ba620u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x2ba624: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ba624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ba628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ba628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba62c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2ba62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2ba630: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2ba630u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba634: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ba634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ba638: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ba638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ba63c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2ba63cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba640: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2ba640u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba644: 0x266309b0  addiu       $v1, $s3, 0x9B0
    ctx->pc = 0x2ba644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2480));
    // 0x2ba648: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2ba648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba64c: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x2ba64cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ba650: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x2ba650u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ba654: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x2ba654u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2ba658: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2ba658u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba65c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2ba65cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba660: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2ba660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba664: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2ba664u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba668: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2ba668u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba66c: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2ba66cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba670: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ba670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba674: 0x266302c0  addiu       $v1, $s3, 0x2C0
    ctx->pc = 0x2ba674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
    // 0x2ba678: 0x26620330  addiu       $v0, $s3, 0x330
    ctx->pc = 0x2ba678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
    // 0x2ba67c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ba67cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ba680: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2ba680u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ba684: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2ba684u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2ba688: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2ba688u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2ba68c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2ba68cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba690: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2ba690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba694: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2ba694u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba698: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2ba698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba69c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2ba69cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba6a0: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2ba6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba6a4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2ba6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba6a8: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2ba6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x2ba6ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ba6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba6b0: 0x26640a40  addiu       $a0, $s3, 0xA40
    ctx->pc = 0x2ba6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2624));
    // 0x2ba6b4: 0xc0aef22  jal         func_2BBC88
    ctx->pc = 0x2BA6B4u;
    SET_GPR_U32(ctx, 31, 0x2BA6BCu);
    ctx->pc = 0x2BA6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6B4u;
    // 0x2ba6b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC88u, 0x2BA6B4u, 0x2BA6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6BCu;
label_2ba6bc:
    // 0x2ba6bc: 0x7a6202c0  lq          $v0, 0x2C0($s3)
    ctx->pc = 0x2ba6bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 704)));
    // 0x2ba6c0: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2ba6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2ba6c4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2ba6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2ba6c8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2ba6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ba6cc: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2BA6CCu;
    SET_GPR_U32(ctx, 31, 0x2BA6D4u);
    ctx->pc = 0x2BA6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6CCu;
    // 0x2ba6d0: 0xc7ad0028  lwc1        $f13, 0x28($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2BA6CCu, 0x2BA6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6D4u;
label_2ba6d4:
    // 0x2ba6d4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2ba6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba6d8: 0x45020052  bc1fl       . + 4 + (0x52 << 2)
    ctx->pc = 0x2BA6D8u;
    {
        const bool branch_taken_0x2ba6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba6d8) {
            ctx->pc = 0x2BA6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA6D8u;
            // 0x2ba6dc: 0x267402e0  addiu       $s4, $s3, 0x2E0 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA824u;
            goto label_2ba824;
        }
    }
    ctx->pc = 0x2BA6E0u;
    // 0x2ba6e0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ba6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba6e4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2ba6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba6e8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ba6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ba6ec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ba6ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ba6f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ba6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ba6f4: 0x0  nop
    ctx->pc = 0x2ba6f4u;
    // NOP
    // 0x2ba6f8: 0x0  nop
    ctx->pc = 0x2ba6f8u;
    // NOP
    // 0x2ba6fc: 0x46000144  c1          0x144
    ctx->pc = 0x2ba6fcu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ba700: 0xc7809138  lwc1        $f0, -0x6EC8($gp)
    ctx->pc = 0x2ba700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba704: 0xc782913c  lwc1        $f2, -0x6EC4($gp)
    ctx->pc = 0x2ba704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba708: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2ba708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba70c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA70Cu;
    {
        const bool branch_taken_0x2ba70c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA70Cu;
        // 0x2ba710: 0x4600b046  mov.s       $f1, $f22 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba70c) {
            ctx->pc = 0x2BA720u;
            goto label_2ba720;
        }
    }
    ctx->pc = 0x2BA714u;
    // 0x2ba714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BA714u;
    {
        const bool branch_taken_0x2ba714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA714u;
        // 0x2ba718: 0x46161041  sub.s       $f1, $f2, $f22 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba714) {
            ctx->pc = 0x2BA738u;
            goto label_2ba738;
        }
    }
    ctx->pc = 0x2BA71Cu;
    // 0x2ba71c: 0x0  nop
    ctx->pc = 0x2ba71cu;
    // NOP
label_2ba720:
    // 0x2ba720: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ba720u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ba724: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2ba724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba728: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA728u;
    {
        const bool branch_taken_0x2ba728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba728) {
            ctx->pc = 0x2BA738u;
            goto label_2ba738;
        }
    }
    ctx->pc = 0x2BA730u;
    // 0x2ba730: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2ba730u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2ba734: 0x46160041  sub.s       $f1, $f0, $f22
    ctx->pc = 0x2ba734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_2ba738:
    // 0x2ba738: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2ba738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ba73c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ba73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ba740: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2ba740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2ba744: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2ba744u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba748: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2ba748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ba74c: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x2ba74cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ba750: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x2ba750u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ba754: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x2ba754u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x2ba758: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2ba758u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ba75c: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2ba75cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2ba760: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ba760u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba764: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x2ba764u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ba768: 0x4606181e  madda.s     $f3, $f6
    ctx->pc = 0x2ba768u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6])));
    // 0x2ba76c: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x2ba76cu;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ba770: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2ba770u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ba774: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2ba774u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2ba778: 0x4606181c  madd.s      $f0, $f3, $f6
    ctx->pc = 0x2ba778u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x2ba77c: 0xc7829140  lwc1        $f2, -0x6EC0($gp)
    ctx->pc = 0x2ba77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba780: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ba780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba784: 0x4600b106  mov.s       $f4, $f22
    ctx->pc = 0x2ba784u;
    ctx->f[4] = FPU_MOV_S(ctx->f[22]);
    // 0x2ba788: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ba788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ba78c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x2ba78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba790: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA790u;
    {
        const bool branch_taken_0x2ba790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA790u;
        // 0x2ba794: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba790) {
            ctx->pc = 0x2BA7A0u;
            goto label_2ba7a0;
        }
    }
    ctx->pc = 0x2BA798u;
    // 0x2ba798: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA798u;
    {
        const bool branch_taken_0x2ba798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA798u;
        // 0x2ba79c: 0x46022100  add.s       $f4, $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba798) {
            ctx->pc = 0x2BA7A4u;
            goto label_2ba7a4;
        }
    }
    ctx->pc = 0x2BA7A0u;
label_2ba7a0:
    // 0x2ba7a0: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x2ba7a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_2ba7a4:
    // 0x2ba7a4: 0xc7809144  lwc1        $f0, -0x6EBC($gp)
    ctx->pc = 0x2ba7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba7a8: 0xc7819148  lwc1        $f1, -0x6EB8($gp)
    ctx->pc = 0x2ba7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba7ac: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2ba7acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba7b0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA7B0u;
    {
        const bool branch_taken_0x2ba7b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba7b0) {
            ctx->pc = 0x2BA7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA7B0u;
            // 0x2ba7b4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA7C0u;
            goto label_2ba7c0;
        }
    }
    ctx->pc = 0x2BA7B8u;
    // 0x2ba7b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA7B8u;
    {
        const bool branch_taken_0x2ba7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7B8u;
        // 0x2ba7bc: 0x46040901  sub.s       $f4, $f1, $f4 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba7b8) {
            ctx->pc = 0x2BA7D4u;
            goto label_2ba7d4;
        }
    }
    ctx->pc = 0x2BA7C0u;
label_2ba7c0:
    // 0x2ba7c0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2ba7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba7c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA7C4u;
    {
        const bool branch_taken_0x2ba7c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba7c4) {
            ctx->pc = 0x2BA7D4u;
            goto label_2ba7d4;
        }
    }
    ctx->pc = 0x2BA7CCu;
    // 0x2ba7cc: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2ba7ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2ba7d0: 0x46040101  sub.s       $f4, $f0, $f4
    ctx->pc = 0x2ba7d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_2ba7d4:
    // 0x2ba7d4: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2ba7d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2ba7d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ba7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ba7dc: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2ba7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2ba7e0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2ba7e0u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba7e4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2ba7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ba7e8: 0x46040182  mul.s       $f6, $f0, $f4
    ctx->pc = 0x2ba7e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2ba7ec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2ba7ecu;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba7f0: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x2ba7f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[4]));
    // 0x2ba7f4: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x2ba7f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2ba7f8: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x2ba7f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[2])));
    // 0x2ba7fc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ba7fcu;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba800: 0x46001982  mul.s       $f6, $f3, $f0
    ctx->pc = 0x2ba800u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ba804: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x2ba804u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x2ba808: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2ba808u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba80c: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x2ba80cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2ba810: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x2ba810u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[2])));
    // 0x2ba814: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x2ba814u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x2ba818: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ba818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ba81c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2ba81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ba820: 0x267402e0  addiu       $s4, $s3, 0x2E0
    ctx->pc = 0x2ba820u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_2ba824:
    // 0x2ba824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba828: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ba828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba82c: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2BA82Cu;
    SET_GPR_U32(ctx, 31, 0x2BA834u);
    ctx->pc = 0x2BA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA82Cu;
    // 0x2ba830: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2BA82Cu, 0x2BA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA834u;
label_2ba834:
    // 0x2ba834: 0x7a6202f0  lq          $v0, 0x2F0($s3)
    ctx->pc = 0x2ba834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 752)));
    // 0x2ba838: 0x26710300  addiu       $s1, $s3, 0x300
    ctx->pc = 0x2ba838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x2ba83c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2ba83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2ba840: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2ba840u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba844: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x2ba844u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ba848: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x2ba848u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ba84c: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x2ba84cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2ba850: 0xdae80000  lqc2        $vf8, 0x0($s7)
    ctx->pc = 0x2ba850u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2ba854: 0xdae90010  lqc2        $vf9, 0x10($s7)
    ctx->pc = 0x2ba854u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2ba858: 0xdaea0020  lqc2        $vf10, 0x20($s7)
    ctx->pc = 0x2ba858u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x2ba85c: 0xdaeb0030  lqc2        $vf11, 0x30($s7)
    ctx->pc = 0x2ba85cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x2ba860: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2ba860u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba864: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2ba864u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba868: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2ba868u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba86c: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2ba86cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ba870: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2ba870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba874: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2ba874u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba878: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2ba878u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba87c: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2ba87cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ba880: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2ba880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba884: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2ba884u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba888: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2ba888u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba88c: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2ba88cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ba890: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2ba890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba894: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2ba894u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba898: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2ba898u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2ba89c: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2ba89cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2ba8a0: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2ba8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ba8a4: 0xfa450010  sqc2        $vf5, 0x10($s2)
    ctx->pc = 0x2ba8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ba8a8: 0xfa460020  sqc2        $vf6, 0x20($s2)
    ctx->pc = 0x2ba8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2ba8ac: 0xfa470030  sqc2        $vf7, 0x30($s2)
    ctx->pc = 0x2ba8acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2ba8b0: 0xc6600370  lwc1        $f0, 0x370($s3)
    ctx->pc = 0x2ba8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba8b4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2ba8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba8b8: 0xc782914c  lwc1        $f2, -0x6EB4($gp)
    ctx->pc = 0x2ba8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba8bc: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2ba8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ba8c0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2ba8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2ba8c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ba8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba8c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ba8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ba8cc: 0x0  nop
    ctx->pc = 0x2ba8ccu;
    // NOP
    // 0x2ba8d0: 0x0  nop
    ctx->pc = 0x2ba8d0u;
    // NOP
    // 0x2ba8d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ba8d4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ba8d8: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2ba8d8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba8dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ba8dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ba8e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ba8e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ba8e4: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2ba8e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba8e8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2ba8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba8ec: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2ba8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ba8f0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2ba8f0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba8f4: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x2ba8f4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ba8f8: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2ba8f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2ba8fc: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2ba8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2ba900: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2ba900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba904: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2ba904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x2ba908: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ba908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba90c: 0x26640880  addiu       $a0, $s3, 0x880
    ctx->pc = 0x2ba90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2176));
    // 0x2ba910: 0xc0aef22  jal         func_2BBC88
    ctx->pc = 0x2BA910u;
    SET_GPR_U32(ctx, 31, 0x2BA918u);
    ctx->pc = 0x2BA914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA910u;
    // 0x2ba914: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC88u, 0x2BA910u, 0x2BA918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA918u;
label_2ba918:
    // 0x2ba918: 0x7a6202c0  lq          $v0, 0x2C0($s3)
    ctx->pc = 0x2ba918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 704)));
    // 0x2ba91c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2ba91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2ba920: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2ba920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2ba924: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2ba924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ba928: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2BA928u;
    SET_GPR_U32(ctx, 31, 0x2BA930u);
    ctx->pc = 0x2BA92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA928u;
    // 0x2ba92c: 0xc7ad0028  lwc1        $f13, 0x28($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2BA928u, 0x2BA930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA930u;
label_2ba930:
    // 0x2ba930: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x2ba930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba934: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x2BA934u;
    {
        const bool branch_taken_0x2ba934 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA934u;
        // 0x2ba938: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba934) {
            ctx->pc = 0x2BAA7Cu;
            goto label_2baa7c;
        }
    }
    ctx->pc = 0x2BA93Cu;
    // 0x2ba93c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ba93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba940: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2ba940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba944: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ba944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ba948: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ba948u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ba94c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ba94cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ba950: 0x0  nop
    ctx->pc = 0x2ba950u;
    // NOP
    // 0x2ba954: 0x0  nop
    ctx->pc = 0x2ba954u;
    // NOP
    // 0x2ba958: 0x46000144  c1          0x144
    ctx->pc = 0x2ba958u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ba95c: 0xc7809150  lwc1        $f0, -0x6EB0($gp)
    ctx->pc = 0x2ba95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba960: 0xc7829154  lwc1        $f2, -0x6EAC($gp)
    ctx->pc = 0x2ba960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba964: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x2ba964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba968: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA968u;
    {
        const bool branch_taken_0x2ba968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA968u;
        // 0x2ba96c: 0x4600b846  mov.s       $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba968) {
            ctx->pc = 0x2BA978u;
            goto label_2ba978;
        }
    }
    ctx->pc = 0x2BA970u;
    // 0x2ba970: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA970u;
    {
        const bool branch_taken_0x2ba970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA970u;
        // 0x2ba974: 0x46171041  sub.s       $f1, $f2, $f23 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba970) {
            ctx->pc = 0x2BA990u;
            goto label_2ba990;
        }
    }
    ctx->pc = 0x2BA978u;
label_2ba978:
    // 0x2ba978: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ba978u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ba97c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2ba97cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba980: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA980u;
    {
        const bool branch_taken_0x2ba980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba980) {
            ctx->pc = 0x2BA990u;
            goto label_2ba990;
        }
    }
    ctx->pc = 0x2BA988u;
    // 0x2ba988: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2ba988u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2ba98c: 0x46170041  sub.s       $f1, $f0, $f23
    ctx->pc = 0x2ba98cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_2ba990:
    // 0x2ba990: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2ba990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ba994: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ba994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ba998: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2ba998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2ba99c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2ba99cu;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba9a0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2ba9a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ba9a4: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x2ba9a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ba9a8: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x2ba9a8u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ba9ac: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x2ba9acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x2ba9b0: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2ba9b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ba9b4: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2ba9b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2ba9b8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ba9b8u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba9bc: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x2ba9bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ba9c0: 0x4606181e  madda.s     $f3, $f6
    ctx->pc = 0x2ba9c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6])));
    // 0x2ba9c4: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x2ba9c4u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ba9c8: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x2ba9c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ba9cc: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2ba9ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2ba9d0: 0x4606181c  madd.s      $f0, $f3, $f6
    ctx->pc = 0x2ba9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x2ba9d4: 0xc7829158  lwc1        $f2, -0x6EA8($gp)
    ctx->pc = 0x2ba9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba9d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ba9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba9dc: 0x4600b8c6  mov.s       $f3, $f23
    ctx->pc = 0x2ba9dcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[23]);
    // 0x2ba9e0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ba9e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ba9e4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2ba9e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba9e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA9E8u;
    {
        const bool branch_taken_0x2ba9e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9E8u;
        // 0x2ba9ec: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9e8) {
            ctx->pc = 0x2BA9F8u;
            goto label_2ba9f8;
        }
    }
    ctx->pc = 0x2BA9F0u;
    // 0x2ba9f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA9F0u;
    {
        const bool branch_taken_0x2ba9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9F0u;
        // 0x2ba9f4: 0x460218c0  add.s       $f3, $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9f0) {
            ctx->pc = 0x2BA9FCu;
            goto label_2ba9fc;
        }
    }
    ctx->pc = 0x2BA9F8u;
label_2ba9f8:
    // 0x2ba9f8: 0x460310c1  sub.s       $f3, $f2, $f3
    ctx->pc = 0x2ba9f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_2ba9fc:
    // 0x2ba9fc: 0xc780915c  lwc1        $f0, -0x6EA4($gp)
    ctx->pc = 0x2ba9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2baa00: 0xc7819160  lwc1        $f1, -0x6EA0($gp)
    ctx->pc = 0x2baa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2baa04: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2baa04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2baa08: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAA08u;
    {
        const bool branch_taken_0x2baa08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2baa08) {
            ctx->pc = 0x2BAA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAA08u;
            // 0x2baa0c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAA18u;
            goto label_2baa18;
        }
    }
    ctx->pc = 0x2BAA10u;
    // 0x2baa10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAA10u;
    {
        const bool branch_taken_0x2baa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA10u;
        // 0x2baa14: 0x460308c1  sub.s       $f3, $f1, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa10) {
            ctx->pc = 0x2BAA2Cu;
            goto label_2baa2c;
        }
    }
    ctx->pc = 0x2BAA18u;
label_2baa18:
    // 0x2baa18: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2baa18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2baa1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAA1Cu;
    {
        const bool branch_taken_0x2baa1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2baa1c) {
            ctx->pc = 0x2BAA2Cu;
            goto label_2baa2c;
        }
    }
    ctx->pc = 0x2BAA24u;
    // 0x2baa24: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2baa24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2baa28: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x2baa28u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2baa2c:
    // 0x2baa2c: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2baa2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2baa30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2baa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2baa34: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2baa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2baa38: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2baa38u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2baa3c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2baa3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2baa40: 0x46030102  mul.s       $f4, $f0, $f3
    ctx->pc = 0x2baa40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2baa44: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2baa44u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2baa48: 0x46033018  adda.s      $f6, $f3
    ctx->pc = 0x2baa48u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[6], ctx->f[3]));
    // 0x2baa4c: 0x46002182  mul.s       $f6, $f4, $f0
    ctx->pc = 0x2baa4cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2baa50: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2baa50u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2baa54: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2baa54u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2baa58: 0x46003102  mul.s       $f4, $f6, $f0
    ctx->pc = 0x2baa58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2baa5c: 0x4601301e  madda.s     $f6, $f1
    ctx->pc = 0x2baa5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[1])));
    // 0x2baa60: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2baa60u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2baa64: 0x46002182  mul.s       $f6, $f4, $f0
    ctx->pc = 0x2baa64u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2baa68: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2baa68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2baa6c: 0x4601301c  madd.s      $f0, $f6, $f1
    ctx->pc = 0x2baa6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x2baa70: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2baa70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2baa74: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2baa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2baa78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2baa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2baa7c:
    // 0x2baa7c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2baa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baa80: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2BAA80u;
    SET_GPR_U32(ctx, 31, 0x2BAA88u);
    ctx->pc = 0x2BAA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA80u;
    // 0x2baa84: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2BAA80u, 0x2BAA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA88u;
label_2baa88:
    // 0x2baa88: 0x7a6202f0  lq          $v0, 0x2F0($s3)
    ctx->pc = 0x2baa88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 752)));
    // 0x2baa8c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2baa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2baa90: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2baa90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2baa94: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x2baa94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2baa98: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x2baa98u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2baa9c: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x2baa9cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2baaa0: 0xdae80000  lqc2        $vf8, 0x0($s7)
    ctx->pc = 0x2baaa0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2baaa4: 0xdae90010  lqc2        $vf9, 0x10($s7)
    ctx->pc = 0x2baaa4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2baaa8: 0xdaea0020  lqc2        $vf10, 0x20($s7)
    ctx->pc = 0x2baaa8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x2baaac: 0xdaeb0030  lqc2        $vf11, 0x30($s7)
    ctx->pc = 0x2baaacu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x2baab0: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2baab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baab4: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2baab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baab8: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2baab8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baabc: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2baabcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2baac0: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2baac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baac4: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2baac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baac8: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2baac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baacc: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2baaccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2baad0: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2baad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baad4: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2baad4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baad8: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2baad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baadc: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2baadcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2baae0: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2baae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baae4: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2baae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baae8: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2baae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2baaec: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2baaecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2baaf0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2baaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2baaf4: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2baaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2baaf8: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2baaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2baafc: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2baafcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bab00: 0xc6600370  lwc1        $f0, 0x370($s3)
    ctx->pc = 0x2bab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bab04: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2bab04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bab08: 0xc7829164  lwc1        $f2, -0x6E9C($gp)
    ctx->pc = 0x2bab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bab0c: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x2bab0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bab10: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2bab10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2bab14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bab14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bab18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bab18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bab1c: 0x0  nop
    ctx->pc = 0x2bab1cu;
    // NOP
    // 0x2bab20: 0x0  nop
    ctx->pc = 0x2bab20u;
    // NOP
    // 0x2bab24: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2bab24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2bab28: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2bab28u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bab2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bab2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bab30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bab30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bab34: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2bab34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bab38: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2bab38u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bab3c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2bab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bab40: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bab40u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bab44: 0xda510000  lqc2        $vf17, 0x0($s2)
    ctx->pc = 0x2bab44u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bab48: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2bab48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bab4c: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2bab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bab50: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2bab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bab54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bab54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bab58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bab58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bab5c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAB5Cu;
    {
        const bool branch_taken_0x2bab5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB5Cu;
        // 0x2bab60: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab5c) {
            ctx->pc = 0x2BAB74u;
            goto label_2bab74;
        }
    }
    ctx->pc = 0x2BAB64u;
    // 0x2bab64: 0xc6c00020  lwc1        $f0, 0x20($s6)
    ctx->pc = 0x2bab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bab68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bab68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bab6c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2bab6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bab70: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2bab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bab74:
    // 0x2bab74: 0xc6c2001c  lwc1        $f2, 0x1C($s6)
    ctx->pc = 0x2bab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bab78: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bab78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bab7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAB7Cu;
    {
        const bool branch_taken_0x2bab7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB7Cu;
        // 0x2bab80: 0x26700840  addiu       $s0, $s3, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab7c) {
            ctx->pc = 0x2BAB98u;
            goto label_2bab98;
        }
    }
    ctx->pc = 0x2BAB84u;
    // 0x2bab84: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bab84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bab88: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x2bab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bab8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bab8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bab90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bab90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bab94: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bab94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2bab98:
    // 0x2bab98: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2bab98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x2bab9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bab9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2baba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2baba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baba4: 0xc0aef22  jal         func_2BBC88
    ctx->pc = 0x2BABA4u;
    SET_GPR_U32(ctx, 31, 0x2BABACu);
    ctx->pc = 0x2BABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BABA4u;
    // 0x2baba8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC88u, 0x2BABA4u, 0x2BABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABACu;
label_2babac:
    // 0x2babac: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2babacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2babb0: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2babb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2babb4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2babb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2babb8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2babb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2babbc: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2BABBCu;
    SET_GPR_U32(ctx, 31, 0x2BABC4u);
    ctx->pc = 0x2BABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BABBCu;
    // 0x2babc0: 0xc7ad0020  lwc1        $f13, 0x20($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2BABBCu, 0x2BABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABC4u;
label_2babc4:
    // 0x2babc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2babc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2babc8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2babc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2babcc: 0x8ec30028  lw          $v1, 0x28($s6)
    ctx->pc = 0x2babccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x2babd0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2babd0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2babd4: 0xc7809168  lwc1        $f0, -0x6E98($gp)
    ctx->pc = 0x2babd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2babd8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2babd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2babdc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2babdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2babe0: 0xe7a3016c  swc1        $f3, 0x16C($sp)
    ctx->pc = 0x2babe0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x2babe4: 0xe7a30168  swc1        $f3, 0x168($sp)
    ctx->pc = 0x2babe4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2babe8: 0xe7a30164  swc1        $f3, 0x164($sp)
    ctx->pc = 0x2babe8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2babec: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2babecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2babf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2babf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2babf4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2BABF4u;
    {
        const bool branch_taken_0x2babf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABF4u;
        // 0x2babf8: 0xe7a30160  swc1        $f3, 0x160($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babf4) {
            ctx->pc = 0x2BAC34u;
            goto label_2bac34;
        }
    }
    ctx->pc = 0x2BABFCu;
    // 0x2babfc: 0xc780916c  lwc1        $f0, -0x6E94($gp)
    ctx->pc = 0x2babfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bac00: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2bac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2bac04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2bac04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bac08: 0xc6c20024  lwc1        $f2, 0x24($s6)
    ctx->pc = 0x2bac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bac0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bac0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bac10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bac10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bac14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bac14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bac18: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2bac18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2bac1c: 0x0  nop
    ctx->pc = 0x2bac1cu;
    // NOP
    // 0x2bac20: 0x0  nop
    ctx->pc = 0x2bac20u;
    // NOP
    // 0x2bac24: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2bac24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2bac28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bac28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bac2c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2bac2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2bac30: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2bac30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2bac34:
    // 0x2bac34: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x2bac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2bac38: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2bac38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac3c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2bac3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bac40: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2bac40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bac44: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2bac44u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bac48: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2bac48u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bac4c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2bac4cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bac50: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2bac50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bac54: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2bac54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bac58: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2bac58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bac5c: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2bac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bac60: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2bac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2bac64: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2bac64u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bac68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bac68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bac6c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2bac6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bac70: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2bac70u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bac74: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2bac74u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bac78: 0x4bd0212a  vmul.xyz    $vf4, $vf4, $vf16
    ctx->pc = 0x2bac78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bac7c: 0x4bd0296a  vmul.xyz    $vf5, $vf5, $vf16
    ctx->pc = 0x2bac7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bac80: 0x4bd031aa  vmul.xyz    $vf6, $vf6, $vf16
    ctx->pc = 0x2bac80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bac84: 0x4bd039ea  vmul.xyz    $vf7, $vf7, $vf16
    ctx->pc = 0x2bac84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bac88: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bac88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bac8c: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2bac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bac90: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2bac90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bac94: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2bac94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bac98: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x2bac98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2bac9c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2bac9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2baca0: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2baca0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2baca4: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2baca4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2baca8: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2baca8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2bacac: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x2bacacu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bacb0: 0xda090010  lqc2        $vf9, 0x10($s0)
    ctx->pc = 0x2bacb0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bacb4: 0xda0a0020  lqc2        $vf10, 0x20($s0)
    ctx->pc = 0x2bacb4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bacb8: 0xda0b0030  lqc2        $vf11, 0x30($s0)
    ctx->pc = 0x2bacb8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2bacbc: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2bacbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bacc0: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2bacc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bacc4: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2bacc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bacc8: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2bacc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2baccc: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2bacccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bacd0: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2bacd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bacd4: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2bacd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bacd8: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2bacd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bacdc: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2bacdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bace0: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2bace0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bace4: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2bace4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bace8: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2bace8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bacec: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2bacecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bacf0: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2bacf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bacf4: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2bacf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bacf8: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2bacf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bacfc: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bacfcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bad00: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2bad00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bad04: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2bad04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bad08: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2bad08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bad0c: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2bad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2bad10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bad10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bad14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad18: 0xc04a151  jal         func_128544
    ctx->pc = 0x2BAD18u;
    SET_GPR_U32(ctx, 31, 0x2BAD20u);
    ctx->pc = 0x2BAD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD18u;
    // 0x2bad1c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2BAD18u, 0x2BAD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD20u;
label_2bad20:
    // 0x2bad20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bad24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bad24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bad28: 0xc7819170  lwc1        $f1, -0x6E90($gp)
    ctx->pc = 0x2bad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bad2c: 0xc7829174  lwc1        $f2, -0x6E8C($gp)
    ctx->pc = 0x2bad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bad30: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x2bad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2bad34: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x2bad34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2bad38: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x2bad38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x2bad3c: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x2bad3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2bad40: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x2bad40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x2bad44: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2bad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bad48: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2bad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bad4c: 0xc7829178  lwc1        $f2, -0x6E88($gp)
    ctx->pc = 0x2bad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bad50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bad50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bad54: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAD54u;
    {
        const bool branch_taken_0x2bad54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bad54) {
            ctx->pc = 0x2BAD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAD54u;
            // 0x2bad58: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAD68u;
            goto label_2bad68;
        }
    }
    ctx->pc = 0x2BAD5Cu;
    // 0x2bad5c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2bad5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bad60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BAD60u;
    {
        const bool branch_taken_0x2bad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD60u;
        // 0x2bad64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad60) {
            ctx->pc = 0x2BAD6Cu;
            goto label_2bad6c;
        }
    }
    ctx->pc = 0x2BAD68u;
label_2bad68:
    // 0x2bad68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bad68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bad6c:
    // 0x2bad6c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bad6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bad70: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2bad70u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bad74: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bad78: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2bad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2bad7c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2bad7cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2bad80: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2bad80u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bad84: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2bad84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bad88: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2bad88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bad8c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2bad8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bad90: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2bad90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bad94: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2bad94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bad98: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2bad98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bad9c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2bad9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bada0: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2bada0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bada4: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2bada4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bada8: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2bada8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2badac: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2badacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2badb0: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2badb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2badb4: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2badb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2badb8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BADB8u;
    {
        const bool branch_taken_0x2badb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADB8u;
        // 0x2badbc: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badb8) {
            ctx->pc = 0x2BADD0u;
            goto label_2badd0;
        }
    }
    ctx->pc = 0x2BADC0u;
    // 0x2badc0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2badc0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2badc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BADC4u;
    {
        const bool branch_taken_0x2badc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADC4u;
        // 0x2badc8: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badc4) {
            ctx->pc = 0x2BADD8u;
            goto label_2badd8;
        }
    }
    ctx->pc = 0x2BADCCu;
    // 0x2badcc: 0x0  nop
    ctx->pc = 0x2badccu;
    // NOP
label_2badd0:
    // 0x2badd0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2badd0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2badd4: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2badd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2badd8:
    // 0x2badd8: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x2badd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2baddc: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x2baddcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bade0: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x2bade0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bade4: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2bade4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bade8: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2bade8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2badec: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x2badecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2badf0: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x2badf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2badf4: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x2badf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2badf8: 0xc782917c  lwc1        $f2, -0x6E84($gp)
    ctx->pc = 0x2badf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2badfc: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x2badfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bae00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bae00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bae04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bae04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bae08: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAE08u;
    {
        const bool branch_taken_0x2bae08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bae08) {
            ctx->pc = 0x2BAE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAE08u;
            // 0x2bae0c: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAE20u;
            goto label_2bae20;
        }
    }
    ctx->pc = 0x2BAE10u;
    // 0x2bae10: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2bae10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bae14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAE14u;
    {
        const bool branch_taken_0x2bae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE14u;
        // 0x2bae18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae14) {
            ctx->pc = 0x2BAE24u;
            goto label_2bae24;
        }
    }
    ctx->pc = 0x2BAE1Cu;
    // 0x2bae1c: 0x0  nop
    ctx->pc = 0x2bae1cu;
    // NOP
label_2bae20:
    // 0x2bae20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bae20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bae24:
    // 0x2bae24: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bae24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bae28: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2bae28u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bae2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bae30: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2bae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2bae34: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2bae34u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2bae38: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2bae38u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bae3c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2bae3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bae40: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2bae40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bae44: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2bae44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bae48: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2bae48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bae4c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2bae4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bae50: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2bae50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bae54: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2bae54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bae58: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2bae58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bae5c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2bae5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bae60: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2bae60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bae64: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2bae64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bae68: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2bae68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2bae6c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2bae6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bae70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAE70u;
    {
        const bool branch_taken_0x2bae70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE70u;
        // 0x2bae74: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae70) {
            ctx->pc = 0x2BAE88u;
            goto label_2bae88;
        }
    }
    ctx->pc = 0x2BAE78u;
    // 0x2bae78: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bae78u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bae7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAE7Cu;
    {
        const bool branch_taken_0x2bae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE7Cu;
        // 0x2bae80: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae7c) {
            ctx->pc = 0x2BAE90u;
            goto label_2bae90;
        }
    }
    ctx->pc = 0x2BAE84u;
    // 0x2bae84: 0x0  nop
    ctx->pc = 0x2bae84u;
    // NOP
label_2bae88:
    // 0x2bae88: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bae88u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bae8c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2bae8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2bae90:
    // 0x2bae90: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2bae90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bae94: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2bae94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bae98: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2bae98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bae9c: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2bae9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2baea0: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2baea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2baea4: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2baea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2baea8: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2baea8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2baeac: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2baeacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2baeb0: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2baeb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2baeb4: 0xc7829180  lwc1        $f2, -0x6E80($gp)
    ctx->pc = 0x2baeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2baeb8: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x2baeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2baebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2baebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baec0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2baec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2baec4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAEC4u;
    {
        const bool branch_taken_0x2baec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2baec4) {
            ctx->pc = 0x2BAEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAEC4u;
            // 0x2baec8: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAED8u;
            goto label_2baed8;
        }
    }
    ctx->pc = 0x2BAECCu;
    // 0x2baecc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2baeccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2baed0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BAED0u;
    {
        const bool branch_taken_0x2baed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAED0u;
        // 0x2baed4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baed0) {
            ctx->pc = 0x2BAEDCu;
            goto label_2baedc;
        }
    }
    ctx->pc = 0x2BAED8u;
label_2baed8:
    // 0x2baed8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2baed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2baedc:
    // 0x2baedc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2baedcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2baee0: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2baee0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2baee4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2baee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2baee8: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2baee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2baeec: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2baeecu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2baef0: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2baef0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2baef4: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2baef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2baef8: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2baef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2baefc: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2baefcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2baf00: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2baf00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2baf04: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2baf04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2baf08: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2baf08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2baf0c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2baf0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2baf10: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2baf10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2baf14: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2baf14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2baf18: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2baf18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2baf1c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2baf1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2baf20: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2baf20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2baf24: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2baf24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2baf28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAF28u;
    {
        const bool branch_taken_0x2baf28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF28u;
        // 0x2baf2c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf28) {
            ctx->pc = 0x2BAF40u;
            goto label_2baf40;
        }
    }
    ctx->pc = 0x2BAF30u;
    // 0x2baf30: 0x4a0003bf  vwaitq
    ctx->pc = 0x2baf30u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2baf34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAF34u;
    {
        const bool branch_taken_0x2baf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF34u;
        // 0x2baf38: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf34) {
            ctx->pc = 0x2BAF48u;
            goto label_2baf48;
        }
    }
    ctx->pc = 0x2BAF3Cu;
    // 0x2baf3c: 0x0  nop
    ctx->pc = 0x2baf3cu;
    // NOP
label_2baf40:
    // 0x2baf40: 0x4a0003bf  vwaitq
    ctx->pc = 0x2baf40u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2baf44: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2baf44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2baf48:
    // 0x2baf48: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x2baf48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2baf4c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2baf4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2baf50: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x2baf50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2baf54: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x2baf54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2baf58: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x2baf58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2baf5c: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x2baf5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2baf60: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x2baf60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2baf64: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x2baf64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2baf68: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x2baf68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2baf6c: 0xfa800030  sqc2        $vf0, 0x30($s4)
    ctx->pc = 0x2baf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2baf70: 0xfa840000  sqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2baf70u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2baf74: 0xfa850010  sqc2        $vf5, 0x10($s4)
    ctx->pc = 0x2baf74u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2baf78: 0xfa860020  sqc2        $vf6, 0x20($s4)
    ctx->pc = 0x2baf78u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2baf7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2baf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf80: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x2BAF80u;
    SET_GPR_U32(ctx, 31, 0x2BAF88u);
    ctx->pc = 0x2BAF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF80u;
    // 0x2baf84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x2BAF80u, 0x2BAF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF88u;
label_2baf88:
    // 0x2baf88: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x2baf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2baf8c: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x2baf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2baf90: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2baf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2baf94: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2baf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2baf98: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2baf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2baf9c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2baf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bafa0: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x2bafa0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[2]));
    // 0x2bafa4: 0x4601201e  madda.s     $f4, $f1
    ctx->pc = 0x2bafa4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1])));
    // 0x2bafa8: 0x46001d1c  madd.s      $f20, $f3, $f0
    ctx->pc = 0x2bafa8u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2bafac: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2bafacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bafb0: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x2bafb0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x2bafb4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2bafb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bafb8: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x2bafb8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bafbc: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2bafbcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bafc0: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x2bafc0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bafc4: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x2bafc4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bafc8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bafc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bafcc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2bafccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bafd0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bafd0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bafd4: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2bafd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bafd8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bafd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bafdc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bafdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bafe0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bafe0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bafe4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bafe4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bafe8: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2bafe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bafec: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bafecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2baff0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2baff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2baff4: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x2BAFF4u;
    SET_GPR_U32(ctx, 31, 0x2BAFFCu);
    ctx->pc = 0x2BAFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAFF4u;
    // 0x2baff8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x2BAFF4u, 0x2BAFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFFCu;
label_2baffc:
    // 0x2baffc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2baffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb000: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2bb000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb004: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bb004u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2bb008: 0xc097066  jal         func_25C198
    ctx->pc = 0x2BB008u;
    SET_GPR_U32(ctx, 31, 0x2BB010u);
    ctx->pc = 0x2BB00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB008u;
    // 0x2bb00c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x2BB008u, 0x2BB010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB010u;
label_2bb010:
    // 0x2bb010: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bb010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb014: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x2bb014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bb018: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb01c: 0xc097184  jal         func_25C610
    ctx->pc = 0x2BB01Cu;
    SET_GPR_U32(ctx, 31, 0x2BB024u);
    ctx->pc = 0x2BB020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB01Cu;
    // 0x2bb020: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x2BB01Cu, 0x2BB024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB024u;
label_2bb024:
    // 0x2bb024: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2bb024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb028: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x2BB028u;
    {
        const bool branch_taken_0x2bb028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB028u;
        // 0x2bb02c: 0x27a30170  addiu       $v1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb028) {
            ctx->pc = 0x2BB0DCu;
            goto label_2bb0dc;
        }
    }
    ctx->pc = 0x2BB030u;
    // 0x2bb030: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bb034: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bb034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bb038: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x2BB038u;
    SET_GPR_U32(ctx, 31, 0x2BB040u);
    ctx->pc = 0x2BB03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB038u;
    // 0x2bb03c: 0x4600b307  neg.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x2BB038u, 0x2BB040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB040u;
label_2bb040:
    // 0x2bb040: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bb040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb044: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2bb044u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2bb048: 0xc097066  jal         func_25C198
    ctx->pc = 0x2BB048u;
    SET_GPR_U32(ctx, 31, 0x2BB050u);
    ctx->pc = 0x2BB04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB048u;
    // 0x2bb04c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x2BB048u, 0x2BB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB050u;
label_2bb050:
    // 0x2bb050: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bb050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb054: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb058: 0xc097184  jal         func_25C610
    ctx->pc = 0x2BB058u;
    SET_GPR_U32(ctx, 31, 0x2BB060u);
    ctx->pc = 0x2BB05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB058u;
    // 0x2bb05c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x2BB058u, 0x2BB060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB060u;
label_2bb060:
    // 0x2bb060: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bb060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb064: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2bb064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2bb068: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bb068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb06c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb070: 0xe7b5018c  swc1        $f21, 0x18C($sp)
    ctx->pc = 0x2bb070u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2bb074: 0xe7b50180  swc1        $f21, 0x180($sp)
    ctx->pc = 0x2bb074u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2bb078: 0xe7b50184  swc1        $f21, 0x184($sp)
    ctx->pc = 0x2bb078u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x2bb07c: 0xc097184  jal         func_25C610
    ctx->pc = 0x2BB07Cu;
    SET_GPR_U32(ctx, 31, 0x2BB084u);
    ctx->pc = 0x2BB080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB07Cu;
    // 0x2bb080: 0xe7b40188  swc1        $f20, 0x188($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x2BB07Cu, 0x2BB084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB084u;
label_2bb084:
    // 0x2bb084: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2bb084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2bb088: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x2bb088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb08c: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x2bb08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bb090: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2bb090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bb094: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2bb094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb098: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2bb098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb09c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2bb09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb0a0: 0x4603281a  mula.s      $f5, $f3
    ctx->pc = 0x2bb0a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[3]));
    // 0x2bb0a4: 0x4601201e  madda.s     $f4, $f1
    ctx->pc = 0x2bb0a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1])));
    // 0x2bb0a8: 0x4600331c  madd.s      $f12, $f6, $f0
    ctx->pc = 0x2bb0a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x2bb0ac: 0xc7829184  lwc1        $f2, -0x6E7C($gp)
    ctx->pc = 0x2bb0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb0b0: 0x46026002  mul.s       $f0, $f12, $f2
    ctx->pc = 0x2bb0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2bb0b4: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2bb0b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bb0b8: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x2bb0b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb0bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BB0BCu;
    {
        const bool branch_taken_0x2bb0bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb0bc) {
            ctx->pc = 0x2BB0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB0BCu;
            // 0x2bb0c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB0C4u;
            goto label_2bb0c4;
        }
    }
    ctx->pc = 0x2BB0C4u;
label_2bb0c4:
    // 0x2bb0c4: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2bb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bb0c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bb0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb0cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb0d0: 0xc097110  jal         func_25C440
    ctx->pc = 0x2BB0D0u;
    SET_GPR_U32(ctx, 31, 0x2BB0D8u);
    ctx->pc = 0x2BB0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0D0u;
    // 0x2bb0d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x2BB0D0u, 0x2BB0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0D8u;
label_2bb0d8:
    // 0x2bb0d8: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x2bb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2bb0dc:
    // 0x2bb0dc: 0x26640a80  addiu       $a0, $s3, 0xA80
    ctx->pc = 0x2bb0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2688));
    // 0x2bb0e0: 0xc097084  jal         func_25C210
    ctx->pc = 0x2BB0E0u;
    SET_GPR_U32(ctx, 31, 0x2BB0E8u);
    ctx->pc = 0x2BB0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0E0u;
    // 0x2bb0e4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2BB0E0u, 0x2BB0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0E8u;
label_2bb0e8:
    // 0x2bb0e8: 0x26630320  addiu       $v1, $s3, 0x320
    ctx->pc = 0x2bb0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
    // 0x2bb0ec: 0x26620aa0  addiu       $v0, $s3, 0xAA0
    ctx->pc = 0x2bb0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2720));
    // 0x2bb0f0: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bb0f0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb0f4: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2bb0f4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb0f8: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2bb0f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb0fc: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2bb0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb100: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2bb100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb104: 0x26640ac0  addiu       $a0, $s3, 0xAC0
    ctx->pc = 0x2bb104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2752));
    // 0x2bb108: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bb108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb10c: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2BB10Cu;
    SET_GPR_U32(ctx, 31, 0x2BB114u);
    ctx->pc = 0x2BB110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB10Cu;
    // 0x2bb110: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2BB10Cu, 0x2BB114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB114u;
label_2bb114:
    // 0x2bb114: 0x7a630370  lq          $v1, 0x370($s3)
    ctx->pc = 0x2bb114u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 880)));
    // 0x2bb118: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bb118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bb11c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bb11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb120: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2bb120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2bb124: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2bb124u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bb128: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bb128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bb12c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bb12cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bb130: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2bb130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb134: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2bb134u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb138: 0x26630af0  addiu       $v1, $s3, 0xAF0
    ctx->pc = 0x2bb138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2800));
    // 0x2bb13c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bb13cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb140: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x2bb140u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bb144: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x2bb144u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bb148: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x2bb148u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2bb14c: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2bb14cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bb150: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2bb150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb154: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2bb154u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb158: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2bb158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb15c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2bb15cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb160: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bb160u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb164: 0x26640730  addiu       $a0, $s3, 0x730
    ctx->pc = 0x2bb164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1840));
    // 0x2bb168: 0x26630300  addiu       $v1, $s3, 0x300
    ctx->pc = 0x2bb168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x2bb16c: 0x26620370  addiu       $v0, $s3, 0x370
    ctx->pc = 0x2bb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 880));
    // 0x2bb170: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2bb170u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb174: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2bb174u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bb178: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2bb178u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2bb17c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2bb17cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2bb180: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bb180u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb184: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2bb184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb188: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2bb188u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb18c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2bb18cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb190: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2bb190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb194: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2bb194u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb198: 0xc66c0344  lwc1        $f12, 0x344($s3)
    ctx->pc = 0x2bb198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bb19c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2bb19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2bb1a0: 0xc66d0340  lwc1        $f13, 0x340($s3)
    ctx->pc = 0x2bb1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bb1a4: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2BB1A4u;
    SET_GPR_U32(ctx, 31, 0x2BB1ACu);
    ctx->pc = 0x2BB1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1A4u;
    // 0x2bb1a8: 0x26700b80  addiu       $s0, $s3, 0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2BB1A4u, 0x2BB1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1ACu;
label_2bb1ac:
    // 0x2bb1ac: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2bb1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2bb1b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bb1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb1b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bb1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bb1b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bb1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bb1bc: 0xc7819188  lwc1        $f1, -0x6E78($gp)
    ctx->pc = 0x2bb1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb1c0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bb1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb1c4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB1C4u;
    {
        const bool branch_taken_0x2bb1c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb1c4) {
            ctx->pc = 0x2BB1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB1C4u;
            // 0x2bb1c8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB1D8u;
            goto label_2bb1d8;
        }
    }
    ctx->pc = 0x2BB1CCu;
    // 0x2bb1cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb1d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB1D0u;
    {
        const bool branch_taken_0x2bb1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1D0u;
        // 0x2bb1d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1d0) {
            ctx->pc = 0x2BB1DCu;
            goto label_2bb1dc;
        }
    }
    ctx->pc = 0x2BB1D8u;
label_2bb1d8:
    // 0x2bb1d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bb1d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1dc:
    // 0x2bb1dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bb1dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bb1e0: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2bb1e0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bb1e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bb1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bb1e8: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2bb1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2bb1ec: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2bb1ecu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2bb1f0: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2bb1f0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bb1f4: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2bb1f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb1f8: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2bb1f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bb1fc: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2bb1fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb200: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb204: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb208: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2bb208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb20c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb20cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb210: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2bb210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb214: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb218: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2bb218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb21c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2bb21cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb220: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2bb220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2bb224: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2bb224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb228: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB228u;
    {
        const bool branch_taken_0x2bb228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB228u;
        // 0x2bb22c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb228) {
            ctx->pc = 0x2BB240u;
            goto label_2bb240;
        }
    }
    ctx->pc = 0x2BB230u;
    // 0x2bb230: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb230u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB234u;
    {
        const bool branch_taken_0x2bb234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB234u;
        // 0x2bb238: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb234) {
            ctx->pc = 0x2BB248u;
            goto label_2bb248;
        }
    }
    ctx->pc = 0x2BB23Cu;
    // 0x2bb23c: 0x0  nop
    ctx->pc = 0x2bb23cu;
    // NOP
label_2bb240:
    // 0x2bb240: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb240u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb244: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2bb244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2bb248:
    // 0x2bb248: 0x4a60012c  vsub.zw     $vf4, $vf0, $vf0
    ctx->pc = 0x2bb248u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb24c: 0x4a60016c  vsub.zw     $vf5, $vf0, $vf0
    ctx->pc = 0x2bb24cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb250: 0x4ba001ac  vsub.xyw    $vf6, $vf0, $vf0
    ctx->pc = 0x2bb250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb254: 0x4a400183  vaddw.z     $vf6, $vf0, $vf0w
    ctx->pc = 0x2bb254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb258: 0x4b1c0101  vaddy.x     $vf4, $vf0, $vf28y
    ctx->pc = 0x2bb258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb25c: 0x4b1c0144  vsubx.x     $vf5, $vf0, $vf28x
    ctx->pc = 0x2bb25cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb260: 0x4a9c0100  vaddx.y     $vf4, $vf0, $vf28x
    ctx->pc = 0x2bb260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb264: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2bb264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb268: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bb268u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb26c: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2bb26cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bb270: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2bb270u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bb274: 0xc780918c  lwc1        $f0, -0x6E74($gp)
    ctx->pc = 0x2bb274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb278: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x2bb278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x2bb27c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2bb27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2bb280: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x2bb280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x2bb284: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x2bb284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x2bb288: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2bb288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb28c: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2bb28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb290: 0xc7829190  lwc1        $f2, -0x6E70($gp)
    ctx->pc = 0x2bb290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bb294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb298: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB298u;
    {
        const bool branch_taken_0x2bb298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb298) {
            ctx->pc = 0x2BB29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB298u;
            // 0x2bb29c: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB2B0u;
            goto label_2bb2b0;
        }
    }
    ctx->pc = 0x2BB2A0u;
    // 0x2bb2a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2bb2a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bb2a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB2A4u;
    {
        const bool branch_taken_0x2bb2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2A4u;
        // 0x2bb2a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2a4) {
            ctx->pc = 0x2BB2B4u;
            goto label_2bb2b4;
        }
    }
    ctx->pc = 0x2BB2ACu;
    // 0x2bb2ac: 0x0  nop
    ctx->pc = 0x2bb2acu;
    // NOP
label_2bb2b0:
    // 0x2bb2b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bb2b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2b4:
    // 0x2bb2b4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bb2b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bb2b8: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2bb2b8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bb2bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bb2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bb2c0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2bb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2bb2c4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2bb2c4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2bb2c8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2bb2c8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2cc: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2bb2ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2d0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2bb2d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2d4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2bb2d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2d8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb2d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2dc: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb2dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2e0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2bb2e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2e4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb2e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2e8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2bb2e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2ec: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb2ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2f0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2bb2f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2f4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2bb2f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb2f8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2bb2f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2bb2fc: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2bb2fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb300: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB300u;
    {
        const bool branch_taken_0x2bb300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB300u;
        // 0x2bb304: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb300) {
            ctx->pc = 0x2BB318u;
            goto label_2bb318;
        }
    }
    ctx->pc = 0x2BB308u;
    // 0x2bb308: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb308u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb30c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB30Cu;
    {
        const bool branch_taken_0x2bb30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB30Cu;
        // 0x2bb310: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb30c) {
            ctx->pc = 0x2BB320u;
            goto label_2bb320;
        }
    }
    ctx->pc = 0x2BB314u;
    // 0x2bb314: 0x0  nop
    ctx->pc = 0x2bb314u;
    // NOP
label_2bb318:
    // 0x2bb318: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb318u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb31c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2bb31cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2bb320:
    // 0x2bb320: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x2bb320u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb324: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x2bb324u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb328: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x2bb328u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb32c: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2bb32cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb330: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2bb330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb334: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x2bb334u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb338: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x2bb338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb33c: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x2bb33cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb340: 0xc7829194  lwc1        $f2, -0x6E6C($gp)
    ctx->pc = 0x2bb340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb344: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x2bb344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bb348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb34c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bb34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb350: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB350u;
    {
        const bool branch_taken_0x2bb350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb350) {
            ctx->pc = 0x2BB354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB350u;
            // 0x2bb354: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB368u;
            goto label_2bb368;
        }
    }
    ctx->pc = 0x2BB358u;
    // 0x2bb358: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2bb358u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bb35c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB35Cu;
    {
        const bool branch_taken_0x2bb35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB35Cu;
        // 0x2bb360: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb35c) {
            ctx->pc = 0x2BB36Cu;
            goto label_2bb36c;
        }
    }
    ctx->pc = 0x2BB364u;
    // 0x2bb364: 0x0  nop
    ctx->pc = 0x2bb364u;
    // NOP
label_2bb368:
    // 0x2bb368: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bb368u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb36c:
    // 0x2bb36c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bb36cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bb370: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2bb370u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bb374: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bb374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bb378: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2bb378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2bb37c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2bb37cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2bb380: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2bb380u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bb384: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2bb384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb388: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2bb388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bb38c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2bb38cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb390: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb394: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb398: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2bb398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb39c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb39cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3a0: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2bb3a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3a4: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb3a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3a8: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2bb3a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3ac: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2bb3acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3b0: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2bb3b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2bb3b4: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2bb3b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB3B8u;
    {
        const bool branch_taken_0x2bb3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3B8u;
        // 0x2bb3bc: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3b8) {
            ctx->pc = 0x2BB3D0u;
            goto label_2bb3d0;
        }
    }
    ctx->pc = 0x2BB3C0u;
    // 0x2bb3c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb3c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb3c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB3C4u;
    {
        const bool branch_taken_0x2bb3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3C4u;
        // 0x2bb3c8: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3c4) {
            ctx->pc = 0x2BB3D8u;
            goto label_2bb3d8;
        }
    }
    ctx->pc = 0x2BB3CCu;
    // 0x2bb3cc: 0x0  nop
    ctx->pc = 0x2bb3ccu;
    // NOP
label_2bb3d0:
    // 0x2bb3d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb3d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb3d4: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2bb3d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2bb3d8:
    // 0x2bb3d8: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2bb3d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3dc: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2bb3dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3e0: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2bb3e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3e4: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2bb3e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2bb3e8: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2bb3e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3ec: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2bb3ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2bb3f0: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2bb3f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3f4: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2bb3f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2bb3f8: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2bb3f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb3fc: 0xc7829198  lwc1        $f2, -0x6E68($gp)
    ctx->pc = 0x2bb3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb400: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x2bb400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb404: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bb404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb408: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bb408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb40c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB40Cu;
    {
        const bool branch_taken_0x2bb40c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb40c) {
            ctx->pc = 0x2BB410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB40Cu;
            // 0x2bb410: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB420u;
            goto label_2bb420;
        }
    }
    ctx->pc = 0x2BB414u;
    // 0x2bb414: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2bb414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bb418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB418u;
    {
        const bool branch_taken_0x2bb418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB418u;
        // 0x2bb41c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb418) {
            ctx->pc = 0x2BB424u;
            goto label_2bb424;
        }
    }
    ctx->pc = 0x2BB420u;
label_2bb420:
    // 0x2bb420: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bb420u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb424:
    // 0x2bb424: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bb424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bb428: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2bb428u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bb42c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bb430: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2bb430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2bb434: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2bb434u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2bb438: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2bb438u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bb43c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2bb43cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb440: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2bb440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bb444: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2bb444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb448: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb44c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb44cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb450: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2bb450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb454: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb458: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2bb458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb45c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb45cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb460: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2bb460u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb464: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2bb464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb468: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2bb468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2bb46c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2bb46cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb470: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB470u;
    {
        const bool branch_taken_0x2bb470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB470u;
        // 0x2bb474: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb470) {
            ctx->pc = 0x2BB488u;
            goto label_2bb488;
        }
    }
    ctx->pc = 0x2BB478u;
    // 0x2bb478: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb478u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb47c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB47Cu;
    {
        const bool branch_taken_0x2bb47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB47Cu;
        // 0x2bb480: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb47c) {
            ctx->pc = 0x2BB490u;
            goto label_2bb490;
        }
    }
    ctx->pc = 0x2BB484u;
    // 0x2bb484: 0x0  nop
    ctx->pc = 0x2bb484u;
    // NOP
label_2bb488:
    // 0x2bb488: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb488u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb48c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2bb48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2bb490:
    // 0x2bb490: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x2bb490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb494: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2bb494u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb498: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x2bb498u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb49c: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x2bb49cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2bb4a0: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x2bb4a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb4a4: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x2bb4a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2bb4a8: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x2bb4a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb4ac: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x2bb4acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2bb4b0: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x2bb4b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb4b4: 0xfa800030  sqc2        $vf0, 0x30($s4)
    ctx->pc = 0x2bb4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb4b8: 0xfa840000  sqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2bb4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb4bc: 0xfa850010  sqc2        $vf5, 0x10($s4)
    ctx->pc = 0x2bb4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bb4c0: 0xfa860020  sqc2        $vf6, 0x20($s4)
    ctx->pc = 0x2bb4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bb4c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb4c8: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x2BB4C8u;
    SET_GPR_U32(ctx, 31, 0x2BB4D0u);
    ctx->pc = 0x2BB4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB4C8u;
    // 0x2bb4cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x2BB4C8u, 0x2BB4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB4D0u;
label_2bb4d0:
    // 0x2bb4d0: 0x26630380  addiu       $v1, $s3, 0x380
    ctx->pc = 0x2bb4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 896));
    // 0x2bb4d4: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2bb4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bb4d8: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2bb4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb4dc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2bb4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb4e0: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x2bb4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb4e4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2bb4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb4e8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2bb4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb4ec: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x2bb4ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x2bb4f0: 0x4604081e  madda.s     $f1, $f4
    ctx->pc = 0x2bb4f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4])));
    // 0x2bb4f4: 0x4603051c  madd.s      $f20, $f0, $f3
    ctx->pc = 0x2bb4f4u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x2bb4f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb4fc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2bb4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb500: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bb500u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb504: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2bb504u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb508: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x2bb508u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bb50c: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x2bb50cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb510: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2bb510u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb514: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2bb514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb518: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bb518u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb51c: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2bb51cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bb520: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bb520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bb524: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bb524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bb528: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bb528u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bb52c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb52cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb530: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2bb530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb534: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bb534u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb538: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x2BB538u;
    SET_GPR_U32(ctx, 31, 0x2BB540u);
    ctx->pc = 0x2BB53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB538u;
    // 0x2bb53c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x2BB538u, 0x2BB540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB540u;
label_2bb540:
    // 0x2bb540: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bb540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb544: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2bb544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb548: 0xc097066  jal         func_25C198
    ctx->pc = 0x2BB548u;
    SET_GPR_U32(ctx, 31, 0x2BB550u);
    ctx->pc = 0x2BB54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB548u;
    // 0x2bb54c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x2BB548u, 0x2BB550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB550u;
label_2bb550:
    // 0x2bb550: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bb550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb558: 0xc097184  jal         func_25C610
    ctx->pc = 0x2BB558u;
    SET_GPR_U32(ctx, 31, 0x2BB560u);
    ctx->pc = 0x2BB55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB558u;
    // 0x2bb55c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x2BB558u, 0x2BB560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB560u;
label_2bb560:
    // 0x2bb560: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2bb560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bb564: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb568: 0xc097084  jal         func_25C210
    ctx->pc = 0x2BB568u;
    SET_GPR_U32(ctx, 31, 0x2BB570u);
    ctx->pc = 0x2BB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB568u;
    // 0x2bb56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2BB568u, 0x2BB570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB570u;
label_2bb570:
    // 0x2bb570: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2bb570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb574: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x2bb574u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bb578: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x2bb578u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bb57c: 0x48250000  qmfc2.ni    $a1, $vf0
    ctx->pc = 0x2bb57cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb580: 0x70623488  pextlw      $a2, $v1, $v0
    ctx->pc = 0x2bb580u;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2bb584: 0x70623ca8  pextuw      $a3, $v1, $v0
    ctx->pc = 0x2bb584u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2bb588: 0x70a44488  pextlw      $t0, $a1, $a0
    ctx->pc = 0x2bb588u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x2bb58c: 0x70a44ca8  pextuw      $t1, $a1, $a0
    ctx->pc = 0x2bb58cu;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x2bb590: 0x71061389  pcpyld      $v0, $t0, $a2
    ctx->pc = 0x2bb590u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x2bb594: 0x70c81ba9  pcpyud      $v1, $a2, $t0
    ctx->pc = 0x2bb594u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x2bb598: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x2bb598u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
    // 0x2bb59c: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2bb59cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2bb5a0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x2bb5a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bb5a4: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x2bb5a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bb5a8: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x2bb5a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2bb5ac: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x2bb5acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bb5b0: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x2bb5b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bb5b4: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x2bb5b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bb5b8: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x2bb5b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bb5bc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2bb5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2bb5c0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2bb5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2bb5c4: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x2bb5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x2bb5c8: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2bb5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bb5cc: 0x266a0380  addiu       $t2, $s3, 0x380
    ctx->pc = 0x2bb5ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 896));
    // 0x2bb5d0: 0xd9440000  lqc2        $vf4, 0x0($t2)
    ctx->pc = 0x2bb5d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2bb5d4: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x2bb5d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2bb5d8: 0xd9460020  lqc2        $vf6, 0x20($t2)
    ctx->pc = 0x2bb5d8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x2bb5dc: 0xd9470030  lqc2        $vf7, 0x30($t2)
    ctx->pc = 0x2bb5dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2bb5e0: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x2bb5e0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb5e4: 0xda090010  lqc2        $vf9, 0x10($s0)
    ctx->pc = 0x2bb5e4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bb5e8: 0xda0a0020  lqc2        $vf10, 0x20($s0)
    ctx->pc = 0x2bb5e8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bb5ec: 0xda0b0030  lqc2        $vf11, 0x30($s0)
    ctx->pc = 0x2bb5ecu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2bb5f0: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2bb5f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb5f4: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2bb5f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb5f8: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2bb5f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb5fc: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2bb5fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb600: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2bb600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb604: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2bb604u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb608: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2bb608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb60c: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2bb60cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb610: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2bb610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb614: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2bb614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb618: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2bb618u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb61c: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2bb61cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb620: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2bb620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb624: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2bb624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb628: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2bb628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb62c: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2bb62cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bb630: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bb630u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb634: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2bb634u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bb638: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2bb638u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bb63c: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2bb63cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bb640: 0x7a6303b0  lq          $v1, 0x3B0($s3)
    ctx->pc = 0x2bb640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 944)));
    // 0x2bb644: 0x26660b40  addiu       $a2, $s3, 0xB40
    ctx->pc = 0x2bb644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2880));
    // 0x2bb648: 0x26640340  addiu       $a0, $s3, 0x340
    ctx->pc = 0x2bb648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    // 0x2bb64c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2bb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bb650: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x2bb650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x2bb654: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bb654u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb658: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2bb658u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bb65c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2bb65cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bb660: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2bb660u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bb664: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x2bb664u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb668: 0xd8890010  lqc2        $vf9, 0x10($a0)
    ctx->pc = 0x2bb668u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bb66c: 0xd88a0020  lqc2        $vf10, 0x20($a0)
    ctx->pc = 0x2bb66cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2bb670: 0xd88b0030  lqc2        $vf11, 0x30($a0)
    ctx->pc = 0x2bb670u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2bb674: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2bb674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb678: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2bb678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb67c: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2bb67cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb680: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2bb680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb684: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2bb684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb688: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2bb688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb68c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2bb68cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb690: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2bb690u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb694: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2bb694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb698: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2bb698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb69c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2bb69cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb6a0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2bb6a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb6a4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2bb6a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb6a8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2bb6a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb6ac: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2bb6acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb6b0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2bb6b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bb6b4: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2bb6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb6b8: 0xf8c50010  sqc2        $vf5, 0x10($a2)
    ctx->pc = 0x2bb6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bb6bc: 0xf8c60020  sqc2        $vf6, 0x20($a2)
    ctx->pc = 0x2bb6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bb6c0: 0xf8c70030  sqc2        $vf7, 0x30($a2)
    ctx->pc = 0x2bb6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bb6c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2bb6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb6c8: 0x26630b60  addiu       $v1, $s3, 0xB60
    ctx->pc = 0x2bb6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2912));
    // 0x2bb6cc: 0x26620360  addiu       $v0, $s3, 0x360
    ctx->pc = 0x2bb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
    // 0x2bb6d0: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bb6d0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb6d4: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2bb6d4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb6d8: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2bb6d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb6dc: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2bb6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb6e0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2bb6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb6e4: 0x26710340  addiu       $s1, $s3, 0x340
    ctx->pc = 0x2bb6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    // 0x2bb6e8: 0x26640b00  addiu       $a0, $s3, 0xB00
    ctx->pc = 0x2bb6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2816));
    // 0x2bb6ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bb6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6f0: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2BB6F0u;
    SET_GPR_U32(ctx, 31, 0x2BB6F8u);
    ctx->pc = 0x2BB6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6F0u;
    // 0x2bb6f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2BB6F0u, 0x2BB6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6F8u;
label_2bb6f8:
    // 0x2bb6f8: 0x7a6303b0  lq          $v1, 0x3B0($s3)
    ctx->pc = 0x2bb6f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 944)));
    // 0x2bb6fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bb6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bb700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bb700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb704: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2bb704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2bb708: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2bb708u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb70c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bb70cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bb710: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bb710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bb714: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2bb714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb718: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2bb718u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb71c: 0x26630b30  addiu       $v1, $s3, 0xB30
    ctx->pc = 0x2bb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2864));
    // 0x2bb720: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bb720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb724: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x2bb724u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bb728: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x2bb728u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bb72c: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x2bb72cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2bb730: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2bb730u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb734: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2bb734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb738: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2bb738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb73c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2bb73cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb740: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2bb740u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb744: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bb744u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb748: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2bb748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bb74c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb754: 0xc04a151  jal         func_128544
    ctx->pc = 0x2BB754u;
    SET_GPR_U32(ctx, 31, 0x2BB75Cu);
    ctx->pc = 0x2BB758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB754u;
    // 0x2bb758: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2BB754u, 0x2BB75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB75Cu;
label_2bb75c:
    // 0x2bb75c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bb760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bb760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb764: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x2bb764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2bb768: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2bb768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bb76c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2bb76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb770: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bb770u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb774: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2bb774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2bb778: 0x266203c0  addiu       $v0, $s3, 0x3C0
    ctx->pc = 0x2bb778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
    // 0x2bb77c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bb77cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb780: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x2bb780u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb784: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x2bb784u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bb788: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x2bb788u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb78c: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2bb78cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb790: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2bb790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2bb794: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bb794u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb798: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2bb798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bb79c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bb79cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bb7a0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bb7a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bb7a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bb7a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bb7a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb7a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb7ac: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2bb7acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb7b0: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bb7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb7b4: 0x267003c0  addiu       $s0, $s3, 0x3C0
    ctx->pc = 0x2bb7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
    // 0x2bb7b8: 0x27b10170  addiu       $s1, $sp, 0x170
    ctx->pc = 0x2bb7b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bb7bc: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x2bb7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb7c0: 0xc7a30174  lwc1        $f3, 0x174($sp)
    ctx->pc = 0x2bb7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb7c4: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x2bb7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb7c8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2bb7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb7cc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2bb7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb7d0: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x2bb7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bb7d4: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x2bb7d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x2bb7d8: 0x4600181e  madda.s     $f3, $f0
    ctx->pc = 0x2bb7d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0])));
    // 0x2bb7dc: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x2BB7DCu;
    SET_GPR_U32(ctx, 31, 0x2BB7E4u);
    ctx->pc = 0x2BB7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB7DCu;
    // 0x2bb7e0: 0x460c131c  madd.s      $f12, $f2, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[12]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x2BB7DCu, 0x2BB7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7E4u;
label_2bb7e4:
    // 0x2bb7e4: 0x27b20180  addiu       $s2, $sp, 0x180
    ctx->pc = 0x2bb7e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2bb7e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bb7e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2bb7ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb7f0: 0xc097066  jal         func_25C198
    ctx->pc = 0x2BB7F0u;
    SET_GPR_U32(ctx, 31, 0x2BB7F8u);
    ctx->pc = 0x2BB7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB7F0u;
    // 0x2bb7f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x2BB7F0u, 0x2BB7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7F8u;
label_2bb7f8:
    // 0x2bb7f8: 0x26640bc0  addiu       $a0, $s3, 0xBC0
    ctx->pc = 0x2bb7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3008));
    // 0x2bb7fc: 0xc097084  jal         func_25C210
    ctx->pc = 0x2BB7FCu;
    SET_GPR_U32(ctx, 31, 0x2BB804u);
    ctx->pc = 0x2BB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB7FCu;
    // 0x2bb800: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2BB7FCu, 0x2BB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB804u;
label_2bb804:
    // 0x2bb804: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x2bb804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb808: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2bb808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb80c: 0xc7a20174  lwc1        $f2, 0x174($sp)
    ctx->pc = 0x2bb80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb810: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x2bb810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb814: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2bb814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb818: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x2bb818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bb81c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2bb81cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x2bb820: 0x460c101e  madda.s     $f2, $f12
    ctx->pc = 0x2bb820u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[12])));
    // 0x2bb824: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x2BB824u;
    SET_GPR_U32(ctx, 31, 0x2BB82Cu);
    ctx->pc = 0x2BB828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB824u;
    // 0x2bb828: 0x46030b1c  madd.s      $f12, $f1, $f3 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x2BB824u, 0x2BB82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB82Cu;
label_2bb82c:
    // 0x2bb82c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bb82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bb830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bb830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bb834: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb838: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bb838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb83c: 0xc097066  jal         func_25C198
    ctx->pc = 0x2BB83Cu;
    SET_GPR_U32(ctx, 31, 0x2BB844u);
    ctx->pc = 0x2BB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB83Cu;
    // 0x2bb840: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x2BB83Cu, 0x2BB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB844u;
label_2bb844:
    // 0x2bb844: 0x26640c80  addiu       $a0, $s3, 0xC80
    ctx->pc = 0x2bb844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3200));
    // 0x2bb848: 0xc097084  jal         func_25C210
    ctx->pc = 0x2BB848u;
    SET_GPR_U32(ctx, 31, 0x2BB850u);
    ctx->pc = 0x2BB84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB848u;
    // 0x2bb84c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2BB848u, 0x2BB850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB850u;
label_2bb850:
    // 0x2bb850: 0x266403e0  addiu       $a0, $s3, 0x3E0
    ctx->pc = 0x2bb850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 992));
    // 0x2bb854: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2bb854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb858: 0x26620be0  addiu       $v0, $s3, 0xBE0
    ctx->pc = 0x2bb858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3040));
    // 0x2bb85c: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2bb85cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb860: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2bb860u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb864: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2bb864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb868: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bb868u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb86c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2bb86cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb870: 0x267003c0  addiu       $s0, $s3, 0x3C0
    ctx->pc = 0x2bb870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
    // 0x2bb874: 0x26640c00  addiu       $a0, $s3, 0xC00
    ctx->pc = 0x2bb874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3072));
    // 0x2bb878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bb878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb87c: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2BB87Cu;
    SET_GPR_U32(ctx, 31, 0x2BB884u);
    ctx->pc = 0x2BB880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB87Cu;
    // 0x2bb880: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2BB87Cu, 0x2BB884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB884u;
label_2bb884:
    // 0x2bb884: 0x7a630430  lq          $v1, 0x430($s3)
    ctx->pc = 0x2bb884u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 1072)));
    // 0x2bb888: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bb888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bb88c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bb88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb890: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2bb890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2bb894: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2bb894u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bb898: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bb898u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bb89c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bb89cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bb8a0: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2bb8a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb8a4: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2bb8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb8a8: 0x26630c30  addiu       $v1, $s3, 0xC30
    ctx->pc = 0x2bb8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3120));
    // 0x2bb8ac: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bb8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb8b0: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2bb8b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bb8b4: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2bb8b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bb8b8: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2bb8b8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2bb8bc: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2bb8bcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bb8c0: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2bb8c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb8c4: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2bb8c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb8c8: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2bb8c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bb8cc: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2bb8ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bb8d0: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bb8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bb8d4: 0x7a620c70  lq          $v0, 0xC70($s3)
    ctx->pc = 0x2bb8d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 3184)));
    // 0x2bb8d8: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2bb8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2bb8dc: 0xc66c0404  lwc1        $f12, 0x404($s3)
    ctx->pc = 0x2bb8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bb8e0: 0x26700c40  addiu       $s0, $s3, 0xC40
    ctx->pc = 0x2bb8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3136));
    // 0x2bb8e4: 0xc66d0400  lwc1        $f13, 0x400($s3)
    ctx->pc = 0x2bb8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bb8e8: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2BB8E8u;
    SET_GPR_U32(ctx, 31, 0x2BB8F0u);
    ctx->pc = 0x2BB8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8E8u;
    // 0x2bb8ec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2BB8E8u, 0x2BB8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8F0u;
label_2bb8f0:
    // 0x2bb8f0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2bb8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2bb8f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bb8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb8f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bb8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bb8fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bb8fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bb900: 0xc781919c  lwc1        $f1, -0x6E64($gp)
    ctx->pc = 0x2bb900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb904: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bb904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb908: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB908u;
    {
        const bool branch_taken_0x2bb908 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb908) {
            ctx->pc = 0x2BB90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB908u;
            // 0x2bb90c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB920u;
            goto label_2bb920;
        }
    }
    ctx->pc = 0x2BB910u;
    // 0x2bb910: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb914: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB914u;
    {
        const bool branch_taken_0x2bb914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB914u;
        // 0x2bb918: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb914) {
            ctx->pc = 0x2BB924u;
            goto label_2bb924;
        }
    }
    ctx->pc = 0x2BB91Cu;
    // 0x2bb91c: 0x0  nop
    ctx->pc = 0x2bb91cu;
    // NOP
label_2bb920:
    // 0x2bb920: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bb920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb924:
    // 0x2bb924: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bb924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bb928: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2bb928u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bb92c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bb930: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2bb930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2bb934: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2bb934u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2bb938: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2bb938u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bb93c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2bb93cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb940: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2bb940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bb944: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2bb944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb948: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb94c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb94cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb950: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2bb950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb954: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb958: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2bb958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb95c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2bb95cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb960: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2bb960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb964: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2bb964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bb968: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2bb968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2bb96c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2bb96cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bb970: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB970u;
    {
        const bool branch_taken_0x2bb970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB970u;
        // 0x2bb974: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb970) {
            ctx->pc = 0x2BB988u;
            goto label_2bb988;
        }
    }
    ctx->pc = 0x2BB978u;
    // 0x2bb978: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb978u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb97c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB97Cu;
    {
        const bool branch_taken_0x2bb97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB97Cu;
        // 0x2bb980: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb97c) {
            ctx->pc = 0x2BB990u;
            goto label_2bb990;
        }
    }
    ctx->pc = 0x2BB984u;
    // 0x2bb984: 0x0  nop
    ctx->pc = 0x2bb984u;
    // NOP
label_2bb988:
    // 0x2bb988: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb988u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb98c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2bb98cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2bb990:
    // 0x2bb990: 0x4a60012c  vsub.zw     $vf4, $vf0, $vf0
    ctx->pc = 0x2bb990u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb994: 0x4a60016c  vsub.zw     $vf5, $vf0, $vf0
    ctx->pc = 0x2bb994u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb998: 0x4ba001ac  vsub.xyw    $vf6, $vf0, $vf0
    ctx->pc = 0x2bb998u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb99c: 0x4a400183  vaddw.z     $vf6, $vf0, $vf0w
    ctx->pc = 0x2bb99cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9a0: 0x4b1c0101  vaddy.x     $vf4, $vf0, $vf28y
    ctx->pc = 0x2bb9a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9a4: 0x4b1c0144  vsubx.x     $vf5, $vf0, $vf28x
    ctx->pc = 0x2bb9a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9a8: 0x4a9c0100  vaddx.y     $vf4, $vf0, $vf28x
    ctx->pc = 0x2bb9a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9ac: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2bb9acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9b0: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x2bb9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb9b4: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bb9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb9b8: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2bb9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bb9bc: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2bb9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bb9c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb9c4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2bb9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb9c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb9cc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2bb9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bb9d0: 0xc04a151  jal         func_128544
    ctx->pc = 0x2BB9D0u;
    SET_GPR_U32(ctx, 31, 0x2BB9D8u);
    ctx->pc = 0x2BB9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9D0u;
    // 0x2bb9d4: 0x7e620c70  sq          $v0, 0xC70($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 3184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2BB9D0u, 0x2BB9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9D8u;
label_2bb9d8:
    // 0x2bb9d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bb9dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bb9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb9e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb9e4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2bb9e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb9e8: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2bb9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2bb9ec: 0x26620480  addiu       $v0, $s3, 0x480
    ctx->pc = 0x2bb9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1152));
    // 0x2bb9f0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bb9f0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb9f4: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x2bb9f4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb9f8: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x2bb9f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bb9fc: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x2bb9fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bba00: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2bba00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bba04: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2bba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2bba08: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bba08u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bba0c: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2bba0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bba10: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bba10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bba14: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bba14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bba18: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bba18u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bba1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bba1cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bba20: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2bba20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bba24: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bba24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bba28: 0x26700480  addiu       $s0, $s3, 0x480
    ctx->pc = 0x2bba28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1152));
    // 0x2bba2c: 0x27b10170  addiu       $s1, $sp, 0x170
    ctx->pc = 0x2bba2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bba30: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x2bba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bba34: 0xc7a30174  lwc1        $f3, 0x174($sp)
    ctx->pc = 0x2bba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bba38: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x2bba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bba3c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2bba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bba40: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2bba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bba44: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x2bba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bba48: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x2bba48u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x2bba4c: 0x4600181e  madda.s     $f3, $f0
    ctx->pc = 0x2bba4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0])));
    // 0x2bba50: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x2BBA50u;
    SET_GPR_U32(ctx, 31, 0x2BBA58u);
    ctx->pc = 0x2BBA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA50u;
    // 0x2bba54: 0x460c131c  madd.s      $f12, $f2, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[12]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x2BBA50u, 0x2BBA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA58u;
label_2bba58:
    // 0x2bba58: 0x27b20180  addiu       $s2, $sp, 0x180
    ctx->pc = 0x2bba58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2bba5c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bba5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2bba60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bba60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bba64: 0xc097066  jal         func_25C198
    ctx->pc = 0x2BBA64u;
    SET_GPR_U32(ctx, 31, 0x2BBA6Cu);
    ctx->pc = 0x2BBA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA64u;
    // 0x2bba68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x2BBA64u, 0x2BBA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA6Cu;
label_2bba6c:
    // 0x2bba6c: 0x26640cc0  addiu       $a0, $s3, 0xCC0
    ctx->pc = 0x2bba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3264));
    // 0x2bba70: 0xc097084  jal         func_25C210
    ctx->pc = 0x2BBA70u;
    SET_GPR_U32(ctx, 31, 0x2BBA78u);
    ctx->pc = 0x2BBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA70u;
    // 0x2bba74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2BBA70u, 0x2BBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA78u;
label_2bba78:
    // 0x2bba78: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x2bba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bba7c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2bba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bba80: 0xc7a20174  lwc1        $f2, 0x174($sp)
    ctx->pc = 0x2bba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bba84: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x2bba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bba88: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2bba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bba8c: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x2bba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bba90: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2bba90u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x2bba94: 0x460c101e  madda.s     $f2, $f12
    ctx->pc = 0x2bba94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[12])));
    // 0x2bba98: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x2BBA98u;
    SET_GPR_U32(ctx, 31, 0x2BBAA0u);
    ctx->pc = 0x2BBA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA98u;
    // 0x2bba9c: 0x46030b1c  madd.s      $f12, $f1, $f3 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x2BBA98u, 0x2BBAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAA0u;
label_2bbaa0:
    // 0x2bbaa0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bbaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bbaa4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bbaa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bbaa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbaac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bbaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbab0: 0xc097066  jal         func_25C198
    ctx->pc = 0x2BBAB0u;
    SET_GPR_U32(ctx, 31, 0x2BBAB8u);
    ctx->pc = 0x2BBAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAB0u;
    // 0x2bbab4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x2BBAB0u, 0x2BBAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAB8u;
label_2bbab8:
    // 0x2bbab8: 0x26640d80  addiu       $a0, $s3, 0xD80
    ctx->pc = 0x2bbab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3456));
    // 0x2bbabc: 0xc097084  jal         func_25C210
    ctx->pc = 0x2BBABCu;
    SET_GPR_U32(ctx, 31, 0x2BBAC4u);
    ctx->pc = 0x2BBAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBABCu;
    // 0x2bbac0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2BBABCu, 0x2BBAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAC4u;
label_2bbac4:
    // 0x2bbac4: 0x266304a0  addiu       $v1, $s3, 0x4A0
    ctx->pc = 0x2bbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1184));
    // 0x2bbac8: 0x26620ce0  addiu       $v0, $s3, 0xCE0
    ctx->pc = 0x2bbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3296));
    // 0x2bbacc: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bbaccu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bbad0: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2bbad0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bbad4: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2bbad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bbad8: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2bbad8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bbadc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2bbadcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bbae0: 0x26710480  addiu       $s1, $s3, 0x480
    ctx->pc = 0x2bbae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1152));
    // 0x2bbae4: 0x26640d00  addiu       $a0, $s3, 0xD00
    ctx->pc = 0x2bbae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3328));
    // 0x2bbae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bbae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbaec: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2BBAECu;
    SET_GPR_U32(ctx, 31, 0x2BBAF4u);
    ctx->pc = 0x2BBAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAECu;
    // 0x2bbaf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2BBAECu, 0x2BBAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAF4u;
label_2bbaf4:
    // 0x2bbaf4: 0x7a6304f0  lq          $v1, 0x4F0($s3)
    ctx->pc = 0x2bbaf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 1264)));
    // 0x2bbaf8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bbaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bbafc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bbafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbb00: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2bbb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2bbb04: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2bbb04u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbb08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bbb08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bbb0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bbb0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bbb10: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2bbb10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bbb14: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2bbb14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bbb18: 0x26630d30  addiu       $v1, $s3, 0xD30
    ctx->pc = 0x2bbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3376));
    // 0x2bbb1c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bbb1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bbb20: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x2bbb20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bbb24: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x2bbb24u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bbb28: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x2bbb28u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2bbb2c: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2bbb2cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbb30: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2bbb30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bbb34: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2bbb34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bbb38: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2bbb38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bbb3c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2bbb3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bbb40: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bbb40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bbb44: 0x7a620d70  lq          $v0, 0xD70($s3)
    ctx->pc = 0x2bbb44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 3440)));
    // 0x2bbb48: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2bbb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2bbb4c: 0xc66c04c4  lwc1        $f12, 0x4C4($s3)
    ctx->pc = 0x2bbb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bbb50: 0x26700d40  addiu       $s0, $s3, 0xD40
    ctx->pc = 0x2bbb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3392));
    // 0x2bbb54: 0xc66d04c0  lwc1        $f13, 0x4C0($s3)
    ctx->pc = 0x2bbb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bbb58: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2BBB58u;
    SET_GPR_U32(ctx, 31, 0x2BBB60u);
    ctx->pc = 0x2BBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB58u;
    // 0x2bbb5c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2BBB58u, 0x2BBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB60u;
label_2bbb60:
    // 0x2bbb60: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2bbb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2bbb64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bbb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbb68: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bbb68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bbb6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bbb6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bbb70: 0xc78191a0  lwc1        $f1, -0x6E60($gp)
    ctx->pc = 0x2bbb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbb74: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bbb74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbb78: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBB78u;
    {
        const bool branch_taken_0x2bbb78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bbb78) {
            ctx->pc = 0x2BBB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBB78u;
            // 0x2bbb7c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBB90u;
            goto label_2bbb90;
        }
    }
    ctx->pc = 0x2BBB80u;
    // 0x2bbb80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbb84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBB84u;
    {
        const bool branch_taken_0x2bbb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB84u;
        // 0x2bbb88: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb84) {
            ctx->pc = 0x2BBB94u;
            goto label_2bbb94;
        }
    }
    ctx->pc = 0x2BBB8Cu;
    // 0x2bbb8c: 0x0  nop
    ctx->pc = 0x2bbb8cu;
    // NOP
label_2bbb90:
    // 0x2bbb90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bbb90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbb94:
    // 0x2bbb94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bbb94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bbb98: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2bbb98u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bbb9c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bbba0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2bbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2bbba4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2bbba4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2bbba8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2bbba8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbac: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2bbbacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbb0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2bbbb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbb4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2bbbb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbb8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2bbbb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbbc: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2bbbbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbc0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2bbbc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbc4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2bbbc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbc8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2bbbc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbcc: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2bbbccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbd0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2bbbd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbd4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2bbbd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbd8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2bbbd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2bbbdc: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2bbbdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2bbbe0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBBE0u;
    {
        const bool branch_taken_0x2bbbe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBE0u;
        // 0x2bbbe4: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbbe0) {
            ctx->pc = 0x2BBBF8u;
            goto label_2bbbf8;
        }
    }
    ctx->pc = 0x2BBBE8u;
    // 0x2bbbe8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bbbe8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bbbec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBBECu;
    {
        const bool branch_taken_0x2bbbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBECu;
        // 0x2bbbf0: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbbec) {
            ctx->pc = 0x2BBC00u;
            goto label_2bbc00;
        }
    }
    ctx->pc = 0x2BBBF4u;
    // 0x2bbbf4: 0x0  nop
    ctx->pc = 0x2bbbf4u;
    // NOP
label_2bbbf8:
    // 0x2bbbf8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bbbf8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bbbfc: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2bbbfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2bbc00:
    // 0x2bbc00: 0x4a60012c  vsub.zw     $vf4, $vf0, $vf0
    ctx->pc = 0x2bbc00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bbc04: 0x4a60016c  vsub.zw     $vf5, $vf0, $vf0
    ctx->pc = 0x2bbc04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bbc08: 0x4ba001ac  vsub.xyw    $vf6, $vf0, $vf0
    ctx->pc = 0x2bbc08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bbc0c: 0x4a400183  vaddw.z     $vf6, $vf0, $vf0w
    ctx->pc = 0x2bbc0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bbc10: 0x4b1c0101  vaddy.x     $vf4, $vf0, $vf28y
    ctx->pc = 0x2bbc10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bbc14: 0x4b1c0144  vsubx.x     $vf5, $vf0, $vf28x
    ctx->pc = 0x2bbc14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bbc18: 0x4a9c0100  vaddx.y     $vf4, $vf0, $vf28x
    ctx->pc = 0x2bbc18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bbc1c: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2bbc1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bbc20: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x2bbc20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbc24: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bbc24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbc28: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2bbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bbc2c: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2bbc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bbc30: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2bbc30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbc34: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x2bbc34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bbc38: 0x7e620d70  sq          $v0, 0xD70($s3)
    ctx->pc = 0x2bbc38u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 3440), GPR_VEC(ctx, 2));
    // 0x2bbc3c: 0xdfb101a8  ld          $s1, 0x1A8($sp)
    ctx->pc = 0x2bbc3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2bbc40: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x2bbc40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2bbc44: 0xdfb301b8  ld          $s3, 0x1B8($sp)
    ctx->pc = 0x2bbc44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2bbc48: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x2bbc48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bbc4c: 0xdfb501c8  ld          $s5, 0x1C8($sp)
    ctx->pc = 0x2bbc4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2bbc50: 0xdfb601d0  ld          $s6, 0x1D0($sp)
    ctx->pc = 0x2bbc50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bbc54: 0xdfb701d8  ld          $s7, 0x1D8($sp)
    ctx->pc = 0x2bbc54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2bbc58: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x2bbc58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2bbc5c: 0xdfbf01e8  ld          $ra, 0x1E8($sp)
    ctx->pc = 0x2bbc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2bbc60: 0xc7b80210  lwc1        $f24, 0x210($sp)
    ctx->pc = 0x2bbc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2bbc64: 0xc7b70208  lwc1        $f23, 0x208($sp)
    ctx->pc = 0x2bbc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2bbc68: 0xc7b60200  lwc1        $f22, 0x200($sp)
    ctx->pc = 0x2bbc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bbc6c: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x2bbc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bbc70: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x2bbc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bbc74: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC74u;
        // 0x2bbc78: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBC7Cu;
    // 0x2bbc7c: 0x0  nop
    ctx->pc = 0x2bbc7cu;
    // NOP
    // 0x2bbc80: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC80u;
        // 0x2bbc84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBC88u;
}
