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

// Function: sub_002A51A0
// Address: 0x2a51a0 - 0x2a51b0
void sub_002A51A0_0x2a51a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A51A0_0x2a51a0");
#endif

    ctx->pc = 0x2a51a0u;

    // 0x2a51a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a51a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A51A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51A4u;
        // 0x2a51a8: 0xa382b85d  sb          $v0, -0x47A3($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948957), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A51A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A51ACu;
    // 0x2a51ac: 0x0  nop
    ctx->pc = 0x2a51acu;
    // NOP
    ctx->pc = 0x2a51b0u;
}
