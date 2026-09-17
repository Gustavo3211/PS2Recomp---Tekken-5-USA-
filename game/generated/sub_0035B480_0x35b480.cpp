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

// Function: sub_0035B480
// Address: 0x35b480 - 0x35b498
void sub_0035B480_0x35b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B480_0x35b480");
#endif

    ctx->pc = 0x35b480u;

    // 0x35b480: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b484: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35b484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35b488: 0x24421320  addiu       $v0, $v0, 0x1320
    ctx->pc = 0x35b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x35b48c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x35b48cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1D1334u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1334u, _value); } while (0);
    // 0x35b490: 0x3e00008  jr          $ra
    ctx->pc = 0x35B490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B490u;
        // 0x35b494: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B498u;
}
