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

// Function: sub_004C2968
// Address: 0x4c2968 - 0x4c3d18
void sub_004C2968_0x4c2968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C2968_0x4c2968");
#endif

    switch (ctx->pc) {
        case 0x4c296cu: goto label_4c296c;
        case 0x4c2980u: goto label_4c2980;
        case 0x4c2af0u: goto label_4c2af0;
        case 0x4c2b6cu: goto label_4c2b6c;
        case 0x4c2b98u: goto label_4c2b98;
        case 0x4c2ba8u: goto label_4c2ba8;
        case 0x4c2bbcu: goto label_4c2bbc;
        case 0x4c2cb8u: goto label_4c2cb8;
        case 0x4c2d20u: goto label_4c2d20;
        case 0x4c2d64u: goto label_4c2d64;
        case 0x4c2dc8u: goto label_4c2dc8;
        case 0x4c2dd0u: goto label_4c2dd0;
        case 0x4c2e14u: goto label_4c2e14;
        case 0x4c2e80u: goto label_4c2e80;
        case 0x4c2f20u: goto label_4c2f20;
        case 0x4c3058u: goto label_4c3058;
        case 0x4c30b8u: goto label_4c30b8;
        case 0x4c30ccu: goto label_4c30cc;
        case 0x4c30dcu: goto label_4c30dc;
        case 0x4c30e4u: goto label_4c30e4;
        case 0x4c313cu: goto label_4c313c;
        case 0x4c32f8u: goto label_4c32f8;
        case 0x4c3308u: goto label_4c3308;
        case 0x4c336cu: goto label_4c336c;
        case 0x4c3374u: goto label_4c3374;
        case 0x4c3394u: goto label_4c3394;
        case 0x4c33a4u: goto label_4c33a4;
        case 0x4c33b8u: goto label_4c33b8;
        case 0x4c33e8u: goto label_4c33e8;
        case 0x4c37e4u: goto label_4c37e4;
        case 0x4c3878u: goto label_4c3878;
        case 0x4c3bc8u: goto label_4c3bc8;
        case 0x4c3cdcu: goto label_4c3cdc;
        default: break;
    }

    ctx->pc = 0x4c2968u;

    // 0x4c2968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c2968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c296c:
    // 0x4c296c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c296cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c2970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c2970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2974: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2974u;
        // 0x4c2978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C297Cu;
    // 0x4c297c: 0x0  nop
    ctx->pc = 0x4c297cu;
    // NOP
label_4c2980:
    // 0x4c2980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c2980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c2984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c2984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c2988: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4c2988u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4c298c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c2990: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4c2990u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4c2994: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c2994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c2998: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4c2998u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4c299c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c29a0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c29a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c29a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c29a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c29a8: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4c29a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4c29ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c29acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c29b0: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4c29b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4c29b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c29b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c29b8: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4c29b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4c29bc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c29bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c29c0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4c29c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c29c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c29c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4c29c8: 0x26d60ea4  addiu       $s6, $s6, 0xEA4
    ctx->pc = 0x4c29c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3748));
    // 0x4c29cc: 0x26940ea8  addiu       $s4, $s4, 0xEA8
    ctx->pc = 0x4c29ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3752));
    // 0x4c29d0: 0x26b50eac  addiu       $s5, $s5, 0xEAC
    ctx->pc = 0x4c29d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3756));
    // 0x4c29d4: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x4c29d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x4c29d8: 0x26520eb4  addiu       $s2, $s2, 0xEB4
    ctx->pc = 0x4c29d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3764));
    // 0x4c29dc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4c29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EA4u));
    // 0x4c29e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c29e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c29e4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c29e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c29e8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4c29e8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0EA8u));
    // 0x4c29ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c29ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c29f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c29f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c29f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c29f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c29f8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c29f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c29fc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4c29fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4c2a00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2a04: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4c2a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2a08: 0x26100e98  addiu       $s0, $s0, 0xE98
    ctx->pc = 0x4c2a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c2a0c: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x4c2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x4c2a10: 0x26730e9c  addiu       $s3, $s3, 0xE9C
    ctx->pc = 0x4c2a10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3740));
    // 0x4c2a14: 0x8e4c0000  lw          $t4, 0x0($s2)
    ctx->pc = 0x4c2a14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c2a18: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c2a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c2a1c: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4c2a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c2a20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c2a20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c2a24: 0x86cb0000  lh          $t3, 0x0($s6)
    ctx->pc = 0x4c2a24u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c2a28: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2a2c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c2a2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c2a30: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c2a30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c2a34: 0x258d000c  addiu       $t5, $t4, 0xC
    ctx->pc = 0x4c2a34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x4c2a38: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4c2a38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4c2a3c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c2a3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c2a40: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x4c2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x4c2a44: 0x868a0000  lh          $t2, 0x0($s4)
    ctx->pc = 0x4c2a44u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c2a48: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c2a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c2a4c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c2a4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c2a50: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2a54: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4c2a54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4c2a58: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4c2a58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4c2a5c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c2a5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c2a60: 0x8d820050  lw          $v0, 0x50($t4)
    ctx->pc = 0x4c2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x4c2a64: 0x86a90000  lh          $t1, 0x0($s5)
    ctx->pc = 0x4c2a64u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c2a68: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c2a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c2a6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c2a6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c2a70: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4c2a70u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4c2a74: 0x1715825  or          $t3, $t3, $s1
    ctx->pc = 0x4c2a74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 17));
    // 0x4c2a78: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x4c2a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x4c2a7c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4c2a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4c2a80: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x4c2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x4c2a84: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c2a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c2a88: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c2a88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c2a8c: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4c2a8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4c2a90: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4c2a90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4c2a94: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x4c2a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x4c2a98: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4c2a98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4c2a9c: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x4c2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x4c2aa0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c2aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c2aa4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c2aa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c2aa8: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c2aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c2aac: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x4c2aacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x4c2ab0: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4c2ab0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4c2ab4: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4c2ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4c2ab8: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4c2ab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c2abc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c2ac0: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4c2ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2ac4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c2ac8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4c2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4c2acc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c2accu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c2ad0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c2ad4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c2ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2ad8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4c2ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c2adc: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x4c2adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x4c2ae0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c2ae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c2ae4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c2ae8: 0xc12a878  jal         func_4AA1E0
    ctx->pc = 0x4C2AE8u;
    SET_GPR_U32(ctx, 31, 0x4C2AF0u);
    ctx->pc = 0x4C2AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2AE8u;
    // 0x4c2aec: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA1E0u, 0x4C2AE8u, 0x4C2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2AF0u;
label_4c2af0:
    // 0x4c2af0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4c2af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c2af4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c2af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2af8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x4c2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4c2afc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c2afcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c2b00: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c2b04: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c2b04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2b08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c2b0c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4c2b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4c2b10: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c2b10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c2b14: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c2b18: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c2b18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2b1c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4c2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c2b20: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4c2b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4c2b24: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c2b24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c2b28: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c2b2c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c2b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2b30: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4c2b30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c2b34: 0xa6e30164  sh          $v1, 0x164($s7)
    ctx->pc = 0x4c2b34u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c2b38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4c2b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2b3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4c2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c2b40: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x4c2b40u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c2b44: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c2b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c2b48: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x4c2b48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c2b4c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4c2b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4c2b50: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c2b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c2b54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4c2b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4c2b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2b5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c2b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c2b60: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4c2b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2b64: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4C2B64u;
    SET_GPR_U32(ctx, 31, 0x4C2B6Cu);
    ctx->pc = 0x4C2B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2B64u;
    // 0x4c2b68: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4C2B64u, 0x4C2B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2B6Cu;
label_4c2b6c:
    // 0x4c2b6c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c2b6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2b70: 0xa6e3011a  sh          $v1, 0x11A($s7)
    ctx->pc = 0x4c2b70u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c2b74: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c2b74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2b78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c2b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2b7c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c2b80: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2b84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2b88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c2b8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c2b90: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C2B90u;
    SET_GPR_U32(ctx, 31, 0x4C2B98u);
    ctx->pc = 0x4C2B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2B90u;
    // 0x4c2b94: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C2B90u, 0x4C2B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2B98u;
label_4c2b98:
    // 0x4c2b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2b9c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c2ba0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C2BA0u;
    SET_GPR_U32(ctx, 31, 0x4C2BA8u);
    ctx->pc = 0x4C2BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2BA0u;
    // 0x4c2ba4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C2BA0u, 0x4C2BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2BA8u;
