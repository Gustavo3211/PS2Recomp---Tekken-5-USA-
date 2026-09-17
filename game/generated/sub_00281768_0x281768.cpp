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

// Function: sub_00281768
// Address: 0x281768 - 0x2818b8
void sub_00281768_0x281768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281768_0x281768");
#endif

    switch (ctx->pc) {
        case 0x2817b0u: goto label_2817b0;
        case 0x281838u: goto label_281838;
        default: break;
    }

    ctx->pc = 0x281768u;

    // 0x281768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28176c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x281774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x281778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28177c: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x28177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x281780: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x281780u;
    {
        const bool branch_taken_0x281780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281780u;
        // 0x281784: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281780) {
            ctx->pc = 0x281878u;
            goto label_281878;
        }
    }
    ctx->pc = 0x281788u;
    // 0x281788: 0x92030190  lbu         $v1, 0x190($s0)
    ctx->pc = 0x281788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x28178c: 0x5062003b  beql        $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x28178Cu;
    {
        const bool branch_taken_0x28178c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28178c) {
            ctx->pc = 0x281790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28178Cu;
            // 0x281790: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28187Cu;
            goto label_28187c;
        }
    }
    ctx->pc = 0x281794u;
    // 0x281794: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x281794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x281798: 0x860302fe  lh          $v1, 0x2FE($s0)
    ctx->pc = 0x281798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x28179c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28179cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2817a0: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2817A0u;
    {
        const bool branch_taken_0x2817a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2817a0) {
            ctx->pc = 0x2817A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2817A0u;
            // 0x2817a4: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28187Cu;
            goto label_28187c;
        }
    }
    ctx->pc = 0x2817A8u;
    // 0x2817a8: 0xc09905e  jal         func_264178
    ctx->pc = 0x2817A8u;
    SET_GPR_U32(ctx, 31, 0x2817B0u);
    ctx->pc = 0x2817ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817A8u;
    // 0x2817ac: 0x96050304  lhu         $a1, 0x304($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2817A8u, 0x2817B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817B0u;
label_2817b0:
    // 0x2817b0: 0x86040096  lh          $a0, 0x96($s0)
    ctx->pc = 0x2817b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2817b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2817b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2817b8: 0x860202fe  lh          $v0, 0x2FE($s0)
    ctx->pc = 0x2817b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x2817bc: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x2817bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2817c0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2817c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2817c4: 0x21b00  sll         $v1, $v0, 12
    ctx->pc = 0x2817c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x2817c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2817c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2817cc: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x2817ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x2817d0: 0xae0207c0  sw          $v0, 0x7C0($s0)
    ctx->pc = 0x2817d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 2));
    // 0x2817d4: 0xae0307c4  sw          $v1, 0x7C4($s0)
    ctx->pc = 0x2817d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1988), GPR_U32(ctx, 3));
    // 0x2817d8: 0x94a20046  lhu         $v0, 0x46($a1)
    ctx->pc = 0x2817d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x2817dc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2817dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2817e0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2817E0u;
    {
        const bool branch_taken_0x2817e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2817e0) {
            ctx->pc = 0x2817E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2817E0u;
            // 0x2817e4: 0x96220044  lhu         $v0, 0x44($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28180Cu;
            goto label_28180c;
        }
    }
    ctx->pc = 0x2817E8u;
    // 0x2817e8: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2817e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2817ec: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2817ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2817f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2817f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2817f4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x2817f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x2817f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2817f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2817fc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2817fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x281800: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x281800u;
    {
        const bool branch_taken_0x281800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281800) {
            ctx->pc = 0x281804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281800u;
            // 0x281804: 0xae0007c0  sw          $zero, 0x7C0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281860u;
            goto label_281860;
        }
    }
    ctx->pc = 0x281808u;
    // 0x281808: 0x96220044  lhu         $v0, 0x44($s1)
    ctx->pc = 0x281808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
