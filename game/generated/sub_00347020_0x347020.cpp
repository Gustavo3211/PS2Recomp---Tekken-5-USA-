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

// Function: sub_00347020
// Address: 0x347020 - 0x347040
void sub_00347020_0x347020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347020_0x347020");
#endif

    switch (ctx->pc) {
        case 0x347030u: goto label_347030;
        default: break;
    }

    ctx->pc = 0x347020u;

    // 0x347020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x347028: 0xc0d1bba  jal         func_346EE8
    ctx->pc = 0x347028u;
    SET_GPR_U32(ctx, 31, 0x347030u);
    ctx->pc = 0x346EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346EE8u, 0x347028u, 0x347030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347030u;
label_347030:
    // 0x347030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347034: 0x3e00008  jr          $ra
    ctx->pc = 0x347034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347034u;
        // 0x347038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34703Cu;
    // 0x34703c: 0x0  nop
    ctx->pc = 0x34703cu;
    // NOP
    ctx->pc = 0x347040u;
}
