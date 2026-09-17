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

// Function: sub_002DC820
// Address: 0x2dc820 - 0x2dc850
void sub_002DC820_0x2dc820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC820_0x2dc820");
#endif

    ctx->pc = 0x2dc820u;

    // 0x2dc820: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2dc820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dc824: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2dc824u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2dc828: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2dc828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2dc82c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2dc82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2dc830: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2dc830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dc834: 0x8c423720  lw          $v0, 0x3720($v0)
    ctx->pc = 0x2dc834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14112)));
    // 0x2dc838: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dc838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dc83c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2dc83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2dc840: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dc840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dc844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dc844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dc848: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC848u;
        // 0x2dc84c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC850u;
}
