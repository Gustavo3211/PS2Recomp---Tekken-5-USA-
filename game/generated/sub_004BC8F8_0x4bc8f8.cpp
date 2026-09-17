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

// Function: sub_004BC8F8
// Address: 0x4bc8f8 - 0x4bd3e8
void sub_004BC8F8_0x4bc8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BC8F8_0x4bc8f8");
#endif

    switch (ctx->pc) {
        case 0x4bcae0u: goto label_4bcae0;
        case 0x4bcaf0u: goto label_4bcaf0;
        case 0x4bcb04u: goto label_4bcb04;
        case 0x4bcb68u: goto label_4bcb68;
        case 0x4bd094u: goto label_4bd094;
        case 0x4bd124u: goto label_4bd124;
        case 0x4bd1c4u: goto label_4bd1c4;
        case 0x4bd228u: goto label_4bd228;
        case 0x4bd230u: goto label_4bd230;
        case 0x4bd244u: goto label_4bd244;
        case 0x4bd2f0u: goto label_4bd2f0;
        case 0x4bd300u: goto label_4bd300;
        case 0x4bd314u: goto label_4bd314;
        case 0x4bd398u: goto label_4bd398;
        case 0x4bd3a0u: goto label_4bd3a0;
        case 0x4bd3a8u: goto label_4bd3a8;
        default: break;
    }

    ctx->pc = 0x4bc8f8u;

    // 0x4bc8f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bc8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4bc8fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bc8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bc900: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4bc900u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4bc904: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4bc904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4bc908: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4bc908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4bc90c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4bc90cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc910: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4bc910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4bc914: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4bc914u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4bc918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bc918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bc91c: 0x26c3015e  addiu       $v1, $s6, 0x15E
    ctx->pc = 0x4bc91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 350));
    // 0x4bc920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bc920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bc924: 0x27d50e18  addiu       $s5, $fp, 0xE18
    ctx->pc = 0x4bc924u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 3608));
    // 0x4bc928: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bc928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bc92c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bc92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bc930: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4bc930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4bc934: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4bc934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4bc938: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bc938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bc93c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4bc93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4bc940: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bc940u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc944: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bc944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bc948: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bc948u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bc94c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4bc94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bc950: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bc950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bc954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc958: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc95c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bc960: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc964: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4bc964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bc968: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4bc968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4bc96c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bc96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bc970: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x4bc970u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc974: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4bc974u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4bc978: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4bc978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bc97c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BC97Cu;
    {
        const bool branch_taken_0x4bc97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC97Cu;
        // 0x4bc980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc97c) {
            ctx->pc = 0x4BC9B0u;
            goto label_4bc9b0;
        }
    }
    ctx->pc = 0x4BC984u;
    // 0x4bc984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bc984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bc988: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bc988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc98c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bc98cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bc990: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bc990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bc994: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bc994u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bc998: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bc998u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bc99c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bc99cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bc9a0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bc9a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bc9a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bc9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bc9a8: 0x812f47e  j           func_4BD1F8
    ctx->pc = 0x4BC9A8u;
    ctx->pc = 0x4BC9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC9A8u;
    // 0x4bc9ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD1F8u;
    goto label_4bd1f8;
    ctx->pc = 0x4BC9B0u;
label_4bc9b0:
    // 0x4bc9b0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bc9b4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bc9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bc9b8: 0x8c460e30  lw          $a2, 0xE30($v0)
    ctx->pc = 0x4bc9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0E30u));
    // 0x4bc9bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bc9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bc9c0: 0x24510e24  addiu       $s1, $v0, 0xE24
    ctx->pc = 0x4bc9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3620));
    // 0x4bc9c4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4bc9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4bc9c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4bc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bc9cc: 0x24900e28  addiu       $s0, $a0, 0xE28
    ctx->pc = 0x4bc9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3624));
    // 0x4bc9d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4bc9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E24u));
    // 0x4bc9d4: 0x24f20e2c  addiu       $s2, $a3, 0xE2C
    ctx->pc = 0x4bc9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 3628));
    // 0x4bc9d8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bc9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bc9dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4bc9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bc9e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bc9e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bc9e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc9e8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bc9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bc9ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4bc9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bc9f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc9f4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bc9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bc9f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bc9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bc9fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bca00: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bca00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bca04: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4bca04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4bca08: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4bca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4bca0c: 0x24f3d680  addiu       $s3, $a3, -0x2980
    ctx->pc = 0x4bca0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4bca10: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x4bca10u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bca14: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4bca14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4bca18: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bca18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bca1c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4bca1cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4bca20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bca20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bca24: 0x25b70e1c  addiu       $s7, $t5, 0xE1C
    ctx->pc = 0x4bca24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 13), 3612));
    // 0x4bca28: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bca2c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bca2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bca30: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4bca30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4bca34: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bca34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bca38: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4bca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4bca3c: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4bca3cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bca40: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bca40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bca44: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bca44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bca48: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bca4c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bca4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bca50: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4bca50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4bca54: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bca54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bca58: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4bca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4bca5c: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x4bca5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bca60: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bca64: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bca64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bca68: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4bca68u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4bca6c: 0x1344825  or          $t1, $t1, $s4
    ctx->pc = 0x4bca6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 20));
    // 0x4bca70: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4bca70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4bca74: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bca74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bca78: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x4bca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4bca7c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bca7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bca80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bca80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bca84: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4bca84u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bca88: 0xf43825  or          $a3, $a3, $s4
    ctx->pc = 0x4bca88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x4bca8c: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4bca8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4bca90: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4bca90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4bca94: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4bca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4bca98: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bca9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bca9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bcaa0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4bcaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bcaa4: 0xd43025  or          $a2, $a2, $s4
    ctx->pc = 0x4bcaa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    // 0x4bcaa8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4bcaa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4bcaac: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4bcaacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4bcab0: 0x86c20120  lh          $v0, 0x120($s6)
    ctx->pc = 0x4bcab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 288)));
    // 0x4bcab4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bcab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bcab8: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4bcab8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4bcabc: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4bcabcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4bcac0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4bcac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4bcac4: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4bcac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bcac8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4bcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4bcacc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bcaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bcad0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4bcad0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4bcad4: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4bcad4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4bcad8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BCAD8u;
    SET_GPR_U32(ctx, 31, 0x4BCAE0u);
    ctx->pc = 0x4BCADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BCAD8u;
    // 0x4bcadc: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BCAD8u, 0x4BCAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BCAE0u;
