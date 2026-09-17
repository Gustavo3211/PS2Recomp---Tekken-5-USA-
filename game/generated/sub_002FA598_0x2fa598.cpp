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

// Function: sub_002FA598
// Address: 0x2fa598 - 0x2fa5a8
void sub_002FA598_0x2fa598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA598_0x2fa598");
#endif

    switch (ctx->pc) {
        case 0x2fa59cu: goto label_2fa59c;
        default: break;
    }

    ctx->pc = 0x2fa598u;

    // 0x2fa598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa59c:
    // 0x2fa59c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fa59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fa5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5A0u;
        // 0x2fa5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA5A8u;
}
