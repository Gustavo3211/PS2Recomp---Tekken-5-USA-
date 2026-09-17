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

// Function: sub_002EF628
// Address: 0x2ef628 - 0x2ef6f0
void sub_002EF628_0x2ef628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF628_0x2ef628");
#endif

    switch (ctx->pc) {
        case 0x2ef628u: goto label_2ef628;
        case 0x2ef62cu: goto label_2ef62c;
        case 0x2ef630u: goto label_2ef630;
        case 0x2ef634u: goto label_2ef634;
        case 0x2ef638u: goto label_2ef638;
        case 0x2ef63cu: goto label_2ef63c;
        case 0x2ef640u: goto label_2ef640;
        case 0x2ef644u: goto label_2ef644;
        case 0x2ef648u: goto label_2ef648;
        case 0x2ef64cu: goto label_2ef64c;
        case 0x2ef650u: goto label_2ef650;
        case 0x2ef654u: goto label_2ef654;
        case 0x2ef658u: goto label_2ef658;
        case 0x2ef65cu: goto label_2ef65c;
        case 0x2ef660u: goto label_2ef660;
        case 0x2ef664u: goto label_2ef664;
        case 0x2ef668u: goto label_2ef668;
        case 0x2ef66cu: goto label_2ef66c;
        case 0x2ef670u: goto label_2ef670;
        case 0x2ef674u: goto label_2ef674;
        case 0x2ef678u: goto label_2ef678;
        case 0x2ef67cu: goto label_2ef67c;
        case 0x2ef680u: goto label_2ef680;
        case 0x2ef684u: goto label_2ef684;
        case 0x2ef688u: goto label_2ef688;
        case 0x2ef68cu: goto label_2ef68c;
        case 0x2ef690u: goto label_2ef690;
        case 0x2ef694u: goto label_2ef694;
        case 0x2ef698u: goto label_2ef698;
        case 0x2ef69cu: goto label_2ef69c;
        case 0x2ef6a0u: goto label_2ef6a0;
        case 0x2ef6a4u: goto label_2ef6a4;
        case 0x2ef6a8u: goto label_2ef6a8;
        case 0x2ef6acu: goto label_2ef6ac;
        case 0x2ef6b0u: goto label_2ef6b0;
        case 0x2ef6b4u: goto label_2ef6b4;
        case 0x2ef6b8u: goto label_2ef6b8;
        case 0x2ef6bcu: goto label_2ef6bc;
        case 0x2ef6c0u: goto label_2ef6c0;
        case 0x2ef6c4u: goto label_2ef6c4;
        case 0x2ef6c8u: goto label_2ef6c8;
        case 0x2ef6ccu: goto label_2ef6cc;
        case 0x2ef6d0u: goto label_2ef6d0;
        case 0x2ef6d4u: goto label_2ef6d4;
        case 0x2ef6d8u: goto label_2ef6d8;
        case 0x2ef6dcu: goto label_2ef6dc;
        case 0x2ef6e0u: goto label_2ef6e0;
        case 0x2ef6e4u: goto label_2ef6e4;
        case 0x2ef6e8u: goto label_2ef6e8;
        case 0x2ef6ecu: goto label_2ef6ec;
        default: break;
    }

    ctx->pc = 0x2ef628u;

label_2ef628:
    // 0x2ef628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ef62c:
    // 0x2ef62c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ef62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2ef630:
    // 0x2ef630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ef630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef634:
    // 0x2ef634: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x2ef634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_2ef638:
    // 0x2ef638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ef63c:
    // 0x2ef63c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ef63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2ef640:
    // 0x2ef640: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ef640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ef644:
    // 0x2ef644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ef644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2ef648:
    // 0x2ef648: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ef648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ef64c:
    // 0x2ef64c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ef64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2ef650:
    // 0x2ef650: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ef650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2ef654:
    // 0x2ef654: 0xc0bb89a  jal         func_2EE268
label_2ef658:
    if (ctx->pc == 0x2EF658u) {
        ctx->pc = 0x2EF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF654u;
        // 0x2ef658: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF65Cu;
        goto label_2ef65c;
    }
    ctx->pc = 0x2EF654u;
    SET_GPR_U32(ctx, 31, 0x2EF65Cu);
    ctx->pc = 0x2EF658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF654u;
    // 0x2ef658: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE268u, 0x2EF654u, 0x2EF65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF65Cu;
label_2ef65c:
    // 0x2ef65c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ef660:
    if (ctx->pc == 0x2EF660u) {
        ctx->pc = 0x2EF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF65Cu;
        // 0x2ef660: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF664u;
        goto label_2ef664;
    }
    ctx->pc = 0x2EF65Cu;
    {
        const bool branch_taken_0x2ef65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF65Cu;
        // 0x2ef660: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef65c) {
            ctx->pc = 0x2EF688u;
            goto label_2ef688;
        }
    }
    ctx->pc = 0x2EF664u;
