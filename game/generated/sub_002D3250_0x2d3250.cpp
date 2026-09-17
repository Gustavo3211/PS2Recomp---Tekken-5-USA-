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

// Function: sub_002D3250
// Address: 0x2d3250 - 0x2d3ef0
void sub_002D3250_0x2d3250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3250_0x2d3250");
#endif

    switch (ctx->pc) {
        case 0x2d32b8u: goto label_2d32b8;
        case 0x2d3430u: goto label_2d3430;
        case 0x2d3438u: goto label_2d3438;
        case 0x2d345cu: goto label_2d345c;
        case 0x2d3464u: goto label_2d3464;
        case 0x2d34acu: goto label_2d34ac;
        case 0x2d34ccu: goto label_2d34cc;
        case 0x2d34f8u: goto label_2d34f8;
        case 0x2d3504u: goto label_2d3504;
        case 0x2d3524u: goto label_2d3524;
        case 0x2d3530u: goto label_2d3530;
        case 0x2d3538u: goto label_2d3538;
        case 0x2d359cu: goto label_2d359c;
        case 0x2d35a8u: goto label_2d35a8;
        case 0x2d35e0u: goto label_2d35e0;
        case 0x2d3690u: goto label_2d3690;
        case 0x2d36f0u: goto label_2d36f0;
        case 0x2d3818u: goto label_2d3818;
        case 0x2d3c8cu: goto label_2d3c8c;
        case 0x2d3cc0u: goto label_2d3cc0;
        case 0x2d3cccu: goto label_2d3ccc;
        case 0x2d3d00u: goto label_2d3d00;
        case 0x2d3d08u: goto label_2d3d08;
        case 0x2d3d24u: goto label_2d3d24;
        case 0x2d3d50u: goto label_2d3d50;
        case 0x2d3d58u: goto label_2d3d58;
        case 0x2d3d80u: goto label_2d3d80;
        case 0x2d3d88u: goto label_2d3d88;
        case 0x2d3e30u: goto label_2d3e30;
        case 0x2d3e38u: goto label_2d3e38;
        default: break;
    }

    ctx->pc = 0x2d3250u;

    // 0x2d3250: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2d3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2d3254: 0xc7839434  lwc1        $f3, -0x6BCC($gp)
    ctx->pc = 0x2d3254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3258: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2d3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2d325c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2d325cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3260: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2d3260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2d3264: 0x240e4000  addiu       $t6, $zero, 0x4000
    ctx->pc = 0x2d3264u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d3268: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2d3268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2d326c: 0x240ffedd  addiu       $t7, $zero, -0x123
    ctx->pc = 0x2d326cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967005));
    // 0x2d3270: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2d3270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2d3274: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2d3274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2d3278: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2d3278u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2d327c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2d327cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2d3280: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2d3280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x2d3284: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d3284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3288: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d3288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d328c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2d328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2d3290: 0x3410a765  ori         $s0, $zero, 0xA765
    ctx->pc = 0x2d3290u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42853);
    // 0x2d3294: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2d3294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2d3298: 0x24111654  addiu       $s1, $zero, 0x1654
    ctx->pc = 0x2d3298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5716));
    // 0x2d329c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2d329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2d32a0: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x2d32a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x2d32a4: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2d32a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2d32a8: 0x2413cdcc  addiu       $s3, $zero, -0x3234
    ctx->pc = 0x2d32a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294954444));
    // 0x2d32ac: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2d32acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2d32b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d32b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d32b4: 0x0  nop
    ctx->pc = 0x2d32b4u;
    // NOP
label_2d32b8:
    // 0x2d32b8: 0x1b31018  mult        $v0, $t5, $s3
    ctx->pc = 0x2d32b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d32bc: 0x71b11818  mult1       $v1, $t5, $s1
    ctx->pc = 0x2d32bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d32c0: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x2d32c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x2d32c4: 0x264b0340  addiu       $t3, $s2, 0x340
    ctx->pc = 0x2d32c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x2d32c8: 0xd5100  sll         $t2, $t5, 4
    ctx->pc = 0x2d32c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x2d32cc: 0x1b06018  mult        $t4, $t5, $s0
    ctx->pc = 0x2d32ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2d32d0: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x2d32d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d32d4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d32d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d32d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d32d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d32dc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2d32dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d32e0: 0x30823fff  andi        $v0, $a0, 0x3FFF
    ctx->pc = 0x2d32e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x2d32e4: 0x30c33fff  andi        $v1, $a2, 0x3FFF
    ctx->pc = 0x2d32e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2d32e8: 0x30894000  andi        $t1, $a0, 0x4000
    ctx->pc = 0x2d32e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2d32ec: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x2d32ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x2d32f0: 0x30c84000  andi        $t0, $a2, 0x4000
    ctx->pc = 0x2d32f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2d32f4: 0x30c68000  andi        $a2, $a2, 0x8000
    ctx->pc = 0x2d32f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2d32f8: 0x1c23823  subu        $a3, $t6, $v0
    ctx->pc = 0x2d32f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2d32fc: 0x1c32823  subu        $a1, $t6, $v1
    ctx->pc = 0x2d32fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2d3300: 0xe9100b  movn        $v0, $a3, $t1
    ctx->pc = 0x2d3300u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x2d3304: 0xa8180b  movn        $v1, $a1, $t0
    ctx->pc = 0x2d3304u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x2d3308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d3308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d330c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d330cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3310: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2d3310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d3314: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2d3314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2d3318: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d3318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d331c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2d331cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d3320: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d3320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3324: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2d3324u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2d3328: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2d3328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2d332c: 0x254a0060  addiu       $t2, $t2, 0x60
    ctx->pc = 0x2d332cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 96));
    // 0x2d3330: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2d3330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2d3334: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2d3334u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d3338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d333c: 0x1af1018  mult        $v0, $t5, $t7
    ctx->pc = 0x2d333cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d3340: 0x28a5021  addu        $t2, $s4, $t2
    ctx->pc = 0x2d3340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x2d3344: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2d3344u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2d3348: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d3348u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d334c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2d334cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d3350: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x2d3350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2d3354: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x2d3354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x2d3358: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d3358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d335c: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x2d335cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d3360: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x2d3360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2d3364: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x2d3364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x2d3368: 0x30c23fff  andi        $v0, $a2, 0x3FFF
    ctx->pc = 0x2d3368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2d336c: 0x30c74000  andi        $a3, $a2, 0x4000
    ctx->pc = 0x2d336cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2d3370: 0x30c68000  andi        $a2, $a2, 0x8000
    ctx->pc = 0x2d3370u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2d3374: 0x30894000  andi        $t1, $a0, 0x4000
    ctx->pc = 0x2d3374u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2d3378: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x2d3378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x2d337c: 0x1c22823  subu        $a1, $t6, $v0
    ctx->pc = 0x2d337cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2d3380: 0x1c34023  subu        $t0, $t6, $v1
    ctx->pc = 0x2d3380u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2d3384: 0xa7100b  movn        $v0, $a1, $a3
    ctx->pc = 0x2d3384u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2d3388: 0x109180b  movn        $v1, $t0, $t1
    ctx->pc = 0x2d3388u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x2d338c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d338cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3390: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d3390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3394: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2d3394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2d3398: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2d3398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d339c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d339cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d33a0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2d33a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d33a4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2d33a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d33a8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2d33a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2d33ac: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2d33acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2d33b0: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x2d33b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2d33b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d33b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d33b8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2d33b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d33bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d33bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d33c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d33c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d33c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d33c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d33c8: 0x19a0ffbb  blez        $t5, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2D33C8u;
    {
        const bool branch_taken_0x2d33c8 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x2D33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33C8u;
        // 0x2d33cc: 0xe5400008  swc1        $f0, 0x8($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33c8) {
            ctx->pc = 0x2D32B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d32b8;
        }
    }
    ctx->pc = 0x2D33D0u;
    // 0x2d33d0: 0x8e8300bc  lw          $v1, 0xBC($s4)
    ctx->pc = 0x2d33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x2d33d4: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x2d33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2d33d8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2d33d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2d33dc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d33e0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d33e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d33e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d33e8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2d33e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d33ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d33ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d33f0: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x2d33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2d33f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2d33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d33f8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2d33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d33fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d3400: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d3400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d3404: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x2d3404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d3408: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2d3408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x2d340c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2d340cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2d3410: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2d3410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2d3414: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2d3414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x2d3418: 0x1040025b  beqz        $v0, . + 4 + (0x25B << 2)
    ctx->pc = 0x2D3418u;
    {
        const bool branch_taken_0x2d3418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3418u;
        // 0x2d341c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3418) {
            ctx->pc = 0x2D3D88u;
            goto label_2d3d88;
        }
    }
    ctx->pc = 0x2D3420u;
    // 0x2d3420: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x2d3420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x2d3424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3428: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2D3428u;
    SET_GPR_U32(ctx, 31, 0x2D3430u);
    ctx->pc = 0x2D342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3428u;
    // 0x2d342c: 0x24c437e0  addiu       $a0, $a2, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2D3428u, 0x2D3430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3430u;
