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

// Function: sub_00218FE0
// Address: 0x218fe0 - 0x219020
void sub_00218FE0_0x218fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218FE0_0x218fe0");
#endif

    switch (ctx->pc) {
        case 0x218ff0u: goto label_218ff0;
        default: break;
    }

    ctx->pc = 0x218fe0u;

    // 0x218fe0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fe8: 0x24435b68  addiu       $v1, $v0, 0x5B68
    ctx->pc = 0x218fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
    // 0x218fec: 0x0  nop
    ctx->pc = 0x218fecu;
    // NOP
label_218ff0:
    // 0x218ff0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x218ff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218ff4: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218FF4u;
    {
        const bool branch_taken_0x218ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x218ff4) {
            ctx->pc = 0x218FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218FF4u;
            // 0x218ff8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219008u;
            goto label_219008;
        }
    }
    ctx->pc = 0x218FFCu;
    // 0x218ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x218FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FFCu;
        // 0x219000: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219004u;
    // 0x219004: 0x0  nop
    ctx->pc = 0x219004u;
    // NOP
label_219008:
    // 0x219008: 0x28a20050  slti        $v0, $a1, 0x50
    ctx->pc = 0x219008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x21900c: 0x0  nop
    ctx->pc = 0x21900cu;
    // NOP
    // 0x219010: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x219010u;
    {
        const bool branch_taken_0x219010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219010u;
        // 0x219014: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219010) {
            ctx->pc = 0x218FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218ff0;
        }
    }
    ctx->pc = 0x219018u;
    // 0x219018: 0x3e00008  jr          $ra
    ctx->pc = 0x219018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219018u;
        // 0x21901c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219020u;
}
