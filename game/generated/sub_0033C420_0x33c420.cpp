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

// Function: sub_0033C420
// Address: 0x33c420 - 0x33c440
void sub_0033C420_0x33c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C420_0x33c420");
#endif

    switch (ctx->pc) {
        case 0x33c430u: goto label_33c430;
        default: break;
    }

    ctx->pc = 0x33c420u;

    // 0x33c420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c428: 0xc0cb1d0  jal         func_32C740
    ctx->pc = 0x33C428u;
    SET_GPR_U32(ctx, 31, 0x33C430u);
    ctx->pc = 0x33C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C428u;
    // 0x33c42c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C740u, 0x33C428u, 0x33C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C430u;
label_33c430:
    // 0x33c430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c434: 0x3e00008  jr          $ra
    ctx->pc = 0x33C434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C434u;
        // 0x33c438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C43Cu;
    // 0x33c43c: 0x0  nop
    ctx->pc = 0x33c43cu;
    // NOP
    ctx->pc = 0x33c440u;
}
