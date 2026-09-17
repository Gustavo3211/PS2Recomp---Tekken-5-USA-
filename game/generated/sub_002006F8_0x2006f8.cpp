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

// Function: sub_002006F8
// Address: 0x2006f8 - 0x200820
void sub_002006F8_0x2006f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002006F8_0x2006f8");
#endif

    switch (ctx->pc) {
        case 0x20071cu: goto label_20071c;
        case 0x200728u: goto label_200728;
        case 0x200764u: goto label_200764;
        case 0x20076cu: goto label_20076c;
        case 0x200774u: goto label_200774;
        case 0x20077cu: goto label_20077c;
        case 0x200798u: goto label_200798;
        case 0x2007a4u: goto label_2007a4;
        case 0x2007b0u: goto label_2007b0;
        case 0x2007c8u: goto label_2007c8;
        case 0x2007e8u: goto label_2007e8;
        case 0x2007f4u: goto label_2007f4;
        default: break;
    }

    ctx->pc = 0x2006f8u;

    // 0x2006f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2006f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2006fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2006fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x200700: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x200700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x200704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200708: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20070c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200710: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x200710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x200714: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x200714u;
    SET_GPR_U32(ctx, 31, 0x20071Cu);
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x200714u, 0x20071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20071Cu;
label_20071c:
    // 0x20071c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200720: 0xc09d486  jal         func_275218
    ctx->pc = 0x200720u;
    SET_GPR_U32(ctx, 31, 0x200728u);
    ctx->pc = 0x200724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200720u;
    // 0x200724: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x200720u, 0x200728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200728u;
label_200728:
    // 0x200728: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x200728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20072c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x200730: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x200734: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x200738: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x200738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x20073c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20073Cu;
    {
        const bool branch_taken_0x20073c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x200740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20073Cu;
        // 0x200740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20073c) {
            ctx->pc = 0x200750u;
            goto label_200750;
        }
    }
    ctx->pc = 0x200744u;
    // 0x200744: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x200744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x200748: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x200748u;
    {
        const bool branch_taken_0x200748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x200748) {
            ctx->pc = 0x200754u;
            goto label_200754;
        }
    }
    ctx->pc = 0x200750u;
label_200750:
    // 0x200750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200754:
    // 0x200754: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x200754u;
    {
        const bool branch_taken_0x200754 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x200758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200754u;
        // 0x200758: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200754) {
            ctx->pc = 0x200780u;
            goto label_200780;
        }
    }
    ctx->pc = 0x20075Cu;
    // 0x20075c: 0xc09fc3a  jal         func_27F0E8
    ctx->pc = 0x20075Cu;
    SET_GPR_U32(ctx, 31, 0x200764u);
    ctx->pc = 0x200760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20075Cu;
    // 0x200760: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0E8u, 0x20075Cu, 0x200764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200764u;
label_200764:
    // 0x200764: 0xc081e10  jal         func_207840
    ctx->pc = 0x200764u;
    SET_GPR_U32(ctx, 31, 0x20076Cu);
    ctx->pc = 0x200768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200764u;
    // 0x200768: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207840u, 0x200764u, 0x20076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20076Cu;
label_20076c:
    // 0x20076c: 0xc07fa00  jal         func_1FE800
    ctx->pc = 0x20076Cu;
    SET_GPR_U32(ctx, 31, 0x200774u);
    ctx->pc = 0x200770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20076Cu;
    // 0x200770: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE800u, 0x20076Cu, 0x200774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200774u;
label_200774:
    // 0x200774: 0xc07fa00  jal         func_1FE800
    ctx->pc = 0x200774u;
    SET_GPR_U32(ctx, 31, 0x20077Cu);
    ctx->pc = 0x200778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200774u;
    // 0x200778: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE800u, 0x200774u, 0x20077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20077Cu;
label_20077c:
    // 0x20077c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_200780:
    // 0x200780: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200784: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x200788: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x200788u;
    {
        const bool branch_taken_0x200788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x200788) {
            ctx->pc = 0x2007D8u;
            goto label_2007d8;
        }
    }
    ctx->pc = 0x200790u;
    // 0x200790: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x200790u;
    SET_GPR_U32(ctx, 31, 0x200798u);
    ctx->pc = 0x200794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200790u;
    // 0x200794: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x200790u, 0x200798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200798u;
label_200798:
    // 0x200798: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20079c: 0xc09d480  jal         func_275200
    ctx->pc = 0x20079Cu;
    SET_GPR_U32(ctx, 31, 0x2007A4u);
    ctx->pc = 0x2007A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20079Cu;
    // 0x2007a0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x20079Cu, 0x2007A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007A4u;
label_2007a4:
    // 0x2007a4: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2007A4u;
    {
        const bool branch_taken_0x2007a4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2007A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A4u;
        // 0x2007a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007a4) {
            ctx->pc = 0x2007D8u;
            goto label_2007d8;
        }
    }
    ctx->pc = 0x2007ACu;
    // 0x2007ac: 0x0  nop
    ctx->pc = 0x2007acu;
    // NOP
label_2007b0:
    // 0x2007b0: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x2007b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x2007b4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2007b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x2007b8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2007B8u;
    {
        const bool branch_taken_0x2007b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2007b8) {
            ctx->pc = 0x2007BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2007B8u;
            // 0x2007bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2007CCu;
            goto label_2007cc;
        }
    }
    ctx->pc = 0x2007C0u;
    // 0x2007c0: 0xc07fa00  jal         func_1FE800
    ctx->pc = 0x2007C0u;
    SET_GPR_U32(ctx, 31, 0x2007C8u);
    ctx->pc = 0x2007C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007C0u;
    // 0x2007c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE800u, 0x2007C0u, 0x2007C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007C8u;
label_2007c8:
    // 0x2007c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2007c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2007cc:
    // 0x2007cc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2007ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2007d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2007D0u;
    {
        const bool branch_taken_0x2007d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D0u;
        // 0x2007d4: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007d0) {
            ctx->pc = 0x2007B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2007b0;
        }
    }
    ctx->pc = 0x2007D8u;
label_2007d8:
    // 0x2007d8: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2007D8u;
    {
        const bool branch_taken_0x2007d8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2007DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D8u;
        // 0x2007dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007d8) {
            ctx->pc = 0x200800u;
            goto label_200800;
        }
    }
    ctx->pc = 0x2007E0u;
    // 0x2007e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2007e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2007e4: 0x0  nop
    ctx->pc = 0x2007e4u;
    // NOP
label_2007e8:
    // 0x2007e8: 0x267308d0  addiu       $s3, $s3, 0x8D0
    ctx->pc = 0x2007e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
    // 0x2007ec: 0xc07fa00  jal         func_1FE800
    ctx->pc = 0x2007ECu;
    SET_GPR_U32(ctx, 31, 0x2007F4u);
    ctx->pc = 0x2007F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007ECu;
    // 0x2007f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE800u, 0x2007ECu, 0x2007F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007F4u;
label_2007f4:
    // 0x2007f4: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x2007f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2007f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2007F8u;
    {
        const bool branch_taken_0x2007f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2007FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007F8u;
        // 0x2007fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007f8) {
            ctx->pc = 0x2007E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2007e8;
        }
    }
    ctx->pc = 0x200800u;
label_200800:
    // 0x200800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20080c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20080cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200810: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x200810u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200814: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x200814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x200818: 0x3e00008  jr          $ra
    ctx->pc = 0x200818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200818u;
        // 0x20081c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200820u;
}
