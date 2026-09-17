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

// Function: sub_00341898
// Address: 0x341898 - 0x3418c0
void sub_00341898_0x341898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341898_0x341898");
#endif

    switch (ctx->pc) {
        case 0x3418b4u: goto label_3418b4;
        default: break;
    }

    ctx->pc = 0x341898u;

    // 0x341898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34189c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x34189cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3418a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3418a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3418a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3418a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3418a8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x3418a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3418ac: 0xc0d0630  jal         func_3418C0
    ctx->pc = 0x3418ACu;
    SET_GPR_U32(ctx, 31, 0x3418B4u);
    ctx->pc = 0x3418B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3418ACu;
    // 0x3418b0: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3418C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3418C0u, 0x3418ACu, 0x3418B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418B4u;
label_3418b4:
    // 0x3418b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3418b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3418b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3418B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3418BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418B8u;
        // 0x3418bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3418B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3418C0u;
}
