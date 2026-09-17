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

// Function: sub_00283180
// Address: 0x283180 - 0x283198
void sub_00283180_0x283180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283180_0x283180");
#endif

    ctx->pc = 0x283180u;

    // 0x283180: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x283180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x283184: 0x3e00008  jr          $ra
    ctx->pc = 0x283184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283184u;
        // 0x283188: 0xaf82aeb8  sw          $v0, -0x5148($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28318Cu;
    // 0x28318c: 0x0  nop
    ctx->pc = 0x28318cu;
    // NOP
    // 0x283190: 0x3e00008  jr          $ra
    ctx->pc = 0x283190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283190u;
        // 0x283194: 0x8f82aeb8  lw          $v0, -0x5148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946488)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283198u;
}
