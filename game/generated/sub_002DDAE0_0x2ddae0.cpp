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

// Function: sub_002DDAE0
// Address: 0x2ddae0 - 0x2ddaf8
void sub_002DDAE0_0x2ddae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDAE0_0x2ddae0");
#endif

    ctx->pc = 0x2ddae0u;

    // 0x2ddae0: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x2ddae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2ddae4: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DDAE4u;
    {
        const bool branch_taken_0x2ddae4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ddae4) {
            ctx->pc = 0x2DDAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDAE4u;
            // 0x2ddae8: 0xac8000c4  sw          $zero, 0xC4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDAECu;
            goto label_2ddaec;
        }
    }
    ctx->pc = 0x2DDAECu;
label_2ddaec:
    // 0x2ddaec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDAF4u;
    // 0x2ddaf4: 0x0  nop
    ctx->pc = 0x2ddaf4u;
    // NOP
    ctx->pc = 0x2ddaf8u;
}
