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

// Function: sub_002416A0
// Address: 0x2416a0 - 0x2416b8
void sub_002416A0_0x2416a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002416A0_0x2416a0");
#endif

    ctx->pc = 0x2416a0u;

    // 0x2416a0: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x2416a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2416a4: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2416a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2416a8: 0x24213b30  addiu       $at, $at, 0x3B30
    ctx->pc = 0x2416a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 15152));
    // 0x2416ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2416ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2416B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416ACu;
        // 0x2416b0: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2416ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2416B4u;
    // 0x2416b4: 0x0  nop
    ctx->pc = 0x2416b4u;
    // NOP
    ctx->pc = 0x2416b8u;
}