label_2d3430:
    // 0x2d3430: 0xc0b7700  jal         func_2DDC00
    ctx->pc = 0x2D3430u;
    SET_GPR_U32(ctx, 31, 0x2D3438u);
    ctx->pc = 0x2D3434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3430u;
    // 0x2d3434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC00u, 0x2D3430u, 0x2D3438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3438u;
label_2d3438:
    // 0x2d3438: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x2d3438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d343c: 0x3c0142bd  lui         $at, 0x42BD
    ctx->pc = 0x2d343cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17085 << 16));
    // 0x2d3440: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d3440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3444: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d3444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d3448: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d3448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d344c: 0x4500024f  bc1f        . + 4 + (0x24F << 2)
    ctx->pc = 0x2D344Cu;
    {
        const bool branch_taken_0x2d344c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D344Cu;
        // 0x2d3450: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d344c) {
            ctx->pc = 0x2D3D8Cu;
            goto label_2d3d8c;
        }
    }
    ctx->pc = 0x2D3454u;
    // 0x2d3454: 0xc0cc05a  jal         func_330168
    ctx->pc = 0x2D3454u;
    SET_GPR_U32(ctx, 31, 0x2D345Cu);
    ctx->pc = 0x330168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330168u, 0x2D3454u, 0x2D345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D345Cu;
label_2d345c:
    // 0x2d345c: 0xc08c1d0  jal         func_230740
    ctx->pc = 0x2D345Cu;
    SET_GPR_U32(ctx, 31, 0x2D3464u);
    ctx->pc = 0x2D3460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D345Cu;
    // 0x2d3460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230740u, 0x2D345Cu, 0x2D3464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3464u;
label_2d3464:
    // 0x2d3464: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2d3464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2d3468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d3468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d346c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d346cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d3470: 0x48a36800  qmtc2.ni    $v1, $vf13
    ctx->pc = 0x2d3470u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d3474: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x2d3474u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2d3478: 0xd84a0000  lqc2        $vf10, 0x0($v0)
    ctx->pc = 0x2d3478u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d347c: 0xc7819438  lwc1        $f1, -0x6BC8($gp)
    ctx->pc = 0x2d347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3480: 0xc780943c  lwc1        $f0, -0x6BC4($gp)
    ctx->pc = 0x2d3480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3484: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d3484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3488: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2d3488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d348c: 0x48a42800  qmtc2.ni    $a0, $vf5
    ctx->pc = 0x2d348cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d3490: 0x48a53000  qmtc2.ni    $a1, $vf6
    ctx->pc = 0x2d3490u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2d3494: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d3494u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2d3498: 0x4a400360  vaddq.z     $vf13, $vf0, $Q
    ctx->pc = 0x2d3498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x2d349c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d349cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d34a0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2d34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2d34a4: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D34A4u;
    SET_GPR_U32(ctx, 31, 0x2D34ACu);
    ctx->pc = 0x2D34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D34A4u;
    // 0x2d34a8: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D34A4u, 0x2D34ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D34ACu;
label_2d34ac:
    // 0x2d34ac: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x2d34acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d34b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d34b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d34b4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2d34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2d34b8: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x2d34b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2d34bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2d34bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d34c0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d34c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d34c4: 0xc09362a  jal         func_24D8A8
    ctx->pc = 0x2D34C4u;
    SET_GPR_U32(ctx, 31, 0x2D34CCu);
    ctx->pc = 0x2D34C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D34C4u;
    // 0x2d34c8: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D8A8u, 0x2D34C4u, 0x2D34CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D34CCu;
label_2d34cc:
    // 0x2d34cc: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2d34ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2d34d0: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x2d34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d34d4: 0x8cd1fb00  lw          $s1, -0x500($a2)
    ctx->pc = 0x2d34d4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3AFB00u));
    // 0x2d34d8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d34dc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2d34dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d34e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d34e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d34e4: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x2d34e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d34e8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2d34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d34ec: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x2d34ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2d34f0: 0xc0936e2  jal         func_24DB88
    ctx->pc = 0x2D34F0u;
    SET_GPR_U32(ctx, 31, 0x2D34F8u);
    ctx->pc = 0x2D34F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D34F0u;
    // 0x2d34f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DB88u, 0x2D34F0u, 0x2D34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D34F8u;
label_2d34f8:
    // 0x2d34f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d34f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d34fc: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D34FCu;
    SET_GPR_U32(ctx, 31, 0x2D3504u);
    ctx->pc = 0x2D3500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D34FCu;
    // 0x2d3500: 0x3484d400  ori         $a0, $a0, 0xD400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D34FCu, 0x2D3504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3504u;
label_2d3504:
    // 0x2d3504: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x2d3504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d3508: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2d3508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d350c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3510: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2d3510u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3514: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2d3514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d3518: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2d3518u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2d351c: 0xc0936e2  jal         func_24DB88
    ctx->pc = 0x2D351Cu;
    SET_GPR_U32(ctx, 31, 0x2D3524u);
    ctx->pc = 0x2D3520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D351Cu;
    // 0x2d3520: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DB88u, 0x2D351Cu, 0x2D3524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3524u;
label_2d3524:
    // 0x2d3524: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d3524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d3528: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D3528u;
    SET_GPR_U32(ctx, 31, 0x2D3530u);
    ctx->pc = 0x2D352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3528u;
    // 0x2d352c: 0x3484d400  ori         $a0, $a0, 0xD400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D3528u, 0x2D3530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3530u;
label_2d3530:
    // 0x2d3530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3530u;
    {
        const bool branch_taken_0x2d3530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3530u;
        // 0x2d3534: 0x8e830078  lw          $v1, 0x78($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3530) {
            ctx->pc = 0x2D3550u;
            goto label_2d3550;
        }
    }
    ctx->pc = 0x2D3538u;
