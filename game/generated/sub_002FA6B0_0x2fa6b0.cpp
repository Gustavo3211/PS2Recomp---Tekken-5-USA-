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

// Function: sub_002FA6B0
// Address: 0x2fa6b0 - 0x2fa6d0
void sub_002FA6B0_0x2fa6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA6B0_0x2fa6b0");
#endif

    ctx->pc = 0x2fa6b0u;

    // 0x2fa6b0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA6B0u;
    {
        const bool branch_taken_0x2fa6b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa6b0) {
            ctx->pc = 0x2FA6C8u;
            goto label_2fa6c8;
        }
    }
    ctx->pc = 0x2FA6B8u;
    // 0x2fa6b8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2fa6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2fa6bc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2fa6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2fa6c0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2fa6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2fa6c4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fa6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2fa6c8:
    // 0x2fa6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA6D0u;
}
