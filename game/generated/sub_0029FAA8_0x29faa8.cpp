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

// Function: sub_0029FAA8
// Address: 0x29faa8 - 0x29fad8
void sub_0029FAA8_0x29faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FAA8_0x29faa8");
#endif

    switch (ctx->pc) {
        case 0x29fab0u: goto label_29fab0;
        default: break;
    }

    ctx->pc = 0x29faa8u;

    // 0x29faa8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x29faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x29faac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29faacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fab0:
    // 0x29fab0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29fab4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29fab8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29fabc: 0x28a30011  slti        $v1, $a1, 0x11
    ctx->pc = 0x29fabcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x29fac0: 0x0  nop
    ctx->pc = 0x29fac0u;
    // NOP
    // 0x29fac4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29FAC4u;
    {
        const bool branch_taken_0x29fac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAC4u;
        // 0x29fac8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fac4) {
            ctx->pc = 0x29FAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fab0;
        }
    }
    ctx->pc = 0x29FACCu;
    // 0x29facc: 0x3e00008  jr          $ra
    ctx->pc = 0x29FACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FAD4u;
    // 0x29fad4: 0x0  nop
    ctx->pc = 0x29fad4u;
    // NOP
    ctx->pc = 0x29fad8u;
}
