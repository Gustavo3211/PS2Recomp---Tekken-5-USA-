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

// Function: sub_001F88F8
// Address: 0x1f88f8 - 0x1f8908
void sub_001F88F8_0x1f88f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F88F8_0x1f88f8");
#endif

    ctx->pc = 0x1f88f8u;

    // 0x1f88f8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f88fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F88FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88FCu;
        // 0x1f8900: 0xac4455b0  sw          $a0, 0x55B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 21936), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F88FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8904u;
    // 0x1f8904: 0x0  nop
    ctx->pc = 0x1f8904u;
    // NOP
    ctx->pc = 0x1f8908u;
}
