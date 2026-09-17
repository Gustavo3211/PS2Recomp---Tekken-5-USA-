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

// Function: sub_004F9CF8
// Address: 0x4f9cf8 - 0x4f9d18
void sub_004F9CF8_0x4f9cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9CF8_0x4f9cf8");
#endif

    ctx->pc = 0x4f9cf8u;

    // 0x4f9cf8: 0x3c020083  lui         $v0, 0x83
    ctx->pc = 0x4f9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)131 << 16));
    // 0x4f9cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9CFCu;
        // 0x4f9d00: 0x244226c0  addiu       $v0, $v0, 0x26C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9D04u;
    // 0x4f9d04: 0x0  nop
    ctx->pc = 0x4f9d04u;
    // NOP
    // 0x4f9d08: 0x3c020083  lui         $v0, 0x83
    ctx->pc = 0x4f9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)131 << 16));
    // 0x4f9d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9D0Cu;
        // 0x4f9d10: 0x24422640  addiu       $v0, $v0, 0x2640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9D14u;
    // 0x4f9d14: 0x0  nop
    ctx->pc = 0x4f9d14u;
    // NOP
    ctx->pc = 0x4f9d18u;
}
