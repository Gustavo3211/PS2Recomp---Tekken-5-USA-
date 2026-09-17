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

// Function: sub_001F9560
// Address: 0x1f9560 - 0x1f9570
void sub_001F9560_0x1f9560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9560_0x1f9560");
#endif

    ctx->pc = 0x1f9560u;

    // 0x1f9560: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1f9560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1f9564: 0x8c6255bc  lw          $v0, 0x55BC($v1)
    ctx->pc = 0x1f9564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1555BCu));
    // 0x1f9568: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9568u;
        // 0x1f956c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9570u;
}
