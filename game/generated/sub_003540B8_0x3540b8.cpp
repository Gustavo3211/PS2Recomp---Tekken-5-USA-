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

// Function: sub_003540B8
// Address: 0x3540b8 - 0x3540f0
void sub_003540B8_0x3540b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003540B8_0x3540b8");
#endif

    switch (ctx->pc) {
        case 0x3540d8u: goto label_3540d8;
        default: break;
    }

    ctx->pc = 0x3540b8u;

    // 0x3540b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3540b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3540bc: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3540bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3540c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3540c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3540c4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3540c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3540c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3540c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3540cc: 0xaf82cbe0  sw          $v0, -0x3420($gp)
    ctx->pc = 0x3540ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953952), GPR_U32(ctx, 2));
    // 0x3540d0: 0xc0d5396  jal         func_354E58
    ctx->pc = 0x3540D0u;
    SET_GPR_U32(ctx, 31, 0x3540D8u);
    ctx->pc = 0x354E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354E58u, 0x3540D0u, 0x3540D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3540D8u;
label_3540d8:
    // 0x3540d8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3540d8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3540dc: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3540dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3540e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3540e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3540e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3540e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3540e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3540E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3540E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3540F0u;
}
