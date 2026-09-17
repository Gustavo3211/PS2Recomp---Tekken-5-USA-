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

// Function: sub_002E2640
// Address: 0x2e2640 - 0x2e26b8
void sub_002E2640_0x2e2640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2640_0x2e2640");
#endif

    switch (ctx->pc) {
        case 0x2e26acu: goto label_2e26ac;
        default: break;
    }

    ctx->pc = 0x2e2640u;

    // 0x2e2640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2644: 0x24860074  addiu       $a2, $a0, 0x74
    ctx->pc = 0x2e2644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e2648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e264c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e2650: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2650u;
    {
        const bool branch_taken_0x2e2650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2650u;
        // 0x2e2654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2650) {
            ctx->pc = 0x2E2668u;
            goto label_2e2668;
        }
    }
    ctx->pc = 0x2E2658u;
    // 0x2e2658: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e265c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e2660: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2660u;
    {
        const bool branch_taken_0x2e2660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2660) {
            ctx->pc = 0x2E2674u;
            goto label_2e2674;
        }
    }
    ctx->pc = 0x2E2668u;
label_2e2668:
    // 0x2e2668: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e2668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2e266c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2670: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e2670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2e2674:
    // 0x2e2674: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2674u;
    {
        const bool branch_taken_0x2e2674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2674u;
        // 0x2e2678: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2674) {
            ctx->pc = 0x2E26B0u;
            goto label_2e26b0;
        }
    }
    ctx->pc = 0x2E267Cu;
    // 0x2e267c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2e267cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e2680: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2680u;
    {
        const bool branch_taken_0x2e2680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2680) {
            ctx->pc = 0x2E2684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2680u;
            // 0x2e2684: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E269Cu;
            goto label_2e269c;
        }
    }
    ctx->pc = 0x2E2688u;
    // 0x2e2688: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e2688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e268c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e2690: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2690u;
    {
        const bool branch_taken_0x2e2690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2690) {
            ctx->pc = 0x2E26A4u;
            goto label_2e26a4;
        }
    }
    ctx->pc = 0x2E2698u;
    // 0x2e2698: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e2698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2e269c:
    // 0x2e269c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e269cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e26a0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e26a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2e26a4:
    // 0x2e26a4: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x2E26A4u;
    SET_GPR_U32(ctx, 31, 0x2E26ACu);
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x2E26A4u, 0x2E26ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E26ACu;
label_2e26ac:
    // 0x2e26ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e26acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e26b0:
    // 0x2e26b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E26B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26B0u;
        // 0x2e26b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E26B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E26B8u;
}
