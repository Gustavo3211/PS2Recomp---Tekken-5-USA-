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

// Function: sub_0023C1B0
// Address: 0x23c1b0 - 0x23c1c0
void sub_0023C1B0_0x23c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C1B0_0x23c1b0");
#endif

    ctx->pc = 0x23c1b0u;

    // 0x23c1b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23c1b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23C1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B8u;
        // 0x23c1bc: 0xac62e118  sw          $v0, -0x1EE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C1C0u;
}
