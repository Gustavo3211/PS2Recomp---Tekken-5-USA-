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

// Function: sub_00218A98
// Address: 0x218a98 - 0x218ac8
void sub_00218A98_0x218a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218A98_0x218a98");
#endif

    switch (ctx->pc) {
        case 0x218aa8u: goto label_218aa8;
        default: break;
    }

    ctx->pc = 0x218a98u;

    // 0x218a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218a9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218aa0: 0xc0a5f78  jal         func_297DE0
    ctx->pc = 0x218AA0u;
    SET_GPR_U32(ctx, 31, 0x218AA8u);
    ctx->pc = 0x297DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DE0u, 0x218AA0u, 0x218AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AA8u;
label_218aa8:
    // 0x218aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218aac: 0x3e00008  jr          $ra
    ctx->pc = 0x218AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AACu;
        // 0x218ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218AB4u;
    // 0x218ab4: 0x0  nop
    ctx->pc = 0x218ab4u;
    // NOP
    // 0x218ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x218AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AB8u;
        // 0x218abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218AC0u;
    // 0x218ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x218AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AC0u;
        // 0x218ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218AC8u;
}
