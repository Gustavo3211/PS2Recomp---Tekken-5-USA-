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

// Function: sub_00342C70
// Address: 0x342c70 - 0x342c90
void sub_00342C70_0x342c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342C70_0x342c70");
#endif

    switch (ctx->pc) {
        case 0x342c80u: goto label_342c80;
        default: break;
    }

    ctx->pc = 0x342c70u;

    // 0x342c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342c78: 0xc0d0b08  jal         func_342C20
    ctx->pc = 0x342C78u;
    SET_GPR_U32(ctx, 31, 0x342C80u);
    ctx->pc = 0x342C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C20u, 0x342C78u, 0x342C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342C80u;
label_342c80:
    // 0x342c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342c84: 0x3e00008  jr          $ra
    ctx->pc = 0x342C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C84u;
        // 0x342c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C8Cu;
    // 0x342c8c: 0x0  nop
    ctx->pc = 0x342c8cu;
    // NOP
    ctx->pc = 0x342c90u;
}
