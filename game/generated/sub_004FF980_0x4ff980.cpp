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

// Function: sub_004FF980
// Address: 0x4ff980 - 0x500000
void sub_004FF980_0x4ff980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FF980_0x4ff980");
#endif

    switch (ctx->pc) {
        case 0x4ffb2cu: goto label_4ffb2c;
        case 0x4ffb54u: goto label_4ffb54;
        case 0x4ffbb4u: goto label_4ffbb4;
        case 0x4ffbb8u: goto label_4ffbb8;
        case 0x4ffbecu: goto label_4ffbec;
        case 0x4ffbf0u: goto label_4ffbf0;
        case 0x4ffc24u: goto label_4ffc24;
        case 0x4ffc28u: goto label_4ffc28;
        case 0x4ffc5cu: goto label_4ffc5c;
        case 0x4ffc60u: goto label_4ffc60;
        case 0x4ffdecu: goto label_4ffdec;
        case 0x4ffdf0u: goto label_4ffdf0;
        default: break;
    }

    ctx->pc = 0x4ff980u;

    // 0x4ff980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ff980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ff984: 0x24880006  addiu       $t0, $a0, 0x6
    ctx->pc = 0x4ff984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x4ff988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ff988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ff98c: 0x24900002  addiu       $s0, $a0, 0x2
    ctx->pc = 0x4ff98cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4ff990: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ff990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ff994: 0x24910010  addiu       $s1, $a0, 0x10
    ctx->pc = 0x4ff994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4ff998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ff998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ff99c: 0x2492000a  addiu       $s2, $a0, 0xA
    ctx->pc = 0x4ff99cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x4ff9a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ff9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ff9a4: 0x24930004  addiu       $s3, $a0, 0x4
    ctx->pc = 0x4ff9a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4ff9a8: 0x248f0008  addiu       $t7, $a0, 0x8
    ctx->pc = 0x4ff9a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4ff9ac: 0x248d000c  addiu       $t5, $a0, 0xC
    ctx->pc = 0x4ff9acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4ff9b0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ff9b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ff9b4: 0x248e000e  addiu       $t6, $a0, 0xE
    ctx->pc = 0x4ff9b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x4ff9b8: 0x248a0014  addiu       $t2, $a0, 0x14
    ctx->pc = 0x4ff9b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4ff9bc: 0x248b0018  addiu       $t3, $a0, 0x18
    ctx->pc = 0x4ff9bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4ff9c0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4ff9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ff9c4: 0x248c001c  addiu       $t4, $a0, 0x1C
    ctx->pc = 0x4ff9c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x4ff9c8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ff9c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ff9cc: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x4ff9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ff9d0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4ff9d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff9d4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4ff9d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ff9d8: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x4ff9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff9dc: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4ff9dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ff9e0: 0xa4a60002  sh          $a2, 0x2($a1)
    ctx->pc = 0x4ff9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ff9e4: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x4ff9e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ff9e8: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x4ff9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff9ec: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x4ff9ecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ff9f0: 0xa4a6000e  sh          $a2, 0xE($a1)
    ctx->pc = 0x4ff9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ff9f4: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4ff9f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ff9f8: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x4ff9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff9fc: 0x95c60000  lhu         $a2, 0x0($t6)
    ctx->pc = 0x4ff9fcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ffa00: 0xa4a6000a  sh          $a2, 0xA($a1)
    ctx->pc = 0x4ffa00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ffa04: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4ffa04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ffa08: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x4ffa08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ffa0c: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x4ffa0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ffa10: 0x85070000  lh          $a3, 0x0($t0)
    ctx->pc = 0x4ffa10u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ffa14: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4ffa14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ffa18: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x4ffa18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ffa1c: 0xe93818  mult        $a3, $a3, $t1
    ctx->pc = 0x4ffa1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4ffa20: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4ffa20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ffa24: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x4ffa24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ffa28: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x4ffa28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ffa2c: 0x70862018  mult1       $a0, $a0, $a2
    ctx->pc = 0x4ffa2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ffa30: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4ffa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4ffa34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ffa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ffa38: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4ffa38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4ffa3c: 0x24660fff  addiu       $a2, $v1, 0xFFF
    ctx->pc = 0x4ffa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4ffa40: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x4ffa40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ffa44: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x4ffa44u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x4ffa48: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ffa48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ffa4c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x4ffa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x4ffa50: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x4ffa50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ffa54: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4ffa54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ffa58: 0x85e60000  lh          $a2, 0x0($t7)
    ctx->pc = 0x4ffa58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ffa5c: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x4ffa5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ffa60: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x4ffa60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ffa64: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x4ffa64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ffa68: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4ffa68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ffa6c: 0xc93018  mult        $a2, $a2, $t1
    ctx->pc = 0x4ffa6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ffa70: 0x70671818  mult1       $v1, $v1, $a3
    ctx->pc = 0x4ffa70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ffa74: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4ffa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4ffa78: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ffa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ffa7c: 0x42023  negu        $a0, $a0
    ctx->pc = 0x4ffa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4ffa80: 0x24860fff  addiu       $a2, $a0, 0xFFF
    ctx->pc = 0x4ffa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x4ffa84: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x4ffa84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ffa88: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x4ffa88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x4ffa8c: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4ffa8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4ffa90: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x4ffa90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x4ffa94: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4ffa94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ffa98: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4ffa98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ffa9c: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x4ffa9cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ffaa0: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4ffaa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ffaa4: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x4ffaa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ffaa8: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4ffaa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ffaac: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x4ffaacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ffab0: 0xc83018  mult        $a2, $a2, $t0
    ctx->pc = 0x4ffab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ffab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ffab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ffab8: 0x70872018  mult1       $a0, $a0, $a3
    ctx->pc = 0x4ffab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ffabc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ffabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ffac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ffac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ffac4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4ffac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4ffac8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ffac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ffacc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ffaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ffad0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4ffad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4ffad4: 0x24660fff  addiu       $a2, $v1, 0xFFF
    ctx->pc = 0x4ffad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4ffad8: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x4ffad8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ffadc: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x4ffadcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x4ffae0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ffae0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ffae4: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x4ffae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x4ffae8: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFAE8u;
        // 0x4ffaec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFAF0u;
    // 0x4ffaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ffaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ffaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ffaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ffaf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ffaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ffafc: 0x813fec2  j           func_4FFB08
    ctx->pc = 0x4FFAFCu;
    ctx->pc = 0x4FFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FFAFCu;
    // 0x4ffb00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FFB08u;
    goto label_4ffb08;
    ctx->pc = 0x4FFB04u;
    // 0x4ffb04: 0x0  nop
    ctx->pc = 0x4ffb04u;
    // NOP
