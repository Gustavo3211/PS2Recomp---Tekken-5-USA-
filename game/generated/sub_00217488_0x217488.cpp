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

// Function: sub_00217488
// Address: 0x217488 - 0x217620
void sub_00217488_0x217488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217488_0x217488");
#endif

    switch (ctx->pc) {
        case 0x2174b0u: goto label_2174b0;
        case 0x2174bcu: goto label_2174bc;
        case 0x2174c8u: goto label_2174c8;
        case 0x2174f0u: goto label_2174f0;
        case 0x2174f8u: goto label_2174f8;
        case 0x217508u: goto label_217508;
        case 0x217518u: goto label_217518;
        case 0x217520u: goto label_217520;
        case 0x217528u: goto label_217528;
        case 0x21753cu: goto label_21753c;
        case 0x217544u: goto label_217544;
        case 0x217554u: goto label_217554;
        case 0x217568u: goto label_217568;
        case 0x217570u: goto label_217570;
        case 0x2175ccu: goto label_2175cc;
        case 0x2175d4u: goto label_2175d4;
        case 0x2175f0u: goto label_2175f0;
        case 0x2175f8u: goto label_2175f8;
        case 0x217600u: goto label_217600;
        default: break;
    }

    ctx->pc = 0x217488u;

    // 0x217488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21748c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21748cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217498: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x217498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21749c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2174a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2174a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2174a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2174a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2174a8: 0xc086f46  jal         func_21BD18
    ctx->pc = 0x2174A8u;
    SET_GPR_U32(ctx, 31, 0x2174B0u);
    ctx->pc = 0x2174ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174A8u;
    // 0x2174ac: 0x92240032  lbu         $a0, 0x32($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BD18u, 0x2174A8u, 0x2174B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174B0u;
label_2174b0:
    // 0x2174b0: 0x92300032  lbu         $s0, 0x32($s1)
    ctx->pc = 0x2174b0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x2174b4: 0xc07cfc8  jal         func_1F3F20
    ctx->pc = 0x2174B4u;
    SET_GPR_U32(ctx, 31, 0x2174BCu);
    ctx->pc = 0x2174B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174B4u;
    // 0x2174b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3F20u, 0x2174B4u, 0x2174BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174BCu;
label_2174bc:
    // 0x2174bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2174bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174c0: 0xc085048  jal         func_214120
    ctx->pc = 0x2174C0u;
    SET_GPR_U32(ctx, 31, 0x2174C8u);
    ctx->pc = 0x2174C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174C0u;
    // 0x2174c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214120u, 0x2174C0u, 0x2174C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174C8u;
label_2174c8:
    // 0x2174c8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2174C8u;
    {
        const bool branch_taken_0x2174c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2174CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174C8u;
        // 0x2174cc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174c8) {
            ctx->pc = 0x217578u;
            goto label_217578;
        }
    }
    ctx->pc = 0x2174D0u;
    // 0x2174d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2174d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2174d4: 0x24528858  addiu       $s2, $v0, -0x77A8
    ctx->pc = 0x2174d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x2174d8: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x2174d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x2174dc: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2174dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2174e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2174e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2174e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2174e8: 0xc092486  jal         func_249218
    ctx->pc = 0x2174E8u;
    SET_GPR_U32(ctx, 31, 0x2174F0u);
    ctx->pc = 0x2174ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174E8u;
    // 0x2174ec: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x2174E8u, 0x2174F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174F0u;
label_2174f0:
    // 0x2174f0: 0xc092490  jal         func_249240
    ctx->pc = 0x2174F0u;
    SET_GPR_U32(ctx, 31, 0x2174F8u);
    ctx->pc = 0x2174F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174F0u;
    // 0x2174f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x2174F0u, 0x2174F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174F8u;
label_2174f8:
    // 0x2174f8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2174f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2174fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2174fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217500: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x217500u;
    SET_GPR_U32(ctx, 31, 0x217508u);
    ctx->pc = 0x217504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217500u;
    // 0x217504: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x217500u, 0x217508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217508u;
