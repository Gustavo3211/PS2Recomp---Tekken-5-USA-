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

// Function: sub_002FA7C8
// Address: 0x2fa7c8 - 0x2fa7f8
void sub_002FA7C8_0x2fa7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA7C8_0x2fa7c8");
#endif

    ctx->pc = 0x2fa7c8u;

    // 0x2fa7c8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA7C8u;
    {
        const bool branch_taken_0x2fa7c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7C8u;
        // 0x2fa7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7c8) {
            ctx->pc = 0x2FA7F0u;
            goto label_2fa7f0;
        }
    }
    ctx->pc = 0x2FA7D0u;
    // 0x2fa7d0: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x2fa7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fa7d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fa7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fa7d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA7D8u;
    {
        const bool branch_taken_0x2fa7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7D8u;
        // 0x2fa7dc: 0x90840009  lbu         $a0, 0x9($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7d8) {
            ctx->pc = 0x2FA7ECu;
            goto label_2fa7ec;
        }
    }
    ctx->pc = 0x2FA7E0u;
    // 0x2fa7e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa7e4: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA7E4u;
    {
        const bool branch_taken_0x2fa7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7E4u;
        // 0x2fa7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7e4) {
            ctx->pc = 0x2FA7F0u;
            goto label_2fa7f0;
        }
    }
    ctx->pc = 0x2FA7ECu;
label_2fa7ec:
    // 0x2fa7ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa7f0:
    // 0x2fa7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA7F8u;
}
