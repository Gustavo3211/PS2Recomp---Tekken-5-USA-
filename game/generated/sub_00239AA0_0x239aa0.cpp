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

// Function: sub_00239AA0
// Address: 0x239aa0 - 0x239ae0
void sub_00239AA0_0x239aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239AA0_0x239aa0");
#endif

    ctx->pc = 0x239aa0u;

    // 0x239aa0: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x239AA0u;
    {
        const bool branch_taken_0x239aa0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x239AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AA0u;
        // 0x239aa4: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239aa0) {
            ctx->pc = 0x239AD0u;
            goto label_239ad0;
        }
    }
    ctx->pc = 0x239AA8u;
    // 0x239aa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x239aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x239aac: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x239aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x239ab0: 0x2442d600  addiu       $v0, $v0, -0x2A00
    ctx->pc = 0x239ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x239ab4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x239ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x239ab8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x239ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239abc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x239abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239ac0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x239ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239ac4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x239ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x239ac8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239AC8u;
    {
        const bool branch_taken_0x239ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x239ac8) {
            ctx->pc = 0x239AD8u;
            goto label_239ad8;
        }
    }
    ctx->pc = 0x239AD0u;
label_239ad0:
    // 0x239ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x239AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AD0u;
        // 0x239ad4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239AD8u;
label_239ad8:
    // 0x239ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x239AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AD8u;
        // 0x239adc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239AE0u;
}
