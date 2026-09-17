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

// Function: sub_002FA798
// Address: 0x2fa798 - 0x2fa7c0
void sub_002FA798_0x2fa798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA798_0x2fa798");
#endif

    ctx->pc = 0x2fa798u;

    // 0x2fa798: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2fa798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fa79c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA79Cu;
    {
        const bool branch_taken_0x2fa79c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA79Cu;
        // 0x2fa7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa79c) {
            ctx->pc = 0x2FA7B4u;
            goto label_2fa7b4;
        }
    }
    ctx->pc = 0x2FA7A4u;
    // 0x2fa7a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fa7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa7a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fa7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fa7ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fa7b0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2fa7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2fa7b4:
    // 0x2fa7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA7BCu;
    // 0x2fa7bc: 0x0  nop
    ctx->pc = 0x2fa7bcu;
    // NOP
    ctx->pc = 0x2fa7c0u;
}
