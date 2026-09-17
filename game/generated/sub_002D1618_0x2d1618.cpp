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

// Function: sub_002D1618
// Address: 0x2d1618 - 0x2d1620
void sub_002D1618_0x2d1618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1618_0x2d1618");
#endif

    ctx->pc = 0x2d1618u;

    // 0x2d1618: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1618u;
        // 0x2d161c: 0xaf80cb50  sw          $zero, -0x34B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1620u;
}
