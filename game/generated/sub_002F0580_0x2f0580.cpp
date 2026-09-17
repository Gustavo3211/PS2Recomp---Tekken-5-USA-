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

// Function: sub_002F0580
// Address: 0x2f0580 - 0x2f05a0
void sub_002F0580_0x2f0580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0580_0x2f0580");
#endif

    switch (ctx->pc) {
        case 0x2f0590u: goto label_2f0590;
        default: break;
    }

    ctx->pc = 0x2f0580u;

    // 0x2f0580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0588: 0xc0bc150  jal         func_2F0540
    ctx->pc = 0x2F0588u;
    SET_GPR_U32(ctx, 31, 0x2F0590u);
    ctx->pc = 0x2F0540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0540u, 0x2F0588u, 0x2F0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0590u;
label_2f0590:
    // 0x2f0590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0594: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0594u;
        // 0x2f0598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F059Cu;
    // 0x2f059c: 0x0  nop
    ctx->pc = 0x2f059cu;
    // NOP
    ctx->pc = 0x2f05a0u;
}
