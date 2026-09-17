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

// Function: sub_0050F0C8
// Address: 0x50f0c8 - 0x50f0d8
void sub_0050F0C8_0x50f0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F0C8_0x50f0c8");
#endif

    switch (ctx->pc) {
        case 0x50f0d0u: goto label_50f0d0;
        default: break;
    }

    ctx->pc = 0x50f0c8u;

    // 0x50f0c8: 0xc142942  jal         func_50A508
    ctx->pc = 0x50F0C8u;
    SET_GPR_U32(ctx, 31, 0x50F0D0u);
    ctx->pc = 0x50A508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50A508u, 0x50F0C8u, 0x50F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F0D0u;
label_50f0d0:
    // 0x50f0d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x50F0D0u;
    {
        const bool branch_taken_0x50f0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F0D0u;
        // 0x50f0d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f0d0) {
            ctx->pc = 0x50F0E4u;
            return;
        }
    }
    ctx->pc = 0x50F0D8u;
}
