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

// Function: sub_002E2398
// Address: 0x2e2398 - 0x2e2408
void sub_002E2398_0x2e2398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2398_0x2e2398");
#endif

    ctx->pc = 0x2e2398u;

    // 0x2e2398: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x2e2398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e239c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e23a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E23A0u;
    {
        const bool branch_taken_0x2e23a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23A0u;
        // 0x2e23a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23a0) {
            ctx->pc = 0x2E23B8u;
            goto label_2e23b8;
        }
    }
    ctx->pc = 0x2E23A8u;
    // 0x2e23a8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e23ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e23acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e23b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E23B0u;
    {
        const bool branch_taken_0x2e23b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e23b0) {
            ctx->pc = 0x2E23C4u;
            goto label_2e23c4;
        }
    }
    ctx->pc = 0x2E23B8u;
label_2e23b8:
    // 0x2e23b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e23b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e23bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e23bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e23c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e23c4:
    // 0x2e23c4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E23C4u;
    {
        const bool branch_taken_0x2e23c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e23c4) {
            ctx->pc = 0x2E2400u;
            goto label_2e2400;
        }
    }
    ctx->pc = 0x2E23CCu;
    // 0x2e23cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e23d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E23D0u;
    {
        const bool branch_taken_0x2e23d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23D0u;
        // 0x2e23d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23d0) {
            ctx->pc = 0x2E23E8u;
            goto label_2e23e8;
        }
    }
    ctx->pc = 0x2E23D8u;
    // 0x2e23d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e23dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e23e0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E23E0u;
    {
        const bool branch_taken_0x2e23e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e23e0) {
            ctx->pc = 0x2E23E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E23E0u;
            // 0x2e23e4: 0x8cc2005c  lw          $v0, 0x5C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E23F8u;
            goto label_2e23f8;
        }
    }
    ctx->pc = 0x2E23E8u;
label_2e23e8:
    // 0x2e23e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e23e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e23ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e23ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e23f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e23f4: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x2e23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5Cu));
label_2e23f8:
    // 0x2e23f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E23F8u;
    {
        const bool branch_taken_0x2e23f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e23f8) {
            ctx->pc = 0x2E23FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E23F8u;
            // 0x2e23fc: 0xacc5005c  sw          $a1, 0x5C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2400u;
            goto label_2e2400;
        }
    }
    ctx->pc = 0x2E2400u;
label_2e2400:
    // 0x2e2400: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2408u;
}
