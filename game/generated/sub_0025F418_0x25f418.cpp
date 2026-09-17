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

// Function: sub_0025F418
// Address: 0x25f418 - 0x25f428
void sub_0025F418_0x25f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F418_0x25f418");
#endif

    ctx->pc = 0x25f418u;

    // 0x25f418: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x25f418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x25f41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f420: 0x3e00008  jr          $ra
    ctx->pc = 0x25F420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F420u;
        // 0x25f424: 0xa06201ba  sb          $v0, 0x1BA($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 442), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F428u;
}
