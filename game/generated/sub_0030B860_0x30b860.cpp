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

// Function: sub_0030B860
// Address: 0x30b860 - 0x30c0a8
void sub_0030B860_0x30b860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B860_0x30b860");
#endif

    switch (ctx->pc) {
        case 0x30b9a0u: goto label_30b9a0;
        case 0x30b9a8u: goto label_30b9a8;
        case 0x30bb80u: goto label_30bb80;
        case 0x30bc18u: goto label_30bc18;
        case 0x30be58u: goto label_30be58;
        case 0x30bef0u: goto label_30bef0;
        default: break;
    }

    ctx->pc = 0x30b860u;

    // 0x30b860: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x30b860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x30b864: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x30b864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x30b868: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x30b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x30b86c: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x30b86cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30b870: 0xc64f8  dsll        $t4, $t4, 19
    ctx->pc = 0x30b870u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 19);
    // 0x30b874: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x30b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x30b878: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x30b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x30b87c: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x30b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
    // 0x30b880: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x30b880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x30b884: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x30b884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
    // 0x30b888: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x30b888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
    // 0x30b88c: 0xffb701a8  sd          $s7, 0x1A8($sp)
    ctx->pc = 0x30b88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 23));
    // 0x30b890: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x30b890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
    // 0x30b894: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x30b894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x30b898: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x30b898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x30b89c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x30b89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8a0: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x30b8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x30b8a4: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x30b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x30b8a8: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x30b8a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x30b8ac: 0x8c8a0020  lw          $t2, 0x20($a0)
    ctx->pc = 0x30b8acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30b8b0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x30b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x30b8b4: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x30b8b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30b8b8: 0x8c890044  lw          $t1, 0x44($a0)
    ctx->pc = 0x30b8b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x30b8bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30b8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30b8c0: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x30b8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x30b8c4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x30b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30b8c8: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x30b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x30b8cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30b8d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30b8d4: 0xb303c  dsll32      $a2, $t3, 0
    ctx->pc = 0x30b8d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 0));
    // 0x30b8d8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x30b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30b8dc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x30b8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x30b8e0: 0x846b8  dsll        $t0, $t0, 26
    ctx->pc = 0x30b8e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 26);
    // 0x30b8e4: 0x94fb8  dsll        $t1, $t1, 30
    ctx->pc = 0x30b8e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 30);
    // 0x30b8e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x30b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x30b8ec: 0x72c38  dsll        $a1, $a3, 16
    ctx->pc = 0x30b8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 16);
    // 0x30b8f0: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x30b8f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x30b8f4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x30b8f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x30b8f8: 0x8c8a000c  lw          $t2, 0xC($a0)
    ctx->pc = 0x30b8f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30b8fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30b8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30b900: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x30b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x30b904: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x30b904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x30b908: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x30b908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
    // 0x30b90c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30b910: 0x8c840368  lw          $a0, 0x368($a0)
    ctx->pc = 0x30b910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x30b914: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x30b914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30b918: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x30b918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x30b91c: 0xffa90040  sd          $t1, 0x40($sp)
    ctx->pc = 0x30b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 9));
    // 0x30b920: 0x3409ff00  ori         $t1, $zero, 0xFF00
    ctx->pc = 0x30b920u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30b924: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x30b924u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x30b928: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x30b928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
    // 0x30b92c: 0x34049000  ori         $a0, $zero, 0x9000
    ctx->pc = 0x30b92cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x30b930: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x30b930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x30b934: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30b934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30b938: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30b938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30b93c: 0xffa20048  sd          $v0, 0x48($sp)
    ctx->pc = 0x30b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
    // 0x30b940: 0xa403c  dsll32      $t0, $t2, 0
    ctx->pc = 0x30b940u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30b944: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x30b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30b948: 0xec3825  or          $a3, $a3, $t4
    ctx->pc = 0x30b948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x30b94c: 0xb5940  sll         $t3, $t3, 5
    ctx->pc = 0x30b94cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x30b950: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x30b950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x30b954: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x30b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x30b958: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x30b958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x30b95c: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x30b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x30b960: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x30b960u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x30b964: 0xffa80068  sd          $t0, 0x68($sp)
    ctx->pc = 0x30b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 8));
    // 0x30b968: 0xafab0090  sw          $t3, 0x90($sp)
    ctx->pc = 0x30b968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 11));
    // 0x30b96c: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x30b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x30b970: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x30b970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x30b974: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x30b974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x30b978: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x30b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30b97c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x30b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b980: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x30b980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b984: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x30b984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30b988: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x30b988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x30b98c: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x30b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x30b990: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x30b990u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30b994: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x30b994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x30b998: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x30b998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
    // 0x30b99c: 0xafaa0080  sw          $t2, 0x80($sp)
    ctx->pc = 0x30b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 10));
