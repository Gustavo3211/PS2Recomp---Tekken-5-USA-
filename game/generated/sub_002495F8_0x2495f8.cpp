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

// Function: sub_002495F8
// Address: 0x2495f8 - 0x249738
void sub_002495F8_0x2495f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002495F8_0x2495f8");
#endif

    switch (ctx->pc) {
        case 0x249638u: goto label_249638;
        case 0x249678u: goto label_249678;
        case 0x2496a0u: goto label_2496a0;
        case 0x2496bcu: goto label_2496bc;
        case 0x2496e8u: goto label_2496e8;
        default: break;
    }

    ctx->pc = 0x2495f8u;

    // 0x2495f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2495f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2495fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2495fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249604: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x249604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x249608: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x249608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24960c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24960cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x249610: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x249614: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x249614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x249618: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x249618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x24961c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x249620: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x249620u;
    {
        const bool branch_taken_0x249620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249620u;
        // 0x249624: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249620) {
            ctx->pc = 0x249718u;
            goto label_249718;
        }
    }
    ctx->pc = 0x249628u;
    // 0x249628: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x249628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24962c: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x24962cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
    // 0x249630: 0xc092568  jal         func_2495A0
    ctx->pc = 0x249630u;
    SET_GPR_U32(ctx, 31, 0x249638u);
    ctx->pc = 0x249634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249630u;
    // 0x249634: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2495A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2495A0u, 0x249630u, 0x249638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249638u;
label_249638:
    // 0x249638: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x249638u;
    {
        const bool branch_taken_0x249638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249638) {
            ctx->pc = 0x24963Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249638u;
            // 0x24963c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24971Cu;
            goto label_24971c;
        }
    }
    ctx->pc = 0x249640u;
    // 0x249640: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x249640u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249644: 0x52200035  beql        $s1, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x249644u;
    {
        const bool branch_taken_0x249644 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x249644) {
            ctx->pc = 0x249648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249644u;
            // 0x249648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24971Cu;
            goto label_24971c;
        }
    }
    ctx->pc = 0x24964Cu;
    // 0x24964c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x24964cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x249650: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x249650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x249654: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x249654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x249658: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x249658u;
    {
        const bool branch_taken_0x249658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249658) {
            ctx->pc = 0x24965Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249658u;
            // 0x24965c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24971Cu;
            goto label_24971c;
        }
    }
    ctx->pc = 0x249660u;
    // 0x249660: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x249660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249664: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x249664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x249668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24966c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24966cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249670: 0xc0d69e2  jal         func_35A788
    ctx->pc = 0x249670u;
    SET_GPR_U32(ctx, 31, 0x249678u);
    ctx->pc = 0x249674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249670u;
    // 0x249674: 0x24065622  addiu       $a2, $zero, 0x5622 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22050));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A788u, 0x249670u, 0x249678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249678u;
label_249678:
    // 0x249678: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x249678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x24967c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x24967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x249680: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x249680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x249684: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x249684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x249688: 0x24747480  addiu       $s4, $v1, 0x7480
    ctx->pc = 0x249688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 29824));
    // 0x24968c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x24968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x249690: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x249690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x249694: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x249694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x249698: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x249698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x24969c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x24969cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_2496a0:
    // 0x2496a0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2496a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2496a4: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2496A4u;
    {
        const bool branch_taken_0x2496a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2496A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496A4u;
        // 0x2496a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496a4) {
            ctx->pc = 0x2496D8u;
            goto label_2496d8;
        }
    }
    ctx->pc = 0x2496ACu;
    // 0x2496ac: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x2496acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2496b0: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2496b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2496b4: 0xc0d69ee  jal         func_35A7B8
    ctx->pc = 0x2496B4u;
    SET_GPR_U32(ctx, 31, 0x2496BCu);
    ctx->pc = 0x2496B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496B4u;
    // 0x2496b8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A7B8u, 0x2496B4u, 0x2496BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496BCu;
label_2496bc:
    // 0x2496bc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2496bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2496c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2496c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2496c4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2496c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2496c8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2496c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2496cc: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2496ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2496d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2496D0u;
    {
        const bool branch_taken_0x2496d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496D0u;
        // 0x2496d4: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496d0) {
            ctx->pc = 0x2496F4u;
            goto label_2496f4;
        }
    }
    ctx->pc = 0x2496D8u;
label_2496d8:
    // 0x2496d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2496d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2496dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2496dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2496e0: 0xc0d69ee  jal         func_35A7B8
    ctx->pc = 0x2496E0u;
    SET_GPR_U32(ctx, 31, 0x2496E8u);
    ctx->pc = 0x2496E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496E0u;
    // 0x2496e4: 0x24070800  addiu       $a3, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A7B8u, 0x2496E0u, 0x2496E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496E8u;
label_2496e8:
    // 0x2496e8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2496e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2496ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2496ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2496f0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2496f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2496f4:
    // 0x2496f4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2496f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2496f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2496f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2496fc: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x2496fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x249700: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x249700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x249704: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x249704u;
    {
        const bool branch_taken_0x249704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249704u;
        // 0x249708: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249704) {
            ctx->pc = 0x2496A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2496a0;
        }
    }
    ctx->pc = 0x24970Cu;
    // 0x24970c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249710: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x249710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x249714: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x249714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_249718:
    // 0x249718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24971c:
    // 0x24971c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24971cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249720: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249724: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x249724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249728: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x249728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24972c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24972cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x249730: 0x3e00008  jr          $ra
    ctx->pc = 0x249730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249730u;
        // 0x249734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249738u;
}
