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

// Function: sub_002468C0
// Address: 0x2468c0 - 0x2468f0
void sub_002468C0_0x2468c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002468C0_0x2468c0");
#endif

    switch (ctx->pc) {
        case 0x2468d0u: goto label_2468d0;
        case 0x2468e4u: goto label_2468e4;
        default: break;
    }

    ctx->pc = 0x2468c0u;

    // 0x2468c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2468c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2468c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2468c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2468c8: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2468C8u;
    SET_GPR_U32(ctx, 31, 0x2468D0u);
    ctx->pc = 0x2468CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2468C8u;
    // 0x2468cc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2468C8u, 0x2468D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2468D0u;
label_2468d0:
    // 0x2468d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2468d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2468d4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2468d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2468d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2468d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2468dc: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2468DCu;
    SET_GPR_U32(ctx, 31, 0x2468E4u);
    ctx->pc = 0x2468E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2468DCu;
    // 0x2468e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2468DCu, 0x2468E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2468E4u;
label_2468e4:
    // 0x2468e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2468e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2468e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2468E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2468ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468E8u;
        // 0x2468ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2468E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2468F0u;
}
