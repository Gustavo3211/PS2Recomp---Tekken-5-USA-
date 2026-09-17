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

// Function: sub_001F4628
// Address: 0x1f4628 - 0x1f4668
void sub_001F4628_0x1f4628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4628_0x1f4628");
#endif

    switch (ctx->pc) {
        case 0x1f4638u: goto label_1f4638;
        default: break;
    }

    ctx->pc = 0x1f4628u;

    // 0x1f4628: 0x24830130  addiu       $v1, $a0, 0x130
    ctx->pc = 0x1f4628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x1f462c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F462Cu;
    {
        const bool branch_taken_0x1f462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F462Cu;
        // 0x1f4630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f462c) {
            ctx->pc = 0x1F464Cu;
            goto label_1f464c;
        }
    }
    ctx->pc = 0x1F4634u;
    // 0x1f4634: 0x0  nop
    ctx->pc = 0x1f4634u;
    // NOP
label_1f4638:
    // 0x1f4638: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1f4638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f463c: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1f463cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f4640: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4640u;
    {
        const bool branch_taken_0x1f4640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4640u;
        // 0x1f4644: 0x24420130  addiu       $v0, $v0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4640) {
            ctx->pc = 0x1F4660u;
            goto label_1f4660;
        }
    }
    ctx->pc = 0x1F4648u;
    // 0x1f4648: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1f4648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f464c:
    // 0x1f464c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f4650: 0x0  nop
    ctx->pc = 0x1f4650u;
    // NOP
    // 0x1f4654: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F4654u;
    {
        const bool branch_taken_0x1f4654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4654) {
            ctx->pc = 0x1F4658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4654u;
            // 0x1f4658: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4638;
        }
    }
    ctx->pc = 0x1F465Cu;
    // 0x1f465c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f465cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1f4660:
    // 0x1f4660: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4668u;
}
