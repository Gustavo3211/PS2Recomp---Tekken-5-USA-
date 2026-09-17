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

// Function: sub_00219928
// Address: 0x219928 - 0x219940
void sub_00219928_0x219928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219928_0x219928");
#endif

    ctx->pc = 0x219928u;

    // 0x219928: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x219928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21992c: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x21992cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x219930: 0xac25c928  sw          $a1, -0x36D8($at)
    ctx->pc = 0x219930u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953256), GPR_U32(ctx, 5));
    // 0x219934: 0x3e00008  jr          $ra
    ctx->pc = 0x219934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21993Cu;
    // 0x21993c: 0x0  nop
    ctx->pc = 0x21993cu;
    // NOP
    ctx->pc = 0x219940u;
}