label_4bcae0:
    // 0x4bcae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bcae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcae4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4bcae4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4bcae8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BCAE8u;
    SET_GPR_U32(ctx, 31, 0x4BCAF0u);
    ctx->pc = 0x4BCAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BCAE8u;
    // 0x4bcaec: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BCAE8u, 0x4BCAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BCAF0u;
label_4bcaf0:
    // 0x4bcaf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bcaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcaf4: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4bcaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bcaf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4bcaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcafc: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4BCAFCu;
    SET_GPR_U32(ctx, 31, 0x4BCB04u);
    ctx->pc = 0x4BCB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BCAFCu;
    // 0x4bcb00: 0x8ee70000  lw          $a3, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4BCAFCu, 0x4BCB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BCB04u;
label_4bcb04:
    // 0x4bcb04: 0x266a2494  addiu       $t2, $s3, 0x2494
    ctx->pc = 0x4bcb04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 9364));
    // 0x4bcb08: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x4bcb08u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bcb0c: 0x26692498  addiu       $t1, $s3, 0x2498
    ctx->pc = 0x4bcb0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 9368));
    // 0x4bcb10: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x4bcb10u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bcb14: 0x2668249c  addiu       $t0, $s3, 0x249C
    ctx->pc = 0x4bcb14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 9372));
    // 0x4bcb18: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4bcb18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bcb1c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4bcb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4bcb20: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4bcb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bcb24: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4bcb24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4bcb28: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4bcb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bcb2c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4bcb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4bcb30: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4bcb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bcb34: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bcb34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bcb38: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bcb38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bcb3c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bcb3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bcb40: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x4bcb40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x4bcb44: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4bcb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4bcb48: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bcb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bcb4c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4bcb4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4bcb50: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4bcb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4bcb54: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4bcb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4bcb58: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4bcb58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4bcb5c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4bcb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4bcb60: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4BCB60u;
    SET_GPR_U32(ctx, 31, 0x4BCB68u);
    ctx->pc = 0x4BCB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BCB60u;
    // 0x4bcb64: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4BCB60u, 0x4BCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BCB68u;
label_4bcb68:
    // 0x4bcb68: 0x26cd011c  addiu       $t5, $s6, 0x11C
    ctx->pc = 0x4bcb68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 22), 284));
    // 0x4bcb6c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4bcb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bcb70: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4bcb70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bcb74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bcb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bcb78: 0x966424a2  lhu         $a0, 0x24A2($s3)
    ctx->pc = 0x4bcb78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 9378)));
    // 0x4bcb7c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bcb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bcb80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bcb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bcb84: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bcb84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bcb88: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4bcb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bcb8c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4bcb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4bcb90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bcb94: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BCB94u;
    {
        const bool branch_taken_0x4bcb94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCB94u;
        // 0x4bcb98: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcb94) {
            ctx->pc = 0x4BCBA8u;
            goto label_4bcba8;
        }
    }
    ctx->pc = 0x4BCB9Cu;
    // 0x4bcb9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BCB9Cu;
    {
        const bool branch_taken_0x4bcb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCB9Cu;
        // 0x4bcba0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcb9c) {
            ctx->pc = 0x4BCBACu;
            goto label_4bcbac;
        }
    }
    ctx->pc = 0x4BCBA4u;
    // 0x4bcba4: 0x0  nop
    ctx->pc = 0x4bcba4u;
    // NOP
