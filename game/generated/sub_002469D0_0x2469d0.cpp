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

// Function: sub_002469D0
// Address: 0x2469d0 - 0x2469f0
void sub_002469D0_0x2469d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002469D0_0x2469d0");
#endif

    switch (ctx->pc) {
        case 0x2469e0u: goto label_2469e0;
        default: break;
    }

    ctx->pc = 0x2469d0u;

    // 0x2469d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2469d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2469d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2469d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2469d8: 0xc091a68  jal         func_2469A0
    ctx->pc = 0x2469D8u;
    SET_GPR_U32(ctx, 31, 0x2469E0u);
    ctx->pc = 0x2469A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469A0u, 0x2469D8u, 0x2469E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469E0u;
label_2469e0:
    // 0x2469e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2469e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2469e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2469e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2469e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2469E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2469ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469E8u;
        // 0x2469ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2469E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2469F0u;
}
