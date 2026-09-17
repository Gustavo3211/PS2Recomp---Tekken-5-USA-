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

// Function: sub_004AE358
// Address: 0x4ae358 - 0x4ae368
void sub_004AE358_0x4ae358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE358_0x4ae358");
#endif

    ctx->pc = 0x4ae358u;

    // 0x4ae358: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ae358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ae35c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE35Cu;
        // 0x4ae360: 0x24426718  addiu       $v0, $v0, 0x6718 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE364u;
    // 0x4ae364: 0x0  nop
    ctx->pc = 0x4ae364u;
    // NOP
    ctx->pc = 0x4ae368u;
}
