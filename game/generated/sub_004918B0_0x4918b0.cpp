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

// Function: sub_004918B0
// Address: 0x4918b0 - 0x4918c0
void sub_004918B0_0x4918b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004918B0_0x4918b0");
#endif

    ctx->pc = 0x4918b0u;

    // 0x4918b0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4918b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4918b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4918B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4918B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4918B4u;
        // 0x4918b8: 0x244206b8  addiu       $v0, $v0, 0x6B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4918B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4918BCu;
    // 0x4918bc: 0x0  nop
    ctx->pc = 0x4918bcu;
    // NOP
    ctx->pc = 0x4918c0u;
}