label_4ffb08:
    // 0x4ffb08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ffb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ffb0c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4ffb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4ffb10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4ffb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ffb14: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4ffb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4ffb18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ffb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ffb1c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4ffb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4ffb20: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4ffb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4ffb24: 0xc13f920  jal         func_4FE480
    ctx->pc = 0x4FFB24u;
    SET_GPR_U32(ctx, 31, 0x4FFB2Cu);
    ctx->pc = 0x4FFB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FFB24u;
    // 0x4ffb28: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE480u, 0x4FFB24u, 0x4FFB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FFB2Cu;
label_4ffb2c:
    // 0x4ffb2c: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x4ffb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4ffb30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ffb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ffb34: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4ffb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4ffb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ffb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ffb3c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4ffb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4ffb40: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4ffb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4ffb44: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4ffb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4ffb48: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4ffb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4ffb4c: 0xc13faee  jal         func_4FEBB8
    ctx->pc = 0x4FFB4Cu;
    SET_GPR_U32(ctx, 31, 0x4FFB54u);
    ctx->pc = 0x4FFB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FFB4Cu;
    // 0x4ffb50: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FEBB8u, 0x4FFB4Cu, 0x4FFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FFB54u;
label_4ffb54:
    // 0x4ffb54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4ffb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ffb58: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ffb58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ffb5c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x4ffb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4ffb60: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x4ffb60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4ffb64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ffb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ffb68: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x4ffb68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ffb6c: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x4ffb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
    // 0x4ffb70: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4ffb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ffb74: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x4ffb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4ffb78: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4ffb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ffb7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4ffb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ffb80: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x4ffb80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x4ffb84: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x4ffb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x4ffb88: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4ffb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ffb8c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4ffb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4ffb90: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x4ffb90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x4ffb94: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4ffb94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ffb98: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFB98u;
        // 0x4ffb9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFBA0u;
    // 0x4ffba0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4ffba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4ffba4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ffba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ffba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ffba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ffbac: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x4FFBACu;
    SET_GPR_U32(ctx, 31, 0x4FFBB4u);
    ctx->pc = 0x4FFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FFBACu;
    // 0x4ffbb0: 0x2484c5d8  addiu       $a0, $a0, -0x3A28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x4FFBACu, 0x4FFBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FFBB4u;
