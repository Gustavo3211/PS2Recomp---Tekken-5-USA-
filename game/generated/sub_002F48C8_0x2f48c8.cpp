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

// Function: sub_002F48C8
// Address: 0x2f48c8 - 0x2f48d8
void sub_002F48C8_0x2f48c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F48C8_0x2f48c8");
#endif

    ctx->pc = 0x2f48c8u;

    // 0x2f48c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f48cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F48CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48CCu;
        // 0x2f48d0: 0xaf82c2c8  sw          $v0, -0x3D38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F48CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F48D4u;
    // 0x2f48d4: 0x0  nop
    ctx->pc = 0x2f48d4u;
    // NOP
    ctx->pc = 0x2f48d8u;
}
