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

// Function: sub_002FA678
// Address: 0x2fa678 - 0x2fa698
void sub_002FA678_0x2fa678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA678_0x2fa678");
#endif

    switch (ctx->pc) {
        case 0x2fa688u: goto label_2fa688;
        default: break;
    }

    ctx->pc = 0x2fa678u;

    // 0x2fa678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa67c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa680: 0xc0bbe48  jal         func_2EF920
    ctx->pc = 0x2FA680u;
    SET_GPR_U32(ctx, 31, 0x2FA688u);
    ctx->pc = 0x2FA684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA680u;
    // 0x2fa684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF920u, 0x2FA680u, 0x2FA688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA688u;
label_2fa688:
    // 0x2fa688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa68c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA68Cu;
        // 0x2fa690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA694u;
    // 0x2fa694: 0x0  nop
    ctx->pc = 0x2fa694u;
    // NOP
    ctx->pc = 0x2fa698u;
}
