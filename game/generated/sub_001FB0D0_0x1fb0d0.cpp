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

// Function: sub_001FB0D0
// Address: 0x1fb0d0 - 0x1fb108
void sub_001FB0D0_0x1fb0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB0D0_0x1fb0d0");
#endif

    ctx->pc = 0x1fb0d0u;

    // 0x1fb0d0: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1fb0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb0d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fb0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb0d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB0D8u;
    {
        const bool branch_taken_0x1fb0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0D8u;
        // 0x1fb0dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0d8) {
            ctx->pc = 0x1FB100u;
            goto label_1fb100;
        }
    }
    ctx->pc = 0x1FB0E0u;
    // 0x1fb0e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1fb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1fb0e4: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1fb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1fb0e8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1fb0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1fb0ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB0ECu;
    {
        const bool branch_taken_0x1fb0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb0ec) {
            ctx->pc = 0x1FB100u;
            goto label_1fb100;
        }
    }
    ctx->pc = 0x1FB0F4u;
    // 0x1fb0f4: 0x94820038  lhu         $v0, 0x38($a0)
    ctx->pc = 0x1fb0f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1fb0f8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1fb0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1fb0fc: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1fb0fcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fb100:
    // 0x1fb100: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB100u;
        // 0x1fb104: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB108u;
}