label_4c2ba8:
    // 0x4c2ba8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c2ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2bac: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4c2bacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c2bb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c2bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2bb4: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4C2BB4u;
    SET_GPR_U32(ctx, 31, 0x4C2BBCu);
    ctx->pc = 0x4C2BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2BB4u;
    // 0x4c2bb8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4C2BB4u, 0x4C2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2BBCu;
label_4c2bbc:
    // 0x4c2bbc: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4c2bbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c2bc0: 0x86e201be  lh          $v0, 0x1BE($s7)
    ctx->pc = 0x4c2bc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 446)));
    // 0x4c2bc4: 0x26e501bc  addiu       $a1, $s7, 0x1BC
    ctx->pc = 0x4c2bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 444));
    // 0x4c2bc8: 0xa6e3011e  sh          $v1, 0x11E($s7)
    ctx->pc = 0x4c2bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 286), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c2bcc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2bd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c2bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2bd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4c2bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2bd8: 0x86a60000  lh          $a2, 0x0($s5)
    ctx->pc = 0x4c2bd8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c2bdc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c2bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c2be0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c2be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c2be4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c2be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c2be8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c2be8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c2bec: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c2becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c2bf0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c2bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c2bf4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c2bf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c2bf8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c2bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2bfc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c2bfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c2c00: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x4c2c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x4c2c04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c2c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c2c08: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2c0c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c2c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c2c10: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c2c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c2c14: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c2c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c2c18: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c2c18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2c1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c2c20: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c2c20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c2c24: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2c28: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c2c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c2c2c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c2c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c2c30: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c2c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c2c34: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c2c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2c38: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4c2c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4c2c3c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2c40: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c2c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c2c44: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c2c48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c2c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c2c4c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c2c4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2c50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c2c54: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c2c54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c2c58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c2c5c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4c2c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4c2c60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c2c64: 0x846370e8  lh          $v1, 0x70E8($v1)
    ctx->pc = 0x4c2c64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28904)));
    // 0x4c2c68: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c2c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c2c6c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c2c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c2c70: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c2c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c2c74: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c2c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c2c78: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c2c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2c7c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4c2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4c2c80: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c2c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c2c84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c2c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c2c88: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c2c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c2c8c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c2c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c2c90: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c2c90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c2c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2c98: 0xa6e30122  sh          $v1, 0x122($s7)
    ctx->pc = 0x4c2c98u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c2c9c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c2c9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c2ca0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c2ca0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c2ca4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c2ca8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4c2ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2cac: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2CACu;
        // 0x4c2cb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C2CB4u;
    // 0x4c2cb4: 0x0  nop
    ctx->pc = 0x4c2cb4u;
    // NOP
label_4c2cb8:
    // 0x4c2cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c2cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c2cbc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c2cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c2cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c2cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c2cc4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4c2cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2cc8: 0x24c60e98  addiu       $a2, $a2, 0xE98
    ctx->pc = 0x4c2cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3736));
    // 0x4c2ccc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c2cd0: 0x84e5015c  lh          $a1, 0x15C($a3)
    ctx->pc = 0x4c2cd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x4c2cd4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c2cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c2cd8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4c2cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4c2cdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2ce0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c2ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c2ce4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c2ce8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c2ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c2cec: 0x94e30162  lhu         $v1, 0x162($a3)
    ctx->pc = 0x4c2cecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 354)));
    // 0x4c2cf0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c2cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4c2cf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C2CF4u;
    {
        const bool branch_taken_0x4c2cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2CF4u;
        // 0x4c2cf8: 0x24e801bc  addiu       $t0, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2cf4) {
            ctx->pc = 0x4C2D08u;
            goto label_4c2d08;
        }
    }
    ctx->pc = 0x4C2CFCu;
    // 0x4c2cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c2cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2d00: 0x8130c42  j           func_4C3108
    ctx->pc = 0x4C2D00u;
    ctx->pc = 0x4C2D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2D00u;
    // 0x4c2d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3108u;
    goto label_4c3108;
    ctx->pc = 0x4C2D08u;
label_4c2d08:
    // 0x4c2d08: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c2d08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c2d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c2d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2d10: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c2d14: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4c2d14u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2d18: 0x8130b48  j           func_4C2D20
    ctx->pc = 0x4C2D18u;
    ctx->pc = 0x4C2D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2D18u;
    // 0x4c2d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C2D20u;
    goto label_4c2d20;
    ctx->pc = 0x4C2D20u;
label_4c2d20:
    // 0x4c2d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c2d24: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c2d28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c2d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c2d2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c2d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c2d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c2d34: 0x24420e98  addiu       $v0, $v0, 0xE98
    ctx->pc = 0x4c2d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3736));
    // 0x4c2d38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c2d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c2d3c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c2d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c2d40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c2d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c2d44: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x4c2d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x4c2d48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c2d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c2d4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c2d50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2d54: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c2d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c2d58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4c2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4c2d5c: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4C2D5Cu;
    SET_GPR_U32(ctx, 31, 0x4C2D64u);
    ctx->pc = 0x4C2D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2D5Cu;
    // 0x4c2d60: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4C2D5Cu, 0x4C2D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2D64u;
label_4c2d64:
    // 0x4c2d64: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4C2D64u;
    {
        const bool branch_taken_0x4c2d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2d64) {
            ctx->pc = 0x4C2D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2D64u;
            // 0x4c2d68: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2D90u;
            goto label_4c2d90;
        }
    }
    ctx->pc = 0x4C2D6Cu;
    // 0x4c2d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c2d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c2d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c2d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c2d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2d78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c2d78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2d7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c2d7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c2d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c2d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c2d84: 0x8130c42  j           func_4C3108
    ctx->pc = 0x4C2D84u;
    ctx->pc = 0x4C2D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2D84u;
    // 0x4c2d88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3108u;
    goto label_4c3108;
    ctx->pc = 0x4C2D8Cu;
    // 0x4c2d8c: 0x0  nop
    ctx->pc = 0x4c2d8cu;
    // NOP
label_4c2d90:
    // 0x4c2d90: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c2d94: 0x24440eb0  addiu       $a0, $v0, 0xEB0
    ctx->pc = 0x4c2d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x4c2d98: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x4c2d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x4c2d9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c2da0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c2da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c2da4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c2da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c2da8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c2da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c2dac: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4c2dacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c2db0: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4C2DB0u;
    {
        const bool branch_taken_0x4c2db0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4c2db0) {
            ctx->pc = 0x4C2E0Cu;
            goto label_4c2e0c;
        }
    }
    ctx->pc = 0x4C2DB8u;
    // 0x4c2db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c2db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2dbc: 0x24130035  addiu       $s3, $zero, 0x35
    ctx->pc = 0x4c2dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x4c2dc0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c2dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4c2dc4: 0x0  nop
    ctx->pc = 0x4c2dc4u;
    // NOP
label_4c2dc8:
    // 0x4c2dc8: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4C2DC8u;
    SET_GPR_U32(ctx, 31, 0x4C2DD0u);
    ctx->pc = 0x4C2DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2DC8u;
    // 0x4c2dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4C2DC8u, 0x4C2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2DD0u;
label_4c2dd0:
    // 0x4c2dd0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4c2dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2dd4: 0xa4f30008  sh          $s3, 0x8($a3)
    ctx->pc = 0x4c2dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x4c2dd8: 0xacf10140  sw          $s1, 0x140($a3)
    ctx->pc = 0x4c2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 17));
    // 0x4c2ddc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c2ddcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2de0: 0xa4e201be  sh          $v0, 0x1BE($a3)
    ctx->pc = 0x4c2de0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 446), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2de4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4c2de4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2de8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4c2de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2dec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c2decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4c2df0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c2df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c2df4: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4c2df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4c2df8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c2df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c2dfc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c2e00: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c2e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2e04: 0x441fff0  bgez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4C2E04u;
    {
        const bool branch_taken_0x4c2e04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4c2e04) {
            ctx->pc = 0x4C2DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c2dc8;
        }
    }
    ctx->pc = 0x4C2E0Cu;
label_4c2e0c:
    // 0x4c2e0c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4C2E0Cu;
    SET_GPR_U32(ctx, 31, 0x4C2E14u);
    ctx->pc = 0x4C2E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2E0Cu;
    // 0x4c2e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4C2E0Cu, 0x4C2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2E14u;
