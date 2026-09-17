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

// Function: sub_00505750
// Address: 0x505750 - 0x505770
void sub_00505750_0x505750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505750_0x505750");
#endif

    ctx->pc = 0x505750u;

    // 0x505750: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x505750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x505754: 0x2484c52c  addiu       $a0, $a0, -0x3AD4
    ctx->pc = 0x505754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952236));
    // 0x505758: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x505758u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC52Cu));
    // 0x50575c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x50575cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x505760: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x505760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x505764: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x505764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x505768: 0x3e00008  jr          $ra
    ctx->pc = 0x505768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505768u;
        // 0x50576c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505770u;
}
