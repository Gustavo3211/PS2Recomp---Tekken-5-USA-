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

// Function: sub_002477D0
// Address: 0x2477d0 - 0x2477f8
void sub_002477D0_0x2477d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002477D0_0x2477d0");
#endif

    ctx->pc = 0x2477d0u;

    // 0x2477d0: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x2477d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2477d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2477d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2477d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2477d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2477dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2477dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2477e0: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2477e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2477e4: 0x24216ec0  addiu       $at, $at, 0x6EC0
    ctx->pc = 0x2477e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28352));
    // 0x2477e8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2477e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2477ec: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2477ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2477f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2477F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2477F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477F0u;
        // 0x2477f4: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2477F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2477F8u;
}
