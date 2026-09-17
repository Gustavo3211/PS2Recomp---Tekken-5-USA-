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

// Function: sub_0032DE60
// Address: 0x32de60 - 0x32de70
void sub_0032DE60_0x32de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DE60_0x32de60");
#endif

    ctx->pc = 0x32de60u;

    // 0x32de60: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x32de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x32de64: 0x3e00008  jr          $ra
    ctx->pc = 0x32DE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE64u;
        // 0x32de68: 0xfc8200f0  sd          $v0, 0xF0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 240), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DE6Cu;
    // 0x32de6c: 0x0  nop
    ctx->pc = 0x32de6cu;
    // NOP
    ctx->pc = 0x32de70u;
}
