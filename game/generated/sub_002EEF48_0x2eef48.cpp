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

// Function: sub_002EEF48
// Address: 0x2eef48 - 0x2eef68
void sub_002EEF48_0x2eef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEF48_0x2eef48");
#endif

    ctx->pc = 0x2eef48u;

    // 0x2eef48: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x2eef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x2eef4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEF4Cu;
    {
        const bool branch_taken_0x2eef4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef4c) {
            ctx->pc = 0x2EEF60u;
            goto label_2eef60;
        }
    }
    ctx->pc = 0x2EEF54u;
    // 0x2eef54: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2eef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2eef58: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2eef58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eef5c: 0xac830110  sw          $v1, 0x110($a0)
    ctx->pc = 0x2eef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 3));
label_2eef60:
    // 0x2eef60: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEF68u;
}
