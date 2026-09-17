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

// Function: sub_004A8508
// Address: 0x4a8508 - 0x4a8518
void sub_004A8508_0x4a8508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8508_0x4a8508");
#endif

    ctx->pc = 0x4a8508u;

    // 0x4a8508: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a8508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a850c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A850Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A850Cu;
        // 0x4a8510: 0x24429080  addiu       $v0, $v0, -0x6F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A850Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8514u;
    // 0x4a8514: 0x0  nop
    ctx->pc = 0x4a8514u;
    // NOP
    ctx->pc = 0x4a8518u;
}
