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

// Function: sub_00286588
// Address: 0x286588 - 0x286728
void sub_00286588_0x286588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286588_0x286588");
#endif

    switch (ctx->pc) {
        case 0x2865ecu: goto label_2865ec;
        case 0x28661cu: goto label_28661c;
        case 0x286630u: goto label_286630;
        case 0x286698u: goto label_286698;
        case 0x2866a4u: goto label_2866a4;
        case 0x2866e8u: goto label_2866e8;
        case 0x2866f8u: goto label_2866f8;
        case 0x286708u: goto label_286708;
        default: break;
    }

    ctx->pc = 0x286588u;

    // 0x286588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28658c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x28658cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286590: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x286594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286598: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x286598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28659c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x28659cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2865a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2865a4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2865a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2865a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2865ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2865acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2865b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2865b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2865b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2865b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2865b8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2865B8u;
    {
        const bool branch_taken_0x2865b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2865BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865B8u;
        // 0x2865bc: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865b8) {
            ctx->pc = 0x286640u;
            goto label_286640;
        }
    }
    ctx->pc = 0x2865C0u;
    // 0x2865c0: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2865c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2865c4: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x2865c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x2865c8: 0x26105a08  addiu       $s0, $s0, 0x5A08
    ctx->pc = 0x2865c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23048));
    // 0x2865cc: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2865ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2865d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2865d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2865d4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2865d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865d8: 0x5c3021  addu        $a2, $v0, $gp
    ctx->pc = 0x2865d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2865dc: 0x8cc6b318  lw          $a2, -0x4CE8($a2)
    ctx->pc = 0x2865dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294947608)));
    // 0x2865e0: 0x24a53b90  addiu       $a1, $a1, 0x3B90
    ctx->pc = 0x2865e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15248));
    // 0x2865e4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2865E4u;
    SET_GPR_U32(ctx, 31, 0x2865ECu);
    ctx->pc = 0x2865E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865E4u;
    // 0x2865e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2865E4u, 0x2865ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865ECu;
label_2865ec:
    // 0x2865ec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2865ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2865f0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2865f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2865f4: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x2865f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
    // 0x2865f8: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2865f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x2865fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2865fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286600: 0x25295ee0  addiu       $t1, $t1, 0x5EE0
    ctx->pc = 0x286600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24288));
    // 0x286604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x286604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286608: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x286608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28660c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x28660cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286614: 0xc0d430c  jal         func_350C30
    ctx->pc = 0x286614u;
    SET_GPR_U32(ctx, 31, 0x28661Cu);
    ctx->pc = 0x286618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286614u;
    // 0x286618: 0x262a0034  addiu       $t2, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C30u, 0x286614u, 0x28661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28661Cu;
label_28661c:
    // 0x28661c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28661Cu;
    {
        const bool branch_taken_0x28661c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28661Cu;
        // 0x286620: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28661c) {
            ctx->pc = 0x286630u;
            goto label_286630;
        }
    }
    ctx->pc = 0x286624u;
    // 0x286624: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286628: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286628u;
    SET_GPR_U32(ctx, 31, 0x286630u);
    ctx->pc = 0x28662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286628u;
    // 0x28662c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286628u, 0x286630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286630u;
label_286630:
    // 0x286630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286634: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x286634u;
    {
        const bool branch_taken_0x286634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286634u;
        // 0x286638: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286634) {
            ctx->pc = 0x286708u;
            goto label_286708;
        }
    }
    ctx->pc = 0x28663Cu;
    // 0x28663c: 0x0  nop
    ctx->pc = 0x28663cu;
    // NOP
label_286640:
    // 0x286640: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x286640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x286644: 0x2842012d  slti        $v0, $v0, 0x12D
    ctx->pc = 0x286644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x286648: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x286648u;
    {
        const bool branch_taken_0x286648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286648) {
            ctx->pc = 0x28664Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286648u;
            // 0x28664c: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286678u;
            goto label_286678;
        }
    }
    ctx->pc = 0x286650u;
    // 0x286650: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x286650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x286654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28665c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28665cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286664: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x286664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286668: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x286668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28666c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x28666cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x286670: 0x80a17e2  j           func_285F88
    ctx->pc = 0x286670u;
    ctx->pc = 0x286674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286670u;
    // 0x286674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x286678u;
