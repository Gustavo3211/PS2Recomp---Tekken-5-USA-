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

// Function: sub_00339E08
// Address: 0x339e08 - 0x339e48
void sub_00339E08_0x339e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339E08_0x339e08");
#endif

    switch (ctx->pc) {
        case 0x339e20u: goto label_339e20;
        default: break;
    }

    ctx->pc = 0x339e08u;

    // 0x339e08: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x339e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x339e0c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x339e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x339e10: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x339e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x339e14: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x339e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x339e18: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x339e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x339e1c: 0x0  nop
    ctx->pc = 0x339e1cu;
    // NOP
label_339e20:
    // 0x339e20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x339e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x339e24: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x339e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x339e28: 0x0  nop
    ctx->pc = 0x339e28u;
    // NOP
    // 0x339e2c: 0x0  nop
    ctx->pc = 0x339e2cu;
    // NOP
    // 0x339e30: 0x0  nop
    ctx->pc = 0x339e30u;
    // NOP
    // 0x339e34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x339E34u;
    {
        const bool branch_taken_0x339e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x339E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E34u;
        // 0x339e38: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339e34) {
            ctx->pc = 0x339E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339e20;
        }
    }
    ctx->pc = 0x339E3Cu;
    // 0x339e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x339E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339E3Cu;
        // 0x339e40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339E44u;
    // 0x339e44: 0x0  nop
    ctx->pc = 0x339e44u;
    // NOP
    ctx->pc = 0x339e48u;
}
