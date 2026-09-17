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

// Function: sub_0032A608
// Address: 0x32a608 - 0x32a630
void sub_0032A608_0x32a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A608_0x32a608");
#endif

    ctx->pc = 0x32a608u;

    // 0x32a608: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x32a608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x32a60c: 0x2ca30008  sltiu       $v1, $a1, 0x8
    ctx->pc = 0x32a60cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x32a610: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A610u;
    {
        const bool branch_taken_0x32a610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A610u;
        // 0x32a614: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a610) {
            ctx->pc = 0x32A628u;
            goto label_32a628;
        }
    }
    ctx->pc = 0x32A618u;
    // 0x32a618: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x32a618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32a61c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32a620: 0x3e00008  jr          $ra
    ctx->pc = 0x32A620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A620u;
        // 0x32a624: 0x244202a0  addiu       $v0, $v0, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A628u;
label_32a628:
    // 0x32a628: 0x3e00008  jr          $ra
    ctx->pc = 0x32A628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A628u;
        // 0x32a62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A630u;
}
