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

// Function: sub_00281408
// Address: 0x281408 - 0x281428
void sub_00281408_0x281408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281408_0x281408");
#endif

    switch (ctx->pc) {
        case 0x281418u: goto label_281418;
        default: break;
    }

    ctx->pc = 0x281408u;

    // 0x281408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28140c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281410: 0xc0a04b6  jal         func_2812D8
    ctx->pc = 0x281410u;
    SET_GPR_U32(ctx, 31, 0x281418u);
    ctx->pc = 0x2812D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D8u, 0x281410u, 0x281418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281418u;
label_281418:
    // 0x281418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28141c: 0x3e00008  jr          $ra
    ctx->pc = 0x28141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28141Cu;
        // 0x281420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281424u;
    // 0x281424: 0x0  nop
    ctx->pc = 0x281424u;
    // NOP
    ctx->pc = 0x281428u;
}
