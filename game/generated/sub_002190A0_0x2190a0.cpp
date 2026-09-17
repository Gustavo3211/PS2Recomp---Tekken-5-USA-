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

// Function: sub_002190A0
// Address: 0x2190a0 - 0x2190e0
void sub_002190A0_0x2190a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002190A0_0x2190a0");
#endif

    switch (ctx->pc) {
        case 0x2190b0u: goto label_2190b0;
        default: break;
    }

    ctx->pc = 0x2190a0u;

    // 0x2190a0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2190a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2190a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2190a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190a8: 0x24435b68  addiu       $v1, $v0, 0x5B68
    ctx->pc = 0x2190a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
    // 0x2190ac: 0x0  nop
    ctx->pc = 0x2190acu;
    // NOP
label_2190b0:
    // 0x2190b0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2190b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2190b4: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2190B4u;
    {
        const bool branch_taken_0x2190b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2190b4) {
            ctx->pc = 0x2190B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2190B4u;
            // 0x2190b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2190C8u;
            goto label_2190c8;
        }
    }
    ctx->pc = 0x2190BCu;
    // 0x2190bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2190BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2190C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190BCu;
        // 0x2190c0: 0x84620000  lh          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2190BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2190C4u;
    // 0x2190c4: 0x0  nop
    ctx->pc = 0x2190c4u;
    // NOP
label_2190c8:
    // 0x2190c8: 0x28a20050  slti        $v0, $a1, 0x50
    ctx->pc = 0x2190c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2190cc: 0x0  nop
    ctx->pc = 0x2190ccu;
    // NOP
    // 0x2190d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2190D0u;
    {
        const bool branch_taken_0x2190d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2190D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190D0u;
        // 0x2190d4: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190d0) {
            ctx->pc = 0x2190B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2190b0;
        }
    }
    ctx->pc = 0x2190D8u;
    // 0x2190d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2190D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2190DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190D8u;
        // 0x2190dc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2190D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2190E0u;
}
