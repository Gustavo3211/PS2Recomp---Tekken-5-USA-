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

// Function: sub_00344B28
// Address: 0x344b28 - 0x344b48
void sub_00344B28_0x344b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344B28_0x344b28");
#endif

    switch (ctx->pc) {
        case 0x344b38u: goto label_344b38;
        default: break;
    }

    ctx->pc = 0x344b28u;

    // 0x344b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344b30: 0xc042ee4  jal         func_10BB90
    ctx->pc = 0x344B30u;
    SET_GPR_U32(ctx, 31, 0x344B38u);
    ctx->pc = 0x10BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB90u, 0x344B30u, 0x344B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B38u;
label_344b38:
    // 0x344b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x344B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B3Cu;
        // 0x344b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344B44u;
    // 0x344b44: 0x0  nop
    ctx->pc = 0x344b44u;
    // NOP
    ctx->pc = 0x344b48u;
}
