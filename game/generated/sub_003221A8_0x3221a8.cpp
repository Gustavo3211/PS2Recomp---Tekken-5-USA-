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

// Function: sub_003221A8
// Address: 0x3221a8 - 0x3221b8
void sub_003221A8_0x3221a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003221A8_0x3221a8");
#endif

    ctx->pc = 0x3221a8u;

    // 0x3221a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3221a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3221ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3221ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3221B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221ACu;
        // 0x3221b0: 0x34424001  ori         $v0, $v0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16385);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3221ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3221B4u;
    // 0x3221b4: 0x0  nop
    ctx->pc = 0x3221b4u;
    // NOP
    ctx->pc = 0x3221b8u;
}
