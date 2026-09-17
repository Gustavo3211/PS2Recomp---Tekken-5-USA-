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

// Function: sub_002E2408
// Address: 0x2e2408 - 0x2e2478
void sub_002E2408_0x2e2408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2408_0x2e2408");
#endif

    ctx->pc = 0x2e2408u;

    // 0x2e2408: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x2e2408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e240c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2410u;
    {
        const bool branch_taken_0x2e2410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2410u;
        // 0x2e2414: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2410) {
            ctx->pc = 0x2E2428u;
            goto label_2e2428;
        }
    }
    ctx->pc = 0x2E2418u;
    // 0x2e2418: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e241c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2420: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2420u;
    {
        const bool branch_taken_0x2e2420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2420) {
            ctx->pc = 0x2E2434u;
            goto label_2e2434;
        }
    }
    ctx->pc = 0x2E2428u;
label_2e2428:
    // 0x2e2428: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e242c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e242cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2430: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e2434:
    // 0x2e2434: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2434u;
    {
        const bool branch_taken_0x2e2434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2434) {
            ctx->pc = 0x2E2470u;
            goto label_2e2470;
        }
    }
    ctx->pc = 0x2E243Cu;
    // 0x2e243c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2440: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2440u;
    {
        const bool branch_taken_0x2e2440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2440u;
        // 0x2e2444: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2440) {
            ctx->pc = 0x2E2458u;
            goto label_2e2458;
        }
    }
    ctx->pc = 0x2E2448u;
    // 0x2e2448: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e244c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2450: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2450u;
    {
        const bool branch_taken_0x2e2450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2450) {
            ctx->pc = 0x2E2454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2450u;
            // 0x2e2454: 0x8cc20060  lw          $v0, 0x60($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2468u;
            goto label_2e2468;
        }
    }
    ctx->pc = 0x2E2458u;
label_2e2458:
    // 0x2e2458: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e245c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e245cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2460: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2464: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x2e2464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60u));
label_2e2468:
    // 0x2e2468: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2468u;
    {
        const bool branch_taken_0x2e2468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2468) {
            ctx->pc = 0x2E246Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2468u;
            // 0x2e246c: 0xacc50060  sw          $a1, 0x60($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2470u;
            goto label_2e2470;
        }
    }
    ctx->pc = 0x2E2470u;
label_2e2470:
    // 0x2e2470: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2478u;
}
