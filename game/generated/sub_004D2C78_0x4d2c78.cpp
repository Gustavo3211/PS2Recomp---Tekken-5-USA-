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

// Function: sub_004D2C78
// Address: 0x4d2c78 - 0x4d2d50
void sub_004D2C78_0x4d2c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2C78_0x4d2c78");
#endif

    switch (ctx->pc) {
        case 0x4d2cdcu: goto label_4d2cdc;
        default: break;
    }

    ctx->pc = 0x4d2c78u;

    // 0x4d2c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d2c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d2c7c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d2c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d2c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d2c84: 0x2450102c  addiu       $s0, $v0, 0x102C
    ctx->pc = 0x4d2c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4140));
    // 0x4d2c88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d2c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d2c8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d2c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d2c90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4d2c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2c94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d2c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d2c98: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4d2c98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4d2c9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d2c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d2ca0: 0x26510162  addiu       $s1, $s2, 0x162
    ctx->pc = 0x4d2ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 354));
    // 0x4d2ca4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d2ca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d2ca8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F102Cu));
    // 0x4d2cac: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d2cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d2cb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d2cb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d2cb8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d2cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d2cbc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d2cbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d2cc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d2cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d2cc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D2CC4u;
    {
        const bool branch_taken_0x4d2cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2CC4u;
        // 0x4d2cc8: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2cc4) {
            ctx->pc = 0x4D2CDCu;
            goto label_4d2cdc;
        }
    }
    ctx->pc = 0x4D2CCCu;
    // 0x4d2ccc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d2cd0: 0x24427608  addiu       $v0, $v0, 0x7608
    ctx->pc = 0x4d2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30216));
    // 0x4d2cd4: 0xc134b60  jal         func_4D2D80
    ctx->pc = 0x4D2CD4u;
    SET_GPR_U32(ctx, 31, 0x4D2CDCu);
    ctx->pc = 0x4D2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2CD4u;
    // 0x4d2cd8: 0xac621040  sw          $v0, 0x1040($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2D80u, 0x4D2CD4u, 0x4D2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2CDCu;
label_4d2cdc:
    // 0x4d2cdc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d2cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d2ce0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d2ce4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d2ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d2ce8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d2cec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d2cf0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d2cf4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d2cf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d2cf8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4d2cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4d2cfc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4D2CFCu;
    {
        const bool branch_taken_0x4d2cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2CFCu;
        // 0x4d2d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2cfc) {
            ctx->pc = 0x4D2D30u;
            goto label_4d2d30;
        }
    }
    ctx->pc = 0x4D2D04u;
    // 0x4d2d04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d2d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d2d08: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4d2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4d2d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2d10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d2d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d2d14: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d2d18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d2d18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d2d1c: 0x24427618  addiu       $v0, $v0, 0x7618
    ctx->pc = 0x4d2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30232));
    // 0x4d2d20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d2d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d2d24: 0xac621040  sw          $v0, 0x1040($v1)
    ctx->pc = 0x4d2d24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1040u, _value); } while (0);
    // 0x4d2d28: 0x8134b60  j           func_4D2D80
    ctx->pc = 0x4D2D28u;
    ctx->pc = 0x4D2D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2D28u;
    // 0x4d2d2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2D80u;
    sub_004D2D80_0x4d2d80(rdram, ctx, runtime); return;
    ctx->pc = 0x4D2D30u;
label_4d2d30:
    // 0x4d2d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d2d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d2d38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d2d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d2d3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d2d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d2d40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d2d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d2d44: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2D44u;
        // 0x4d2d48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D2D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D2D4Cu;
    // 0x4d2d4c: 0x0  nop
    ctx->pc = 0x4d2d4cu;
    // NOP
    ctx->pc = 0x4d2d50u;
}
