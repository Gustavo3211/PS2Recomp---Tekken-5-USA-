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

// Function: sub_00311978
// Address: 0x311978 - 0x3119c0
void sub_00311978_0x311978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311978_0x311978");
#endif

    switch (ctx->pc) {
        case 0x311990u: goto label_311990;
        default: break;
    }

    ctx->pc = 0x311978u;

    // 0x311978: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x311978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x31197c: 0x2404007e  addiu       $a0, $zero, 0x7E
    ctx->pc = 0x31197cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x311980: 0x24a25e10  addiu       $v0, $a1, 0x5E10
    ctx->pc = 0x311980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24080));
    // 0x311984: 0x244307f0  addiu       $v1, $v0, 0x7F0
    ctx->pc = 0x311984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x311988: 0x244207e0  addiu       $v0, $v0, 0x7E0
    ctx->pc = 0x311988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
    // 0x31198c: 0x0  nop
    ctx->pc = 0x31198cu;
    // NOP
label_311990:
    // 0x311990: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x311990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x311994: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x311994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x311998: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x311998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31199c: 0x0  nop
    ctx->pc = 0x31199cu;
    // NOP
    // 0x3119a0: 0x0  nop
    ctx->pc = 0x3119a0u;
    // NOP
    // 0x3119a4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3119A4u;
    {
        const bool branch_taken_0x3119a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3119A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119A4u;
        // 0x3119a8: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119a4) {
            ctx->pc = 0x311990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311990;
        }
    }
    ctx->pc = 0x3119ACu;
    // 0x3119ac: 0x24a25e10  addiu       $v0, $a1, 0x5E10
    ctx->pc = 0x3119acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24080));
    // 0x3119b0: 0xaf82c53c  sw          $v0, -0x3AC4($gp)
    ctx->pc = 0x3119b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952252), GPR_U32(ctx, 2));
    // 0x3119b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3119B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3119B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119B4u;
        // 0x3119b8: 0xac4007f0  sw          $zero, 0x7F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2032), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3119B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3119BCu;
    // 0x3119bc: 0x0  nop
    ctx->pc = 0x3119bcu;
    // NOP
    ctx->pc = 0x3119c0u;
}
