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

// Function: sub_001FC428
// Address: 0x1fc428 - 0x1fc438
void sub_001FC428_0x1fc428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC428_0x1fc428");
#endif

    ctx->pc = 0x1fc428u;

    // 0x1fc428: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fc428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc42c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC42Cu;
        // 0x1fc430: 0x8c6203dc  lw          $v0, 0x3DC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 988)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC434u;
    // 0x1fc434: 0x0  nop
    ctx->pc = 0x1fc434u;
    // NOP
    ctx->pc = 0x1fc438u;
}
