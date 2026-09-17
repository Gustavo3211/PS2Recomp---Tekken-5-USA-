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

// Function: sub_0027A828
// Address: 0x27a828 - 0x27a8d0
void sub_0027A828_0x27a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A828_0x27a828");
#endif

    ctx->pc = 0x27a828u;

    // 0x27a828: 0x8ca30310  lw          $v1, 0x310($a1)
    ctx->pc = 0x27a828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 784)));
    // 0x27a82c: 0x9465002a  lhu         $a1, 0x2A($v1)
    ctx->pc = 0x27a82cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x27a830: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A830u;
    {
        const bool branch_taken_0x27a830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a830) {
            ctx->pc = 0x27A834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A830u;
            // 0x27a834: 0x8c820310  lw          $v0, 0x310($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A848u;
            goto label_27a848;
        }
    }
    ctx->pc = 0x27A838u;
    // 0x27a838: 0x8c830310  lw          $v1, 0x310($a0)
    ctx->pc = 0x27a838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x27a83c: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x27a83cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x27a840: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27A840u;
    {
        const bool branch_taken_0x27a840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A840u;
        // 0x27a844: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a840) {
            ctx->pc = 0x27A890u;
            goto label_27a890;
        }
    }
    ctx->pc = 0x27A848u;
label_27a848:
    // 0x27a848: 0x94650024  lhu         $a1, 0x24($v1)
    ctx->pc = 0x27a848u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x27a84c: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x27a84cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x27a850: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x27a850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27a854: 0x58400003  blezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A854u;
    {
        const bool branch_taken_0x27a854 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27a854) {
            ctx->pc = 0x27A858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A854u;
            // 0x27a858: 0xa48502b8  sh          $a1, 0x2B8($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 696), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A864u;
            goto label_27a864;
        }
    }
    ctx->pc = 0x27A85Cu;
    // 0x27a85c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a860: 0xa48202b8  sh          $v0, 0x2B8($a0)
    ctx->pc = 0x27a860u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 696), (uint16_t)GPR_U32(ctx, 2));
label_27a864:
    // 0x27a864: 0x848202b8  lh          $v0, 0x2B8($a0)
    ctx->pc = 0x27a864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 696)));
    // 0x27a868: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A868u;
    {
        const bool branch_taken_0x27a868 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A868u;
        // 0x27a86c: 0x948302b8  lhu         $v1, 0x2B8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a868) {
            ctx->pc = 0x27A878u;
            goto label_27a878;
        }
    }
    ctx->pc = 0x27A870u;
    // 0x27a870: 0xa48002b8  sh          $zero, 0x2B8($a0)
    ctx->pc = 0x27a870u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 696), (uint16_t)GPR_U32(ctx, 0));
    // 0x27a874: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27a874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a878:
    // 0x27a878: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x27a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27a87c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27a87cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27a880: 0x2842012d  slti        $v0, $v0, 0x12D
    ctx->pc = 0x27a880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x27a884: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A884u;
    {
        const bool branch_taken_0x27a884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a884) {
            ctx->pc = 0x27A888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A884u;
            // 0x27a888: 0x848202b6  lh          $v0, 0x2B6($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 694)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A898u;
            goto label_27a898;
        }
    }
    ctx->pc = 0x27A88Cu;
    // 0x27a88c: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x27a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_27a890:
    // 0x27a890: 0xa48202b8  sh          $v0, 0x2B8($a0)
    ctx->pc = 0x27a890u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 696), (uint16_t)GPR_U32(ctx, 2));
    // 0x27a894: 0x848202b6  lh          $v0, 0x2B6($a0)
    ctx->pc = 0x27a894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 694)));
label_27a898:
    // 0x27a898: 0x28420042  slti        $v0, $v0, 0x42
    ctx->pc = 0x27a898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x27a89c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A89Cu;
    {
        const bool branch_taken_0x27a89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A89Cu;
        // 0x27a8a0: 0x948302b6  lhu         $v1, 0x2B6($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 694)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a89c) {
            ctx->pc = 0x27A8B0u;
            goto label_27a8b0;
        }
    }
    ctx->pc = 0x27A8A4u;
    // 0x27a8a4: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x27a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x27a8a8: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x27a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x27a8ac: 0xa48202b6  sh          $v0, 0x2B6($a0)
    ctx->pc = 0x27a8acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 694), (uint16_t)GPR_U32(ctx, 2));
label_27a8b0:
    // 0x27a8b0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x27a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27a8b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27a8b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27a8b8: 0x28420023  slti        $v0, $v0, 0x23
    ctx->pc = 0x27a8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x27a8bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27A8BCu;
    {
        const bool branch_taken_0x27a8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8BCu;
        // 0x27a8c0: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8bc) {
            ctx->pc = 0x27A8C8u;
            goto label_27a8c8;
        }
    }
    ctx->pc = 0x27A8C4u;
    // 0x27a8c4: 0xa48202b6  sh          $v0, 0x2B6($a0)
    ctx->pc = 0x27a8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 694), (uint16_t)GPR_U32(ctx, 2));
label_27a8c8:
    // 0x27a8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x27A8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A8D0u;
}