label_4bcba8:
    // 0x4bcba8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bcba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_4bcbac:
    // 0x4bcbac: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4bcbacu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x4bcbb0: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4bcbb0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4bcbb4: 0x25cc0e20  addiu       $t4, $t6, 0xE20
    ctx->pc = 0x4bcbb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 3616));
    // 0x4bcbb8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4bcbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4bcbbc: 0x86c20138  lh          $v0, 0x138($s6)
    ctx->pc = 0x4bcbbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 312)));
    // 0x4bcbc0: 0x27c80e18  addiu       $t0, $fp, 0xE18
    ctx->pc = 0x4bcbc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 3608));
    // 0x4bcbc4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4bcbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E20u));
    // 0x4bcbc8: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x4bcbc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x4bcbcc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bcbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bcbd0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bcbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bcbd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bcbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bcbd8: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4bcbd8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bcbdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bcbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bcbe0: 0x252ad680  addiu       $t2, $t1, -0x2980
    ctx->pc = 0x4bcbe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956672));
    // 0x4bcbe4: 0x94890e1c  lhu         $t1, 0xE1C($a0)
    ctx->pc = 0x4bcbe4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3612)));
    // 0x4bcbe8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4bcbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4bcbec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bcbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bcbf0: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x4bcbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4bcbf4: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4bcbf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bcbf8: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4bcbf8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4bcbfc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4bcbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bcc00: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x4bcc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x4bcc04: 0x954b24a2  lhu         $t3, 0x24A2($t2)
    ctx->pc = 0x4bcc04u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 9378)));
    // 0x4bcc08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bcc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bcc0c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bcc0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bcc10: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bcc10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bcc14: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bcc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bcc18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bcc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bcc1c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4bcc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4bcc20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bcc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bcc24: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4bcc24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bcc28: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4bcc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bcc2c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bcc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bcc30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bcc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bcc34: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4bcc34u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4bcc38: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4bcc38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bcc3c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4bcc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bcc40: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4bcc40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4bcc44: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4bcc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4bcc48: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4bcc48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4bcc4c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4bcc4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bcc50: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x4bcc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4bcc54: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bcc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bcc58: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BCC58u;
    {
        const bool branch_taken_0x4bcc58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4BCC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCC58u;
        // 0x4bcc5c: 0x346500ff  ori         $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcc58) {
            ctx->pc = 0x4BCC68u;
            goto label_4bcc68;
        }
    }
    ctx->pc = 0x4BCC60u;
    // 0x4bcc60: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4bcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4bcc64: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4bcc64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4bcc68:
    // 0x4bcc68: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4bcc68u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4bcc6c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4bcc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4bcc70: 0x24ec0e1c  addiu       $t4, $a3, 0xE1C
    ctx->pc = 0x4bcc70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 3612));
    // 0x4bcc74: 0x240aff00  addiu       $t2, $zero, -0x100
    ctx->pc = 0x4bcc74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4bcc78: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4bcc78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E1Cu));
    // 0x4bcc7c: 0x8dc40e20  lw          $a0, 0xE20($t6)
    ctx->pc = 0x4bcc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 3616)));
    // 0x4bcc80: 0x4a1824  and         $v1, $v0, $t2
    ctx->pc = 0x4bcc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4bcc84: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4bcc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4bcc88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4bcc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4bcc8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4bcc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4bcc90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4bcc90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4bcc94: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x4BCC94u;
    {
        const bool branch_taken_0x4bcc94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCC94u;
        // 0x4bcc98: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcc94) {
            ctx->pc = 0x4BCCC4u;
            goto label_4bccc4;
        }
    }
    ctx->pc = 0x4BCC9Cu;
    // 0x4bcc9c: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x4bcc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x4bcca0: 0x27c50e18  addiu       $a1, $fp, 0xE18
    ctx->pc = 0x4bcca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3608));
    // 0x4bcca4: 0x2522d680  addiu       $v0, $t1, -0x2980
    ctx->pc = 0x4bcca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956672));
    // 0x4bcca8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4bcca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4bccac: 0x844324a2  lh          $v1, 0x24A2($v0)
    ctx->pc = 0x4bccacu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72FB22u));
    // 0x4bccb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bccb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4bccb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4bccb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bccb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bccbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bccc0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4bccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4bccc4:
    // 0x4bccc4: 0x97c20e18  lhu         $v0, 0xE18($fp)
    ctx->pc = 0x4bccc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3608)));
    // 0x4bccc8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bcccc: 0x24660e2c  addiu       $a2, $v1, 0xE2C
    ctx->pc = 0x4bccccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3628));
    // 0x4bccd0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4bccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4bccd4: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4bccd4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bccd8: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4bccd8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4bccdc: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4bccdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4bcce0: 0x2488d680  addiu       $t0, $a0, -0x2980
    ctx->pc = 0x4bcce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4bcce4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4bcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E2Cu));
    // 0x4bcce8: 0x25270e24  addiu       $a3, $t1, 0xE24
    ctx->pc = 0x4bcce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 3620));
    // 0x4bccec: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x4bccecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bccf0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4bccf0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4bccf4: 0x850524a0  lh          $a1, 0x24A0($t0)
    ctx->pc = 0x4bccf4u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x72FB20u));
    // 0x4bccf8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4bccf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4bccfc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4bccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bcd00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4bcd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4bcd04: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4bcd04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4bcd08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bcd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bcd0c: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4bcd0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4bcd10: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bcd10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bcd14: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4bcd14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4bcd18: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x4bcd18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bcd1c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4bcd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4bcd20: 0x25ab0e28  addiu       $t3, $t5, 0xE28
    ctx->pc = 0x4bcd20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 3624));
    // 0x4bcd24: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4bcd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4bcd28: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4bcd28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bcd2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bcd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bcd30: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BCD30u;
    {
        const bool branch_taken_0x4bcd30 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4BCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCD30u;
        // 0x4bcd34: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd30) {
            ctx->pc = 0x4BCD48u;
            goto label_4bcd48;
        }
    }
    ctx->pc = 0x4BCD38u;
    // 0x4bcd38: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4bcd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bcd3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BCD3Cu;
    {
        const bool branch_taken_0x4bcd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCD3Cu;
        // 0x4bcd40: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd3c) {
            ctx->pc = 0x4BCD50u;
            goto label_4bcd50;
        }
    }
    ctx->pc = 0x4BCD44u;
    // 0x4bcd44: 0x0  nop
    ctx->pc = 0x4bcd44u;
    // NOP
