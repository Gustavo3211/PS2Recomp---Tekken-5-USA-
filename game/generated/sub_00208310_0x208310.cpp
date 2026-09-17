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

// Function: sub_00208310
// Address: 0x208310 - 0x208320
void sub_00208310_0x208310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208310_0x208310");
#endif

    ctx->pc = 0x208310u;

    // 0x208310: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208314: 0x3e00008  jr          $ra
    ctx->pc = 0x208314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208314u;
        // 0x208318: 0xaf82c8c8  sw          $v0, -0x3738($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20831Cu;
    // 0x20831c: 0x0  nop
    ctx->pc = 0x20831cu;
    // NOP
    ctx->pc = 0x208320u;
}
