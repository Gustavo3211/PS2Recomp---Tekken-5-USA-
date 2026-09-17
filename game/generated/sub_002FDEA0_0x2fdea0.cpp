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

// Function: sub_002FDEA0
// Address: 0x2fdea0 - 0x2fdec0
void sub_002FDEA0_0x2fdea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDEA0_0x2fdea0");
#endif

    switch (ctx->pc) {
        case 0x2fdea4u: goto label_2fdea4;
        default: break;
    }

    ctx->pc = 0x2fdea0u;

    // 0x2fdea0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fdea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fdea4:
    // 0x2fdea4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2fdea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2fdea8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDEA8u;
    {
        const bool branch_taken_0x2fdea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdea8) {
            ctx->pc = 0x2FDEB8u;
            goto label_2fdeb8;
        }
    }
    ctx->pc = 0x2FDEB0u;
    // 0x2fdeb0: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x2FDEB0u;
    {
        const bool branch_taken_0x2fdeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEB0u;
        // 0x2fdeb4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdeb0) {
            ctx->pc = 0x2FDEA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fdea4;
        }
    }
    ctx->pc = 0x2FDEB8u;
label_2fdeb8:
    // 0x2fdeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDEC0u;
}
