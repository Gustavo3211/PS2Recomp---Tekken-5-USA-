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

// Function: sub_001F9818
// Address: 0x1f9818 - 0x1f9828
void sub_001F9818_0x1f9818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9818_0x1f9818");
#endif

    ctx->pc = 0x1f9818u;

    // 0x1f9818: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f981c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F981Cu;
        // 0x1f9820: 0xa444b418  sh          $a0, -0x4BE8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294947864), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F981Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9824u;
    // 0x1f9824: 0x0  nop
    ctx->pc = 0x1f9824u;
    // NOP
    ctx->pc = 0x1f9828u;
}
