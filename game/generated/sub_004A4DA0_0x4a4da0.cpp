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

// Function: sub_004A4DA0
// Address: 0x4a4da0 - 0x4a4db0
void sub_004A4DA0_0x4a4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4DA0_0x4a4da0");
#endif

    ctx->pc = 0x4a4da0u;

    // 0x4a4da0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a4da4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4DA4u;
        // 0x4a4da8: 0x24428ca0  addiu       $v0, $v0, -0x7360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937760));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4DACu;
    // 0x4a4dac: 0x0  nop
    ctx->pc = 0x4a4dacu;
    // NOP
    ctx->pc = 0x4a4db0u;
}