label_30b9a0:
    // 0x30b9a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x30b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x30b9a4: 0x8fae0160  lw          $t6, 0x160($sp)
    ctx->pc = 0x30b9a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_30b9a8:
    // 0x30b9a8: 0x8faa0064  lw          $t2, 0x64($sp)
    ctx->pc = 0x30b9a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x30b9ac: 0x340ccf40  ori         $t4, $zero, 0xCF40
    ctx->pc = 0x30b9acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53056);
    // 0x30b9b0: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x30b9b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x30b9b4: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x30b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x30b9b8: 0x180782d  daddu       $t7, $t4, $zero
    ctx->pc = 0x30b9b8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9bc: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x30b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b9c0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x30b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30b9c4: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x30b9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30b9c8: 0x340ccf50  ori         $t4, $zero, 0xCF50
    ctx->pc = 0x30b9c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53072);
    // 0x30b9cc: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x30b9ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x30b9d0: 0x4a280b  movn        $a1, $v0, $t2
    ctx->pc = 0x30b9d0u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x30b9d4: 0x3c02108b  lui         $v0, 0x108B
    ctx->pc = 0x30b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4235 << 16));
    // 0x30b9d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30b9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30b9dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30b9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30b9e0: 0x34428008  ori         $v0, $v0, 0x8008
    ctx->pc = 0x30b9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x30b9e4: 0x8fa90070  lw          $t1, 0x70($sp)
    ctx->pc = 0x30b9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30b9e8: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x30b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x30b9ec: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x30b9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30b9f0: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x30b9f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x30b9f4: 0xfde20000  sd          $v0, 0x0($t7)
    ctx->pc = 0x30b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
    // 0x30b9f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30b9fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30b9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x30ba00: 0x2e0821  addu        $at, $at, $t6
    ctx->pc = 0x30ba00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 14)));
    // 0x30ba04: 0xfc24cf48  sd          $a0, -0x30B8($at)
    ctx->pc = 0x30ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294954824), GPR_U64(ctx, 4));
    // 0x30ba08: 0x128300b  movn        $a2, $t1, $t0
    ctx->pc = 0x30ba08u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
    // 0x30ba0c: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x30ba0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30ba10: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x30ba10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x30ba14: 0xdfa80020  ld          $t0, 0x20($sp)
    ctx->pc = 0x30ba14u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ba18: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30ba18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30ba1c: 0xfd890008  sd          $t1, 0x8($t4)
    ctx->pc = 0x30ba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 9));
    // 0x30ba20: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x30ba20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30ba24: 0x94bfc  dsll32      $t1, $t1, 15
    ctx->pc = 0x30ba24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 15));
    // 0x30ba28: 0xfd880000  sd          $t0, 0x0($t4)
    ctx->pc = 0x30ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 8));
    // 0x30ba2c: 0x340ccf60  ori         $t4, $zero, 0xCF60
    ctx->pc = 0x30ba2cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53088);
    // 0x30ba30: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x30ba30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x30ba34: 0x510bc  dsll32      $v0, $a1, 2
    ctx->pc = 0x30ba34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 2));
    // 0x30ba38: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x30ba38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x30ba3c: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x30ba3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30ba40: 0x63bb8  dsll        $a3, $a2, 14
    ctx->pc = 0x30ba40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 14);
    // 0x30ba44: 0xfd830008  sd          $v1, 0x8($t4)
    ctx->pc = 0x30ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x30ba48: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x30ba48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x30ba4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x30ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30ba50: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30ba50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30ba54: 0xdfa30030  ld          $v1, 0x30($sp)
    ctx->pc = 0x30ba54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ba58: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x30ba58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x30ba5c: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x30ba5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30ba60: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x30ba60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x30ba64: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x30ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x30ba68: 0x340ccf70  ori         $t4, $zero, 0xCF70
    ctx->pc = 0x30ba68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53104);
    // 0x30ba6c: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x30ba6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x30ba70: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x30ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30ba74: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x30ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x30ba78: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x30ba78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba7c: 0x340ccf80  ori         $t4, $zero, 0xCF80
    ctx->pc = 0x30ba7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53120);
    // 0x30ba80: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x30ba80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x30ba84: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x30ba84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x30ba88: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x30ba88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba8c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x30ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30ba90: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x30ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x30ba94: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x30ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x30ba98: 0x340ccf90  ori         $t4, $zero, 0xCF90
    ctx->pc = 0x30ba98u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53136);
    // 0x30ba9c: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x30ba9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x30baa0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30baa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30baa4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x30baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30baa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30baa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30baac: 0x34420064  ori         $v0, $v0, 0x64
    ctx->pc = 0x30baacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x30bab0: 0xdfaa0038  ld          $t2, 0x38($sp)
    ctx->pc = 0x30bab0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bab4: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x30bab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x30bab8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x30bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x30babc: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x30babcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x30bac0: 0xdfa30040  ld          $v1, 0x40($sp)
    ctx->pc = 0x30bac0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30bac4: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x30bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x30bac8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x30bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30bacc: 0xfd850008  sd          $a1, 0x8($t4)
    ctx->pc = 0x30baccu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 5));
    // 0x30bad0: 0x340ccfa0  ori         $t4, $zero, 0xCFA0
    ctx->pc = 0x30bad0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53152);
    // 0x30bad4: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x30bad4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x30bad8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30bad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30badc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x30badcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30bae0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x30bae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30bae4: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x30bae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x30bae8: 0xfd830008  sd          $v1, 0x8($t4)
    ctx->pc = 0x30bae8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x30baec: 0xfd800000  sd          $zero, 0x0($t4)
    ctx->pc = 0x30baecu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 0));
    // 0x30baf0: 0x340ccfb0  ori         $t4, $zero, 0xCFB0
    ctx->pc = 0x30baf0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53168);
    // 0x30baf4: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x30baf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x30baf8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x30baf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30bafc: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x30bafcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x30bb00: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x30bb00u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x30bb04: 0x340ccfc0  ori         $t4, $zero, 0xCFC0
    ctx->pc = 0x30bb04u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53184);
    // 0x30bb08: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x30bb08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x30bb0c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x30bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30bb10: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x30bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30bb14: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x30bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30bb18: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x30bb18u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x30bb1c: 0xfd830008  sd          $v1, 0x8($t4)
    ctx->pc = 0x30bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x30bb20: 0x340ccfe0  ori         $t4, $zero, 0xCFE0
    ctx->pc = 0x30bb20u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53216);
    // 0x30bb24: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x30bb24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x30bb28: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x30bb2c: 0x2e0821  addu        $at, $at, $t6
    ctx->pc = 0x30bb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 14)));
    // 0x30bb30: 0xfc24cfd8  sd          $a0, -0x3028($at)
    ctx->pc = 0x30bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294954968), GPR_U64(ctx, 4));
    // 0x30bb34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30bb38: 0xdfa60048  ld          $a2, 0x48($sp)
    ctx->pc = 0x30bb38u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30bb3c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30bb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x30bb40: 0x2e0821  addu        $at, $at, $t6
    ctx->pc = 0x30bb40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 14)));
    // 0x30bb44: 0xfc26cfd0  sd          $a2, -0x3030($at)
    ctx->pc = 0x30bb44u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294954960), GPR_U64(ctx, 6));
    // 0x30bb48: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x30bb48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30bb4c: 0x11000087  beqz        $t0, . + 4 + (0x87 << 2)
    ctx->pc = 0x30BB4Cu;
    {
        const bool branch_taken_0x30bb4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB4Cu;
        // 0x30bb50: 0xdfaa0068  ld          $t2, 0x68($sp) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb4c) {
            ctx->pc = 0x30BD6Cu;
            goto label_30bd6c;
        }
    }
    ctx->pc = 0x30BB54u;
    // 0x30bb54: 0x240971ff  addiu       $t1, $zero, 0x71FF
    ctx->pc = 0x30bb54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29183));
    // 0x30bb58: 0x240a7400  addiu       $t2, $zero, 0x7400
    ctx->pc = 0x30bb58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 29696));
    // 0x30bb5c: 0x240201f8  addiu       $v0, $zero, 0x1F8
    ctx->pc = 0x30bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
    // 0x30bb60: 0x24037210  addiu       $v1, $zero, 0x7210
    ctx->pc = 0x30bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29200));
    // 0x30bb64: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x30bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30bb68: 0xafa90100  sw          $t1, 0x100($sp)
    ctx->pc = 0x30bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 9));
    // 0x30bb6c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x30bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x30bb70: 0xafaa0120  sw          $t2, 0x120($sp)
    ctx->pc = 0x30bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 10));
    // 0x30bb74: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x30bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x30bb78: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x30bb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x30bb7c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x30bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_30bb80:
    // 0x30bb80: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x30bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30bb84: 0x10a00060  beqz        $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x30BB84u;
    {
        const bool branch_taken_0x30bb84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB84u;
        // 0x30bb88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb84) {
            ctx->pc = 0x30BD08u;
            goto label_30bd08;
        }
    }
    ctx->pc = 0x30BB8Cu;
    // 0x30bb8c: 0x8fa90150  lw          $t1, 0x150($sp)
    ctx->pc = 0x30bb8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30bb90: 0x241efff7  addiu       $fp, $zero, -0x9
    ctx->pc = 0x30bb90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x30bb94: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x30bb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30bb98: 0x24136bff  addiu       $s3, $zero, 0x6BFF
    ctx->pc = 0x30bb98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 27647));
    // 0x30bb9c: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x30bb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x30bba0: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x30bba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x30bba4: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x30bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30bba8: 0x2526fff8  addiu       $a2, $t1, -0x8
    ctx->pc = 0x30bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x30bbac: 0x11e2821  addu        $a1, $t0, $fp
    ctx->pc = 0x30bbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 30)));
    // 0x30bbb0: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x30bbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30bbb4: 0x8faa0140  lw          $t2, 0x140($sp)
    ctx->pc = 0x30bbb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30bbb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30bbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30bbbc: 0x8fa90110  lw          $t1, 0x110($sp)
    ctx->pc = 0x30bbbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x30bbc0: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x30bbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30bbc4: 0x15e3821  addu        $a3, $t2, $fp
    ctx->pc = 0x30bbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 30)));
    // 0x30bbc8: 0x8faa0100  lw          $t2, 0x100($sp)
    ctx->pc = 0x30bbc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x30bbcc: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x30bbccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x30bbd0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x30bbd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x30bbd4: 0x8443a  dsrl        $t0, $t0, 16
    ctx->pc = 0x30bbd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 16);
    // 0x30bbd8: 0xa483c  dsll32      $t1, $t2, 0
    ctx->pc = 0x30bbd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30bbdc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30bbdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30bbe0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x30bbe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30bbe4: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x30bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x30bbe8: 0x2a43a  dsrl        $s4, $v0, 16
    ctx->pc = 0x30bbe8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) >> 16);
    // 0x30bbec: 0x3943a  dsrl        $s2, $v1, 16
    ctx->pc = 0x30bbecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) >> 16);
    // 0x30bbf0: 0x4843a  dsrl        $s0, $a0, 16
    ctx->pc = 0x30bbf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) >> 16);
    // 0x30bbf4: 0x5c43a  dsrl        $t8, $a1, 16
    ctx->pc = 0x30bbf4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 5) >> 16);
    // 0x30bbf8: 0x9bc3a  dsrl        $s7, $t1, 16
    ctx->pc = 0x30bbf8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 9) >> 16);
    // 0x30bbfc: 0x6b43a  dsrl        $s6, $a2, 16
    ctx->pc = 0x30bbfcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) >> 16);
    // 0x30bc00: 0x7ac3a  dsrl        $s5, $a3, 16
    ctx->pc = 0x30bc00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) >> 16);
    // 0x30bc04: 0x24116ff7  addiu       $s1, $zero, 0x6FF7
    ctx->pc = 0x30bc04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28663));
    // 0x30bc08: 0x241903f8  addiu       $t9, $zero, 0x3F8
    ctx->pc = 0x30bc08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    // 0x30bc0c: 0x240d6c10  addiu       $t5, $zero, 0x6C10
    ctx->pc = 0x30bc0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 27664));
    // 0x30bc10: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x30bc10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30bc14: 0x0  nop
    ctx->pc = 0x30bc14u;
    // NOP
