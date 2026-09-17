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

// Function: sub_002DEBC0
// Address: 0x2debc0 - 0x2debf0
void sub_002DEBC0_0x2debc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEBC0_0x2debc0");
#endif

    ctx->pc = 0x2debc0u;

label_2debc0:
    // 0x2debc0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2debc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2debc4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEBC4u;
    {
        const bool branch_taken_0x2debc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2debc4) {
            ctx->pc = 0x2DEBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEBC4u;
            // 0x2debc8: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEBD8u;
            goto label_2debd8;
        }
    }
    ctx->pc = 0x2DEBCCu;
    // 0x2debcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBCCu;
        // 0x2debd0: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEBD4u;
    // 0x2debd4: 0x0  nop
    ctx->pc = 0x2debd4u;
    // NOP
label_2debd8:
    // 0x2debd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEBD8u;
    {
        const bool branch_taken_0x2debd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2debd8) {
            ctx->pc = 0x2DEBE8u;
            goto label_2debe8;
        }
    }
    ctx->pc = 0x2DEBE0u;
    // 0x2debe0: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DEBE0u;
    {
        const bool branch_taken_0x2debe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBE0u;
        // 0x2debe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debe0) {
            ctx->pc = 0x2DEBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2debc0;
        }
    }
    ctx->pc = 0x2DEBE8u;
label_2debe8:
    // 0x2debe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBE8u;
        // 0x2debec: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEBF0u;
}
