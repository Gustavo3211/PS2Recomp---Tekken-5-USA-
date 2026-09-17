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

// Function: sub_0029B090
// Address: 0x29b090 - 0x29b0a8
void sub_0029B090_0x29b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B090_0x29b090");
#endif

    switch (ctx->pc) {
        case 0x29b098u: goto label_29b098;
        default: break;
    }

    ctx->pc = 0x29b090u;

    // 0x29b090: 0xc049a82  jal         func_126A08
    ctx->pc = 0x29B090u;
    SET_GPR_U32(ctx, 31, 0x29B098u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x29B090u, 0x29B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B098u;
label_29b098:
    // 0x29b098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b09c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29b09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0A0u;
        // 0x29b0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B0A8u;
}
