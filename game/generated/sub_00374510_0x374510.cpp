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

// Function: sub_00374510
// Address: 0x374510 - 0x374530
void sub_00374510_0x374510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374510_0x374510");
#endif

    ctx->pc = 0x374510u;

    // 0x374510: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x374510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x374514: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x374514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x374518: 0x24a515b0  addiu       $a1, $a1, 0x15B0
    ctx->pc = 0x374518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x37451c: 0x244212d8  addiu       $v0, $v0, 0x12D8
    ctx->pc = 0x37451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4824));
    // 0x374520: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x374520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x374524: 0x3e00008  jr          $ra
    ctx->pc = 0x374524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374524u;
        // 0x374528: 0xac8500b0  sw          $a1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37452Cu;
    // 0x37452c: 0x0  nop
    ctx->pc = 0x37452cu;
    // NOP
    ctx->pc = 0x374530u;
}
