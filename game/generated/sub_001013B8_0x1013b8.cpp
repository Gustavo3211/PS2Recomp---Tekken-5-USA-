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

// Function: sub_001013B8
// Address: 0x1013b8 - 0x1013c8
void sub_001013B8_0x1013b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001013B8_0x1013b8");
#endif

    ctx->pc = 0x1013b8u;

    // 0x1013b8: 0x3c02012a  lui         $v0, 0x12A
    ctx->pc = 0x1013b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)298 << 16));
    // 0x1013bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1013BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1013C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013BCu;
        // 0x1013c0: 0x2442bdc0  addiu       $v0, $v0, -0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1013BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1013C4u;
    // 0x1013c4: 0x0  nop
    ctx->pc = 0x1013c4u;
    // NOP
    ctx->pc = 0x1013c8u;
}
