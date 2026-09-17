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

// Function: sub_0032DE50
// Address: 0x32de50 - 0x32de60
void sub_0032DE50_0x32de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DE50_0x32de50");
#endif

    ctx->pc = 0x32de50u;

    // 0x32de50: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x32de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x32de54: 0x3e00008  jr          $ra
    ctx->pc = 0x32DE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE54u;
        // 0x32de58: 0xfc8200f0  sd          $v0, 0xF0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 240), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DE5Cu;
    // 0x32de5c: 0x0  nop
    ctx->pc = 0x32de5cu;
    // NOP
    ctx->pc = 0x32de60u;
}
