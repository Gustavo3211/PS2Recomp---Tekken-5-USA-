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

// Function: sub_002499A0
// Address: 0x2499a0 - 0x2499c0
void sub_002499A0_0x2499a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002499A0_0x2499a0");
#endif

    switch (ctx->pc) {
        case 0x2499b4u: goto label_2499b4;
        default: break;
    }

    ctx->pc = 0x2499a0u;

    // 0x2499a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2499a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2499a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2499a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2499a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2499a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2499ac: 0xc09243c  jal         func_2490F0
    ctx->pc = 0x2499ACu;
    SET_GPR_U32(ctx, 31, 0x2499B4u);
    ctx->pc = 0x2499B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2499ACu;
    // 0x2499b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490F0u, 0x2499ACu, 0x2499B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499B4u;
label_2499b4:
    // 0x2499b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2499b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2499b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2499B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2499BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499B8u;
        // 0x2499bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2499B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2499C0u;
}
