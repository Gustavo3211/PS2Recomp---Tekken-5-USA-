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

// Function: sub_0036E430
// Address: 0x36e430 - 0x36e468
void sub_0036E430_0x36e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E430_0x36e430");
#endif

    switch (ctx->pc) {
        case 0x36e448u: goto label_36e448;
        default: break;
    }

    ctx->pc = 0x36e430u;

    // 0x36e430: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36e434: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36e434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x36e438: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36e43c: 0x248403ec  addiu       $a0, $a0, 0x3EC
    ctx->pc = 0x36e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1004));
    // 0x36e440: 0xc048b90  jal         func_122E40
    ctx->pc = 0x36E440u;
    SET_GPR_U32(ctx, 31, 0x36E448u);
    ctx->pc = 0x36E444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E440u;
    // 0x36e444: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x36E440u, 0x36E448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E448u;
label_36e448:
    // 0x36e448: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36e448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36e44c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E44Cu;
        // 0x36e450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E454u;
    // 0x36e454: 0x0  nop
    ctx->pc = 0x36e454u;
    // NOP
    // 0x36e458: 0x3e00008  jr          $ra
    ctx->pc = 0x36E458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E458u;
        // 0x36e45c: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E460u;
    // 0x36e460: 0x3e00008  jr          $ra
    ctx->pc = 0x36E460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E460u;
        // 0x36e464: 0x24820054  addiu       $v0, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E468u;
}
