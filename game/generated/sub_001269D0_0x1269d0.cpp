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

// Function: sub_001269D0
// Address: 0x1269d0 - 0x1269e8
void sub_001269D0_0x1269d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001269D0_0x1269d0");
#endif

    switch (ctx->pc) {
        case 0x1269d8u: goto label_1269d8;
        default: break;
    }

    ctx->pc = 0x1269d0u;

    // 0x1269d0: 0xc049a82  jal         func_126A08
    ctx->pc = 0x1269D0u;
    SET_GPR_U32(ctx, 31, 0x1269D8u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x1269D0u, 0x1269D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269D8u;
label_1269d8:
    // 0x1269d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1269d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1269dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1269DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1269E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269DCu;
        // 0x1269e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1269DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1269E4u;
    // 0x1269e4: 0x0  nop
    ctx->pc = 0x1269e4u;
    // NOP
    ctx->pc = 0x1269e8u;
}
