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

// Function: sub_00232DE8
// Address: 0x232de8 - 0x232e18
void sub_00232DE8_0x232de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232DE8_0x232de8");
#endif

    ctx->pc = 0x232de8u;

    // 0x232de8: 0x84a20012  lh          $v0, 0x12($a1)
    ctx->pc = 0x232de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x232dec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x232DECu;
    {
        const bool branch_taken_0x232dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232dec) {
            ctx->pc = 0x232DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232DECu;
            // 0x232df0: 0x84c20148  lh          $v0, 0x148($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232E08u;
            goto label_232e08;
        }
    }
    ctx->pc = 0x232DF4u;
    // 0x232df4: 0x84a20148  lh          $v0, 0x148($a1)
    ctx->pc = 0x232df4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x232df8: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x232df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x232dfc: 0x84c30148  lh          $v1, 0x148($a2)
    ctx->pc = 0x232dfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 328)));
    // 0x232e00: 0x3e00008  jr          $ra
    ctx->pc = 0x232E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E00u;
        // 0x232e04: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232E08u;
label_232e08:
    // 0x232e08: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x232e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x232e0c: 0x84a30148  lh          $v1, 0x148($a1)
    ctx->pc = 0x232e0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x232e10: 0x3e00008  jr          $ra
    ctx->pc = 0x232E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E10u;
        // 0x232e14: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232E18u;
}
