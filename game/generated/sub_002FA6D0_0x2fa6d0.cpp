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

// Function: sub_002FA6D0
// Address: 0x2fa6d0 - 0x2fa6f8
void sub_002FA6D0_0x2fa6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA6D0_0x2fa6d0");
#endif

    ctx->pc = 0x2fa6d0u;

    // 0x2fa6d0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa6d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fa6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fa6d8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA6D8u;
    {
        const bool branch_taken_0x2fa6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA6D8u;
        // 0x2fa6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6d8) {
            ctx->pc = 0x2FA6ECu;
            goto label_2fa6ec;
        }
    }
    ctx->pc = 0x2FA6E0u;
    // 0x2fa6e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fa6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fa6e4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2fa6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2fa6e8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2fa6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2fa6ec:
    // 0x2fa6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA6F4u;
    // 0x2fa6f4: 0x0  nop
    ctx->pc = 0x2fa6f4u;
    // NOP
    ctx->pc = 0x2fa6f8u;
}
