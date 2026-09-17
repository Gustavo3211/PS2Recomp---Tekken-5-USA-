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

// Function: sub_001F8918
// Address: 0x1f8918 - 0x1f8938
void sub_001F8918_0x1f8918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8918_0x1f8918");
#endif

    ctx->pc = 0x1f8918u;

    // 0x1f8918: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1f8918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1f891c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F891Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F891Cu;
        // 0x1f8920: 0x8c6255b8  lw          $v0, 0x55B8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21944)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F891Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8924u;
    // 0x1f8924: 0x0  nop
    ctx->pc = 0x1f8924u;
    // NOP
    // 0x1f8928: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1f8928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1f892c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F892Cu;
        // 0x1f8930: 0x8c6255bc  lw          $v0, 0x55BC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21948)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F892Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8934u;
    // 0x1f8934: 0x0  nop
    ctx->pc = 0x1f8934u;
    // NOP
    ctx->pc = 0x1f8938u;
}
