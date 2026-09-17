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

// Function: sub_00214508
// Address: 0x214508 - 0x214520
void sub_00214508_0x214508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214508_0x214508");
#endif

    ctx->pc = 0x214508u;

    // 0x214508: 0xa380c900  sb          $zero, -0x3700($gp)
    ctx->pc = 0x214508u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294953216), (uint8_t)GPR_U32(ctx, 0));
    // 0x21450c: 0xa380c901  sb          $zero, -0x36FF($gp)
    ctx->pc = 0x21450cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294953217), (uint8_t)GPR_U32(ctx, 0));
    // 0x214510: 0xa380c902  sb          $zero, -0x36FE($gp)
    ctx->pc = 0x214510u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294953218), (uint8_t)GPR_U32(ctx, 0));
    // 0x214514: 0x3e00008  jr          $ra
    ctx->pc = 0x214514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214514u;
        // 0x214518: 0xaf80c90c  sw          $zero, -0x36F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21451Cu;
    // 0x21451c: 0x0  nop
    ctx->pc = 0x21451cu;
    // NOP
    ctx->pc = 0x214520u;
}
