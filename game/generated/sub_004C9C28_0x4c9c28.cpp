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

// Function: sub_004C9C28
// Address: 0x4c9c28 - 0x4c9c38
void sub_004C9C28_0x4c9c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9C28_0x4c9c28");
#endif

    ctx->pc = 0x4c9c28u;

    // 0x4c9c28: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x4c9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4c9c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C9C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9C2Cu;
        // 0x4c9c30: 0xa482015e  sh          $v0, 0x15E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 350), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C9C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C9C34u;
    // 0x4c9c34: 0x0  nop
    ctx->pc = 0x4c9c34u;
    // NOP
    ctx->pc = 0x4c9c38u;
}
