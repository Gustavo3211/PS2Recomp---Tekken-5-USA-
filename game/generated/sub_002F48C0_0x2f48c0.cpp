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

// Function: sub_002F48C0
// Address: 0x2f48c0 - 0x2f48c8
void sub_002F48C0_0x2f48c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F48C0_0x2f48c0");
#endif

    ctx->pc = 0x2f48c0u;

    // 0x2f48c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F48C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48C0u;
        // 0x2f48c4: 0xaf80c2c8  sw          $zero, -0x3D38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F48C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F48C8u;
}
