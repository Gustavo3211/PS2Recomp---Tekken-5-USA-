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

// Function: sub_00362BD0
// Address: 0x362bd0 - 0x362be0
void sub_00362BD0_0x362bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362BD0_0x362bd0");
#endif

    ctx->pc = 0x362bd0u;

    // 0x362bd0: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x362bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x362bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x362BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362BD4u;
        // 0x362bd8: 0x84625d04  lh          $v0, 0x5D04($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 23812)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362BDCu;
    // 0x362bdc: 0x0  nop
    ctx->pc = 0x362bdcu;
    // NOP
    ctx->pc = 0x362be0u;
}