label_2d3538:
    // 0x2d3538: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d3538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d353c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d353cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d3540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d3540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3544: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2d3544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2d3548: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2d3548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2d354c: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x2d354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_2d3550:
    // 0x2d3550: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d3550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3554: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x2d3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2d3558: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2d3558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d355c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2d355cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3560: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D3560u;
    {
        const bool branch_taken_0x2d3560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3560) {
            ctx->pc = 0x2D3564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3560u;
            // 0x2d3564: 0x24051735  addiu       $a1, $zero, 0x1735 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5941));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D35ECu;
            goto label_2d35ec;
        }
    }
    ctx->pc = 0x2D3568u;
    // 0x2d3568: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2d3568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2d356c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2d356cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3570: 0x24c2fb00  addiu       $v0, $a2, -0x500
    ctx->pc = 0x2d3570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966016));
    // 0x2d3574: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x2d3574u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2d3578: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2d3578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d357c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d3580: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d3580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3584: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2d3584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d3588: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2d3588u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2d358c: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x2d358cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2d3590: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2d3590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d3594: 0xc0936e2  jal         func_24DB88
    ctx->pc = 0x2D3594u;
    SET_GPR_U32(ctx, 31, 0x2D359Cu);
    ctx->pc = 0x2D3598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3594u;
    // 0x2d3598: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DB88u, 0x2D3594u, 0x2D359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D359Cu;
label_2d359c:
    // 0x2d359c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d359cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d35a0: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D35A0u;
    SET_GPR_U32(ctx, 31, 0x2D35A8u);
    ctx->pc = 0x2D35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D35A0u;
    // 0x2d35a4: 0x3484d400  ori         $a0, $a0, 0xD400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D35A0u, 0x2D35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35A8u;
label_2d35a8:
    // 0x2d35a8: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x2d35a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d35ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d35acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d35b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d35b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35b4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2d35b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d35b8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2d35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d35bc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2d35bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d35c0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2d35c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d35c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2d35c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2d35c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d35c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d35cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d35d0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2d35d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d35d4: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x2d35d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2d35d8: 0xc0936e2  jal         func_24DB88
    ctx->pc = 0x2D35D8u;
    SET_GPR_U32(ctx, 31, 0x2D35E0u);
    ctx->pc = 0x2D35DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D35D8u;
    // 0x2d35dc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DB88u, 0x2D35D8u, 0x2D35E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35E0u;
label_2d35e0:
    // 0x2d35e0: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x2d35e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d35e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d35e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d35e8: 0x24051735  addiu       $a1, $zero, 0x1735
    ctx->pc = 0x2d35e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5941));
label_2d35ec:
    // 0x2d35ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d35f0: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2d35f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2d35f4: 0x852818  mult        $a1, $a0, $a1
    ctx->pc = 0x2d35f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2d35f8: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x2d35f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x2d35fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3600: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2d3600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2d3604: 0x8cd1fb00  lw          $s1, -0x500($a2)
    ctx->pc = 0x2d3604u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294966016)));
    // 0x2d3608: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d3608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d360c: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x2d360cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x2d3610: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2d3610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d3614: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d3614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d3618: 0x203a821  addu        $s5, $s0, $v1
    ctx->pc = 0x2d3618u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d361c: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x2d361cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x2d3620: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x2d3620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2d3624: 0x26b20010  addiu       $s2, $s5, 0x10
    ctx->pc = 0x2d3624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2d3628: 0x26b30020  addiu       $s3, $s5, 0x20
    ctx->pc = 0x2d3628u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2d362c: 0x26b60030  addiu       $s6, $s5, 0x30
    ctx->pc = 0x2d362cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2d3630: 0x26aa001c  addiu       $t2, $s5, 0x1C
    ctx->pc = 0x2d3630u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x2d3634: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3634u;
    {
        const bool branch_taken_0x2d3634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3634u;
        // 0x2d3638: 0x26be002c  addiu       $fp, $s5, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3634) {
            ctx->pc = 0x2D3644u;
            goto label_2d3644;
        }
    }
    ctx->pc = 0x2D363Cu;
    // 0x2d363c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d3640: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2d3640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d3644:
    // 0x2d3644: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2d3644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2d3648: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d3648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d364c: 0x24a20340  addiu       $v0, $a1, 0x340
    ctx->pc = 0x2d364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 832));
    // 0x2d3650: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x2d3650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x2d3654: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3658: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2d3658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d365c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3660: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d3660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d3664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d3664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3668: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x2d3668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2d366c: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x2d366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d3670: 0x18400183  blez        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x2D3670u;
    {
        const bool branch_taken_0x2d3670 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3670u;
        // 0x2d3674: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3670) {
            ctx->pc = 0x2D3C80u;
            goto label_2d3c80;
        }
    }
    ctx->pc = 0x2D3678u;
    // 0x2d3678: 0xc7959440  lwc1        $f21, -0x6BC0($gp)
    ctx->pc = 0x2d3678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d367c: 0x240d000f  addiu       $t5, $zero, 0xF
    ctx->pc = 0x2d367cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d3680: 0x3c0b44bb  lui         $t3, 0x44BB
    ctx->pc = 0x2d3680u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17595 << 16));
    // 0x2d3684: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x2d3684u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x2d3688: 0x26970060  addiu       $s7, $s4, 0x60
    ctx->pc = 0x2d3688u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x2d368c: 0xc7949444  lwc1        $f20, -0x6BBC($gp)
    ctx->pc = 0x2d368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d3690:
    // 0x2d3690: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2d3690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2d3694: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2d3694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d3698: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d369c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D369Cu;
    {
        const bool branch_taken_0x2d369c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D369Cu;
        // 0x2d36a0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d369c) {
            ctx->pc = 0x2D36C0u;
            goto label_2d36c0;
        }
    }
    ctx->pc = 0x2D36A4u;
    // 0x2d36a4: 0x8e860084  lw          $a2, 0x84($s4)
    ctx->pc = 0x2d36a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x2d36a8: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2d36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d36ac: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2d36acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2d36b0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D36B0u;
    {
        const bool branch_taken_0x2d36b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36B0u;
        // 0x2d36b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36b0) {
            ctx->pc = 0x2D3704u;
            goto label_2d3704;
        }
    }
    ctx->pc = 0x2D36B8u;
    // 0x2d36b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D36B8u;
    {
        const bool branch_taken_0x2d36b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36B8u;
        // 0x2d36bc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36b8) {
            ctx->pc = 0x2D36CCu;
            goto label_2d36cc;
        }
    }
    ctx->pc = 0x2D36C0u;
label_2d36c0:
    // 0x2d36c0: 0x8e860084  lw          $a2, 0x84($s4)
    ctx->pc = 0x2d36c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x2d36c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d36c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d36c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d36cc:
    // 0x2d36cc: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2d36ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2d36d0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2d36d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d36d4: 0x4c2021  addu        $a0, $v0, $t4
    ctx->pc = 0x2d36d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2d36d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d36d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d36dc: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x2d36dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x2d36e0: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x2d36e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
    // 0x2d36e4: 0x7fac0040  sq          $t4, 0x40($sp)
    ctx->pc = 0x2d36e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 12));
    // 0x2d36e8: 0xc0b4a7e  jal         func_2D29F8
    ctx->pc = 0x2D36E8u;
    SET_GPR_U32(ctx, 31, 0x2D36F0u);
    ctx->pc = 0x2D36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D36E8u;
    // 0x2d36ec: 0x7fad0050  sq          $t5, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D29F8u, 0x2D36E8u, 0x2D36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36F0u;
