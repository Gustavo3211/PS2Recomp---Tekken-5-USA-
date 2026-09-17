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

// Function: sub_0031BD20
// Address: 0x31bd20 - 0x31bd30
void sub_0031BD20_0x31bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BD20_0x31bd20");
#endif

    ctx->pc = 0x31bd20u;

    // 0x31bd20: 0xc7809610  lwc1        $f0, -0x69F0($gp)
    ctx->pc = 0x31bd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31bd24: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BD2Cu;
    // 0x31bd2c: 0x0  nop
    ctx->pc = 0x31bd2cu;
    // NOP
    ctx->pc = 0x31bd30u;
}
