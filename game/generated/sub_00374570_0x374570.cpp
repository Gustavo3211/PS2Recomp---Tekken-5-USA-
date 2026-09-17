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

// Function: sub_00374570
// Address: 0x374570 - 0x374590
void sub_00374570_0x374570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374570_0x374570");
#endif

    ctx->pc = 0x374570u;

    // 0x374570: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x374570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x374574: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x374574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x374578: 0x24a515b0  addiu       $a1, $a1, 0x15B0
    ctx->pc = 0x374578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x37457c: 0x244212d8  addiu       $v0, $v0, 0x12D8
    ctx->pc = 0x37457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4824));
    // 0x374580: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x374580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x374584: 0x3e00008  jr          $ra
    ctx->pc = 0x374584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374584u;
        // 0x374588: 0xac8500b0  sw          $a1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37458Cu;
    // 0x37458c: 0x0  nop
    ctx->pc = 0x37458cu;
    // NOP
    ctx->pc = 0x374590u;
}
