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

// Function: sub_004AE9F0
// Address: 0x4ae9f0 - 0x4aea00
void sub_004AE9F0_0x4ae9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE9F0_0x4ae9f0");
#endif

    switch (ctx->pc) {
        case 0x4ae9f8u: goto label_4ae9f8;
        default: break;
    }

    ctx->pc = 0x4ae9f0u;

    // 0x4ae9f0: 0xc12ba4e  jal         func_4AE938
    ctx->pc = 0x4AE9F0u;
    SET_GPR_U32(ctx, 31, 0x4AE9F8u);
    ctx->pc = 0x4AE938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE938u, 0x4AE9F0u, 0x4AE9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE9F8u;
label_4ae9f8:
    // 0x4ae9f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE9F8u;
    {
        const bool branch_taken_0x4ae9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE9F8u;
        // 0x4ae9fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae9f8) {
            ctx->pc = 0x4AEA0Cu;
            return;
        }
    }
    ctx->pc = 0x4AEA00u;
}
