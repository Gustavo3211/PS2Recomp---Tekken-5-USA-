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

// Function: sub_002EEE78
// Address: 0x2eee78 - 0x2eee90
void sub_002EEE78_0x2eee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEE78_0x2eee78");
#endif

    ctx->pc = 0x2eee78u;

    // 0x2eee78: 0xac8500f8  sw          $a1, 0xF8($a0)
    ctx->pc = 0x2eee78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 5));
    // 0x2eee7c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eee80: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2eee80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eee84: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x2eee84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x2eee88: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE88u;
        // 0x2eee8c: 0xac830110  sw          $v1, 0x110($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEE90u;
}
