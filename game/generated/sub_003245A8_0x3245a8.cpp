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

// Function: sub_003245A8
// Address: 0x3245a8 - 0x324678
void sub_003245A8_0x3245a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003245A8_0x3245a8");
#endif

    switch (ctx->pc) {
        case 0x3245a8u: goto label_3245a8;
        case 0x3245acu: goto label_3245ac;
        case 0x3245b0u: goto label_3245b0;
        case 0x3245b4u: goto label_3245b4;
        case 0x3245b8u: goto label_3245b8;
        case 0x3245bcu: goto label_3245bc;
        case 0x3245c0u: goto label_3245c0;
        case 0x3245c4u: goto label_3245c4;
        case 0x3245c8u: goto label_3245c8;
        case 0x3245ccu: goto label_3245cc;
        case 0x3245d0u: goto label_3245d0;
        case 0x3245d4u: goto label_3245d4;
        case 0x3245d8u: goto label_3245d8;
        case 0x3245dcu: goto label_3245dc;
        case 0x3245e0u: goto label_3245e0;
        case 0x3245e4u: goto label_3245e4;
        case 0x3245e8u: goto label_3245e8;
        case 0x3245ecu: goto label_3245ec;
        case 0x3245f0u: goto label_3245f0;
        case 0x3245f4u: goto label_3245f4;
        case 0x3245f8u: goto label_3245f8;
        case 0x3245fcu: goto label_3245fc;
        case 0x324600u: goto label_324600;
        case 0x324604u: goto label_324604;
        case 0x324608u: goto label_324608;
        case 0x32460cu: goto label_32460c;
        case 0x324610u: goto label_324610;
        case 0x324614u: goto label_324614;
        case 0x324618u: goto label_324618;
        case 0x32461cu: goto label_32461c;
        case 0x324620u: goto label_324620;
        case 0x324624u: goto label_324624;
        case 0x324628u: goto label_324628;
        case 0x32462cu: goto label_32462c;
        case 0x324630u: goto label_324630;
        case 0x324634u: goto label_324634;
        case 0x324638u: goto label_324638;
        case 0x32463cu: goto label_32463c;
        case 0x324640u: goto label_324640;
        case 0x324644u: goto label_324644;
        case 0x324648u: goto label_324648;
        case 0x32464cu: goto label_32464c;
        case 0x324650u: goto label_324650;
        case 0x324654u: goto label_324654;
        case 0x324658u: goto label_324658;
        case 0x32465cu: goto label_32465c;
        case 0x324660u: goto label_324660;
        case 0x324664u: goto label_324664;
        case 0x324668u: goto label_324668;
        case 0x32466cu: goto label_32466c;
        case 0x324670u: goto label_324670;
        case 0x324674u: goto label_324674;
        default: break;
    }

    ctx->pc = 0x3245a8u;

label_3245a8:
    // 0x3245a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3245a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3245ac:
    // 0x3245ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3245acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3245b0:
    // 0x3245b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3245b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3245b4:
    // 0x3245b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3245b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3245b8:
    // 0x3245b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3245b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3245bc:
    // 0x3245bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3245bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3245c0:
    // 0x3245c0: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_3245c4:
    if (ctx->pc == 0x3245C4u) {
        ctx->pc = 0x3245C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245C0u;
        // 0x3245c4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3245C8u;
        goto label_3245c8;
    }
    ctx->pc = 0x3245C0u;
    {
        const bool branch_taken_0x3245c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3245C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245C0u;
        // 0x3245c4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245c0) {
            ctx->pc = 0x3245F4u;
            goto label_3245f4;
        }
    }
    ctx->pc = 0x3245C8u;
label_3245c8:
    // 0x3245c8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3245c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3245cc:
    // 0x3245cc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3245ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3245d0:
    // 0x3245d0: 0x308200c0  andi        $v0, $a0, 0xC0
    ctx->pc = 0x3245d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
label_3245d4:
    // 0x3245d4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3245d8:
    if (ctx->pc == 0x3245D8u) {
        ctx->pc = 0x3245D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245D4u;
        // 0x3245d8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3245DCu;
        goto label_3245dc;
    }
    ctx->pc = 0x3245D4u;
    {
        const bool branch_taken_0x3245d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3245d4) {
            ctx->pc = 0x3245D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3245D4u;
            // 0x3245d8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3245E8u;
            goto label_3245e8;
        }
    }
    ctx->pc = 0x3245DCu;
label_3245dc:
    // 0x3245dc: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x3245dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_3245e0:
    // 0x3245e0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3245e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3245e4:
    // 0x3245e4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3245e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3245e8:
    // 0x3245e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3245e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3245ec:
    // 0x3245ec: 0x40f809  jalr        $v0
