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

// Function: sub_00100D58
// Address: 0x100d58 - 0x100d80
void sub_00100D58_0x100d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100D58_0x100d58");
#endif

    switch (ctx->pc) {
        case 0x100d68u: goto label_100d68;
        case 0x100d70u: goto label_100d70;
        default: break;
    }

    ctx->pc = 0x100d58u;

    // 0x100d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100d5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100d60: 0xc04017a  jal         func_1005E8
    ctx->pc = 0x100D60u;
    SET_GPR_U32(ctx, 31, 0x100D68u);
    ctx->pc = 0x1005E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005E8u, 0x100D60u, 0x100D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D68u;
label_100d68:
    // 0x100d68: 0xc0402e8  jal         func_100BA0
    ctx->pc = 0x100D68u;
    SET_GPR_U32(ctx, 31, 0x100D70u);
    ctx->pc = 0x100BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100BA0u, 0x100D68u, 0x100D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D70u;
label_100d70:
    // 0x100d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100d74: 0x3e00008  jr          $ra
    ctx->pc = 0x100D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D74u;
        // 0x100d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100D7Cu;
    // 0x100d7c: 0x0  nop
    ctx->pc = 0x100d7cu;
    // NOP
    ctx->pc = 0x100d80u;
}
