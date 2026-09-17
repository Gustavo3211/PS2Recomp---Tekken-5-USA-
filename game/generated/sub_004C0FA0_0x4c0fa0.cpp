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

// Function: sub_004C0FA0
// Address: 0x4c0fa0 - 0x4c1eb8
void sub_004C0FA0_0x4c0fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C0FA0_0x4c0fa0");
#endif

    switch (ctx->pc) {
        case 0x4c0fa4u: goto label_4c0fa4;
        case 0x4c0fb8u: goto label_4c0fb8;
        case 0x4c1128u: goto label_4c1128;
        case 0x4c11a4u: goto label_4c11a4;
        case 0x4c11d0u: goto label_4c11d0;
        case 0x4c11e0u: goto label_4c11e0;
        case 0x4c11f4u: goto label_4c11f4;
        case 0x4c12f0u: goto label_4c12f0;
        case 0x4c1358u: goto label_4c1358;
        case 0x4c139cu: goto label_4c139c;
        case 0x4c1400u: goto label_4c1400;
        case 0x4c1408u: goto label_4c1408;
        case 0x4c144cu: goto label_4c144c;
        case 0x4c14b8u: goto label_4c14b8;
        case 0x4c1558u: goto label_4c1558;
        case 0x4c1690u: goto label_4c1690;
        case 0x4c16f0u: goto label_4c16f0;
        case 0x4c1704u: goto label_4c1704;
        case 0x4c1714u: goto label_4c1714;
        case 0x4c171cu: goto label_4c171c;
        case 0x4c1774u: goto label_4c1774;
        case 0x4c1930u: goto label_4c1930;
        case 0x4c1940u: goto label_4c1940;
        case 0x4c19a4u: goto label_4c19a4;
        case 0x4c19acu: goto label_4c19ac;
        case 0x4c19ccu: goto label_4c19cc;
        case 0x4c19dcu: goto label_4c19dc;
        case 0x4c19f0u: goto label_4c19f0;
        case 0x4c1a20u: goto label_4c1a20;
        case 0x4c1cbcu: goto label_4c1cbc;
        case 0x4c1d00u: goto label_4c1d00;
        case 0x4c1e1cu: goto label_4c1e1c;
        case 0x4c1e40u: goto label_4c1e40;
        case 0x4c1e58u: goto label_4c1e58;
        case 0x4c1e84u: goto label_4c1e84;
        case 0x4c1e8cu: goto label_4c1e8c;
        case 0x4c1e94u: goto label_4c1e94;
        default: break;
    }

    ctx->pc = 0x4c0fa0u;

    // 0x4c0fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c0fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0fa4:
    // 0x4c0fa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c0fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c0fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c0fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c0fac: 0x3e00008  jr          $ra
    ctx->pc = 0x4C0FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0FACu;
        // 0x4c0fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C0FB4u;
    // 0x4c0fb4: 0x0  nop
    ctx->pc = 0x4c0fb4u;
    // NOP
label_4c0fb8:
    // 0x4c0fb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c0fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c0fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c0fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c0fc0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4c0fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4c0fc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c0fc8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4c0fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4c0fcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c0fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c0fd0: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4c0fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4c0fd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c0fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c0fd8: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c0fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c0fdc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c0fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c0fe0: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4c0fe0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4c0fe4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c0fe8: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4c0fe8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4c0fec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c0fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c0ff0: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4c0ff0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4c0ff4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c0ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c0ff8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4c0ff8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c0ffc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c0ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4c1000: 0x26d60ea4  addiu       $s6, $s6, 0xEA4
    ctx->pc = 0x4c1000u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3748));
    // 0x4c1004: 0x26940ea8  addiu       $s4, $s4, 0xEA8
    ctx->pc = 0x4c1004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3752));
    // 0x4c1008: 0x26b50eac  addiu       $s5, $s5, 0xEAC
    ctx->pc = 0x4c1008u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3756));
    // 0x4c100c: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x4c100cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x4c1010: 0x26520eb4  addiu       $s2, $s2, 0xEB4
    ctx->pc = 0x4c1010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3764));
    // 0x4c1014: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4c1014u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EA4u));
    // 0x4c1018: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c1018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c101c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1020: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4c1020u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0EA8u));
    // 0x4c1024: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1028: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c1028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c102c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c102cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1030: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c1030u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c1034: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4c1034u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4c1038: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c103c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4c103cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1040: 0x26100e98  addiu       $s0, $s0, 0xE98
    ctx->pc = 0x4c1040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c1044: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x4c1044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x4c1048: 0x26730e9c  addiu       $s3, $s3, 0xE9C
    ctx->pc = 0x4c1048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3740));
    // 0x4c104c: 0x8e4c0000  lw          $t4, 0x0($s2)
    ctx->pc = 0x4c104cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1050: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c1050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c1054: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4c1054u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c1058: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c1058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c105c: 0x86cb0000  lh          $t3, 0x0($s6)
    ctx->pc = 0x4c105cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c1060: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1064: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c1064u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c1068: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c1068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c106c: 0x258d000c  addiu       $t5, $t4, 0xC
    ctx->pc = 0x4c106cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x4c1070: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4c1070u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4c1074: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c1074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c1078: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x4c1078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x4c107c: 0x868a0000  lh          $t2, 0x0($s4)
    ctx->pc = 0x4c107cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c1080: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c1080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c1084: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c1084u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c1088: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c108c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4c108cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4c1090: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4c1090u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4c1094: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c1094u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c1098: 0x8d820050  lw          $v0, 0x50($t4)
    ctx->pc = 0x4c1098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x4c109c: 0x86a90000  lh          $t1, 0x0($s5)
    ctx->pc = 0x4c109cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c10a0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c10a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c10a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c10a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c10a8: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4c10a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4c10ac: 0x1715825  or          $t3, $t3, $s1
    ctx->pc = 0x4c10acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 17));
    // 0x4c10b0: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x4c10b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x4c10b4: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4c10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4c10b8: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x4c10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x4c10bc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c10bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c10c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c10c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c10c4: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4c10c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4c10c8: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4c10c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4c10cc: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x4c10ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x4c10d0: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4c10d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4c10d4: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x4c10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x4c10d8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c10d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c10dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c10dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c10e0: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c10e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c10e4: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x4c10e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x4c10e8: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4c10e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4c10ec: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4c10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4c10f0: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4c10f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c10f4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c10f8: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4c10f8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c10fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c10fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1100: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4c1100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4c1104: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c1104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c1108: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c1108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c110c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c110cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1110: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4c1110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1114: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x4c1114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x4c1118: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c1118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c111c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c111cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c1120: 0xc12a878  jal         func_4AA1E0
    ctx->pc = 0x4C1120u;
    SET_GPR_U32(ctx, 31, 0x4C1128u);
    ctx->pc = 0x4C1124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1120u;
    // 0x4c1124: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA1E0u, 0x4C1120u, 0x4C1128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1128u;