label_4bcd48:
    // 0x4bcd48: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4bcd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bcd4c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4bcd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_4bcd50:
    // 0x4bcd50: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4bcd50u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4bcd54: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bcd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bcd58: 0x24450e24  addiu       $a1, $v0, 0xE24
    ctx->pc = 0x4bcd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3620));
    // 0x4bcd5c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bcd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bcd60: 0x94660e28  lhu         $a2, 0xE28($v1)
    ctx->pc = 0x4bcd60u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x7F0E28u));
    // 0x4bcd64: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4bcd64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4bcd68: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bcd68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0E24u));
    // 0x4bcd6c: 0x27c70e18  addiu       $a3, $fp, 0xE18
    ctx->pc = 0x4bcd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 3608));
    // 0x4bcd70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bcd70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E24u));
    // 0x4bcd74: 0x26cc0118  addiu       $t4, $s6, 0x118
    ctx->pc = 0x4bcd74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), 280));
    // 0x4bcd78: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4bcd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4bcd7c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4bcd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bcd80: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bcd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bcd84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bcd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bcd88: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bcd88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bcd8c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bcd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bcd90: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bcd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bcd94: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4bcd94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4bcd98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bcd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bcd9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bcd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bcda0: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4bcda0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bcda4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4bcda4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bcda8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bcda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bcdac: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bcdacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bcdb0: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4bcdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4bcdb4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4bcdb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bcdb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4bcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4bcdbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bcdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bcdc0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BCDC0u;
    {
        const bool branch_taken_0x4bcdc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BCDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCDC0u;
        // 0x4bcdc4: 0x25260e1c  addiu       $a2, $t1, 0xE1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcdc0) {
            ctx->pc = 0x4BCDD8u;
            goto label_4bcdd8;
        }
    }
    ctx->pc = 0x4BCDC8u;
    // 0x4bcdc8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4bcdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bcdcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BCDCCu;
    {
        const bool branch_taken_0x4bcdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCDCCu;
        // 0x4bcdd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcdcc) {
            ctx->pc = 0x4BCDE0u;
            goto label_4bcde0;
        }
    }
    ctx->pc = 0x4BCDD4u;
    // 0x4bcdd4: 0x0  nop
    ctx->pc = 0x4bcdd4u;
    // NOP
