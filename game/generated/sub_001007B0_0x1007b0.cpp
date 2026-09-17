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

// Function: sub_001007B0
// Address: 0x1007b0 - 0x1007c8
void sub_001007B0_0x1007b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001007B0_0x1007b0");
#endif

    switch (ctx->pc) {
        case 0x1007b8u: goto label_1007b8;
        default: break;
    }

    ctx->pc = 0x1007b0u;

    // 0x1007b0: 0xc0401da  jal         func_100768
    ctx->pc = 0x1007B0u;
    SET_GPR_U32(ctx, 31, 0x1007B8u);
    ctx->pc = 0x100768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100768u, 0x1007B0u, 0x1007B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1007B8u;
label_1007b8:
    // 0x1007b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1007b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1007bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1007BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1007C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007BCu;
        // 0x1007c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1007BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1007C4u;
    // 0x1007c4: 0x0  nop
    ctx->pc = 0x1007c4u;
    // NOP
    ctx->pc = 0x1007c8u;
}
