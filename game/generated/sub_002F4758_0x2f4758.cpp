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

// Function: sub_002F4758
// Address: 0x2f4758 - 0x2f4870
void sub_002F4758_0x2f4758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4758_0x2f4758");
#endif

    switch (ctx->pc) {
        case 0x2f476cu: goto label_2f476c;
        case 0x2f47d0u: goto label_2f47d0;
        case 0x2f4834u: goto label_2f4834;
        case 0x2f483cu: goto label_2f483c;
        case 0x2f484cu: goto label_2f484c;
        case 0x2f485cu: goto label_2f485c;
        default: break;
    }

    ctx->pc = 0x2f4758u;

    // 0x2f4758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f475c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f4760: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f4760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f4764: 0xc0bba2a  jal         func_2EE8A8
    ctx->pc = 0x2F4764u;
    SET_GPR_U32(ctx, 31, 0x2F476Cu);
    ctx->pc = 0x2F4768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4764u;
    // 0x2f4768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE8A8u, 0x2F4764u, 0x2F476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F476Cu;
label_2f476c:
    // 0x2f476c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x2f476cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2f4770: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4774: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4774u;
    {
        const bool branch_taken_0x2f4774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4774u;
        // 0x2f4778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4774) {
            ctx->pc = 0x2F478Cu;
            goto label_2f478c;
        }
    }
    ctx->pc = 0x2F477Cu;
    // 0x2f477c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f4780: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f4784: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4784u;
    {
        const bool branch_taken_0x2f4784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4784) {
            ctx->pc = 0x2F4798u;
            goto label_2f4798;
        }
    }
    ctx->pc = 0x2F478Cu;
label_2f478c:
    // 0x2f478c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f478cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f4790: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4794: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f4794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4798:
    // 0x2f4798: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2F4798u;
    {
        const bool branch_taken_0x2f4798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4798) {
            ctx->pc = 0x2F479Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4798u;
            // 0x2f479c: 0x26050118  addiu       $a1, $s0, 0x118 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F47A0u;
    // 0x2f47a0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f47a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f47a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F47A4u;
    {
        const bool branch_taken_0x2f47a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f47a4) {
            ctx->pc = 0x2F47A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F47A4u;
            // 0x2f47a8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F47C0u;
            goto label_2f47c0;
        }
    }
    ctx->pc = 0x2F47ACu;
    // 0x2f47ac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f47acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f47b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f47b4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F47B4u;
    {
        const bool branch_taken_0x2f47b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f47b4) {
            ctx->pc = 0x2F47C8u;
            goto label_2f47c8;
        }
    }
    ctx->pc = 0x2F47BCu;
    // 0x2f47bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f47bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f47c0:
    // 0x2f47c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f47c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f47c4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f47c8:
    // 0x2f47c8: 0xc0bd0ba  jal         func_2F42E8
    ctx->pc = 0x2F47C8u;
    SET_GPR_U32(ctx, 31, 0x2F47D0u);
    ctx->pc = 0x2F42E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F42E8u, 0x2F47C8u, 0x2F47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47D0u;
label_2f47d0:
    // 0x2f47d0: 0x26050118  addiu       $a1, $s0, 0x118
    ctx->pc = 0x2f47d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
label_2f47d4:
    // 0x2f47d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f47d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F47D8u;
    {
        const bool branch_taken_0x2f47d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47D8u;
        // 0x2f47dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47d8) {
            ctx->pc = 0x2F47F0u;
            goto label_2f47f0;
        }
    }
    ctx->pc = 0x2F47E0u;
    // 0x2f47e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f47e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f47e8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F47E8u;
    {
        const bool branch_taken_0x2f47e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f47e8) {
            ctx->pc = 0x2F47FCu;
            goto label_2f47fc;
        }
    }
    ctx->pc = 0x2F47F0u;
label_2f47f0:
    // 0x2f47f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f47f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f47f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f47f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f47f8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f47f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f47fc:
    // 0x2f47fc: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2F47FCu;
    {
        const bool branch_taken_0x2f47fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f47fc) {
            ctx->pc = 0x2F4800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F47FCu;
            // 0x2f4800: 0x261000fc  addiu       $s0, $s0, 0xFC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4834u;
            goto label_2f4834;
        }
    }
    ctx->pc = 0x2F4804u;
    // 0x2f4804: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f4804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4808: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4808u;
    {
        const bool branch_taken_0x2f4808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4808) {
            ctx->pc = 0x2F480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4808u;
            // 0x2f480c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4824u;
            goto label_2f4824;
        }
    }
    ctx->pc = 0x2F4810u;
    // 0x2f4810: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f4810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f4814: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f4818: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4818u;
    {
        const bool branch_taken_0x2f4818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4818) {
            ctx->pc = 0x2F482Cu;
            goto label_2f482c;
        }
    }
    ctx->pc = 0x2F4820u;
    // 0x2f4820: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f4820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f4824:
    // 0x2f4824: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4828: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f482c:
    // 0x2f482c: 0xc0bd0ba  jal         func_2F42E8
    ctx->pc = 0x2F482Cu;
    SET_GPR_U32(ctx, 31, 0x2F4834u);
    ctx->pc = 0x2F4830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F482Cu;
    // 0x2f4830: 0x261000fc  addiu       $s0, $s0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F42E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F42E8u, 0x2F482Cu, 0x2F4834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4834u;
label_2f4834:
    // 0x2f4834: 0xc0bb914  jal         func_2EE450
    ctx->pc = 0x2F4834u;
    SET_GPR_U32(ctx, 31, 0x2F483Cu);
    ctx->pc = 0x2F4838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4834u;
    // 0x2f4838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE450u, 0x2F4834u, 0x2F483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F483Cu;
label_2f483c:
    // 0x2f483c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F483Cu;
    {
        const bool branch_taken_0x2f483c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f483c) {
            ctx->pc = 0x2F4854u;
            goto label_2f4854;
        }
    }
    ctx->pc = 0x2F4844u;
    // 0x2f4844: 0xc0bb8e4  jal         func_2EE390
    ctx->pc = 0x2F4844u;
    SET_GPR_U32(ctx, 31, 0x2F484Cu);
    ctx->pc = 0x2F4848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4844u;
    // 0x2f4848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE390u, 0x2F4844u, 0x2F484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F484Cu;
label_2f484c:
    // 0x2f484c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F484Cu;
    {
        const bool branch_taken_0x2f484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f484c) {
            ctx->pc = 0x2F4850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F484Cu;
            // 0x2f4850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4860u;
            goto label_2f4860;
        }
    }
    ctx->pc = 0x2F4854u;
label_2f4854:
    // 0x2f4854: 0xc092940  jal         func_24A500
    ctx->pc = 0x2F4854u;
    SET_GPR_U32(ctx, 31, 0x2F485Cu);
    ctx->pc = 0x2F4858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4854u;
    // 0x2f4858: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F4854u, 0x2F485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F485Cu;
label_2f485c:
    // 0x2f485c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f485cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f4860:
    // 0x2f4860: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f4860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f4864: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4864u;
        // 0x2f4868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F486Cu;
    // 0x2f486c: 0x0  nop
    ctx->pc = 0x2f486cu;
    // NOP
    ctx->pc = 0x2f4870u;
}
