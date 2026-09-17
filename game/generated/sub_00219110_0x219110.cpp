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

// Function: sub_00219110
// Address: 0x219110 - 0x219150
void sub_00219110_0x219110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219110_0x219110");
#endif

    switch (ctx->pc) {
        case 0x219120u: goto label_219120;
        default: break;
    }

    ctx->pc = 0x219110u;

    // 0x219110: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x219110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x219114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219118: 0x24435b68  addiu       $v1, $v0, 0x5B68
    ctx->pc = 0x219118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
    // 0x21911c: 0x0  nop
    ctx->pc = 0x21911cu;
    // NOP
label_219120:
    // 0x219120: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x219120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x219124: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x219124u;
    {
        const bool branch_taken_0x219124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x219124) {
            ctx->pc = 0x219128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219124u;
            // 0x219128: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219138u;
            goto label_219138;
        }
    }
    ctx->pc = 0x21912Cu;
    // 0x21912c: 0x3e00008  jr          $ra
    ctx->pc = 0x21912Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21912Cu;
        // 0x219130: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21912Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219134u;
    // 0x219134: 0x0  nop
    ctx->pc = 0x219134u;
    // NOP
label_219138:
    // 0x219138: 0x28a20050  slti        $v0, $a1, 0x50
    ctx->pc = 0x219138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x21913c: 0x0  nop
    ctx->pc = 0x21913cu;
    // NOP
    // 0x219140: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x219140u;
    {
        const bool branch_taken_0x219140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219140u;
        // 0x219144: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219140) {
            ctx->pc = 0x219120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219120;
        }
    }
    ctx->pc = 0x219148u;
    // 0x219148: 0x3e00008  jr          $ra
    ctx->pc = 0x219148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219148u;
        // 0x21914c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219150u;
}
