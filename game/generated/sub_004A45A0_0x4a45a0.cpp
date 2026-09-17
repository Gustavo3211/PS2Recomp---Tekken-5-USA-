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

// Function: sub_004A45A0
// Address: 0x4a45a0 - 0x4a45b8
void sub_004A45A0_0x4a45a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A45A0_0x4a45a0");
#endif

    switch (ctx->pc) {
        case 0x4a45a8u: goto label_4a45a8;
        case 0x4a45acu: goto label_4a45ac;
        default: break;
    }

    ctx->pc = 0x4a45a0u;

    // 0x4a45a0: 0xc129046  jal         func_4A4118
    ctx->pc = 0x4A45A0u;
    SET_GPR_U32(ctx, 31, 0x4A45A8u);
    ctx->pc = 0x4A45A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A45A0u;
    // 0x4a45a4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4118u, 0x4A45A0u, 0x4A45A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A45A8u;
label_4a45a8:
    // 0x4a45a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a45a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a45ac:
    // 0x4a45ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4A45ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A45ACu;
        // 0x4a45b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A45ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A45B4u;
    // 0x4a45b4: 0x0  nop
    ctx->pc = 0x4a45b4u;
    // NOP
    ctx->pc = 0x4a45b8u;
}
