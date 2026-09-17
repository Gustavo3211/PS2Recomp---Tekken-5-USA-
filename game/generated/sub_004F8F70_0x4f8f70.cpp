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

// Function: sub_004F8F70
// Address: 0x4f8f70 - 0x4f8f80
void sub_004F8F70_0x4f8f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8F70_0x4f8f70");
#endif

    ctx->pc = 0x4f8f70u;

    // 0x4f8f70: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4f8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4f8f74: 0x3e00008  jr          $ra
    ctx->pc = 0x4F8F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8F74u;
        // 0x4f8f78: 0x2442e0f8  addiu       $v0, $v0, -0x1F08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F8F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8F7Cu;
    // 0x4f8f7c: 0x0  nop
    ctx->pc = 0x4f8f7cu;
    // NOP
    ctx->pc = 0x4f8f80u;
}