label_286678:
    // 0x286678: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28667c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286680: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x286680u;
    {
        const bool branch_taken_0x286680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286680u;
        // 0x286684: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286680) {
            ctx->pc = 0x28670Cu;
            goto label_28670c;
        }
    }
    ctx->pc = 0x286688u;
    // 0x286688: 0x460001d  bltz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x286688u;
    {
        const bool branch_taken_0x286688 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x286688) {
            ctx->pc = 0x286700u;
            goto label_286700;
        }
    }
    ctx->pc = 0x286690u;
    // 0x286690: 0xc0d3054  jal         func_34C150
    ctx->pc = 0x286690u;
    SET_GPR_U32(ctx, 31, 0x286698u);
    ctx->pc = 0x286694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286690u;
    // 0x286694: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C150u, 0x286690u, 0x286698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286698u;
label_286698:
    // 0x286698: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x286698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x28669c: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x28669Cu;
    SET_GPR_U32(ctx, 31, 0x2866A4u);
    ctx->pc = 0x2866A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28669Cu;
    // 0x2866a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x28669Cu, 0x2866A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2866A4u;
label_2866a4:
    // 0x2866a4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2866A4u;
    {
        const bool branch_taken_0x2866a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2866A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866A4u;
        // 0x2866a8: 0xae20003c  sw          $zero, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866a4) {
            ctx->pc = 0x2866D8u;
            goto label_2866d8;
        }
    }
    ctx->pc = 0x2866ACu;
    // 0x2866ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2866acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2866b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2866b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2866b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2866b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2866bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2866bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2866c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2866c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2866c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2866c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2866c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2866c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2866cc: 0x80a17e2  j           func_285F88
    ctx->pc = 0x2866CCu;
    ctx->pc = 0x2866D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866CCu;
    // 0x2866d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x2866D4u;
    // 0x2866d4: 0x0  nop
    ctx->pc = 0x2866d4u;
    // NOP
label_2866d8:
    // 0x2866d8: 0x1e000005  bgtz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2866D8u;
    {
        const bool branch_taken_0x2866d8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2866DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866D8u;
        // 0x2866dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866d8) {
            ctx->pc = 0x2866F0u;
            goto label_2866f0;
        }
    }
    ctx->pc = 0x2866E0u;
    // 0x2866e0: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2866E0u;
    SET_GPR_U32(ctx, 31, 0x2866E8u);
    ctx->pc = 0x2866E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866E0u;
    // 0x2866e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2866E0u, 0x2866E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2866E8u;
label_2866e8:
    // 0x2866e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2866E8u;
    {
        const bool branch_taken_0x2866e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2866ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866E8u;
        // 0x2866ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866e8) {
            ctx->pc = 0x28670Cu;
            goto label_28670c;
        }
    }
    ctx->pc = 0x2866F0u;
label_2866f0:
    // 0x2866f0: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2866F0u;
    SET_GPR_U32(ctx, 31, 0x2866F8u);
    ctx->pc = 0x2866F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866F0u;
    // 0x2866f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2866F0u, 0x2866F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2866F8u;
label_2866f8:
    // 0x2866f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2866F8u;
    {
        const bool branch_taken_0x2866f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2866FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866F8u;
        // 0x2866fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866f8) {
            ctx->pc = 0x28670Cu;
            goto label_28670c;
        }
    }
    ctx->pc = 0x286700u;
label_286700:
    // 0x286700: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286700u;
    SET_GPR_U32(ctx, 31, 0x286708u);
    ctx->pc = 0x286704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286700u;
    // 0x286704: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286700u, 0x286708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286708u;
label_286708:
    // 0x286708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28670c:
    // 0x28670c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28670cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286710: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286714: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x286714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286718: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x286718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28671c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x28671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x286720: 0x3e00008  jr          $ra
    ctx->pc = 0x286720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286720u;
        // 0x286724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286728u;
}
