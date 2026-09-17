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

// Function: sub_001F61C8
// Address: 0x1f61c8 - 0x1f61d0
void sub_001F61C8_0x1f61c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F61C8_0x1f61c8");
#endif

    ctx->pc = 0x1f61c8u;

    // 0x1f61c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F61C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61C8u;
        // 0x1f61cc: 0xaf849750  sw          $a0, -0x68B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F61C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F61D0u;
}
