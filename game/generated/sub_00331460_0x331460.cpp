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

// Function: sub_00331460
// Address: 0x331460 - 0x331480
void sub_00331460_0x331460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331460_0x331460");
#endif

    switch (ctx->pc) {
        case 0x331470u: goto label_331470;
        default: break;
    }

    ctx->pc = 0x331460u;

    // 0x331460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331468: 0xc0cde96  jal         func_337A58
    ctx->pc = 0x331468u;
    SET_GPR_U32(ctx, 31, 0x331470u);
    ctx->pc = 0x337A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A58u, 0x331468u, 0x331470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331470u;
label_331470:
    // 0x331470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331474: 0xff82c610  sd          $v0, -0x39F0($gp)
    ctx->pc = 0x331474u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294952464), GPR_U64(ctx, 2));
    // 0x331478: 0x3e00008  jr          $ra
    ctx->pc = 0x331478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331478u;
        // 0x33147c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331480u;
}