label_4ffbb4:
    // 0x4ffbb4: 0x0  nop
    ctx->pc = 0x4ffbb4u;
    // NOP
label_4ffbb8:
    // 0x4ffbb8: 0x0  nop
    ctx->pc = 0x4ffbb8u;
    // NOP
    // 0x4ffbbc: 0x0  nop
    ctx->pc = 0x4ffbbcu;
    // NOP
    // 0x4ffbc0: 0x0  nop
    ctx->pc = 0x4ffbc0u;
    // NOP
    // 0x4ffbc4: 0x0  nop
    ctx->pc = 0x4ffbc4u;
    // NOP
    // 0x4ffbc8: 0x0  nop
    ctx->pc = 0x4ffbc8u;
    // NOP
    // 0x4ffbcc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FFBCCu;
    {
        const bool branch_taken_0x4ffbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffbcc) {
            ctx->pc = 0x4FFBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ffbb8;
        }
    }
    ctx->pc = 0x4FFBD4u;
    // 0x4ffbd4: 0x0  nop
    ctx->pc = 0x4ffbd4u;
    // NOP
    // 0x4ffbd8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4ffbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4ffbdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ffbdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ffbe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ffbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ffbe4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x4FFBE4u;
    SET_GPR_U32(ctx, 31, 0x4FFBECu);
    ctx->pc = 0x4FFBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FFBE4u;
    // 0x4ffbe8: 0x2484c5f0  addiu       $a0, $a0, -0x3A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x4FFBE4u, 0x4FFBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FFBECu;
label_4ffbec:
    // 0x4ffbec: 0x0  nop
    ctx->pc = 0x4ffbecu;
    // NOP
label_4ffbf0:
    // 0x4ffbf0: 0x0  nop
    ctx->pc = 0x4ffbf0u;
    // NOP
    // 0x4ffbf4: 0x0  nop
    ctx->pc = 0x4ffbf4u;
    // NOP
    // 0x4ffbf8: 0x0  nop
    ctx->pc = 0x4ffbf8u;
    // NOP
    // 0x4ffbfc: 0x0  nop
    ctx->pc = 0x4ffbfcu;
    // NOP
    // 0x4ffc00: 0x0  nop
    ctx->pc = 0x4ffc00u;
    // NOP
    // 0x4ffc04: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FFC04u;
    {
        const bool branch_taken_0x4ffc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffc04) {
            ctx->pc = 0x4FFBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ffbf0;
        }
    }
    ctx->pc = 0x4FFC0Cu;
    // 0x4ffc0c: 0x0  nop
    ctx->pc = 0x4ffc0cu;
    // NOP
    // 0x4ffc10: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4ffc10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4ffc14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ffc14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ffc18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ffc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ffc1c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x4FFC1Cu;
    SET_GPR_U32(ctx, 31, 0x4FFC24u);
    ctx->pc = 0x4FFC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FFC1Cu;
    // 0x4ffc20: 0x2484c608  addiu       $a0, $a0, -0x39F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x4FFC1Cu, 0x4FFC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FFC24u;
