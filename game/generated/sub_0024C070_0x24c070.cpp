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

// Function: sub_0024C070
// Address: 0x24c070 - 0x24c080
void sub_0024C070_0x24c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C070_0x24c070");
#endif

    ctx->pc = 0x24c070u;

    // 0x24c070: 0x90820021  lbu         $v0, 0x21($a0)
    ctx->pc = 0x24c070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x24c074: 0x3e00008  jr          $ra
    ctx->pc = 0x24C074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C074u;
        // 0x24c078: 0xa0820020  sb          $v0, 0x20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C07Cu;
    // 0x24c07c: 0x0  nop
    ctx->pc = 0x24c07cu;
    // NOP
    ctx->pc = 0x24c080u;
}
