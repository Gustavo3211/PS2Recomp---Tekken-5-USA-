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

// Function: sub_00340660
// Address: 0x340660 - 0x340698
void sub_00340660_0x340660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340660_0x340660");
#endif

    switch (ctx->pc) {
        case 0x340670u: goto label_340670;
        default: break;
    }

    ctx->pc = 0x340660u;

    // 0x340660: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x340660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340668: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x340668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x34066c: 0x0  nop
    ctx->pc = 0x34066cu;
    // NOP
label_340670:
    // 0x340670: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x340670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x340674: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x340674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x340678: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x340678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x34067c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x34067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x340680: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x340680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x340684: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x340684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x340688: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x340688u;
    {
        const bool branch_taken_0x340688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340688u;
        // 0x34068c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340688) {
            ctx->pc = 0x340670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340670;
        }
    }
    ctx->pc = 0x340690u;
    // 0x340690: 0x3e00008  jr          $ra
    ctx->pc = 0x340690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340698u;
}