label_4c2e14:
    // 0x4c2e14: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x4c2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x4c2e18: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4c2e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2e1c: 0x24020482  addiu       $v0, $zero, 0x482
    ctx->pc = 0x4c2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1154));
    // 0x4c2e20: 0x2404041d  addiu       $a0, $zero, 0x41D
    ctx->pc = 0x4c2e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1053));
    // 0x4c2e24: 0xa4e30008  sh          $v1, 0x8($a3)
    ctx->pc = 0x4c2e24u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c2e28: 0xa4e4015e  sh          $a0, 0x15E($a3)
    ctx->pc = 0x4c2e28u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 350), (uint16_t)GPR_U32(ctx, 4));
    // 0x4c2e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c2e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2e30: 0xacf10140  sw          $s1, 0x140($a3)
    ctx->pc = 0x4c2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 17));
    // 0x4c2e34: 0x2625015e  addiu       $a1, $s1, 0x15E
    ctx->pc = 0x4c2e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4c2e38: 0xa4e20160  sh          $v0, 0x160($a3)
    ctx->pc = 0x4c2e38u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2e3c: 0x2406041e  addiu       $a2, $zero, 0x41E
    ctx->pc = 0x4c2e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1054));
    // 0x4c2e40: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4c2e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4c2e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c2e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2e48: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c2e48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c2e4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c2e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2e50: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x4c2e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x4c2e54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c2e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c2e58: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4c2e58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2e5c: 0xa626000c  sh          $a2, 0xC($s1)
    ctx->pc = 0x4c2e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c2e60: 0xa6200158  sh          $zero, 0x158($s1)
    ctx->pc = 0x4c2e60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c2e64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c2e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c2e68: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c2e68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c2e6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c2e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c2e70: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c2e74: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c2e74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2e78: 0x8130ba0  j           func_4C2E80
    ctx->pc = 0x4C2E78u;
    ctx->pc = 0x4C2E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2E78u;
    // 0x4c2e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C2E80u;
    goto label_4c2e80;
    ctx->pc = 0x4C2E80u;
label_4c2e80:
    // 0x4c2e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c2e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c2e84: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c2e84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c2e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c2e8c: 0x2507013a  addiu       $a3, $t0, 0x13A
    ctx->pc = 0x4c2e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 314));
    // 0x4c2e90: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c2e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c2e94: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c2e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c2e98: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c2e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c2e9c: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x4c2e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
    // 0x4c2ea0: 0x2509015e  addiu       $t1, $t0, 0x15E
    ctx->pc = 0x4c2ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 350));
    // 0x4c2ea4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4c2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4c2ea8: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4c2ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2eac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c2eb0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c2eb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c2eb4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c2eb8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c2eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c2ebc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2ec0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c2ec4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c2ec8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c2ec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c2ecc: 0x2c420900  sltiu       $v0, $v0, 0x900
    ctx->pc = 0x4c2eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2304) ? 1 : 0);
    // 0x4c2ed0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C2ED0u;
    {
        const bool branch_taken_0x4c2ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2ED0u;
        // 0x4c2ed4: 0x250a01bc  addiu       $t2, $t0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2ed0) {
            ctx->pc = 0x4C2EE8u;
            goto label_4c2ee8;
        }
    }
    ctx->pc = 0x4C2ED8u;
    // 0x4c2ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c2ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2edc: 0x8130c42  j           func_4C3108
    ctx->pc = 0x4C2EDCu;
    ctx->pc = 0x4C2EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2EDCu;
    // 0x4c2ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3108u;
    goto label_4c3108;
    ctx->pc = 0x4C2EE4u;
    // 0x4c2ee4: 0x0  nop
    ctx->pc = 0x4c2ee4u;
    // NOP
label_4c2ee8:
    // 0x4c2ee8: 0x24030900  addiu       $v1, $zero, 0x900
    ctx->pc = 0x4c2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x4c2eec: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x4c2eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x4c2ef0: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4c2ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c2ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c2ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2ef8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4c2ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c2efc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4c2efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4c2f00: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4c2f00u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2f04: 0xa5050160  sh          $a1, 0x160($t0)
    ctx->pc = 0x4c2f04u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 352), (uint16_t)GPR_U32(ctx, 5));
    // 0x4c2f08: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c2f08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c2f0c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c2f10: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4c2f10u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2f14: 0x8130bc8  j           func_4C2F20
    ctx->pc = 0x4C2F14u;
    ctx->pc = 0x4C2F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2F14u;
    // 0x4c2f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C2F20u;
    goto label_4c2f20;
    ctx->pc = 0x4C2F1Cu;
    // 0x4c2f1c: 0x0  nop
    ctx->pc = 0x4c2f1cu;
    // NOP
label_4c2f20:
    // 0x4c2f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c2f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c2f24: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c2f24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c2f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c2f2c: 0x25020160  addiu       $v0, $t0, 0x160
    ctx->pc = 0x4c2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 352));
    // 0x4c2f30: 0x2509015e  addiu       $t1, $t0, 0x15E
    ctx->pc = 0x4c2f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 350));
    // 0x4c2f34: 0x250a01bc  addiu       $t2, $t0, 0x1BC
    ctx->pc = 0x4c2f34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
    // 0x4c2f38: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c2f38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c2f3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4c2f40: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4c2f40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c2f44: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C2F44u;
    {
        const bool branch_taken_0x4c2f44 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4C2F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2F44u;
        // 0x4c2f48: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2f44) {
            ctx->pc = 0x4C2F58u;
            goto label_4c2f58;
        }
    }
    ctx->pc = 0x4C2F4Cu;
    // 0x4c2f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c2f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2f50: 0x8130c42  j           func_4C3108
    ctx->pc = 0x4C2F50u;
    ctx->pc = 0x4C2F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2F50u;
    // 0x4c2f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3108u;
    goto label_4c3108;
    ctx->pc = 0x4C2F58u;
label_4c2f58:
    // 0x4c2f58: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c2f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c2f5c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4c2f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c2f60: 0x24c60e98  addiu       $a2, $a2, 0xE98
    ctx->pc = 0x4c2f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3736));
    // 0x4c2f64: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c2f64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c2f68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c2f6c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c2f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c2f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c2f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2f74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2f78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c2f7c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c2f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c2f80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2f84: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c2f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c2f88: 0x3042bff9  andi        $v0, $v0, 0xBFF9
    ctx->pc = 0x4c2f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49145);
    // 0x4c2f8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c2f90: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c2f90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c2f94: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c2f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c2f98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c2f9c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c2fa0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c2fa4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c2fa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c2fa8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4c2fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4c2fac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c2facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c2fb0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c2fb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c2fb4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c2fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c2fb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c2fbc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c2fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c2fc0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c2fc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c2fc4: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4c2fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2fc8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c2fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c2fcc: 0x850201be  lh          $v0, 0x1BE($t0)
    ctx->pc = 0x4c2fccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 446)));
    // 0x4c2fd0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c2fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c2fd4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c2fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c2fd8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c2fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c2fdc: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c2fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c2fe0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c2fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c2fe4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c2fe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c2fe8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4c2fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4c2fec: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c2fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c2ff0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c2ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c2ff4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c2ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c2ff8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c2ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c2ffc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c2ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c3000: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c3000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c3004: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c3004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c3008: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c3008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c300c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c300cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c3010: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c3010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c3014: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c3014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c3018: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c3018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c301c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c301cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c3020: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c3020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c3024: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4c3024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4c3028: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c3028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c302c: 0x846370e0  lh          $v1, 0x70E0($v1)
    ctx->pc = 0x4c302cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28896)));
    // 0x4c3030: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4c3030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4c3034: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c3034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c3038: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c3038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c303c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4c303cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c3040: 0xa5030158  sh          $v1, 0x158($t0)
    ctx->pc = 0x4c3040u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c3044: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c3044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c3048: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c3048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c304c: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4c304cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3050: 0x8130c16  j           func_4C3058
    ctx->pc = 0x4C3050u;
    ctx->pc = 0x4C3054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3050u;
    // 0x4c3054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3058u;
    goto label_4c3058;
    ctx->pc = 0x4C3058u;
label_4c3058:
    // 0x4c3058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c3058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c305c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c305cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c3060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c3060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c3064: 0x24c60e98  addiu       $a2, $a2, 0xE98
    ctx->pc = 0x4c3064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3736));
    // 0x4c3068: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4c3068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c306c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c306cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c3070: 0x84e5015c  lh          $a1, 0x15C($a3)
    ctx->pc = 0x4c3070u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x4c3074: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c3074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c3078: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4c3078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4c307c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c307cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c3080: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4c3080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4c3084: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c3084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4c3088: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4c3088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c308c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C308Cu;
    {
        const bool branch_taken_0x4c308c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4C3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C308Cu;
        // 0x4c3090: 0x24e701bc  addiu       $a3, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c308c) {
            ctx->pc = 0x4C30A0u;
            goto label_4c30a0;
        }
    }
    ctx->pc = 0x4C3094u;
    // 0x4c3094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c3094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c3098: 0x8130c42  j           func_4C3108
    ctx->pc = 0x4C3098u;
    ctx->pc = 0x4C309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3098u;
    // 0x4c309c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3108u;
    goto label_4c3108;
    ctx->pc = 0x4C30A0u;
