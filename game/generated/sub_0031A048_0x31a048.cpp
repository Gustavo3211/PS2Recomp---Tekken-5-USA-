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

// Function: sub_0031A048
// Address: 0x31a048 - 0x31a068
void sub_0031A048_0x31a048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A048_0x31a048");
#endif

    switch (ctx->pc) {
        case 0x31a058u: goto label_31a058;
        default: break;
    }

    ctx->pc = 0x31a048u;

    // 0x31a048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a050: 0xc0ccb4e  jal         func_332D38
    ctx->pc = 0x31A050u;
    SET_GPR_U32(ctx, 31, 0x31A058u);
    ctx->pc = 0x332D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332D38u, 0x31A050u, 0x31A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A058u;
label_31a058:
    // 0x31a058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a05c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A05Cu;
        // 0x31a060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A064u;
    // 0x31a064: 0x0  nop
    ctx->pc = 0x31a064u;
    // NOP
    ctx->pc = 0x31a068u;
}