label_4bcdd8:
    // 0x4bcdd8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4bcdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bcddc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4bcddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_4bcde0:
    // 0x4bcde0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4bcde0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4bcde4: 0x25cb0e20  addiu       $t3, $t6, 0xE20
    ctx->pc = 0x4bcde4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 3616));
    // 0x4bcde8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4bcde8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4bcdec: 0x27c80e18  addiu       $t0, $fp, 0xE18
    ctx->pc = 0x4bcdecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 3608));
    // 0x4bcdf0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4bcdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bcdf4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4bcdf4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4bcdf8: 0x86c20136  lh          $v0, 0x136($s6)
    ctx->pc = 0x4bcdf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 310)));
    // 0x4bcdfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bcdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bce00: 0x95a90e1c  lhu         $t1, 0xE1C($t5)
    ctx->pc = 0x4bce00u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x7F0E1Cu));
    // 0x4bce04: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bce08: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4bce08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bce0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bce0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bce10: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4bce10u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4bce14: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4bce14u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4bce18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bce18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bce1c: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x4bce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4bce20: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4bce20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bce24: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4bce24u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4bce28: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4bce28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bce2c: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x4bce2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x4bce30: 0x95aa0e24  lhu         $t2, 0xE24($t5)
    ctx->pc = 0x4bce30u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 3620)));
    // 0x4bce34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bce34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bce38: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bce38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bce3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bce3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bce40: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bce44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bce44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bce48: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4bce48u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4bce4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bce4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bce50: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4bce50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bce54: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4bce54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bce58: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bce58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bce5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bce5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bce60: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4bce60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4bce64: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4bce64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bce68: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4bce68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bce6c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4bce6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4bce70: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4bce70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4bce74: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4bce74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4bce78: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4bce78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bce7c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4bce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4bce80: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bce80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bce84: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BCE84u;
    {
        const bool branch_taken_0x4bce84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4BCE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCE84u;
        // 0x4bce88: 0x346500ff  ori         $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bce84) {
            ctx->pc = 0x4BCE94u;
            goto label_4bce94;
        }
    }
    ctx->pc = 0x4BCE8Cu;
    // 0x4bce8c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4bce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4bce90: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4bce90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4bce94:
    // 0x4bce94: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4bce94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4bce98: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bce9c: 0x24450e1c  addiu       $a1, $v0, 0xE1C
    ctx->pc = 0x4bce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3612));
    // 0x4bcea0: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4bcea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4bcea4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E1Cu));
    // 0x4bcea8: 0x8dc40e20  lw          $a0, 0xE20($t6)
    ctx->pc = 0x4bcea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 3616)));
    // 0x4bceac: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4bceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bceb0: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4bceb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4bceb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4bceb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4bceb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4bceb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4bcebc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4bcebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4bcec0: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BCEC0u;
    {
        const bool branch_taken_0x4bcec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCEC0u;
        // 0x4bcec4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcec0) {
            ctx->pc = 0x4BCF08u;
            goto label_4bcf08;
        }
    }
    ctx->pc = 0x4BCEC8u;
    // 0x4bcec8: 0x97c20e18  lhu         $v0, 0xE18($fp)
    ctx->pc = 0x4bcec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3608)));
    // 0x4bcecc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4bceccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bced0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bced0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bced4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bced4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bced8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bced8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bcedc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bcedcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bcee0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bcee0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bcee4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bcee4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bcee8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bcee8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bceec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bceecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bcef0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bcef0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bcef4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bcef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bcef8: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4bcef8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bcefc: 0x812f47e  j           func_4BD1F8
    ctx->pc = 0x4BCEFCu;
    ctx->pc = 0x4BCF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BCEFCu;
    // 0x4bcf00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD1F8u;
    goto label_4bd1f8;
    ctx->pc = 0x4BCF04u;
    // 0x4bcf04: 0x0  nop
    ctx->pc = 0x4bcf04u;
    // NOP
label_4bcf08:
    // 0x4bcf08: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bcf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bcf0c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4bcf0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4bcf10: 0x94620e24  lhu         $v0, 0xE24($v1)
    ctx->pc = 0x4bcf10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0E24u));
    // 0x4bcf14: 0x24e40e2c  addiu       $a0, $a3, 0xE2C
    ctx->pc = 0x4bcf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3628));
    // 0x4bcf18: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4bcf18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4bcf1c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4bcf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4bcf20: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4bcf20u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bcf24: 0x95250e28  lhu         $a1, 0xE28($t1)
    ctx->pc = 0x4bcf24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0E28u));
    // 0x4bcf28: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bcf28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0E2Cu));
    // 0x4bcf2c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bcf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E2Cu));
    // 0x4bcf30: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4bcf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4bcf34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bcf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bcf38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bcf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bcf3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bcf3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bcf40: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4bcf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4bcf44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bcf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bcf48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bcf48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bcf4c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4bcf4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bcf50: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4BCF50u;
    {
        const bool branch_taken_0x4bcf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCF50u;
        // 0x4bcf54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcf50) {
            ctx->pc = 0x4BCF88u;
            goto label_4bcf88;
        }
    }
    ctx->pc = 0x4BCF58u;
    // 0x4bcf58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bcf58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bcf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bcf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bcf60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bcf60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bcf64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bcf64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bcf68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bcf68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bcf6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bcf6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bcf70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bcf70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bcf74: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bcf74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bcf78: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bcf78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bcf7c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bcf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bcf80: 0x812f47e  j           func_4BD1F8
    ctx->pc = 0x4BCF80u;
    ctx->pc = 0x4BCF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BCF80u;
    // 0x4bcf84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD1F8u;
    goto label_4bd1f8;
    ctx->pc = 0x4BCF88u;
label_4bcf88:
    // 0x4bcf88: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bcf88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bcf8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bcf8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bcf90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bcf90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bcf94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bcf94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bcf98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bcf98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bcf9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bcf9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bcfa0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bcfa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bcfa4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bcfa4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bcfa8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bcfa8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bcfac: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bcfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bcfb0: 0x812f3ee  j           func_4BCFB8
    ctx->pc = 0x4BCFB0u;
    ctx->pc = 0x4BCFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BCFB0u;
    // 0x4bcfb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BCFB8u;
    goto label_4bcfb8;
    ctx->pc = 0x4BCFB8u;
