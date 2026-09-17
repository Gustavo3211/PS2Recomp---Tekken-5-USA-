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

// Function: sub_00101580
// Address: 0x101580 - 0x101590
void sub_00101580_0x101580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101580_0x101580");
#endif

    ctx->pc = 0x101580u;

    // 0x101580: 0x3c02014c  lui         $v0, 0x14C
    ctx->pc = 0x101580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)332 << 16));
    // 0x101584: 0x3e00008  jr          $ra
    ctx->pc = 0x101584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101584u;
        // 0x101588: 0x24425f00  addiu       $v0, $v0, 0x5F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10158Cu;
    // 0x10158c: 0x0  nop
    ctx->pc = 0x10158cu;
    // NOP
    ctx->pc = 0x101590u;
}