label_30bc18:
    // 0x30bc18: 0x25a2ffff  addiu       $v0, $t5, -0x1
    ctx->pc = 0x30bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30bc1c: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x30bc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30bc20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30bc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30bc24: 0x19403c  dsll32      $t0, $t9, 0
    ctx->pc = 0x30bc24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) << (32 + 0));
    // 0x30bc28: 0x11483c  dsll32      $t1, $s1, 0
    ctx->pc = 0x30bc28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) << (32 + 0));
    // 0x30bc2c: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x30bc2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x30bc30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30bc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30bc34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30bc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30bc38: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x30bc38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x30bc3c: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x30bc3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x30bc40: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x30bc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x30bc44: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x30bc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x30bc48: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x30bc48u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x30bc4c: 0x1381825  or          $v1, $t1, $t8
    ctx->pc = 0x30bc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 24));
    // 0x30bc50: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x30bc50u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x30bc54: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bc54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bc58: 0x1101025  or          $v0, $t0, $s0
    ctx->pc = 0x30bc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x30bc5c: 0x1164025  or          $t0, $t0, $s6
    ctx->pc = 0x30bc5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 22));
    // 0x30bc60: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x30bc60u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x30bc64: 0xb3280  sll         $a2, $t3, 10
    ctx->pc = 0x30bc64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 10));
    // 0x30bc68: 0xfd830008  sd          $v1, 0x8($t4)
    ctx->pc = 0x30bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x30bc6c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bc6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bc70: 0x13383c  dsll32      $a3, $s3, 0
    ctx->pc = 0x30bc70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 0));
    // 0x30bc74: 0x26730400  addiu       $s3, $s3, 0x400
    ctx->pc = 0x30bc74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x30bc78: 0xdfa30050  ld          $v1, 0x50($sp)
    ctx->pc = 0x30bc78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30bc7c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30bc7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30bc80: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x30bc80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x30bc84: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30bc84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30bc88: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x30bc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x30bc8c: 0xf71825  or          $v1, $a3, $s7
    ctx->pc = 0x30bc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 23));
    // 0x30bc90: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x30bc90u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x30bc94: 0x1354825  or          $t1, $t1, $s5
    ctx->pc = 0x30bc94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 21));
    // 0x30bc98: 0xfd830008  sd          $v1, 0x8($t4)
    ctx->pc = 0x30bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x30bc9c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bc9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bca0: 0xfd880000  sd          $t0, 0x0($t4)
    ctx->pc = 0x30bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 8));
    // 0x30bca4: 0xd43025  or          $a2, $a2, $s4
    ctx->pc = 0x30bca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    // 0x30bca8: 0xfd890008  sd          $t1, 0x8($t4)
    ctx->pc = 0x30bca8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 9));
    // 0x30bcac: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bcacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bcb0: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x30bcb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x30bcb4: 0xfd860000  sd          $a2, 0x0($t4)
    ctx->pc = 0x30bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 6));
    // 0x30bcb8: 0xfd870008  sd          $a3, 0x8($t4)
    ctx->pc = 0x30bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 7));
    // 0x30bcbc: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bcbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bcc0: 0x2544fff8  addiu       $a0, $t2, -0x8
    ctx->pc = 0x30bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x30bcc4: 0x254a0400  addiu       $t2, $t2, 0x400
    ctx->pc = 0x30bcc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1024));
    // 0x30bcc8: 0x1be2821  addu        $a1, $t5, $fp
    ctx->pc = 0x30bcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 30)));
    // 0x30bccc: 0x25ad0400  addiu       $t5, $t5, 0x400
    ctx->pc = 0x30bcccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1024));
    // 0x30bcd0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x30bcd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30bcd4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30bcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30bcd8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x30bcd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x30bcdc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30bcdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30bce0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30bce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30bce4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x30bce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x30bce8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x30bce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x30bcec: 0xb82825  or          $a1, $a1, $t8
    ctx->pc = 0x30bcecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 24));
    // 0x30bcf0: 0x166102b  sltu        $v0, $t3, $a2
    ctx->pc = 0x30bcf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x30bcf4: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x30bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x30bcf8: 0xfd850008  sd          $a1, 0x8($t4)
    ctx->pc = 0x30bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 5));
    // 0x30bcfc: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bcfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bd00: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x30BD00u;
    {
        const bool branch_taken_0x30bd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD00u;
        // 0x30bd04: 0x27390400  addiu       $t9, $t9, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd00) {
            ctx->pc = 0x30BC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30bc18;
        }
    }
    ctx->pc = 0x30BD08u;
