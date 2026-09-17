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

// Function: sub_00101368
// Address: 0x101368 - 0x101378
void sub_00101368_0x101368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101368_0x101368");
#endif

    ctx->pc = 0x101368u;

    // 0x101368: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x101368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x10136c: 0x3e00008  jr          $ra
    ctx->pc = 0x10136Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10136Cu;
        // 0x101370: 0x2442a800  addiu       $v0, $v0, -0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10136Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101374u;
    // 0x101374: 0x0  nop
    ctx->pc = 0x101374u;
    // NOP
    ctx->pc = 0x101378u;
}