label_4c1128:
    // 0x4c1128: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4c1128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c112c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c112cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1130: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x4c1130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4c1134: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c1134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c1138: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c1138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c113c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c113cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1140: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c1140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1144: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4c1144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4c1148: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c1148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c114c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c114cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c1150: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c1150u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1154: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4c1154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1158: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4c1158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4c115c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c115cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c1160: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c1160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c1164: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c1164u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1168: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4c1168u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c116c: 0xa6e30164  sh          $v1, 0x164($s7)
    ctx->pc = 0x4c116cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c1170: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4c1170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1174: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4c1174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c1178: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x4c1178u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c117c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c1180: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x4c1180u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c1184: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4c1184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4c1188: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c1188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c118c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4c118cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4c1190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c1190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1194: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c1194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c1198: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4c1198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c119c: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4C119Cu;
    SET_GPR_U32(ctx, 31, 0x4C11A4u);
    ctx->pc = 0x4C11A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C119Cu;
    // 0x4c11a0: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4C119Cu, 0x4C11A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C11A4u;
label_4c11a4:
    // 0x4c11a4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c11a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c11a8: 0xa6e3011a  sh          $v1, 0x11A($s7)
    ctx->pc = 0x4c11a8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c11ac: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c11acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c11b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c11b4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c11b8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c11b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c11bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c11bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c11c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c11c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c11c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c11c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c11c8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C11C8u;
    SET_GPR_U32(ctx, 31, 0x4C11D0u);
    ctx->pc = 0x4C11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C11C8u;
    // 0x4c11cc: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C11C8u, 0x4C11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C11D0u;
label_4c11d0:
    // 0x4c11d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c11d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c11d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c11d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c11d8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C11D8u;
    SET_GPR_U32(ctx, 31, 0x4C11E0u);
    ctx->pc = 0x4C11DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C11D8u;
    // 0x4c11dc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C11D8u, 0x4C11E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C11E0u;
label_4c11e0:
    // 0x4c11e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c11e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c11e4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4c11e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c11e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c11e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c11ec: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4C11ECu;
    SET_GPR_U32(ctx, 31, 0x4C11F4u);
    ctx->pc = 0x4C11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C11ECu;
    // 0x4c11f0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4C11ECu, 0x4C11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C11F4u;
label_4c11f4:
    // 0x4c11f4: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4c11f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c11f8: 0x86e201be  lh          $v0, 0x1BE($s7)
    ctx->pc = 0x4c11f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 446)));
    // 0x4c11fc: 0x26e501bc  addiu       $a1, $s7, 0x1BC
    ctx->pc = 0x4c11fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 444));
    // 0x4c1200: 0xa6e3011e  sh          $v1, 0x11E($s7)
    ctx->pc = 0x4c1200u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 286), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c1204: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1208: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c1208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c120c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4c120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1210: 0x86a60000  lh          $a2, 0x0($s5)
    ctx->pc = 0x4c1210u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c1214: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c1214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c1218: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c1218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c121c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c121cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c1220: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c1220u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c1224: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c1224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c1228: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c1228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c122c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c122cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c1230: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c1230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1234: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c1234u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c1238: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x4c1238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x4c123c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c123cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c1240: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1244: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c1244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c1248: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c1248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c124c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c124cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c1250: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c1250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1254: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c1254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c1258: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c1258u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c125c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1260: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c1260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c1264: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c1264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c1268: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c1268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c126c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c126cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1270: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4c1270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4c1274: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1278: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c1278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c127c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c127cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c1280: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c1280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c1284: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c1284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1288: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c1288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c128c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c128cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c1290: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c1290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c1294: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4c1294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4c1298: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c1298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c129c: 0x846370e8  lh          $v1, 0x70E8($v1)
    ctx->pc = 0x4c129cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28904)));
    // 0x4c12a0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c12a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c12a4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c12a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c12a8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c12ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c12acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c12b0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c12b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c12b4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4c12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4c12b8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c12b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c12bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c12bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c12c0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c12c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c12c4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c12c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c12c8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c12c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c12cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c12ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c12d0: 0xa6e30122  sh          $v1, 0x122($s7)
    ctx->pc = 0x4c12d0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c12d4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c12d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c12d8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c12d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c12dc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c12e0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4c12e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c12e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4C12E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C12E4u;
        // 0x4c12e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C12E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C12ECu;
    // 0x4c12ec: 0x0  nop
    ctx->pc = 0x4c12ecu;
    // NOP
label_4c12f0:
    // 0x4c12f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c12f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c12f4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c12f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c12f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c12f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c12fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4c12fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1300: 0x24c60e98  addiu       $a2, $a2, 0xE98
    ctx->pc = 0x4c1300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3736));
    // 0x4c1304: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c1304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c1308: 0x84e5015c  lh          $a1, 0x15C($a3)
    ctx->pc = 0x4c1308u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x4c130c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c130cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c1310: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4c1310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4c1314: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1318: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c1318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c131c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c131cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c1320: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c1320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c1324: 0x94e30162  lhu         $v1, 0x162($a3)
    ctx->pc = 0x4c1324u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 354)));
    // 0x4c1328: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c1328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4c132c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C132Cu;
    {
        const bool branch_taken_0x4c132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C132Cu;
        // 0x4c1330: 0x24e801bc  addiu       $t0, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c132c) {
            ctx->pc = 0x4C1340u;
            goto label_4c1340;
        }
    }
    ctx->pc = 0x4C1334u;
    // 0x4c1334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c1334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1338: 0x81305d0  j           func_4C1740
    ctx->pc = 0x4C1338u;
    ctx->pc = 0x4C133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1338u;
    // 0x4c133c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1740u;
    goto label_4c1740;
    ctx->pc = 0x4C1340u;
label_4c1340:
    // 0x4c1340: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c1340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c1344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c1344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1348: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c1348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c134c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4c134cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1350: 0x81304d6  j           func_4C1358
    ctx->pc = 0x4C1350u;
    ctx->pc = 0x4C1354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1350u;
    // 0x4c1354: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1358u;
    goto label_4c1358;
    ctx->pc = 0x4C1358u;
