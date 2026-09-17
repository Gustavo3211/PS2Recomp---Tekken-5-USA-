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

// Function: sub_002D0BD0
// Address: 0x2d0bd0 - 0x2d0c08
void sub_002D0BD0_0x2d0bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0BD0_0x2d0bd0");
#endif

    switch (ctx->pc) {
        case 0x2d0bf8u: goto label_2d0bf8;
        default: break;
    }

    ctx->pc = 0x2d0bd0u;

    // 0x2d0bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0bd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d0bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d0be0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2d0be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2d0be4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d0be8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2d0be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d0bec: 0xaf80cb38  sw          $zero, -0x34C8($gp)
    ctx->pc = 0x2d0becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953784), GPR_U32(ctx, 0));
    // 0x2d0bf0: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x2D0BF0u;
    SET_GPR_U32(ctx, 31, 0x2D0BF8u);
    ctx->pc = 0x2D0BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BF0u;
    // 0x2d0bf4: 0xff80cb48  sd          $zero, -0x34B8($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294953800), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x2D0BF0u, 0x2D0BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BF8u;
label_2d0bf8:
    // 0x2d0bf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0bfc: 0xaf82cb3c  sw          $v0, -0x34C4($gp)
    ctx->pc = 0x2d0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953788), GPR_U32(ctx, 2));
    // 0x2d0c00: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C00u;
        // 0x2d0c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0C08u;
}
