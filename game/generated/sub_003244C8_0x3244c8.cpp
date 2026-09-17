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

// Function: sub_003244C8
// Address: 0x3244c8 - 0x3245a8
void sub_003244C8_0x3244c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003244C8_0x3244c8");
#endif

    switch (ctx->pc) {
        case 0x3244c8u: goto label_3244c8;
        case 0x3244ccu: goto label_3244cc;
        case 0x3244d0u: goto label_3244d0;
        case 0x3244d4u: goto label_3244d4;
        case 0x3244d8u: goto label_3244d8;
        case 0x3244dcu: goto label_3244dc;
        case 0x3244e0u: goto label_3244e0;
        case 0x3244e4u: goto label_3244e4;
        case 0x3244e8u: goto label_3244e8;
        case 0x3244ecu: goto label_3244ec;
        case 0x3244f0u: goto label_3244f0;
        case 0x3244f4u: goto label_3244f4;
        case 0x3244f8u: goto label_3244f8;
        case 0x3244fcu: goto label_3244fc;
        case 0x324500u: goto label_324500;
        case 0x324504u: goto label_324504;
        case 0x324508u: goto label_324508;
        case 0x32450cu: goto label_32450c;
        case 0x324510u: goto label_324510;
        case 0x324514u: goto label_324514;
        case 0x324518u: goto label_324518;
        case 0x32451cu: goto label_32451c;
        case 0x324520u: goto label_324520;
        case 0x324524u: goto label_324524;
        case 0x324528u: goto label_324528;
        case 0x32452cu: goto label_32452c;
        case 0x324530u: goto label_324530;
        case 0x324534u: goto label_324534;
        case 0x324538u: goto label_324538;
        case 0x32453cu: goto label_32453c;
        case 0x324540u: goto label_324540;
        case 0x324544u: goto label_324544;
        case 0x324548u: goto label_324548;
        case 0x32454cu: goto label_32454c;
        case 0x324550u: goto label_324550;
        case 0x324554u: goto label_324554;
        case 0x324558u: goto label_324558;
        case 0x32455cu: goto label_32455c;
        case 0x324560u: goto label_324560;
        case 0x324564u: goto label_324564;
        case 0x324568u: goto label_324568;
        case 0x32456cu: goto label_32456c;
        case 0x324570u: goto label_324570;
        case 0x324574u: goto label_324574;
        case 0x324578u: goto label_324578;
        case 0x32457cu: goto label_32457c;
        case 0x324580u: goto label_324580;
        case 0x324584u: goto label_324584;
        case 0x324588u: goto label_324588;
        case 0x32458cu: goto label_32458c;
        case 0x324590u: goto label_324590;
        case 0x324594u: goto label_324594;
        case 0x324598u: goto label_324598;
        case 0x32459cu: goto label_32459c;
        case 0x3245a0u: goto label_3245a0;
        case 0x3245a4u: goto label_3245a4;
        default: break;
    }

    ctx->pc = 0x3244c8u;

label_3244c8:
    // 0x3244c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3244c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3244cc:
    // 0x3244cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3244ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3244d0:
    // 0x3244d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3244d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3244d4:
    // 0x3244d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3244d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3244d8:
    // 0x3244d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3244d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3244dc:
    // 0x3244dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3244dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3244e0:
    // 0x3244e0: 0xc0cb224  jal         func_32C890
label_3244e4:
    if (ctx->pc == 0x3244E4u) {
        ctx->pc = 0x3244E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244E0u;
        // 0x3244e4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3244E8u;
        goto label_3244e8;
    }
    ctx->pc = 0x3244E0u;
    SET_GPR_U32(ctx, 31, 0x3244E8u);
    ctx->pc = 0x3244E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3244E0u;
    // 0x3244e4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x3244E0u, 0x3244E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244E8u;
label_3244e8:
    // 0x3244e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3244e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3244ec:
    // 0x3244ec: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
label_3244f0:
    if (ctx->pc == 0x3244F0u) {
        ctx->pc = 0x3244F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244ECu;
        // 0x3244f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3244F4u;
        goto label_3244f4;
    }
    ctx->pc = 0x3244ECu;
    {
        const bool branch_taken_0x3244ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3244ec) {
            ctx->pc = 0x3244F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3244ECu;
            // 0x3244f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324590u;
            goto label_324590;
        }
    }
    ctx->pc = 0x3244F4u;
label_3244f4:
    // 0x3244f4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3244f8:
    if (ctx->pc == 0x3244F8u) {
        ctx->pc = 0x3244F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244F4u;
        // 0x3244f8: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3244FCu;
        goto label_3244fc;
    }
    ctx->pc = 0x3244F4u;
    {
        const bool branch_taken_0x3244f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244F4u;
        // 0x3244f8: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244f4) {
            ctx->pc = 0x324524u;
            goto label_324524;
        }
    }
    ctx->pc = 0x3244FCu;
label_3244fc:
    // 0x3244fc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3244fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_324500:
    // 0x324500: 0x308200c0  andi        $v0, $a0, 0xC0
    ctx->pc = 0x324500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
label_324504:
    // 0x324504: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_324508:
    if (ctx->pc == 0x324508u) {
        ctx->pc = 0x324508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324504u;
        // 0x324508: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32450Cu;
        goto label_32450c;
    }
    ctx->pc = 0x324504u;
    {
        const bool branch_taken_0x324504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x324504) {
            ctx->pc = 0x324508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324504u;
            // 0x324508: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324518u;
            goto label_324518;
        }
    }
    ctx->pc = 0x32450Cu;
