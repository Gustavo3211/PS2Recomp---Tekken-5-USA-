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

// Function: sub_0033C400
// Address: 0x33c400 - 0x33c420
void sub_0033C400_0x33c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C400_0x33c400");
#endif

    switch (ctx->pc) {
        case 0x33c410u: goto label_33c410;
        default: break;
    }

    ctx->pc = 0x33c400u;

    // 0x33c400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c408: 0xc0cb1a6  jal         func_32C698
    ctx->pc = 0x33C408u;
    SET_GPR_U32(ctx, 31, 0x33C410u);
    ctx->pc = 0x33C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C408u;
    // 0x33c40c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C698u, 0x33C408u, 0x33C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C410u;
label_33c410:
    // 0x33c410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c414: 0x3e00008  jr          $ra
    ctx->pc = 0x33C414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C414u;
        // 0x33c418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C41Cu;
    // 0x33c41c: 0x0  nop
    ctx->pc = 0x33c41cu;
    // NOP
    ctx->pc = 0x33c420u;
}
