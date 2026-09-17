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

// Function: sub_00265488
// Address: 0x265488 - 0x2654a8
void sub_00265488_0x265488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265488_0x265488");
#endif

    switch (ctx->pc) {
        case 0x265498u: goto label_265498;
        default: break;
    }

    ctx->pc = 0x265488u;

    // 0x265488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x265488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26548c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265490: 0xc0994fe  jal         func_2653F8
    ctx->pc = 0x265490u;
    SET_GPR_U32(ctx, 31, 0x265498u);
    ctx->pc = 0x2653F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2653F8u, 0x265490u, 0x265498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265498u;
label_265498:
    // 0x265498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26549c: 0x3e00008  jr          $ra
    ctx->pc = 0x26549Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2654A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26549Cu;
        // 0x2654a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26549Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2654A4u;
    // 0x2654a4: 0x0  nop
    ctx->pc = 0x2654a4u;
    // NOP
    ctx->pc = 0x2654a8u;
}
