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

// Function: sub_00342C90
// Address: 0x342c90 - 0x342cb8
void sub_00342C90_0x342c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342C90_0x342c90");
#endif

    ctx->pc = 0x342c90u;

    // 0x342c90: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x342c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x342c94: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x342c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x342c98: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x342c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x342c9c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x342c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x342ca0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x342ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x342ca4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x342ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x342ca8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x342ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x342cac: 0x3e00008  jr          $ra
    ctx->pc = 0x342CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CACu;
        // 0x342cb0: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342CB4u;
    // 0x342cb4: 0x0  nop
    ctx->pc = 0x342cb4u;
    // NOP
    ctx->pc = 0x342cb8u;
}
