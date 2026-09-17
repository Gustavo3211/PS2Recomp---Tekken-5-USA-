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

// Function: sub_0023C8E0
// Address: 0x23c8e0 - 0x23c928
void sub_0023C8E0_0x23c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C8E0_0x23c8e0");
#endif

    ctx->pc = 0x23c8e0u;

    // 0x23c8e0: 0x2782a960  addiu       $v0, $gp, -0x56A0
    ctx->pc = 0x23c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945120));
    // 0x23c8e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c8e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c8ec: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x23c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x23c8f0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C8F0u;
    {
        const bool branch_taken_0x23c8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F0u;
        // 0x23c8f4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8f0) {
            ctx->pc = 0x23C910u;
            goto label_23c910;
        }
    }
    ctx->pc = 0x23C8F8u;
    // 0x23c8f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C8F8u;
    {
        const bool branch_taken_0x23c8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F8u;
        // 0x23c8fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8f8) {
            ctx->pc = 0x23C920u;
            goto label_23c920;
        }
    }
    ctx->pc = 0x23C900u;
    // 0x23c900: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C900u;
    {
        const bool branch_taken_0x23c900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C900u;
        // 0x23c904: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c900) {
            ctx->pc = 0x23C920u;
            goto label_23c920;
        }
    }
    ctx->pc = 0x23C908u;
    // 0x23c908: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C908u;
    {
        const bool branch_taken_0x23c908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c908) {
            ctx->pc = 0x23C920u;
            goto label_23c920;
        }
    }
    ctx->pc = 0x23C910u;
label_23c910:
    // 0x23c910: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23c914: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C914u;
    {
        const bool branch_taken_0x23c914 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C914u;
        // 0x23c918: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c914) {
            ctx->pc = 0x23C920u;
            goto label_23c920;
        }
    }
    ctx->pc = 0x23C91Cu;
    // 0x23c91c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_23c920:
    // 0x23c920: 0x3e00008  jr          $ra
    ctx->pc = 0x23C920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C928u;
}
