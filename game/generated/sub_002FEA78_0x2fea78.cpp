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

// Function: sub_002FEA78
// Address: 0x2fea78 - 0x2feab0
void sub_002FEA78_0x2fea78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEA78_0x2fea78");
#endif

    switch (ctx->pc) {
        case 0x2feaa0u: goto label_2feaa0;
        default: break;
    }

    ctx->pc = 0x2fea78u;

    // 0x2fea78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fea78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fea7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fea7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fea80: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2fea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2fea84: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FEA84u;
    {
        const bool branch_taken_0x2fea84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA84u;
        // 0x2fea88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea84) {
            ctx->pc = 0x2FEA98u;
            goto label_2fea98;
        }
    }
    ctx->pc = 0x2FEA8Cu;
    // 0x2fea8c: 0x80bfc36  j           func_2FF0D8
    ctx->pc = 0x2FEA8Cu;
    ctx->pc = 0x2FEA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEA8Cu;
    // 0x2fea90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF0D8u, 0x2FEA8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FEA94u;
    // 0x2fea94: 0x0  nop
    ctx->pc = 0x2fea94u;
    // NOP
label_2fea98:
    // 0x2fea98: 0xc0bfaac  jal         func_2FEAB0
    ctx->pc = 0x2FEA98u;
    SET_GPR_U32(ctx, 31, 0x2FEAA0u);
    ctx->pc = 0x2FEAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAB0u, 0x2FEA98u, 0x2FEAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEAA0u;
label_2feaa0:
    // 0x2feaa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2feaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2feaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAA4u;
        // 0x2feaa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEAACu;
    // 0x2feaac: 0x0  nop
    ctx->pc = 0x2feaacu;
    // NOP
    ctx->pc = 0x2feab0u;
}
