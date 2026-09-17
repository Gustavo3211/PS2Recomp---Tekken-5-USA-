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

// Function: sub_00231A28
// Address: 0x231a28 - 0x231a38
void sub_00231A28_0x231a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A28_0x231a28");
#endif

    ctx->pc = 0x231a28u;

    // 0x231a28: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x231a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x231a2c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x231a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231a30: 0x3e00008  jr          $ra
    ctx->pc = 0x231A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A30u;
        // 0x231a34: 0xac62d390  sw          $v0, -0x2C70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294955920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A38u;
}
