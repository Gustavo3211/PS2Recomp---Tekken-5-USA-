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

// Function: sub_002E2798
// Address: 0x2e2798 - 0x2e2808
void sub_002E2798_0x2e2798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2798_0x2e2798");
#endif

    ctx->pc = 0x2e2798u;

    // 0x2e2798: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x2e2798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x2e279c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e27a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E27A0u;
    {
        const bool branch_taken_0x2e27a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27A0u;
        // 0x2e27a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27a0) {
            ctx->pc = 0x2E27B8u;
            goto label_2e27b8;
        }
    }
    ctx->pc = 0x2E27A8u;
    // 0x2e27a8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e27ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e27acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e27b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E27B0u;
    {
        const bool branch_taken_0x2e27b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e27b0) {
            ctx->pc = 0x2E27C4u;
            goto label_2e27c4;
        }
    }
    ctx->pc = 0x2E27B8u;
label_2e27b8:
    // 0x2e27b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e27b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e27bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e27bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e27c4:
    // 0x2e27c4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E27C4u;
    {
        const bool branch_taken_0x2e27c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e27c4) {
            ctx->pc = 0x2E2800u;
            goto label_2e2800;
        }
    }
    ctx->pc = 0x2E27CCu;
    // 0x2e27cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e27d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E27D0u;
    {
        const bool branch_taken_0x2e27d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27D0u;
        // 0x2e27d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27d0) {
            ctx->pc = 0x2E27E8u;
            goto label_2e27e8;
        }
    }
    ctx->pc = 0x2E27D8u;
    // 0x2e27d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e27d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e27dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e27e0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E27E0u;
    {
        const bool branch_taken_0x2e27e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e27e0) {
            ctx->pc = 0x2E27E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E27E0u;
            // 0x2e27e4: 0x8cc20064  lw          $v0, 0x64($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E27F8u;
            goto label_2e27f8;
        }
    }
    ctx->pc = 0x2E27E8u;
label_2e27e8:
    // 0x2e27e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e27ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e27ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e27f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e27f4: 0x8cc20064  lw          $v0, 0x64($a2)
    ctx->pc = 0x2e27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x64u));
label_2e27f8:
    // 0x2e27f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E27F8u;
    {
        const bool branch_taken_0x2e27f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e27f8) {
            ctx->pc = 0x2E27FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E27F8u;
            // 0x2e27fc: 0xacc50064  sw          $a1, 0x64($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2800u;
            goto label_2e2800;
        }
    }
    ctx->pc = 0x2E2800u;
label_2e2800:
    // 0x2e2800: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2808u;
}
