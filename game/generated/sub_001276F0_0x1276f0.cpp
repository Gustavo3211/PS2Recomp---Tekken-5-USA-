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

// Function: sub_001276F0
// Address: 0x1276f0 - 0x127700
void sub_001276F0_0x1276f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001276F0_0x1276f0");
#endif

    ctx->pc = 0x1276f0u;

    // 0x1276f0: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x1276f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x1276f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1276F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1276F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276F4u;
        // 0x1276f8: 0x8c624728  lw          $v0, 0x4728($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18216)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1276F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1276FCu;
    // 0x1276fc: 0x0  nop
    ctx->pc = 0x1276fcu;
    // NOP
    ctx->pc = 0x127700u;
}