label_4bcfb8:
    // 0x4bcfb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bcfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4bcfbc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bcfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bcfc0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4bcfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4bcfc4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4bcfc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcfc8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4bcfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4bcfcc: 0x24760e18  addiu       $s6, $v1, 0xE18
    ctx->pc = 0x4bcfccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 3608));
    // 0x4bcfd0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4bcfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4bcfd4: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x4bcfd4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x4bcfd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bcfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bcfdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bcfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bcfe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bcfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bcfe4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bcfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bcfe8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bcfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bcfec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bcfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4bcff0: 0x86a2015e  lh          $v0, 0x15E($s5)
    ctx->pc = 0x4bcff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 350)));
    // 0x4bcff4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4bcff4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E18u));
    // 0x4bcff8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4bcff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4bcffc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bcffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd000: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd004: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4bd004u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4bd008: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd00c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4bd00cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bd010: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x4bd010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
    // 0x4bd014: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4bd014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4bd018: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd01c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4bd01cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4bd020: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4bd020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bd024: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BD024u;
    {
        const bool branch_taken_0x4bd024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD024u;
        // 0x4bd028: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd024) {
            ctx->pc = 0x4BD058u;
            goto label_4bd058;
        }
    }
    ctx->pc = 0x4BD02Cu;
    // 0x4bd02c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bd02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd030: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bd030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd034: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bd034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bd038: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bd038u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bd03c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bd03cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bd040: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bd040u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bd044: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bd044u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bd048: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bd048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bd04c: 0x812f47e  j           func_4BD1F8
    ctx->pc = 0x4BD04Cu;
    ctx->pc = 0x4BD050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD04Cu;
    // 0x4bd050: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD1F8u;
    goto label_4bd1f8;
    ctx->pc = 0x4BD054u;
    // 0x4bd054: 0x0  nop
    ctx->pc = 0x4bd054u;
    // NOP
label_4bd058:
    // 0x4bd058: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4bd058u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4bd05c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4bd05cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4bd060: 0x26100e24  addiu       $s0, $s0, 0xE24
    ctx->pc = 0x4bd060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3620));
    // 0x4bd064: 0x26310e28  addiu       $s1, $s1, 0xE28
    ctx->pc = 0x4bd064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3624));
    // 0x4bd068: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4bd068u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4bd06c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4bd06cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0E24u));
    // 0x4bd070: 0x26940e1c  addiu       $s4, $s4, 0xE1C
    ctx->pc = 0x4bd070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3612));
    // 0x4bd074: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4bd074u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E28u));
    // 0x4bd078: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4bd078u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4bd07c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4bd07cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd080: 0x26730e2c  addiu       $s3, $s3, 0xE2C
    ctx->pc = 0x4bd080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3628));
    // 0x4bd084: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4bd084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd088: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4bd088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd08c: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4BD08Cu;
    SET_GPR_U32(ctx, 31, 0x4BD094u);
    ctx->pc = 0x4BD090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD08Cu;
    // 0x4bd090: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4BD08Cu, 0x4BD094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD094u;
label_4bd094:
    // 0x4bd094: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4bd094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bd098: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4bd098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bd09c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bd09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd0a0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4bd0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bd0a4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4bd0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4bd0a8: 0x96c40000  lhu         $a0, 0x0($s6)
    ctx->pc = 0x4bd0a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bd0ac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bd0acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bd0b0: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4bd0b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bd0b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd0b8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bd0b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bd0bc: 0x2652d680  addiu       $s2, $s2, -0x2980
    ctx->pc = 0x4bd0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4bd0c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd0c4: 0xf73824  and         $a3, $a3, $s7
    ctx->pc = 0x4bd0c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 23));
    // 0x4bd0c8: 0xd73024  and         $a2, $a2, $s7
    ctx->pc = 0x4bd0c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 23));
    // 0x4bd0cc: 0xa644233a  sh          $a0, 0x233A($s2)
    ctx->pc = 0x4bd0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9018), (uint16_t)GPR_U32(ctx, 4));
    // 0x4bd0d0: 0xa645233c  sh          $a1, 0x233C($s2)
    ctx->pc = 0x4bd0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9020), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bd0d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4bd0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd0d8: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4bd0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4bd0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bd0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd0e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bd0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bd0e4: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4bd0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4bd0e8: 0xa640233e  sh          $zero, 0x233E($s2)
    ctx->pc = 0x4bd0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9022), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bd0ec: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4bd0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bd0f0: 0x86a2002a  lh          $v0, 0x2A($s5)
    ctx->pc = 0x4bd0f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 42)));
    // 0x4bd0f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bd0f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bd0f8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4bd0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bd0fc: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4bd0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4bd100: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4bd100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bd104: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd108: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4bd108u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x4bd10c: 0x86a2002c  lh          $v0, 0x2C($s5)
    ctx->pc = 0x4bd10cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x4bd110: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4bd110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4bd114: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd118: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4bd118u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4bd11c: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4BD11Cu;
    SET_GPR_U32(ctx, 31, 0x4BD124u);
    ctx->pc = 0x4BD120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD11Cu;
    // 0x4bd120: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4BD11Cu, 0x4BD124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD124u;
