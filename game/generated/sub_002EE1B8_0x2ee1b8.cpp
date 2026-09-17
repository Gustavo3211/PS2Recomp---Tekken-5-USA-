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

// Function: sub_002EE1B8
// Address: 0x2ee1b8 - 0x2ee1d8
void sub_002EE1B8_0x2ee1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE1B8_0x2ee1b8");
#endif

    ctx->pc = 0x2ee1b8u;

    // 0x2ee1b8: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x2ee1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2ee1bc: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x2ee1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x2ee1c0: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2ee1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ee1c4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ee1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ee1c8: 0xac860090  sw          $a2, 0x90($a0)
    ctx->pc = 0x2ee1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 6));
    // 0x2ee1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1CCu;
        // 0x2ee1d0: 0xac830094  sw          $v1, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE1D4u;
    // 0x2ee1d4: 0x0  nop
    ctx->pc = 0x2ee1d4u;
    // NOP
    ctx->pc = 0x2ee1d8u;
}