label_4c1358:
    // 0x4c1358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c1358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c135c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c1360: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c1360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c1364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c1364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c1368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c136c: 0x24420e98  addiu       $v0, $v0, 0xE98
    ctx->pc = 0x4c136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3736));
    // 0x4c1370: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c1370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c1374: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c1374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c1378: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c1378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c137c: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x4c137cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x4c1380: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c1380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c1384: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c1384u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c1388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c138c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c1390: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4c1390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4c1394: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4C1394u;
    SET_GPR_U32(ctx, 31, 0x4C139Cu);
    ctx->pc = 0x4C1398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1394u;
    // 0x4c1398: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4C1394u, 0x4C139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C139Cu;
label_4c139c:
    // 0x4c139c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4C139Cu;
    {
        const bool branch_taken_0x4c139c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c139c) {
            ctx->pc = 0x4C13A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C139Cu;
            // 0x4c13a0: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C13C8u;
            goto label_4c13c8;
        }
    }
    ctx->pc = 0x4C13A4u;
    // 0x4c13a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c13a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c13a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c13a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c13ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c13acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c13b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c13b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c13b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c13b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c13b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c13b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c13bc: 0x81305d0  j           func_4C1740
    ctx->pc = 0x4C13BCu;
    ctx->pc = 0x4C13C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C13BCu;
    // 0x4c13c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1740u;
    goto label_4c1740;
    ctx->pc = 0x4C13C4u;
    // 0x4c13c4: 0x0  nop
    ctx->pc = 0x4c13c4u;
    // NOP
label_4c13c8:
    // 0x4c13c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c13c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c13cc: 0x24440eb0  addiu       $a0, $v0, 0xEB0
    ctx->pc = 0x4c13ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x4c13d0: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x4c13d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x4c13d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c13d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c13d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c13dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c13dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c13e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c13e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c13e4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4c13e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c13e8: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4C13E8u;
    {
        const bool branch_taken_0x4c13e8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4c13e8) {
            ctx->pc = 0x4C1444u;
            goto label_4c1444;
        }
    }
    ctx->pc = 0x4C13F0u;
    // 0x4c13f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c13f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c13f4: 0x24130035  addiu       $s3, $zero, 0x35
    ctx->pc = 0x4c13f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x4c13f8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c13f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4c13fc: 0x0  nop
    ctx->pc = 0x4c13fcu;
    // NOP
label_4c1400:
    // 0x4c1400: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4C1400u;
    SET_GPR_U32(ctx, 31, 0x4C1408u);
    ctx->pc = 0x4C1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1400u;
    // 0x4c1404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4C1400u, 0x4C1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1408u;
label_4c1408:
    // 0x4c1408: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4c1408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c140c: 0xa4f30008  sh          $s3, 0x8($a3)
    ctx->pc = 0x4c140cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x4c1410: 0xacf10140  sw          $s1, 0x140($a3)
    ctx->pc = 0x4c1410u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 17));
    // 0x4c1414: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c1414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1418: 0xa4e201be  sh          $v0, 0x1BE($a3)
    ctx->pc = 0x4c1418u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 446), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c141c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4c141cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1420: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4c1420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1424: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c1424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4c1428: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c1428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c142c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4c142cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4c1430: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c1430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c1434: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c1434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c1438: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c1438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c143c: 0x441fff0  bgez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4C143Cu;
    {
        const bool branch_taken_0x4c143c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4c143c) {
            ctx->pc = 0x4C1400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1400;
        }
    }
    ctx->pc = 0x4C1444u;
label_4c1444:
    // 0x4c1444: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4C1444u;
    SET_GPR_U32(ctx, 31, 0x4C144Cu);
    ctx->pc = 0x4C1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1444u;
    // 0x4c1448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4C1444u, 0x4C144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C144Cu;
label_4c144c:
    // 0x4c144c: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x4c144cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x4c1450: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4c1450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1454: 0x24020482  addiu       $v0, $zero, 0x482
    ctx->pc = 0x4c1454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1154));
    // 0x4c1458: 0x2404041d  addiu       $a0, $zero, 0x41D
    ctx->pc = 0x4c1458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1053));
    // 0x4c145c: 0xa4e30008  sh          $v1, 0x8($a3)
    ctx->pc = 0x4c145cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c1460: 0xa4e4015e  sh          $a0, 0x15E($a3)
    ctx->pc = 0x4c1460u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 350), (uint16_t)GPR_U32(ctx, 4));
    // 0x4c1464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1468: 0xacf10140  sw          $s1, 0x140($a3)
    ctx->pc = 0x4c1468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 17));
    // 0x4c146c: 0x2625015e  addiu       $a1, $s1, 0x15E
    ctx->pc = 0x4c146cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4c1470: 0xa4e20160  sh          $v0, 0x160($a3)
    ctx->pc = 0x4c1470u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1474: 0x2406041e  addiu       $a2, $zero, 0x41E
    ctx->pc = 0x4c1474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1054));
    // 0x4c1478: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4c1478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4c147c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c147cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1480: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c1480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c1484: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c1484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1488: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c1488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c148c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c148cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c1490: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4c1490u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1494: 0xa626000c  sh          $a2, 0xC($s1)
    ctx->pc = 0x4c1494u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c1498: 0xa6200158  sh          $zero, 0x158($s1)
    ctx->pc = 0x4c1498u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c149c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c149cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c14a0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c14a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c14a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c14a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c14a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c14ac: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c14acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c14b0: 0x813052e  j           func_4C14B8
    ctx->pc = 0x4C14B0u;
    ctx->pc = 0x4C14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C14B0u;
    // 0x4c14b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C14B8u;
    goto label_4c14b8;
    ctx->pc = 0x4C14B8u;
