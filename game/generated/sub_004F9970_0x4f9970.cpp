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

// Function: sub_004F9970
// Address: 0x4f9970 - 0x4f9980
void sub_004F9970_0x4f9970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9970_0x4f9970");
#endif

    ctx->pc = 0x4f9970u;

    // 0x4f9970: 0x3c020083  lui         $v0, 0x83
    ctx->pc = 0x4f9970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)131 << 16));
    // 0x4f9974: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9974u;
        // 0x4f9978: 0x24421388  addiu       $v0, $v0, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F997Cu;
    // 0x4f997c: 0x0  nop
    ctx->pc = 0x4f997cu;
    // NOP
    ctx->pc = 0x4f9980u;
}
