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

// Function: sub_0031C948
// Address: 0x31c948 - 0x31c960
void sub_0031C948_0x31c948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C948_0x31c948");
#endif

    ctx->pc = 0x31c948u;

    // 0x31c948: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x31c948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x31c94c: 0xa0a80002  sb          $t0, 0x2($a1)
    ctx->pc = 0x31c94cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x31c950: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x31c950u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x31c954: 0x3e00008  jr          $ra
    ctx->pc = 0x31C954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C954u;
        // 0x31c958: 0xa0a70001  sb          $a3, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C95Cu;
    // 0x31c95c: 0x0  nop
    ctx->pc = 0x31c95cu;
    // NOP
    ctx->pc = 0x31c960u;
}
