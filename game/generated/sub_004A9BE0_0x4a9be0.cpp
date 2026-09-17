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

// Function: sub_004A9BE0
// Address: 0x4a9be0 - 0x4a9bf0
void sub_004A9BE0_0x4a9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9BE0_0x4a9be0");
#endif

    ctx->pc = 0x4a9be0u;

    // 0x4a9be0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4a9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4a9be4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9BE4u;
        // 0x4a9be8: 0x24424080  addiu       $v0, $v0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9BECu;
    // 0x4a9bec: 0x0  nop
    ctx->pc = 0x4a9becu;
    // NOP
    ctx->pc = 0x4a9bf0u;
}
