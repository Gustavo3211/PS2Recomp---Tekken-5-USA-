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

// Function: sub_001F4668
// Address: 0x1f4668 - 0x1f46a0
void sub_001F4668_0x1f4668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4668_0x1f4668");
#endif

    switch (ctx->pc) {
        case 0x1f4670u: goto label_1f4670;
        default: break;
    }

    ctx->pc = 0x1f4668u;

    // 0x1f4668: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f466c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1f466cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f4670:
    // 0x1f4670: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f4670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f4674: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f4678: 0x28e60003  slti        $a2, $a3, 0x3
    ctx->pc = 0x1f4678u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f467c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1f467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f4680: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4680u;
    {
        const bool branch_taken_0x1f4680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4680u;
        // 0x1f4684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4680) {
            ctx->pc = 0x1F4698u;
            goto label_1f4698;
        }
    }
    ctx->pc = 0x1F4688u;
    // 0x1f4688: 0x0  nop
    ctx->pc = 0x1f4688u;
    // NOP
    // 0x1f468c: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F468Cu;
    {
        const bool branch_taken_0x1f468c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f468c) {
            ctx->pc = 0x1F4690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F468Cu;
            // 0x1f4690: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4670;
        }
    }
    ctx->pc = 0x1F4694u;
    // 0x1f4694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f4694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4698:
    // 0x1f4698: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F46A0u;
}
