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

// Function: sub_004FAA18
// Address: 0x4faa18 - 0x4faa28
void sub_004FAA18_0x4faa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FAA18_0x4faa18");
#endif

    ctx->pc = 0x4faa18u;

    // 0x4faa18: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4faa18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4faa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FAA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAA1Cu;
        // 0x4faa20: 0x8c62ceb4  lw          $v0, -0x314C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954676)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FAA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FAA24u;
    // 0x4faa24: 0x0  nop
    ctx->pc = 0x4faa24u;
    // NOP
    ctx->pc = 0x4faa28u;
}
