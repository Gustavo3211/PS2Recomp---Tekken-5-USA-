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

// Function: sub_002EF810
// Address: 0x2ef810 - 0x2ef820
void sub_002EF810_0x2ef810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF810_0x2ef810");
#endif

    ctx->pc = 0x2ef810u;

    // 0x2ef810: 0xac8700fc  sw          $a3, 0xFC($a0)
    ctx->pc = 0x2ef810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 7));
    // 0x2ef814: 0xac8500f4  sw          $a1, 0xF4($a0)
    ctx->pc = 0x2ef814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 5));
    // 0x2ef818: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF818u;
        // 0x2ef81c: 0xac8600f8  sw          $a2, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF820u;
}
