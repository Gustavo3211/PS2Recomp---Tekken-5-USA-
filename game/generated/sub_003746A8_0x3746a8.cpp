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

// Function: sub_003746A8
// Address: 0x3746a8 - 0x3746c8
void sub_003746A8_0x3746a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003746A8_0x3746a8");
#endif

    ctx->pc = 0x3746a8u;

    // 0x3746a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3746a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3746ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3746acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3746b0: 0x24a515b0  addiu       $a1, $a1, 0x15B0
    ctx->pc = 0x3746b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x3746b4: 0x244212d8  addiu       $v0, $v0, 0x12D8
    ctx->pc = 0x3746b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4824));
    // 0x3746b8: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x3746b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x3746bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3746BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3746C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746BCu;
        // 0x3746c0: 0xac8500b0  sw          $a1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3746BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3746C4u;
    // 0x3746c4: 0x0  nop
    ctx->pc = 0x3746c4u;
    // NOP
    ctx->pc = 0x3746c8u;
}
