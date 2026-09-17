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

// Function: sub_003205F8
// Address: 0x3205f8 - 0x320618
void sub_003205F8_0x3205f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003205F8_0x3205f8");
#endif

    switch (ctx->pc) {
        case 0x320608u: goto label_320608;
        default: break;
    }

    ctx->pc = 0x3205f8u;

    // 0x3205f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3205f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3205fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3205fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320600: 0xc0c7f58  jal         func_31FD60
    ctx->pc = 0x320600u;
    SET_GPR_U32(ctx, 31, 0x320608u);
    ctx->pc = 0x320604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320600u;
    // 0x320604: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FD60u, 0x320600u, 0x320608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320608u;
label_320608:
    // 0x320608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32060c: 0x3e00008  jr          $ra
    ctx->pc = 0x32060Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32060Cu;
        // 0x320610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32060Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320614u;
    // 0x320614: 0x0  nop
    ctx->pc = 0x320614u;
    // NOP
    ctx->pc = 0x320618u;
}
