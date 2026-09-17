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

// Function: sub_0036A908
// Address: 0x36a908 - 0x36a918
void sub_0036A908_0x36a908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A908_0x36a908");
#endif

    ctx->pc = 0x36a908u;

    // 0x36a908: 0xac870058  sw          $a3, 0x58($a0)
    ctx->pc = 0x36a908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 7));
    // 0x36a90c: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x36a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x36a910: 0x3e00008  jr          $ra
    ctx->pc = 0x36A910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A910u;
        // 0x36a914: 0xac860054  sw          $a2, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A918u;
}
