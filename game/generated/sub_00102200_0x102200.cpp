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

// Function: sub_00102200
// Address: 0x102200 - 0x102210
void sub_00102200_0x102200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102200_0x102200");
#endif

    ctx->pc = 0x102200u;

    // 0x102200: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x102204: 0x3e00008  jr          $ra
    ctx->pc = 0x102204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102204u;
        // 0x102208: 0x24420e50  addiu       $v0, $v0, 0xE50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10220Cu;
    // 0x10220c: 0x0  nop
    ctx->pc = 0x10220cu;
    // NOP
    ctx->pc = 0x102210u;
}
