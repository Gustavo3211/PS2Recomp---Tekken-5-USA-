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

// Function: sub_00304368
// Address: 0x304368 - 0x304388
void sub_00304368_0x304368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304368_0x304368");
#endif

    switch (ctx->pc) {
        case 0x304378u: goto label_304378;
        default: break;
    }

    ctx->pc = 0x304368u;

    // 0x304368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30436c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304370: 0xc0be9e6  jal         func_2FA798
    ctx->pc = 0x304370u;
    SET_GPR_U32(ctx, 31, 0x304378u);
    ctx->pc = 0x304374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304370u;
    // 0x304374: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA798u, 0x304370u, 0x304378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304378u;
label_304378:
    // 0x304378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30437c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30437cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x304380: 0x3e00008  jr          $ra
    ctx->pc = 0x304380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304380u;
        // 0x304384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304388u;
}
