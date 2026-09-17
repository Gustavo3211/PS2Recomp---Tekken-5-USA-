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

// Function: sub_002766D8
// Address: 0x2766d8 - 0x276700
void sub_002766D8_0x2766d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002766D8_0x2766d8");
#endif

    switch (ctx->pc) {
        case 0x2766e8u: goto label_2766e8;
        case 0x2766f0u: goto label_2766f0;
        default: break;
    }

    ctx->pc = 0x2766d8u;

    // 0x2766d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2766d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2766dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2766dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2766e0: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x2766E0u;
    SET_GPR_U32(ctx, 31, 0x2766E8u);
    ctx->pc = 0x2766E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2766E0u;
    // 0x2766e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x2766E0u, 0x2766E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2766E8u;
label_2766e8:
    // 0x2766e8: 0xc09da36  jal         func_2768D8
    ctx->pc = 0x2766E8u;
    SET_GPR_U32(ctx, 31, 0x2766F0u);
    ctx->pc = 0x2768D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2768D8u, 0x2766E8u, 0x2766F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2766F0u;
label_2766f0:
    // 0x2766f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2766f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2766f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2766F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2766F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766F4u;
        // 0x2766f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2766F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2766FCu;
    // 0x2766fc: 0x0  nop
    ctx->pc = 0x2766fcu;
    // NOP
    ctx->pc = 0x276700u;
}