label_2ef664:
    // 0x2ef664: 0x0  nop
    ctx->pc = 0x2ef664u;
    // NOP
label_2ef668:
    // 0x2ef668: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ef668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ef66c:
    // 0x2ef66c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ef66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ef670:
    // 0x2ef670: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ef670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef674:
    // 0x2ef674: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2ef674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2ef678:
    // 0x2ef678: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef67c:
    // 0x2ef67c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef680:
    // 0x2ef680: 0x60f809  jalr        $v1
label_2ef684:
    if (ctx->pc == 0x2EF684u) {
        ctx->pc = 0x2EF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF680u;
        // 0x2ef684: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF688u;
        goto label_2ef688;
    }
    ctx->pc = 0x2EF680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF688u);
        ctx->pc = 0x2EF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF680u;
        // 0x2ef684: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF680u, 0x2EF688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF688u;
label_2ef688:
    // 0x2ef688: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2ef688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_2ef68c:
    // 0x2ef68c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2ef690:
    if (ctx->pc == 0x2EF690u) {
        ctx->pc = 0x2EF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF68Cu;
        // 0x2ef690: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF694u;
        goto label_2ef694;
    }
    ctx->pc = 0x2EF68Cu;
    {
        const bool branch_taken_0x2ef68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef68c) {
            ctx->pc = 0x2EF690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF68Cu;
            // 0x2ef690: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF6D4u;
            goto label_2ef6d4;
        }
    }
    ctx->pc = 0x2EF694u;
label_2ef694:
    // 0x2ef694: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2ef694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2ef698:
    // 0x2ef698: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ef698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ef69c:
    // 0x2ef69c: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2ef69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2ef6a0:
    // 0x2ef6a0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ef6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ef6a4:
    // 0x2ef6a4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2ef6a8:
    if (ctx->pc == 0x2EF6A8u) {
        ctx->pc = 0x2EF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6A4u;
        // 0x2ef6a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6ACu;
        goto label_2ef6ac;
    }
    ctx->pc = 0x2EF6A4u;
    {
        const bool branch_taken_0x2ef6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6A4u;
        // 0x2ef6a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6a4) {
            ctx->pc = 0x2EF6BCu;
            goto label_2ef6bc;
        }
    }
    ctx->pc = 0x2EF6ACu;
label_2ef6ac:
    // 0x2ef6ac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ef6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ef6b0:
    // 0x2ef6b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ef6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ef6b4:
    // 0x2ef6b4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ef6b8:
    if (ctx->pc == 0x2EF6B8u) {
        ctx->pc = 0x2EF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6B4u;
        // 0x2ef6b8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6BCu;
        goto label_2ef6bc;
    }
    ctx->pc = 0x2EF6B4u;
    {
        const bool branch_taken_0x2ef6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6B4u;
        // 0x2ef6b8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6b4) {
            ctx->pc = 0x2EF6C8u;
            goto label_2ef6c8;
        }
    }
    ctx->pc = 0x2EF6BCu;
label_2ef6bc:
    // 0x2ef6bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ef6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ef6c0:
    // 0x2ef6c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ef6c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef6c4:
    // 0x2ef6c4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ef6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ef6c8:
    // 0x2ef6c8: 0x5500ffe7  bnel        $t0, $zero, . + 4 + (-0x19 << 2)
label_2ef6cc:
    if (ctx->pc == 0x2EF6CCu) {
        ctx->pc = 0x2EF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6C8u;
        // 0x2ef6cc: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6D0u;
        goto label_2ef6d0;
    }
    ctx->pc = 0x2EF6C8u;
    {
        const bool branch_taken_0x2ef6c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef6c8) {
            ctx->pc = 0x2EF6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF6C8u;
            // 0x2ef6cc: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef668;
        }
    }
    ctx->pc = 0x2EF6D0u;
label_2ef6d0:
    // 0x2ef6d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef6d4:
    // 0x2ef6d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ef6d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ef6d8:
    // 0x2ef6d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ef6d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef6dc:
    // 0x2ef6dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ef6dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ef6e0:
    // 0x2ef6e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ef6e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef6e4:
    // 0x2ef6e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ef6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ef6e8:
    // 0x2ef6e8: 0x3e00008  jr          $ra
label_2ef6ec:
    if (ctx->pc == 0x2EF6ECu) {
        ctx->pc = 0x2EF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6E8u;
        // 0x2ef6ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6F0u;
        goto label_fallthrough_0x2ef6e8;
    }
    ctx->pc = 0x2EF6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6E8u;
        // 0x2ef6ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ef6e8:
    ctx->pc = 0x2EF6F0u;
}
