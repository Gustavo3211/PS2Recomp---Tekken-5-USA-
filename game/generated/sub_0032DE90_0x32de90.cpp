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

// Function: sub_0032DE90
// Address: 0x32de90 - 0x32dea0
void sub_0032DE90_0x32de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DE90_0x32de90");
#endif

    ctx->pc = 0x32de90u;

    // 0x32de90: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x32de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x32de94: 0x3e00008  jr          $ra
    ctx->pc = 0x32DE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE94u;
        // 0x32de98: 0xfc8200f0  sd          $v0, 0xF0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 240), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DE9Cu;
    // 0x32de9c: 0x0  nop
    ctx->pc = 0x32de9cu;
    // NOP
    ctx->pc = 0x32dea0u;
}
