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

// Function: sub_00214840
// Address: 0x214840 - 0x214850
void sub_00214840_0x214840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214840_0x214840");
#endif

    ctx->pc = 0x214840u;

    // 0x214840: 0xa384c909  sb          $a0, -0x36F7($gp)
    ctx->pc = 0x214840u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294953225), (uint8_t)GPR_U32(ctx, 4));
    // 0x214844: 0x3e00008  jr          $ra
    ctx->pc = 0x214844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21484Cu;
    // 0x21484c: 0x0  nop
    ctx->pc = 0x21484cu;
    // NOP
    ctx->pc = 0x214850u;
}
