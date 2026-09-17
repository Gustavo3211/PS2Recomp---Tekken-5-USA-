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

// Function: sub_002DDF10
// Address: 0x2ddf10 - 0x2ddf20
void sub_002DDF10_0x2ddf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDF10_0x2ddf10");
#endif

    ctx->pc = 0x2ddf10u;

    // 0x2ddf10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ddf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ddf14: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF14u;
        // 0x2ddf18: 0xac8200d8  sw          $v0, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDF1Cu;
    // 0x2ddf1c: 0x0  nop
    ctx->pc = 0x2ddf1cu;
    // NOP
    ctx->pc = 0x2ddf20u;
}
