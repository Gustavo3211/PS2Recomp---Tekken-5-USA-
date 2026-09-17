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

// Function: sub_001F9630
// Address: 0x1f9630 - 0x1f9640
void sub_001F9630_0x1f9630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9630_0x1f9630");
#endif

    ctx->pc = 0x1f9630u;

    // 0x1f9630: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f9634: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9634u;
        // 0x1f9638: 0xc440b410  lwc1        $f0, -0x4BF0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F963Cu;
    // 0x1f963c: 0x0  nop
    ctx->pc = 0x1f963cu;
    // NOP
    ctx->pc = 0x1f9640u;
}