label_2d36f0:
    // 0x2d36f0: 0x7bad0050  lq          $t5, 0x50($sp)
    ctx->pc = 0x2d36f0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d36f4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2d36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d36f8: 0x7bac0040  lq          $t4, 0x40($sp)
    ctx->pc = 0x2d36f8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d36fc: 0x7bab0030  lq          $t3, 0x30($sp)
    ctx->pc = 0x2d36fcu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3700: 0x7baa0020  lq          $t2, 0x20($sp)
    ctx->pc = 0x2d3700u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d3704:
    // 0x2d3704: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3704u;
    {
        const bool branch_taken_0x2d3704 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3704u;
        // 0x2d3708: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3704) {
            ctx->pc = 0x2D3728u;
            goto label_2d3728;
        }
    }
    ctx->pc = 0x2D370Cu;
    // 0x2d370c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2d370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d3710: 0xc7819448  lwc1        $f1, -0x6BB8($gp)
    ctx->pc = 0x2d3710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3714: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2d3714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2d3718: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d3718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d371c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D371Cu;
    {
        const bool branch_taken_0x2d371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D371Cu;
        // 0x2d3720: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d371c) {
            ctx->pc = 0x2D3748u;
            goto label_2d3748;
        }
    }
    ctx->pc = 0x2D3724u;
    // 0x2d3724: 0x0  nop
    ctx->pc = 0x2d3724u;
    // NOP
label_2d3728:
    // 0x2d3728: 0xc781944c  lwc1        $f1, -0x6BB4($gp)
    ctx->pc = 0x2d3728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d372c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d372cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3730: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d3730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3734: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d3734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d3738: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d3738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d373c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D373Cu;
    {
        const bool branch_taken_0x2d373c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D373Cu;
        // 0x2d3740: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d373c) {
            ctx->pc = 0x2D3748u;
            goto label_2d3748;
        }
    }
    ctx->pc = 0x2D3744u;
    // 0x2d3744: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x2d3744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2d3748:
    // 0x2d3748: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2d3748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d374c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2d374cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2d3750: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d3750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3754: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2d3754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3758: 0x4502004b  bc1fl       . + 4 + (0x4B << 2)
    ctx->pc = 0x2D3758u;
    {
        const bool branch_taken_0x2d3758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3758) {
            ctx->pc = 0x2D375Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3758u;
            // 0x2d375c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3888u;
            goto label_2d3888;
        }
    }
    ctx->pc = 0x2D3760u;
    // 0x2d3760: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2d3760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3764: 0x4bc109fd  vabs.xyz    $vf1, $vf1
    ctx->pc = 0x2d3764u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3768: 0x4b010852  vmaxz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x2d3768u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d376c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d376cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d3770: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d3770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3774: 0xc7809450  lwc1        $f0, -0x6BB0($gp)
    ctx->pc = 0x2d3774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3778: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d377c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x2D377Cu;
    {
        const bool branch_taken_0x2d377c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d377c) {
            ctx->pc = 0x2D3780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D377Cu;
            // 0x2d3780: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D37B0u;
            goto label_2d37b0;
        }
    }
    ctx->pc = 0x2D3784u;
    // 0x2d3784: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d3784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d3788: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2d3788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d378c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2d378cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2d3790: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2d3790u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2d3794: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2d3794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2d3798: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2d3798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x2d379c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2d379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d37a0: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D37A0u;
    {
        const bool branch_taken_0x2d37a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d37a0) {
            ctx->pc = 0x2D37A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D37A0u;
            // 0x2d37a4: 0xae0d0028  sw          $t5, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D37ECu;
            goto label_2d37ec;
        }
    }
    ctx->pc = 0x2D37A8u;
    // 0x2d37a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D37A8u;
    {
        const bool branch_taken_0x2d37a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d37a8) {
            ctx->pc = 0x2D37ECu;
            goto label_2d37ec;
        }
    }
    ctx->pc = 0x2D37B0u;
label_2d37b0:
    // 0x2d37b0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d37b4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2d37b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d37b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d37bc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2d37bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d37c0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2d37c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2d37c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d37c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d37c8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2d37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d37cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d37d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D37D0u;
    {
        const bool branch_taken_0x2d37d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37D0u;
        // 0x2d37d4: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37d0) {
            ctx->pc = 0x2D37ECu;
            goto label_2d37ec;
        }
    }
    ctx->pc = 0x2D37D8u;
    // 0x2d37d8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2d37d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d37dc: 0x3c01be00  lui         $at, 0xBE00
    ctx->pc = 0x2d37dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48640 << 16));
    // 0x2d37e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d37e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d37e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d37e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d37e8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2d37e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2d37ec:
    // 0x2d37ec: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2d37ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2d37f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d37f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d37f4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2d37f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d37f8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2d37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2d37fc: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D37FCu;
    {
        const bool branch_taken_0x2d37fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d37fc) {
            ctx->pc = 0x2D3858u;
            goto label_2d3858;
        }
    }
    ctx->pc = 0x2D3804u;
    // 0x2d3804: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x2d3804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x2d3808: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x2d3808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
    // 0x2d380c: 0x7fac0040  sq          $t4, 0x40($sp)
    ctx->pc = 0x2d380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 12));
    // 0x2d3810: 0xc0cb7ac  jal         func_32DEB0
    ctx->pc = 0x2D3810u;
    SET_GPR_U32(ctx, 31, 0x2D3818u);
    ctx->pc = 0x2D3814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3810u;
    // 0x2d3814: 0x7fad0050  sq          $t5, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEB0u, 0x2D3810u, 0x2D3818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3818u;
label_2d3818:
    // 0x2d3818: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d3818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d381c: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x2d381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2d3820: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d3820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3824: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d3824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3828: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2d3828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d382c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d382cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d3830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3834: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2d3834u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d3838: 0x1012  mflo        $v0
    ctx->pc = 0x2d3838u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2d383c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2d383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2d3840: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2d3840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2d3844: 0x7baa0020  lq          $t2, 0x20($sp)
    ctx->pc = 0x2d3844u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3848: 0x7bab0030  lq          $t3, 0x30($sp)
    ctx->pc = 0x2d3848u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d384c: 0x7bac0040  lq          $t4, 0x40($sp)
    ctx->pc = 0x2d384cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3850: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3850u;
    {
        const bool branch_taken_0x2d3850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3850u;
        // 0x2d3854: 0x7bad0050  lq          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3850) {
            ctx->pc = 0x2D3878u;
            goto label_2d3878;
        }
    }
    ctx->pc = 0x2D3858u;
label_2d3858:
    // 0x2d3858: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3858u;
    {
        const bool branch_taken_0x2d3858 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d3858) {
            ctx->pc = 0x2D385Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3858u;
            // 0x2d385c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3870u;
            goto label_2d3870;
        }
    }
    ctx->pc = 0x2D3860u;
    // 0x2d3860: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d3860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d3864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3864u;
    {
        const bool branch_taken_0x2d3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3864u;
        // 0x2d3868: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3864) {
            ctx->pc = 0x2D3878u;
            goto label_2d3878;
        }
    }
    ctx->pc = 0x2D386Cu;
    // 0x2d386c: 0x0  nop
    ctx->pc = 0x2d386cu;
    // NOP
