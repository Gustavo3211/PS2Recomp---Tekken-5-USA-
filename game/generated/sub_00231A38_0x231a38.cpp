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

// Function: sub_00231A38
// Address: 0x231a38 - 0x231a48
void sub_00231A38_0x231a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A38_0x231a38");
#endif

    ctx->pc = 0x231a38u;

    // 0x231a38: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x231a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x231a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x231A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A3Cu;
        // 0x231a40: 0xac40d38c  sw          $zero, -0x2C74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955916), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A44u;
    // 0x231a44: 0x0  nop
    ctx->pc = 0x231a44u;
    // NOP
    ctx->pc = 0x231a48u;
}
