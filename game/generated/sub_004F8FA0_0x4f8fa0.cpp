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

// Function: sub_004F8FA0
// Address: 0x4f8fa0 - 0x4f8fb0
void sub_004F8FA0_0x4f8fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8FA0_0x4f8fa0");
#endif

    ctx->pc = 0x4f8fa0u;

    // 0x4f8fa0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4f8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4f8fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F8FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8FA4u;
        // 0x4f8fa8: 0x2442b920  addiu       $v0, $v0, -0x46E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F8FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8FACu;
    // 0x4f8fac: 0x0  nop
    ctx->pc = 0x4f8facu;
    // NOP
    ctx->pc = 0x4f8fb0u;
}