label_2d3870:
    // 0x2d3870: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D3870u;
    {
        const bool branch_taken_0x2d3870 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d3870) {
            ctx->pc = 0x2D3874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3870u;
            // 0x2d3874: 0xae0d0028  sw          $t5, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3878u;
            goto label_2d3878;
        }
    }
    ctx->pc = 0x2D3878u;
label_2d3878:
    // 0x2d3878: 0xc7809454  lwc1        $f0, -0x6BAC($gp)
    ctx->pc = 0x2d3878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d387c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D387Cu;
    {
        const bool branch_taken_0x2d387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D387Cu;
        // 0x2d3880: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d387c) {
            ctx->pc = 0x2D38A8u;
            goto label_2d38a8;
        }
    }
    ctx->pc = 0x2D3884u;
    // 0x2d3884: 0x0  nop
    ctx->pc = 0x2d3884u;
    // NOP
label_2d3888:
    // 0x2d3888: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d3888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d388c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2d388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d3890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d3890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3894: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2d3894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2d3898: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2d3898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d389c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d389cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d38a0: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x2d38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x2d38a4: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x2d38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_2d38a8:
    // 0x2d38a8: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x2d38a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d38ac: 0x96230018  lhu         $v1, 0x18($s1)
    ctx->pc = 0x2d38acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d38b0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2d38b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2d38b4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2d38b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x2d38b8: 0x4bc001e8  vadd.xyz    $vf7, $vf0, $vf0
    ctx->pc = 0x2d38b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2d38bc: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x2d38bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d38c0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2d38c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d38c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d38c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d38c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d38c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d38cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d38ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d38d0: 0xc7839458  lwc1        $f3, -0x6BA8($gp)
    ctx->pc = 0x2d38d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d38d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d38d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d38d8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2d38d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d38dc: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x2d38dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x2d38e0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2d38e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d38e4: 0xc784945c  lwc1        $f4, -0x6BA4($gp)
    ctx->pc = 0x2d38e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d38e8: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x2d38e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2d38ec: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x2d38ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d38f0: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2d38f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d38f4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2d38f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d38f8: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x2d38f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d38fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d38fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d3900: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2d3900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2d3904: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2d3904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3908: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2d3908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d390c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d390cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3910: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x2d3910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2d3914: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2d3914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3918: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2d3918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d391c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2d391cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2d3920: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d3920u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d3924: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2d3924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2d3928: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d3928u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d392c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2d392cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2d3930: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d3930u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3934: 0xe6c20004  swc1        $f2, 0x4($s6)
    ctx->pc = 0x2d3934u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2d3938: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2d3938u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d393c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d393cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d3940: 0x4bc109fd  vabs.xyz    $vf1, $vf1
    ctx->pc = 0x2d3940u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3944: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x2d3944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3948: 0x4b010852  vmaxz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x2d3948u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d394c: 0x4b010851  vmaxy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x2d394cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3950: 0x4a6103bc  vdiv        $Q, $vf0w, $vf1x
    ctx->pc = 0x2d3950u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x2d3954: 0x48ab1800  qmtc2.ni    $t3, $vf3
    ctx->pc = 0x2d3954u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x2d3958: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x2d3958u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d395c: 0x4b03086b  vmax.x      $vf1, $vf1, $vf3
    ctx->pc = 0x2d395cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3960: 0x4b04086f  vmini.x     $vf1, $vf1, $vf4
    ctx->pc = 0x2d3960u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3964: 0xc7819460  lwc1        $f1, -0x6BA0($gp)
    ctx->pc = 0x2d3964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3968: 0xc7809464  lwc1        $f0, -0x6B9C($gp)
    ctx->pc = 0x2d3968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d396c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d396cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3970: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2d3970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d3974: 0x4b03086c  vsub.x      $vf1, $vf1, $vf3
    ctx->pc = 0x2d3974u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3978: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2d3978u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d397c: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x2d397cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2d3980: 0x4b03086a  vmul.x      $vf1, $vf1, $vf3
    ctx->pc = 0x2d3980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3984: 0x4b040868  vadd.x      $vf1, $vf1, $vf4
    ctx->pc = 0x2d3984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3988: 0x4b01086a  vmul.x      $vf1, $vf1, $vf1
    ctx->pc = 0x2d3988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d398c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2d398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3990: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d3990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3994: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2d3994u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3998: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2D3998u;
    {
        const bool branch_taken_0x2d3998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3998) {
            ctx->pc = 0x2D39C8u;
            goto label_2d39c8;
        }
    }
    ctx->pc = 0x2D39A0u;
    // 0x2d39a0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2d39a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d39a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d39a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d39a8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2D39A8u;
    {
        const bool branch_taken_0x2d39a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d39a8) {
            ctx->pc = 0x2D39C8u;
            goto label_2d39c8;
        }
    }
    ctx->pc = 0x2D39B0u;
    // 0x2d39b0: 0xc7809468  lwc1        $f0, -0x6B98($gp)
    ctx->pc = 0x2d39b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d39b4: 0xc781946c  lwc1        $f1, -0x6B94($gp)
    ctx->pc = 0x2d39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d39b8: 0xc7829470  lwc1        $f2, -0x6B90($gp)
    ctx->pc = 0x2d39b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d39bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2D39BCu;
    {
        const bool branch_taken_0x2d39bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39BCu;
        // 0x2d39c0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39bc) {
            ctx->pc = 0x2D3A48u;
            goto label_2d3a48;
        }
    }
    ctx->pc = 0x2D39C4u;
    // 0x2d39c4: 0x0  nop
    ctx->pc = 0x2d39c4u;
    // NOP
label_2d39c8:
    // 0x2d39c8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2d39c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d39cc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2D39CCu;
    {
        const bool branch_taken_0x2d39cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d39cc) {
            ctx->pc = 0x2D3A00u;
            goto label_2d3a00;
        }
    }
    ctx->pc = 0x2D39D4u;
    // 0x2d39d4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2d39d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d39d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d39d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d39dc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2D39DCu;
    {
        const bool branch_taken_0x2d39dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d39dc) {
            ctx->pc = 0x2D3A00u;
            goto label_2d3a00;
        }
    }
    ctx->pc = 0x2D39E4u;
    // 0x2d39e4: 0xc7809474  lwc1        $f0, -0x6B8C($gp)
    ctx->pc = 0x2d39e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d39e8: 0xc7819478  lwc1        $f1, -0x6B88($gp)
    ctx->pc = 0x2d39e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d39ec: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2d39ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2d39f0: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2d39f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2d39f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D39F4u;
    {
        const bool branch_taken_0x2d39f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39F4u;
        // 0x2d39f8: 0xe6540008  swc1        $f20, 0x8($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39f4) {
            ctx->pc = 0x2D3A50u;
            goto label_2d3a50;
        }
    }
    ctx->pc = 0x2D39FCu;
    // 0x2d39fc: 0x0  nop
    ctx->pc = 0x2d39fcu;
    // NOP
