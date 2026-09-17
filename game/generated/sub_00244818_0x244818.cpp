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

// Function: sub_00244818
// Address: 0x244818 - 0x244880
void sub_00244818_0x244818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244818_0x244818");
#endif

    ctx->pc = 0x244818u;

    // 0x244818: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x244818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24481c: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24481Cu;
    {
        const bool branch_taken_0x24481c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x244820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24481Cu;
        // 0x244820: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24481c) {
            ctx->pc = 0x244858u;
            goto label_244858;
        }
    }
    ctx->pc = 0x244824u;
    // 0x244824: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x244824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x244828: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x244828u;
    {
        const bool branch_taken_0x244828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244828u;
        // 0x24482c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244828) {
            ctx->pc = 0x244848u;
            goto label_244848;
        }
    }
    ctx->pc = 0x244830u;
    // 0x244830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244834: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x244834u;
    {
        const bool branch_taken_0x244834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x244838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244834u;
        // 0x244838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244834) {
            ctx->pc = 0x244858u;
            goto label_244858;
        }
    }
    ctx->pc = 0x24483Cu;
    // 0x24483c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24483Cu;
    {
        const bool branch_taken_0x24483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24483c) {
            ctx->pc = 0x244860u;
            goto label_244860;
        }
    }
    ctx->pc = 0x244844u;
    // 0x244844: 0x0  nop
    ctx->pc = 0x244844u;
    // NOP
label_244848:
    // 0x244848: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244848u;
    {
        const bool branch_taken_0x244848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x244848) {
            ctx->pc = 0x24484Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244848u;
            // 0x24484c: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24485Cu;
            goto label_24485c;
        }
    }
    ctx->pc = 0x244850u;
    // 0x244850: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x244850u;
    {
        const bool branch_taken_0x244850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244850u;
        // 0x244854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244850) {
            ctx->pc = 0x244860u;
            goto label_244860;
        }
    }
    ctx->pc = 0x244858u;
label_244858:
    // 0x244858: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x244858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24485c:
    // 0x24485c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24485cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244860:
    // 0x244860: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x244860u;
    {
        const bool branch_taken_0x244860 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x244864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244860u;
        // 0x244864: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244860) {
            ctx->pc = 0x244874u;
            goto label_244874;
        }
    }
    ctx->pc = 0x244868u;
    // 0x244868: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x244868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x24486c: 0x8c62679c  lw          $v0, 0x679C($v1)
    ctx->pc = 0x24486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26524)));
    // 0x244870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x244870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_244874:
    // 0x244874: 0x3e00008  jr          $ra
    ctx->pc = 0x244874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24487Cu;
    // 0x24487c: 0x0  nop
    ctx->pc = 0x24487cu;
    // NOP
    ctx->pc = 0x244880u;
}
