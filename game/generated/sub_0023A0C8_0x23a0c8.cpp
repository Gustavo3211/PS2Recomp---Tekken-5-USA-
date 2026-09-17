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

// Function: sub_0023A0C8
// Address: 0x23a0c8 - 0x23a100
void sub_0023A0C8_0x23a0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A0C8_0x23a0c8");
#endif

    switch (ctx->pc) {
        case 0x23a0d0u: goto label_23a0d0;
        default: break;
    }

    ctx->pc = 0x23a0c8u;

    // 0x23a0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23a0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23a0ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a0d0:
    // 0x23a0d0: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x23a0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23a0d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23A0D4u;
    {
        const bool branch_taken_0x23a0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a0d4) {
            ctx->pc = 0x23A0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A0D4u;
            // 0x23a0d8: 0x90850005  lbu         $a1, 0x5($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A0DCu;
            goto label_23a0dc;
        }
    }
    ctx->pc = 0x23A0DCu;
label_23a0dc:
    // 0x23a0dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23a0e0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x23a0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23a0e4: 0x0  nop
    ctx->pc = 0x23a0e4u;
    // NOP
    // 0x23a0e8: 0x0  nop
    ctx->pc = 0x23a0e8u;
    // NOP
    // 0x23a0ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23A0ECu;
    {
        const bool branch_taken_0x23a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0ECu;
        // 0x23a0f0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0ec) {
            ctx->pc = 0x23A0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a0d0;
        }
    }
    ctx->pc = 0x23A0F4u;
    // 0x23a0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x23A0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0F4u;
        // 0x23a0f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A0FCu;
    // 0x23a0fc: 0x0  nop
    ctx->pc = 0x23a0fcu;
    // NOP
    ctx->pc = 0x23a100u;
}