label_2d3a00:
    // 0x2d3a00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d3a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3a04: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2d3a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3a08: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2D3A08u;
    {
        const bool branch_taken_0x2d3a08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3a08) {
            ctx->pc = 0x2D3A38u;
            goto label_2d3a38;
        }
    }
    ctx->pc = 0x2D3A10u;
    // 0x2d3a10: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2d3a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d3a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3a18: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3A18u;
    {
        const bool branch_taken_0x2d3a18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3a18) {
            ctx->pc = 0x2D3A38u;
            goto label_2d3a38;
        }
    }
    ctx->pc = 0x2D3A20u;
    // 0x2d3a20: 0xc780947c  lwc1        $f0, -0x6B84($gp)
    ctx->pc = 0x2d3a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a24: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x2d3a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2d3a28: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2d3a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2d3a2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3A2Cu;
    {
        const bool branch_taken_0x2d3a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A2Cu;
        // 0x2d3a30: 0xe6540008  swc1        $f20, 0x8($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a2c) {
            ctx->pc = 0x2D3A50u;
            goto label_2d3a50;
        }
    }
    ctx->pc = 0x2D3A34u;
    // 0x2d3a34: 0x0  nop
    ctx->pc = 0x2d3a34u;
    // NOP
label_2d3a38:
    // 0x2d3a38: 0xc7809480  lwc1        $f0, -0x6B80($gp)
    ctx->pc = 0x2d3a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a3c: 0xc7819484  lwc1        $f1, -0x6B7C($gp)
    ctx->pc = 0x2d3a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3a40: 0xc7829488  lwc1        $f2, -0x6B78($gp)
    ctx->pc = 0x2d3a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3a44: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2d3a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2d3a48:
    // 0x2d3a48: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2d3a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2d3a4c: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x2d3a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2d3a50:
    // 0x2d3a50: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2d3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a54: 0xc781948c  lwc1        $f1, -0x6B74($gp)
    ctx->pc = 0x2d3a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3a58: 0xc7859490  lwc1        $f5, -0x6B70($gp)
    ctx->pc = 0x2d3a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d3a5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d3a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d3a60: 0xc7849494  lwc1        $f4, -0x6B6C($gp)
    ctx->pc = 0x2d3a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3a64: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x2d3a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3a68: 0xc7829498  lwc1        $f2, -0x6B68($gp)
    ctx->pc = 0x2d3a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3a6c: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x2d3a6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2d3a70: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2d3a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2d3a74: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x2d3a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d3a78: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2d3a78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3a7c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2d3a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2d3a80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d3a80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d3a84: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2d3a84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d3a88: 0x48a26000  qmtc2.ni    $v0, $vf12
    ctx->pc = 0x2d3a88u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d3a8c: 0x48a64000  qmtc2.ni    $a2, $vf8
    ctx->pc = 0x2d3a8cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2d3a90: 0x48a34800  qmtc2.ni    $v1, $vf9
    ctx->pc = 0x2d3a90u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d3a94: 0x48a45800  qmtc2.ni    $a0, $vf11
    ctx->pc = 0x2d3a94u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d3a98: 0x4b040082  vaddz.x     $vf2, $vf0, $vf4z
    ctx->pc = 0x2d3a98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d3a9c: 0x4a440084  vsubx.z     $vf2, $vf0, $vf4x
    ctx->pc = 0x2d3a9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d3aa0: 0x4a490240  vaddx.z     $vf9, $vf0, $vf9x
    ctx->pc = 0x2d3aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x2d3aa4: 0x4a800243  vaddw.y     $vf9, $vf0, $vf0w
    ctx->pc = 0x2d3aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x2d3aa8: 0x4bc410e8  vadd.xyz    $vf3, $vf2, $vf4
    ctx->pc = 0x2d3aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d3aac: 0x4b4819bc  vmulax.xz   $ACC, $vf3, $vf8x
    ctx->pc = 0x2d3aacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2d3ab0: 0x4b40208f  vmsubw.xz   $vf2, $vf4, $vf0w
    ctx->pc = 0x2d3ab0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d3ab4: 0x4a8c1080  vaddx.y     $vf2, $vf2, $vf12x
    ctx->pc = 0x2d3ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d3ab8: 0x4b4b4a58  vmulx.xz    $vf9, $vf9, $vf11x
    ctx->pc = 0x2d3ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x2d3abc: 0xda4b0000  lqc2        $vf11, 0x0($s2)
    ctx->pc = 0x2d3abcu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3ac0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d3ac0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2d3ac4: 0x4b40109c  vmulq.xz    $vf2, $vf2, $Q
    ctx->pc = 0x2d3ac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d3ac8: 0x4bc05abc  vadda.xyz   $ACC, $vf0, $vf11
    ctx->pc = 0x2d3ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d3acc: 0x4bc910a9  vmadd.xyz   $vf2, $vf2, $vf9
    ctx->pc = 0x2d3accu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[9]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d3ad0: 0xc781949c  lwc1        $f1, -0x6B64($gp)
    ctx->pc = 0x2d3ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3ad4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3ad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3ad8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d3ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d3adc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2d3adcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2d3ae0: 0x4a6103bc  vdiv        $Q, $vf0w, $vf1x
    ctx->pc = 0x2d3ae0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x2d3ae4: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x2d3ae4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2d3ae8: 0x4bc41098  vmulx.xyz   $vf2, $vf2, $vf4x
    ctx->pc = 0x2d3ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d3aec: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d3aecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2d3af0: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x2d3af0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d3af4: 0x4bc239e8  vadd.xyz    $vf7, $vf7, $vf2
    ctx->pc = 0x2d3af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2d3af8: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2d3af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3afc: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x2d3afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b00: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2d3b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d3b04: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d3b04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d3b08: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x2d3b08u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3b0c: 0x48a36000  qmtc2.ni    $v1, $vf12
    ctx->pc = 0x2d3b0cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d3b10: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x2d3b10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d3b14: 0x4bc639bc  vmulax.xyz  $ACC, $vf7, $vf6x
    ctx->pc = 0x2d3b14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d3b18: 0x4b4c18fc  vmsubax.xz  $ACC, $vf3, $vf12x
    ctx->pc = 0x2d3b18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2d3b1c: 0x4bc6184c  vmsubx.xyz  $vf1, $vf3, $vf6x
    ctx->pc = 0x2d3b1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3b20: 0x4b4002bc  vadda.xz    $ACC, $vf0, $vf0
    ctx->pc = 0x2d3b20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2d3b24: 0x4a85003c  vaddax.y    $ACC, $vf0, $vf5x
    ctx->pc = 0x2d3b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2d3b28: 0x4bc40848  vmaddx.xyz  $vf1, $vf1, $vf4x
    ctx->pc = 0x2d3b28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3b2c: 0xfaa10000  sqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2d3b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d3b30: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x2d3b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3b34: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x2d3b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3b38: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d3b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3b3c: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2d3b3cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2d3b40: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2d3b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3b44: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x2d3b44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d3b48: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2d3b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b4c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d3b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d3b50: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d3b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d3b54: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2d3b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b58: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d3b58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3b5c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2d3b5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d3b60: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2d3b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3b64: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2d3b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3b68: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2d3b68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2d3b6c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2d3b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3b70: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2d3b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d3b74: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2d3b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b78: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d3b78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3b7c: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2d3b7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d3b80: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2d3b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b84: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d3b84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d3b88: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x2d3b88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d3b8c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2d3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d3b90: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3B90u;
    {
        const bool branch_taken_0x2d3b90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d3b90) {
            ctx->pc = 0x2D3BACu;
            goto label_2d3bac;
        }
    }
    ctx->pc = 0x2D3B98u;
    // 0x2d3b98: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2d3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d3b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d3ba0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3BA0u;
    {
        const bool branch_taken_0x2d3ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BA0u;
        // 0x2d3ba4: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ba0) {
            ctx->pc = 0x2D3BACu;
            goto label_2d3bac;
        }
    }
    ctx->pc = 0x2D3BA8u;
    // 0x2d3ba8: 0xae0d0028  sw          $t5, 0x28($s0)
    ctx->pc = 0x2d3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 13));
