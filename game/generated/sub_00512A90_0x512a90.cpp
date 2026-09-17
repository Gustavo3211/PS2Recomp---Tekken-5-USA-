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

// Function: sub_00512A90
// Address: 0x512a90 - 0x512ad0
void sub_00512A90_0x512a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512A90_0x512a90");
#endif

    ctx->pc = 0x512a90u;

    // 0x512a90: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x512a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x512a94: 0x3e00008  jr          $ra
    ctx->pc = 0x512A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512A94u;
        // 0x512a98: 0x2442e440  addiu       $v0, $v0, -0x1BC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512A9Cu;
    // 0x512a9c: 0x0  nop
    ctx->pc = 0x512a9cu;
    // NOP
    // 0x512aa0: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x512aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x512aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x512AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512AA4u;
        // 0x512aa8: 0x2442e640  addiu       $v0, $v0, -0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512AACu;
    // 0x512aac: 0x0  nop
    ctx->pc = 0x512aacu;
    // NOP
    // 0x512ab0: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x512ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x512ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x512AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512AB4u;
        // 0x512ab8: 0x2442e840  addiu       $v0, $v0, -0x17C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512ABCu;
    // 0x512abc: 0x0  nop
    ctx->pc = 0x512abcu;
    // NOP
    // 0x512ac0: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x512ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x512ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x512AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512AC4u;
        // 0x512ac8: 0x2442ea40  addiu       $v0, $v0, -0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512ACCu;
    // 0x512acc: 0x0  nop
    ctx->pc = 0x512accu;
    // NOP
    ctx->pc = 0x512ad0u;
}