label_4c30a0:
    // 0x4c30a0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c30a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c30a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c30a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c30a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c30ac: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4c30acu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c30b0: 0x8130c2e  j           func_4C30B8
    ctx->pc = 0x4C30B0u;
    ctx->pc = 0x4C30B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C30B0u;
    // 0x4c30b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C30B8u;
    goto label_4c30b8;
    ctx->pc = 0x4C30B8u;
label_4c30b8:
    // 0x4c30b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c30b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c30bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c30bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c30c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c30c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c30c4: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C30C4u;
    SET_GPR_U32(ctx, 31, 0x4C30CCu);
    ctx->pc = 0x4C30C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C30C4u;
    // 0x4c30c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C30C4u, 0x4C30CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C30CCu;
label_4c30cc:
    // 0x4c30cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C30CCu;
    {
        const bool branch_taken_0x4c30cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C30CCu;
        // 0x4c30d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c30cc) {
            ctx->pc = 0x4C30F8u;
            goto label_4c30f8;
        }
    }
    ctx->pc = 0x4C30D4u;
    // 0x4c30d4: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4C30D4u;
    SET_GPR_U32(ctx, 31, 0x4C30DCu);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4C30D4u, 0x4C30DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C30DCu;
label_4c30dc:
    // 0x4c30dc: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4C30DCu;
    SET_GPR_U32(ctx, 31, 0x4C30E4u);
    ctx->pc = 0x4C30E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C30DCu;
    // 0x4c30e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4C30DCu, 0x4C30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C30E4u;
label_4c30e4:
    // 0x4c30e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c30e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c30e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c30e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c30ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c30ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c30f0: 0x8130d7a  j           func_4C35E8
    ctx->pc = 0x4C30F0u;
    ctx->pc = 0x4C30F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C30F0u;
    // 0x4c30f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C35E8u;
    goto label_4c35e8;
    ctx->pc = 0x4C30F8u;
label_4c30f8:
    // 0x4c30f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c30f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c30fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c30fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c3100: 0x3e00008  jr          $ra
    ctx->pc = 0x4C3100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3100u;
        // 0x4c3104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C3100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C3108u;
label_4c3108:
    // 0x4c3108: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c3108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c310c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c3110: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4c3110u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4c3114: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c3114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c3118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c3118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c311c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c311cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c3120: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c3120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c3124: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c3124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c3128: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c3128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c312c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c312cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c3130: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c3130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4c3134: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4C3134u;
    SET_GPR_U32(ctx, 31, 0x4C313Cu);
    ctx->pc = 0x4C3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3134u;
    // 0x4c3138: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4C3134u, 0x4C313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C313Cu;
label_4c313c:
    // 0x4c313c: 0x26040e98  addiu       $a0, $s0, 0xE98
    ctx->pc = 0x4c313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c3140: 0x26ad015a  addiu       $t5, $s5, 0x15A
    ctx->pc = 0x4c3140u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), 346));
    // 0x4c3144: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4c3144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c3148: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c3148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c314c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c3150: 0x26ab0158  addiu       $t3, $s5, 0x158
    ctx->pc = 0x4c3150u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 344));
    // 0x4c3154: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c3154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c3158: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c3158u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c315c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c315cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3160: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3164: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c3164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c3168: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c3168u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c316c: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4c316cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c3170: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c3170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c3174: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c3174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c3178: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C3178u;
    {
        const bool branch_taken_0x4c3178 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3178u;
        // 0x4c317c: 0x25850e9c  addiu       $a1, $t4, 0xE9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 3740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3178) {
            ctx->pc = 0x4C3190u;
            goto label_4c3190;
        }
    }
    ctx->pc = 0x4C3180u;
    // 0x4c3180: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c3180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c3184: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C3184u;
    {
        const bool branch_taken_0x4c3184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3184u;
        // 0x4c3188: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3184) {
            ctx->pc = 0x4C3198u;
            goto label_4c3198;
        }
    }
    ctx->pc = 0x4C318Cu;
    // 0x4c318c: 0x0  nop
    ctx->pc = 0x4c318cu;
    // NOP
label_4c3190:
    // 0x4c3190: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c3190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c3194: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4c3194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4c3198:
    // 0x4c3198: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c3198u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c319c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c31a0: 0x25ca0ea0  addiu       $t2, $t6, 0xEA0
    ctx->pc = 0x4c31a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 3744));
    // 0x4c31a4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4c31a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4c31a8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c31a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EA0u));
    // 0x4c31ac: 0x26080e98  addiu       $t0, $s0, 0xE98
    ctx->pc = 0x4c31acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c31b0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c31b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4c31b4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4c31b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4c31b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c31b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c31bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c31bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c31c0: 0x95870e9c  lhu         $a3, 0xE9C($t4)
    ctx->pc = 0x4c31c0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 3740)));
    // 0x4c31c4: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4c31c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c31c8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c31cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c31ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c31d0: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4c31d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c31d4: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c31d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c31d8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4c31d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4c31dc: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4c31dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c31e0: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4c31e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4c31e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c31e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c31e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c31e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c31ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c31ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c31f0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c31f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c31f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c31f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c31f8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c31f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c31fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c31fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3200: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c3200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c3204: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c3204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c3208: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c3208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c320c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4c320cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3210: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4c3210u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4c3214: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c3214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c3218: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c3218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c321c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4c321cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4c3220: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4c3220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4c3224: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4c3224u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4c3228: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c3228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c322c: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4c322cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c3230: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c3230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c3234: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c3234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c3238: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C3238u;
    {
        const bool branch_taken_0x4c3238 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3238u;
        // 0x4c323c: 0x348700ff  ori         $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3238) {
            ctx->pc = 0x4C3248u;
            goto label_4c3248;
        }
    }
    ctx->pc = 0x4C3240u;
    // 0x4c3240: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c3240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c3244: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x4c3244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4c3248:
    // 0x4c3248: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4c3248u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4c324c: 0x25d70ea0  addiu       $s7, $t6, 0xEA0
    ctx->pc = 0x4c324cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 14), 3744));
    // 0x4c3250: 0x25960e9c  addiu       $s6, $t4, 0xE9C
    ctx->pc = 0x4c3250u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 12), 3740));
    // 0x4c3254: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4c3254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c3258: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4c3258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c325c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x4c325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c3260: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4c3260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c3264: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4c3264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4c3268: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4c3268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c326c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c326cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c3270: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4c3270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4c3274: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C3274u;
    {
        const bool branch_taken_0x4c3274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3274u;
        // 0x4c3278: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3274) {
            ctx->pc = 0x4C329Cu;
            goto label_4c329c;
        }
    }
    ctx->pc = 0x4C327Cu;
    // 0x4c327c: 0x26050e98  addiu       $a1, $s0, 0xE98
    ctx->pc = 0x4c327cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c3280: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x4c3280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c3284: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c3284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c3288: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c3288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c328c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4c328cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4c3290: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c3290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c3294: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c3294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c3298: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c3298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4c329c:
    // 0x4c329c: 0x26100e98  addiu       $s0, $s0, 0xE98
    ctx->pc = 0x4c329cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3736));
    // 0x4c32a0: 0x26a5015c  addiu       $a1, $s5, 0x15C
    ctx->pc = 0x4c32a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 348));
    // 0x4c32a4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c32a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c32a8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4c32a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4c32ac: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4c32acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4c32b0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c32b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c32b4: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4c32b4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c32b8: 0x26940ea4  addiu       $s4, $s4, 0xEA4
    ctx->pc = 0x4c32b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3748));
    // 0x4c32bc: 0x26730ea8  addiu       $s3, $s3, 0xEA8
    ctx->pc = 0x4c32bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3752));
    // 0x4c32c0: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4c32c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4c32c4: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4c32c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c32c8: 0x26520eac  addiu       $s2, $s2, 0xEAC
    ctx->pc = 0x4c32c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3756));
    // 0x4c32cc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4c32ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c32d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4c32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c32d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4c32d8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c32d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c32dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c32dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c32e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c32e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c32e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c32e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c32e8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c32e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c32ec: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4c32ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c32f0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C32F0u;
    SET_GPR_U32(ctx, 31, 0x4C32F8u);
    ctx->pc = 0x4C32F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C32F0u;
    // 0x4c32f4: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C32F0u, 0x4C32F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C32F8u;
