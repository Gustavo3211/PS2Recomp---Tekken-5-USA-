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

// Function: sub_0021F668
// Address: 0x21f668 - 0x21f680
void sub_0021F668_0x21f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F668_0x21f668");
#endif

    ctx->pc = 0x21f668u;

    // 0x21f668: 0x8f83c970  lw          $v1, -0x3690($gp)
    ctx->pc = 0x21f668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953328)));
    // 0x21f66c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21f674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f678: 0x3e00008  jr          $ra
    ctx->pc = 0x21F678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F678u;
        // 0x21f67c: 0xaf82c970  sw          $v0, -0x3690($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F680u;
}
