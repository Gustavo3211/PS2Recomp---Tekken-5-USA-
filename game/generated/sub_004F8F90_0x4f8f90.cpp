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

// Function: sub_004F8F90
// Address: 0x4f8f90 - 0x4f8fa0
void sub_004F8F90_0x4f8f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8F90_0x4f8f90");
#endif

    ctx->pc = 0x4f8f90u;

    // 0x4f8f90: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4f8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4f8f94: 0x3e00008  jr          $ra
    ctx->pc = 0x4F8F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8F94u;
        // 0x4f8f98: 0x2442b5f8  addiu       $v0, $v0, -0x4A08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F8F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8F9Cu;
    // 0x4f8f9c: 0x0  nop
    ctx->pc = 0x4f8f9cu;
    // NOP
    ctx->pc = 0x4f8fa0u;
}
