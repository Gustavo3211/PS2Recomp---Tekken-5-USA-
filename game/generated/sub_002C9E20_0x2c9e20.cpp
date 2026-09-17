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

// Function: sub_002C9E20
// Address: 0x2c9e20 - 0x2c9e38
void sub_002C9E20_0x2c9e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9E20_0x2c9e20");
#endif

    ctx->pc = 0x2c9e20u;

    // 0x2c9e20: 0x8f83bb18  lw          $v1, -0x44E8($gp)
    ctx->pc = 0x2c9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2c9e24: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9E24u;
    {
        const bool branch_taken_0x2c9e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E24u;
        // 0x2c9e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e24) {
            ctx->pc = 0x2C9E30u;
            goto label_2c9e30;
        }
    }
    ctx->pc = 0x2C9E2Cu;
    // 0x2c9e2c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2c9e30:
    // 0x2c9e30: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9E38u;
}
