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

// Function: sub_00260CD8
// Address: 0x260cd8 - 0x260cf0
void sub_00260CD8_0x260cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260CD8_0x260cd8");
#endif

    ctx->pc = 0x260cd8u;

    // 0x260cd8: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x260cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x260cdc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x260CDCu;
    {
        const bool branch_taken_0x260cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260cdc) {
            ctx->pc = 0x260CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260CDCu;
            // 0x260ce0: 0xac8500e0  sw          $a1, 0xE0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260CE4u;
            goto label_260ce4;
        }
    }
    ctx->pc = 0x260CE4u;
label_260ce4:
    // 0x260ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x260CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260CECu;
    // 0x260cec: 0x0  nop
    ctx->pc = 0x260cecu;
    // NOP
    ctx->pc = 0x260cf0u;
}
