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

// Function: sub_002E2320
// Address: 0x2e2320 - 0x2e2398
void sub_002E2320_0x2e2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2320_0x2e2320");
#endif

    switch (ctx->pc) {
        case 0x2e238cu: goto label_2e238c;
        default: break;
    }

    ctx->pc = 0x2e2320u;

    // 0x2e2320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2324: 0x24860074  addiu       $a2, $a0, 0x74
    ctx->pc = 0x2e2324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e2328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e232c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e2330: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2330u;
    {
        const bool branch_taken_0x2e2330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2330u;
        // 0x2e2334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2330) {
            ctx->pc = 0x2E2348u;
            goto label_2e2348;
        }
    }
    ctx->pc = 0x2E2338u;
    // 0x2e2338: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e233c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e2340: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2340u;
    {
        const bool branch_taken_0x2e2340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2340) {
            ctx->pc = 0x2E2354u;
            goto label_2e2354;
        }
    }
    ctx->pc = 0x2E2348u;
label_2e2348:
    // 0x2e2348: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e2348u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2e234c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e234cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2350: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e2350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2e2354:
    // 0x2e2354: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2354u;
    {
        const bool branch_taken_0x2e2354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2354u;
        // 0x2e2358: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2354) {
            ctx->pc = 0x2E2390u;
            goto label_2e2390;
        }
    }
    ctx->pc = 0x2E235Cu;
    // 0x2e235c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2e235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e2360: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2360u;
    {
        const bool branch_taken_0x2e2360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2360) {
            ctx->pc = 0x2E2364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2360u;
            // 0x2e2364: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E237Cu;
            goto label_2e237c;
        }
    }
    ctx->pc = 0x2E2368u;
    // 0x2e2368: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e2368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e236c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e2370: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2370u;
    {
        const bool branch_taken_0x2e2370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2370) {
            ctx->pc = 0x2E2384u;
            goto label_2e2384;
        }
    }
    ctx->pc = 0x2E2378u;
    // 0x2e2378: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e2378u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2e237c:
    // 0x2e237c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2380: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e2380u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2e2384:
    // 0x2e2384: 0xc0b8c50  jal         func_2E3140
    ctx->pc = 0x2E2384u;
    SET_GPR_U32(ctx, 31, 0x2E238Cu);
    ctx->pc = 0x2E3140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3140u, 0x2E2384u, 0x2E238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E238Cu;
label_2e238c:
    // 0x2e238c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2390:
    // 0x2e2390: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2390u;
        // 0x2e2394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2398u;
}