label_2d3bac:
    // 0x2d3bac: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2d3bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2d3bb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d3bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3bb4: 0xc78194a0  lwc1        $f1, -0x6B60($gp)
    ctx->pc = 0x2d3bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3bb8: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2d3bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x2d3bbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d3bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3bc0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2d3bc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3bc4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d3bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d3bc8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2d3bc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2d3bcc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2d3bccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3bd0: 0x48ab1000  qmtc2.ni    $t3, $vf2
    ctx->pc = 0x2d3bd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x2d3bd4: 0x4bca086c  vsub.xyz    $vf1, $vf1, $vf10
    ctx->pc = 0x2d3bd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3bd8: 0x4bc109fd  vabs.xyz    $vf1, $vf1
    ctx->pc = 0x2d3bd8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3bdc: 0x4b010852  vmaxz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x2d3bdcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3be0: 0x4b010851  vmaxy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x2d3be0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3be4: 0x4b0d092c  vsub.x      $vf4, $vf1, $vf13
    ctx->pc = 0x2d3be4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d3be8: 0x4b02086c  vsub.x      $vf1, $vf1, $vf2
    ctx->pc = 0x2d3be8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3bec: 0x4b00212b  vmax.x      $vf4, $vf4, $vf0
    ctx->pc = 0x2d3becu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d3bf0: 0x4b00086b  vmax.x      $vf1, $vf1, $vf0
    ctx->pc = 0x2d3bf0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3bf4: 0x4b0d2128  vadd.x      $vf4, $vf4, $vf13
    ctx->pc = 0x2d3bf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d3bf8: 0x4a2403bd  .word       0x4A2403BD                   # vsqrt       $Q, $vf4x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2d3bf8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2d3bfc: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2d3bfcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d3c00: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x2d3c00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2d3c04: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2d3c04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2d3c08: 0x4b03086f  vmini.x     $vf1, $vf1, $vf3
    ctx->pc = 0x2d3c08u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3c0c: 0x4b04086a  vmul.x      $vf1, $vf1, $vf4
    ctx->pc = 0x2d3c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3c10: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d3c10u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2d3c14: 0x4a40685c  vmulq.z     $vf1, $vf13, $Q
    ctx->pc = 0x2d3c14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3c18: 0x4a400853  vmaxw.z     $vf1, $vf1, $vf0w
    ctx->pc = 0x2d3c18u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3c1c: 0x4a420854  vminix.z    $vf1, $vf1, $vf2x
    ctx->pc = 0x2d3c1cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d3c20: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2d3c20u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d3c24: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2d3c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3c28: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x2d3c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3c2c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2d3c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2d3c30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d3c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3c34: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2d3c34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d3c38: 0xe623004c  swc1        $f3, 0x4C($s1)
    ctx->pc = 0x2d3c38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2d3c3c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2d3c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3c40: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2d3c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3c44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d3c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d3c48: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2d3c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3c4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3C4Cu;
    {
        const bool branch_taken_0x2d3c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C4Cu;
        // 0x2d3c50: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c4c) {
            ctx->pc = 0x2D3C58u;
            goto label_2d3c58;
        }
    }
    ctx->pc = 0x2D3C54u;
    // 0x2d3c54: 0xe622001c  swc1        $f2, 0x1C($s1)
    ctx->pc = 0x2d3c54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2d3c58:
    // 0x2d3c58: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2d3c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3c5c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2d3c5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2d3c60: 0xc78194a4  lwc1        $f1, -0x6B5C($gp)
    ctx->pc = 0x2d3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3c64: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x2d3c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2d3c68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d3c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d3c6c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2d3c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d3c70: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x2d3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d3c74: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x2d3c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3c78: 0x1440fe85  bnez        $v0, . + 4 + (-0x17B << 2)
    ctx->pc = 0x2D3C78u;
    {
        const bool branch_taken_0x2d3c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C78u;
        // 0x2d3c7c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c78) {
            ctx->pc = 0x2D3690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3690;
        }
    }
    ctx->pc = 0x2D3C80u;
label_2d3c80:
    // 0x2d3c80: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d3c84: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D3C84u;
    SET_GPR_U32(ctx, 31, 0x2D3C8Cu);
    ctx->pc = 0x2D3C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C84u;
    // 0x2d3c88: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D3C84u, 0x2D3C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C8Cu;
label_2d3c8c:
    // 0x2d3c8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d3c90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3c94: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2d3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2d3c98: 0x8c51fb00  lw          $s1, -0x500($v0)
    ctx->pc = 0x2d3c98u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3AFB00u));
    // 0x2d3c9c: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x2d3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d3ca0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2d3ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d3ca4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d3ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3ca8: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x2d3ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d3cac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d3cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d3cb0: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x2d3cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2d3cb4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2d3cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d3cb8: 0xc093672  jal         func_24D9C8
    ctx->pc = 0x2D3CB8u;
    SET_GPR_U32(ctx, 31, 0x2D3CC0u);
    ctx->pc = 0x2D3CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CB8u;
    // 0x2d3cbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D9C8u, 0x2D3CB8u, 0x2D3CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CC0u;
label_2d3cc0:
    // 0x2d3cc0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d3cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d3cc4: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D3CC4u;
    SET_GPR_U32(ctx, 31, 0x2D3CCCu);
    ctx->pc = 0x2D3CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CC4u;
    // 0x2d3cc8: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D3CC4u, 0x2D3CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CCCu;
label_2d3ccc:
    // 0x2d3ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cd0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2d3cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3cd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3cd8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d3cdc: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x2d3cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d3ce0: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x2d3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d3ce4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2d3ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d3ce8: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x2d3ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3cec: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2d3cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d3cf0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2d3cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d3cf4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2d3cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2d3cf8: 0xc093672  jal         func_24D9C8
    ctx->pc = 0x2D3CF8u;
    SET_GPR_U32(ctx, 31, 0x2D3D00u);
    ctx->pc = 0x2D3CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CF8u;
    // 0x2d3cfc: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D9C8u, 0x2D3CF8u, 0x2D3D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D00u;
label_2d3d00:
    // 0x2d3d00: 0xc09368c  jal         func_24DA30
    ctx->pc = 0x2D3D00u;
    SET_GPR_U32(ctx, 31, 0x2D3D08u);
    ctx->pc = 0x24DA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DA30u, 0x2D3D00u, 0x2D3D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D08u;
label_2d3d08:
    // 0x2d3d08: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d3d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3d0c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d3d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d3d10: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x2d3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d3d14: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x2d3d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x2d3d18: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2d3d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d3d1c: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D3D1Cu;
    SET_GPR_U32(ctx, 31, 0x2D3D24u);
    ctx->pc = 0x2D3D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D1Cu;
    // 0x2d3d20: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D3D1Cu, 0x2D3D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D24u;
