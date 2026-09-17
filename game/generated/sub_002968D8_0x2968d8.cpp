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

// Function: sub_002968D8
// Address: 0x2968d8 - 0x2968f0
void sub_002968D8_0x2968d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002968D8_0x2968d8");
#endif

    switch (ctx->pc) {
        case 0x2968e0u: goto label_2968e0;
        default: break;
    }

    ctx->pc = 0x2968d8u;

    // 0x2968d8: 0xc049a82  jal         func_126A08
    ctx->pc = 0x2968D8u;
    SET_GPR_U32(ctx, 31, 0x2968E0u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x2968D8u, 0x2968E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968E0u;
label_2968e0:
    // 0x2968e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2968e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2968e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2968e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2968e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2968E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2968ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968E8u;
        // 0x2968ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2968E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2968F0u;
}
