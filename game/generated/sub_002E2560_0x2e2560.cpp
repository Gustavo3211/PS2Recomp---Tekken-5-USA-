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

// Function: sub_002E2560
// Address: 0x2e2560 - 0x2e25d0
void sub_002E2560_0x2e2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2560_0x2e2560");
#endif

    ctx->pc = 0x2e2560u;

    // 0x2e2560: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x2e2560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e2564: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e2564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2568: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2568u;
    {
        const bool branch_taken_0x2e2568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2568u;
        // 0x2e256c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2568) {
            ctx->pc = 0x2E2580u;
            goto label_2e2580;
        }
    }
    ctx->pc = 0x2E2570u;
    // 0x2e2570: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2574: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2578: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2578u;
    {
        const bool branch_taken_0x2e2578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2578) {
            ctx->pc = 0x2E258Cu;
            goto label_2e258c;
        }
    }
    ctx->pc = 0x2E2580u;
label_2e2580:
    // 0x2e2580: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2588: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e258c:
    // 0x2e258c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E258Cu;
    {
        const bool branch_taken_0x2e258c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e258c) {
            ctx->pc = 0x2E25C8u;
            goto label_2e25c8;
        }
    }
    ctx->pc = 0x2E2594u;
    // 0x2e2594: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e2594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2598u;
    {
        const bool branch_taken_0x2e2598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2598u;
        // 0x2e259c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2598) {
            ctx->pc = 0x2E25B0u;
            goto label_2e25b0;
        }
    }
    ctx->pc = 0x2E25A0u;
    // 0x2e25a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e25a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e25a8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E25A8u;
    {
        const bool branch_taken_0x2e25a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e25a8) {
            ctx->pc = 0x2E25ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E25A8u;
            // 0x2e25ac: 0x8cc2007c  lw          $v0, 0x7C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E25C0u;
            goto label_2e25c0;
        }
    }
    ctx->pc = 0x2E25B0u;
label_2e25b0:
    // 0x2e25b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e25b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e25b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e25b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e25b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e25bc: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x2e25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7Cu));
label_2e25c0:
    // 0x2e25c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E25C0u;
    {
        const bool branch_taken_0x2e25c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25c0) {
            ctx->pc = 0x2E25C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E25C0u;
            // 0x2e25c4: 0xacc5007c  sw          $a1, 0x7C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E25C8u;
            goto label_2e25c8;
        }
    }
    ctx->pc = 0x2E25C8u;
label_2e25c8:
    // 0x2e25c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E25C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E25C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E25D0u;
}
