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

// Function: sub_0031B910
// Address: 0x31b910 - 0x31b930
void sub_0031B910_0x31b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B910_0x31b910");
#endif

    switch (ctx->pc) {
        case 0x31b920u: goto label_31b920;
        default: break;
    }

    ctx->pc = 0x31b910u;

    // 0x31b910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31b914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b918: 0xc0cd61c  jal         func_335870
    ctx->pc = 0x31B918u;
    SET_GPR_U32(ctx, 31, 0x31B920u);
    ctx->pc = 0x31B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B918u;
    // 0x31b91c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335870u, 0x31B918u, 0x31B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B920u;
label_31b920:
    // 0x31b920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b924: 0x3e00008  jr          $ra
    ctx->pc = 0x31B924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B924u;
        // 0x31b928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B92Cu;
    // 0x31b92c: 0x0  nop
    ctx->pc = 0x31b92cu;
    // NOP
    ctx->pc = 0x31b930u;
}
