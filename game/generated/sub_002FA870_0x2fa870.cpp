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

// Function: sub_002FA870
// Address: 0x2fa870 - 0x2fa8a0
void sub_002FA870_0x2fa870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA870_0x2fa870");
#endif

    ctx->pc = 0x2fa870u;

    // 0x2fa870: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x2fa870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fa874: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA874u;
    {
        const bool branch_taken_0x2fa874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa874) {
            ctx->pc = 0x2FA890u;
            goto label_2fa890;
        }
    }
    ctx->pc = 0x2FA87Cu;
    // 0x2fa87c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA87Cu;
    {
        const bool branch_taken_0x2fa87c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA87Cu;
        // 0x2fa880: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa87c) {
            ctx->pc = 0x2FA890u;
            goto label_2fa890;
        }
    }
    ctx->pc = 0x2FA884u;
    // 0x2fa884: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2fa884u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fa888: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fa888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fa88c: 0x7c430080  sq          $v1, 0x80($v0)
    ctx->pc = 0x2fa88cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 3));
label_2fa890:
    // 0x2fa890: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA898u;
    // 0x2fa898: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA898u;
        // 0x2fa89c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA8A0u;
}
