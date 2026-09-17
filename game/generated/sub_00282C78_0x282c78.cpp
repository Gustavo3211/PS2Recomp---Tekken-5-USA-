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

// Function: sub_00282C78
// Address: 0x282c78 - 0x282c98
void sub_00282C78_0x282c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282C78_0x282c78");
#endif

    switch (ctx->pc) {
        case 0x282c88u: goto label_282c88;
        default: break;
    }

    ctx->pc = 0x282c78u;

    // 0x282c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x282c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282c80: 0xc0404f2  jal         func_1013C8
    ctx->pc = 0x282C80u;
    SET_GPR_U32(ctx, 31, 0x282C88u);
    ctx->pc = 0x1013C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1013C8u, 0x282C80u, 0x282C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C88u;
label_282c88:
    // 0x282c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282c8c: 0xaf82ca8c  sw          $v0, -0x3574($gp)
    ctx->pc = 0x282c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953612), GPR_U32(ctx, 2));
    // 0x282c90: 0x3e00008  jr          $ra
    ctx->pc = 0x282C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282C90u;
        // 0x282c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282C98u;
}
