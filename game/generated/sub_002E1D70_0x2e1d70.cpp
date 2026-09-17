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

// Function: sub_002E1D70
// Address: 0x2e1d70 - 0x2e1d88
void sub_002E1D70_0x2e1d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1D70_0x2e1d70");
#endif

    ctx->pc = 0x2e1d70u;

    // 0x2e1d70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e1d74: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x2e1d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x2e1d78: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x2e1d78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2e1d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D7Cu;
        // 0x2e1d80: 0xac254510  sw          $a1, 0x4510($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 17680), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1D84u;
    // 0x2e1d84: 0x0  nop
    ctx->pc = 0x2e1d84u;
    // NOP
    ctx->pc = 0x2e1d88u;
}
