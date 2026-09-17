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

// Function: sub_00362A48
// Address: 0x362a48 - 0x362a58
void sub_00362A48_0x362a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362A48_0x362a48");
#endif

    ctx->pc = 0x362a48u;

    // 0x362a48: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x362a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x362a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x362A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A4Cu;
        // 0x362a50: 0x84625cf0  lh          $v0, 0x5CF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 23792)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362A54u;
    // 0x362a54: 0x0  nop
    ctx->pc = 0x362a54u;
    // NOP
    ctx->pc = 0x362a58u;
}
