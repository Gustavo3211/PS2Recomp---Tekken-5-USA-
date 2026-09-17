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

// Function: sub_004F9930
// Address: 0x4f9930 - 0x4f9940
void sub_004F9930_0x4f9930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9930_0x4f9930");
#endif

    ctx->pc = 0x4f9930u;

    // 0x4f9930: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4f9930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4f9934: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9934u;
        // 0x4f9938: 0x8c62cb40  lw          $v0, -0x34C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953792)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F993Cu;
    // 0x4f993c: 0x0  nop
    ctx->pc = 0x4f993cu;
    // NOP
    ctx->pc = 0x4f9940u;
}
