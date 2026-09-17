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

// Function: sub_002E24F0
// Address: 0x2e24f0 - 0x2e2560
void sub_002E24F0_0x2e24f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E24F0_0x2e24f0");
#endif

    ctx->pc = 0x2e24f0u;

    // 0x2e24f0: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x2e24f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e24f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e24f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E24F8u;
    {
        const bool branch_taken_0x2e24f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24F8u;
        // 0x2e24fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24f8) {
            ctx->pc = 0x2E2510u;
            goto label_2e2510;
        }
    }
    ctx->pc = 0x2E2500u;
    // 0x2e2500: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2504: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2508: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2508u;
    {
        const bool branch_taken_0x2e2508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2508) {
            ctx->pc = 0x2E251Cu;
            goto label_2e251c;
        }
    }
    ctx->pc = 0x2E2510u;
label_2e2510:
    // 0x2e2510: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2518: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e251c:
    // 0x2e251c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E251Cu;
    {
        const bool branch_taken_0x2e251c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e251c) {
            ctx->pc = 0x2E2558u;
            goto label_2e2558;
        }
    }
    ctx->pc = 0x2E2524u;
    // 0x2e2524: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e2524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2528: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2528u;
    {
        const bool branch_taken_0x2e2528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2528u;
        // 0x2e252c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2528) {
            ctx->pc = 0x2E2540u;
            goto label_2e2540;
        }
    }
    ctx->pc = 0x2E2530u;
    // 0x2e2530: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2534: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2538: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2538u;
    {
        const bool branch_taken_0x2e2538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2538) {
            ctx->pc = 0x2E253Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2538u;
            // 0x2e253c: 0x8cc20078  lw          $v0, 0x78($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2550u;
            goto label_2e2550;
        }
    }
    ctx->pc = 0x2E2540u;
label_2e2540:
    // 0x2e2540: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e2544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2548: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e254c: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x2e254cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x78u));
label_2e2550:
    // 0x2e2550: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2550u;
    {
        const bool branch_taken_0x2e2550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2550) {
            ctx->pc = 0x2E2554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2550u;
            // 0x2e2554: 0xacc50078  sw          $a1, 0x78($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2558u;
            goto label_2e2558;
        }
    }
    ctx->pc = 0x2E2558u;
label_2e2558:
    // 0x2e2558: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2560u;
}
