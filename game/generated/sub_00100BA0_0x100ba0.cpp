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

// Function: sub_00100BA0
// Address: 0x100ba0 - 0x100bc8
void sub_00100BA0_0x100ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100BA0_0x100ba0");
#endif

    switch (ctx->pc) {
        case 0x100bb4u: goto label_100bb4;
        case 0x100bbcu: goto label_100bbc;
        default: break;
    }

    ctx->pc = 0x100ba0u;

    // 0x100ba0: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x100ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x100ba4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100bac: 0xc04024c  jal         func_100930
    ctx->pc = 0x100BACu;
    SET_GPR_U32(ctx, 31, 0x100BB4u);
    ctx->pc = 0x100BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BACu;
    // 0x100bb0: 0x24848b40  addiu       $a0, $a0, -0x74C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100930u, 0x100BACu, 0x100BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BB4u;
label_100bb4:
    // 0x100bb4: 0xc089982  jal         func_226608
    ctx->pc = 0x100BB4u;
    SET_GPR_U32(ctx, 31, 0x100BBCu);
    ctx->pc = 0x226608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226608u, 0x100BB4u, 0x100BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BBCu;
label_100bbc:
    // 0x100bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x100BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BC0u;
        // 0x100bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100BC8u;
}