label_32450c:
    // 0x32450c: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x32450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_324510:
    // 0x324510: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x324510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_324514:
    // 0x324514: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x324514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_324518:
    // 0x324518: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x324518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_32451c:
    // 0x32451c: 0x40f809  jalr        $v0
label_324520:
    if (ctx->pc == 0x324520u) {
        ctx->pc = 0x324520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32451Cu;
        // 0x324520: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324524u;
        goto label_324524;
    }
    ctx->pc = 0x32451Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x324524u);
        ctx->pc = 0x324520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32451Cu;
        // 0x324520: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32451Cu, 0x324524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324524u;
label_324524:
    // 0x324524: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x324524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324528:
    // 0x324528: 0x3c130044  lui         $s3, 0x44
    ctx->pc = 0x324528u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)68 << 16));
label_32452c:
    // 0x32452c: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x32452cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_324530:
    // 0x324530: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x324530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324534:
    // 0x324534: 0x0  nop
    ctx->pc = 0x324534u;
    // NOP
label_324538:
    // 0x324538: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x324538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32453c:
    // 0x32453c: 0xc0cb628  jal         func_32D8A0
label_324540:
    if (ctx->pc == 0x324540u) {
        ctx->pc = 0x324540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32453Cu;
        // 0x324540: 0x2664f940  addiu       $a0, $s3, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324544u;
        goto label_324544;
    }
    ctx->pc = 0x32453Cu;
    SET_GPR_U32(ctx, 31, 0x324544u);
    ctx->pc = 0x324540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32453Cu;
    // 0x324540: 0x2664f940  addiu       $a0, $s3, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32453Cu, 0x324544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324544u;
label_324544:
    // 0x324544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x324544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324548:
    // 0x324548: 0x8ca200e0  lw          $v0, 0xE0($a1)
    ctx->pc = 0x324548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
label_32454c:
    // 0x32454c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_324550:
    if (ctx->pc == 0x324550u) {
        ctx->pc = 0x324550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32454Cu;
        // 0x324550: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324554u;
        goto label_324554;
    }
    ctx->pc = 0x32454Cu;
    {
        const bool branch_taken_0x32454c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32454Cu;
        // 0x324550: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32454c) {
            ctx->pc = 0x324584u;
            goto label_324584;
        }
    }
    ctx->pc = 0x324554u;
label_324554:
    // 0x324554: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x324554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_324558:
    // 0x324558: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x324558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32455c:
    // 0x32455c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x32455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_324560:
    // 0x324560: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
label_324564:
    if (ctx->pc == 0x324564u) {
        ctx->pc = 0x324564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324560u;
        // 0x324564: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324568u;
        goto label_324568;
    }
    ctx->pc = 0x324560u;
    {
        const bool branch_taken_0x324560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x324560) {
            ctx->pc = 0x324564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324560u;
            // 0x324564: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324568u;
            goto label_324568;
        }
    }
    ctx->pc = 0x324568u;
label_324568:
    // 0x324568: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x324568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32456c:
    // 0x32456c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x32456cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_324570:
    // 0x324570: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_324574:
    if (ctx->pc == 0x324574u) {
        ctx->pc = 0x324574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324570u;
        // 0x324574: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324578u;
        goto label_324578;
    }
    ctx->pc = 0x324570u;
    {
        const bool branch_taken_0x324570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324570) {
            ctx->pc = 0x324574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324570u;
            // 0x324574: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x324584u;
            goto label_324584;
        }
    }
    ctx->pc = 0x324578u;
label_324578:
    // 0x324578: 0x40f809  jalr        $v0
label_32457c:
    if (ctx->pc == 0x32457Cu) {
        ctx->pc = 0x32457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324578u;
        // 0x32457c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324580u;
        goto label_324580;
    }
    ctx->pc = 0x324578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x324580u);
        ctx->pc = 0x32457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324578u;
        // 0x32457c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324578u, 0x324580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324580u;
label_324580:
    // 0x324580: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x324580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_324584:
    // 0x324584: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_324588:
    if (ctx->pc == 0x324588u) {
        ctx->pc = 0x324588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324584u;
        // 0x324588: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32458Cu;
        goto label_32458c;
    }
    ctx->pc = 0x324584u;
    {
        const bool branch_taken_0x324584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324584u;
        // 0x324588: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324584) {
            ctx->pc = 0x324538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324538;
        }
    }
    ctx->pc = 0x32458Cu;
label_32458c:
    // 0x32458c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32458cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_324590:
    // 0x324590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_324594:
    // 0x324594: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_324598:
    // 0x324598: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x324598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32459c:
    // 0x32459c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32459cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3245a0:
    // 0x3245a0: 0x3e00008  jr          $ra
label_3245a4:
    if (ctx->pc == 0x3245A4u) {
        ctx->pc = 0x3245A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245A0u;
        // 0x3245a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3245A8u;
        goto label_fallthrough_0x3245a0;
    }
    ctx->pc = 0x3245A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3245A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245A0u;
        // 0x3245a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3245A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3245a0:
    ctx->pc = 0x3245A8u;
}
