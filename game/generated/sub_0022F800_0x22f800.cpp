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

// Function: sub_0022F800
// Address: 0x22f800 - 0x22f838
void sub_0022F800_0x22f800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F800_0x22f800");
#endif

    switch (ctx->pc) {
        case 0x22f810u: goto label_22f810;
        default: break;
    }

    ctx->pc = 0x22f800u;

    // 0x22f800: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x22f800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x22f804: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x22f804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x22f808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f80c: 0x0  nop
    ctx->pc = 0x22f80cu;
    // NOP
label_22f810:
    // 0x22f810: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x22f810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22f814: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22f814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22f818: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f81c: 0x2ca30008  sltiu       $v1, $a1, 0x8
    ctx->pc = 0x22f81cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x22f820: 0x0  nop
    ctx->pc = 0x22f820u;
    // NOP
    // 0x22f824: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F824u;
    {
        const bool branch_taken_0x22f824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F824u;
        // 0x22f828: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f824) {
            ctx->pc = 0x22F810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f810;
        }
    }
    ctx->pc = 0x22F82Cu;
    // 0x22f82c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F834u;
    // 0x22f834: 0x0  nop
    ctx->pc = 0x22f834u;
    // NOP
    ctx->pc = 0x22f838u;
}
