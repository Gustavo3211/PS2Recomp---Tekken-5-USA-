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

// Function: sub_002A2760
// Address: 0x2a2760 - 0x2a28e0
void sub_002A2760_0x2a2760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2760_0x2a2760");
#endif

    switch (ctx->pc) {
        case 0x2a2788u: goto label_2a2788;
        case 0x2a2810u: goto label_2a2810;
        case 0x2a282cu: goto label_2a282c;
        case 0x2a2878u: goto label_2a2878;
        case 0x2a28acu: goto label_2a28ac;
        default: break;
    }

    ctx->pc = 0x2a2760u;

    // 0x2a2760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2764: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a2764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a2768: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a2768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a276c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a2770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a2774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a2774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a2778: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a2778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a277c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2a277cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2a2780: 0x8c91016c  lw          $s1, 0x16C($a0)
    ctx->pc = 0x2a2780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x2a2784: 0x0  nop
    ctx->pc = 0x2a2784u;
    // NOP
label_2a2788:
    // 0x2a2788: 0x82220020  lb          $v0, 0x20($s1)
    ctx->pc = 0x2a2788u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2a278c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a2790: 0x2c430010  sltiu       $v1, $v0, 0x10
    ctx->pc = 0x2a2790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a2794: 0x50600046  beql        $v1, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x2A2794u;
    {
        const bool branch_taken_0x2a2794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2794) {
            ctx->pc = 0x2A2798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2794u;
            // 0x2a2798: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A28B0u;
            goto label_2a28b0;
        }
    }
    ctx->pc = 0x2A279Cu;
    // 0x2a279c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a279cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a27a0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a27a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a27a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a27a8: 0x8c63d100  lw          $v1, -0x2F00($v1)
    ctx->pc = 0x2a27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955264)));
    // 0x2a27ac: 0x600008  jr          $v1
    ctx->pc = 0x2A27ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A27B8u: goto label_2a27b8;
            case 0x2A27E8u: goto label_2a27e8;
            case 0x2A2800u: goto label_2a2800;
            case 0x2A2880u: goto label_2a2880;
            case 0x2A28ACu: goto label_2a28ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A27ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A27B4u;
    // 0x2a27b4: 0x0  nop
    ctx->pc = 0x2a27b4u;
    // NOP
label_2a27b8:
    // 0x2a27b8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2a27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2a27bc: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2a27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2a27c0: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2a27c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2a27c4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2a27c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a27c8: 0x8d29ccc0  lw          $t1, -0x3340($t1)
    ctx->pc = 0x2a27c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954176)));
    // 0x2a27cc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a27ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a27d0: 0x2484d050  addiu       $a0, $a0, -0x2FB0
    ctx->pc = 0x2a27d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955088));
    // 0x2a27d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a27d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a27d8: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x2a27d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2a27dc: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a27dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a27e0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2A27E0u;
    {
        const bool branch_taken_0x2a27e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27E0u;
        // 0x2a27e4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27e0) {
            ctx->pc = 0x2A286Cu;
            goto label_2a286c;
        }
    }
    ctx->pc = 0x2A27E8u;
label_2a27e8:
    // 0x2a27e8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2a27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2a27ec: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2a27ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2a27f0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2a27f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a27f4: 0x8d29ccb0  lw          $t1, -0x3350($t1)
    ctx->pc = 0x2a27f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954160)));
    // 0x2a27f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A27F8u;
    {
        const bool branch_taken_0x2a27f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27F8u;
        // 0x2a27fc: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27f8) {
            ctx->pc = 0x2A2860u;
            goto label_2a2860;
        }
    }
    ctx->pc = 0x2A2800u;
