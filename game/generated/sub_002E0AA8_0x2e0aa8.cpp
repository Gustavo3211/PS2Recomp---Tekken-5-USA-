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

// Function: sub_002E0AA8
// Address: 0x2e0aa8 - 0x2e0b18
void sub_002E0AA8_0x2e0aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0AA8_0x2e0aa8");
#endif

    ctx->pc = 0x2e0aa8u;

    // 0x2e0aa8: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x2e0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e0aac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0ab0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0AB0u;
    {
        const bool branch_taken_0x2e0ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AB0u;
        // 0x2e0ab4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ab0) {
            ctx->pc = 0x2E0AC8u;
            goto label_2e0ac8;
        }
    }
    ctx->pc = 0x2E0AB8u;
    // 0x2e0ab8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0abc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0ac0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0AC0u;
    {
        const bool branch_taken_0x2e0ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0ac0) {
            ctx->pc = 0x2E0AD4u;
            goto label_2e0ad4;
        }
    }
    ctx->pc = 0x2E0AC8u;
label_2e0ac8:
    // 0x2e0ac8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0acc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ad0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e0ad4:
    // 0x2e0ad4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0AD4u;
    {
        const bool branch_taken_0x2e0ad4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ad4) {
            ctx->pc = 0x2E0B10u;
            goto label_2e0b10;
        }
    }
    ctx->pc = 0x2E0ADCu;
    // 0x2e0adc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0ae0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0AE0u;
    {
        const bool branch_taken_0x2e0ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AE0u;
        // 0x2e0ae4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ae0) {
            ctx->pc = 0x2E0AF8u;
            goto label_2e0af8;
        }
    }
    ctx->pc = 0x2E0AE8u;
    // 0x2e0ae8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0aec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0af0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0AF0u;
    {
        const bool branch_taken_0x2e0af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0af0) {
            ctx->pc = 0x2E0AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0AF0u;
            // 0x2e0af4: 0x8cc20088  lw          $v0, 0x88($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0B08u;
            goto label_2e0b08;
        }
    }
    ctx->pc = 0x2E0AF8u;
label_2e0af8:
    // 0x2e0af8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0afc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b00: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0b04: 0x8cc20088  lw          $v0, 0x88($a2)
    ctx->pc = 0x2e0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x88u));
label_2e0b08:
    // 0x2e0b08: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0B08u;
    {
        const bool branch_taken_0x2e0b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b08) {
            ctx->pc = 0x2E0B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0B08u;
            // 0x2e0b0c: 0xacc50088  sw          $a1, 0x88($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0B10u;
            goto label_2e0b10;
        }
    }
    ctx->pc = 0x2E0B10u;
label_2e0b10:
    // 0x2e0b10: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B18u;
}
