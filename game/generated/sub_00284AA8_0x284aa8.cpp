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

// Function: sub_00284AA8
// Address: 0x284aa8 - 0x284ac8
void sub_00284AA8_0x284aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284AA8_0x284aa8");
#endif

    ctx->pc = 0x284aa8u;

    // 0x284aa8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x284aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x284aac: 0x248483c0  addiu       $a0, $a0, -0x7C40
    ctx->pc = 0x284aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    // 0x284ab0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x284ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x284ab4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x284AB4u;
    {
        const bool branch_taken_0x284ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AB4u;
        // 0x284ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ab4) {
            ctx->pc = 0x284AC0u;
            goto label_284ac0;
        }
    }
    ctx->pc = 0x284ABCu;
    // 0x284abc: 0x8c820198  lw          $v0, 0x198($a0)
    ctx->pc = 0x284abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_284ac0:
    // 0x284ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x284AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284AC8u;
}
