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

// Function: sub_00100730
// Address: 0x100730 - 0x100740
void sub_00100730_0x100730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100730_0x100730");
#endif

    ctx->pc = 0x100730u;

    // 0x100730: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x100730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x100734: 0x3e00008  jr          $ra
    ctx->pc = 0x100734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100734u;
        // 0x100738: 0xac4000c8  sw          $zero, 0xC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10073Cu;
    // 0x10073c: 0x0  nop
    ctx->pc = 0x10073cu;
    // NOP
    ctx->pc = 0x100740u;
}
