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

// Function: sub_002E25D0
// Address: 0x2e25d0 - 0x2e2640
void sub_002E25D0_0x2e25d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E25D0_0x2e25d0");
#endif

    ctx->pc = 0x2e25d0u;

    // 0x2e25d0: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x2e25d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e25d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e25d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E25D8u;
    {
        const bool branch_taken_0x2e25d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25D8u;
        // 0x2e25dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25d8) {
            ctx->pc = 0x2E25F0u;
            goto label_2e25f0;
        }
    }
    ctx->pc = 0x2E25E0u;
    // 0x2e25e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e25e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e25e8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E25E8u;
    {
        const bool branch_taken_0x2e25e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e25e8) {
            ctx->pc = 0x2E25FCu;
            goto label_2e25fc;
        }
    }
    ctx->pc = 0x2E25F0u;
label_2e25f0:
    // 0x2e25f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e25f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e25f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e25f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e25f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e25fc:
    // 0x2e25fc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E25FCu;
    {
        const bool branch_taken_0x2e25fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25fc) {
            ctx->pc = 0x2E2638u;
            goto label_2e2638;
        }
    }
    ctx->pc = 0x2E2604u;
    // 0x2e2604: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e2604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2608u;
    {
        const bool branch_taken_0x2e2608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2608u;
        // 0x2e260c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2608) {
            ctx->pc = 0x2E2620u;
            goto label_2e2620;
        }
    }
    ctx->pc = 0x2E2610u;
    // 0x2e2610: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2614: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2618: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2618u;
    {
        const bool branch_taken_0x2e2618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2618) {
            ctx->pc = 0x2E261Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2618u;
            // 0x2e261c: 0x8cc20080  lw          $v0, 0x80($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2630u;
            goto label_2e2630;
        }
    }
    ctx->pc = 0x2E2620u;
label_2e2620:
    // 0x2e2620: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e2624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2628: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e262c: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e262cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80u));
label_2e2630:
    // 0x2e2630: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2630u;
    {
        const bool branch_taken_0x2e2630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2630) {
            ctx->pc = 0x2E2634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2630u;
            // 0x2e2634: 0xacc50080  sw          $a1, 0x80($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2638u;
            goto label_2e2638;
        }
    }
    ctx->pc = 0x2E2638u;
label_2e2638:
    // 0x2e2638: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2640u;
}
