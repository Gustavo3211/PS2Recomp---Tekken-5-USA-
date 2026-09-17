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

// Function: sub_0035B6A8
// Address: 0x35b6a8 - 0x35b6b8
void sub_0035B6A8_0x35b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B6A8_0x35b6a8");
#endif

    ctx->pc = 0x35b6a8u;

    // 0x35b6a8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x35B6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6ACu;
        // 0x35b6b0: 0xac441348  sw          $a0, 0x1348($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B6B4u;
    // 0x35b6b4: 0x0  nop
    ctx->pc = 0x35b6b4u;
    // NOP
    ctx->pc = 0x35b6b8u;
}