label_4bd124:
    // 0x4bd124: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4bd124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bd128: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x4bd128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x4bd12c: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x4bd12cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4bd130: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4bd130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bd134: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bd134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bd138: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4bd138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4bd13c: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4bd13cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bd140: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bd140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bd144: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4bd144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bd148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bd148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bd14c: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x4bd14cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bd150: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4bd150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4bd154: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4bd154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bd158: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4bd158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4bd15c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bd15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bd160: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4bd160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4bd164: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bd164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd168: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bd168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bd16c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x4bd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4bd170: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x4bd170u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bd174: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4bd174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4bd178: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bd178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bd17c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4bd17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bd180: 0xd73025  or          $a2, $a2, $s7
    ctx->pc = 0x4bd180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    // 0x4bd184: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4bd184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4bd188: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4bd188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4bd18c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x4bd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4bd190: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4bd190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bd194: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4bd194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4bd198: 0xa64a2330  sh          $t2, 0x2330($s2)
    ctx->pc = 0x4bd198u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9008), (uint16_t)GPR_U32(ctx, 10));
    // 0x4bd19c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bd19cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bd1a0: 0xa6492334  sh          $t1, 0x2334($s2)
    ctx->pc = 0x4bd1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9012), (uint16_t)GPR_U32(ctx, 9));
    // 0x4bd1a4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4bd1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4bd1a8: 0xa6432336  sh          $v1, 0x2336($s2)
    ctx->pc = 0x4bd1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bd1ac: 0x1174025  or          $t0, $t0, $s7
    ctx->pc = 0x4bd1acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 23));
    // 0x4bd1b0: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4bd1b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4bd1b4: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4bd1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4bd1b8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4bd1b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bd1bc: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4BD1BCu;
    SET_GPR_U32(ctx, 31, 0x4BD1C4u);
    ctx->pc = 0x4BD1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD1BCu;
    // 0x4bd1c0: 0xa6422338  sh          $v0, 0x2338($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4BD1BCu, 0x4BD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD1C4u;
label_4bd1c4:
    // 0x4bd1c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bd1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd1c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bd1c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd1cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bd1ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd1d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bd1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd1d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bd1d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bd1d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bd1d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bd1dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bd1dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bd1e0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bd1e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bd1e4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bd1e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bd1e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bd1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bd1ec: 0x812f47e  j           func_4BD1F8
    ctx->pc = 0x4BD1ECu;
    ctx->pc = 0x4BD1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD1ECu;
    // 0x4bd1f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD1F8u;
    goto label_4bd1f8;
    ctx->pc = 0x4BD1F4u;
    // 0x4bd1f4: 0x0  nop
    ctx->pc = 0x4bd1f4u;
    // NOP
label_4bd1f8:
    // 0x4bd1f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bd1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4bd1fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bd1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bd200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bd200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bd204: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bd204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bd208: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bd208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bd20c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bd20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bd210: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4bd210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4bd214: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4bd214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4bd218: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4bd218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4bd21c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bd21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4bd220: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4BD220u;
    SET_GPR_U32(ctx, 31, 0x4BD228u);
    ctx->pc = 0x4BD224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD220u;
    // 0x4bd224: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4BD220u, 0x4BD228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD228u;
label_4bd228:
    // 0x4bd228: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4BD228u;
    SET_GPR_U32(ctx, 31, 0x4BD230u);
    ctx->pc = 0x4BD22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD228u;
    // 0x4bd22c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4BD228u, 0x4BD230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD230u;
label_4bd230:
    // 0x4bd230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bd230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd234: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x4BD234u;
    {
        const bool branch_taken_0x4bd234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD234u;
        // 0x4bd238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd234) {
            ctx->pc = 0x4BD3B8u;
            goto label_4bd3b8;
        }
    }
    ctx->pc = 0x4BD23Cu;
    // 0x4bd23c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4BD23Cu;
    SET_GPR_U32(ctx, 31, 0x4BD244u);
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4BD23Cu, 0x4BD244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD244u;
label_4bd244:
    // 0x4bd244: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bd244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bd248: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4bd248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4bd24c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bd24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bd250: 0x24750e24  addiu       $s5, $v1, 0xE24
    ctx->pc = 0x4bd250u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3620));
    // 0x4bd254: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bd254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bd258: 0x24b70e2c  addiu       $s7, $a1, 0xE2C
    ctx->pc = 0x4bd258u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 3628));
    // 0x4bd25c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4bd25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd260: 0x24960e28  addiu       $s6, $a0, 0xE28
    ctx->pc = 0x4bd260u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 3624));
    // 0x4bd264: 0x34a5000a  ori         $a1, $a1, 0xA
    ctx->pc = 0x4bd264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10);
    // 0x4bd268: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x4BD268u;
    {
        const bool branch_taken_0x4bd268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD268u;
        // 0x4bd26c: 0x24740e18  addiu       $s4, $v1, 0xE18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd268) {
            ctx->pc = 0x4BD3B8u;
            goto label_4bd3b8;
        }
    }
    ctx->pc = 0x4BD270u;
    // 0x4bd270: 0x24020484  addiu       $v0, $zero, 0x484
    ctx->pc = 0x4bd270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
    // 0x4bd274: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4bd274u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bd278: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x4bd278u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bd27c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x4bd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4bd280: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x4bd280u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bd284: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4bd284u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd288: 0xa6600022  sh          $zero, 0x22($s3)
    ctx->pc = 0x4bd288u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bd28c: 0x2672012c  addiu       $s2, $s3, 0x12C
    ctx->pc = 0x4bd28cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
    // 0x4bd290: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4bd290u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4bd294: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4bd294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bd298: 0x26100e1c  addiu       $s0, $s0, 0xE1C
    ctx->pc = 0x4bd298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3612));
    // 0x4bd29c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4bd29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bd2a0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x4bd2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4bd2a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bd2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bd2a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd2ac: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bd2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4bd2b0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bd2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bd2b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4bd2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4bd2b8: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4bd2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4bd2bc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4bd2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4bd2c0: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x4bd2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x4bd2c4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4bd2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4bd2c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4bd2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bd2cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4bd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bd2d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd2d4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bd2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4bd2d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bd2d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bd2dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bd2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bd2e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd2e4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4bd2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4bd2e8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BD2E8u;
    SET_GPR_U32(ctx, 31, 0x4BD2F0u);
    ctx->pc = 0x4BD2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD2E8u;
    // 0x4bd2ec: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BD2E8u, 0x4BD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD2F0u;
