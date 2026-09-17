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

// Function: sub_00338820
// Address: 0x338820 - 0x338860
void sub_00338820_0x338820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338820_0x338820");
#endif

    switch (ctx->pc) {
        case 0x338838u: goto label_338838;
        default: break;
    }

    ctx->pc = 0x338820u;

    // 0x338820: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x338820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x338824: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x338824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x338828: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x338828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x33882c: 0x24820018  addiu       $v0, $a0, 0x18
    ctx->pc = 0x33882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x338830: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x338830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x338834: 0x0  nop
    ctx->pc = 0x338834u;
    // NOP
label_338838:
    // 0x338838: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x338838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33883c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33883cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x338840: 0x0  nop
    ctx->pc = 0x338840u;
    // NOP
    // 0x338844: 0x0  nop
    ctx->pc = 0x338844u;
    // NOP
    // 0x338848: 0x0  nop
    ctx->pc = 0x338848u;
    // NOP
    // 0x33884c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33884Cu;
    {
        const bool branch_taken_0x33884c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x338850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33884Cu;
        // 0x338850: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33884c) {
            ctx->pc = 0x338838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338838;
        }
    }
    ctx->pc = 0x338854u;
    // 0x338854: 0x3e00008  jr          $ra
    ctx->pc = 0x338854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33885Cu;
    // 0x33885c: 0x0  nop
    ctx->pc = 0x33885cu;
    // NOP
    ctx->pc = 0x338860u;
}
