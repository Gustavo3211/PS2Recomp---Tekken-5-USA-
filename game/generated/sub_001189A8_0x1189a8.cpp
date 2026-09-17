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

// Function: sub_001189A8
// Address: 0x1189a8 - 0x1189f8
void sub_001189A8_0x1189a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001189A8_0x1189a8");
#endif

    switch (ctx->pc) {
        case 0x1189c0u: goto label_1189c0;
        default: break;
    }

    ctx->pc = 0x1189a8u;

    // 0x1189a8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x1189a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x1189ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1189acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1189b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1189b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1189b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1189B4u;
    {
        const bool branch_taken_0x1189b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1189B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189B4u;
        // 0x1189b8: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189b4) {
            ctx->pc = 0x1189ECu;
            goto label_1189ec;
        }
    }
    ctx->pc = 0x1189BCu;
    // 0x1189bc: 0x0  nop
    ctx->pc = 0x1189bcu;
    // NOP
label_1189c0:
    // 0x1189c0: 0x42000039  di
    ctx->pc = 0x1189c0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1189c4: 0x40f  sync.p
    ctx->pc = 0x1189c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1189c8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1189c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1189cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1189ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1189d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1189d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1189d4: 0x0  nop
    ctx->pc = 0x1189d4u;
    // NOP
    // 0x1189d8: 0x0  nop
    ctx->pc = 0x1189d8u;
    // NOP
    // 0x1189dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1189DCu;
    {
        const bool branch_taken_0x1189dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1189dc) {
            ctx->pc = 0x1189C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1189c0;
        }
    }
    ctx->pc = 0x1189E4u;
    // 0x1189e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1189E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1189E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189E4u;
        // 0x1189e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1189E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1189ECu;
label_1189ec:
    // 0x1189ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1189ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1189F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1189F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189F0u;
        // 0x1189f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1189F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1189F8u;
}