label_4c14b8:
    // 0x4c14b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c14b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c14bc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c14bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c14c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c14c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c14c4: 0x2507013a  addiu       $a3, $t0, 0x13A
    ctx->pc = 0x4c14c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 314));
    // 0x4c14c8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c14c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c14cc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c14ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c14d0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c14d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c14d4: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x4c14d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
    // 0x4c14d8: 0x2509015e  addiu       $t1, $t0, 0x15E
    ctx->pc = 0x4c14d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 350));
    // 0x4c14dc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4c14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4c14e0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4c14e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c14e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c14e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c14e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c14ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c14f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c14f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c14f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c14f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c14f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c14f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c14fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c14fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c1500: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c1500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c1504: 0x2c420900  sltiu       $v0, $v0, 0x900
    ctx->pc = 0x4c1504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2304) ? 1 : 0);
    // 0x4c1508: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C1508u;
    {
        const bool branch_taken_0x4c1508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1508u;
        // 0x4c150c: 0x250a01bc  addiu       $t2, $t0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1508) {
            ctx->pc = 0x4C1520u;
            goto label_4c1520;
        }
    }
    ctx->pc = 0x4C1510u;
    // 0x4c1510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c1510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1514: 0x81305d0  j           func_4C1740
    ctx->pc = 0x4C1514u;
    ctx->pc = 0x4C1518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1514u;
    // 0x4c1518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1740u;
    goto label_4c1740;
    ctx->pc = 0x4C151Cu;
    // 0x4c151c: 0x0  nop
    ctx->pc = 0x4c151cu;
    // NOP
label_4c1520:
    // 0x4c1520: 0x24030900  addiu       $v1, $zero, 0x900
    ctx->pc = 0x4c1520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x4c1524: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x4c1524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x4c1528: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4c1528u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c152c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c152cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1530: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4c1530u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c1534: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4c1534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4c1538: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4c1538u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c153c: 0xa5050160  sh          $a1, 0x160($t0)
    ctx->pc = 0x4c153cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 352), (uint16_t)GPR_U32(ctx, 5));
    // 0x4c1540: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c1540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c1544: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c1544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c1548: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4c1548u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c154c: 0x8130556  j           func_4C1558
    ctx->pc = 0x4C154Cu;
    ctx->pc = 0x4C1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C154Cu;
    // 0x4c1550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1558u;
    goto label_4c1558;
    ctx->pc = 0x4C1554u;
    // 0x4c1554: 0x0  nop
    ctx->pc = 0x4c1554u;
    // NOP
label_4c1558:
    // 0x4c1558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c1558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c155c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c155cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c1560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c1564: 0x25020160  addiu       $v0, $t0, 0x160
    ctx->pc = 0x4c1564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 352));
    // 0x4c1568: 0x2509015e  addiu       $t1, $t0, 0x15E
    ctx->pc = 0x4c1568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 350));
    // 0x4c156c: 0x250a01bc  addiu       $t2, $t0, 0x1BC
    ctx->pc = 0x4c156cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
    // 0x4c1570: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c1570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c1574: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c1574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4c1578: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4c1578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c157c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C157Cu;
    {
        const bool branch_taken_0x4c157c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4C1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C157Cu;
        // 0x4c1580: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c157c) {
            ctx->pc = 0x4C1590u;
            goto label_4c1590;
        }
    }
    ctx->pc = 0x4C1584u;
    // 0x4c1584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c1584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1588: 0x81305d0  j           func_4C1740
    ctx->pc = 0x4C1588u;
    ctx->pc = 0x4C158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1588u;
    // 0x4c158c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1740u;
    goto label_4c1740;
    ctx->pc = 0x4C1590u;
label_4c1590:
    // 0x4c1590: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c1590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c1594: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4c1594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c1598: 0x24c60e98  addiu       $a2, $a2, 0xE98
    ctx->pc = 0x4c1598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3736));
    // 0x4c159c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c159cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c15a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c15a4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c15a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c15a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c15a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c15ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c15acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c15b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c15b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c15b4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c15b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c15b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c15b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c15bc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c15bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c15c0: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x4c15c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x4c15c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c15c8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c15c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c15cc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c15ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c15d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c15d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c15d4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c15d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c15d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c15dc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c15dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c15e0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4c15e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4c15e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c15e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c15e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c15ec: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c15ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c15f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c15f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c15f4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c15f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c15f8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c15f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c15fc: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4c15fcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1600: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c1600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c1604: 0x850201be  lh          $v0, 0x1BE($t0)
    ctx->pc = 0x4c1604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 446)));
    // 0x4c1608: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c1608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c160c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c160cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c1610: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c1610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c1614: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c1614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c1618: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c1618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c161c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c161cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c1620: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4c1620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4c1624: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c1624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c1628: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c1628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c162c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c162cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c1630: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c1630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c1634: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c1634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c1638: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c1638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c163c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c163cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c1640: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c1640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c1644: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c1644u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c1648: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c1648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c164c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c164cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c1650: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c1650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c1654: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c1654u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c1658: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c1658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c165c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4c165cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4c1660: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c1660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c1664: 0x846370e0  lh          $v1, 0x70E0($v1)
    ctx->pc = 0x4c1664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28896)));
    // 0x4c1668: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4c1668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4c166c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c166cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c1670: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c1670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c1674: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4c1674u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c1678: 0xa5030158  sh          $v1, 0x158($t0)
    ctx->pc = 0x4c1678u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c167c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c167cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c1680: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c1680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c1684: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4c1684u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1688: 0x81305a4  j           func_4C1690
    ctx->pc = 0x4C1688u;
    ctx->pc = 0x4C168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1688u;
    // 0x4c168c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1690u;
    goto label_4c1690;
    ctx->pc = 0x4C1690u;
label_4c1690:
    // 0x4c1690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c1690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c1694: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c1694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c1698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c1698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c169c: 0x24c60e98  addiu       $a2, $a2, 0xE98
    ctx->pc = 0x4c169cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3736));
    // 0x4c16a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4c16a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c16a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c16a8: 0x84e5015c  lh          $a1, 0x15C($a3)
    ctx->pc = 0x4c16a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x4c16ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c16acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c16b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4c16b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4c16b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c16b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c16b8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4c16b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4c16bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4c16c0: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4c16c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c16c4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C16C4u;
    {
        const bool branch_taken_0x4c16c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4C16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C16C4u;
        // 0x4c16c8: 0x24e701bc  addiu       $a3, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c16c4) {
            ctx->pc = 0x4C16D8u;
            goto label_4c16d8;
        }
    }
    ctx->pc = 0x4C16CCu;
    // 0x4c16cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c16ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c16d0: 0x81305d0  j           func_4C1740
    ctx->pc = 0x4C16D0u;
    ctx->pc = 0x4C16D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C16D0u;
    // 0x4c16d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1740u;
    goto label_4c1740;
    ctx->pc = 0x4C16D8u;
label_4c16d8:
    // 0x4c16d8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c16d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c16dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c16dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c16e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c16e4: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4c16e4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c16e8: 0x81305bc  j           func_4C16F0
    ctx->pc = 0x4C16E8u;
    ctx->pc = 0x4C16ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C16E8u;
    // 0x4c16ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C16F0u;
    goto label_4c16f0;
    ctx->pc = 0x4C16F0u;
