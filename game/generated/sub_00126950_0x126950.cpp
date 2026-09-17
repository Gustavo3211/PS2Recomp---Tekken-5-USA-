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

// Function: sub_00126950
// Address: 0x126950 - 0x126970
void sub_00126950_0x126950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126950_0x126950");
#endif

    switch (ctx->pc) {
        case 0x126958u: goto label_126958;
        default: break;
    }

    ctx->pc = 0x126950u;

    // 0x126950: 0xc049a82  jal         func_126A08
    ctx->pc = 0x126950u;
    SET_GPR_U32(ctx, 31, 0x126958u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x126950u, 0x126958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126958u;
label_126958:
    // 0x126958: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x126958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12695c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x12695cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126960: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x126960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x126964: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x126964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126968: 0x3e00008  jr          $ra
    ctx->pc = 0x126968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126968u;
        // 0x12696c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126970u;
}
