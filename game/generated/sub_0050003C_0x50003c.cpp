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

// Function: sub_0050003C
// Address: 0x50003c - 0x50004c
void sub_0050003C_0x50003c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050003C_0x50003c");
#endif

    ctx->pc = 0x50003cu;

    // 0x50003c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x50003cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x500040: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x500040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x500044: 0x2812  mflo        $a1
    ctx->pc = 0x500044u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x500048: 0x3e00008  jr          $ra
    ctx->pc = 0x500048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500050u;
}
