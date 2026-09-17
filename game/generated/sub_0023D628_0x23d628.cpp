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

// Function: sub_0023D628
// Address: 0x23d628 - 0x23d658
void sub_0023D628_0x23d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D628_0x23d628");
#endif

    switch (ctx->pc) {
        case 0x23d638u: goto label_23d638;
        default: break;
    }

    ctx->pc = 0x23d628u;

    // 0x23d628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d62c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d630: 0xc08f56c  jal         func_23D5B0
    ctx->pc = 0x23D630u;
    SET_GPR_U32(ctx, 31, 0x23D638u);
    ctx->pc = 0x23D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D5B0u, 0x23D630u, 0x23D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D638u;
label_23d638:
    // 0x23d638: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d63c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D63Cu;
    {
        const bool branch_taken_0x23d63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D63Cu;
        // 0x23d640: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d63c) {
            ctx->pc = 0x23D648u;
            goto label_23d648;
        }
    }
    ctx->pc = 0x23D644u;
    // 0x23d644: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23d644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23d648:
    // 0x23d648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d64c: 0x3e00008  jr          $ra
    ctx->pc = 0x23D64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D64Cu;
        // 0x23d650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D654u;
    // 0x23d654: 0x0  nop
    ctx->pc = 0x23d654u;
    // NOP
    ctx->pc = 0x23d658u;
}
