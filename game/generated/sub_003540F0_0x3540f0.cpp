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

// Function: sub_003540F0
// Address: 0x3540f0 - 0x354124
void sub_003540F0_0x3540f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003540F0_0x3540f0");
#endif

    switch (ctx->pc) {
        case 0x354108u: goto label_354108;
        default: break;
    }

    ctx->pc = 0x3540f0u;

    // 0x3540f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3540f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3540f4: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3540f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3540f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3540f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3540fc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3540fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354100: 0xc0d5404  jal         func_355010
    ctx->pc = 0x354100u;
    SET_GPR_U32(ctx, 31, 0x354108u);
    ctx->pc = 0x355010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355010u, 0x354100u, 0x354108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354108u;
label_354108:
    // 0x354108: 0xaf80cbe0  sw          $zero, -0x3420($gp)
    ctx->pc = 0x354108u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953952), GPR_U32(ctx, 0));
    // 0x35410c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x35410cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354110: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x354110u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354114: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x354114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x354118: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x354118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35411c: 0x3e00008  jr          $ra
    ctx->pc = 0x35411Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35411Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354124u;
}
