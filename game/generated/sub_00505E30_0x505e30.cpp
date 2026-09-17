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

// Function: sub_00505E30
// Address: 0x505e30 - 0x505e40
void sub_00505E30_0x505e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505E30_0x505e30");
#endif

    switch (ctx->pc) {
        case 0x505e38u: goto label_505e38;
        default: break;
    }

    ctx->pc = 0x505e30u;

    // 0x505e30: 0xc1416fa  jal         func_505BE8
    ctx->pc = 0x505E30u;
    SET_GPR_U32(ctx, 31, 0x505E38u);
    ctx->pc = 0x505BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505BE8u, 0x505E30u, 0x505E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505E38u;
label_505e38:
    // 0x505e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x505E38u;
    {
        const bool branch_taken_0x505e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505E38u;
        // 0x505e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505e38) {
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505E40u;
}
