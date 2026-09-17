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

// Function: sub_004956D0
// Address: 0x4956d0 - 0x4956e8
void sub_004956D0_0x4956d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004956D0_0x4956d0");
#endif

    switch (ctx->pc) {
        case 0x4956e0u: goto label_4956e0;
        default: break;
    }

    ctx->pc = 0x4956d0u;

    // 0x4956d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4956d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4956d4: 0x81252c0  j           func_494B00
    ctx->pc = 0x4956D4u;
    ctx->pc = 0x4956D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4956D4u;
    // 0x4956d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494B00u, 0x4956D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4956DCu;
    // 0x4956dc: 0x0  nop
    ctx->pc = 0x4956dcu;
    // NOP
label_4956e0:
    // 0x4956e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4956E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4956E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4956E0u;
        // 0x4956e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4956E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4956E8u;
}
