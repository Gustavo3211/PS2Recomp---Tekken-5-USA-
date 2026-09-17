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

// Function: sub_00374668
// Address: 0x374668 - 0x374688
void sub_00374668_0x374668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374668_0x374668");
#endif

    ctx->pc = 0x374668u;

    // 0x374668: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x374668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x37466c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37466cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x374670: 0x24a515b0  addiu       $a1, $a1, 0x15B0
    ctx->pc = 0x374670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x374674: 0x244212d8  addiu       $v0, $v0, 0x12D8
    ctx->pc = 0x374674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4824));
    // 0x374678: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x374678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x37467c: 0x3e00008  jr          $ra
    ctx->pc = 0x37467Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37467Cu;
        // 0x374680: 0xac8500b0  sw          $a1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37467Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374684u;
    // 0x374684: 0x0  nop
    ctx->pc = 0x374684u;
    // NOP
    ctx->pc = 0x374688u;
}
