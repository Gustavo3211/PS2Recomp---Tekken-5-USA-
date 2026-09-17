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

// Function: sub_002E1768
// Address: 0x2e1768 - 0x2e17a8
void sub_002E1768_0x2e1768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1768_0x2e1768");
#endif

    ctx->pc = 0x2e1768u;

    // 0x2e1768: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2e1768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2e176c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e1770: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x2e1770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x2e1774: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e1774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1778u;
    {
        const bool branch_taken_0x2e1778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1778u;
        // 0x2e177c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1778) {
            ctx->pc = 0x2E1790u;
            goto label_2e1790;
        }
    }
    ctx->pc = 0x2E1780u;
    // 0x2e1780: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e1780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1784: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e1784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1788: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1788u;
    {
        const bool branch_taken_0x2e1788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1788) {
            ctx->pc = 0x2E179Cu;
            goto label_2e179c;
        }
    }
    ctx->pc = 0x2E1790u;
label_2e1790:
    // 0x2e1790: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e1790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e1794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1798: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e1798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2e179c:
    // 0x2e179c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E179Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E179Cu;
        // 0x2e17a0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E179Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E17A4u;
    // 0x2e17a4: 0x0  nop
    ctx->pc = 0x2e17a4u;
    // NOP
    ctx->pc = 0x2e17a8u;
}
