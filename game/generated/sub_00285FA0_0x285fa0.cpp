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

// Function: sub_00285FA0
// Address: 0x285fa0 - 0x285fd8
void sub_00285FA0_0x285fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285FA0_0x285fa0");
#endif

    switch (ctx->pc) {
        case 0x285fb8u: goto label_285fb8;
        case 0x285fc8u: goto label_285fc8;
        default: break;
    }

    ctx->pc = 0x285fa0u;

    // 0x285fa0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x285fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x285fa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x285fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285fa8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x285fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x285fac: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x285facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x285fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x285FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FB0u;
        // 0x285fb4: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285FB8u;
label_285fb8:
    // 0x285fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x285FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FBCu;
        // 0x285fc0: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285FC4u;
    // 0x285fc4: 0x0  nop
    ctx->pc = 0x285fc4u;
    // NOP
label_285fc8:
    // 0x285fc8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x285fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x285fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x285FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FCCu;
        // 0x285fd0: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285FD4u;
    // 0x285fd4: 0x0  nop
    ctx->pc = 0x285fd4u;
    // NOP
    ctx->pc = 0x285fd8u;
}
