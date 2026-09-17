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

// Function: sub_00308C10
// Address: 0x308c10 - 0x308c28
void sub_00308C10_0x308c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308C10_0x308c10");
#endif

    ctx->pc = 0x308c10u;

    // 0x308c10: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x308c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x308c14: 0x8c62ece0  lw          $v0, -0x1320($v1)
    ctx->pc = 0x308c14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1AECE0u));
    // 0x308c18: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x308c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x308c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x308C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C1Cu;
        // 0x308c20: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308C24u;
    // 0x308c24: 0x0  nop
    ctx->pc = 0x308c24u;
    // NOP
    ctx->pc = 0x308c28u;
}
