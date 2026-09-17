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

// Function: sub_004F9980
// Address: 0x4f9980 - 0x4f99b0
void sub_004F9980_0x4f9980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9980_0x4f9980");
#endif

    ctx->pc = 0x4f9980u;

    // 0x4f9980: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4f9980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4f9984: 0x9443d720  lhu         $v1, -0x28E0($v0)
    ctx->pc = 0x4f9984u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72D720u));
    // 0x4f9988: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x4f9988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x4f998c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F998Cu;
    {
        const bool branch_taken_0x4f998c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F998Cu;
        // 0x4f9990: 0x42240  sll         $a0, $a0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f998c) {
            ctx->pc = 0x4F99A0u;
            goto label_4f99a0;
        }
    }
    ctx->pc = 0x4F9994u;
    // 0x4f9994: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f9994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f9998: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F9998u;
    {
        const bool branch_taken_0x4f9998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9998u;
        // 0x4f999c: 0x24423380  addiu       $v0, $v0, 0x3380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9998) {
            ctx->pc = 0x4F99A8u;
            goto label_4f99a8;
        }
    }
    ctx->pc = 0x4F99A0u;
label_4f99a0:
    // 0x4f99a0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f99a4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x4f99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
label_4f99a8:
    // 0x4f99a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F99A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F99A8u;
        // 0x4f99ac: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F99A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F99B0u;
}
