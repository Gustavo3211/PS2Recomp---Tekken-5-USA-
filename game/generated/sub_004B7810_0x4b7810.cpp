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

// Function: sub_004B7810
// Address: 0x4b7810 - 0x4b78c0
void sub_004B7810_0x4b7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7810_0x4b7810");
#endif

    switch (ctx->pc) {
        case 0x4b7824u: goto label_4b7824;
        case 0x4b782cu: goto label_4b782c;
        case 0x4b7840u: goto label_4b7840;
        case 0x4b7858u: goto label_4b7858;
        case 0x4b786cu: goto label_4b786c;
        case 0x4b7898u: goto label_4b7898;
        case 0x4b78a8u: goto label_4b78a8;
        default: break;
    }

    ctx->pc = 0x4b7810u;

label_4b7810:
    // 0x4b7810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b7810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b7814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7818: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4b7818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4b781c: 0xc12ddcc  jal         func_4B7730
    ctx->pc = 0x4B781Cu;
    SET_GPR_U32(ctx, 31, 0x4B7824u);
    ctx->pc = 0x4B7820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B781Cu;
    // 0x4b7820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7730u, 0x4B781Cu, 0x4B7824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7824u;
label_4b7824:
    // 0x4b7824: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4B7824u;
    SET_GPR_U32(ctx, 31, 0x4B782Cu);
    ctx->pc = 0x4B7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7824u;
    // 0x4b7828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4B7824u, 0x4B782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B782Cu;
label_4b782c:
    // 0x4b782c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7830: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b7830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b7834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7838: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4B7838u;
    ctx->pc = 0x4B783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7838u;
    // 0x4b783c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B7840u;
label_4b7840:
    // 0x4b7840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b7840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b7844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b7848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b784c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b7850: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4B7850u;
    SET_GPR_U32(ctx, 31, 0x4B7858u);
    ctx->pc = 0x4B7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7850u;
    // 0x4b7854: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4B7850u, 0x4B7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7858u;
label_4b7858:
    // 0x4b7858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b7858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b785c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B785Cu;
    {
        const bool branch_taken_0x4b785c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B785Cu;
        // 0x4b7860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b785c) {
            ctx->pc = 0x4B78A8u;
            goto label_4b78a8;
        }
    }
    ctx->pc = 0x4B7864u;
    // 0x4b7864: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4B7864u;
    SET_GPR_U32(ctx, 31, 0x4B786Cu);
    ctx->pc = 0x4B7868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7864u;
    // 0x4b7868: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4B7864u, 0x4B786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B786Cu;
label_4b786c:
    // 0x4b786c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7870: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B7870u;
    {
        const bool branch_taken_0x4b7870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4B7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7870u;
        // 0x4b7874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7870) {
            ctx->pc = 0x4B7890u;
            goto label_4b7890;
        }
    }
    ctx->pc = 0x4B7878u;
    // 0x4b7878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b787c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b787cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b7880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b7880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7884: 0x812ddf2  j           func_4B77C8
    ctx->pc = 0x4B7884u;
    ctx->pc = 0x4B7888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7884u;
    // 0x4b7888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B77C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B77C8u, 0x4B7884u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B788Cu;
    // 0x4b788c: 0x0  nop
    ctx->pc = 0x4b788cu;
    // NOP
label_4b7890:
    // 0x4b7890: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4B7890u;
    SET_GPR_U32(ctx, 31, 0x4B7898u);
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4B7890u, 0x4B7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7898u;
label_4b7898:
    // 0x4b7898: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B7898u;
    {
        const bool branch_taken_0x4b7898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4B789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7898u;
        // 0x4b789c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7898) {
            ctx->pc = 0x4B78A8u;
            goto label_4b78a8;
        }
    }
    ctx->pc = 0x4B78A0u;
    // 0x4b78a0: 0xc12de04  jal         func_4B7810
    ctx->pc = 0x4B78A0u;
    SET_GPR_U32(ctx, 31, 0x4B78A8u);
    ctx->pc = 0x4B7810u;
    goto label_4b7810;
    ctx->pc = 0x4B78A8u;
label_4b78a8:
    // 0x4b78a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b78a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b78ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b78acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b78b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b78b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b78b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B78B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B78B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B78B4u;
        // 0x4b78b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B78B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B78BCu;
    // 0x4b78bc: 0x0  nop
    ctx->pc = 0x4b78bcu;
    // NOP
    ctx->pc = 0x4b78c0u;
}
