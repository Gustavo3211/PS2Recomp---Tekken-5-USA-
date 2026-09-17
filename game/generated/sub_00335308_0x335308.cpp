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

// Function: sub_00335308
// Address: 0x335308 - 0x3353e0
void sub_00335308_0x335308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335308_0x335308");
#endif

    switch (ctx->pc) {
        case 0x335308u: goto label_335308;
        case 0x33530cu: goto label_33530c;
        case 0x335310u: goto label_335310;
        case 0x335314u: goto label_335314;
        case 0x335318u: goto label_335318;
        case 0x33531cu: goto label_33531c;
        case 0x335320u: goto label_335320;
        case 0x335324u: goto label_335324;
        case 0x335328u: goto label_335328;
        case 0x33532cu: goto label_33532c;
        case 0x335330u: goto label_335330;
        case 0x335334u: goto label_335334;
        case 0x335338u: goto label_335338;
        case 0x33533cu: goto label_33533c;
        case 0x335340u: goto label_335340;
        case 0x335344u: goto label_335344;
        case 0x335348u: goto label_335348;
        case 0x33534cu: goto label_33534c;
        case 0x335350u: goto label_335350;
        case 0x335354u: goto label_335354;
        case 0x335358u: goto label_335358;
        case 0x33535cu: goto label_33535c;
        case 0x335360u: goto label_335360;
        case 0x335364u: goto label_335364;
        case 0x335368u: goto label_335368;
        case 0x33536cu: goto label_33536c;
        case 0x335370u: goto label_335370;
        case 0x335374u: goto label_335374;
        case 0x335378u: goto label_335378;
        case 0x33537cu: goto label_33537c;
        case 0x335380u: goto label_335380;
        case 0x335384u: goto label_335384;
        case 0x335388u: goto label_335388;
        case 0x33538cu: goto label_33538c;
        case 0x335390u: goto label_335390;
        case 0x335394u: goto label_335394;
        case 0x335398u: goto label_335398;
        case 0x33539cu: goto label_33539c;
        case 0x3353a0u: goto label_3353a0;
        case 0x3353a4u: goto label_3353a4;
        case 0x3353a8u: goto label_3353a8;
        case 0x3353acu: goto label_3353ac;
        case 0x3353b0u: goto label_3353b0;
        case 0x3353b4u: goto label_3353b4;
        case 0x3353b8u: goto label_3353b8;
        case 0x3353bcu: goto label_3353bc;
        case 0x3353c0u: goto label_3353c0;
        case 0x3353c4u: goto label_3353c4;
        case 0x3353c8u: goto label_3353c8;
        case 0x3353ccu: goto label_3353cc;
        case 0x3353d0u: goto label_3353d0;
        case 0x3353d4u: goto label_3353d4;
        case 0x3353d8u: goto label_3353d8;
        case 0x3353dcu: goto label_3353dc;
        default: break;
    }

    ctx->pc = 0x335308u;

label_335308:
    // 0x335308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33530c:
    // 0x33530c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_335310:
    // 0x335310: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x335310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_335314:
    // 0x335314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_335318:
    // 0x335318: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33531c:
    // 0x33531c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_335320:
    if (ctx->pc == 0x335320u) {
        ctx->pc = 0x335320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33531Cu;
        // 0x335320: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335324u;
        goto label_335324;
    }
    ctx->pc = 0x33531Cu;
    {
        const bool branch_taken_0x33531c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33531Cu;
        // 0x335320: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33531c) {
            ctx->pc = 0x335350u;
            goto label_335350;
        }
    }
    ctx->pc = 0x335324u;
label_335324:
    // 0x335324: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x335324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_335328:
    // 0x335328: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x335328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_33532c:
    // 0x33532c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33532cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_335330:
    // 0x335330: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x335330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_335334:
    // 0x335334: 0x40f809  jalr        $v0
label_335338:
    if (ctx->pc == 0x335338u) {
        ctx->pc = 0x335338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335334u;
        // 0x335338: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33533Cu;
        goto label_33533c;
    }
    ctx->pc = 0x335334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33533Cu);
        ctx->pc = 0x335338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335334u;
        // 0x335338: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335334u, 0x33533Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33533Cu;
label_33533c:
    // 0x33533c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_335340:
    if (ctx->pc == 0x335340u) {
        ctx->pc = 0x335340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33533Cu;
        // 0x335340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335344u;
        goto label_335344;
    }
    ctx->pc = 0x33533Cu;
    {
        const bool branch_taken_0x33533c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33533Cu;
        // 0x335340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33533c) {
            ctx->pc = 0x335354u;
            goto label_335354;
        }
    }
    ctx->pc = 0x335344u;
label_335344:
    // 0x335344: 0x10000004  b           . + 4 + (0x4 << 2)
label_335348:
    if (ctx->pc == 0x335348u) {
        ctx->pc = 0x335348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335344u;
        // 0x335348: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33534Cu;
        goto label_33534c;
    }
    ctx->pc = 0x335344u;
    {
        const bool branch_taken_0x335344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335344u;
        // 0x335348: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335344) {
            ctx->pc = 0x335358u;
            goto label_335358;
        }
    }
    ctx->pc = 0x33534Cu;
