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

// Function: sub_002DD840
// Address: 0x2dd840 - 0x2dd860
void sub_002DD840_0x2dd840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD840_0x2dd840");
#endif

    ctx->pc = 0x2dd840u;

    // 0x2dd840: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x2dd840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2dd844: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2dd844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2dd848: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2dd848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dd84c: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x2dd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x2dd850: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x2dd850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x2dd854: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x2dd854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x2dd858: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD858u;
        // 0x2dd85c: 0xac86005c  sw          $a2, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD860u;
}