label_4bd2f0:
    // 0x4bd2f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4bd2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd2f4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4bd2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4bd2f8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BD2F8u;
    SET_GPR_U32(ctx, 31, 0x4BD300u);
    ctx->pc = 0x4BD2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD2F8u;
    // 0x4bd2fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BD2F8u, 0x4BD300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD300u;
label_4bd300:
    // 0x4bd300: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bd300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd304: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4bd304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bd308: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4bd308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd30c: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4BD30Cu;
    SET_GPR_U32(ctx, 31, 0x4BD314u);
    ctx->pc = 0x4BD310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD30Cu;
    // 0x4bd310: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4BD30Cu, 0x4BD314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD314u;
label_4bd314:
    // 0x4bd314: 0x26640124  addiu       $a0, $s3, 0x124
    ctx->pc = 0x4bd314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
    // 0x4bd318: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4bd318u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bd31c: 0x26660128  addiu       $a2, $s3, 0x128
    ctx->pc = 0x4bd31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
    // 0x4bd320: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bd320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bd324: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4bd324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4bd328: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bd328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bd32c: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4bd32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4bd330: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bd330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bd334: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4bd334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4bd338: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd33c: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x4bd33cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4bd340: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bd340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bd344: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bd344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd348: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x4bd348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4bd34c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4bd34cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bd350: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4bd350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bd354: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bd354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bd358: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bd358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bd35c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bd35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bd360: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4bd360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4bd364: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd368: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bd368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bd36c: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x4bd36cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4bd370: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4bd370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bd374: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bd374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bd378: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bd378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bd37c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4bd37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4bd380: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd384: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4bd384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4bd388: 0xa4a723c4  sh          $a3, 0x23C4($a1)
    ctx->pc = 0x4bd388u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9156), (uint16_t)GPR_U32(ctx, 7));
    // 0x4bd38c: 0xa4a9232c  sh          $t1, 0x232C($a1)
    ctx->pc = 0x4bd38cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9004), (uint16_t)GPR_U32(ctx, 9));
    // 0x4bd390: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4BD390u;
    SET_GPR_U32(ctx, 31, 0x4BD398u);
    ctx->pc = 0x4BD394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD390u;
    // 0x4bd394: 0xa4a8232e  sh          $t0, 0x232E($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9006), (uint16_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4BD390u, 0x4BD398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD398u;
label_4bd398:
    // 0x4bd398: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4BD398u;
    SET_GPR_U32(ctx, 31, 0x4BD3A0u);
    ctx->pc = 0x4BD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD398u;
    // 0x4bd39c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4BD398u, 0x4BD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD3A0u;
label_4bd3a0:
    // 0x4bd3a0: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4BD3A0u;
    SET_GPR_U32(ctx, 31, 0x4BD3A8u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4BD3A0u, 0x4BD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD3A8u;
label_4bd3a8:
    // 0x4bd3a8: 0x266301bc  addiu       $v1, $s3, 0x1BC
    ctx->pc = 0x4bd3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 444));
    // 0x4bd3ac: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bd3acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bd3b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bd3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bd3b4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bd3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4bd3b8:
    // 0x4bd3b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bd3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd3bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bd3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd3c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bd3c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd3c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bd3c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bd3c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bd3c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bd3cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bd3ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bd3d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bd3d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bd3d4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bd3d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bd3d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bd3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bd3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD3DCu;
        // 0x4bd3e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BD3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BD3E4u;
    // 0x4bd3e4: 0x0  nop
    ctx->pc = 0x4bd3e4u;
    // NOP
    ctx->pc = 0x4bd3e8u;
}
