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

// Function: sub_00339B98
// Address: 0x339b98 - 0x339be0
void sub_00339B98_0x339b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339B98_0x339b98");
#endif

    switch (ctx->pc) {
        case 0x339ba8u: goto label_339ba8;
        default: break;
    }

    ctx->pc = 0x339b98u;

    // 0x339b98: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x339b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x339b9c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x339B9Cu;
    {
        const bool branch_taken_0x339b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B9Cu;
        // 0x339ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b9c) {
            ctx->pc = 0x339BD4u;
            goto label_339bd4;
        }
    }
    ctx->pc = 0x339BA4u;
    // 0x339ba4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x339ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_339ba8:
    // 0x339ba8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x339ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x339bac: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x339BACu;
    {
        const bool branch_taken_0x339bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x339bac) {
            ctx->pc = 0x339BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339BACu;
            // 0x339bb0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339BC4u;
            goto label_339bc4;
        }
    }
    ctx->pc = 0x339BB4u;
    // 0x339bb4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x339bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x339bb8: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x339BB8u;
    {
        const bool branch_taken_0x339bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x339BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BB8u;
        // 0x339bbc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339bb8) {
            ctx->pc = 0x339BD8u;
            goto label_339bd8;
        }
    }
    ctx->pc = 0x339BC0u;
    // 0x339bc0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x339bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_339bc4:
    // 0x339bc4: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x339bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x339bc8: 0x0  nop
    ctx->pc = 0x339bc8u;
    // NOP
    // 0x339bcc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x339BCCu;
    {
        const bool branch_taken_0x339bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BCCu;
        // 0x339bd0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339bcc) {
            ctx->pc = 0x339BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339ba8;
        }
    }
    ctx->pc = 0x339BD4u;
label_339bd4:
    // 0x339bd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x339bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339bd8:
    // 0x339bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x339BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339BE0u;
}
