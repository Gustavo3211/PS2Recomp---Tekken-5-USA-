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

// Function: sub_0020A378
// Address: 0x20a378 - 0x20a398
void sub_0020A378_0x20a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A378_0x20a378");
#endif

    switch (ctx->pc) {
        case 0x20a388u: goto label_20a388;
        default: break;
    }

    ctx->pc = 0x20a378u;

    // 0x20a378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20a380: 0xc082162  jal         func_208588
    ctx->pc = 0x20A380u;
    SET_GPR_U32(ctx, 31, 0x20A388u);
    ctx->pc = 0x20A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A380u;
    // 0x20a384: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20A380u, 0x20A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A388u;
label_20a388:
    // 0x20a388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a38c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A38Cu;
        // 0x20a390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A394u;
    // 0x20a394: 0x0  nop
    ctx->pc = 0x20a394u;
    // NOP
    ctx->pc = 0x20a398u;
}