label_4c16f0:
    // 0x4c16f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c16f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c16f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c16f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c16f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c16f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c16fc: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C16FCu;
    SET_GPR_U32(ctx, 31, 0x4C1704u);
    ctx->pc = 0x4C1700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C16FCu;
    // 0x4c1700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C16FCu, 0x4C1704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1704u;
label_4c1704:
    // 0x4c1704: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C1704u;
    {
        const bool branch_taken_0x4c1704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1704u;
        // 0x4c1708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1704) {
            ctx->pc = 0x4C1730u;
            goto label_4c1730;
        }
    }
    ctx->pc = 0x4C170Cu;
    // 0x4c170c: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4C170Cu;
    SET_GPR_U32(ctx, 31, 0x4C1714u);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4C170Cu, 0x4C1714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1714u;
label_4c1714:
    // 0x4c1714: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4C1714u;
    SET_GPR_U32(ctx, 31, 0x4C171Cu);
    ctx->pc = 0x4C1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1714u;
    // 0x4c1718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4C1714u, 0x4C171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C171Cu;
label_4c171c:
    // 0x4c171c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c171cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1720: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c1720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c1724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1728: 0x8130708  j           func_4C1C20
    ctx->pc = 0x4C1728u;
    ctx->pc = 0x4C172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1728u;
    // 0x4c172c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1C20u;
    goto label_4c1c20;
    ctx->pc = 0x4C1730u;
label_4c1730:
    // 0x4c1730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1734: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c1734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c1738: 0x3e00008  jr          $ra
    ctx->pc = 0x4C1738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1738u;
        // 0x4c173c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C1740u;
label_4c1740:
    // 0x4c1740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c1740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c1744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c1744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c1748: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4c1748u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4c174c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c1750: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c1750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c1754: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c1754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c1758: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c1758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c175c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c1760: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c1760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c1764: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c1764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c1768: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c1768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4c176c: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4C176Cu;
    SET_GPR_U32(ctx, 31, 0x4C1774u);
    ctx->pc = 0x4C1770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C176Cu;
    // 0x4c1770: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4C176Cu, 0x4C1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1774u;
label_4c1774:
    // 0x4c1774: 0x26040e98  addiu       $a0, $s0, 0xE98
    ctx->pc = 0x4c1774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c1778: 0x26ad015a  addiu       $t5, $s5, 0x15A
    ctx->pc = 0x4c1778u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), 346));
    // 0x4c177c: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4c177cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c1780: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c1780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c1784: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c1784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c1788: 0x26ab0158  addiu       $t3, $s5, 0x158
    ctx->pc = 0x4c1788u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 344));
    // 0x4c178c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c1790: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c1790u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c1794: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1798: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c179c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c179cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c17a0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c17a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c17a4: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4c17a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c17a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c17a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c17ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c17acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c17b0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C17B0u;
    {
        const bool branch_taken_0x4c17b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C17B0u;
        // 0x4c17b4: 0x25850e9c  addiu       $a1, $t4, 0xE9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 3740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c17b0) {
            ctx->pc = 0x4C17C8u;
            goto label_4c17c8;
        }
    }
    ctx->pc = 0x4C17B8u;
    // 0x4c17b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c17bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C17BCu;
    {
        const bool branch_taken_0x4c17bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C17BCu;
        // 0x4c17c0: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c17bc) {
            ctx->pc = 0x4C17D0u;
            goto label_4c17d0;
        }
    }
    ctx->pc = 0x4C17C4u;
    // 0x4c17c4: 0x0  nop
    ctx->pc = 0x4c17c4u;
    // NOP
label_4c17c8:
    // 0x4c17c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c17cc: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4c17ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4c17d0:
    // 0x4c17d0: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c17d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c17d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c17d8: 0x25ca0ea0  addiu       $t2, $t6, 0xEA0
    ctx->pc = 0x4c17d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 3744));
    // 0x4c17dc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4c17dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4c17e0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c17e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EA0u));
    // 0x4c17e4: 0x26080e98  addiu       $t0, $s0, 0xE98
    ctx->pc = 0x4c17e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c17e8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4c17ec: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4c17ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4c17f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c17f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c17f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c17f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c17f8: 0x95870e9c  lhu         $a3, 0xE9C($t4)
    ctx->pc = 0x4c17f8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 3740)));
    // 0x4c17fc: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4c17fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c1800: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c1800u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c1804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1808: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4c1808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c180c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c180cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c1810: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4c1810u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4c1814: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4c1814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c1818: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4c1818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4c181c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c181cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c1820: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c1820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c1824: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c1824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c1828: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c1828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c182c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c182cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1830: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c1830u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c1834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1838: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c1838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c183c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c183cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c1840: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c1840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c1844: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4c1844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1848: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4c1848u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4c184c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c184cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c1850: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c1850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c1854: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4c1854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4c1858: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4c1858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4c185c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4c185cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4c1860: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c1860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c1864: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4c1864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c1868: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c1868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c186c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c186cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c1870: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C1870u;
    {
        const bool branch_taken_0x4c1870 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1870u;
        // 0x4c1874: 0x348700ff  ori         $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1870) {
            ctx->pc = 0x4C1880u;
            goto label_4c1880;
        }
    }
    ctx->pc = 0x4C1878u;
    // 0x4c1878: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c1878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c187c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x4c187cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4c1880:
    // 0x4c1880: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4c1880u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4c1884: 0x25d70ea0  addiu       $s7, $t6, 0xEA0
    ctx->pc = 0x4c1884u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 14), 3744));
    // 0x4c1888: 0x25960e9c  addiu       $s6, $t4, 0xE9C
    ctx->pc = 0x4c1888u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 12), 3740));
    // 0x4c188c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4c188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c1890: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4c1890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c1894: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x4c1894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c1898: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4c1898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c189c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4c189cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4c18a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4c18a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c18a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c18a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c18a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4c18a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4c18ac: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C18ACu;
    {
        const bool branch_taken_0x4c18ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C18ACu;
        // 0x4c18b0: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c18ac) {
            ctx->pc = 0x4C18D4u;
            goto label_4c18d4;
        }
    }
    ctx->pc = 0x4C18B4u;
    // 0x4c18b4: 0x26050e98  addiu       $a1, $s0, 0xE98
    ctx->pc = 0x4c18b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c18b8: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x4c18b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c18bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c18c0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c18c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4c18c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4c18c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c18c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c18cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c18ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c18d0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c18d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4c18d4:
    // 0x4c18d4: 0x26100e98  addiu       $s0, $s0, 0xE98
    ctx->pc = 0x4c18d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c18d8: 0x26a5015c  addiu       $a1, $s5, 0x15C
    ctx->pc = 0x4c18d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 348));
    // 0x4c18dc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c18dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c18e0: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4c18e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4c18e4: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4c18e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4c18e8: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c18e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c18ec: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4c18ecu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c18f0: 0x26940ea4  addiu       $s4, $s4, 0xEA4
    ctx->pc = 0x4c18f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3748));
    // 0x4c18f4: 0x26730ea8  addiu       $s3, $s3, 0xEA8
    ctx->pc = 0x4c18f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3752));
    // 0x4c18f8: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4c18f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4c18fc: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4c18fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c1900: 0x26520eac  addiu       $s2, $s2, 0xEAC
    ctx->pc = 0x4c1900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3756));
    // 0x4c1904: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4c1904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1908: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4c1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c190c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4c1910: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c1910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c1914: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c1914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c1918: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c1918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c191c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c191cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c1920: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c1920u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1924: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4c1924u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c1928: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C1928u;
    SET_GPR_U32(ctx, 31, 0x4C1930u);
    ctx->pc = 0x4C192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1928u;
    // 0x4c192c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C1928u, 0x4C1930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1930u;
