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

// Function: sub_0022E308
// Address: 0x22e308 - 0x22e330
void sub_0022E308_0x22e308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E308_0x22e308");
#endif

    ctx->pc = 0x22e308u;

    // 0x22e308: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x22e308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22e30c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22e310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e314: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x22e314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22e318: 0x3e00008  jr          $ra
    ctx->pc = 0x22E318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E318u;
        // 0x22e31c: 0x2442005f  addiu       $v0, $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 95));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E320u;
    // 0x22e320: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22e320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22e324: 0x3e00008  jr          $ra
    ctx->pc = 0x22E324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E324u;
        // 0x22e328: 0x2442dc88  addiu       $v0, $v0, -0x2378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E32Cu;
    // 0x22e32c: 0x0  nop
    ctx->pc = 0x22e32cu;
    // NOP
    ctx->pc = 0x22e330u;
}
