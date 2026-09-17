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

// Function: sub_002E2808
// Address: 0x2e2808 - 0x2e2878
void sub_002E2808_0x2e2808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2808_0x2e2808");
#endif

    ctx->pc = 0x2e2808u;

    // 0x2e2808: 0x24840084  addiu       $a0, $a0, 0x84
    ctx->pc = 0x2e2808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x2e280c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2810u;
    {
        const bool branch_taken_0x2e2810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2810u;
        // 0x2e2814: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2810) {
            ctx->pc = 0x2E2828u;
            goto label_2e2828;
        }
    }
    ctx->pc = 0x2E2818u;
    // 0x2e2818: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e281c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2820: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2820u;
    {
        const bool branch_taken_0x2e2820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2820) {
            ctx->pc = 0x2E2834u;
            goto label_2e2834;
        }
    }
    ctx->pc = 0x2E2828u;
label_2e2828:
    // 0x2e2828: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e282c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e282cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2830: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e2834:
    // 0x2e2834: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2834u;
    {
        const bool branch_taken_0x2e2834 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2834) {
            ctx->pc = 0x2E2870u;
            goto label_2e2870;
        }
    }
    ctx->pc = 0x2E283Cu;
    // 0x2e283c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2840: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2840u;
    {
        const bool branch_taken_0x2e2840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2840u;
        // 0x2e2844: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2840) {
            ctx->pc = 0x2E2858u;
            goto label_2e2858;
        }
    }
    ctx->pc = 0x2E2848u;
    // 0x2e2848: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e284c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2850: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2850u;
    {
        const bool branch_taken_0x2e2850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2850) {
            ctx->pc = 0x2E2854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2850u;
            // 0x2e2854: 0x8cc2005c  lw          $v0, 0x5C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2868u;
            goto label_2e2868;
        }
    }
    ctx->pc = 0x2E2858u;
label_2e2858:
    // 0x2e2858: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e285c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e285cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2860: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2864: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x2e2864u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5Cu));
label_2e2868:
    // 0x2e2868: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2868u;
    {
        const bool branch_taken_0x2e2868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2868) {
            ctx->pc = 0x2E286Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2868u;
            // 0x2e286c: 0xacc5005c  sw          $a1, 0x5C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2870u;
            goto label_2e2870;
        }
    }
    ctx->pc = 0x2E2870u;
label_2e2870:
    // 0x2e2870: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2878u;
}
