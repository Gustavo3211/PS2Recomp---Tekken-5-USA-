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

// Function: sub_001F1440
// Address: 0x1f1440 - 0x1f1460
void sub_001F1440_0x1f1440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1440_0x1f1440");
#endif

    switch (ctx->pc) {
        case 0x1f1450u: goto label_1f1450;
        default: break;
    }

    ctx->pc = 0x1f1440u;

    // 0x1f1440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1448: 0xc09e690  jal         func_279A40
    ctx->pc = 0x1F1448u;
    SET_GPR_U32(ctx, 31, 0x1F1450u);
    ctx->pc = 0x279A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279A40u, 0x1F1448u, 0x1F1450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1450u;
label_1f1450:
    // 0x1f1450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1454: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1454u;
        // 0x1f1458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F145Cu;
    // 0x1f145c: 0x0  nop
    ctx->pc = 0x1f145cu;
    // NOP
    ctx->pc = 0x1f1460u;
}
