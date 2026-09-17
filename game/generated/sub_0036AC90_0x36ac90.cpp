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

// Function: sub_0036AC90
// Address: 0x36ac90 - 0x36ace0
void sub_0036AC90_0x36ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AC90_0x36ac90");
#endif

    switch (ctx->pc) {
        case 0x36acb4u: goto label_36acb4;
        case 0x36acc8u: goto label_36acc8;
        default: break;
    }

    ctx->pc = 0x36ac90u;

    // 0x36ac90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ac94: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36ac98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ac9c: 0x24506da8  addiu       $s0, $v0, 0x6DA8
    ctx->pc = 0x36ac9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28072));
    // 0x36aca0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6DA8u));
    // 0x36aca4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36ACA4u;
    {
        const bool branch_taken_0x36aca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACA4u;
        // 0x36aca8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aca4) {
            ctx->pc = 0x36ACC8u;
            goto label_36acc8;
        }
    }
    ctx->pc = 0x36ACACu;
    // 0x36acac: 0xc0daa14  jal         func_36A850
    ctx->pc = 0x36ACACu;
    SET_GPR_U32(ctx, 31, 0x36ACB4u);
    ctx->pc = 0x36A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A850u, 0x36ACACu, 0x36ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ACB4u;
label_36acb4:
    // 0x36acb4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36acb8: 0x24a59990  addiu       $a1, $a1, -0x6670
    ctx->pc = 0x36acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941072));
    // 0x36acbc: 0x2786cc78  addiu       $a2, $gp, -0x3388
    ctx->pc = 0x36acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954104));
    // 0x36acc0: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36ACC0u;
    SET_GPR_U32(ctx, 31, 0x36ACC8u);
    ctx->pc = 0x36ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ACC0u;
    // 0x36acc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36ACC0u, 0x36ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ACC8u;
label_36acc8:
    // 0x36acc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36acc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36accc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36acccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36acd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36acd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36acd4: 0x3e00008  jr          $ra
    ctx->pc = 0x36ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACD4u;
        // 0x36acd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ACDCu;
    // 0x36acdc: 0x0  nop
    ctx->pc = 0x36acdcu;
    // NOP
    ctx->pc = 0x36ace0u;
}
