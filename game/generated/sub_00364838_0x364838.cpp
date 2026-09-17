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

// Function: sub_00364838
// Address: 0x364838 - 0x364870
void sub_00364838_0x364838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364838_0x364838");
#endif

    switch (ctx->pc) {
        case 0x364854u: goto label_364854;
        default: break;
    }

    ctx->pc = 0x364838u;

    // 0x364838: 0x8f82c818  lw          $v0, -0x37E8($gp)
    ctx->pc = 0x364838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952984)));
    // 0x36483c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36483cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x364840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364844: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x364844u;
    {
        const bool branch_taken_0x364844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364844u;
        // 0x364848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364844) {
            ctx->pc = 0x364860u;
            goto label_364860;
        }
    }
    ctx->pc = 0x36484Cu;
    // 0x36484c: 0xc0d9112  jal         func_364448
    ctx->pc = 0x36484Cu;
    SET_GPR_U32(ctx, 31, 0x364854u);
    ctx->pc = 0x364448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364448u, 0x36484Cu, 0x364854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364854u;
label_364854:
    // 0x364854: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x364854u;
    {
        const bool branch_taken_0x364854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364854u;
        // 0x364858: 0xaf80c818  sw          $zero, -0x37E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364854) {
            ctx->pc = 0x364864u;
            goto label_364864;
        }
    }
    ctx->pc = 0x36485Cu;
    // 0x36485c: 0x0  nop
    ctx->pc = 0x36485cu;
    // NOP
label_364860:
    // 0x364860: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x364860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_364864:
    // 0x364864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364868: 0x3e00008  jr          $ra
    ctx->pc = 0x364868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364868u;
        // 0x36486c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364870u;
}