label_33534c:
    // 0x33534c: 0x0  nop
    ctx->pc = 0x33534cu;
    // NOP
label_335350:
    // 0x335350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_335354:
    // 0x335354: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x335354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_335358:
    // 0x335358: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x335358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33535c:
    // 0x33535c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_335360:
    if (ctx->pc == 0x335360u) {
        ctx->pc = 0x335360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33535Cu;
        // 0x335360: 0x96030004  lhu         $v1, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335364u;
        goto label_335364;
    }
    ctx->pc = 0x33535Cu;
    {
        const bool branch_taken_0x33535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33535c) {
            ctx->pc = 0x335360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33535Cu;
            // 0x335360: 0x96030004  lhu         $v1, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335380u;
            goto label_335380;
        }
    }
    ctx->pc = 0x335364u;
label_335364:
    // 0x335364: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x335364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_335368:
    // 0x335368: 0x108478  dsll        $s0, $s0, 17
    ctx->pc = 0x335368u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 17);
label_33536c:
    // 0x33536c: 0x3c110003  lui         $s1, 0x3
    ctx->pc = 0x33536cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)3 << 16));
label_335370:
    // 0x335370: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x335370u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
label_335374:
    // 0x335374: 0x10000009  b           . + 4 + (0x9 << 2)
label_335378:
    if (ctx->pc == 0x335378u) {
        ctx->pc = 0x335378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335374u;
        // 0x335378: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33537Cu;
        goto label_33537c;
    }
    ctx->pc = 0x335374u;
    {
        const bool branch_taken_0x335374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335374u;
        // 0x335378: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335374) {
            ctx->pc = 0x33539Cu;
            goto label_33539c;
        }
    }
    ctx->pc = 0x33537Cu;
label_33537c:
    // 0x33537c: 0x0  nop
    ctx->pc = 0x33537cu;
    // NOP
label_335380:
    // 0x335380: 0x3c110005  lui         $s1, 0x5
    ctx->pc = 0x335380u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)5 << 16));
label_335384:
    // 0x335384: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x335384u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
label_335388:
    // 0x335388: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x335388u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_33538c:
    // 0x33538c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x33538cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_335390:
    // 0x335390: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x335390u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_335394:
    // 0x335394: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x335394u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_335398:
    // 0x335398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x335398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33539c:
    // 0x33539c: 0xc0cd57a  jal         func_3355E8
label_3353a0:
    if (ctx->pc == 0x3353A0u) {
        ctx->pc = 0x3353A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33539Cu;
        // 0x3353a0: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3353A4u;
        goto label_3353a4;
    }
    ctx->pc = 0x33539Cu;
    SET_GPR_U32(ctx, 31, 0x3353A4u);
    ctx->pc = 0x3353A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33539Cu;
    // 0x3353a0: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x33539Cu, 0x3353A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353A4u;
label_3353a4:
    // 0x3353a4: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x3353a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_3353a8:
    // 0x3353a8: 0xc0cd57a  jal         func_3355E8
label_3353ac:
    if (ctx->pc == 0x3353ACu) {
        ctx->pc = 0x3353ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353A8u;
        // 0x3353ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3353B0u;
        goto label_3353b0;
    }
    ctx->pc = 0x3353A8u;
    SET_GPR_U32(ctx, 31, 0x3353B0u);
    ctx->pc = 0x3353ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353A8u;
    // 0x3353ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x3353A8u, 0x3353B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353B0u;
label_3353b0:
    // 0x3353b0: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x3353b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_3353b4:
    // 0x3353b4: 0xc0cd57a  jal         func_3355E8
label_3353b8:
    if (ctx->pc == 0x3353B8u) {
        ctx->pc = 0x3353B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353B4u;
        // 0x3353b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3353BCu;
        goto label_3353bc;
    }
    ctx->pc = 0x3353B4u;
    SET_GPR_U32(ctx, 31, 0x3353BCu);
    ctx->pc = 0x3353B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353B4u;
    // 0x3353b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x3353B4u, 0x3353BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353BCu;
label_3353bc:
    // 0x3353bc: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x3353bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_3353c0:
    // 0x3353c0: 0xc0cd57a  jal         func_3355E8
label_3353c4:
    if (ctx->pc == 0x3353C4u) {
        ctx->pc = 0x3353C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353C0u;
        // 0x3353c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3353C8u;
        goto label_3353c8;
    }
    ctx->pc = 0x3353C0u;
    SET_GPR_U32(ctx, 31, 0x3353C8u);
    ctx->pc = 0x3353C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353C0u;
    // 0x3353c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x3353C0u, 0x3353C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353C8u;
label_3353c8:
    // 0x3353c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3353c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3353cc:
    // 0x3353cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3353ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3353d0:
    // 0x3353d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3353d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3353d4:
    // 0x3353d4: 0x3e00008  jr          $ra
label_3353d8:
    if (ctx->pc == 0x3353D8u) {
        ctx->pc = 0x3353D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353D4u;
        // 0x3353d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3353DCu;
        goto label_3353dc;
    }
    ctx->pc = 0x3353D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3353D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353D4u;
        // 0x3353d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3353D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3353DCu;
label_3353dc:
    // 0x3353dc: 0x0  nop
    ctx->pc = 0x3353dcu;
    // NOP
    ctx->pc = 0x3353e0u;
}
