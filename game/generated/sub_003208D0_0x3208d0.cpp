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

// Function: sub_003208D0
// Address: 0x3208d0 - 0x3208e8
void sub_003208D0_0x3208d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003208D0_0x3208d0");
#endif

    ctx->pc = 0x3208d0u;

    // 0x3208d0: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x3208d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x3208d4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x3208d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x3208d8: 0xe42c8088  swc1        $f12, -0x7F78($at)
    ctx->pc = 0x3208d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294934664), bits); }
    // 0x3208dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3208DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3208DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3208E4u;
    // 0x3208e4: 0x0  nop
    ctx->pc = 0x3208e4u;
    // NOP
    ctx->pc = 0x3208e8u;
}
