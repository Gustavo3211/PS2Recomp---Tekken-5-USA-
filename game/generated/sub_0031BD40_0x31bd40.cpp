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

// Function: sub_0031BD40
// Address: 0x31bd40 - 0x31bd60
void sub_0031BD40_0x31bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BD40_0x31bd40");
#endif

    switch (ctx->pc) {
        case 0x31bd50u: goto label_31bd50;
        default: break;
    }

    ctx->pc = 0x31bd40u;

    // 0x31bd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31bd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31bd48: 0xc0cd61c  jal         func_335870
    ctx->pc = 0x31BD48u;
    SET_GPR_U32(ctx, 31, 0x31BD50u);
    ctx->pc = 0x31BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD48u;
    // 0x31bd4c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335870u, 0x31BD48u, 0x31BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD50u;
label_31bd50:
    // 0x31bd50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31bd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bd54: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD54u;
        // 0x31bd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BD5Cu;
    // 0x31bd5c: 0x0  nop
    ctx->pc = 0x31bd5cu;
    // NOP
    ctx->pc = 0x31bd60u;
}
