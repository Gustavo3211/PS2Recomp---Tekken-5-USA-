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

// Function: sub_00224758
// Address: 0x224758 - 0x2248a8
void sub_00224758_0x224758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224758_0x224758");
#endif

    switch (ctx->pc) {
        case 0x224780u: goto label_224780;
        case 0x2247a8u: goto label_2247a8;
        case 0x224828u: goto label_224828;
        case 0x224878u: goto label_224878;
        default: break;
    }

    ctx->pc = 0x224758u;

    // 0x224758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22475c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224764: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224768: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x224768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22476c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x224770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x224774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x224778: 0xc089192  jal         func_224648
    ctx->pc = 0x224778u;
    SET_GPR_U32(ctx, 31, 0x224780u);
    ctx->pc = 0x22477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224778u;
    // 0x22477c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224648u, 0x224778u, 0x224780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224780u;
label_224780:
    // 0x224780: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x224780u;
    {
        const bool branch_taken_0x224780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224780u;
        // 0x224784: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224780) {
            ctx->pc = 0x2247C8u;
            goto label_2247c8;
        }
    }
    ctx->pc = 0x224788u;
    // 0x224788: 0x8e220800  lw          $v0, 0x800($s1)
    ctx->pc = 0x224788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x22478c: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x22478cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x224790: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x224790u;
    {
        const bool branch_taken_0x224790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224790) {
            ctx->pc = 0x224794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224790u;
            // 0x224794: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2247CCu;
            goto label_2247cc;
        }
    }
    ctx->pc = 0x224798u;
    // 0x224798: 0x8e3007f8  lw          $s0, 0x7F8($s1)
    ctx->pc = 0x224798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2040)));
    // 0x22479c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22479cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2247a0: 0xc08918e  jal         func_224638
    ctx->pc = 0x2247A0u;
    SET_GPR_U32(ctx, 31, 0x2247A8u);
    ctx->pc = 0x2247A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247A0u;
    // 0x2247a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224638u, 0x2247A0u, 0x2247A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247A8u;
label_2247a8:
    // 0x2247a8: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x2247a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x2247ac: 0x8e220800  lw          $v0, 0x800($s1)
    ctx->pc = 0x2247acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x2247b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2247b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2247b4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2247b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2247b8: 0xae220800  sw          $v0, 0x800($s1)
    ctx->pc = 0x2247b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 2));
    // 0x2247bc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2247bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2247c0: 0xae2307f8  sw          $v1, 0x7F8($s1)
    ctx->pc = 0x2247c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2040), GPR_U32(ctx, 3));
    // 0x2247c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2247c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2247c8:
    // 0x2247c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2247c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2247cc:
    // 0x2247cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2247ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2247d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2247d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2247d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2247d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2247d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2247D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2247DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247D8u;
        // 0x2247dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2247D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2247E0u;
    // 0x2247e0: 0x8c830800  lw          $v1, 0x800($a0)
    ctx->pc = 0x2247e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2048)));
    // 0x2247e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2247e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2247e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2247e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2247ec: 0xac830800  sw          $v1, 0x800($a0)
    ctx->pc = 0x2247ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2048), GPR_U32(ctx, 3));
    // 0x2247f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2247f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2247f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2247F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2247F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247F4u;
        // 0x2247f8: 0xac8207f8  sw          $v0, 0x7F8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2247F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2247FCu;
    // 0x2247fc: 0x0  nop
    ctx->pc = 0x2247fcu;
    // NOP
    // 0x224800: 0x8c8607f8  lw          $a2, 0x7F8($a0)
    ctx->pc = 0x224800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2040)));
    // 0x224804: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224808: 0x10860010  beq         $a0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x224808u;
    {
        const bool branch_taken_0x224808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x22480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224808u;
        // 0x22480c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224808) {
            ctx->pc = 0x22484Cu;
            goto label_22484c;
        }
    }
    ctx->pc = 0x224810u;
    // 0x224810: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x224810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x224814: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x224814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x224818: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x224818u;
    {
        const bool branch_taken_0x224818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224818u;
        // 0x22481c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224818) {
            ctx->pc = 0x224850u;
            goto label_224850;
        }
    }
    ctx->pc = 0x224820u;
    // 0x224820: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x224820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224824: 0x0  nop
    ctx->pc = 0x224824u;
    // NOP
label_224828:
    // 0x224828: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x224828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22482c: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22482Cu;
    {
        const bool branch_taken_0x22482c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x224830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22482Cu;
        // 0x224830: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22482c) {
            ctx->pc = 0x22484Cu;
            goto label_22484c;
        }
    }
    ctx->pc = 0x224834u;
    // 0x224834: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x224834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224838: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x224838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x22483c: 0x0  nop
    ctx->pc = 0x22483cu;
    // NOP
    // 0x224840: 0x0  nop
    ctx->pc = 0x224840u;
    // NOP
    // 0x224844: 0x1465fff8  bne         $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x224844u;
    {
        const bool branch_taken_0x224844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x224848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224844u;
        // 0x224848: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224844) {
            ctx->pc = 0x224828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224828;
        }
    }
    ctx->pc = 0x22484Cu;
label_22484c:
    // 0x22484c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_224850:
    // 0x224850: 0x3e00008  jr          $ra
    ctx->pc = 0x224850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224850u;
        // 0x224854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224858u;
    // 0x224858: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x224858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22485c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x22485cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224860: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x224860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x224864: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x224864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x224868: 0x8d0307f8  lw          $v1, 0x7F8($t0)
    ctx->pc = 0x224868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2040)));
    // 0x22486c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22486Cu;
    {
        const bool branch_taken_0x22486c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22486c) {
            ctx->pc = 0x22489Cu;
            goto label_22489c;
        }
    }
    ctx->pc = 0x224874u;
    // 0x224874: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x224874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_224878:
    // 0x224878: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x224878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22487c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x22487cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x224880: 0x10c40006  beq         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x224880u;
    {
        const bool branch_taken_0x224880 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x224884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224880u;
        // 0x224884: 0x24470008  addiu       $a3, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224880) {
            ctx->pc = 0x22489Cu;
            goto label_22489c;
        }
    }
    ctx->pc = 0x224888u;
    // 0x224888: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x224888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x22488c: 0x8d0207f8  lw          $v0, 0x7F8($t0)
    ctx->pc = 0x22488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2040)));
    // 0x224890: 0x0  nop
    ctx->pc = 0x224890u;
    // NOP
    // 0x224894: 0x54e2fff8  bnel        $a3, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x224894u;
    {
        const bool branch_taken_0x224894 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x224894) {
            ctx->pc = 0x224898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224894u;
            // 0x224898: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224878;
        }
    }
    ctx->pc = 0x22489Cu;
label_22489c:
    // 0x22489c: 0x3e00008  jr          $ra
    ctx->pc = 0x22489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22489Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2248A4u;
    // 0x2248a4: 0x0  nop
    ctx->pc = 0x2248a4u;
    // NOP
    ctx->pc = 0x2248a8u;
}
