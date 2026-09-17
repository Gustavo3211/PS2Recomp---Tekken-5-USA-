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

// Function: sub_001FAFE0
// Address: 0x1fafe0 - 0x1fb028
void sub_001FAFE0_0x1fafe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAFE0_0x1fafe0");
#endif

    ctx->pc = 0x1fafe0u;

    // 0x1fafe0: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x1fafe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x1fafe4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FAFE4u;
    {
        const bool branch_taken_0x1fafe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFE4u;
        // 0x1fafe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafe4) {
            ctx->pc = 0x1FB020u;
            goto label_1fb020;
        }
    }
    ctx->pc = 0x1FAFECu;
    // 0x1fafec: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fafecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1faff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1faff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faff4: 0x94a60038  lhu         $a2, 0x38($a1)
    ctx->pc = 0x1faff4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1faff8: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FAFF8u;
    {
        const bool branch_taken_0x1faff8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFF8u;
        // 0x1faffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faff8) {
            ctx->pc = 0x1FB020u;
            goto label_1fb020;
        }
    }
    ctx->pc = 0x1FB000u;
    // 0x1fb000: 0x308200f0  andi        $v0, $a0, 0xF0
    ctx->pc = 0x1fb000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x1fb004: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB004u;
    {
        const bool branch_taken_0x1fb004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB004u;
        // 0x1fb008: 0x8ca20034  lw          $v0, 0x34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb004) {
            ctx->pc = 0x1FB020u;
            goto label_1fb020;
        }
    }
    ctx->pc = 0x1FB00Cu;
    // 0x1fb00c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB00Cu;
    {
        const bool branch_taken_0x1fb00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb00c) {
            ctx->pc = 0x1FB020u;
            goto label_1fb020;
        }
    }
    ctx->pc = 0x1FB014u;
    // 0x1fb014: 0xaca60034  sw          $a2, 0x34($a1)
    ctx->pc = 0x1fb014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 6));
    // 0x1fb018: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fb018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb01c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1fb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1fb020:
    // 0x1fb020: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB028u;
}