label_4ffc24:
    // 0x4ffc24: 0x0  nop
    ctx->pc = 0x4ffc24u;
    // NOP
label_4ffc28:
    // 0x4ffc28: 0x0  nop
    ctx->pc = 0x4ffc28u;
    // NOP
    // 0x4ffc2c: 0x0  nop
    ctx->pc = 0x4ffc2cu;
    // NOP
    // 0x4ffc30: 0x0  nop
    ctx->pc = 0x4ffc30u;
    // NOP
    // 0x4ffc34: 0x0  nop
    ctx->pc = 0x4ffc34u;
    // NOP
    // 0x4ffc38: 0x0  nop
    ctx->pc = 0x4ffc38u;
    // NOP
    // 0x4ffc3c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FFC3Cu;
    {
        const bool branch_taken_0x4ffc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffc3c) {
            ctx->pc = 0x4FFC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ffc28;
        }
    }
    ctx->pc = 0x4FFC44u;
    // 0x4ffc44: 0x0  nop
    ctx->pc = 0x4ffc44u;
    // NOP
    // 0x4ffc48: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4ffc48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4ffc4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ffc4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ffc50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ffc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ffc54: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x4FFC54u;
    SET_GPR_U32(ctx, 31, 0x4FFC5Cu);
    ctx->pc = 0x4FFC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FFC54u;
    // 0x4ffc58: 0x2484c620  addiu       $a0, $a0, -0x39E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x4FFC54u, 0x4FFC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FFC5Cu;
label_4ffc5c:
    // 0x4ffc5c: 0x0  nop
    ctx->pc = 0x4ffc5cu;
    // NOP
