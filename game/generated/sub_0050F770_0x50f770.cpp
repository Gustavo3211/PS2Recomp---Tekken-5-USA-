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

// Function: sub_0050F770
// Address: 0x50f770 - 0x50f788
void sub_0050F770_0x50f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F770_0x50f770");
#endif

    ctx->pc = 0x50f770u;

    // 0x50f770: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x50f770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x50f774: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50f774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50f778: 0x2442a438  addiu       $v0, $v0, -0x5BC8
    ctx->pc = 0x50f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943800));
    // 0x50f77c: 0x3e00008  jr          $ra
    ctx->pc = 0x50F77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F77Cu;
        // 0x50f780: 0xac62c690  sw          $v0, -0x3970($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F784u;
    // 0x50f784: 0x0  nop
    ctx->pc = 0x50f784u;
    // NOP
    ctx->pc = 0x50f788u;
}
