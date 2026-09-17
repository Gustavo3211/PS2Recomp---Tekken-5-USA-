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

// Function: sub_00242D00
// Address: 0x242d00 - 0x242d10
void sub_00242D00_0x242d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242D00_0x242d00");
#endif

    ctx->pc = 0x242d00u;

    // 0x242d00: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x242d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x242d04: 0x8c625d98  lw          $v0, 0x5D98($v1)
    ctx->pc = 0x242d04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x165D98u));
    // 0x242d08: 0x3e00008  jr          $ra
    ctx->pc = 0x242D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D08u;
        // 0x242d0c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242D10u;
}