label_30bd08:
    // 0x30bd08: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x30bd08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bd0c: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x30bd0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30bd10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x30bd10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x30bd14: 0x8fa90100  lw          $t1, 0x100($sp)
    ctx->pc = 0x30bd14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x30bd18: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x30bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x30bd1c: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x30bd1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x30bd20: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x30bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x30bd24: 0x25290200  addiu       $t1, $t1, 0x200
    ctx->pc = 0x30bd24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
    // 0x30bd28: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x30bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30bd2c: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x30bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x30bd30: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x30bd30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30bd34: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x30bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x30bd38: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x30bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x30bd3c: 0x24a50200  addiu       $a1, $a1, 0x200
    ctx->pc = 0x30bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x30bd40: 0x8fa80150  lw          $t0, 0x150($sp)
    ctx->pc = 0x30bd40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30bd44: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x30bd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x30bd48: 0xafa90100  sw          $t1, 0x100($sp)
    ctx->pc = 0x30bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 9));
    // 0x30bd4c: 0x25080200  addiu       $t0, $t0, 0x200
    ctx->pc = 0x30bd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
    // 0x30bd50: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x30bd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x30bd54: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x30bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x30bd58: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x30bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x30bd5c: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x30bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x30bd60: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x30BD60u;
    {
        const bool branch_taken_0x30bd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD60u;
        // 0x30bd64: 0xafa80150  sw          $t0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd60) {
            ctx->pc = 0x30BB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30bb80;
        }
    }
    ctx->pc = 0x30BD68u;
    // 0x30bd68: 0xdfaa0068  ld          $t2, 0x68($sp)
    ctx->pc = 0x30bd68u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_30bd6c:
    // 0x30bd6c: 0x3406ff00  ori         $a2, $zero, 0xFF00
    ctx->pc = 0x30bd6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30bd70: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x30bd70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x30bd74: 0x8fa90090  lw          $t1, 0x90($sp)
    ctx->pc = 0x30bd74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30bd78: 0x25ec0530  addiu       $t4, $t7, 0x530
    ctx->pc = 0x30bd78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1328));
    // 0x30bd7c: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x30bd7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30bd80: 0xa183e  dsrl32      $v1, $t2, 0
    ctx->pc = 0x30bd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x30bd84: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x30bd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x30bd88: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x30bd88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30bd8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30bd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30bd90: 0x3c0410ab  lui         $a0, 0x10AB
    ctx->pc = 0x30bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4267 << 16));
    // 0x30bd94: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x30bd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x30bd98: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30bd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30bd9c: 0x34848003  ori         $a0, $a0, 0x8003
    ctx->pc = 0x30bd9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32771);
    // 0x30bda0: 0xdfa80038  ld          $t0, 0x38($sp)
    ctx->pc = 0x30bda0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30bda4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x30bda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x30bda8: 0xfde40520  sd          $a0, 0x520($t7)
    ctx->pc = 0x30bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 1312), GPR_U64(ctx, 4));
    // 0x30bdac: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x30bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30bdb0: 0xfde90528  sd          $t1, 0x528($t7)
    ctx->pc = 0x30bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 1320), GPR_U64(ctx, 9));
    // 0x30bdb4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x30bdb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30bdb8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x30bdb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x30bdbc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30bdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30bdc0: 0xdfaa0040  ld          $t2, 0x40($sp)
    ctx->pc = 0x30bdc0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30bdc4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30bdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30bdc8: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x30bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x30bdcc: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x30bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30bdd0: 0xfd830008  sd          $v1, 0x8($t4)
    ctx->pc = 0x30bdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x30bdd4: 0x25ec0540  addiu       $t4, $t7, 0x540
    ctx->pc = 0x30bdd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1344));
    // 0x30bdd8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x30bdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x30bddc: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x30bddcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x30bde0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x30bde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x30bde4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x30bde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30bde8: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x30bde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x30bdec: 0xfd800000  sd          $zero, 0x0($t4)
    ctx->pc = 0x30bdecu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 0));
    // 0x30bdf0: 0x25ec0550  addiu       $t4, $t7, 0x550
    ctx->pc = 0x30bdf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1360));
    // 0x30bdf4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30bdf8: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x30bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30bdfc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30be00: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x30be00u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x30be04: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30be04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30be08: 0xfd830008  sd          $v1, 0x8($t4)
    ctx->pc = 0x30be08u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x30be0c: 0xfde40568  sd          $a0, 0x568($t7)
    ctx->pc = 0x30be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 1384), GPR_U64(ctx, 4));
    // 0x30be10: 0xdfa50048  ld          $a1, 0x48($sp)
    ctx->pc = 0x30be10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30be14: 0xfde50560  sd          $a1, 0x560($t7)
    ctx->pc = 0x30be14u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 1376), GPR_U64(ctx, 5));
    // 0x30be18: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x30be18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30be1c: 0x10c00088  beqz        $a2, . + 4 + (0x88 << 2)
    ctx->pc = 0x30BE1Cu;
    {
        const bool branch_taken_0x30be1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE1Cu;
        // 0x30be20: 0x25ec0570  addiu       $t4, $t7, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be1c) {
            ctx->pc = 0x30C040u;
            goto label_30c040;
        }
    }
    ctx->pc = 0x30BE24u;
    // 0x30be24: 0x24087400  addiu       $t0, $zero, 0x7400
    ctx->pc = 0x30be24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29696));
    // 0x30be28: 0x24090208  addiu       $t1, $zero, 0x208
    ctx->pc = 0x30be28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x30be2c: 0x240a73f0  addiu       $t2, $zero, 0x73F0
    ctx->pc = 0x30be2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 29680));
    // 0x30be30: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x30be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30be34: 0x240371ff  addiu       $v1, $zero, 0x71FF
    ctx->pc = 0x30be34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29183));
    // 0x30be38: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x30be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30be3c: 0xafa800a0  sw          $t0, 0xA0($sp)
    ctx->pc = 0x30be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 8));
    // 0x30be40: 0xafa900b0  sw          $t1, 0xB0($sp)
    ctx->pc = 0x30be40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 9));
    // 0x30be44: 0xafaa00c0  sw          $t2, 0xC0($sp)
    ctx->pc = 0x30be44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 10));
    // 0x30be48: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x30be48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x30be4c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x30be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x30be50: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x30be50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x30be54: 0x0  nop
    ctx->pc = 0x30be54u;
    // NOP
