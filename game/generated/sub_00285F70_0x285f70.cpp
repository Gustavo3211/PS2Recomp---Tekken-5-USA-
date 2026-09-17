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

// Function: sub_00285F70
// Address: 0x285f70 - 0x285f88
void sub_00285F70_0x285f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285F70_0x285f70");
#endif

    ctx->pc = 0x285f70u;

    // 0x285f70: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x285f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x285f74: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x285f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x285f78: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x285f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x285f7c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x285f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x285f80: 0x3e00008  jr          $ra
    ctx->pc = 0x285F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F80u;
        // 0x285f84: 0xac80005c  sw          $zero, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285F88u;
}
