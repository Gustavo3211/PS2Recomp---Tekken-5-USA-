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

// Function: sub_004D2BA0
// Address: 0x4d2ba0 - 0x4d2c78
void sub_004D2BA0_0x4d2ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2BA0_0x4d2ba0");
#endif

    switch (ctx->pc) {
        case 0x4d2c04u: goto label_4d2c04;
        default: break;
    }

    ctx->pc = 0x4d2ba0u;

    // 0x4d2ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d2ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d2ba4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d2ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d2ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d2bac: 0x2450102c  addiu       $s0, $v0, 0x102C
    ctx->pc = 0x4d2bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4140));
    // 0x4d2bb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d2bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d2bb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d2bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d2bb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4d2bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2bbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d2bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d2bc0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4d2bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4d2bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d2bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d2bc8: 0x26510162  addiu       $s1, $s2, 0x162
    ctx->pc = 0x4d2bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 354));
    // 0x4d2bcc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d2bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d2bd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F102Cu));
    // 0x4d2bd4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d2bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d2bd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d2bdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d2be0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d2be4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d2be4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d2be8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d2be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d2bec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D2BECu;
    {
        const bool branch_taken_0x4d2bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2BECu;
        // 0x4d2bf0: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2bec) {
            ctx->pc = 0x4D2C04u;
            goto label_4d2c04;
        }
    }
    ctx->pc = 0x4D2BF4u;
    // 0x4d2bf4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d2bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d2bf8: 0x244275e8  addiu       $v0, $v0, 0x75E8
    ctx->pc = 0x4d2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30184));
    // 0x4d2bfc: 0xc134b60  jal         func_4D2D80
    ctx->pc = 0x4D2BFCu;
    SET_GPR_U32(ctx, 31, 0x4D2C04u);
    ctx->pc = 0x4D2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2BFCu;
    // 0x4d2c00: 0xac621040  sw          $v0, 0x1040($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2D80u, 0x4D2BFCu, 0x4D2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2C04u;
label_4d2c04:
    // 0x4d2c04: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d2c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d2c08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d2c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d2c0c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d2c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d2c10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d2c14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d2c18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d2c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d2c1c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d2c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d2c20: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4d2c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4d2c24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4D2C24u;
    {
        const bool branch_taken_0x4d2c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2C24u;
        // 0x4d2c28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2c24) {
            ctx->pc = 0x4D2C58u;
            goto label_4d2c58;
        }
    }
    ctx->pc = 0x4D2C2Cu;
    // 0x4d2c2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d2c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d2c30: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4d2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4d2c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2c38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d2c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d2c3c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d2c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d2c40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d2c40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d2c44: 0x244275f8  addiu       $v0, $v0, 0x75F8
    ctx->pc = 0x4d2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30200));
    // 0x4d2c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d2c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d2c4c: 0xac621040  sw          $v0, 0x1040($v1)
    ctx->pc = 0x4d2c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1040u, _value); } while (0);
    // 0x4d2c50: 0x8134b60  j           func_4D2D80
    ctx->pc = 0x4D2C50u;
    ctx->pc = 0x4D2C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2C50u;
    // 0x4d2c54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2D80u;
    sub_004D2D80_0x4d2d80(rdram, ctx, runtime); return;
    ctx->pc = 0x4D2C58u;
label_4d2c58:
    // 0x4d2c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2c5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d2c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d2c60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d2c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d2c64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d2c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d2c68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d2c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d2c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2C6Cu;
        // 0x4d2c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D2C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D2C74u;
    // 0x4d2c74: 0x0  nop
    ctx->pc = 0x4d2c74u;
    // NOP
    ctx->pc = 0x4d2c78u;
}
