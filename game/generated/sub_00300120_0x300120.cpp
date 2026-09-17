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

// Function: sub_00300120
// Address: 0x300120 - 0x300138
void sub_00300120_0x300120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300120_0x300120");
#endif

    ctx->pc = 0x300120u;

    // 0x300120: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x300120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x300124: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x300124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x300128: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x300128u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x30012c: 0xac25c500  sw          $a1, -0x3B00($at)
    ctx->pc = 0x30012cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952192), GPR_U32(ctx, 5));
    // 0x300130: 0x3e00008  jr          $ra
    ctx->pc = 0x300130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300138u;
}
