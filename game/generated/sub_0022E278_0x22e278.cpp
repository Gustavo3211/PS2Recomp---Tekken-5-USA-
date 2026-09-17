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

// Function: sub_0022E278
// Address: 0x22e278 - 0x22e288
void sub_0022E278_0x22e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E278_0x22e278");
#endif

    ctx->pc = 0x22e278u;

    // 0x22e278: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22e278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22e27c: 0x3e00008  jr          $ra
    ctx->pc = 0x22E27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E27Cu;
        // 0x22e280: 0xac4496b4  sw          $a0, -0x694C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940340), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E284u;
    // 0x22e284: 0x0  nop
    ctx->pc = 0x22e284u;
    // NOP
    ctx->pc = 0x22e288u;
}
