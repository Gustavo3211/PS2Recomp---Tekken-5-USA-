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

// Function: sub_002FC6A0
// Address: 0x2fc6a0 - 0x2fc6c8
void sub_002FC6A0_0x2fc6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC6A0_0x2fc6a0");
#endif

    ctx->pc = 0x2fc6a0u;

    // 0x2fc6a0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2fc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fc6a4: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x2fc6a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fc6a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC6A8u;
    {
        const bool branch_taken_0x2fc6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc6a8) {
            ctx->pc = 0x2FC6C0u;
            goto label_2fc6c0;
        }
    }
    ctx->pc = 0x2FC6B0u;
    // 0x2fc6b0: 0x3c01001b  lui         $at, 0x1B
    ctx->pc = 0x2fc6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)27 << 16));
    // 0x2fc6b4: 0x2421ec80  addiu       $at, $at, -0x1380
    ctx->pc = 0x2fc6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962304));
    // 0x2fc6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6B8u;
        // 0x2fc6bc: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC6C0u;
label_2fc6c0:
    // 0x2fc6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6C0u;
        // 0x2fc6c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC6C8u;
}
