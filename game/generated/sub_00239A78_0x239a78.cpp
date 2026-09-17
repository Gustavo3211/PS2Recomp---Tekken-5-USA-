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

// Function: sub_00239A78
// Address: 0x239a78 - 0x239aa0
void sub_00239A78_0x239a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239A78_0x239a78");
#endif

    ctx->pc = 0x239a78u;

    // 0x239a78: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x239a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x239a7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x239a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x239a80: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x239a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x239a84: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x239a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x239a88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x239a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239a8c: 0x8c42d60c  lw          $v0, -0x29F4($v0)
    ctx->pc = 0x239a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956556)));
    // 0x239a90: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x239a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x239a94: 0x3e00008  jr          $ra
    ctx->pc = 0x239A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A94u;
        // 0x239a98: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239A9Cu;
    // 0x239a9c: 0x0  nop
    ctx->pc = 0x239a9cu;
    // NOP
    ctx->pc = 0x239aa0u;
}
