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

// Function: sub_0021F620
// Address: 0x21f620 - 0x21f640
void sub_0021F620_0x21f620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F620_0x21f620");
#endif

    switch (ctx->pc) {
        case 0x21f630u: goto label_21f630;
        default: break;
    }

    ctx->pc = 0x21f620u;

    // 0x21f620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f628: 0xc0c4d90  jal         func_313640
    ctx->pc = 0x21F628u;
    SET_GPR_U32(ctx, 31, 0x21F630u);
    ctx->pc = 0x313640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313640u, 0x21F628u, 0x21F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F630u;
label_21f630:
    // 0x21f630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f634: 0x3e00008  jr          $ra
    ctx->pc = 0x21F634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F634u;
        // 0x21f638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F63Cu;
    // 0x21f63c: 0x0  nop
    ctx->pc = 0x21f63cu;
    // NOP
    ctx->pc = 0x21f640u;
}
