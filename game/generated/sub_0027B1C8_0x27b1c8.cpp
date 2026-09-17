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

// Function: sub_0027B1C8
// Address: 0x27b1c8 - 0x27b1f0
void sub_0027B1C8_0x27b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B1C8_0x27b1c8");
#endif

    switch (ctx->pc) {
        case 0x27b1d8u: goto label_27b1d8;
        default: break;
    }

    ctx->pc = 0x27b1c8u;

    // 0x27b1c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b1cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b1d0: 0xc09ec62  jal         func_27B188
    ctx->pc = 0x27B1D0u;
    SET_GPR_U32(ctx, 31, 0x27B1D8u);
    ctx->pc = 0x27B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B1D0u;
    // 0x27b1d4: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B188u, 0x27B1D0u, 0x27B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B1D8u;
label_27b1d8:
    // 0x27b1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x27B1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1DCu;
        // 0x27b1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B1E4u;
    // 0x27b1e4: 0x0  nop
    ctx->pc = 0x27b1e4u;
    // NOP
    // 0x27b1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x27B1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1E8u;
        // 0x27b1ec: 0x8f82aeb4  lw          $v0, -0x514C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946484)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B1F0u;
}
