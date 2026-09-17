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

// Function: sub_002C9E70
// Address: 0x2c9e70 - 0x2c9e88
void sub_002C9E70_0x2c9e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9E70_0x2c9e70");
#endif

    ctx->pc = 0x2c9e70u;

    // 0x2c9e70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c9e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c9e74: 0x9c1021  addu        $v0, $a0, $gp
    ctx->pc = 0x2c9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x2c9e78: 0x8c42bb20  lw          $v0, -0x44E0($v0)
    ctx->pc = 0x2c9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949664)));
    // 0x2c9e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E7Cu;
        // 0x2c9e80: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9E84u;
    // 0x2c9e84: 0x0  nop
    ctx->pc = 0x2c9e84u;
    // NOP
    ctx->pc = 0x2c9e88u;
}