label_30be58:
    // 0x30be58: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x30be58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30be5c: 0x10a00060  beqz        $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x30BE5Cu;
    {
        const bool branch_taken_0x30be5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE5Cu;
        // 0x30be60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be5c) {
            ctx->pc = 0x30BFE0u;
            goto label_30bfe0;
        }
    }
    ctx->pc = 0x30BE64u;
    // 0x30be64: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x30be64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30be68: 0x24146ff7  addiu       $s4, $zero, 0x6FF7
    ctx->pc = 0x30be68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 28663));
    // 0x30be6c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x30be6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30be70: 0x24120408  addiu       $s2, $zero, 0x408
    ctx->pc = 0x30be70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x30be74: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x30be74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30be78: 0x2505fff7  addiu       $a1, $t0, -0x9
    ctx->pc = 0x30be78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967287));
    // 0x30be7c: 0x24c4fff8  addiu       $a0, $a2, -0x8
    ctx->pc = 0x30be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x30be80: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x30be80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30be84: 0x2527fff7  addiu       $a3, $t1, -0x9
    ctx->pc = 0x30be84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967287));
    // 0x30be88: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x30be88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30be8c: 0x8faa00f0  lw          $t2, 0xF0($sp)
    ctx->pc = 0x30be8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x30be90: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30be90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30be94: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x30be94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30be98: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x30be98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x30be9c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x30be9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30bea0: 0x8faa00b0  lw          $t2, 0xB0($sp)
    ctx->pc = 0x30bea0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30bea4: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x30bea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30bea8: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x30bea8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x30beac: 0x8443a  dsrl        $t0, $t0, 16
    ctx->pc = 0x30beacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 16);
    // 0x30beb0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30beb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30beb4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x30beb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30beb8: 0xa483c  dsll32      $t1, $t2, 0
    ctx->pc = 0x30beb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 0));
    // 0x30bebc: 0xffa80058  sd          $t0, 0x58($sp)
    ctx->pc = 0x30bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 8));
    // 0x30bec0: 0x2ac3a  dsrl        $s5, $v0, 16
    ctx->pc = 0x30bec0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) >> 16);
    // 0x30bec4: 0x39c3a  dsrl        $s3, $v1, 16
    ctx->pc = 0x30bec4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) >> 16);
    // 0x30bec8: 0x48c3a  dsrl        $s1, $a0, 16
    ctx->pc = 0x30bec8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) >> 16);
    // 0x30becc: 0x5843a  dsrl        $s0, $a1, 16
    ctx->pc = 0x30beccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) >> 16);
    // 0x30bed0: 0x6f43a  dsrl        $fp, $a2, 16
    ctx->pc = 0x30bed0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) >> 16);
    // 0x30bed4: 0x9bc3a  dsrl        $s7, $t1, 16
    ctx->pc = 0x30bed4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 9) >> 16);
    // 0x30bed8: 0x7b43a  dsrl        $s6, $a3, 16
    ctx->pc = 0x30bed8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) >> 16);
    // 0x30bedc: 0x240f6ff0  addiu       $t7, $zero, 0x6FF0
    ctx->pc = 0x30bedcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 28656));
    // 0x30bee0: 0x240d0400  addiu       $t5, $zero, 0x400
    ctx->pc = 0x30bee0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x30bee4: 0x24196bff  addiu       $t9, $zero, 0x6BFF
    ctx->pc = 0x30bee4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 27647));
    // 0x30bee8: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x30bee8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30beec: 0x0  nop
    ctx->pc = 0x30beecu;
    // NOP