label_4c32f8:
    // 0x4c32f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c32f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c32fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c32fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c3300: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C3300u;
    SET_GPR_U32(ctx, 31, 0x4C3308u);
    ctx->pc = 0x4C3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3300u;
    // 0x4c3304: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C3300u, 0x4C3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3308u;
label_4c3308:
    // 0x4c3308: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x4c3308u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x4c330c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c330cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3310: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4c3310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c3314: 0x86a2011e  lh          $v0, 0x11E($s5)
    ctx->pc = 0x4c3314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 286)));
    // 0x4c3318: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c3318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c331c: 0x86c60000  lh          $a2, 0x0($s6)
    ctx->pc = 0x4c331cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c3320: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c3320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c3324: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4c3324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c3328: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c332c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c332cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c3330: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c3330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c3334: 0x86a20122  lh          $v0, 0x122($s5)
    ctx->pc = 0x4c3334u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 290)));
    // 0x4c3338: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4c3338u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c333c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c3340: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4c3340u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c3344: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c3344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c3348: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4c3348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4c334c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x4c334cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4c3350: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c3350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c3354: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4c3354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4c3358: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4c3358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4c335c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c335cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c3360: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c3360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c3364: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C3364u;
    SET_GPR_U32(ctx, 31, 0x4C336Cu);
    ctx->pc = 0x4C3368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3364u;
    // 0x4c3368: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C3364u, 0x4C336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C336Cu;
label_4c336c:
    // 0x4c336c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C336Cu;
    SET_GPR_U32(ctx, 31, 0x4C3374u);
    ctx->pc = 0x4C3370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C336Cu;
    // 0x4c3370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C336Cu, 0x4C3374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3374u;
label_4c3374:
    // 0x4c3374: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c3374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c3378: 0x86a2011a  lh          $v0, 0x11A($s5)
    ctx->pc = 0x4c3378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 282)));
    // 0x4c337c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c337cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3380: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c3380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c3384: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3388: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c3388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c338c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C338Cu;
    SET_GPR_U32(ctx, 31, 0x4C3394u);
    ctx->pc = 0x4C3390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C338Cu;
    // 0x4c3390: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C338Cu, 0x4C3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3394u;
label_4c3394:
    // 0x4c3394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3398: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c3398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c339c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C339Cu;
    SET_GPR_U32(ctx, 31, 0x4C33A4u);
    ctx->pc = 0x4C33A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C339Cu;
    // 0x4c33a0: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C339Cu, 0x4C33A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C33A4u;
label_4c33a4:
    // 0x4c33a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c33a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c33a8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4c33a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c33ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c33acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c33b0: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4C33B0u;
    SET_GPR_U32(ctx, 31, 0x4C33B8u);
    ctx->pc = 0x4C33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C33B0u;
    // 0x4c33b4: 0x8ec70000  lw          $a3, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4C33B0u, 0x4C33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C33B8u;
label_4c33b8:
    // 0x4c33b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c33bc: 0x86a70164  lh          $a3, 0x164($s5)
    ctx->pc = 0x4c33bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 356)));
    // 0x4c33c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c33c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c33c4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c33c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c33c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c33c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c33cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c33ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c33d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4c33d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c33d4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4c33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4c33d8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c33d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c33dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c33dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c33e0: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4C33E0u;
    SET_GPR_U32(ctx, 31, 0x4C33E8u);
    ctx->pc = 0x4C33E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C33E0u;
    // 0x4c33e4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4C33E0u, 0x4C33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C33E8u;
label_4c33e8:
    // 0x4c33e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c33ec: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4c33ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c33f0: 0x26aa0124  addiu       $t2, $s5, 0x124
    ctx->pc = 0x4c33f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
    // 0x4c33f4: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x4c33f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c33f8: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4c33f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4c33fc: 0x96870000  lhu         $a3, 0x0($s4)
    ctx->pc = 0x4c33fcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c3400: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4c3400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4c3404: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4c3404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c3408: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4c3408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4c340c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4c340cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c3410: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4c3410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4c3414: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4c3414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4c3418: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c3418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c341c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x4c341cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4c3420: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x4c3420u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x4c3424: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x4c3424u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x4c3428: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c3428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c342c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c342cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3430: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c3430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c3434: 0x86a40130  lh          $a0, 0x130($s5)
    ctx->pc = 0x4c3434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x4c3438: 0x26ab0128  addiu       $t3, $s5, 0x128
    ctx->pc = 0x4c3438u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 296));
    // 0x4c343c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c343cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c3440: 0x26a9012c  addiu       $t1, $s5, 0x12C
    ctx->pc = 0x4c3440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 300));
    // 0x4c3444: 0x86c70000  lh          $a3, 0x0($s6)
    ctx->pc = 0x4c3444u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c3448: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c3448u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c344c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c344cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c3450: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4c3450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3454: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c3454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c3458: 0x86e80000  lh          $t0, 0x0($s7)
    ctx->pc = 0x4c3458u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c345c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c345cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3460: 0x26ad0010  addiu       $t5, $s5, 0x10
    ctx->pc = 0x4c3460u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4c3464: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c3464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c3468: 0x26ae0014  addiu       $t6, $s5, 0x14
    ctx->pc = 0x4c3468u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4c346c: 0x26af0018  addiu       $t7, $s5, 0x18
    ctx->pc = 0x4c346cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4c3470: 0x86a20132  lh          $v0, 0x132($s5)
    ctx->pc = 0x4c3470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 306)));
    // 0x4c3474: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c3474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c3478: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4c3478u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c347c: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4c347cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4c3480: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c3480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c3484: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4c3484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4c3488: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c3488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c348c: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x4c348cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x4c3490: 0x86a20134  lh          $v0, 0x134($s5)
    ctx->pc = 0x4c3490u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 308)));
    // 0x4c3494: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c3494u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c3498: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4c3498u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4c349c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4c349cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4c34a0: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x4c34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x4c34a4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4c34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c34a8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c34a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c34ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c34acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c34b0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4c34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4c34b4: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4c34b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c34b8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4c34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c34bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c34c0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c34c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c34c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c34c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c34c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c34c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c34cc: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4c34ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4c34d0: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x4c34d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c34d4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4c34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c34d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c34dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c34dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c34e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c34e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c34e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c34e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c34e8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4c34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4c34ec: 0x8d880eb4  lw          $t0, 0xEB4($t4)
    ctx->pc = 0x4c34ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 3764)));
    // 0x4c34f0: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4c34f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c34f4: 0x8d020050  lw          $v0, 0x50($t0)
    ctx->pc = 0x4c34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x4c34f8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4c34f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c34fc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c34fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c3500: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4c3500u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c3504: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c3504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c3508: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c3508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c350c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c350cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c3510: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4c3510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c3514: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c3514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c3518: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c3518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c351c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c351cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c3520: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4c3520u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4c3524: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x4c3524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x4c3528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c3528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c352c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c3530: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c3530u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c3534: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c3534u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c3538: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c3538u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c353c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4c353cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c3540: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c3540u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c3544: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4c3544u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4c3548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c3548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c354c: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4c354cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4c3550: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4c3550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4c3554: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x4c3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x4c3558: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4c3558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c355c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c3560: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4c3560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c3564: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c3564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c3568: 0x96860000  lhu         $a2, 0x0($s4)
    ctx->pc = 0x4c3568u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c356c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c356cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c3570: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c3570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c3574: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c3574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c3578: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4c3578u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4c357c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c357cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c3580: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c3580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c3584: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4c3584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4c3588: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c3588u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c358c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4c358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c3590: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c3590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c3594: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4c3594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4c3598: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4c3598u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4c359c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4c359cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c35a0: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4c35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c35a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c35a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c35a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c35a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c35ac: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c35acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c35b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c35b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c35b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c35b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c35b8: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4c35b8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4c35bc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4c35bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c35c0: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4c35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c35c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c35c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c35c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c35c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c35cc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c35ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c35d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c35d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c35d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c35d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c35d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c35d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c35dc: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4c35dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4c35e0: 0x8130d7a  j           func_4C35E8
    ctx->pc = 0x4C35E0u;
    ctx->pc = 0x4C35E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C35E0u;
    // 0x4c35e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C35E8u;
    goto label_4c35e8;
    ctx->pc = 0x4C35E8u;