label_4c1930:
    // 0x4c1930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c1930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1934: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c1934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c1938: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C1938u;
    SET_GPR_U32(ctx, 31, 0x4C1940u);
    ctx->pc = 0x4C193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1938u;
    // 0x4c193c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C1938u, 0x4C1940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1940u;
label_4c1940:
    // 0x4c1940: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x4c1940u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x4c1944: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c1944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1948: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4c1948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c194c: 0x86a2011e  lh          $v0, 0x11E($s5)
    ctx->pc = 0x4c194cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 286)));
    // 0x4c1950: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1954: 0x86c60000  lh          $a2, 0x0($s6)
    ctx->pc = 0x4c1954u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c1958: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c195c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4c195cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1960: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1964: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c1964u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c1968: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c1968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c196c: 0x86a20122  lh          $v0, 0x122($s5)
    ctx->pc = 0x4c196cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 290)));
    // 0x4c1970: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4c1970u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1974: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1978: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4c1978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c197c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c197cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c1980: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4c1980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4c1984: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x4c1984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4c1988: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c1988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c198c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4c198cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4c1990: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4c1990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4c1994: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c1994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c1998: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c1998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c199c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C199Cu;
    SET_GPR_U32(ctx, 31, 0x4C19A4u);
    ctx->pc = 0x4C19A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C199Cu;
    // 0x4c19a0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C199Cu, 0x4C19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C19A4u;
label_4c19a4:
    // 0x4c19a4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C19A4u;
    SET_GPR_U32(ctx, 31, 0x4C19ACu);
    ctx->pc = 0x4C19A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C19A4u;
    // 0x4c19a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C19A4u, 0x4C19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C19ACu;
label_4c19ac:
    // 0x4c19ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c19acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c19b0: 0x86a2011a  lh          $v0, 0x11A($s5)
    ctx->pc = 0x4c19b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 282)));
    // 0x4c19b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c19b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c19b8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c19b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c19bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c19bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c19c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c19c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c19c4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C19C4u;
    SET_GPR_U32(ctx, 31, 0x4C19CCu);
    ctx->pc = 0x4C19C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C19C4u;
    // 0x4c19c8: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C19C4u, 0x4C19CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C19CCu;
label_4c19cc:
    // 0x4c19cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c19ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c19d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c19d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c19d4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C19D4u;
    SET_GPR_U32(ctx, 31, 0x4C19DCu);
    ctx->pc = 0x4C19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C19D4u;
    // 0x4c19d8: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C19D4u, 0x4C19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C19DCu;
label_4c19dc:
    // 0x4c19dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c19dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c19e0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4c19e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c19e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c19e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c19e8: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4C19E8u;
    SET_GPR_U32(ctx, 31, 0x4C19F0u);
    ctx->pc = 0x4C19ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C19E8u;
    // 0x4c19ec: 0x8ec70000  lw          $a3, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4C19E8u, 0x4C19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C19F0u;
label_4c19f0:
    // 0x4c19f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c19f4: 0x86a70164  lh          $a3, 0x164($s5)
    ctx->pc = 0x4c19f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 356)));
    // 0x4c19f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c19f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c19fc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c19fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1a00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c1a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1a08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4c1a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1a0c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4c1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4c1a10: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1a14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1a18: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4C1A18u;
    SET_GPR_U32(ctx, 31, 0x4C1A20u);
    ctx->pc = 0x4C1A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1A18u;
    // 0x4c1a1c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4C1A18u, 0x4C1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1A20u;
