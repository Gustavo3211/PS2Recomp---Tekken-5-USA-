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

// Function: sub_002FD610
// Address: 0x2fd610 - 0x2fd630
void sub_002FD610_0x2fd610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD610_0x2fd610");
#endif

    switch (ctx->pc) {
        case 0x2fd614u: goto label_2fd614;
        default: break;
    }

    ctx->pc = 0x2fd610u;

    // 0x2fd610: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fd610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd614:
    // 0x2fd614: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2fd614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fd618: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD618u;
    {
        const bool branch_taken_0x2fd618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd618) {
            ctx->pc = 0x2FD628u;
            goto label_2fd628;
        }
    }
    ctx->pc = 0x2FD620u;
    // 0x2fd620: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x2FD620u;
    {
        const bool branch_taken_0x2fd620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD620u;
        // 0x2fd624: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd620) {
            ctx->pc = 0x2FD614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd614;
        }
    }
    ctx->pc = 0x2FD628u;
label_2fd628:
    // 0x2fd628: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD630u;
}
