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

// Function: sub_004FAA28
// Address: 0x4faa28 - 0x4faa40
void sub_004FAA28_0x4faa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FAA28_0x4faa28");
#endif

    ctx->pc = 0x4faa28u;

    // 0x4faa28: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4faa28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4faa2c: 0x2463ce9c  addiu       $v1, $v1, -0x3164
    ctx->pc = 0x4faa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954652));
    // 0x4faa30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4faa30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x56CE9Cu));
    // 0x4faa34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4faa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4faa38: 0x3e00008  jr          $ra
    ctx->pc = 0x4FAA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAA38u;
        // 0x4faa3c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FAA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FAA40u;
}
