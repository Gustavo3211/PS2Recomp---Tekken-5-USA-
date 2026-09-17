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

// Function: sub_001F8908
// Address: 0x1f8908 - 0x1f8918
void sub_001F8908_0x1f8908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8908_0x1f8908");
#endif

    ctx->pc = 0x1f8908u;

    // 0x1f8908: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1f8908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1f890c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F890Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F890Cu;
        // 0x1f8910: 0x8c6255b0  lw          $v0, 0x55B0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21936)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F890Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8914u;
    // 0x1f8914: 0x0  nop
    ctx->pc = 0x1f8914u;
    // NOP
    ctx->pc = 0x1f8918u;
}