label_3245f0:
    if (ctx->pc == 0x3245F0u) {
        ctx->pc = 0x3245F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245ECu;
        // 0x3245f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3245F4u;
        goto label_3245f4;
    }
    ctx->pc = 0x3245ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3245F4u);
        ctx->pc = 0x3245F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245ECu;
        // 0x3245f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3245ECu, 0x3245F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3245F4u;
label_3245f4:
    // 0x3245f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3245f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3245f8:
    // 0x3245f8: 0x3c130044  lui         $s3, 0x44
    ctx->pc = 0x3245f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)68 << 16));
label_3245fc:
    // 0x3245fc: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x3245fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_324600:
    // 0x324600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x324600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324604:
    // 0x324604: 0x0  nop
    ctx->pc = 0x324604u;
    // NOP
label_324608:
    // 0x324608: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x324608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32460c:
    // 0x32460c: 0xc0cb628  jal         func_32D8A0
label_324610:
    if (ctx->pc == 0x324610u) {
        ctx->pc = 0x324610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32460Cu;
        // 0x324610: 0x2664f940  addiu       $a0, $s3, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324614u;
        goto label_324614;
    }
    ctx->pc = 0x32460Cu;
    SET_GPR_U32(ctx, 31, 0x324614u);
    ctx->pc = 0x324610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32460Cu;
    // 0x324610: 0x2664f940  addiu       $a0, $s3, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32460Cu, 0x324614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324614u;
label_324614:
    // 0x324614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x324614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324618:
    // 0x324618: 0x8ca200e0  lw          $v0, 0xE0($a1)
    ctx->pc = 0x324618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
label_32461c:
    // 0x32461c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_324620:
    if (ctx->pc == 0x324620u) {
        ctx->pc = 0x324620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32461Cu;
        // 0x324620: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324624u;
        goto label_324624;
    }
    ctx->pc = 0x32461Cu;
    {
        const bool branch_taken_0x32461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32461Cu;
        // 0x324620: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32461c) {
            ctx->pc = 0x324654u;
            goto label_324654;
        }
    }
    ctx->pc = 0x324624u;
label_324624:
    // 0x324624: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x324624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_324628:
    // 0x324628: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x324628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32462c:
    // 0x32462c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x32462cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_324630:
    // 0x324630: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
label_324634:
    if (ctx->pc == 0x324634u) {
        ctx->pc = 0x324634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324630u;
        // 0x324634: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324638u;
        goto label_324638;
    }
    ctx->pc = 0x324630u;
    {
        const bool branch_taken_0x324630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x324630) {
            ctx->pc = 0x324634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324630u;
            // 0x324634: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324638u;
            goto label_324638;
        }
    }
    ctx->pc = 0x324638u;
label_324638:
    // 0x324638: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x324638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32463c:
    // 0x32463c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x32463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_324640:
    // 0x324640: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_324644:
    if (ctx->pc == 0x324644u) {
        ctx->pc = 0x324644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324640u;
        // 0x324644: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324648u;
        goto label_324648;
    }
    ctx->pc = 0x324640u;
    {
        const bool branch_taken_0x324640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324640) {
            ctx->pc = 0x324644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324640u;
            // 0x324644: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x324654u;
            goto label_324654;
        }
    }
    ctx->pc = 0x324648u;
label_324648:
    // 0x324648: 0x40f809  jalr        $v0
label_32464c:
    if (ctx->pc == 0x32464Cu) {
        ctx->pc = 0x32464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324648u;
        // 0x32464c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324650u;
        goto label_324650;
    }
    ctx->pc = 0x324648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x324650u);
        ctx->pc = 0x32464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324648u;
        // 0x32464c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324648u, 0x324650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324650u;
label_324650:
    // 0x324650: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x324650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_324654:
    // 0x324654: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_324658:
    if (ctx->pc == 0x324658u) {
        ctx->pc = 0x324658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324654u;
        // 0x324658: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32465Cu;
        goto label_32465c;
    }
    ctx->pc = 0x324654u;
    {
        const bool branch_taken_0x324654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324654u;
        // 0x324658: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324654) {
            ctx->pc = 0x324608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324608;
        }
    }
    ctx->pc = 0x32465Cu;
label_32465c:
    // 0x32465c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32465cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_324660:
    // 0x324660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_324664:
    // 0x324664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_324668:
    // 0x324668: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x324668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32466c:
    // 0x32466c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32466cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_324670:
    // 0x324670: 0x3e00008  jr          $ra
label_324674:
    if (ctx->pc == 0x324674u) {
        ctx->pc = 0x324674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324670u;
        // 0x324674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324678u;
        goto label_fallthrough_0x324670;
    }
    ctx->pc = 0x324670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324670u;
        // 0x324674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x324670:
    ctx->pc = 0x324678u;
}
