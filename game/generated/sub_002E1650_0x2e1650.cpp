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

// Function: sub_002E1650
// Address: 0x2e1650 - 0x2e1768
void sub_002E1650_0x2e1650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1650_0x2e1650");
#endif

    switch (ctx->pc) {
        case 0x2e1698u: goto label_2e1698;
        case 0x2e16a0u: goto label_2e16a0;
        case 0x2e16b4u: goto label_2e16b4;
        case 0x2e16c4u: goto label_2e16c4;
        case 0x2e16d4u: goto label_2e16d4;
        case 0x2e16ecu: goto label_2e16ec;
        case 0x2e171cu: goto label_2e171c;
        default: break;
    }

    ctx->pc = 0x2e1650u;

    // 0x2e1650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e1650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e1654: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e1654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e1658: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e1658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e165c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e1660: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e1660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1668: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e1668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e166c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e166cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e1670: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e1670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e1674: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e1674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2e1678: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2e1678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2e167c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2e167cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2e1680: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2e1680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2e1684: 0x8e9e008c  lw          $fp, 0x8C($s4)
    ctx->pc = 0x2e1684u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x2e1688: 0x8e970090  lw          $s7, 0x90($s4)
    ctx->pc = 0x2e1688u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x2e168c: 0x8e960088  lw          $s6, 0x88($s4)
    ctx->pc = 0x2e168cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2e1690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e1690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1694: 0x0  nop
    ctx->pc = 0x2e1694u;
    // NOP
label_2e1698:
    // 0x2e1698: 0xc097d16  jal         func_25F458
    ctx->pc = 0x2E1698u;
    SET_GPR_U32(ctx, 31, 0x2E16A0u);
    ctx->pc = 0x2E169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1698u;
    // 0x2e169c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x2E1698u, 0x2E16A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16A0u;
label_2e16a0:
    // 0x2e16a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e16a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16a4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E16A4u;
    {
        const bool branch_taken_0x2e16a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16A4u;
        // 0x2e16a8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16a4) {
            ctx->pc = 0x2E1728u;
            goto label_2e1728;
        }
    }
    ctx->pc = 0x2E16ACu;
    // 0x2e16ac: 0xc097d16  jal         func_25F458
    ctx->pc = 0x2E16ACu;
    SET_GPR_U32(ctx, 31, 0x2E16B4u);
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x2E16ACu, 0x2E16B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16B4u;
label_2e16b4:
    // 0x2e16b4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E16B4u;
    {
        const bool branch_taken_0x2e16b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16B4u;
        // 0x2e16b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16b4) {
            ctx->pc = 0x2E1728u;
            goto label_2e1728;
        }
    }
    ctx->pc = 0x2E16BCu;
    // 0x2e16bc: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2E16BCu;
    SET_GPR_U32(ctx, 31, 0x2E16C4u);
    ctx->pc = 0x2E16C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E16BCu;
    // 0x2e16c0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2E16BCu, 0x2E16C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16C4u;
label_2e16c4:
    // 0x2e16c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e16c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16c8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e16c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16cc: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2E16CCu;
    SET_GPR_U32(ctx, 31, 0x2E16D4u);
    ctx->pc = 0x2E16D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E16CCu;
    // 0x2e16d0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2E16CCu, 0x2E16D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16D4u;
label_2e16d4:
    // 0x2e16d4: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E16D4u;
    {
        const bool branch_taken_0x2e16d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16D4u;
        // 0x2e16d8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16d4) {
            ctx->pc = 0x2E1728u;
            goto label_2e1728;
        }
    }
    ctx->pc = 0x2E16DCu;
    // 0x2e16dc: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E16DCu;
    {
        const bool branch_taken_0x2e16dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16DCu;
        // 0x2e16e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16dc) {
            ctx->pc = 0x2E1728u;
            goto label_2e1728;
        }
    }
    ctx->pc = 0x2E16E4u;
    // 0x2e16e4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E16E4u;
    SET_GPR_U32(ctx, 31, 0x2E16ECu);
    ctx->pc = 0x2E16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E16E4u;
    // 0x2e16e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E16E4u, 0x2E16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16ECu;
label_2e16ec:
    // 0x2e16ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e16ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16f0: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x2e16f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2e16f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e16f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16f8: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2e16f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2e16fc: 0x8e860054  lw          $a2, 0x54($s4)
    ctx->pc = 0x2e16fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2e1700: 0x26100058  addiu       $s0, $s0, 0x58
    ctx->pc = 0x2e1700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2e1704: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2e1704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e170c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2e170cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1710: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2e1710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1714: 0xc0b8670  jal         func_2E19C0
    ctx->pc = 0x2E1714u;
    SET_GPR_U32(ctx, 31, 0x2E171Cu);
    ctx->pc = 0x2E1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1714u;
    // 0x2e1718: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E19C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19C0u, 0x2E1714u, 0x2E171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E171Cu;
label_2e171c:
    // 0x2e171c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2e171cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2e1720: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e1720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e1724: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2e1724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2e1728:
    // 0x2e1728: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e1728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e172c: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2e172cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e1730: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2E1730u;
    {
        const bool branch_taken_0x2e1730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1730u;
        // 0x2e1734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1730) {
            ctx->pc = 0x2E1698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1698;
        }
    }
    ctx->pc = 0x2E1738u;
    // 0x2e1738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e173c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e173cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e1740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1744: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e1744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e1748: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e1748u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e174c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e174cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1750: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e1750u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1754: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2e1754u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e1758: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2e1758u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e175c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2e175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e1760: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1760u;
        // 0x2e1764: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1768u;
}
