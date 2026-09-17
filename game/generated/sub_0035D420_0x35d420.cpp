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

// Function: sub_0035D420
// Address: 0x35d420 - 0x35d468
void sub_0035D420_0x35d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D420_0x35d420");
#endif

    switch (ctx->pc) {
        case 0x35d438u: goto label_35d438;
        default: break;
    }

    ctx->pc = 0x35d420u;

    // 0x35d420: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35d420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35d424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d428: 0x24421378  addiu       $v0, $v0, 0x1378
    ctx->pc = 0x35d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35d42c: 0x24470050  addiu       $a3, $v0, 0x50
    ctx->pc = 0x35d42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x35d430: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x35d430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D13C8u));
    // 0x35d434: 0x0  nop
    ctx->pc = 0x35d434u;
    // NOP
label_35d438:
    // 0x35d438: 0x24e7006c  addiu       $a3, $a3, 0x6C
    ctx->pc = 0x35d438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
    // 0x35d43c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x35d43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d440: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35d440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35d444: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D444u;
    {
        const bool branch_taken_0x35d444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x35D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D444u;
        // 0x35d448: 0x28c50030  slti        $a1, $a2, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d444) {
            ctx->pc = 0x35D460u;
            goto label_35d460;
        }
    }
    ctx->pc = 0x35D44Cu;
    // 0x35d44c: 0x0  nop
    ctx->pc = 0x35d44cu;
    // NOP
    // 0x35d450: 0x0  nop
    ctx->pc = 0x35d450u;
    // NOP
    // 0x35d454: 0x54a0fff8  bnel        $a1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35D454u;
    {
        const bool branch_taken_0x35d454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d454) {
            ctx->pc = 0x35D458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D454u;
            // 0x35d458: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d438;
        }
    }
    ctx->pc = 0x35D45Cu;
    // 0x35d45c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_35d460:
    // 0x35d460: 0x3e00008  jr          $ra
    ctx->pc = 0x35D460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D468u;
}