label_30bef0:
    // 0x30bef0: 0x18383c  dsll32      $a3, $t8, 0
    ctx->pc = 0x30bef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) << (32 + 0));
    // 0x30bef4: 0x27180400  addiu       $t8, $t8, 0x400
    ctx->pc = 0x30bef4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1024));
    // 0x30bef8: 0x19403c  dsll32      $t0, $t9, 0
    ctx->pc = 0x30bef8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) << (32 + 0));
    // 0x30befc: 0x27390400  addiu       $t9, $t9, 0x400
    ctx->pc = 0x30befcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1024));
    // 0x30bf00: 0x25a3fff8  addiu       $v1, $t5, -0x8
    ctx->pc = 0x30bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967288));
    // 0x30bf04: 0x25e5fff7  addiu       $a1, $t7, -0x9
    ctx->pc = 0x30bf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967287));
    // 0x30bf08: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30bf08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30bf0c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x30bf0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x30bf10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30bf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30bf14: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x30bf14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x30bf18: 0xf51025  or          $v0, $a3, $s5
    ctx->pc = 0x30bf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x30bf1c: 0x1132025  or          $a0, $t0, $s3
    ctx->pc = 0x30bf1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x30bf20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30bf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30bf24: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x30bf24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x30bf28: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x30bf28u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x30bf2c: 0xd203c  dsll32      $a0, $t5, 0
    ctx->pc = 0x30bf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) << (32 + 0));
    // 0x30bf30: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x30bf30u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x30bf34: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bf34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bf38: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x30bf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x30bf3c: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x30bf3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x30bf40: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x30bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x30bf44: 0x12483c  dsll32      $t1, $s2, 0
    ctx->pc = 0x30bf44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 0));
    // 0x30bf48: 0xfd850008  sd          $a1, 0x8($t4)
    ctx->pc = 0x30bf48u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 5));
    // 0x30bf4c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bf4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bf50: 0x14503c  dsll32      $t2, $s4, 0
    ctx->pc = 0x30bf50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 20) << (32 + 0));
    // 0x30bf54: 0x26940400  addiu       $s4, $s4, 0x400
    ctx->pc = 0x30bf54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x30bf58: 0xdfa20058  ld          $v0, 0x58($sp)
    ctx->pc = 0x30bf58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30bf5c: 0x25e6ffff  addiu       $a2, $t7, -0x1
    ctx->pc = 0x30bf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x30bf60: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x30bf60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x30bf64: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x30bf64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x30bf68: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x30bf68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x30bf6c: 0x1371025  or          $v0, $t1, $s7
    ctx->pc = 0x30bf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 23));
    // 0x30bf70: 0x11e4025  or          $t0, $t0, $fp
    ctx->pc = 0x30bf70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 30));
    // 0x30bf74: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30bf74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30bf78: 0xfd870000  sd          $a3, 0x0($t4)
    ctx->pc = 0x30bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 7));
    // 0x30bf7c: 0x1561825  or          $v1, $t2, $s6
    ctx->pc = 0x30bf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 22));
    // 0x30bf80: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x30bf80u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x30bf84: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bf84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bf88: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30bf88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30bf8c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x30bf8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x30bf90: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x30bf90u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x30bf94: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x30bf94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x30bf98: 0xfd830008  sd          $v1, 0x8($t4)
    ctx->pc = 0x30bf98u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x30bf9c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bf9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bfa0: 0xd33025  or          $a2, $a2, $s3
    ctx->pc = 0x30bfa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    // 0x30bfa4: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x30bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x30bfa8: 0xfd860008  sd          $a2, 0x8($t4)
    ctx->pc = 0x30bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 6));
    // 0x30bfac: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x30bfacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30bfb0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30bfb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30bfb4: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x30bfb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x30bfb8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x30bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30bfbc: 0x1505025  or          $t2, $t2, $s0
    ctx->pc = 0x30bfbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 16));
    // 0x30bfc0: 0xfd890000  sd          $t1, 0x0($t4)
    ctx->pc = 0x30bfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 9));
    // 0x30bfc4: 0x25ef0400  addiu       $t7, $t7, 0x400
    ctx->pc = 0x30bfc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1024));
    // 0x30bfc8: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x30bfc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30bfcc: 0xfd8a0008  sd          $t2, 0x8($t4)
    ctx->pc = 0x30bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 10));
    // 0x30bfd0: 0x25ad0400  addiu       $t5, $t5, 0x400
    ctx->pc = 0x30bfd0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1024));
    // 0x30bfd4: 0x26520400  addiu       $s2, $s2, 0x400
    ctx->pc = 0x30bfd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x30bfd8: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x30BFD8u;
    {
        const bool branch_taken_0x30bfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFD8u;
        // 0x30bfdc: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfd8) {
            ctx->pc = 0x30BEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30bef0;
        }
    }
    ctx->pc = 0x30BFE0u;
