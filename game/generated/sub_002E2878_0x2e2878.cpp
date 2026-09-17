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

// Function: sub_002E2878
// Address: 0x2e2878 - 0x2e28e8
void sub_002E2878_0x2e2878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2878_0x2e2878");
#endif

    ctx->pc = 0x2e2878u;

    // 0x2e2878: 0x24840084  addiu       $a0, $a0, 0x84
    ctx->pc = 0x2e2878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x2e287c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2880: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2880u;
    {
        const bool branch_taken_0x2e2880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2880u;
        // 0x2e2884: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2880) {
            ctx->pc = 0x2E2898u;
            goto label_2e2898;
        }
    }
    ctx->pc = 0x2E2888u;
    // 0x2e2888: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e288c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2890: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2890u;
    {
        const bool branch_taken_0x2e2890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2890) {
            ctx->pc = 0x2E28A4u;
            goto label_2e28a4;
        }
    }
    ctx->pc = 0x2E2898u;
label_2e2898:
    // 0x2e2898: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e289c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e289cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e28a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e28a4:
    // 0x2e28a4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E28A4u;
    {
        const bool branch_taken_0x2e28a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e28a4) {
            ctx->pc = 0x2E28E0u;
            goto label_2e28e0;
        }
    }
    ctx->pc = 0x2E28ACu;
    // 0x2e28ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e28acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e28b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E28B0u;
    {
        const bool branch_taken_0x2e28b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28B0u;
        // 0x2e28b4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28b0) {
            ctx->pc = 0x2E28C8u;
            goto label_2e28c8;
        }
    }
    ctx->pc = 0x2E28B8u;
    // 0x2e28b8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e28bc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e28c0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E28C0u;
    {
        const bool branch_taken_0x2e28c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e28c0) {
            ctx->pc = 0x2E28C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E28C0u;
            // 0x2e28c4: 0x8cc20060  lw          $v0, 0x60($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E28D8u;
            goto label_2e28d8;
        }
    }
    ctx->pc = 0x2E28C8u;
label_2e28c8:
    // 0x2e28c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e28cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e28ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e28d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e28d4: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x2e28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60u));
label_2e28d8:
    // 0x2e28d8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E28D8u;
    {
        const bool branch_taken_0x2e28d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e28d8) {
            ctx->pc = 0x2E28DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E28D8u;
            // 0x2e28dc: 0xacc50060  sw          $a1, 0x60($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E28E0u;
            goto label_2e28e0;
        }
    }
    ctx->pc = 0x2E28E0u;
label_2e28e0:
    // 0x2e28e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E28E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E28E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E28E8u;
}
