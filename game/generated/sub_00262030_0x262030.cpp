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

// Function: sub_00262030
// Address: 0x262030 - 0x262048
void sub_00262030_0x262030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262030_0x262030");
#endif

    ctx->pc = 0x262030u;

    // 0x262030: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x262030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x262034: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x262034u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x262038: 0xa025ebec  sb          $a1, -0x1414($at)
    ctx->pc = 0x262038u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962156), (uint8_t)GPR_U32(ctx, 5));
    // 0x26203c: 0x3e00008  jr          $ra
    ctx->pc = 0x26203Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26203Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262044u;
    // 0x262044: 0x0  nop
    ctx->pc = 0x262044u;
    // NOP
    ctx->pc = 0x262048u;
}