label_4c1a20:
    // 0x4c1a20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c1a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1a24: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4c1a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c1a28: 0x26aa0124  addiu       $t2, $s5, 0x124
    ctx->pc = 0x4c1a28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
    // 0x4c1a2c: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x4c1a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c1a30: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4c1a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4c1a34: 0x96870000  lhu         $a3, 0x0($s4)
    ctx->pc = 0x4c1a34u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c1a38: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4c1a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4c1a3c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4c1a3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c1a40: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4c1a40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4c1a44: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4c1a44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1a48: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4c1a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4c1a4c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4c1a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4c1a50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c1a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c1a54: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x4c1a54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4c1a58: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x4c1a58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x4c1a5c: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x4c1a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x4c1a60: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c1a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c1a64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1a68: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c1a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c1a6c: 0x86a40130  lh          $a0, 0x130($s5)
    ctx->pc = 0x4c1a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x4c1a70: 0x26ab0128  addiu       $t3, $s5, 0x128
    ctx->pc = 0x4c1a70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 296));
    // 0x4c1a74: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c1a74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1a78: 0x26a9012c  addiu       $t1, $s5, 0x12C
    ctx->pc = 0x4c1a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 300));
    // 0x4c1a7c: 0x86c70000  lh          $a3, 0x0($s6)
    ctx->pc = 0x4c1a7cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c1a80: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c1a80u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c1a84: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c1a88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4c1a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1a8c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1a90: 0x86e80000  lh          $t0, 0x0($s7)
    ctx->pc = 0x4c1a90u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c1a94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1a98: 0x26ad0010  addiu       $t5, $s5, 0x10
    ctx->pc = 0x4c1a98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4c1a9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c1a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c1aa0: 0x26ae0014  addiu       $t6, $s5, 0x14
    ctx->pc = 0x4c1aa0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4c1aa4: 0x26af0018  addiu       $t7, $s5, 0x18
    ctx->pc = 0x4c1aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4c1aa8: 0x86a20132  lh          $v0, 0x132($s5)
    ctx->pc = 0x4c1aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 306)));
    // 0x4c1aac: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c1aacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1ab0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4c1ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c1ab4: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4c1ab4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4c1ab8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c1abc: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4c1abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4c1ac0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1ac4: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x4c1ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x4c1ac8: 0x86a20134  lh          $v0, 0x134($s5)
    ctx->pc = 0x4c1ac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 308)));
    // 0x4c1acc: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c1accu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c1ad0: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4c1ad0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4c1ad4: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4c1ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4c1ad8: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x4c1ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x4c1adc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4c1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c1ae0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1ae4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c1ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c1ae8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4c1ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4c1aec: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4c1aecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c1af0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4c1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c1af4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c1af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c1af8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1afc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1b00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c1b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c1b04: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4c1b04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4c1b08: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x4c1b08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c1b0c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4c1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c1b10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c1b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c1b14: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1b18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1b1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c1b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c1b20: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4c1b20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4c1b24: 0x8d880eb4  lw          $t0, 0xEB4($t4)
    ctx->pc = 0x4c1b24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 3764)));
    // 0x4c1b28: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4c1b28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c1b2c: 0x8d020050  lw          $v0, 0x50($t0)
    ctx->pc = 0x4c1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x4c1b30: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4c1b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c1b34: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c1b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c1b38: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4c1b38u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c1b3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c1b3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c1b40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c1b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c1b44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c1b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c1b48: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4c1b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c1b4c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c1b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c1b50: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c1b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c1b54: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c1b54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c1b58: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4c1b58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4c1b5c: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x4c1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x4c1b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1b64: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c1b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c1b68: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c1b68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c1b6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c1b6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c1b70: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c1b70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c1b74: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4c1b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c1b78: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c1b78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c1b7c: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4c1b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4c1b80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c1b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c1b84: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4c1b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4c1b88: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4c1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4c1b8c: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x4c1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x4c1b90: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4c1b90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1b94: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c1b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c1b98: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4c1b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1b9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c1b9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c1ba0: 0x96860000  lhu         $a2, 0x0($s4)
    ctx->pc = 0x4c1ba0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c1ba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c1ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c1ba8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c1ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c1bac: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c1bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c1bb0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4c1bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4c1bb4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c1bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c1bb8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c1bb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c1bbc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4c1bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4c1bc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c1bc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c1bc4: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4c1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c1bc8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1bcc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4c1bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4c1bd0: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4c1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4c1bd4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4c1bd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c1bd8: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4c1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c1bdc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c1be0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c1be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c1be4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1be8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1bec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c1bf0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4c1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4c1bf4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4c1bf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1bf8: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4c1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c1bfc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c1c00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c1c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1c04: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c1c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c1c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c1c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c1c0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1c10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c1c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c1c14: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4c1c14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4c1c18: 0x8130708  j           func_4C1C20
    ctx->pc = 0x4C1C18u;
    ctx->pc = 0x4C1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1C18u;
    // 0x4c1c1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1C20u;
    goto label_4c1c20;
    ctx->pc = 0x4C1C20u;
label_4c1c20:
    // 0x4c1c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c1c24: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c1c28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c1c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c1c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1c30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c1c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c1c34: 0x24520e98  addiu       $s2, $v0, 0xE98
    ctx->pc = 0x4c1c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3736));
    // 0x4c1c38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c1c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c1c3c: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4c1c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4c1c40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c1c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c1c44: 0x2634015e  addiu       $s4, $s1, 0x15E
    ctx->pc = 0x4c1c44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4c1c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c1c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c1c4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4c1c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4c1c50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c1c50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c1c54: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4c1c54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c1c58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1c5c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c1c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c1c60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1c64: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c1c68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1c6c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4c1c6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1c70: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4c1c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4c1c74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c1c78: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c1c78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c1c7c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c1c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c1c80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1c84: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c1c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c1c88: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c1c88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1c8c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C1C8Cu;
    {
        const bool branch_taken_0x4c1c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c1c8c) {
            ctx->pc = 0x4C1C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1C8Cu;
            // 0x4c1c90: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1CD0u;
            goto label_4c1cd0;
        }
    }
    ctx->pc = 0x4C1C94u;
    // 0x4c1c94: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c1c98: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c1c9c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4c1c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4c1ca0: 0x8c650ea8  lw          $a1, 0xEA8($v1)
    ctx->pc = 0x4c1ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0EA8u));
    // 0x4c1ca4: 0x26100e9c  addiu       $s0, $s0, 0xE9C
    ctx->pc = 0x4c1ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3740));
    // 0x4c1ca8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4c1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0EA4u));
    // 0x4c1cac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4c1cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1cb0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4c1cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1cb4: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4C1CB4u;
    SET_GPR_U32(ctx, 31, 0x4C1CBCu);
    ctx->pc = 0x4C1CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1CB4u;
    // 0x4c1cb8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4C1CB4u, 0x4C1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1CBCu;
label_4c1cbc:
    // 0x4c1cbc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4c1cbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1cc0: 0xa6230118  sh          $v1, 0x118($s1)
    ctx->pc = 0x4c1cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c1cc4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c1cc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1cc8: 0xa622011c  sh          $v0, 0x11C($s1)
    ctx->pc = 0x4c1cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1ccc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4c1cd0:
    // 0x4c1cd0: 0x26300120  addiu       $s0, $s1, 0x120
    ctx->pc = 0x4c1cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x4c1cd4: 0x8622013a  lh          $v0, 0x13A($s1)
    ctx->pc = 0x4c1cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 314)));
    // 0x4c1cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1cdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1ce0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c1ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c1ce4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1ce8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c1ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c1cec: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4c1cecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1cf0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c1cf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1cf4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c1cf8: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C1CF8u;
    SET_GPR_U32(ctx, 31, 0x4C1D00u);
    ctx->pc = 0x4C1CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1CF8u;
    // 0x4c1cfc: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C1CF8u, 0x4C1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1D00u;