label_30bfe0:
    // 0x30bfe0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x30bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bfe4: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x30bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30bfe8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30bfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30bfec: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x30bfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30bff0: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x30bff0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30bff4: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x30bff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x30bff8: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x30bff8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30bffc: 0x24a50200  addiu       $a1, $a1, 0x200
    ctx->pc = 0x30bffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x30c000: 0x8faa00d0  lw          $t2, 0xD0($sp)
    ctx->pc = 0x30c000u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30c004: 0x25080200  addiu       $t0, $t0, 0x200
    ctx->pc = 0x30c004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
    // 0x30c008: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x30c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30c00c: 0x25290200  addiu       $t1, $t1, 0x200
    ctx->pc = 0x30c00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
    // 0x30c010: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x30c010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x30c014: 0x254a0200  addiu       $t2, $t2, 0x200
    ctx->pc = 0x30c014u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 512));
    // 0x30c018: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x30c018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x30c01c: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x30c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x30c020: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x30c020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x30c024: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x30c024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x30c028: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x30c028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x30c02c: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x30c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x30c030: 0xafaa00d0  sw          $t2, 0xD0($sp)
    ctx->pc = 0x30c030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 10));
    // 0x30c034: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x30c034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x30c038: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x30C038u;
    {
        const bool branch_taken_0x30c038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C038u;
        // 0x30c03c: 0xafa400f0  sw          $a0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c038) {
            ctx->pc = 0x30BE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30be58;
        }
    }
    ctx->pc = 0x30C040u;
