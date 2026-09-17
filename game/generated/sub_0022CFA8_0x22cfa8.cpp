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

// Function: sub_0022CFA8
// Address: 0x22cfa8 - 0x22cfb8
void sub_0022CFA8_0x22cfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CFA8_0x22cfa8");
#endif

    ctx->pc = 0x22cfa8u;

    // 0x22cfa8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22cfac: 0x3e00008  jr          $ra
    ctx->pc = 0x22CFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFACu;
        // 0x22cfb0: 0x244292a0  addiu       $v0, $v0, -0x6D60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CFB4u;
    // 0x22cfb4: 0x0  nop
    ctx->pc = 0x22cfb4u;
    // NOP
    ctx->pc = 0x22cfb8u;
}
