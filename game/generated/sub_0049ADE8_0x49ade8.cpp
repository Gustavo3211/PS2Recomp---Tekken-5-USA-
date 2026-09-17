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

// Function: sub_0049ADE8
// Address: 0x49ade8 - 0x49adf8
void sub_0049ADE8_0x49ade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049ADE8_0x49ade8");
#endif

    ctx->pc = 0x49ade8u;

    // 0x49ade8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49adec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49adf0: 0x3e00008  jr          $ra
    ctx->pc = 0x49ADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ADF0u;
        // 0x49adf4: 0xa462f88c  sh          $v0, -0x774($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294965388), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ADF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ADF8u;
}
