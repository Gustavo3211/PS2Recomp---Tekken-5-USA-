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

// Function: sub_00224648
// Address: 0x224648 - 0x2246e8
void sub_00224648_0x224648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224648_0x224648");
#endif

    switch (ctx->pc) {
        case 0x224660u: goto label_224660;
        case 0x2246a8u: goto label_2246a8;
        default: break;
    }

    ctx->pc = 0x224648u;

    // 0x224648: 0x8c8207f8  lw          $v0, 0x7F8($a0)
    ctx->pc = 0x224648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2040)));
    // 0x22464c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22464cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224650: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x224650u;
    {
        const bool branch_taken_0x224650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x224654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224650u;
        // 0x224654: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224650) {
            ctx->pc = 0x224684u;
            goto label_224684;
        }
    }
    ctx->pc = 0x224658u;
    // 0x224658: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x224658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22465c: 0x0  nop
    ctx->pc = 0x22465cu;
    // NOP
label_224660:
    // 0x224660: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x224660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224668: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x224668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22466c: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22466Cu;
    {
        const bool branch_taken_0x22466c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x224670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22466Cu;
        // 0x224670: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22466c) {
            ctx->pc = 0x224688u;
            goto label_224688;
        }
    }
    ctx->pc = 0x224674u;
    // 0x224674: 0x0  nop
    ctx->pc = 0x224674u;
    // NOP
    // 0x224678: 0x0  nop
    ctx->pc = 0x224678u;
    // NOP
    // 0x22467c: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22467Cu;
    {
        const bool branch_taken_0x22467c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x224680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22467Cu;
        // 0x224680: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22467c) {
            ctx->pc = 0x224660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224660;
        }
    }
    ctx->pc = 0x224684u;
label_224684:
    // 0x224684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x224684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224688:
    // 0x224688: 0x3e00008  jr          $ra
    ctx->pc = 0x224688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224688u;
        // 0x22468c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224690u;
    // 0x224690: 0x8c8207f8  lw          $v0, 0x7F8($a0)
    ctx->pc = 0x224690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2040)));
    // 0x224694: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224698: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x224698u;
    {
        const bool branch_taken_0x224698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x22469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224698u;
        // 0x22469c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224698) {
            ctx->pc = 0x2246D8u;
            goto label_2246d8;
        }
    }
    ctx->pc = 0x2246A0u;
    // 0x2246a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2246a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2246a4: 0x0  nop
    ctx->pc = 0x2246a4u;
    // NOP
label_2246a8:
    // 0x2246a8: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x2246a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2246ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2246acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2246b0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2246b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2246b4: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x2246b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x2246b8: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2246B8u;
    {
        const bool branch_taken_0x2246b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2246b8) {
            ctx->pc = 0x2246D0u;
            goto label_2246d0;
        }
    }
    ctx->pc = 0x2246C0u;
    // 0x2246c0: 0x54e50006  bnel        $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2246C0u;
    {
        const bool branch_taken_0x2246c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x2246c0) {
            ctx->pc = 0x2246C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2246C0u;
            // 0x2246c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2246DCu;
            goto label_2246dc;
        }
    }
    ctx->pc = 0x2246C8u;
    // 0x2246c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2246C8u;
    {
        const bool branch_taken_0x2246c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2246CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246C8u;
        // 0x2246cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246c8) {
            ctx->pc = 0x2246DCu;
            goto label_2246dc;
        }
    }
    ctx->pc = 0x2246D0u;
label_2246d0:
    // 0x2246d0: 0x1464fff5  bne         $v1, $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2246D0u;
    {
        const bool branch_taken_0x2246d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2246D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246D0u;
        // 0x2246d4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246d0) {
            ctx->pc = 0x2246A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2246a8;
        }
    }
    ctx->pc = 0x2246D8u;
label_2246d8:
    // 0x2246d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2246d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2246dc:
    // 0x2246dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2246DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2246E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246DCu;
        // 0x2246e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2246DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2246E4u;
    // 0x2246e4: 0x0  nop
    ctx->pc = 0x2246e4u;
    // NOP
    ctx->pc = 0x2246e8u;
}
