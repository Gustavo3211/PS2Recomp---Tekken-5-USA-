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

// Function: sub_0031B4F0
// Address: 0x31b4f0 - 0x31b500
void sub_0031B4F0_0x31b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B4F0_0x31b4f0");
#endif

    ctx->pc = 0x31b4f0u;

    // 0x31b4f0: 0xc780960c  lwc1        $f0, -0x69F4($gp)
    ctx->pc = 0x31b4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x31B4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B4FCu;
    // 0x31b4fc: 0x0  nop
    ctx->pc = 0x31b4fcu;
    // NOP
    ctx->pc = 0x31b500u;
}
