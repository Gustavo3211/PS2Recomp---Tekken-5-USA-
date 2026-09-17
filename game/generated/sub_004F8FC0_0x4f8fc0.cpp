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

// Function: sub_004F8FC0
// Address: 0x4f8fc0 - 0x4f8fd0
void sub_004F8FC0_0x4f8fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8FC0_0x4f8fc0");
#endif

    ctx->pc = 0x4f8fc0u;

    // 0x4f8fc0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4f8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4f8fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F8FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8FC4u;
        // 0x4f8fc8: 0x2442c858  addiu       $v0, $v0, -0x37A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F8FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8FCCu;
    // 0x4f8fcc: 0x0  nop
    ctx->pc = 0x4f8fccu;
    // NOP
    ctx->pc = 0x4f8fd0u;
}
