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

// Function: sub_0021F1B8
// Address: 0x21f1b8 - 0x21f1e8
void sub_0021F1B8_0x21f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F1B8_0x21f1b8");
#endif

    switch (ctx->pc) {
        case 0x21f1c8u: goto label_21f1c8;
        case 0x21f1d0u: goto label_21f1d0;
        case 0x21f1d8u: goto label_21f1d8;
        default: break;
    }

    ctx->pc = 0x21f1b8u;

    // 0x21f1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f1c0: 0xc087d24  jal         func_21F490
    ctx->pc = 0x21F1C0u;
    SET_GPR_U32(ctx, 31, 0x21F1C8u);
    ctx->pc = 0x21F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F490u, 0x21F1C0u, 0x21F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1C8u;
label_21f1c8:
    // 0x21f1c8: 0xc087d90  jal         func_21F640
    ctx->pc = 0x21F1C8u;
    SET_GPR_U32(ctx, 31, 0x21F1D0u);
    ctx->pc = 0x21F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F640u, 0x21F1C8u, 0x21F1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1D0u;
label_21f1d0:
    // 0x21f1d0: 0xc087f0a  jal         func_21FC28
    ctx->pc = 0x21F1D0u;
    SET_GPR_U32(ctx, 31, 0x21F1D8u);
    ctx->pc = 0x21FC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FC28u, 0x21F1D0u, 0x21F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1D8u;
label_21f1d8:
    // 0x21f1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x21F1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1DCu;
        // 0x21f1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F1E4u;
    // 0x21f1e4: 0x0  nop
    ctx->pc = 0x21f1e4u;
    // NOP
    ctx->pc = 0x21f1e8u;
}