label_4ffc60:
    // 0x4ffc60: 0x0  nop
    ctx->pc = 0x4ffc60u;
    // NOP
    // 0x4ffc64: 0x0  nop
    ctx->pc = 0x4ffc64u;
    // NOP
    // 0x4ffc68: 0x0  nop
    ctx->pc = 0x4ffc68u;
    // NOP
    // 0x4ffc6c: 0x0  nop
    ctx->pc = 0x4ffc6cu;
    // NOP
    // 0x4ffc70: 0x0  nop
    ctx->pc = 0x4ffc70u;
    // NOP
    // 0x4ffc74: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FFC74u;
    {
        const bool branch_taken_0x4ffc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffc74) {
            ctx->pc = 0x4FFC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ffc60;
        }
    }
    ctx->pc = 0x4FFC7Cu;
    // 0x4ffc7c: 0x0  nop
    ctx->pc = 0x4ffc7cu;
    // NOP
    // 0x4ffc80: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ffc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ffc84: 0x8c43cfa0  lw          $v1, -0x3060($v0)
    ctx->pc = 0x4ffc84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CFA0u));
    // 0x4ffc88: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4ffc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ffc8c: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4ffc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ffc90: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x4ffc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4ffc94: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x4ffc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ffc98: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x4ffc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4ffc9c: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x4ffc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ffca0: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x4ffca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4ffca4: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x4ffca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4ffca8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x4ffca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffcac: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x4ffcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffcb0: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x4ffcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffcb4: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x4ffcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffcb8: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x4ffcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffcbc: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x4ffcbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffcc0: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x4ffcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFCC4u;
        // 0x4ffcc8: 0xb4670018  sdr         $a3, 0x18($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFCCCu;
    // 0x4ffccc: 0x0  nop
    ctx->pc = 0x4ffcccu;
    // NOP
    // 0x4ffcd0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ffcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ffcd4: 0x8c43cfa4  lw          $v1, -0x305C($v0)
    ctx->pc = 0x4ffcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CFA4u));
    // 0x4ffcd8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4ffcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ffcdc: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4ffcdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ffce0: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x4ffce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4ffce4: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x4ffce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ffce8: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x4ffce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4ffcec: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x4ffcecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ffcf0: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x4ffcf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4ffcf4: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x4ffcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4ffcf8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x4ffcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffcfc: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x4ffcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd00: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x4ffd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd04: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x4ffd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd08: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x4ffd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd0c: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x4ffd0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd10: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x4ffd10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd14: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFD14u;
        // 0x4ffd18: 0xb4670018  sdr         $a3, 0x18($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFD1Cu;
    // 0x4ffd1c: 0x0  nop
    ctx->pc = 0x4ffd1cu;
    // NOP
    // 0x4ffd20: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ffd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ffd24: 0x8c43cfa8  lw          $v1, -0x3058($v0)
    ctx->pc = 0x4ffd24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CFA8u));
    // 0x4ffd28: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4ffd28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ffd2c: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4ffd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ffd30: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x4ffd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4ffd34: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x4ffd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ffd38: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x4ffd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4ffd3c: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x4ffd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ffd40: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x4ffd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4ffd44: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x4ffd44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4ffd48: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x4ffd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd4c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x4ffd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd50: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x4ffd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd54: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x4ffd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd58: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x4ffd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd5c: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x4ffd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd60: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x4ffd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd64: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFD64u;
        // 0x4ffd68: 0xb4670018  sdr         $a3, 0x18($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFD6Cu;
    // 0x4ffd6c: 0x0  nop
    ctx->pc = 0x4ffd6cu;
    // NOP
    // 0x4ffd70: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ffd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ffd74: 0x8c43cfac  lw          $v1, -0x3054($v0)
    ctx->pc = 0x4ffd74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CFACu));
    // 0x4ffd78: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4ffd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ffd7c: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4ffd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ffd80: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x4ffd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4ffd84: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x4ffd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ffd88: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x4ffd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4ffd8c: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x4ffd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ffd90: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x4ffd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4ffd94: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x4ffd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4ffd98: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x4ffd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffd9c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x4ffd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffda0: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x4ffda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffda4: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x4ffda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffda8: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x4ffda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffdac: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x4ffdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffdb0: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x4ffdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFDB4u;
        // 0x4ffdb8: 0xb4670018  sdr         $a3, 0x18($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFDBCu;
    // 0x4ffdbc: 0x0  nop
    ctx->pc = 0x4ffdbcu;
    // NOP
    // 0x4ffdc0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x4ffdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x4ffdc4: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x4ffdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x4ffdc8: 0x8c83cfa0  lw          $v1, -0x3060($a0)
    ctx->pc = 0x4ffdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CFA0u));
    // 0x4ffdcc: 0x2442a5b8  addiu       $v0, $v0, -0x5A48
    ctx->pc = 0x4ffdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944184));
    // 0x4ffdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ffdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ffdd4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4ffdd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ffdd8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4FFDD8u;
    {
        const bool branch_taken_0x4ffdd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFDD8u;
        // 0x4ffddc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffdd8) {
            ctx->pc = 0x4FFE10u;
            goto label_4ffe10;
        }
    }
    ctx->pc = 0x4FFDE0u;
    // 0x4ffde0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4ffde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4ffde4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x4FFDE4u;
    SET_GPR_U32(ctx, 31, 0x4FFDECu);
    ctx->pc = 0x4FFDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FFDE4u;
    // 0x4ffde8: 0x2484c638  addiu       $a0, $a0, -0x39C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x4FFDE4u, 0x4FFDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FFDECu;
label_4ffdec:
    // 0x4ffdec: 0x0  nop
    ctx->pc = 0x4ffdecu;
    // NOP
label_4ffdf0:
    // 0x4ffdf0: 0x0  nop
    ctx->pc = 0x4ffdf0u;
    // NOP
    // 0x4ffdf4: 0x0  nop
    ctx->pc = 0x4ffdf4u;
    // NOP
    // 0x4ffdf8: 0x0  nop
    ctx->pc = 0x4ffdf8u;
    // NOP
    // 0x4ffdfc: 0x0  nop
    ctx->pc = 0x4ffdfcu;
    // NOP
    // 0x4ffe00: 0x0  nop
    ctx->pc = 0x4ffe00u;
    // NOP
    // 0x4ffe04: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FFE04u;
    {
        const bool branch_taken_0x4ffe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffe04) {
            ctx->pc = 0x4FFDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ffdf0;
        }
    }
    ctx->pc = 0x4FFE0Cu;
    // 0x4ffe0c: 0x0  nop
    ctx->pc = 0x4ffe0cu;
    // NOP
