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

// Function: sub_002FA698
// Address: 0x2fa698 - 0x2fa6b0
void sub_002FA698_0x2fa698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA698_0x2fa698");
#endif

    ctx->pc = 0x2fa698u;

    // 0x2fa698: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2fa698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2fa69c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2fa69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2fa6a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2fa6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2fa6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA6A4u;
        // 0x2fa6a8: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA6ACu;
    // 0x2fa6ac: 0x0  nop
    ctx->pc = 0x2fa6acu;
    // NOP
    ctx->pc = 0x2fa6b0u;
}
