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

// Function: sub_002A7898
// Address: 0x2a7898 - 0x2a78c0
void sub_002A7898_0x2a7898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7898_0x2a7898");
#endif

    ctx->pc = 0x2a7898u;

    // 0x2a7898: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2a7898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2a789c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a789cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a78a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a78a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a78a8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2a78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2a78ac: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2a78acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2a78b0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2a78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2a78b4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2a78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2a78b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A78B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78B8u;
        // 0x2a78bc: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A78B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A78C0u;
}