label_217508:
    // 0x217508: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x217508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x21750c: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x21750cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x217510: 0xc0a4e38  jal         func_2938E0
    ctx->pc = 0x217510u;
    SET_GPR_U32(ctx, 31, 0x217518u);
    ctx->pc = 0x217514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217510u;
    // 0x217514: 0x2484b710  addiu       $a0, $a0, -0x48F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938E0u, 0x217510u, 0x217518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217518u;
label_217518:
    // 0x217518: 0xc0850e6  jal         func_214398
    ctx->pc = 0x217518u;
    SET_GPR_U32(ctx, 31, 0x217520u);
    ctx->pc = 0x21751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217518u;
    // 0x21751c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214398u, 0x217518u, 0x217520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217520u;
label_217520:
    // 0x217520: 0xc086f40  jal         func_21BD00
    ctx->pc = 0x217520u;
    SET_GPR_U32(ctx, 31, 0x217528u);
    ctx->pc = 0x217524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217520u;
    // 0x217524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BD00u, 0x217520u, 0x217528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217528u;
label_217528:
    // 0x217528: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x217528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x21752c: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x21752Cu;
    {
        const bool branch_taken_0x21752c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21752c) {
            ctx->pc = 0x217530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21752Cu;
            // 0x217530: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217600u;
            goto label_217600;
        }
    }
    ctx->pc = 0x217534u;
    // 0x217534: 0xc0821ce  jal         func_208738
    ctx->pc = 0x217534u;
    SET_GPR_U32(ctx, 31, 0x21753Cu);
    ctx->pc = 0x217538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217534u;
    // 0x217538: 0x92240005  lbu         $a0, 0x5($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x217534u, 0x21753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21753Cu;
label_21753c:
    // 0x21753c: 0xc0865fe  jal         func_2197F8
    ctx->pc = 0x21753Cu;
    SET_GPR_U32(ctx, 31, 0x217544u);
    ctx->pc = 0x217540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21753Cu;
    // 0x217540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2197F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2197F8u, 0x21753Cu, 0x217544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217544u;
label_217544:
    // 0x217544: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x217544u;
    {
        const bool branch_taken_0x217544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x217544) {
            ctx->pc = 0x217560u;
            goto label_217560;
        }
    }
    ctx->pc = 0x21754Cu;
    // 0x21754c: 0xc08659e  jal         func_219678
    ctx->pc = 0x21754Cu;
    SET_GPR_U32(ctx, 31, 0x217554u);
    ctx->pc = 0x217550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21754Cu;
    // 0x217550: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219678u, 0x21754Cu, 0x217554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217554u;
label_217554:
    // 0x217554: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x217554u;
    {
        const bool branch_taken_0x217554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217554) {
            ctx->pc = 0x217568u;
            goto label_217568;
        }
    }
    ctx->pc = 0x21755Cu;
    // 0x21755c: 0x0  nop
    ctx->pc = 0x21755cu;
    // NOP
label_217560:
    // 0x217560: 0xc08659e  jal         func_219678
    ctx->pc = 0x217560u;
    SET_GPR_U32(ctx, 31, 0x217568u);
    ctx->pc = 0x217564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217560u;
    // 0x217564: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219678u, 0x217560u, 0x217568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217568u;
label_217568:
    // 0x217568: 0xc084eb2  jal         func_213AC8
    ctx->pc = 0x217568u;
    SET_GPR_U32(ctx, 31, 0x217570u);
    ctx->pc = 0x213AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AC8u, 0x217568u, 0x217570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217570u;
label_217570:
    // 0x217570: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x217570u;
    {
        const bool branch_taken_0x217570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217570u;
        // 0x217574: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217570) {
            ctx->pc = 0x217604u;
            goto label_217604;
        }
    }
    ctx->pc = 0x217578u;
