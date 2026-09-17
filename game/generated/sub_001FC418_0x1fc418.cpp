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

// Function: sub_001FC418
// Address: 0x1fc418 - 0x1fc428
void sub_001FC418_0x1fc418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC418_0x1fc418");
#endif

    ctx->pc = 0x1fc418u;

    // 0x1fc418: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fc418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc41c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC41Cu;
        // 0x1fc420: 0xac4403dc  sw          $a0, 0x3DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 988), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC424u;
    // 0x1fc424: 0x0  nop
    ctx->pc = 0x1fc424u;
    // NOP
    ctx->pc = 0x1fc428u;
}
