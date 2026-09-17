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

// Function: sub_001F9660
// Address: 0x1f9660 - 0x1f9670
void sub_001F9660_0x1f9660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9660_0x1f9660");
#endif

    ctx->pc = 0x1f9660u;

    // 0x1f9660: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f9664: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9664u;
        // 0x1f9668: 0xa444b414  sh          $a0, -0x4BEC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294947860), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F966Cu;
    // 0x1f966c: 0x0  nop
    ctx->pc = 0x1f966cu;
    // NOP
    ctx->pc = 0x1f9670u;
}
