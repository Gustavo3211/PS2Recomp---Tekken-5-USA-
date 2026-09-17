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

// Function: sub_001FB158
// Address: 0x1fb158 - 0x1fb170
void sub_001FB158_0x1fb158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB158_0x1fb158");
#endif

    ctx->pc = 0x1fb158u;

    // 0x1fb158: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb15c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1fb15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1fb160: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fb160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fb164: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB164u;
        // 0x1fb168: 0xac620064  sw          $v0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB16Cu;
    // 0x1fb16c: 0x0  nop
    ctx->pc = 0x1fb16cu;
    // NOP
    ctx->pc = 0x1fb170u;
}
