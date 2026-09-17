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

// Function: sub_00491880
// Address: 0x491880 - 0x4918a0
void sub_00491880_0x491880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491880_0x491880");
#endif

    ctx->pc = 0x491880u;

    // 0x491880: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x491880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x491884: 0x3e00008  jr          $ra
    ctx->pc = 0x491884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491884u;
        // 0x491888: 0x24421500  addiu       $v0, $v0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49188Cu;
    // 0x49188c: 0x0  nop
    ctx->pc = 0x49188cu;
    // NOP
    // 0x491890: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x491890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x491894: 0x3e00008  jr          $ra
    ctx->pc = 0x491894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491894u;
        // 0x491898: 0x24420800  addiu       $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49189Cu;
    // 0x49189c: 0x0  nop
    ctx->pc = 0x49189cu;
    // NOP
    ctx->pc = 0x4918a0u;
}
