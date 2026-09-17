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

// Function: sub_0020A828
// Address: 0x20a828 - 0x20a960
void sub_0020A828_0x20a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A828_0x20a828");
#endif

    switch (ctx->pc) {
        case 0x20a878u: goto label_20a878;
        case 0x20a894u: goto label_20a894;
        case 0x20a89cu: goto label_20a89c;
        case 0x20a8a4u: goto label_20a8a4;
        case 0x20a8acu: goto label_20a8ac;
        case 0x20a8b4u: goto label_20a8b4;
        case 0x20a8c0u: goto label_20a8c0;
        case 0x20a8c8u: goto label_20a8c8;
        case 0x20a8d8u: goto label_20a8d8;
        case 0x20a8e8u: goto label_20a8e8;
        case 0x20a8fcu: goto label_20a8fc;
        case 0x20a904u: goto label_20a904;
        case 0x20a918u: goto label_20a918;
        case 0x20a928u: goto label_20a928;
        case 0x20a930u: goto label_20a930;
        case 0x20a938u: goto label_20a938;
        case 0x20a940u: goto label_20a940;
        default: break;
    }

    ctx->pc = 0x20a828u;

    // 0x20a828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a82c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a830: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a834: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20a834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a838: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20a838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20a83c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20a83cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a844: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x20a844u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x20a848: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20a84c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20a84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a850: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20a850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20a854: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x20a854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x20a858: 0xa26201bb  sb          $v0, 0x1BB($s3)
    ctx->pc = 0x20a858u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 443), (uint8_t)GPR_U32(ctx, 2));
    // 0x20a85c: 0x2610dda0  addiu       $s0, $s0, -0x2260
    ctx->pc = 0x20a85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958496));
    // 0x20a860: 0xa22201bb  sb          $v0, 0x1BB($s1)
    ctx->pc = 0x20a860u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 443), (uint8_t)GPR_U32(ctx, 2));
    // 0x20a864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a868: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20a868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a86c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20a86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a870: 0xc08e046  jal         func_238118
    ctx->pc = 0x20A870u;
    SET_GPR_U32(ctx, 31, 0x20A878u);
    ctx->pc = 0x20A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A870u;
    // 0x20a874: 0x8c678880  lw          $a3, -0x7780($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238118u, 0x20A870u, 0x20A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A878u;
label_20a878:
    // 0x20a878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a87c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20a87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a880: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20a880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a884: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a888: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20a888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a88c: 0xc08dd60  jal         func_237580
    ctx->pc = 0x20A88Cu;
    SET_GPR_U32(ctx, 31, 0x20A894u);
    ctx->pc = 0x20A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A88Cu;
    // 0x20a890: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237580u, 0x20A88Cu, 0x20A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A894u;
label_20a894:
    // 0x20a894: 0xc093796  jal         func_24DE58
    ctx->pc = 0x20A894u;
    SET_GPR_U32(ctx, 31, 0x20A89Cu);
    ctx->pc = 0x24DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DE58u, 0x20A894u, 0x20A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A89Cu;
label_20a89c:
    // 0x20a89c: 0xc07e090  jal         func_1F8240
    ctx->pc = 0x20A89Cu;
    SET_GPR_U32(ctx, 31, 0x20A8A4u);
    ctx->pc = 0x20A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A89Cu;
    // 0x20a8a0: 0xaf80c8cc  sw          $zero, -0x3734($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8240u, 0x20A89Cu, 0x20A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8A4u;
label_20a8a4:
    // 0x20a8a4: 0xc09d642  jal         func_275908
    ctx->pc = 0x20A8A4u;
    SET_GPR_U32(ctx, 31, 0x20A8ACu);
    ctx->pc = 0x275908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275908u, 0x20A8A4u, 0x20A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8ACu;
label_20a8ac:
    // 0x20a8ac: 0xc09d49c  jal         func_275270
    ctx->pc = 0x20A8ACu;
    SET_GPR_U32(ctx, 31, 0x20A8B4u);
    ctx->pc = 0x20A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A8ACu;
    // 0x20a8b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275270u, 0x20A8ACu, 0x20A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8B4u;
label_20a8b4:
    // 0x20a8b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20a8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8b8: 0xc098626  jal         func_261898
    ctx->pc = 0x20A8B8u;
    SET_GPR_U32(ctx, 31, 0x20A8C0u);
    ctx->pc = 0x20A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A8B8u;
    // 0x20a8bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261898u, 0x20A8B8u, 0x20A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8C0u;
