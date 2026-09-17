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

// Function: sub_002FAC98
// Address: 0x2fac98 - 0x2facb8
void sub_002FAC98_0x2fac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAC98_0x2fac98");
#endif

    ctx->pc = 0x2fac98u;

    // 0x2fac98: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2fac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fac9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAC9Cu;
    {
        const bool branch_taken_0x2fac9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fac9c) {
            ctx->pc = 0x2FACB0u;
            goto label_2facb0;
        }
    }
    ctx->pc = 0x2FACA4u;
    // 0x2faca4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2faca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2faca8: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2faca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x2facac: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2facacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2facb0:
    // 0x2facb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FACB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FACB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FACB8u;
}
