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

// Function: sub_002EE598
// Address: 0x2ee598 - 0x2ee5a8
void sub_002EE598_0x2ee598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE598_0x2ee598");
#endif

    ctx->pc = 0x2ee598u;

    // 0x2ee598: 0xac8600e4  sw          $a2, 0xE4($a0)
    ctx->pc = 0x2ee598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 6));
    // 0x2ee59c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE59Cu;
        // 0x2ee5a0: 0xac8500e0  sw          $a1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE5A4u;
    // 0x2ee5a4: 0x0  nop
    ctx->pc = 0x2ee5a4u;
    // NOP
    ctx->pc = 0x2ee5a8u;
}
