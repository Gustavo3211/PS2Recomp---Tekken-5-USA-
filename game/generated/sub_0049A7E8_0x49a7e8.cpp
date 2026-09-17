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

// Function: sub_0049A7E8
// Address: 0x49a7e8 - 0x49a7f8
void sub_0049A7E8_0x49a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A7E8_0x49a7e8");
#endif

    switch (ctx->pc) {
        case 0x49a7f0u: goto label_49a7f0;
        default: break;
    }

    ctx->pc = 0x49a7e8u;

    // 0x49a7e8: 0xc1267fe  jal         func_499FF8
    ctx->pc = 0x49A7E8u;
    SET_GPR_U32(ctx, 31, 0x49A7F0u);
    ctx->pc = 0x499FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499FF8u, 0x49A7E8u, 0x49A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A7F0u;
label_49a7f0:
    // 0x49a7f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x49A7F0u;
    {
        const bool branch_taken_0x49a7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7F0u;
        // 0x49a7f4: 0x26220b60  addiu       $v0, $s1, 0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a7f0) {
            ctx->pc = 0x49A810u;
            return;
        }
    }
    ctx->pc = 0x49A7F8u;
}
