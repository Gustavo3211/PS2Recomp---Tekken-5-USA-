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

// Function: sub_00260558
// Address: 0x260558 - 0x2605b8
void sub_00260558_0x260558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260558_0x260558");
#endif

    ctx->pc = 0x260558u;

    // 0x260558: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x260558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26055c: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26055Cu;
    {
        const bool branch_taken_0x26055c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x260560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26055Cu;
        // 0x260560: 0x28a30003  slti        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26055c) {
            ctx->pc = 0x260598u;
            goto label_260598;
        }
    }
    ctx->pc = 0x260564u;
    // 0x260564: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x260564u;
    {
        const bool branch_taken_0x260564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260564) {
            ctx->pc = 0x260568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260564u;
            // 0x260568: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260578u;
            goto label_260578;
        }
    }
    ctx->pc = 0x26056Cu;
    // 0x26056c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26056Cu;
    {
        const bool branch_taken_0x26056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26056Cu;
        // 0x260570: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26056c) {
            ctx->pc = 0x260584u;
            goto label_260584;
        }
    }
    ctx->pc = 0x260574u;
    // 0x260574: 0x0  nop
    ctx->pc = 0x260574u;
    // NOP
label_260578:
    // 0x260578: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x260578u;
    {
        const bool branch_taken_0x260578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x26057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260578u;
        // 0x26057c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260578) {
            ctx->pc = 0x2605B0u;
            goto label_2605b0;
        }
    }
    ctx->pc = 0x260580u;
    // 0x260580: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x260580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_260584:
    // 0x260584: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x260584u;
    {
        const bool branch_taken_0x260584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x260588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260584u;
        // 0x260588: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260584) {
            ctx->pc = 0x2605B0u;
            goto label_2605b0;
        }
    }
    ctx->pc = 0x26058Cu;
    // 0x26058c: 0x3e00008  jr          $ra
    ctx->pc = 0x26058Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26058Cu;
        // 0x260590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26058Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260594u;
    // 0x260594: 0x0  nop
    ctx->pc = 0x260594u;
    // NOP
label_260598:
    // 0x260598: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x260598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26059c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x26059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2605a0: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x2605a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2605a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2605A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2605A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605A4u;
        // 0x2605a8: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2605A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2605ACu;
    // 0x2605ac: 0x0  nop
    ctx->pc = 0x2605acu;
    // NOP
label_2605b0:
    // 0x2605b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2605B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2605B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2605B8u;
}
