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

// Function: sub_00357F28
// Address: 0x357f28 - 0x357f48
void sub_00357F28_0x357f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357F28_0x357f28");
#endif

    ctx->pc = 0x357f28u;

    // 0x357f28: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x357f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x357f2c: 0x3c01001c  lui         $at, 0x1C
    ctx->pc = 0x357f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28 << 16));
    // 0x357f30: 0x2421e780  addiu       $at, $at, -0x1880
    ctx->pc = 0x357f30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294961024));
    // 0x357f34: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x357f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x357f38: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x357f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x357f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x357F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F3Cu;
        // 0x357f40: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357F44u;
    // 0x357f44: 0x0  nop
    ctx->pc = 0x357f44u;
    // NOP
    ctx->pc = 0x357f48u;
}
