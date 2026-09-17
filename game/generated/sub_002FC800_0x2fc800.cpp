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

// Function: sub_002FC800
// Address: 0x2fc800 - 0x2fc890
void sub_002FC800_0x2fc800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC800_0x2fc800");
#endif

    switch (ctx->pc) {
        case 0x2fc828u: goto label_2fc828;
        case 0x2fc854u: goto label_2fc854;
        case 0x2fc868u: goto label_2fc868;
        default: break;
    }

    ctx->pc = 0x2fc800u;

    // 0x2fc800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc80c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc814: 0x9605000e  lhu         $a1, 0xE($s0)
    ctx->pc = 0x2fc814u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2fc818: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FC818u;
    {
        const bool branch_taken_0x2fc818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC818u;
        // 0x2fc81c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc818) {
            ctx->pc = 0x2FC878u;
            goto label_2fc878;
        }
    }
    ctx->pc = 0x2FC820u;
    // 0x2fc820: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2fc820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fc824: 0x0  nop
    ctx->pc = 0x2fc824u;
    // NOP
label_2fc828:
    // 0x2fc828: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2fc828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2fc82c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2fc82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fc830: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2fc830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fc834: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FC834u;
    {
        const bool branch_taken_0x2fc834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC834u;
        // 0x2fc838: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc834) {
            ctx->pc = 0x2FC86Cu;
            goto label_2fc86c;
        }
    }
    ctx->pc = 0x2FC83Cu;
    // 0x2fc83c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x2fc83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2fc840: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2fc840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2fc844: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC844u;
    {
        const bool branch_taken_0x2fc844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc844) {
            ctx->pc = 0x2FC860u;
            goto label_2fc860;
        }
    }
    ctx->pc = 0x2FC84Cu;
    // 0x2fc84c: 0xc0beb2e  jal         func_2FACB8
    ctx->pc = 0x2FC84Cu;
    SET_GPR_U32(ctx, 31, 0x2FC854u);
    ctx->pc = 0x2FACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FACB8u, 0x2FC84Cu, 0x2FC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC854u;
label_2fc854:
    // 0x2fc854: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC854u;
    {
        const bool branch_taken_0x2fc854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC854u;
        // 0x2fc858: 0x9605000e  lhu         $a1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc854) {
            ctx->pc = 0x2FC86Cu;
            goto label_2fc86c;
        }
    }
    ctx->pc = 0x2FC85Cu;
    // 0x2fc85c: 0x0  nop
    ctx->pc = 0x2fc85cu;
    // NOP
label_2fc860:
    // 0x2fc860: 0xc0beb26  jal         func_2FAC98
    ctx->pc = 0x2FC860u;
    SET_GPR_U32(ctx, 31, 0x2FC868u);
    ctx->pc = 0x2FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC98u, 0x2FC860u, 0x2FC868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC868u;
label_2fc868:
    // 0x2fc868: 0x9605000e  lhu         $a1, 0xE($s0)
    ctx->pc = 0x2fc868u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_2fc86c:
    // 0x2fc86c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x2fc86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2fc870: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2FC870u;
    {
        const bool branch_taken_0x2fc870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc870) {
            ctx->pc = 0x2FC874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC870u;
            // 0x2fc874: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc828;
        }
    }
    ctx->pc = 0x2FC878u;
label_2fc878:
    // 0x2fc878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc87c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc884: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC884u;
        // 0x2fc888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC88Cu;
    // 0x2fc88c: 0x0  nop
    ctx->pc = 0x2fc88cu;
    // NOP
    ctx->pc = 0x2fc890u;
}
