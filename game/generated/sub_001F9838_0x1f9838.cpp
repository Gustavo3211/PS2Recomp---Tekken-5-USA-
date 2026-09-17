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

// Function: sub_001F9838
// Address: 0x1f9838 - 0x1f9848
void sub_001F9838_0x1f9838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9838_0x1f9838");
#endif

    ctx->pc = 0x1f9838u;

    // 0x1f9838: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f983c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F983Cu;
        // 0x1f9840: 0xa444b41a  sh          $a0, -0x4BE6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294947866), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9844u;
    // 0x1f9844: 0x0  nop
    ctx->pc = 0x1f9844u;
    // NOP
    ctx->pc = 0x1f9848u;
}
