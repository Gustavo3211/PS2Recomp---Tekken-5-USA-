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

// Function: sub_002A3270
// Address: 0x2a3270 - 0x2a3290
void sub_002A3270_0x2a3270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3270_0x2a3270");
#endif

    switch (ctx->pc) {
        case 0x2a3278u: goto label_2a3278;
        default: break;
    }

    ctx->pc = 0x2a3270u;

    // 0x2a3270: 0xc049a82  jal         func_126A08
    ctx->pc = 0x2A3270u;
    SET_GPR_U32(ctx, 31, 0x2A3278u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x2A3270u, 0x2A3278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3278u;
label_2a3278:
    // 0x2a3278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a327c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a327cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a3280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3284: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3284u;
        // 0x2a3288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A328Cu;
    // 0x2a328c: 0x0  nop
    ctx->pc = 0x2a328cu;
    // NOP
    ctx->pc = 0x2a3290u;
}
