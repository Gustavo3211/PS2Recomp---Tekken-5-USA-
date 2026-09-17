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

// Function: sub_004DAEB0
// Address: 0x4daeb0 - 0x4daec0
void sub_004DAEB0_0x4daeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAEB0_0x4daeb0");
#endif

    ctx->pc = 0x4daeb0u;

    // 0x4daeb0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4daeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4daeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAEB4u;
        // 0x4daeb8: 0xa440f88c  sh          $zero, -0x774($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965388), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAEBCu;
    // 0x4daebc: 0x0  nop
    ctx->pc = 0x4daebcu;
    // NOP
    ctx->pc = 0x4daec0u;
}