label_4c35e8:
    // 0x4c35e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c35e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c35ec: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c35ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c35f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c35f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c35f4: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x4c35f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
    // 0x4c35f8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c35f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c35fc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4c35fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c3600: 0x8482015e  lh          $v0, 0x15E($a0)
    ctx->pc = 0x4c3600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 350)));
    // 0x4c3604: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c3604u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c3608: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c3608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c360c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c360cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3610: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3614: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c3614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c3618: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c3618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c361c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c361cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c3620: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4c3620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x4c3624: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c3624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c3628: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c362c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c362cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c3630: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4c3630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c3634: 0x10670010  beq         $v1, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C3634u;
    {
        const bool branch_taken_0x4c3634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x4C3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3634u;
        // 0x4c3638: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3634) {
            ctx->pc = 0x4C3678u;
            goto label_4c3678;
        }
    }
    ctx->pc = 0x4C363Cu;
    // 0x4c363c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C363Cu;
    {
        const bool branch_taken_0x4c363c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c363c) {
            ctx->pc = 0x4C3640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C363Cu;
            // 0x4c3640: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3658u;
            goto label_4c3658;
        }
    }
    ctx->pc = 0x4C3644u;
    // 0x4c3644: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4C3644u;
    {
        const bool branch_taken_0x4c3644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3644u;
        // 0x4c3648: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3644) {
            ctx->pc = 0x4C3670u;
            goto label_4c3670;
        }
    }
    ctx->pc = 0x4C364Cu;
    // 0x4c364c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4C364Cu;
    {
        const bool branch_taken_0x4c364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c364c) {
            ctx->pc = 0x4C36A0u;
            goto label_4c36a0;
        }
    }
    ctx->pc = 0x4C3654u;
    // 0x4c3654: 0x0  nop
    ctx->pc = 0x4c3654u;
    // NOP
label_4c3658:
    // 0x4c3658: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4C3658u;
    {
        const bool branch_taken_0x4c3658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3658u;
        // 0x4c365c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3658) {
            ctx->pc = 0x4C3688u;
            goto label_4c3688;
        }
    }
    ctx->pc = 0x4C3660u;
    // 0x4c3660: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4C3660u;
    {
        const bool branch_taken_0x4c3660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3660u;
        // 0x4c3664: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3660) {
            ctx->pc = 0x4C3698u;
            goto label_4c3698;
        }
    }
    ctx->pc = 0x4C3668u;
    // 0x4c3668: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4C3668u;
    {
        const bool branch_taken_0x4c3668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3668) {
            ctx->pc = 0x4C36A0u;
            goto label_4c36a0;
        }
    }
    ctx->pc = 0x4C3670u;
label_4c3670:
    // 0x4c3670: 0x8130daa  j           func_4C36A8
    ctx->pc = 0x4C3670u;
    ctx->pc = 0x4C3674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3670u;
    // 0x4c3674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C36A8u;
    goto label_4c36a8;
    ctx->pc = 0x4C3678u;
label_4c3678:
    // 0x4c3678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c3678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c367c: 0x8130e04  j           func_4C3810
    ctx->pc = 0x4C367Cu;
    ctx->pc = 0x4C3680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C367Cu;
    // 0x4c3680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3810u;
    goto label_4c3810;
    ctx->pc = 0x4C3684u;
    // 0x4c3684: 0x0  nop
    ctx->pc = 0x4c3684u;
    // NOP
label_4c3688:
    // 0x4c3688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c3688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c368c: 0x8130ede  j           func_4C3B78
    ctx->pc = 0x4C368Cu;
    ctx->pc = 0x4C3690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C368Cu;
    // 0x4c3690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3B78u;
    goto label_4c3b78;
    ctx->pc = 0x4C3694u;
    // 0x4c3694: 0x0  nop
    ctx->pc = 0x4c3694u;
    // NOP
label_4c3698:
    // 0x4c3698: 0x8130ede  j           func_4C3B78
    ctx->pc = 0x4C3698u;
    ctx->pc = 0x4C369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3698u;
    // 0x4c369c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3B78u;
    goto label_4c3b78;
    ctx->pc = 0x4C36A0u;
label_4c36a0:
    // 0x4c36a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4C36A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C36A0u;
        // 0x4c36a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C36A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C36A8u;
label_4c36a8:
    // 0x4c36a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c36a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c36ac: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c36acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c36b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c36b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c36b4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4c36b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4c36b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c36b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c36bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c36bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c36c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c36c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c36c4: 0x256b0ea4  addiu       $t3, $t3, 0xEA4
    ctx->pc = 0x4c36c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3748));
    // 0x4c36c8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4c36c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4c36cc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c36ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c36d0: 0x86220126  lh          $v0, 0x126($s1)
    ctx->pc = 0x4c36d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 294)));
    // 0x4c36d4: 0x24e70ea8  addiu       $a3, $a3, 0xEA8
    ctx->pc = 0x4c36d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3752));
    // 0x4c36d8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4c36d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0EA4u));
    // 0x4c36dc: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4c36dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4c36e0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c36e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c36e4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4c36e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0EA8u));
    // 0x4c36e8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c36e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c36ec: 0x254a0eac  addiu       $t2, $t2, 0xEAC
    ctx->pc = 0x4c36ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3756));
    // 0x4c36f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c36f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c36f4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c36f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c36f8: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4c36f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4c36fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c36fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c3700: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4c3700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4c3704: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x4c3704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x4c3708: 0x260e2494  addiu       $t6, $s0, 0x2494
    ctx->pc = 0x4c3708u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4c370c: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4c370cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c3710: 0x260d2498  addiu       $t5, $s0, 0x2498
    ctx->pc = 0x4c3710u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4c3714: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4c3714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4c3718: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x4c3718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c371c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c371cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c3720: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4c3720u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4c3724: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c3724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c3728: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4c3728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4c372c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c372cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c3730: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c3730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c3734: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4c3734u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4c3738: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c3738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c373c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c373cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c3740: 0x260c249c  addiu       $t4, $s0, 0x249C
    ctx->pc = 0x4c3740u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4c3744: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x4c3744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x4c3748: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4c3748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c374c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4c374cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4c3750: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4c3750u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4c3754: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c3754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c3758: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4c3758u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4c375c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c375cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c3760: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4c3760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4c3764: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c3764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c3768: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c3768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c376c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x4c376cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x4c3770: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c3770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c3774: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4c3774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4c3778: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c3778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c377c: 0x95680000  lhu         $t0, 0x0($t3)
    ctx->pc = 0x4c377cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c3780: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c3780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c3784: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x4c3784u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c3788: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c3788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c378c: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x4c378cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c3790: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c3790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c3794: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x4c3794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c3798: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x4c3798u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x4c379c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4c379cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4c37a0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4c37a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4c37a4: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x4c37a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4c37a8: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c37a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c37ac: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c37acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c37b0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4c37b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c37b4: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4c37b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4c37b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c37bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c37bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c37c0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4c37c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4c37c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c37c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c37c8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4c37c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4c37cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c37ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c37d0: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4c37d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4c37d4: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x4c37d4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x4c37d8: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x4c37d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x4c37dc: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4C37DCu;
    SET_GPR_U32(ctx, 31, 0x4C37E4u);
    ctx->pc = 0x4C37E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C37DCu;
    // 0x4c37e0: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4C37DCu, 0x4C37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C37E4u;
label_4c37e4:
    // 0x4c37e4: 0x960324a0  lhu         $v1, 0x24A0($s0)
    ctx->pc = 0x4c37e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9376)));
    // 0x4c37e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c37e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c37ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c37ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c37f0: 0xa6230118  sh          $v1, 0x118($s1)
    ctx->pc = 0x4c37f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c37f4: 0x960224a2  lhu         $v0, 0x24A2($s0)
    ctx->pc = 0x4c37f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4c37f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c37f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c37fc: 0xa622011c  sh          $v0, 0x11C($s1)
    ctx->pc = 0x4c37fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c3800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c3804: 0x8130ede  j           func_4C3B78
    ctx->pc = 0x4C3804u;
    ctx->pc = 0x4C3808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3804u;
    // 0x4c3808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3B78u;
    goto label_4c3b78;
    ctx->pc = 0x4C380Cu;
    // 0x4c380c: 0x0  nop
    ctx->pc = 0x4c380cu;
    // NOP
