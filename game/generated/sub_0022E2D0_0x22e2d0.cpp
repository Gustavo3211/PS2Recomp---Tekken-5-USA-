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

// Function: sub_0022E2D0
// Address: 0x22e2d0 - 0x22e2f0
void sub_0022E2D0_0x22e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E2D0_0x22e2d0");
#endif

    ctx->pc = 0x22e2d0u;

    // 0x22e2d0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22e2d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22e2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22e2d8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x22e2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x22e2dc: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x22e2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x22e2e0: 0xac25dc7c  sw          $a1, -0x2384($at)
    ctx->pc = 0x22e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958204), GPR_U32(ctx, 5));
    // 0x22e2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x22E2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2E4u;
        // 0x22e2e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E2ECu;
    // 0x22e2ec: 0x0  nop
    ctx->pc = 0x22e2ecu;
    // NOP
    ctx->pc = 0x22e2f0u;
}
