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

// Function: sub_002770C0
// Address: 0x2770c0 - 0x2770d0
void sub_002770C0_0x2770c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002770C0_0x2770c0");
#endif

    ctx->pc = 0x2770c0u;

    // 0x2770c0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x2770c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x2770c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2770C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2770C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770C4u;
        // 0x2770c8: 0x8c62069c  lw          $v0, 0x69C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1692)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2770C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2770CCu;
    // 0x2770cc: 0x0  nop
    ctx->pc = 0x2770ccu;
    // NOP
    ctx->pc = 0x2770d0u;
}