label_4c3810:
    // 0x4c3810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c3810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c3814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c3814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c3818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c3818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c381c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c3820: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c3820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c3824: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c3824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c3828: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c3828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c382c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c382cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c3830: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4c3830u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4c3834: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c3834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c3838: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4c3838u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4c383c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c383cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c3840: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4c3840u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4c3844: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4c3844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4c3848: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4c3848u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4c384c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4c384cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4c3850: 0x27d10ea4  addiu       $s1, $fp, 0xEA4
    ctx->pc = 0x4c3850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 3748));
    // 0x4c3854: 0x26f00ea8  addiu       $s0, $s7, 0xEA8
    ctx->pc = 0x4c3854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 3752));
    // 0x4c3858: 0x26b30e98  addiu       $s3, $s5, 0xE98
    ctx->pc = 0x4c3858u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 3736));
    // 0x4c385c: 0x26d20e9c  addiu       $s2, $s6, 0xE9C
    ctx->pc = 0x4c385cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 3740));
    // 0x4c3860: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4c3860u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0EA4u));
    // 0x4c3864: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4c3864u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0EA8u));
    // 0x4c3868: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4c3868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c386c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4c386cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3870: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4C3870u;
    SET_GPR_U32(ctx, 31, 0x4C3878u);
    ctx->pc = 0x4C3874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3870u;
    // 0x4c3874: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4C3870u, 0x4C3878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3878u;
label_4c3878:
    // 0x4c3878: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4c3878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c387c: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4c387cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4c3880: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4c3880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c3884: 0x25eb0eac  addiu       $t3, $t7, 0xEAC
    ctx->pc = 0x4c3884u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 3756));
    // 0x4c3888: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4c3888u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c388c: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x4c388cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0EACu));
    // 0x4c3890: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4c3890u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4c3894: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c3898: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c3898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c389c: 0x3104ffff  andi        $a0, $t0, 0xFFFF
    ctx->pc = 0x4c389cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x4c38a0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c38a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c38a4: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x4c38a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x4c38a8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4c38a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4c38ac: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4c38acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4c38b0: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4c38b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4c38b4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x4c38b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x4c38b8: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x4c38b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4c38bc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4c38bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4c38c0: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x4c38c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4c38c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c38c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c38c8: 0x268d0118  addiu       $t5, $s4, 0x118
    ctx->pc = 0x4c38c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
    // 0x4c38cc: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4c38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4c38d0: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c38d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c38d4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4c38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4c38d8: 0xea3024  and         $a2, $a3, $t2
    ctx->pc = 0x4c38d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x4c38dc: 0x25cc0ea0  addiu       $t4, $t6, 0xEA0
    ctx->pc = 0x4c38dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 3744));
    // 0x4c38e0: 0x31290080  andi        $t1, $t1, 0x80
    ctx->pc = 0x4c38e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
    // 0x4c38e4: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4c38e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c38e8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c38e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c38ec: 0x962b0000  lhu         $t3, 0x0($s1)
    ctx->pc = 0x4c38ecu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c38f0: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4c38f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4c38f4: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4c38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c38f8: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4c38f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4c38fc: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4c38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4c3900: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c3900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c3904: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4c3904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4c3908: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4c3908u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c390c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c390cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c3910: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4c3910u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4c3914: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x4c3914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c3918: 0x8b1823  subu        $v1, $a0, $t3
    ctx->pc = 0x4c3918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4c391c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4c391cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4c3920: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x4c3920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x4c3924: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4c3924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c3928: 0xc3380b  movn        $a3, $a2, $v1
    ctx->pc = 0x4c3928u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x4c392c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4c392cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4c3930: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4c3930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4c3934: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4c3934u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c3938: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x4c3938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x4c393c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c393cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c3940: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c3940u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c3944: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4c3944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4c3948: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c3948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c394c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c394cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c3950: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c3950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c3954: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4c3954u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c3958: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x4c3958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x4c395c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c395cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c3960: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c3960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c3964: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4c3964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4c3968: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c3968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c396c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c396cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c3970: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4c3970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c3974: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4c3974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c3978: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4c3978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x4c397c: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4c397cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4c3980: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4c3980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4c3984: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4c3984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c3988: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x4c3988u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4c398c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c398cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c3990: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C3990u;
    {
        const bool branch_taken_0x4c3990 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C3994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3990u;
        // 0x4c3994: 0x34a300ff  ori         $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3990) {
            ctx->pc = 0x4C39A0u;
            goto label_4c39a0;
        }
    }
    ctx->pc = 0x4C3998u;
    // 0x4c3998: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c3998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c399c: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x4c399cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4c39a0:
    // 0x4c39a0: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4c39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4c39a4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4c39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c39a8: 0x25c50ea0  addiu       $a1, $t6, 0xEA0
    ctx->pc = 0x4c39a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 3744));
    // 0x4c39ac: 0x26c70e9c  addiu       $a3, $s6, 0xE9C
    ctx->pc = 0x4c39acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 3740));
    // 0x4c39b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c39b4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4c39b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c39b8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4c39b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c39bc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4c39bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4c39c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4c39c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c39c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c39c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c39c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4c39c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4c39cc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C39CCu;
    {
        const bool branch_taken_0x4c39cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C39D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C39CCu;
        // 0x4c39d0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c39cc) {
            ctx->pc = 0x4C39F0u;
            goto label_4c39f0;
        }
    }
    ctx->pc = 0x4C39D4u;
    // 0x4c39d4: 0x26a40e98  addiu       $a0, $s5, 0xE98
    ctx->pc = 0x4c39d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3736));
    // 0x4c39d8: 0x97c50ea4  lhu         $a1, 0xEA4($fp)
    ctx->pc = 0x4c39d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3748)));
    // 0x4c39dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c39e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c39e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c39e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c39e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c39e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c39e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c39ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c39ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4c39f0:
    // 0x4c39f0: 0x26a40e98  addiu       $a0, $s5, 0xE98
    ctx->pc = 0x4c39f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3736));
    // 0x4c39f4: 0x268b011c  addiu       $t3, $s4, 0x11C
    ctx->pc = 0x4c39f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 284));
    // 0x4c39f8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c39f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c39fc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c39fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c3a00: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4c3a00u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3a04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c3a08: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4c3a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c3a0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c3a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3a10: 0x96e50ea8  lhu         $a1, 0xEA8($s7)
    ctx->pc = 0x4c3a10u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 3752)));
    // 0x4c3a14: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c3a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c3a18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3a1c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c3a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c3a20: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c3a20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c3a24: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4c3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c3a28: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c3a2c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C3A2Cu;
    {
        const bool branch_taken_0x4c3a2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3A2Cu;
        // 0x4c3a30: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3a2c) {
            ctx->pc = 0x4C3A40u;
            goto label_4c3a40;
        }
    }
    ctx->pc = 0x4C3A34u;
    // 0x4c3a34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C3A34u;
    {
        const bool branch_taken_0x4c3a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3A34u;
        // 0x4c3a38: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3a34) {
            ctx->pc = 0x4C3A44u;
            goto label_4c3a44;
        }
    }
    ctx->pc = 0x4C3A3Cu;
    // 0x4c3a3c: 0x0  nop
    ctx->pc = 0x4c3a3cu;
    // NOP
