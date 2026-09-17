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

// Function: sub_00221008
// Address: 0x221008 - 0x221020
void sub_00221008_0x221008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221008_0x221008");
#endif

    ctx->pc = 0x221008u;

    // 0x221008: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x221008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22100c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x22100cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x221010: 0xaf82a4c8  sw          $v0, -0x5B38($gp)
    ctx->pc = 0x221010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943944), GPR_U32(ctx, 2));
    // 0x221014: 0x3e00008  jr          $ra
    ctx->pc = 0x221014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221014u;
        // 0x221018: 0xac60ca00  sw          $zero, -0x3600($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22101Cu;
    // 0x22101c: 0x0  nop
    ctx->pc = 0x22101cu;
    // NOP
    ctx->pc = 0x221020u;
}
