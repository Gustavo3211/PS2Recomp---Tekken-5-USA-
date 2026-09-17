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

// Function: sub_002E28E8
// Address: 0x2e28e8 - 0x2e2958
void sub_002E28E8_0x2e28e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E28E8_0x2e28e8");
#endif

    ctx->pc = 0x2e28e8u;

    // 0x2e28e8: 0x24840084  addiu       $a0, $a0, 0x84
    ctx->pc = 0x2e28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x2e28ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e28ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e28f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E28F0u;
    {
        const bool branch_taken_0x2e28f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28F0u;
        // 0x2e28f4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28f0) {
            ctx->pc = 0x2E2908u;
            goto label_2e2908;
        }
    }
    ctx->pc = 0x2E28F8u;
    // 0x2e28f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e28f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e28fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2900: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2900u;
    {
        const bool branch_taken_0x2e2900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2900) {
            ctx->pc = 0x2E2914u;
            goto label_2e2914;
        }
    }
    ctx->pc = 0x2E2908u;
label_2e2908:
    // 0x2e2908: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e290c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e290cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2910: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e2914:
    // 0x2e2914: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2914u;
    {
        const bool branch_taken_0x2e2914 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2914) {
            ctx->pc = 0x2E2950u;
            goto label_2e2950;
        }
    }
    ctx->pc = 0x2E291Cu;
    // 0x2e291c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2920u;
    {
        const bool branch_taken_0x2e2920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2920u;
        // 0x2e2924: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2920) {
            ctx->pc = 0x2E2938u;
            goto label_2e2938;
        }
    }
    ctx->pc = 0x2E2928u;
    // 0x2e2928: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e292c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2930: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2930u;
    {
        const bool branch_taken_0x2e2930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2930) {
            ctx->pc = 0x2E2934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2930u;
            // 0x2e2934: 0x8cc20064  lw          $v0, 0x64($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2948u;
            goto label_2e2948;
        }
    }
    ctx->pc = 0x2E2938u;
label_2e2938:
    // 0x2e2938: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e293c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e293cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2940: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2944: 0x8cc20064  lw          $v0, 0x64($a2)
    ctx->pc = 0x2e2944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x64u));
label_2e2948:
    // 0x2e2948: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2948u;
    {
        const bool branch_taken_0x2e2948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2948) {
            ctx->pc = 0x2E294Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2948u;
            // 0x2e294c: 0xacc50064  sw          $a1, 0x64($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2950u;
            goto label_2e2950;
        }
    }
    ctx->pc = 0x2E2950u;
label_2e2950:
    // 0x2e2950: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2958u;
}
