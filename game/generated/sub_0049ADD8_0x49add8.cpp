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

// Function: sub_0049ADD8
// Address: 0x49add8 - 0x49ade8
void sub_0049ADD8_0x49add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049ADD8_0x49add8");
#endif

    ctx->pc = 0x49add8u;

    // 0x49add8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49add8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49addc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49addcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ade0: 0x3e00008  jr          $ra
    ctx->pc = 0x49ADE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ADE0u;
        // 0x49ade4: 0xa462f88e  sh          $v0, -0x772($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294965390), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ADE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ADE8u;
}
