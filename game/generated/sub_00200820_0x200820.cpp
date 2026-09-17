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

// Function: sub_00200820
// Address: 0x200820 - 0x200840
void sub_00200820_0x200820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200820_0x200820");
#endif

    switch (ctx->pc) {
        case 0x200830u: goto label_200830;
        default: break;
    }

    ctx->pc = 0x200820u;

    // 0x200820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200828: 0xc07fa00  jal         func_1FE800
    ctx->pc = 0x200828u;
    SET_GPR_U32(ctx, 31, 0x200830u);
    ctx->pc = 0x1FE800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE800u, 0x200828u, 0x200830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200830u;
label_200830:
    // 0x200830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200834: 0x3e00008  jr          $ra
    ctx->pc = 0x200834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200834u;
        // 0x200838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20083Cu;
    // 0x20083c: 0x0  nop
    ctx->pc = 0x20083cu;
    // NOP
    ctx->pc = 0x200840u;
}
