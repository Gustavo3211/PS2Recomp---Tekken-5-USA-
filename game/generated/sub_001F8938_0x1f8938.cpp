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

// Function: sub_001F8938
// Address: 0x1f8938 - 0x1f8948
void sub_001F8938_0x1f8938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8938_0x1f8938");
#endif

    ctx->pc = 0x1f8938u;

    // 0x1f8938: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f8938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f893c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F893Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F893Cu;
        // 0x1f8940: 0xac4455bc  sw          $a0, 0x55BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 21948), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F893Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8944u;
    // 0x1f8944: 0x0  nop
    ctx->pc = 0x1f8944u;
    // NOP
    ctx->pc = 0x1f8948u;
}
