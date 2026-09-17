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

// Function: sub_00248410
// Address: 0x248410 - 0x248420
void sub_00248410_0x248410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248410_0x248410");
#endif

    ctx->pc = 0x248410u;

    // 0x248410: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x248410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x248414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248418: 0x3e00008  jr          $ra
    ctx->pc = 0x248418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248418u;
        // 0x24841c: 0xac626ff0  sw          $v0, 0x6FF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248420u;
}