label_217578:
    // 0x217578: 0x1e400022  bgtz        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x217578u;
    {
        const bool branch_taken_0x217578 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x21757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217578u;
        // 0x21757c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217578) {
            ctx->pc = 0x217604u;
            goto label_217604;
        }
    }
    ctx->pc = 0x217580u;
    // 0x217580: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x217584: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x217584u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x217588: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x217588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x21758c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21758Cu;
    {
        const bool branch_taken_0x21758c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21758Cu;
        // 0x217590: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21758c) {
            ctx->pc = 0x2175E0u;
            goto label_2175e0;
        }
    }
    ctx->pc = 0x217594u;
    // 0x217594: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x217594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x217598: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x217598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21759c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21759cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2175a0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2175a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2175a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2175a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2175a8: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2175a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2175ac: 0x84650040  lh          $a1, 0x40($v1)
    ctx->pc = 0x2175acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2175b0: 0x14a4000b  bne         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2175B0u;
    {
        const bool branch_taken_0x2175b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2175B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175B0u;
        // 0x2175b4: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2175b0) {
            ctx->pc = 0x2175E0u;
            goto label_2175e0;
        }
    }
    ctx->pc = 0x2175B8u;
    // 0x2175b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2175b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2175bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2175bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2175c0: 0xac45886c  sw          $a1, -0x7794($v0)
    ctx->pc = 0x2175c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x2175c4: 0xc0898be  jal         func_2262F8
    ctx->pc = 0x2175C4u;
    SET_GPR_U32(ctx, 31, 0x2175CCu);
    ctx->pc = 0x2175C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175C4u;
    // 0x2175c8: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262F8u, 0x2175C4u, 0x2175CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175CCu;
label_2175cc:
    // 0x2175cc: 0xc0b4592  jal         func_2D1648
    ctx->pc = 0x2175CCu;
    SET_GPR_U32(ctx, 31, 0x2175D4u);
    ctx->pc = 0x2175D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175CCu;
    // 0x2175d0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1648u, 0x2175CCu, 0x2175D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175D4u;
label_2175d4:
    // 0x2175d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2175D4u;
    {
        const bool branch_taken_0x2175d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2175d4) {
            ctx->pc = 0x2175E8u;
            goto label_2175e8;
        }
    }
    ctx->pc = 0x2175DCu;
    // 0x2175dc: 0x0  nop
    ctx->pc = 0x2175dcu;
    // NOP
label_2175e0:
    // 0x2175e0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2175e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2175e4: 0xac62886c  sw          $v0, -0x7794($v1)
    ctx->pc = 0x2175e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936684), GPR_U32(ctx, 2));
label_2175e8:
    // 0x2175e8: 0xc092486  jal         func_249218
    ctx->pc = 0x2175E8u;
    SET_GPR_U32(ctx, 31, 0x2175F0u);
    ctx->pc = 0x2175ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175E8u;
    // 0x2175ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x2175E8u, 0x2175F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175F0u;
label_2175f0:
    // 0x2175f0: 0xc092490  jal         func_249240
    ctx->pc = 0x2175F0u;
    SET_GPR_U32(ctx, 31, 0x2175F8u);
    ctx->pc = 0x2175F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175F0u;
    // 0x2175f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x2175F0u, 0x2175F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175F8u;
label_2175f8:
    // 0x2175f8: 0xc0a3aa4  jal         func_28EA90
    ctx->pc = 0x2175F8u;
    SET_GPR_U32(ctx, 31, 0x217600u);
    ctx->pc = 0x2175FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175F8u;
    // 0x2175fc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA90u, 0x2175F8u, 0x217600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217600u;
label_217600:
    // 0x217600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217604:
    // 0x217604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21760c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21760cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217610: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x217610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217614: 0x3e00008  jr          $ra
    ctx->pc = 0x217614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217614u;
        // 0x217618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21761Cu;
    // 0x21761c: 0x0  nop
    ctx->pc = 0x21761cu;
    // NOP
    ctx->pc = 0x217620u;
}