label_20a8c0:
    // 0x20a8c0: 0xc09d908  jal         func_276420
    ctx->pc = 0x20A8C0u;
    SET_GPR_U32(ctx, 31, 0x20A8C8u);
    ctx->pc = 0x276420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276420u, 0x20A8C0u, 0x20A8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8C8u;
label_20a8c8:
    // 0x20a8c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20a8cc: 0x245088d0  addiu       $s0, $v0, -0x7730
    ctx->pc = 0x20a8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20a8d0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x20a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x20a8d4: 0x0  nop
    ctx->pc = 0x20a8d4u;
    // NOP
label_20a8d8:
    // 0x20a8d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20a8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20a8dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20a8e0: 0xc09683c  jal         func_25A0F0
    ctx->pc = 0x20A8E0u;
    SET_GPR_U32(ctx, 31, 0x20A8E8u);
    ctx->pc = 0x20A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A8E0u;
    // 0x20a8e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0F0u, 0x20A8E0u, 0x20A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8E8u;
label_20a8e8:
    // 0x20a8e8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x20a8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20a8ec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20A8ECu;
    {
        const bool branch_taken_0x20a8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a8ec) {
            ctx->pc = 0x20A8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A8ECu;
            // 0x20a8f0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a8d8;
        }
    }
    ctx->pc = 0x20A8F4u;
    // 0x20a8f4: 0xc09610e  jal         func_258438
    ctx->pc = 0x20A8F4u;
    SET_GPR_U32(ctx, 31, 0x20A8FCu);
    ctx->pc = 0x258438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258438u, 0x20A8F4u, 0x20A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8FCu;
label_20a8fc:
    // 0x20a8fc: 0xc088218  jal         func_220860
    ctx->pc = 0x20A8FCu;
    SET_GPR_U32(ctx, 31, 0x20A904u);
    ctx->pc = 0x220860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220860u, 0x20A8FCu, 0x20A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A904u;
label_20a904:
    // 0x20a904: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x20a904u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x20a908: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A908u;
    {
        const bool branch_taken_0x20a908 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A908u;
        // 0x20a90c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a908) {
            ctx->pc = 0x20A920u;
            goto label_20a920;
        }
    }
    ctx->pc = 0x20A910u;
    // 0x20a910: 0xc0a3abe  jal         func_28EAF8
    ctx->pc = 0x20A910u;
    SET_GPR_U32(ctx, 31, 0x20A918u);
    ctx->pc = 0x20A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A910u;
    // 0x20a914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EAF8u, 0x20A910u, 0x20A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A918u;
label_20a918:
    // 0x20a918: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20A918u;
    {
        const bool branch_taken_0x20a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a918) {
            ctx->pc = 0x20A928u;
            goto label_20a928;
        }
    }
    ctx->pc = 0x20A920u;
label_20a920:
    // 0x20a920: 0xc0a3abe  jal         func_28EAF8
    ctx->pc = 0x20A920u;
    SET_GPR_U32(ctx, 31, 0x20A928u);
    ctx->pc = 0x20A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A920u;
    // 0x20a924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EAF8u, 0x20A920u, 0x20A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A928u;
label_20a928:
    // 0x20a928: 0xc091b96  jal         func_246E58
    ctx->pc = 0x20A928u;
    SET_GPR_U32(ctx, 31, 0x20A930u);
    ctx->pc = 0x20A92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A928u;
    // 0x20a92c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246E58u, 0x20A928u, 0x20A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A930u;
label_20a930:
    // 0x20a930: 0xc08f530  jal         func_23D4C0
    ctx->pc = 0x20A930u;
    SET_GPR_U32(ctx, 31, 0x20A938u);
    ctx->pc = 0x23D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D4C0u, 0x20A930u, 0x20A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A938u;
label_20a938:
    // 0x20a938: 0xc091590  jal         func_245640
    ctx->pc = 0x20A938u;
    SET_GPR_U32(ctx, 31, 0x20A940u);
    ctx->pc = 0x245640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245640u, 0x20A938u, 0x20A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A940u;
label_20a940:
    // 0x20a940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a94c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20a94cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a950: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a954: 0x3e00008  jr          $ra
    ctx->pc = 0x20A954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A954u;
        // 0x20a958: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A95Cu;
    // 0x20a95c: 0x0  nop
    ctx->pc = 0x20a95cu;
    // NOP
    ctx->pc = 0x20a960u;
}
