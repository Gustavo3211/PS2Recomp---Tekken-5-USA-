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

// Function: sub_003137E8
// Address: 0x3137e8 - 0x3137f8
void sub_003137E8_0x3137e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003137E8_0x3137e8");
#endif

    ctx->pc = 0x3137e8u;

    // 0x3137e8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3137e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3137ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3137ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3137F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137ECu;
        // 0x3137f0: 0xac448170  sw          $a0, -0x7E90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294934896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3137ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3137F4u;
    // 0x3137f4: 0x0  nop
    ctx->pc = 0x3137f4u;
    // NOP
    ctx->pc = 0x3137f8u;
}
