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

// Function: sub_00284DA8
// Address: 0x284da8 - 0x284de8
void sub_00284DA8_0x284da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284DA8_0x284da8");
#endif

    ctx->pc = 0x284da8u;

    // 0x284da8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x284da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284dac: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x284dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x284db0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x284db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x284db4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x284db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x284db8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x284db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x284dbc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x284dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x284dc0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x284dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x284dc4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x284dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x284dc8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x284dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x284dcc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x284dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x284dd0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x284dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x284dd4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x284dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x284dd8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x284dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x284ddc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x284ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x284de0: 0x3e00008  jr          $ra
    ctx->pc = 0x284DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DE0u;
        // 0x284de4: 0xac655920  sw          $a1, 0x5920($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22816), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284DE8u;
}
