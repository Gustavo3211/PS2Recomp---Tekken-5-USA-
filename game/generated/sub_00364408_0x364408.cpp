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

// Function: sub_00364408
// Address: 0x364408 - 0x364448
void sub_00364408_0x364408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364408_0x364408");
#endif

    switch (ctx->pc) {
        case 0x364420u: goto label_364420;
        default: break;
    }

    ctx->pc = 0x364408u;

    // 0x364408: 0x58a0000d  blezl       $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x364408u;
    {
        const bool branch_taken_0x364408 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x364408) {
            ctx->pc = 0x36440Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364408u;
            // 0x36440c: 0xac851400  sw          $a1, 0x1400($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 5120), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364440u;
            goto label_364440;
        }
    }
    ctx->pc = 0x364410u;
    // 0x364410: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x364410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364414: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x364414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364418: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x364418u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36441c: 0x0  nop
    ctx->pc = 0x36441cu;
    // NOP
label_364420:
    // 0x364420: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x364420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x364424: 0xac460a00  sw          $a2, 0xA00($v0)
    ctx->pc = 0x364424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2560), GPR_U32(ctx, 6));
    // 0x364428: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x364428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36442c: 0x0  nop
    ctx->pc = 0x36442cu;
    // NOP
    // 0x364430: 0x0  nop
    ctx->pc = 0x364430u;
    // NOP
    // 0x364434: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364434u;
    {
        const bool branch_taken_0x364434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x364438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364434u;
        // 0x364438: 0x24420028  addiu       $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364434) {
            ctx->pc = 0x364420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364420;
        }
    }
    ctx->pc = 0x36443Cu;
    // 0x36443c: 0xac851400  sw          $a1, 0x1400($a0)
    ctx->pc = 0x36443cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5120), GPR_U32(ctx, 5));
label_364440:
    // 0x364440: 0x3e00008  jr          $ra
    ctx->pc = 0x364440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364440u;
        // 0x364444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364448u;
}
