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

// Function: sub_003746E8
// Address: 0x3746e8 - 0x374708
void sub_003746E8_0x3746e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003746E8_0x3746e8");
#endif

    ctx->pc = 0x3746e8u;

    // 0x3746e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3746e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3746ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3746ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3746f0: 0x24a515b0  addiu       $a1, $a1, 0x15B0
    ctx->pc = 0x3746f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x3746f4: 0x244212d8  addiu       $v0, $v0, 0x12D8
    ctx->pc = 0x3746f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4824));
    // 0x3746f8: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x3746f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x3746fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3746FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746FCu;
        // 0x374700: 0xac8500b0  sw          $a1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3746FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374704u;
    // 0x374704: 0x0  nop
    ctx->pc = 0x374704u;
    // NOP
    ctx->pc = 0x374708u;
}
