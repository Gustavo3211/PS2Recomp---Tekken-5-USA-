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

// Function: sub_00313B18
// Address: 0x313b18 - 0x313b40
void sub_00313B18_0x313b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313B18_0x313b18");
#endif

    switch (ctx->pc) {
        case 0x313b30u: goto label_313b30;
        default: break;
    }

    ctx->pc = 0x313b18u;

    // 0x313b18: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x313b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x313b1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x313b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x313b20: 0x8c4481c4  lw          $a0, -0x7E3C($v0)
    ctx->pc = 0x313b20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1B81C4u));
    // 0x313b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313b28: 0xc0cb30a  jal         func_32CC28
    ctx->pc = 0x313B28u;
    SET_GPR_U32(ctx, 31, 0x313B30u);
    ctx->pc = 0x32CC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC28u, 0x313B28u, 0x313B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B30u;
label_313b30:
    // 0x313b30: 0xaf80c57c  sw          $zero, -0x3A84($gp)
    ctx->pc = 0x313b30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952316), GPR_U32(ctx, 0));
    // 0x313b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313b38: 0x3e00008  jr          $ra
    ctx->pc = 0x313B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B38u;
        // 0x313b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313B40u;
}