label_28180c:
    // 0x28180c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28180Cu;
    {
        const bool branch_taken_0x28180c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28180Cu;
        // 0x281810: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28180c) {
            ctx->pc = 0x281864u;
            goto label_281864;
        }
    }
    ctx->pc = 0x281814u;
    // 0x281814: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x281814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x281818: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x281818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28181c: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x28181cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x281820: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x281820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x281824: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x281824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x281828: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x281828u;
    {
        const bool branch_taken_0x281828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281828) {
            ctx->pc = 0x28182Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281828u;
            // 0x28182c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281868u;
            goto label_281868;
        }
    }
    ctx->pc = 0x281830u;
    // 0x281830: 0xc09fa66  jal         func_27E998
    ctx->pc = 0x281830u;
    SET_GPR_U32(ctx, 31, 0x281838u);
    ctx->pc = 0x281834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281830u;
    // 0x281834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E998u, 0x281830u, 0x281838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281838u;
label_281838:
    // 0x281838: 0x96230044  lhu         $v1, 0x44($s1)
    ctx->pc = 0x281838u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x28183c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28183cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281840: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x281840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x281844: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x281844u;
    {
        const bool branch_taken_0x281844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281844u;
        // 0x281848: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281844) {
            ctx->pc = 0x281868u;
            goto label_281868;
        }
    }
    ctx->pc = 0x28184Cu;
    // 0x28184c: 0x96220046  lhu         $v0, 0x46($s1)
    ctx->pc = 0x28184cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x281850: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x281850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x281854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281854u;
    {
        const bool branch_taken_0x281854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281854u;
        // 0x281858: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281854) {
            ctx->pc = 0x281868u;
            goto label_281868;
        }
    }
    ctx->pc = 0x28185Cu;
    // 0x28185c: 0xae0007c0  sw          $zero, 0x7C0($s0)
    ctx->pc = 0x28185cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 0));
label_281860:
    // 0x281860: 0xae0007c4  sw          $zero, 0x7C4($s0)
    ctx->pc = 0x281860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1988), GPR_U32(ctx, 0));
label_281864:
    // 0x281864: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x281864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_281868:
    // 0x281868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28186c: 0xae0207c8  sw          $v0, 0x7C8($s0)
    ctx->pc = 0x28186cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 2));
    // 0x281870: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x281870u;
    {
        const bool branch_taken_0x281870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281870u;
        // 0x281874: 0xa2030204  sb          $v1, 0x204($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281870) {
            ctx->pc = 0x2818A0u;
            goto label_2818a0;
        }
    }
    ctx->pc = 0x281878u;
label_281878:
    // 0x281878: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x281878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_28187c:
    // 0x28187c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28187Cu;
    {
        const bool branch_taken_0x28187c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28187Cu;
        // 0x281880: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28187c) {
            ctx->pc = 0x2818A0u;
            goto label_2818a0;
        }
    }
    ctx->pc = 0x281884u;
    // 0x281884: 0x92050194  lbu         $a1, 0x194($s0)
    ctx->pc = 0x281884u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x281888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x281888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28188c: 0xae0207c8  sw          $v0, 0x7C8($s0)
    ctx->pc = 0x28188cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 2));
    // 0x281890: 0x51b00  sll         $v1, $a1, 12
    ctx->pc = 0x281890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x281894: 0xa2040204  sb          $a0, 0x204($s0)
    ctx->pc = 0x281894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 4));
    // 0x281898: 0xae0307c4  sw          $v1, 0x7C4($s0)
    ctx->pc = 0x281898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1988), GPR_U32(ctx, 3));
    // 0x28189c: 0xae0507c0  sw          $a1, 0x7C0($s0)
    ctx->pc = 0x28189cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 5));
label_2818a0:
    // 0x2818a0: 0x92020204  lbu         $v0, 0x204($s0)
    ctx->pc = 0x2818a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x2818a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2818a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2818a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2818a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2818ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2818acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2818b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2818B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2818B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818B0u;
        // 0x2818b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2818B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2818B8u;
}
