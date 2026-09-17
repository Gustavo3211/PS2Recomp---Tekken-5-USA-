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

// Function: sub_0023D598
// Address: 0x23d598 - 0x23d5b0
void sub_0023D598_0x23d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D598_0x23d598");
#endif

    ctx->pc = 0x23d598u;

    // 0x23d598: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23d598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d59c: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x23d59cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x23d5a0: 0xac25a968  sw          $a1, -0x5698($at)
    ctx->pc = 0x23d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945128), GPR_U32(ctx, 5));
    // 0x23d5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23D5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D5ACu;
    // 0x23d5ac: 0x0  nop
    ctx->pc = 0x23d5acu;
    // NOP
    ctx->pc = 0x23d5b0u;
}
