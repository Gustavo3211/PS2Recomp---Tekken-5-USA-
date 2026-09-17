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

// Function: sub_0032DE70
// Address: 0x32de70 - 0x32de80
void sub_0032DE70_0x32de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DE70_0x32de70");
#endif

    ctx->pc = 0x32de70u;

    // 0x32de70: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x32de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x32de74: 0x3e00008  jr          $ra
    ctx->pc = 0x32DE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE74u;
        // 0x32de78: 0xfc8200f0  sd          $v0, 0xF0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 240), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DE7Cu;
    // 0x32de7c: 0x0  nop
    ctx->pc = 0x32de7cu;
    // NOP
    ctx->pc = 0x32de80u;
}
