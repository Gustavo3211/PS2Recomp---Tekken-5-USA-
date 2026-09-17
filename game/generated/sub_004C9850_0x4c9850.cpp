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

// Function: sub_004C9850
// Address: 0x4c9850 - 0x4c9988
void sub_004C9850_0x4c9850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9850_0x4c9850");
#endif

    switch (ctx->pc) {
        case 0x4c9880u: goto label_4c9880;
        case 0x4c9918u: goto label_4c9918;
        case 0x4c9920u: goto label_4c9920;
        case 0x4c9928u: goto label_4c9928;
        case 0x4c993cu: goto label_4c993c;
        case 0x4c9950u: goto label_4c9950;
        case 0x4c9958u: goto label_4c9958;
        case 0x4c9960u: goto label_4c9960;
        case 0x4c9968u: goto label_4c9968;
        case 0x4c9970u: goto label_4c9970;
        default: break;
    }

    ctx->pc = 0x4c9850u;

    // 0x4c9850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c9850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c9854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c9854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c9858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c9858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c985c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c9860: 0x263201b4  addiu       $s2, $s1, 0x1B4
    ctx->pc = 0x4c9860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4c9864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c9864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c9868: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4c9868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4c986c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c986cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c9870: 0x4420019  bltzl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4C9870u;
    {
        const bool branch_taken_0x4c9870 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c9870) {
            ctx->pc = 0x4C9874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C9870u;
            // 0x4c9874: 0x862301be  lh          $v1, 0x1BE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C98D8u;
            goto label_4c98d8;
        }
    }
    ctx->pc = 0x4C9878u;
    // 0x4c9878: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C9878u;
    SET_GPR_U32(ctx, 31, 0x4C9880u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C9878u, 0x4C9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9880u;
label_4c9880:
    // 0x4c9880: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4c9880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4c9884: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x4c9884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4c9888: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c9888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c988c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4c988cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4c9890: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x4c9890u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c9894: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4c9894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4c9898: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4c9898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4c989c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c989cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c98a0: 0x2442ffbd  addiu       $v0, $v0, -0x43
    ctx->pc = 0x4c98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967229));
    // 0x4c98a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c98a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c98a8: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4c98a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c98ac: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4c98acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4c98b0: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x4c98b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x4c98b4: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4c98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x4c98b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4c98b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4c98bc: 0x948471e0  lhu         $a0, 0x71E0($a0)
    ctx->pc = 0x4c98bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 29152)));
    // 0x4c98c0: 0xa62001b6  sh          $zero, 0x1B6($s1)
    ctx->pc = 0x4c98c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c98c4: 0xa624000c  sh          $a0, 0xC($s1)
    ctx->pc = 0x4c98c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x4c98c8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4c98c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c98cc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c98ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c98d0: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4c98d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c98d4: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x4c98d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_4c98d8:
    // 0x4c98d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c98dc: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4c98dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4c98e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c98e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c98e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c98e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c98e8: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x4c98e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c98ec: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4c98ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4c98f0: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x4c98f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x4c98f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c98f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c98f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c98fc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4c98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4c9900: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c9900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c9904: 0x946371e8  lhu         $v1, 0x71E8($v1)
    ctx->pc = 0x4c9904u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 29160)));
    // 0x4c9908: 0xa6200118  sh          $zero, 0x118($s1)
    ctx->pc = 0x4c9908u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c990c: 0xa623011c  sh          $v1, 0x11C($s1)
    ctx->pc = 0x4c990cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c9910: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C9910u;
    SET_GPR_U32(ctx, 31, 0x4C9918u);
    ctx->pc = 0x4C9914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9910u;
    // 0x4c9914: 0xa6200120  sh          $zero, 0x120($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 288), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C9910u, 0x4C9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9918u;
label_4c9918:
    // 0x4c9918: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4C9918u;
    SET_GPR_U32(ctx, 31, 0x4C9920u);
    ctx->pc = 0x4C991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9918u;
    // 0x4c991c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4C9918u, 0x4C9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9920u;
label_4c9920:
    // 0x4c9920: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C9920u;
    SET_GPR_U32(ctx, 31, 0x4C9928u);
    ctx->pc = 0x4C9924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9920u;
    // 0x4c9924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C9920u, 0x4C9928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9928u;
label_4c9928:
    // 0x4c9928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c9928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c992c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C992Cu;
    {
        const bool branch_taken_0x4c992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C992Cu;
        // 0x4c9930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c992c) {
            ctx->pc = 0x4C9970u;
            goto label_4c9970;
        }
    }
    ctx->pc = 0x4C9934u;
    // 0x4c9934: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C9934u;
    SET_GPR_U32(ctx, 31, 0x4C993Cu);
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C9934u, 0x4C993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C993Cu;
label_4c993c:
    // 0x4c993c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c9940: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4C9940u;
    {
        const bool branch_taken_0x4c9940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9940u;
        // 0x4c9944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9940) {
            ctx->pc = 0x4C9970u;
            goto label_4c9970;
        }
    }
    ctx->pc = 0x4C9948u;
    // 0x4c9948: 0xc132662  jal         func_4C9988
    ctx->pc = 0x4C9948u;
    SET_GPR_U32(ctx, 31, 0x4C9950u);
    ctx->pc = 0x4C9988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C9988u, 0x4C9948u, 0x4C9950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9950u;
label_4c9950:
    // 0x4c9950: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C9950u;
    SET_GPR_U32(ctx, 31, 0x4C9958u);
    ctx->pc = 0x4C9954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9950u;
    // 0x4c9954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C9950u, 0x4C9958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9958u;
label_4c9958:
    // 0x4c9958: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4C9958u;
    SET_GPR_U32(ctx, 31, 0x4C9960u);
    ctx->pc = 0x4C995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9958u;
    // 0x4c995c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4C9958u, 0x4C9960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9960u;
label_4c9960:
    // 0x4c9960: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C9960u;
    SET_GPR_U32(ctx, 31, 0x4C9968u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C9960u, 0x4C9968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9968u;
label_4c9968:
    // 0x4c9968: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C9968u;
    SET_GPR_U32(ctx, 31, 0x4C9970u);
    ctx->pc = 0x4C996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9968u;
    // 0x4c996c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C9968u, 0x4C9970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9970u;
label_4c9970:
    // 0x4c9970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c9970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c9974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c9974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c9978: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c9978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c997c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c997cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c9980: 0x3e00008  jr          $ra
    ctx->pc = 0x4C9980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9980u;
        // 0x4c9984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C9980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C9988u;
}
