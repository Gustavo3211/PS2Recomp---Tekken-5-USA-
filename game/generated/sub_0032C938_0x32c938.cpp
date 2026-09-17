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

// Function: sub_0032C938
// Address: 0x32c938 - 0x32c958
void sub_0032C938_0x32c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C938_0x32c938");
#endif

    switch (ctx->pc) {
        case 0x32c94cu: goto label_32c94c;
        default: break;
    }

    ctx->pc = 0x32c938u;

    // 0x32c938: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32c938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32c93c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c944: 0xc0cb27e  jal         func_32C9F8
    ctx->pc = 0x32C944u;
    SET_GPR_U32(ctx, 31, 0x32C94Cu);
    ctx->pc = 0x32C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C944u;
    // 0x32c948: 0x24840700  addiu       $a0, $a0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C9F8u, 0x32C944u, 0x32C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C94Cu;
label_32c94c:
    // 0x32c94c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c950: 0x3e00008  jr          $ra
    ctx->pc = 0x32C950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C950u;
        // 0x32c954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C958u;
}
