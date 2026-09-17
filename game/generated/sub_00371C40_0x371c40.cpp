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

// Function: sub_00371C40
// Address: 0x371c40 - 0x371ce0
void sub_00371C40_0x371c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371C40_0x371c40");
#endif

    switch (ctx->pc) {
        case 0x371c70u: goto label_371c70;
        default: break;
    }

    ctx->pc = 0x371c40u;

    // 0x371c40: 0x3e00008  jr          $ra
    ctx->pc = 0x371C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371C48u;
    // 0x371c48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x371c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x371c4c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x371c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x371c50: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x371c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x371c54: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x371c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x371c58: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x371c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x371c5c: 0x24820058  addiu       $v0, $a0, 0x58
    ctx->pc = 0x371c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x371c60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x371c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x371c64: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x371c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x371c68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x371c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x371c6c: 0x0  nop
    ctx->pc = 0x371c6cu;
    // NOP
label_371c70:
    // 0x371c70: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x371c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x371c74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x371c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x371c78: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x371c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x371c7c: 0x0  nop
    ctx->pc = 0x371c7cu;
    // NOP
    // 0x371c80: 0x0  nop
    ctx->pc = 0x371c80u;
    // NOP
    // 0x371c84: 0x14a3fffa  bne         $a1, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x371C84u;
    {
        const bool branch_taken_0x371c84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x371C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C84u;
        // 0x371c88: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c84) {
            ctx->pc = 0x371C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371c70;
        }
    }
    ctx->pc = 0x371C8Cu;
    // 0x371c8c: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x371c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x371c90: 0x248200b8  addiu       $v0, $a0, 0xB8
    ctx->pc = 0x371c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x371c94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x371c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371c98: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x371c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x371c9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x371c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x371ca0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x371ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x371ca4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x371ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x371ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x371CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CA8u;
        // 0x371cac: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371CB0u;
    // 0x371cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x371CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CB0u;
        // 0x371cb4: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371CB8u;
    // 0x371cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x371CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CB8u;
        // 0x371cbc: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371CC0u;
    // 0x371cc0: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x371cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x371cc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x371cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x371cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x371CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CC8u;
        // 0x371ccc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371CD0u;
    // 0x371cd0: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x371cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x371cd4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x371cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x371cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x371CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CD8u;
        // 0x371cdc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371CE0u;
}