label_4c3a40:
    // 0x4c3a40: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4c3a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4c3a44:
    // 0x4c3a44: 0x25ca0ea0  addiu       $t2, $t6, 0xEA0
    ctx->pc = 0x4c3a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 3744));
    // 0x4c3a48: 0x95e20eac  lhu         $v0, 0xEAC($t7)
    ctx->pc = 0x4c3a48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 3756)));
    // 0x4c3a4c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c3a50: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c3a50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c3a54: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4c3a54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4c3a58: 0x26a70e98  addiu       $a3, $s5, 0xE98
    ctx->pc = 0x4c3a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 3736));
    // 0x4c3a5c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4c3a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4c3a60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c3a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c3a64: 0x96c80e9c  lhu         $t0, 0xE9C($s6)
    ctx->pc = 0x4c3a64u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 3740)));
    // 0x4c3a68: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x4c3a68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c3a6c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c3a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c3a70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c3a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3a74: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c3a74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c3a78: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4c3a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c3a7c: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4c3a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4c3a80: 0x96e90ea8  lhu         $t1, 0xEA8($s7)
    ctx->pc = 0x4c3a80u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 3752)));
    // 0x4c3a84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c3a88: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c3a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c3a8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c3a8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c3a90: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c3a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c3a94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3a98: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c3a9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c3a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3aa0: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c3aa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c3aa4: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4c3aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4c3aa8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c3aac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c3aacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c3ab0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c3ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c3ab4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3ab8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c3abc: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c3abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c3ac0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4c3ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4c3ac4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4c3ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4c3ac8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4c3ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4c3acc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4c3accu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4c3ad0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c3ad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c3ad4: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x4c3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4c3ad8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c3adc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C3ADCu;
    {
        const bool branch_taken_0x4c3adc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3ADCu;
        // 0x4c3ae0: 0x346800ff  ori         $t0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3adc) {
            ctx->pc = 0x4C3AECu;
            goto label_4c3aec;
        }
    }
    ctx->pc = 0x4C3AE4u;
    // 0x4c3ae4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c3ae8: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x4c3ae8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c3aec:
    // 0x4c3aec: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x4c3aecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x4c3af0: 0x25c50ea0  addiu       $a1, $t6, 0xEA0
    ctx->pc = 0x4c3af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 3744));
    // 0x4c3af4: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x4c3af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c3af8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c3afc: 0x8ec30e9c  lw          $v1, 0xE9C($s6)
    ctx->pc = 0x4c3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3740)));
    // 0x4c3b00: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x4c3b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x4c3b04: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c3b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c3b08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4c3b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4c3b0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c3b10: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x4c3b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c3b14: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C3B14u;
    {
        const bool branch_taken_0x4c3b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3B14u;
        // 0x4c3b18: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3b14) {
            ctx->pc = 0x4C3B38u;
            goto label_4c3b38;
        }
    }
    ctx->pc = 0x4C3B1Cu;
    // 0x4c3b1c: 0x26a40e98  addiu       $a0, $s5, 0xE98
    ctx->pc = 0x4c3b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3736));
    // 0x4c3b20: 0x96e50ea8  lhu         $a1, 0xEA8($s7)
    ctx->pc = 0x4c3b20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 3752)));
    // 0x4c3b24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c3b28: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c3b2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c3b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c3b30: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c3b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c3b34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c3b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4c3b38:
    // 0x4c3b38: 0x96a20e98  lhu         $v0, 0xE98($s5)
    ctx->pc = 0x4c3b38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3736)));
    // 0x4c3b3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c3b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c3b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c3b44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c3b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c3b48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c3b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c3b4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c3b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c3b50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c3b50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c3b54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c3b54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c3b58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c3b58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c3b5c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c3b5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c3b60: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c3b60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c3b64: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c3b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c3b68: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4c3b68u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3b6c: 0x8130ede  j           func_4C3B78
    ctx->pc = 0x4C3B6Cu;
    ctx->pc = 0x4C3B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3B6Cu;
    // 0x4c3b70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3B78u;
    goto label_4c3b78;
    ctx->pc = 0x4C3B74u;
    // 0x4c3b74: 0x0  nop
    ctx->pc = 0x4c3b74u;
    // NOP
label_4c3b78:
    // 0x4c3b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c3b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c3b7c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c3b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c3b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c3b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c3b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3b88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c3b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c3b8c: 0x24510e98  addiu       $s1, $v0, 0xE98
    ctx->pc = 0x4c3b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3736));
    // 0x4c3b90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c3b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c3b94: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c3b94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4c3b98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c3b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c3b9c: 0x26130120  addiu       $s3, $s0, 0x120
    ctx->pc = 0x4c3b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x4c3ba0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c3ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c3ba4: 0x8603013a  lh          $v1, 0x13A($s0)
    ctx->pc = 0x4c3ba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 314)));
    // 0x4c3ba8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4c3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0E98u));
    // 0x4c3bac: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4c3bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4c3bb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c3bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c3bb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c3bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c3bb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c3bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4c3bbc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4c3bbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c3bc0: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C3BC0u;
    SET_GPR_U32(ctx, 31, 0x4C3BC8u);
    ctx->pc = 0x4C3BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3BC0u;
    // 0x4c3bc4: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C3BC0u, 0x4C3BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3BC8u;
label_4c3bc8:
    // 0x4c3bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3bcc: 0x8602015e  lh          $v0, 0x15E($s0)
    ctx->pc = 0x4c3bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4c3bd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c3bd4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c3bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c3bd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c3bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3bdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3be0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c3be4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c3be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3be8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c3be8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c3bec: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x4c3becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x4c3bf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c3bf4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c3bf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c3bf8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c3bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c3bfc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3c00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c3c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c3c04: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c3c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c3c08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C3C08u;
    {
        const bool branch_taken_0x4c3c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3C08u;
        // 0x4c3c0c: 0x3465ffff  ori         $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3c08) {
            ctx->pc = 0x4C3C30u;
            goto label_4c3c30;
        }
    }
    ctx->pc = 0x4C3C10u;
    // 0x4c3c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c3c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c3c14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c3c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c3c18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c3c18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c3c1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c3c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c3c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c3c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c3c24: 0x8130f40  j           func_4C3D00
    ctx->pc = 0x4C3C24u;
    ctx->pc = 0x4C3C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3C24u;
    // 0x4c3c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3D00u;
    goto label_4c3d00;
    ctx->pc = 0x4C3C2Cu;
    // 0x4c3c2c: 0x0  nop
    ctx->pc = 0x4c3c2cu;
    // NOP
label_4c3c30:
    // 0x4c3c30: 0x86030160  lh          $v1, 0x160($s0)
    ctx->pc = 0x4c3c30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4c3c34: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4c3c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4c3c38: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4c3c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c3c3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c3c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c3c40: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4c3c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3c44: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c3c44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c3c48: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4c3c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4c3c4c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c3c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c3c50: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c3c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c3c54: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4c3c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4c3c58: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c3c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c3c5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C3C5Cu;
    {
        const bool branch_taken_0x4c3c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3C5Cu;
        // 0x4c3c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3c5c) {
            ctx->pc = 0x4C3C80u;
            goto label_4c3c80;
        }
    }
    ctx->pc = 0x4C3C64u;
    // 0x4c3c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c3c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c3c68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c3c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c3c6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c3c6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c3c70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c3c70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c3c74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c3c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c3c78: 0x8130f40  j           func_4C3D00
    ctx->pc = 0x4C3C78u;
    ctx->pc = 0x4C3C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3C78u;
    // 0x4c3c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3D00u;
    goto label_4c3d00;
    ctx->pc = 0x4C3C80u;
label_4c3c80:
    // 0x4c3c80: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4c3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4c3c84: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4c3c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4c3c88: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4c3c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4c3c8c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4c3c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4c3c90: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4c3c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4c3c94: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c3c98: 0xa4a32334  sh          $v1, 0x2334($a1)
    ctx->pc = 0x4c3c98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9012), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c3c9c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4c3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4c3ca0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c3ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c3ca4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4c3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4c3ca8: 0xa4a22336  sh          $v0, 0x2336($a1)
    ctx->pc = 0x4c3ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3cac: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4c3cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4c3cb0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4c3cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4c3cb4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c3cb8: 0xa4a32338  sh          $v1, 0x2338($a1)
    ctx->pc = 0x4c3cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9016), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c3cbc: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x4c3cbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x4c3cc0: 0xa4a2233a  sh          $v0, 0x233A($a1)
    ctx->pc = 0x4c3cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9018), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3cc4: 0x9603011c  lhu         $v1, 0x11C($s0)
    ctx->pc = 0x4c3cc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x4c3cc8: 0xa4a3233c  sh          $v1, 0x233C($a1)
    ctx->pc = 0x4c3cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9020), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c3ccc: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4c3cccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c3cd0: 0xa4a62330  sh          $a2, 0x2330($a1)
    ctx->pc = 0x4c3cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9008), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c3cd4: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4C3CD4u;
    SET_GPR_U32(ctx, 31, 0x4C3CDCu);
    ctx->pc = 0x4C3CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3CD4u;
    // 0x4c3cd8: 0xa4a2233e  sh          $v0, 0x233E($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9022), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4C3CD4u, 0x4C3CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3CDCu;
label_4c3cdc:
    // 0x4c3cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c3ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c3ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c3ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c3ce8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c3ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c3cec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c3cecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c3cf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c3cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c3cf4: 0x8130f40  j           func_4C3D00
    ctx->pc = 0x4C3CF4u;
    ctx->pc = 0x4C3CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3CF4u;
    // 0x4c3cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C3D00u;
    goto label_4c3d00;
    ctx->pc = 0x4C3CFCu;
    // 0x4c3cfc: 0x0  nop
    ctx->pc = 0x4c3cfcu;
    // NOP
label_4c3d00:
    // 0x4c3d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c3d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c3d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c3d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c3d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c3d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c3d0c: 0x8130790  j           func_4C1E40
    ctx->pc = 0x4C3D0Cu;
    ctx->pc = 0x4C3D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3D0Cu;
    // 0x4c3d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1E40u, 0x4C3D0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4C3D14u;
    // 0x4c3d14: 0x0  nop
    ctx->pc = 0x4c3d14u;
    // NOP
    ctx->pc = 0x4c3d18u;
}
