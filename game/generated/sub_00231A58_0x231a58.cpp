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

// Function: sub_00231A58
// Address: 0x231a58 - 0x231a68
void sub_00231A58_0x231a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A58_0x231a58");
#endif

    ctx->pc = 0x231a58u;

    // 0x231a58: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x231a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x231a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x231A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A5Cu;
        // 0x231a60: 0x8c62d38c  lw          $v0, -0x2C74($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955916)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A64u;
    // 0x231a64: 0x0  nop
    ctx->pc = 0x231a64u;
    // NOP
    ctx->pc = 0x231a68u;
}
