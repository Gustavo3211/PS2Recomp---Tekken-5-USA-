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

// Function: sub_001012C8
// Address: 0x1012c8 - 0x1012e0
void sub_001012C8_0x1012c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001012C8_0x1012c8");
#endif

    ctx->pc = 0x1012c8u;

    // 0x1012c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1012c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1012cc: 0x3c0101bd  lui         $at, 0x1BD
    ctx->pc = 0x1012ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)445 << 16));
    // 0x1012d0: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x1012d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x1012d4: 0xac25a1c0  sw          $a1, -0x5E40($at)
    ctx->pc = 0x1012d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943168), GPR_U32(ctx, 5));
    // 0x1012d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1012D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1012E0u;
}
