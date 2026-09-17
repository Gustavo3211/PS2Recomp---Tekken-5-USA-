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

// Function: sub_0023BEF8
// Address: 0x23bef8 - 0x23bf18
void sub_0023BEF8_0x23bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BEF8_0x23bef8");
#endif

    switch (ctx->pc) {
        case 0x23bf08u: goto label_23bf08;
        default: break;
    }

    ctx->pc = 0x23bef8u;

    // 0x23bef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23befc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bf00: 0xc08ebca  jal         func_23AF28
    ctx->pc = 0x23BF00u;
    SET_GPR_U32(ctx, 31, 0x23BF08u);
    ctx->pc = 0x23AF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF28u, 0x23BF00u, 0x23BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF08u;
label_23bf08:
    // 0x23bf08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x23BF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF0Cu;
        // 0x23bf10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BF14u;
    // 0x23bf14: 0x0  nop
    ctx->pc = 0x23bf14u;
    // NOP
    ctx->pc = 0x23bf18u;
}
