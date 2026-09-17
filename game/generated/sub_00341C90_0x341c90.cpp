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

// Function: sub_00341C90
// Address: 0x341c90 - 0x341cf0
void sub_00341C90_0x341c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341C90_0x341c90");
#endif

    switch (ctx->pc) {
        case 0x341cc0u: goto label_341cc0;
        default: break;
    }

    ctx->pc = 0x341c90u;

    // 0x341c90: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x341c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x341c94: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x341c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x341c98: 0x24460d58  addiu       $a2, $v0, 0xD58
    ctx->pc = 0x341c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3416));
    // 0x341c9c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x341c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341ca0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x341ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x440D58u));
    // 0x341ca4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x341CA4u;
    {
        const bool branch_taken_0x341ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x341CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CA4u;
        // 0x341ca8: 0x24630e18  addiu       $v1, $v1, 0xE18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ca4) {
            ctx->pc = 0x341CE8u;
            goto label_341ce8;
        }
    }
    ctx->pc = 0x341CACu;
    // 0x341cac: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341CACu;
    {
        const bool branch_taken_0x341cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x341cac) {
            ctx->pc = 0x341CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341CACu;
            // 0x341cb0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341CC0u;
            goto label_341cc0;
        }
    }
    ctx->pc = 0x341CB4u;
    // 0x341cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x341CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CB4u;
        // 0x341cb8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341CBCu;
    // 0x341cbc: 0x0  nop
    ctx->pc = 0x341cbcu;
    // NOP
label_341cc0:
    // 0x341cc0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x341cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x341cc4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x341CC4u;
    {
        const bool branch_taken_0x341cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x341CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CC4u;
        // 0x341cc8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341cc4) {
            ctx->pc = 0x341CE8u;
            goto label_341ce8;
        }
    }
    ctx->pc = 0x341CCCu;
    // 0x341ccc: 0x0  nop
    ctx->pc = 0x341cccu;
    // NOP
    // 0x341cd0: 0x0  nop
    ctx->pc = 0x341cd0u;
    // NOP
    // 0x341cd4: 0x0  nop
    ctx->pc = 0x341cd4u;
    // NOP
    // 0x341cd8: 0x0  nop
    ctx->pc = 0x341cd8u;
    // NOP
    // 0x341cdc: 0x5482fff8  bnel        $a0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x341CDCu;
    {
        const bool branch_taken_0x341cdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x341cdc) {
            ctx->pc = 0x341CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341CDCu;
            // 0x341ce0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341cc0;
        }
    }
    ctx->pc = 0x341CE4u;
    // 0x341ce4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x341ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_341ce8:
    // 0x341ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x341CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341CF0u;
}