label_4c1d00:
    // 0x4c1d00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1d04: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4c1d04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c1d08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1d0c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c1d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c1d10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1d14: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c1d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c1d18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1d1c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4c1d1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1d20: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x4c1d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x4c1d24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c1d28: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c1d28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c1d2c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c1d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c1d30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1d34: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c1d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c1d38: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c1d38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1d3c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4C1D3Cu;
    {
        const bool branch_taken_0x4c1d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c1d3c) {
            ctx->pc = 0x4C1D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1D3Cu;
            // 0x4c1d40: 0x86220160  lh          $v0, 0x160($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1D68u;
            goto label_4c1d68;
        }
    }
    ctx->pc = 0x4C1D44u;
    // 0x4c1d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1d48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c1d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c1d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1d50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c1d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1d54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c1d54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c1d58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c1d58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c1d5c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4c1d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c1d60: 0x8130790  j           func_4C1E40
    ctx->pc = 0x4C1D60u;
    ctx->pc = 0x4C1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1D60u;
    // 0x4c1d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1E40u;
    goto label_4c1e40;
    ctx->pc = 0x4C1D68u;
label_4c1d68:
    // 0x4c1d68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1d6c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c1d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c1d70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1d74: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c1d74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c1d78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c1d7c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4c1d7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1d80: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4c1d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4c1d84: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c1d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c1d88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c1d8c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c1d90: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c1d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c1d94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C1D94u;
    {
        const bool branch_taken_0x4c1d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D94u;
        // 0x4c1d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1d94) {
            ctx->pc = 0x4C1DC0u;
            goto label_4c1dc0;
        }
    }
    ctx->pc = 0x4C1D9Cu;
    // 0x4c1d9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c1d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c1da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1da4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c1da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1da8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c1da8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c1dac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c1dacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c1db0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4c1db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c1db4: 0x8130790  j           func_4C1E40
    ctx->pc = 0x4C1DB4u;
    ctx->pc = 0x4C1DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1DB4u;
    // 0x4c1db8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1E40u;
    goto label_4c1e40;
    ctx->pc = 0x4C1DBCu;
    // 0x4c1dbc: 0x0  nop
    ctx->pc = 0x4c1dbcu;
    // NOP
label_4c1dc0:
    // 0x4c1dc0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4c1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4c1dc4: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4c1dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4c1dc8: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4c1dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4c1dcc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4c1dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4c1dd0: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4c1dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4c1dd4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c1dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c1dd8: 0xa4a32334  sh          $v1, 0x2334($a1)
    ctx->pc = 0x4c1dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9012), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c1ddc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4c1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4c1de0: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c1de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c1de4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4c1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4c1de8: 0xa4a22336  sh          $v0, 0x2336($a1)
    ctx->pc = 0x4c1de8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1dec: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x4c1decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4c1df0: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4c1df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4c1df4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c1df8: 0xa4a32338  sh          $v1, 0x2338($a1)
    ctx->pc = 0x4c1df8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9016), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c1dfc: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x4c1dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4c1e00: 0xa4a2233a  sh          $v0, 0x233A($a1)
    ctx->pc = 0x4c1e00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9018), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1e04: 0x9623011c  lhu         $v1, 0x11C($s1)
    ctx->pc = 0x4c1e04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4c1e08: 0xa4a3233c  sh          $v1, 0x233C($a1)
    ctx->pc = 0x4c1e08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9020), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c1e0c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c1e0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c1e10: 0xa4a62330  sh          $a2, 0x2330($a1)
    ctx->pc = 0x4c1e10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9008), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c1e14: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4C1E14u;
    SET_GPR_U32(ctx, 31, 0x4C1E1Cu);
    ctx->pc = 0x4C1E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1E14u;
    // 0x4c1e18: 0xa4a2233e  sh          $v0, 0x233E($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9022), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4C1E14u, 0x4C1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1E1Cu;
label_4c1e1c:
    // 0x4c1e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1e24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c1e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c1e28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c1e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1e2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c1e2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c1e30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c1e30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c1e34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4c1e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c1e38: 0x8130790  j           func_4C1E40
    ctx->pc = 0x4C1E38u;
    ctx->pc = 0x4C1E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1E38u;
    // 0x4c1e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1E40u;
    goto label_4c1e40;
    ctx->pc = 0x4C1E40u;
label_4c1e40:
    // 0x4c1e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c1e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c1e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c1e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c1e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c1e4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c1e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c1e50: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C1E50u;
    SET_GPR_U32(ctx, 31, 0x4C1E58u);
    ctx->pc = 0x4C1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1E50u;
    // 0x4c1e54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C1E50u, 0x4C1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1E58u;
label_4c1e58:
    // 0x4c1e58: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c1e5c: 0x2465d680  addiu       $a1, $v1, -0x2980
    ctx->pc = 0x4c1e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4c1e60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c1e64: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C1E64u;
    {
        const bool branch_taken_0x4c1e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E64u;
        // 0x4c1e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1e64) {
            ctx->pc = 0x4C1EA8u;
            goto label_4c1ea8;
        }
    }
    ctx->pc = 0x4C1E6Cu;
    // 0x4c1e6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c1e70: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4c1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c1e74: 0xa4a223c4  sh          $v0, 0x23C4($a1)
    ctx->pc = 0x4c1e74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c1e78: 0xa4a3232e  sh          $v1, 0x232E($a1)
    ctx->pc = 0x4c1e78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9006), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c1e7c: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C1E7Cu;
    SET_GPR_U32(ctx, 31, 0x4C1E84u);
    ctx->pc = 0x4C1E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1E7Cu;
    // 0x4c1e80: 0xa4a0232c  sh          $zero, 0x232C($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C1E7Cu, 0x4C1E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1E84u;
label_4c1e84:
    // 0x4c1e84: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4C1E84u;
    SET_GPR_U32(ctx, 31, 0x4C1E8Cu);
    ctx->pc = 0x4C1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1E84u;
    // 0x4c1e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4C1E84u, 0x4C1E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1E8Cu;
label_4c1e8c:
    // 0x4c1e8c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C1E8Cu;
    SET_GPR_U32(ctx, 31, 0x4C1E94u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C1E8Cu, 0x4C1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1E94u;
label_4c1e94:
    // 0x4c1e94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c1e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c1e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c1e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1ea0: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C1EA0u;
    ctx->pc = 0x4C1EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1EA0u;
    // 0x4c1ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C1EA8u;
label_4c1ea8:
    // 0x4c1ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c1ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1eac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c1eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c1eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4C1EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EB0u;
        // 0x4c1eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C1EB8u;
}
