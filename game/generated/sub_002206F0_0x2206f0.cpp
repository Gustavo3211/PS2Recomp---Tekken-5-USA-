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

// Function: sub_002206F0
// Address: 0x2206f0 - 0x220708
void sub_002206F0_0x2206f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002206F0_0x2206f0");
#endif

    ctx->pc = 0x2206f0u;

    // 0x2206f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2206f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2206f4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2206f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2206f8: 0x2421ca00  addiu       $at, $at, -0x3600
    ctx->pc = 0x2206f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294953472));
    // 0x2206fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2206FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206FCu;
        // 0x220700: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2206FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220704u;
    // 0x220704: 0x0  nop
    ctx->pc = 0x220704u;
    // NOP
    ctx->pc = 0x220708u;
}
