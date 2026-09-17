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

// Function: sub_00220758
// Address: 0x220758 - 0x220768
void sub_00220758_0x220758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220758_0x220758");
#endif

    ctx->pc = 0x220758u;

    // 0x220758: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x220758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22075c: 0x3e00008  jr          $ra
    ctx->pc = 0x22075Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22075Cu;
        // 0x220760: 0x2442ca40  addiu       $v0, $v0, -0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22075Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220764u;
    // 0x220764: 0x0  nop
    ctx->pc = 0x220764u;
    // NOP
    ctx->pc = 0x220768u;
}
