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

// Function: sub_00308C80
// Address: 0x308c80 - 0x308c98
void sub_00308C80_0x308c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308C80_0x308c80");
#endif

    ctx->pc = 0x308c80u;

    // 0x308c80: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x308c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x308c84: 0x2442ed2c  addiu       $v0, $v0, -0x12D4
    ctx->pc = 0x308c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962476));
    // 0x308c88: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x308c88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1AED2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AED2Cu, _value); } while (0);
    // 0x308c8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x308c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x308c90: 0x3e00008  jr          $ra
    ctx->pc = 0x308C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C90u;
        // 0x308c94: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308C98u;
}