label_2d3d24:
    // 0x2d3d24: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2d3d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3d28: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x2d3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2d3d2c: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x2d3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2d3d30: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2d3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d3d34: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2d3d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d3d38: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D3D38u;
    {
        const bool branch_taken_0x2d3d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d38) {
            ctx->pc = 0x2D3D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3D38u;
            // 0x2d3d3c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3D78u;
            goto label_2d3d78;
        }
    }
    ctx->pc = 0x2D3D40u;
    // 0x2d3d40: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2d3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2d3d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d48: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2D3D48u;
    SET_GPR_U32(ctx, 31, 0x2D3D50u);
    ctx->pc = 0x2D3D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D48u;
    // 0x2d3d4c: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2D3D48u, 0x2D3D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D50u;
label_2d3d50:
    // 0x2d3d50: 0xc0b7700  jal         func_2DDC00
    ctx->pc = 0x2D3D50u;
    SET_GPR_U32(ctx, 31, 0x2D3D58u);
    ctx->pc = 0x2D3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D50u;
    // 0x2d3d54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC00u, 0x2D3D50u, 0x2D3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D58u;
label_2d3d58:
    // 0x2d3d58: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x2d3d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3d5c: 0x3c0142bd  lui         $at, 0x42BD
    ctx->pc = 0x2d3d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17085 << 16));
    // 0x2d3d60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d3d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3d64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d3d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d3d68: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d3d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3d6c: 0x4501fdf2  bc1t        . + 4 + (-0x20E << 2)
    ctx->pc = 0x2D3D6Cu;
    {
        const bool branch_taken_0x2d3d6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D6Cu;
        // 0x2d3d70: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d6c) {
            ctx->pc = 0x2D3538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3538;
        }
    }
    ctx->pc = 0x2D3D74u;
    // 0x2d3d74: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d3d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_2d3d78:
    // 0x2d3d78: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D3D78u;
    SET_GPR_U32(ctx, 31, 0x2D3D80u);
    ctx->pc = 0x2D3D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D78u;
    // 0x2d3d7c: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D3D78u, 0x2D3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D80u;
label_2d3d80:
    // 0x2d3d80: 0xc0cc08e  jal         func_330238
    ctx->pc = 0x2D3D80u;
    SET_GPR_U32(ctx, 31, 0x2D3D88u);
    ctx->pc = 0x330238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330238u, 0x2D3D80u, 0x2D3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D88u;
label_2d3d88:
    // 0x2d3d88: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2d3d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d3d8c:
    // 0x2d3d8c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2d3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2d3d90: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2d3d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d3d94: 0x28c5005b  slti        $a1, $a2, 0x5B
    ctx->pc = 0x2d3d94u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x2d3d98: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2d3d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3d9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3da0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2d3da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d3da4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2d3da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3da8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d3da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3dac: 0x45300a  movz        $a2, $v0, $a1
    ctx->pc = 0x2d3dacu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x2d3db0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2d3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d3db4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2d3db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2d3db8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2d3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2d3dbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3dc4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3dc8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2d3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d3dcc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2d3dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d3dd0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d3dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d3dd4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2d3dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d3dd8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x2d3dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d3ddc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3de0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3de8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d3dec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d3decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d3df0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d3df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3df4: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2d3df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d3df8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3dfc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d3e00: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2d3e00u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d3e04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3e08: 0x28430012  slti        $v1, $v0, 0x12
    ctx->pc = 0x2d3e08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2d3e0c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2d3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2d3e10: 0x8012  mflo        $s0
    ctx->pc = 0x2d3e10u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2d3e14: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3E14u;
    {
        const bool branch_taken_0x2d3e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E14u;
        // 0x2d3e18: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e14) {
            ctx->pc = 0x2D3E20u;
            goto label_2d3e20;
        }
    }
    ctx->pc = 0x2D3E1Cu;
    // 0x2d3e1c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2d3e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2d3e20:
    // 0x2d3e20: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2d3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2d3e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e28: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2D3E28u;
    SET_GPR_U32(ctx, 31, 0x2D3E30u);
    ctx->pc = 0x2D3E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E28u;
    // 0x2d3e2c: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2D3E28u, 0x2D3E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E30u;
label_2d3e30:
    // 0x2d3e30: 0xc0b7700  jal         func_2DDC00
    ctx->pc = 0x2D3E30u;
    SET_GPR_U32(ctx, 31, 0x2D3E38u);
    ctx->pc = 0x2D3E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E30u;
    // 0x2d3e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC00u, 0x2D3E30u, 0x2D3E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E38u;
label_2d3e38:
    // 0x2d3e38: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x2d3e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3e3c: 0x3c0142bd  lui         $at, 0x42BD
    ctx->pc = 0x2d3e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17085 << 16));
    // 0x2d3e40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d3e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3e44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d3e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d3e48: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d3e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3e4c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2D3E4Cu;
    {
        const bool branch_taken_0x2d3e4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E4Cu;
        // 0x2d3e50: 0x8e830078  lw          $v1, 0x78($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e4c) {
            ctx->pc = 0x2D3E88u;
            goto label_2d3e88;
        }
    }
    ctx->pc = 0x2D3E54u;
    // 0x2d3e54: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x2d3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2d3e58: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x2d3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d3e5c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d3e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d3e60: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3E60u;
    {
        const bool branch_taken_0x2d3e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e60) {
            ctx->pc = 0x2D3E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3E60u;
            // 0x2d3e64: 0x223001a  div         $zero, $s1, $v1 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3E8Cu;
            goto label_2d3e8c;
        }
    }
    ctx->pc = 0x2D3E68u;
    // 0x2d3e68: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2d3e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2d3e6c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2d3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d3e70: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x2d3e70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x2d3e74: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2d3e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3e78: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3E78u;
    {
        const bool branch_taken_0x2d3e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e78) {
            ctx->pc = 0x2D3E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3E78u;
            // 0x2d3e7c: 0xae850080  sw          $a1, 0x80($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3E98u;
            goto label_2d3e98;
        }
    }
    ctx->pc = 0x2D3E80u;
    // 0x2d3e80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3E80u;
    {
        const bool branch_taken_0x2d3e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E80u;
        // 0x2d3e84: 0x8e820080  lw          $v0, 0x80($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e80) {
            ctx->pc = 0x2D3E9Cu;
            goto label_2d3e9c;
        }
    }
    ctx->pc = 0x2D3E88u;
label_2d3e88:
    // 0x2d3e88: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x2d3e88u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2d3e8c:
    // 0x2d3e8c: 0x1010  mfhi        $v0
    ctx->pc = 0x2d3e8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2d3e90: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2d3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d3e94: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x2d3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_2d3e98:
    // 0x2d3e98: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x2d3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_2d3e9c:
    // 0x2d3e9c: 0x2842005b  slti        $v0, $v0, 0x5B
    ctx->pc = 0x2d3e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x2d3ea0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3EA0u;
    {
        const bool branch_taken_0x2d3ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3EA0u;
        // 0x2d3ea4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ea0) {
            ctx->pc = 0x2D3EB4u;
            goto label_2d3eb4;
        }
    }
    ctx->pc = 0x2D3EA8u;
    // 0x2d3ea8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2d3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2d3eac: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x2d3eacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x2d3eb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d3eb4:
    // 0x2d3eb4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2d3eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3eb8: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x2d3eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x2d3ebc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2d3ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d3ec0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2d3ec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d3ec4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2d3ec4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d3ec8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2d3ec8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d3ecc: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2d3eccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2d3ed0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2d3ed0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d3ed4: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2d3ed4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2d3ed8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2d3ed8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d3edc: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2d3edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2d3ee0: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2d3ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d3ee4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2d3ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d3ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3EE8u;
        // 0x2d3eec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3EF0u;
}
