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

// Function: sub_002F8178
// Address: 0x2f8178 - 0x2f8198
void sub_002F8178_0x2f8178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8178_0x2f8178");
#endif

    ctx->pc = 0x2f8178u;

    // 0x2f8178: 0xac80013c  sw          $zero, 0x13C($a0)
    ctx->pc = 0x2f8178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 0));
    // 0x2f817c: 0xac80011c  sw          $zero, 0x11C($a0)
    ctx->pc = 0x2f817cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
    // 0x2f8180: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x2f8180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
    // 0x2f8184: 0xac800124  sw          $zero, 0x124($a0)
    ctx->pc = 0x2f8184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
    // 0x2f8188: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x2f8188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
    // 0x2f818c: 0xac800134  sw          $zero, 0x134($a0)
    ctx->pc = 0x2f818cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
    // 0x2f8190: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8190u;
        // 0x2f8194: 0xac800138  sw          $zero, 0x138($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8198u;
}
