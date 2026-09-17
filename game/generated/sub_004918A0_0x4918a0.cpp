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

// Function: sub_004918A0
// Address: 0x4918a0 - 0x4918b0
void sub_004918A0_0x4918a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004918A0_0x4918a0");
#endif

    ctx->pc = 0x4918a0u;

    // 0x4918a0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4918a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4918a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4918A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4918A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4918A4u;
        // 0x4918a8: 0x24420840  addiu       $v0, $v0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4918A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4918ACu;
    // 0x4918ac: 0x0  nop
    ctx->pc = 0x4918acu;
    // NOP
    ctx->pc = 0x4918b0u;
}
