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

// Function: sub_002E2728
// Address: 0x2e2728 - 0x2e2798
void sub_002E2728_0x2e2728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2728_0x2e2728");
#endif

    ctx->pc = 0x2e2728u;

    // 0x2e2728: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x2e2728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x2e272c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2730u;
    {
        const bool branch_taken_0x2e2730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2730u;
        // 0x2e2734: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2730) {
            ctx->pc = 0x2E2748u;
            goto label_2e2748;
        }
    }
    ctx->pc = 0x2E2738u;
    // 0x2e2738: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e273c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2740: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2740u;
    {
        const bool branch_taken_0x2e2740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2740) {
            ctx->pc = 0x2E2754u;
            goto label_2e2754;
        }
    }
    ctx->pc = 0x2E2748u;
label_2e2748:
    // 0x2e2748: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e274c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e274cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2750: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e2754:
    // 0x2e2754: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2754u;
    {
        const bool branch_taken_0x2e2754 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2754) {
            ctx->pc = 0x2E2790u;
            goto label_2e2790;
        }
    }
    ctx->pc = 0x2E275Cu;
    // 0x2e275c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2760: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2760u;
    {
        const bool branch_taken_0x2e2760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2760u;
        // 0x2e2764: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2760) {
            ctx->pc = 0x2E2778u;
            goto label_2e2778;
        }
    }
    ctx->pc = 0x2E2768u;
    // 0x2e2768: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e276c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2770: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2770u;
    {
        const bool branch_taken_0x2e2770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2770) {
            ctx->pc = 0x2E2774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2770u;
            // 0x2e2774: 0x8cc20060  lw          $v0, 0x60($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2788u;
            goto label_2e2788;
        }
    }
    ctx->pc = 0x2E2778u;
label_2e2778:
    // 0x2e2778: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e277c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e277cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2780: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2784: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x2e2784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60u));
label_2e2788:
    // 0x2e2788: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2788u;
    {
        const bool branch_taken_0x2e2788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2788) {
            ctx->pc = 0x2E278Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2788u;
            // 0x2e278c: 0xacc50060  sw          $a1, 0x60($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2790u;
            goto label_2e2790;
        }
    }
    ctx->pc = 0x2E2790u;
label_2e2790:
    // 0x2e2790: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2798u;
}
