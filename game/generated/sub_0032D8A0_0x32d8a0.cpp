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

// Function: sub_0032D8A0
// Address: 0x32d8a0 - 0x32d8c8
void sub_0032D8A0_0x32d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D8A0_0x32d8a0");
#endif

    ctx->pc = 0x32d8a0u;

    // 0x32d8a0: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x32d8a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32d8a4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D8A4u;
    {
        const bool branch_taken_0x32d8a4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x32D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8A4u;
        // 0x32d8a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d8a4) {
            ctx->pc = 0x32D8C0u;
            goto label_32d8c0;
        }
    }
    ctx->pc = 0x32D8ACu;
    // 0x32d8ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32D8ACu;
    {
        const bool branch_taken_0x32d8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d8ac) {
            ctx->pc = 0x32D8C0u;
            goto label_32d8c0;
        }
    }
    ctx->pc = 0x32D8B4u;
    // 0x32d8b4: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x32d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x32d8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x32D8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8B8u;
        // 0x32d8bc: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D8C0u;
label_32d8c0:
    // 0x32d8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x32D8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D8C8u;
}
