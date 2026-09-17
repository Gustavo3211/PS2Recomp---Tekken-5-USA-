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

// Function: sub_002D1710
// Address: 0x2d1710 - 0x2d1728
void sub_002D1710_0x2d1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1710_0x2d1710");
#endif

    ctx->pc = 0x2d1710u;

    // 0x2d1710: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1714: 0x8c43f668  lw          $v1, -0x998($v0)
    ctx->pc = 0x2d1714u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF668u));
    // 0x2d1718: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d1718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d171c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D171Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D171Cu;
        // 0x2d1720: 0x217fe  dsrl32      $v0, $v0, 31 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D171Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1724u;
    // 0x2d1724: 0x0  nop
    ctx->pc = 0x2d1724u;
    // NOP
    ctx->pc = 0x2d1728u;
}
