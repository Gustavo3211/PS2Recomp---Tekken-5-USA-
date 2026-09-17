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

// Function: sub_004A4590
// Address: 0x4a4590 - 0x4a45a0
void sub_004A4590_0x4a4590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4590_0x4a4590");
#endif

    switch (ctx->pc) {
        case 0x4a4598u: goto label_4a4598;
        default: break;
    }

    ctx->pc = 0x4a4590u;

    // 0x4a4590: 0xc1290e4  jal         func_4A4390
    ctx->pc = 0x4A4590u;
    SET_GPR_U32(ctx, 31, 0x4A4598u);
    ctx->pc = 0x4A4594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4590u;
    // 0x4a4594: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4390u, 0x4A4590u, 0x4A4598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4598u;
label_4a4598:
    // 0x4a4598: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A4598u;
    {
        const bool branch_taken_0x4a4598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4598u;
        // 0x4a459c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4598) {
            ctx->pc = 0x4A45ACu;
            return;
        }
    }
    ctx->pc = 0x4A45A0u;
}
