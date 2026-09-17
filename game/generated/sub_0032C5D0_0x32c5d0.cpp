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

// Function: sub_0032C5D0
// Address: 0x32c5d0 - 0x32c5f0
void sub_0032C5D0_0x32c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C5D0_0x32c5d0");
#endif

    ctx->pc = 0x32c5d0u;

    // 0x32c5d0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C5D0u;
    {
        const bool branch_taken_0x32c5d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c5d0) {
            ctx->pc = 0x32C5E4u;
            goto label_32c5e4;
        }
    }
    ctx->pc = 0x32C5D8u;
    // 0x32c5d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x32c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32c5dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32c5e0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x32c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_32c5e4:
    // 0x32c5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x32C5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C5ECu;
    // 0x32c5ec: 0x0  nop
    ctx->pc = 0x32c5ecu;
    // NOP
    ctx->pc = 0x32c5f0u;
}
