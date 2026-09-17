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

// Function: sub_00202780
// Address: 0x202780 - 0x202868
void sub_00202780_0x202780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202780_0x202780");
#endif

    switch (ctx->pc) {
        case 0x2027a8u: goto label_2027a8;
        case 0x2027b4u: goto label_2027b4;
        case 0x2027c0u: goto label_2027c0;
        case 0x2027c8u: goto label_2027c8;
        case 0x2027e4u: goto label_2027e4;
        case 0x2027f0u: goto label_2027f0;
        case 0x2027f8u: goto label_2027f8;
        case 0x202810u: goto label_202810;
        case 0x202830u: goto label_202830;
        case 0x20283cu: goto label_20283c;
        default: break;
    }

    ctx->pc = 0x202780u;

    // 0x202780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202788: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x202788u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x20278c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20278cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x202790: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x202790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x202794: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x202794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x202798: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x202798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20279c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2027a0: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x2027A0u;
    SET_GPR_U32(ctx, 31, 0x2027A8u);
    ctx->pc = 0x2027A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027A0u;
    // 0x2027a4: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x2027A0u, 0x2027A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027A8u;
label_2027a8:
    // 0x2027a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2027a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027ac: 0xc09d486  jal         func_275218
    ctx->pc = 0x2027ACu;
    SET_GPR_U32(ctx, 31, 0x2027B4u);
    ctx->pc = 0x2027B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027ACu;
    // 0x2027b0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x2027ACu, 0x2027B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027B4u;
label_2027b4:
    // 0x2027b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2027b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2027b8: 0xc0807da  jal         func_201F68
    ctx->pc = 0x2027B8u;
    SET_GPR_U32(ctx, 31, 0x2027C0u);
    ctx->pc = 0x2027BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027B8u;
    // 0x2027bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F68u, 0x2027B8u, 0x2027C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027C0u;
label_2027c0:
    // 0x2027c0: 0xc0807da  jal         func_201F68
    ctx->pc = 0x2027C0u;
    SET_GPR_U32(ctx, 31, 0x2027C8u);
    ctx->pc = 0x2027C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027C0u;
    // 0x2027c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F68u, 0x2027C0u, 0x2027C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027C8u;
label_2027c8:
    // 0x2027c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2027c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2027cc: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x2027ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x2027d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2027d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2027d4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2027D4u;
    {
        const bool branch_taken_0x2027d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2027d4) {
            ctx->pc = 0x202820u;
            goto label_202820;
        }
    }
    ctx->pc = 0x2027DCu;
    // 0x2027dc: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2027DCu;
    SET_GPR_U32(ctx, 31, 0x2027E4u);
    ctx->pc = 0x2027E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027DCu;
    // 0x2027e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2027DCu, 0x2027E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027E4u;
label_2027e4:
    // 0x2027e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2027e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027e8: 0xc09d480  jal         func_275200
    ctx->pc = 0x2027E8u;
    SET_GPR_U32(ctx, 31, 0x2027F0u);
    ctx->pc = 0x2027ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027E8u;
    // 0x2027ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2027E8u, 0x2027F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027F0u;
label_2027f0:
    // 0x2027f0: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2027F0u;
    {
        const bool branch_taken_0x2027f0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2027F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027F0u;
        // 0x2027f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027f0) {
            ctx->pc = 0x202820u;
            goto label_202820;
        }
    }
    ctx->pc = 0x2027F8u;
label_2027f8:
    // 0x2027f8: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x2027f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x2027fc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2027fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x202800: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x202800u;
    {
        const bool branch_taken_0x202800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202800) {
            ctx->pc = 0x202804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202800u;
            // 0x202804: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202814u;
            goto label_202814;
        }
    }
    ctx->pc = 0x202808u;
    // 0x202808: 0xc0807da  jal         func_201F68
    ctx->pc = 0x202808u;
    SET_GPR_U32(ctx, 31, 0x202810u);
    ctx->pc = 0x20280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202808u;
    // 0x20280c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F68u, 0x202808u, 0x202810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202810u;
label_202810:
    // 0x202810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x202810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_202814:
    // 0x202814: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x202814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x202818: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x202818u;
    {
        const bool branch_taken_0x202818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202818u;
        // 0x20281c: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202818) {
            ctx->pc = 0x2027F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2027f8;
        }
    }
    ctx->pc = 0x202820u;
label_202820:
    // 0x202820: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x202820u;
    {
        const bool branch_taken_0x202820 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x202824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202820u;
        // 0x202824: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202820) {
            ctx->pc = 0x202848u;
            goto label_202848;
        }
    }
    ctx->pc = 0x202828u;
    // 0x202828: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20282c: 0x0  nop
    ctx->pc = 0x20282cu;
    // NOP
label_202830:
    // 0x202830: 0x267308d0  addiu       $s3, $s3, 0x8D0
    ctx->pc = 0x202830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
    // 0x202834: 0xc0807da  jal         func_201F68
    ctx->pc = 0x202834u;
    SET_GPR_U32(ctx, 31, 0x20283Cu);
    ctx->pc = 0x202838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202834u;
    // 0x202838: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F68u, 0x202834u, 0x20283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20283Cu;
label_20283c:
    // 0x20283c: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x20283cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x202840: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202840u;
    {
        const bool branch_taken_0x202840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202840u;
        // 0x202844: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202840) {
            ctx->pc = 0x202830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202830;
        }
    }
    ctx->pc = 0x202848u;
label_202848:
    // 0x202848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20284c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20284cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x202850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202854: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x202854u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202858: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x202858u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20285c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x202860: 0x3e00008  jr          $ra
    ctx->pc = 0x202860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202860u;
        // 0x202864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202868u;
}
