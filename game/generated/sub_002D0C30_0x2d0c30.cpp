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

// Function: sub_002D0C30
// Address: 0x2d0c30 - 0x2d0c60
void sub_002D0C30_0x2d0c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0C30_0x2d0c30");
#endif

    switch (ctx->pc) {
        case 0x2d0c44u: goto label_2d0c44;
        case 0x2d0c54u: goto label_2d0c54;
        default: break;
    }

    ctx->pc = 0x2d0c30u;

    // 0x2d0c30: 0x8f84cb3c  lw          $a0, -0x34C4($gp)
    ctx->pc = 0x2d0c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953788)));
    // 0x2d0c34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0c3c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x2D0C3Cu;
    SET_GPR_U32(ctx, 31, 0x2D0C44u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x2D0C3Cu, 0x2D0C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C44u;
label_2d0c44:
    // 0x2d0c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0c48: 0x8f84cb3c  lw          $a0, -0x34C4($gp)
    ctx->pc = 0x2d0c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953788)));
    // 0x2d0c4c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x2D0C4Cu;
    SET_GPR_U32(ctx, 31, 0x2D0C54u);
    ctx->pc = 0x2D0C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C4Cu;
    // 0x2d0c50: 0xaf83cb48  sw          $v1, -0x34B8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953800), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x2D0C4Cu, 0x2D0C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C54u;
label_2d0c54:
    // 0x2d0c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C58u;
        // 0x2d0c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0C60u;
}
