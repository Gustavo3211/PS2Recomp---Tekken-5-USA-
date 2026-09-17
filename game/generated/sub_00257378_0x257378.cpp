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

// Function: sub_00257378
// Address: 0x257378 - 0x257398
void sub_00257378_0x257378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257378_0x257378");
#endif

    switch (ctx->pc) {
        case 0x257388u: goto label_257388;
        default: break;
    }

    ctx->pc = 0x257378u;

    // 0x257378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25737c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25737cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257380: 0xc094c22  jal         func_253088
    ctx->pc = 0x257380u;
    SET_GPR_U32(ctx, 31, 0x257388u);
    ctx->pc = 0x253088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253088u, 0x257380u, 0x257388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257388u;
label_257388:
    // 0x257388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25738c: 0xaf82aa10  sw          $v0, -0x55F0($gp)
    ctx->pc = 0x25738cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945296), GPR_U32(ctx, 2));
    // 0x257390: 0x3e00008  jr          $ra
    ctx->pc = 0x257390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257390u;
        // 0x257394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257398u;
}
