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

// Function: sub_001F11E8
// Address: 0x1f11e8 - 0x1f11f8
void sub_001F11E8_0x1f11e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F11E8_0x1f11e8");
#endif

    ctx->pc = 0x1f11e8u;

    // 0x1f11e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f11ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F11ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11ECu;
        // 0x1f11f0: 0xac448880  sw          $a0, -0x7780($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936704), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F11ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F11F4u;
    // 0x1f11f4: 0x0  nop
    ctx->pc = 0x1f11f4u;
    // NOP
    ctx->pc = 0x1f11f8u;
}
