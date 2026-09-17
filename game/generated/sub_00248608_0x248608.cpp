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

// Function: sub_00248608
// Address: 0x248608 - 0x248628
void sub_00248608_0x248608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248608_0x248608");
#endif

    switch (ctx->pc) {
        case 0x248618u: goto label_248618;
        default: break;
    }

    ctx->pc = 0x248608u;

    // 0x248608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24860c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248610: 0xc0d62b0  jal         func_358AC0
    ctx->pc = 0x248610u;
    SET_GPR_U32(ctx, 31, 0x248618u);
    ctx->pc = 0x358AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358AC0u, 0x248610u, 0x248618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248618u;
label_248618:
    // 0x248618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24861c: 0x3e00008  jr          $ra
    ctx->pc = 0x24861Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24861Cu;
        // 0x248620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24861Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248624u;
    // 0x248624: 0x0  nop
    ctx->pc = 0x248624u;
    // NOP
    ctx->pc = 0x248628u;
}
