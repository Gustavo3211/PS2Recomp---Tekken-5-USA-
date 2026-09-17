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

// Function: sub_002DD860
// Address: 0x2dd860 - 0x2dd880
void sub_002DD860_0x2dd860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD860_0x2dd860");
#endif

    ctx->pc = 0x2dd860u;

    // 0x2dd860: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x2dd860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2dd864: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2dd864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2dd868: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x2dd868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x2dd86c: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x2dd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x2dd870: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x2dd870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x2dd874: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD874u;
        // 0x2dd878: 0xac80005c  sw          $zero, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD87Cu;
    // 0x2dd87c: 0x0  nop
    ctx->pc = 0x2dd87cu;
    // NOP
    ctx->pc = 0x2dd880u;
}
