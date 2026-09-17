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

// Function: sub_001F66D8
// Address: 0x1f66d8 - 0x1f6840
void sub_001F66D8_0x1f66d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F66D8_0x1f66d8");
#endif

    switch (ctx->pc) {
        case 0x1f6704u: goto label_1f6704;
        case 0x1f670cu: goto label_1f670c;
        case 0x1f6764u: goto label_1f6764;
        case 0x1f6770u: goto label_1f6770;
        case 0x1f679cu: goto label_1f679c;
        case 0x1f67a4u: goto label_1f67a4;
        case 0x1f67c0u: goto label_1f67c0;
        case 0x1f67d0u: goto label_1f67d0;
        case 0x1f67dcu: goto label_1f67dc;
        case 0x1f67f4u: goto label_1f67f4;
        case 0x1f6800u: goto label_1f6800;
        case 0x1f680cu: goto label_1f680c;
        default: break;
    }

    ctx->pc = 0x1f66d8u;

    // 0x1f66d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f66d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f66dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f66dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f66e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f66e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f66e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f66e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f66e8: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x1f66e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x1f66ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f66ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f66f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f66f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f66f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f66f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f66f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f66f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f66fc: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F66FCu;
    SET_GPR_U32(ctx, 31, 0x1F6704u);
    ctx->pc = 0x1F6700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66FCu;
    // 0x1f6700: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F66FCu, 0x1F6704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6704u;
label_1f6704:
    // 0x1f6704: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F6704u;
    SET_GPR_U32(ctx, 31, 0x1F670Cu);
    ctx->pc = 0x1F6708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6704u;
    // 0x1f6708: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F6704u, 0x1F670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F670Cu;
label_1f670c:
    // 0x1f670c: 0x26a488d0  addiu       $a0, $s5, -0x7730
    ctx->pc = 0x1f670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
    // 0x1f6710: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f6710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6714: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f6714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6718: 0x26858858  addiu       $a1, $s4, -0x77A8
    ctx->pc = 0x1f6718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x1f671c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f671cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f6720: 0xa04001fd  sb          $zero, 0x1FD($v0)
    ctx->pc = 0x1f6720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 509), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6724: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f6724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f6728: 0xa06001fd  sb          $zero, 0x1FD($v1)
    ctx->pc = 0x1f6728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 509), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f672c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6730: 0xa440022a  sh          $zero, 0x22A($v0)
    ctx->pc = 0x1f6730u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6734: 0xa4400228  sh          $zero, 0x228($v0)
    ctx->pc = 0x1f6734u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6738: 0xa440022c  sh          $zero, 0x22C($v0)
    ctx->pc = 0x1f6738u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 556), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f673c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f6740: 0xa460022a  sh          $zero, 0x22A($v1)
    ctx->pc = 0x1f6740u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6744: 0xa4600228  sh          $zero, 0x228($v1)
    ctx->pc = 0x1f6744u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6748: 0xa460022c  sh          $zero, 0x22C($v1)
    ctx->pc = 0x1f6748u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 556), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f674c: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1f674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1f6750: 0x50460010  beql        $v0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F6750u;
    {
        const bool branch_taken_0x1f6750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1f6750) {
            ctx->pc = 0x1F6754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6750u;
            // 0x1f6754: 0x26b088d0  addiu       $s0, $s5, -0x7730 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6794u;
            goto label_1f6794;
        }
    }
    ctx->pc = 0x1F6758u;
    // 0x1f6758: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f6758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f675c: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F675Cu;
    SET_GPR_U32(ctx, 31, 0x1F6764u);
    ctx->pc = 0x1F6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F675Cu;
    // 0x1f6760: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F675Cu, 0x1F6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6764u;
label_1f6764:
    // 0x1f6764: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1F6764u;
    {
        const bool branch_taken_0x1f6764 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F6768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6764u;
        // 0x1f6768: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6764) {
            ctx->pc = 0x1F6790u;
            goto label_1f6790;
        }
    }
    ctx->pc = 0x1F676Cu;
    // 0x1f676c: 0x0  nop
    ctx->pc = 0x1f676cu;
    // NOP
label_1f6770:
    // 0x1f6770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6774: 0xa20001fd  sb          $zero, 0x1FD($s0)
    ctx->pc = 0x1f6774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 509), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6778: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1f6778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f677c: 0xa6000228  sh          $zero, 0x228($s0)
    ctx->pc = 0x1f677cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6780: 0xa600022c  sh          $zero, 0x22C($s0)
    ctx->pc = 0x1f6780u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6784: 0xa600022a  sh          $zero, 0x22A($s0)
    ctx->pc = 0x1f6784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6788: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6788u;
    {
        const bool branch_taken_0x1f6788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6788u;
        // 0x1f678c: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6788) {
            ctx->pc = 0x1F6770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6770;
        }
    }
    ctx->pc = 0x1F6790u;