label_4ffe10:
    // 0x4ffe10: 0x2484cfa0  addiu       $a0, $a0, -0x3060
    ctx->pc = 0x4ffe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954912));
    // 0x4ffe14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ffe14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ffe18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ffe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ffe1c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4ffe1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ffe20: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4ffe20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ffe24: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x4ffe24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4ffe28: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x4ffe28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ffe2c: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x4ffe2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4ffe30: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x4ffe30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ffe34: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x4ffe34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4ffe38: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x4ffe38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4ffe3c: 0xb0620027  sdl         $v0, 0x27($v1)
    ctx->pc = 0x4ffe3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffe40: 0xb4620020  sdr         $v0, 0x20($v1)
    ctx->pc = 0x4ffe40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffe44: 0xb065002f  sdl         $a1, 0x2F($v1)
    ctx->pc = 0x4ffe44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffe48: 0xb4650028  sdr         $a1, 0x28($v1)
    ctx->pc = 0x4ffe48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffe4c: 0xb0660037  sdl         $a2, 0x37($v1)
    ctx->pc = 0x4ffe4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffe50: 0xb4660030  sdr         $a2, 0x30($v1)
    ctx->pc = 0x4ffe50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffe54: 0xb067003f  sdl         $a3, 0x3F($v1)
    ctx->pc = 0x4ffe54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffe58: 0xb4670038  sdr         $a3, 0x38($v1)
    ctx->pc = 0x4ffe58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffe5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ffe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ffe60: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4ffe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4ffe64: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ffe64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ffe68: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFE68u;
        // 0x4ffe6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFE70u;
    // 0x4ffe70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ffe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ffe74: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ffe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ffe78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ffe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ffe7c: 0x2445cfa0  addiu       $a1, $v0, -0x3060
    ctx->pc = 0x4ffe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954912));
    // 0x4ffe80: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x4ffe80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x4ffe84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ffe84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x56CFA0u));
    // 0x4ffe88: 0x2463a358  addiu       $v1, $v1, -0x5CA8
    ctx->pc = 0x4ffe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943576));
    // 0x4ffe8c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4ffe8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ffe90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FFE90u;
    {
        const bool branch_taken_0x4ffe90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFE90u;
        // 0x4ffe94: 0x2444ffe0  addiu       $a0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffe90) {
            ctx->pc = 0x4FFEB0u;
            goto label_4ffeb0;
        }
    }
    ctx->pc = 0x4FFE98u;
    // 0x4ffe98: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4ffe98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4ffe9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ffe9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ffea0: 0x2484c660  addiu       $a0, $a0, -0x39A0
    ctx->pc = 0x4ffea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
    // 0x4ffea4: 0x804a1ce  j           func_128738
    ctx->pc = 0x4FFEA4u;
    ctx->pc = 0x4FFEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FFEA4u;
    // 0x4ffea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    sub_00128738_0x128738(rdram, ctx, runtime); return;
    ctx->pc = 0x4FFEACu;
    // 0x4ffeac: 0x0  nop
    ctx->pc = 0x4ffeacu;
    // NOP
