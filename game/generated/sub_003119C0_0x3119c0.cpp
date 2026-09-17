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

// Function: sub_003119C0
// Address: 0x3119c0 - 0x3119e0
void sub_003119C0_0x3119c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003119C0_0x3119c0");
#endif

    ctx->pc = 0x3119c0u;

    // 0x3119c0: 0x8f84c53c  lw          $a0, -0x3AC4($gp)
    ctx->pc = 0x3119c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952252)));
    // 0x3119c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3119C4u;
    {
        const bool branch_taken_0x3119c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3119C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119C4u;
        // 0x3119c8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119c4) {
            ctx->pc = 0x3119D8u;
            goto label_3119d8;
        }
    }
    ctx->pc = 0x3119CCu;
    // 0x3119cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3119ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3119d0: 0xaf83c53c  sw          $v1, -0x3AC4($gp)
    ctx->pc = 0x3119d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952252), GPR_U32(ctx, 3));
    // 0x3119d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3119d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3119d8:
    // 0x3119d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3119D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3119D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3119E0u;
}
