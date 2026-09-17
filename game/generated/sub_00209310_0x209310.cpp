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

// Function: sub_00209310
// Address: 0x209310 - 0x209340
void sub_00209310_0x209310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209310_0x209310");
#endif

    ctx->pc = 0x209310u;

    // 0x209310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209314: 0xaf8098bc  sw          $zero, -0x6744($gp)
    ctx->pc = 0x209314u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940860), GPR_U32(ctx, 0));
    // 0x209318: 0xaf8298b8  sw          $v0, -0x6748($gp)
    ctx->pc = 0x209318u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940856), GPR_U32(ctx, 2));
    // 0x20931c: 0xaf8298c4  sw          $v0, -0x673C($gp)
    ctx->pc = 0x20931cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940868), GPR_U32(ctx, 2));
    // 0x209320: 0xaf8098c0  sw          $zero, -0x6740($gp)
    ctx->pc = 0x209320u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940864), GPR_U32(ctx, 0));
    // 0x209324: 0xaf8098c8  sw          $zero, -0x6738($gp)
    ctx->pc = 0x209324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940872), GPR_U32(ctx, 0));
    // 0x209328: 0xaf8298d0  sw          $v0, -0x6730($gp)
    ctx->pc = 0x209328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940880), GPR_U32(ctx, 2));
    // 0x20932c: 0xaf8098cc  sw          $zero, -0x6734($gp)
    ctx->pc = 0x20932cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940876), GPR_U32(ctx, 0));
    // 0x209330: 0xaf8098b0  sw          $zero, -0x6750($gp)
    ctx->pc = 0x209330u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940848), GPR_U32(ctx, 0));
    // 0x209334: 0x3e00008  jr          $ra
    ctx->pc = 0x209334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209334u;
        // 0x209338: 0xaf8098b4  sw          $zero, -0x674C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20933Cu;
    // 0x20933c: 0x0  nop
    ctx->pc = 0x20933cu;
    // NOP
    ctx->pc = 0x209340u;
}
