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

// Function: sub_004A4DB0
// Address: 0x4a4db0 - 0x4a4dc0
void sub_004A4DB0_0x4a4db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4DB0_0x4a4db0");
#endif

    ctx->pc = 0x4a4db0u;

    // 0x4a4db0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a4db4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4DB4u;
        // 0x4a4db8: 0x24428cf0  addiu       $v0, $v0, -0x7310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4DBCu;
    // 0x4a4dbc: 0x0  nop
    ctx->pc = 0x4a4dbcu;
    // NOP
    ctx->pc = 0x4a4dc0u;
}
