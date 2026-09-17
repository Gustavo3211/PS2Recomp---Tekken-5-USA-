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

// Function: sub_0023DB48
// Address: 0x23db48 - 0x23db60
void sub_0023DB48_0x23db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DB48_0x23db48");
#endif

    ctx->pc = 0x23db48u;

    // 0x23db48: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x23db48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
    // 0x23db4c: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x23db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x23db50: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x23db50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x23db54: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x23db54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x23db58: 0x3e00008  jr          $ra
    ctx->pc = 0x23DB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB58u;
        // 0x23db5c: 0xa480003c  sh          $zero, 0x3C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DB60u;
}