label_2a2800:
    // 0x2a2800: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a2800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a2804: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a2804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2808: 0x2453c9a8  addiu       $s3, $v0, -0x3658
    ctx->pc = 0x2a2808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953384));
    // 0x2a280c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2a280cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2a2810:
    // 0x2a2810: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2a2810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2a2814: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2a2814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a2818: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A2818u;
    {
        const bool branch_taken_0x2a2818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2818u;
        // 0x2a281c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2818) {
            ctx->pc = 0x2A2848u;
            goto label_2a2848;
        }
    }
    ctx->pc = 0x2A2820u;
    // 0x2a2820: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a2820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a2824: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2A2824u;
    SET_GPR_U32(ctx, 31, 0x2A282Cu);
    ctx->pc = 0x2A2828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2824u;
    // 0x2a2828: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2A2824u, 0x2A282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A282Cu;
label_2a282c:
    // 0x2a282c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a282cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a2830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a2830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a2834: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2a2834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a2838: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a2838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a283c: 0x5483fff4  bnel        $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A283Cu;
    {
        const bool branch_taken_0x2a283c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a283c) {
            ctx->pc = 0x2A2840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A283Cu;
            // 0x2a2840: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2810;
        }
    }
    ctx->pc = 0x2A2844u;
    // 0x2a2844: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2a2844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2a2848:
    // 0x2a2848: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A2848u;
    {
        const bool branch_taken_0x2a2848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2848u;
        // 0x2a284c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2848) {
            ctx->pc = 0x2A2880u;
            goto label_2a2880;
        }
    }
    ctx->pc = 0x2A2850u;
    // 0x2a2850: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a2850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a2854: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2a2854u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2a2858: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2a2858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a285c: 0x8d29ccb8  lw          $t1, -0x3348($t1)
    ctx->pc = 0x2a285cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954168)));
label_2a2860:
    // 0x2a2860: 0x2484d050  addiu       $a0, $a0, -0x2FB0
    ctx->pc = 0x2a2860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955088));
    // 0x2a2864: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2868: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a2868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a286c:
    // 0x2a286c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a286cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2870: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A2870u;
    SET_GPR_U32(ctx, 31, 0x2A2878u);
    ctx->pc = 0x2A2874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2870u;
    // 0x2a2874: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2870u, 0x2A2878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2878u;
label_2a2878:
    // 0x2a2878: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A2878u;
    {
        const bool branch_taken_0x2a2878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2878u;
        // 0x2a287c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2878) {
            ctx->pc = 0x2A28B0u;
            goto label_2a28b0;
        }
    }
    ctx->pc = 0x2A2880u;
label_2a2880:
    // 0x2a2880: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2a2880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2a2884: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a2884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a2888: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2a2888u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2a288c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2a288cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a2890: 0x8d29cca8  lw          $t1, -0x3358($t1)
    ctx->pc = 0x2a2890u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954152)));
    // 0x2a2894: 0x2484d050  addiu       $a0, $a0, -0x2FB0
    ctx->pc = 0x2a2894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955088));
    // 0x2a2898: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a289c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a289cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a28a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a28a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28a4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A28A4u;
    SET_GPR_U32(ctx, 31, 0x2A28ACu);
    ctx->pc = 0x2A28A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28A4u;
    // 0x2a28a8: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A28A4u, 0x2A28ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28ACu;
label_2a28ac:
    // 0x2a28ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a28acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2a28b0:
    // 0x2a28b0: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2a28b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a28b4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2A28B4u;
    {
        const bool branch_taken_0x2a28b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28B4u;
        // 0x2a28b8: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28b4) {
            ctx->pc = 0x2A2788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2788;
        }
    }
    ctx->pc = 0x2A28BCu;
    // 0x2a28bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a28bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a28c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a28c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a28c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a28c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a28c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a28c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a28cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a28ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a28d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a28d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a28d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A28D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28D4u;
        // 0x2a28d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A28D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A28DCu;
    // 0x2a28dc: 0x0  nop
    ctx->pc = 0x2a28dcu;
    // NOP
    ctx->pc = 0x2a28e0u;
}
