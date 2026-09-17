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

// Function: sub_00343650
// Address: 0x343650 - 0x343678
void sub_00343650_0x343650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343650_0x343650");
#endif

    switch (ctx->pc) {
        case 0x34366cu: goto label_34366c;
        default: break;
    }

    ctx->pc = 0x343650u;

    // 0x343650: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x343650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343654: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x343654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x343658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34365c: 0x2484fd40  addiu       $a0, $a0, -0x2C0
    ctx->pc = 0x34365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966592));
    // 0x343660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x343664: 0xc0dd9b2  jal         func_3766C8
    ctx->pc = 0x343664u;
    SET_GPR_U32(ctx, 31, 0x34366Cu);
    ctx->pc = 0x343668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343664u;
    // 0x343668: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3766C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3766C8u, 0x343664u, 0x34366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34366Cu;
label_34366c:
    // 0x34366c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34366cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343670: 0x3e00008  jr          $ra
    ctx->pc = 0x343670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343670u;
        // 0x343674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343678u;
}