label_1f6790:
    // 0x1f6790: 0x26b088d0  addiu       $s0, $s5, -0x7730
    ctx->pc = 0x1f6790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
label_1f6794:
    // 0x1f6794: 0xc07d59a  jal         func_1F5668
    ctx->pc = 0x1F6794u;
    SET_GPR_U32(ctx, 31, 0x1F679Cu);
    ctx->pc = 0x1F6798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6794u;
    // 0x1f6798: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5668u, 0x1F6794u, 0x1F679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F679Cu;
label_1f679c:
    // 0x1f679c: 0xc07d59a  jal         func_1F5668
    ctx->pc = 0x1F679Cu;
    SET_GPR_U32(ctx, 31, 0x1F67A4u);
    ctx->pc = 0x1F67A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F679Cu;
    // 0x1f67a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5668u, 0x1F679Cu, 0x1F67A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67A4u;
label_1f67a4:
    // 0x1f67a4: 0x26828858  addiu       $v0, $s4, -0x77A8
    ctx->pc = 0x1f67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x1f67a8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1f67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f67ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f67acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f67b0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F67B0u;
    {
        const bool branch_taken_0x1f67b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67B0u;
        // 0x1f67b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67b0) {
            ctx->pc = 0x1F67E8u;
            goto label_1f67e8;
        }
    }
    ctx->pc = 0x1F67B8u;
    // 0x1f67b8: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F67B8u;
    SET_GPR_U32(ctx, 31, 0x1F67C0u);
    ctx->pc = 0x1F67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67B8u;
    // 0x1f67bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F67B8u, 0x1F67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67C0u;
label_1f67c0:
    // 0x1f67c0: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F67C0u;
    {
        const bool branch_taken_0x1f67c0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67C0u;
        // 0x1f67c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67c0) {
            ctx->pc = 0x1F67E8u;
            goto label_1f67e8;
        }
    }
    ctx->pc = 0x1F67C8u;
    // 0x1f67c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f67c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67cc: 0x0  nop
    ctx->pc = 0x1f67ccu;
    // NOP
label_1f67d0:
    // 0x1f67d0: 0x261008d0  addiu       $s0, $s0, 0x8D0
    ctx->pc = 0x1f67d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
    // 0x1f67d4: 0xc07d59a  jal         func_1F5668
    ctx->pc = 0x1F67D4u;
    SET_GPR_U32(ctx, 31, 0x1F67DCu);
    ctx->pc = 0x1F67D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67D4u;
    // 0x1f67d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5668u, 0x1F67D4u, 0x1F67DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67DCu;
label_1f67dc:
    // 0x1f67dc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1f67dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f67e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F67E0u;
    {
        const bool branch_taken_0x1f67e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67E0u;
        // 0x1f67e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67e0) {
            ctx->pc = 0x1F67D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f67d0;
        }
    }
    ctx->pc = 0x1F67E8u;
label_1f67e8:
    // 0x1f67e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f67e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67ec: 0xc09d486  jal         func_275218
    ctx->pc = 0x1F67ECu;
    SET_GPR_U32(ctx, 31, 0x1F67F4u);
    ctx->pc = 0x1F67F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67ECu;
    // 0x1f67f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1F67ECu, 0x1F67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67F4u;
label_1f67f4:
    // 0x1f67f4: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F67F4u;
    {
        const bool branch_taken_0x1f67f4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1F67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67F4u;
        // 0x1f67f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67f4) {
            ctx->pc = 0x1F6818u;
            goto label_1f6818;
        }
    }
    ctx->pc = 0x1F67FCu;
    // 0x1f67fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f67fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6800:
    // 0x1f6800: 0x261008d0  addiu       $s0, $s0, 0x8D0
    ctx->pc = 0x1f6800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
    // 0x1f6804: 0xc07d59a  jal         func_1F5668
    ctx->pc = 0x1F6804u;
    SET_GPR_U32(ctx, 31, 0x1F680Cu);
    ctx->pc = 0x1F6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6804u;
    // 0x1f6808: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5668u, 0x1F6804u, 0x1F680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F680Cu;
label_1f680c:
    // 0x1f680c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1f680cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1f6810: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F6810u;
    {
        const bool branch_taken_0x1f6810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6810u;
        // 0x1f6814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6810) {
            ctx->pc = 0x1F6800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6800;
        }
    }
    ctx->pc = 0x1F6818u;
label_1f6818:
    // 0x1f6818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f681c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f681cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6820: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6824: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6828: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f6828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f682c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f682cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6830: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f6830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6834: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6834u;
        // 0x1f6838: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F683Cu;
    // 0x1f683c: 0x0  nop
    ctx->pc = 0x1f683cu;
    // NOP
    ctx->pc = 0x1f6840u;
}
