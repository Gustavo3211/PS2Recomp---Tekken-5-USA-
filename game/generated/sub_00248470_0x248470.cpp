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

// Function: sub_00248470
// Address: 0x248470 - 0x248488
void sub_00248470_0x248470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248470_0x248470");
#endif

    ctx->pc = 0x248470u;

    // 0x248470: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x248470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x248474: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x248474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x248478: 0x2421f728  addiu       $at, $at, -0x8D8
    ctx->pc = 0x248478u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294965032));
    // 0x24847c: 0x3e00008  jr          $ra
    ctx->pc = 0x24847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24847Cu;
        // 0x248480: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24847Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248484u;
    // 0x248484: 0x0  nop
    ctx->pc = 0x248484u;
    // NOP
    ctx->pc = 0x248488u;
}