label_30c040:
    // 0x30c040: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x30c040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30c044: 0x25ce09f0  addiu       $t6, $t6, 0x9F0
    ctx->pc = 0x30c044u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2544));
    // 0x30c048: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30c048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30c04c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x30c04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30c050: 0x1440fe55  bnez        $v0, . + 4 + (-0x1AB << 2)
    ctx->pc = 0x30C050u;
    {
        const bool branch_taken_0x30c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C050u;
        // 0x30c054: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c050) {
            ctx->pc = 0x30B9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b9a8;
        }
    }
    ctx->pc = 0x30C058u;
    // 0x30c058: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x30c058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c05c: 0x8fa80160  lw          $t0, 0x160($sp)
    ctx->pc = 0x30c05cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x30c060: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30c060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30c064: 0x25084f80  addiu       $t0, $t0, 0x4F80
    ctx->pc = 0x30c064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20352));
    // 0x30c068: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x30c068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30c06c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x30c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x30c070: 0x1440fe4b  bnez        $v0, . + 4 + (-0x1B5 << 2)
    ctx->pc = 0x30C070u;
    {
        const bool branch_taken_0x30c070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C070u;
        // 0x30c074: 0xafa80160  sw          $t0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c070) {
            ctx->pc = 0x30B9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b9a0;
        }
    }
    ctx->pc = 0x30C078u;
    // 0x30c078: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x30c078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x30c07c: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x30c07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x30c080: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x30c080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30c084: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x30c084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x30c088: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x30c088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x30c08c: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x30c08cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x30c090: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x30c090u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x30c094: 0xdfb701a8  ld          $s7, 0x1A8($sp)
    ctx->pc = 0x30c094u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x30c098: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x30c098u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x30c09c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C09Cu;
        // 0x30c0a0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C0A4u;
    // 0x30c0a4: 0x0  nop
    ctx->pc = 0x30c0a4u;
    // NOP
    ctx->pc = 0x30c0a8u;
}
