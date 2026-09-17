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

// Function: sub_00249958
// Address: 0x249958 - 0x249978
void sub_00249958_0x249958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249958_0x249958");
#endif

    switch (ctx->pc) {
        case 0x249968u: goto label_249968;
        default: break;
    }

    ctx->pc = 0x249958u;

    // 0x249958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24995c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24995cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249960: 0xc09251e  jal         func_249478
    ctx->pc = 0x249960u;
    SET_GPR_U32(ctx, 31, 0x249968u);
    ctx->pc = 0x249478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249478u, 0x249960u, 0x249968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249968u;
label_249968:
    // 0x249968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24996c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x24996cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x249970: 0x3e00008  jr          $ra
    ctx->pc = 0x249970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249970u;
        // 0x249974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249978u;
}
