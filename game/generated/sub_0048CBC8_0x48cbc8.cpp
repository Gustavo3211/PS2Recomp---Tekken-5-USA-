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

// Function: sub_0048CBC8
// Address: 0x48cbc8 - 0x48cbd8
void sub_0048CBC8_0x48cbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CBC8_0x48cbc8");
#endif

    ctx->pc = 0x48cbc8u;

    // 0x48cbc8: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48cbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x48CBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CBCCu;
        // 0x48cbd0: 0x2442b180  addiu       $v0, $v0, -0x4E80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CBD4u;
    // 0x48cbd4: 0x0  nop
    ctx->pc = 0x48cbd4u;
    // NOP
    ctx->pc = 0x48cbd8u;
}
