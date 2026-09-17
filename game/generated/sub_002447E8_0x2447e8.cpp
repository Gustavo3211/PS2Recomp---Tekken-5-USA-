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

// Function: sub_002447E8
// Address: 0x2447e8 - 0x244818
void sub_002447E8_0x2447e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002447E8_0x2447e8");
#endif

    ctx->pc = 0x2447e8u;

    // 0x2447e8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2447e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2447ec: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2447ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2447f0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2447f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2447f4: 0x24426690  addiu       $v0, $v0, 0x6690
    ctx->pc = 0x2447f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26256));
    // 0x2447f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2447f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2447fc: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x2447fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x244800: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x244800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x244804: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x244804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x244808: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x244808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24480c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x24480cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x244810: 0x3e00008  jr          $ra
    ctx->pc = 0x244810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244810u;
        // 0x244814: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244818u;
}
