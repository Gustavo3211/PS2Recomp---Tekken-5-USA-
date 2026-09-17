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

// Function: sub_002ED668
// Address: 0x2ed668 - 0x2ed6c0
void sub_002ED668_0x2ed668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED668_0x2ed668");
#endif

    switch (ctx->pc) {
        case 0x2ed688u: goto label_2ed688;
        default: break;
    }

    ctx->pc = 0x2ed668u;

    // 0x2ed668: 0x8f82a850  lw          $v0, -0x57B0($gp)
    ctx->pc = 0x2ed668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x2ed66c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed670: 0x30420860  andi        $v0, $v0, 0x860
    ctx->pc = 0x2ed670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2144);
    // 0x2ed674: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED674u;
    {
        const bool branch_taken_0x2ed674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED674u;
        // 0x2ed678: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed674) {
            ctx->pc = 0x2ED688u;
            goto label_2ed688;
        }
    }
    ctx->pc = 0x2ED67Cu;
    // 0x2ed67c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2ED67Cu;
    {
        const bool branch_taken_0x2ed67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED67Cu;
        // 0x2ed680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed67c) {
            ctx->pc = 0x2ED6B4u;
            goto label_2ed6b4;
        }
    }
    ctx->pc = 0x2ED684u;
    // 0x2ed684: 0x0  nop
    ctx->pc = 0x2ed684u;
    // NOP
label_2ed688:
    // 0x2ed688: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ed688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ed68c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2ed68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ed690: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED690u;
    {
        const bool branch_taken_0x2ed690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED690u;
        // 0x2ed694: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed690) {
            ctx->pc = 0x2ED6B4u;
            goto label_2ed6b4;
        }
    }
    ctx->pc = 0x2ED698u;
    // 0x2ed698: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x2ed698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x2ed69c: 0x8c42a850  lw          $v0, -0x57B0($v0)
    ctx->pc = 0x2ed69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944848)));
    // 0x2ed6a0: 0x30420860  andi        $v0, $v0, 0x860
    ctx->pc = 0x2ed6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2144);
    // 0x2ed6a4: 0x0  nop
    ctx->pc = 0x2ed6a4u;
    // NOP
    // 0x2ed6a8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2ED6A8u;
    {
        const bool branch_taken_0x2ed6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6A8u;
        // 0x2ed6ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6a8) {
            ctx->pc = 0x2ED688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed688;
        }
    }
    ctx->pc = 0x2ED6B0u;
    // 0x2ed6b0: 0x822804  sllv        $a1, $v0, $a0
    ctx->pc = 0x2ed6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_2ed6b4:
    // 0x2ed6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6B4u;
        // 0x2ed6b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED6BCu;
    // 0x2ed6bc: 0x0  nop
    ctx->pc = 0x2ed6bcu;
    // NOP
    ctx->pc = 0x2ed6c0u;
}