label_4ffeb0:
    // 0x4ffeb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ffeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ffeb4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ffeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ffeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFEB8u;
        // 0x4ffebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFEC0u;
    // 0x4ffec0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ffec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ffec4: 0x8c43cfa0  lw          $v1, -0x3060($v0)
    ctx->pc = 0x4ffec4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CFA0u));
    // 0x4ffec8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4ffec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4ffecc: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4ffeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4ffed0: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x4ffed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4ffed4: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x4ffed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ffed8: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x4ffed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4ffedc: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x4ffedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ffee0: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x4ffee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4ffee4: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x4ffee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4ffee8: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x4ffee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffeec: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x4ffeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffef0: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x4ffef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffef4: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x4ffef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffef8: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x4ffef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ffefc: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x4ffefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff00: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x4fff00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff04: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFF04u;
        // 0x4fff08: 0xb4870018  sdr         $a3, 0x18($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFF0Cu;
    // 0x4fff0c: 0x0  nop
    ctx->pc = 0x4fff0cu;
    // NOP
    // 0x4fff10: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fff10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fff14: 0x8c43cfa4  lw          $v1, -0x305C($v0)
    ctx->pc = 0x4fff14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CFA4u));
    // 0x4fff18: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4fff18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4fff1c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4fff1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4fff20: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x4fff20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4fff24: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x4fff24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4fff28: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x4fff28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4fff2c: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x4fff2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4fff30: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x4fff30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4fff34: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x4fff34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4fff38: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x4fff38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff3c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x4fff3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff40: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x4fff40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff44: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x4fff44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff48: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x4fff48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff4c: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x4fff4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff50: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x4fff50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff54: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFF54u;
        // 0x4fff58: 0xb4870018  sdr         $a3, 0x18($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFF5Cu;
    // 0x4fff5c: 0x0  nop
    ctx->pc = 0x4fff5cu;
    // NOP
    // 0x4fff60: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fff60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fff64: 0x8c43cfa8  lw          $v1, -0x3058($v0)
    ctx->pc = 0x4fff64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CFA8u));
    // 0x4fff68: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4fff68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4fff6c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4fff6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4fff70: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x4fff70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4fff74: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x4fff74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4fff78: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x4fff78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4fff7c: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x4fff7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4fff80: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x4fff80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4fff84: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x4fff84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4fff88: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x4fff88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff8c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x4fff8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff90: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x4fff90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff94: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x4fff94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff98: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x4fff98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fff9c: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x4fff9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fffa0: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x4fffa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fffa4: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFFA4u;
        // 0x4fffa8: 0xb4870018  sdr         $a3, 0x18($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFFACu;
    // 0x4fffac: 0x0  nop
    ctx->pc = 0x4fffacu;
    // NOP
    // 0x4fffb0: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x4fffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x4fffb4: 0x2447a638  addiu       $a3, $v0, -0x59C8
    ctx->pc = 0x4fffb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944312));
    // 0x4fffb8: 0x88830003  lwl         $v1, 0x3($a0)
    ctx->pc = 0x4fffb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x4fffbc: 0x98830000  lwr         $v1, 0x0($a0)
    ctx->pc = 0x4fffbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x4fffc0: 0xa8e30003  swl         $v1, 0x3($a3)
    ctx->pc = 0x4fffc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4fffc4: 0x3e00008  jr          $ra
    ctx->pc = 0x4FFFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FFFC4u;
        // 0x4fffc8: 0xb8e30000  swr         $v1, 0x0($a3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FFFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FFFCCu;
    // 0x4fffcc: 0x0  nop
    ctx->pc = 0x4fffccu;
    // NOP
    // 0x4fffd0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4fffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4fffd4: 0x63300  sll         $a2, $a2, 12
    ctx->pc = 0x4fffd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 12));
    // 0x4fffd8: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x4fffd8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4fffdc: 0x42300  sll         $a0, $a0, 12
    ctx->pc = 0x4fffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x4fffe0: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x4fffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x4fffe4: 0x7082001a  div1        $zero, $a0, $v0
    ctx->pc = 0x4fffe4u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x4fffe8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x4fffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x4fffec: 0x2463a640  addiu       $v1, $v1, -0x59C0
    ctx->pc = 0x4fffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944320));
    // 0x4ffff0: 0x3012  mflo        $a2
    ctx->pc = 0x4ffff0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4ffff4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x4ffff4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4ffff8: 0x70002012  mflo1       $a0
    ctx->pc = 0x4ffff8u;
    SET_GPR_U64(ctx, 4, ctx->lo1);
    // 0x4ffffc: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4ffffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x500000u;
}
