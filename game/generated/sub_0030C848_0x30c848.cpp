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

// Function: sub_0030C848
// Address: 0x30c848 - 0x30c858
void sub_0030C848_0x30c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C848_0x30c848");
#endif

    ctx->pc = 0x30c848u;

    // 0x30c848: 0xa087001a  sb          $a3, 0x1A($a0)
    ctx->pc = 0x30c848u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 7));
    // 0x30c84c: 0xa0850018  sb          $a1, 0x18($a0)
    ctx->pc = 0x30c84cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x30c850: 0x3e00008  jr          $ra
    ctx->pc = 0x30C850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C850u;
        // 0x30c854: 0xa0860019  sb          $a2, 0x19($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C858u;
}
