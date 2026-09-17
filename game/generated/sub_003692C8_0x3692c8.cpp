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

// Function: sub_003692C8
// Address: 0x3692c8 - 0x3692e8
void sub_003692C8_0x3692c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003692C8_0x3692c8");
#endif

    switch (ctx->pc) {
        case 0x3692d8u: goto label_3692d8;
        default: break;
    }

    ctx->pc = 0x3692c8u;

    // 0x3692c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3692c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3692cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3692ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3692d0: 0xc0d1080  jal         func_344200
    ctx->pc = 0x3692D0u;
    SET_GPR_U32(ctx, 31, 0x3692D8u);
    ctx->pc = 0x344200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344200u, 0x3692D0u, 0x3692D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3692D8u;
label_3692d8:
    // 0x3692d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3692d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3692dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3692DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3692E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692DCu;
        // 0x3692e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3692DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3692E4u;
    // 0x3692e4: 0x0  nop
    ctx->pc = 0x3692e4u;
    // NOP
    ctx->pc = 0x3692e8u;
}
