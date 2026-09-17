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

// Function: sub_001F0670
// Address: 0x1f0670 - 0x1f0698
void sub_001F0670_0x1f0670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0670_0x1f0670");
#endif

    switch (ctx->pc) {
        case 0x1f0684u: goto label_1f0684;
        default: break;
    }

    ctx->pc = 0x1f0670u;

    // 0x1f0670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0678: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f0678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f067c: 0xc0b4256  jal         func_2D0958
    ctx->pc = 0x1F067Cu;
    SET_GPR_U32(ctx, 31, 0x1F0684u);
    ctx->pc = 0x1F0680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F067Cu;
    // 0x1f0680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0958u, 0x1F067Cu, 0x1F0684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0684u;
label_1f0684:
    // 0x1f0684: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1f0684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x1f0688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f068c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f068cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0690: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0690u;
        // 0x1f0694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0698u;
}
