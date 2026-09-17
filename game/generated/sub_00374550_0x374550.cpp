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

// Function: sub_00374550
// Address: 0x374550 - 0x374570
void sub_00374550_0x374550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374550_0x374550");
#endif

    ctx->pc = 0x374550u;

    // 0x374550: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x374550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x374554: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x374554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x374558: 0x24a515b0  addiu       $a1, $a1, 0x15B0
    ctx->pc = 0x374558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x37455c: 0x244212d8  addiu       $v0, $v0, 0x12D8
    ctx->pc = 0x37455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4824));
    // 0x374560: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x374560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x374564: 0x3e00008  jr          $ra
    ctx->pc = 0x374564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374564u;
        // 0x374568: 0xac8500b0  sw          $a1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37456Cu;
    // 0x37456c: 0x0  nop
    ctx->pc = 0x37456cu;
    // NOP
    ctx->pc = 0x374570u;
}
