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

// Function: sub_0025E448
// Address: 0x25e448 - 0x25e468
void sub_0025E448_0x25e448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E448_0x25e448");
#endif

    ctx->pc = 0x25e448u;

    // 0x25e448: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x25e448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x25e44c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25e450: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25e450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e454: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x25e454u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x25e458: 0xac23ca28  sw          $v1, -0x35D8($at)
    ctx->pc = 0x25e458u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953512), GPR_U32(ctx, 3));
    // 0x25e45c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E464u;
    // 0x25e464: 0x0  nop
    ctx->pc = 0x25e464u;
    // NOP
    ctx->pc = 0x25e468u;
}
