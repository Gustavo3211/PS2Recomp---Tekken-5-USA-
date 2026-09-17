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

// Function: sub_002DDF00
// Address: 0x2ddf00 - 0x2ddf10
void sub_002DDF00_0x2ddf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDF00_0x2ddf00");
#endif

    ctx->pc = 0x2ddf00u;

    // 0x2ddf00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ddf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ddf04: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF04u;
        // 0x2ddf08: 0xac8200d8  sw          $v0, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDF0Cu;
    // 0x2ddf0c: 0x0  nop
    ctx->pc = 0x2ddf0cu;
    // NOP
    ctx->pc = 0x2ddf10u;
}
