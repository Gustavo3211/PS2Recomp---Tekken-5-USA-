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

// Function: sub_0022A680
// Address: 0x22a680 - 0x22a6a8
void sub_0022A680_0x22a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A680_0x22a680");
#endif

    switch (ctx->pc) {
        case 0x22a698u: goto label_22a698;
        default: break;
    }

    ctx->pc = 0x22a680u;

    // 0x22a680: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22a684: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a688: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x22a688u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x22a68c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a690: 0xc09535a  jal         func_254D68
    ctx->pc = 0x22A690u;
    SET_GPR_U32(ctx, 31, 0x22A698u);
    ctx->pc = 0x254D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D68u, 0x22A690u, 0x22A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A698u;
label_22a698:
    // 0x22a698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A69Cu;
        // 0x22a6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A6A4u;
    // 0x22a6a4: 0x0  nop
    ctx->pc = 0x22a6a4u;
    // NOP
    ctx->pc = 0x22a6a8u;
}
