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

// Function: sub_00122670
// Address: 0x122670 - 0x1227b0
void sub_00122670_0x122670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122670_0x122670");
#endif

    switch (ctx->pc) {
        case 0x122670u: goto label_122670;
        case 0x122674u: goto label_122674;
        case 0x122678u: goto label_122678;
        case 0x12267cu: goto label_12267c;
        case 0x122680u: goto label_122680;
        case 0x122684u: goto label_122684;
        case 0x122688u: goto label_122688;
        case 0x12268cu: goto label_12268c;
        case 0x122690u: goto label_122690;
        case 0x122694u: goto label_122694;
        case 0x122698u: goto label_122698;
        case 0x12269cu: goto label_12269c;
        case 0x1226a0u: goto label_1226a0;
        case 0x1226a4u: goto label_1226a4;
        case 0x1226a8u: goto label_1226a8;
        case 0x1226acu: goto label_1226ac;
        case 0x1226b0u: goto label_1226b0;
        case 0x1226b4u: goto label_1226b4;
        case 0x1226b8u: goto label_1226b8;
        case 0x1226bcu: goto label_1226bc;
        case 0x1226c0u: goto label_1226c0;
        case 0x1226c4u: goto label_1226c4;
        case 0x1226c8u: goto label_1226c8;
        case 0x1226ccu: goto label_1226cc;
        case 0x1226d0u: goto label_1226d0;
        case 0x1226d4u: goto label_1226d4;
        case 0x1226d8u: goto label_1226d8;
        case 0x1226dcu: goto label_1226dc;
        case 0x1226e0u: goto label_1226e0;
        case 0x1226e4u: goto label_1226e4;
        case 0x1226e8u: goto label_1226e8;
        case 0x1226ecu: goto label_1226ec;
        case 0x1226f0u: goto label_1226f0;
        case 0x1226f4u: goto label_1226f4;
        case 0x1226f8u: goto label_1226f8;
        case 0x1226fcu: goto label_1226fc;
        case 0x122700u: goto label_122700;
        case 0x122704u: goto label_122704;
        case 0x122708u: goto label_122708;
        case 0x12270cu: goto label_12270c;
        case 0x122710u: goto label_122710;
        case 0x122714u: goto label_122714;
        case 0x122718u: goto label_122718;
        case 0x12271cu: goto label_12271c;
        case 0x122720u: goto label_122720;
        case 0x122724u: goto label_122724;
        case 0x122728u: goto label_122728;
        case 0x12272cu: goto label_12272c;
        case 0x122730u: goto label_122730;
        case 0x122734u: goto label_122734;
        case 0x122738u: goto label_122738;
        case 0x12273cu: goto label_12273c;
        case 0x122740u: goto label_122740;
        case 0x122744u: goto label_122744;
        case 0x122748u: goto label_122748;
        case 0x12274cu: goto label_12274c;
        case 0x122750u: goto label_122750;
        case 0x122754u: goto label_122754;
        case 0x122758u: goto label_122758;
        case 0x12275cu: goto label_12275c;
        case 0x122760u: goto label_122760;
        case 0x122764u: goto label_122764;
        case 0x122768u: goto label_122768;
        case 0x12276cu: goto label_12276c;
        case 0x122770u: goto label_122770;
        case 0x122774u: goto label_122774;
        case 0x122778u: goto label_122778;
        case 0x12277cu: goto label_12277c;
        case 0x122780u: goto label_122780;
        case 0x122784u: goto label_122784;
        case 0x122788u: goto label_122788;
        case 0x12278cu: goto label_12278c;
        case 0x122790u: goto label_122790;
        case 0x122794u: goto label_122794;
        case 0x122798u: goto label_122798;
        case 0x12279cu: goto label_12279c;
        case 0x1227a0u: goto label_1227a0;
        case 0x1227a4u: goto label_1227a4;
        case 0x1227a8u: goto label_1227a8;
        case 0x1227acu: goto label_1227ac;
        default: break;
    }

    ctx->pc = 0x122670u;

label_122670:
    // 0x122670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_122674:
    // 0x122674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122678:
    // 0x122678: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x122678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_12267c:
    // 0x12267c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12267cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122680:
    // 0x122680: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x122680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_122684:
    // 0x122684: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x122684u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_122688:
    // 0x122688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12268c:
    // 0x12268c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12268cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122690:
    // 0x122690: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_122694:
    // 0x122694: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x122694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122698:
    // 0x122698: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x122698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12269c:
    // 0x12269c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12269cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1226a0:
    // 0x1226a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1226a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1226a4:
    // 0x1226a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1226a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1226a8:
    // 0x1226a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1226a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1226ac:
    // 0x1226ac: 0x12800034  beqz        $s4, . + 4 + (0x34 << 2)
label_1226b0:
    if (ctx->pc == 0x1226B0u) {
        ctx->pc = 0x1226B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226ACu;
        // 0x1226b0: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1226B4u;
        goto label_1226b4;
    }
    ctx->pc = 0x1226ACu;
    {
        const bool branch_taken_0x1226ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226ACu;
        // 0x1226b0: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226ac) {
            ctx->pc = 0x122780u;
            goto label_122780;
        }
    }
    ctx->pc = 0x1226B4u;
label_1226b4:
    // 0x1226b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1226b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1226b8:
    // 0x1226b8: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_1226bc:
    if (ctx->pc == 0x1226BCu) {
        ctx->pc = 0x1226BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226B8u;
        // 0x1226bc: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1226C0u;
        goto label_1226c0;
    }
    ctx->pc = 0x1226B8u;
    {
        const bool branch_taken_0x1226b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226B8u;
        // 0x1226bc: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226b8) {
            ctx->pc = 0x1226F0u;
            goto label_1226f0;
        }
    }
    ctx->pc = 0x1226C0u;
label_1226c0:
    // 0x1226c0: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x1226c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1226c4:
    // 0x1226c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1226c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1226c8:
    // 0x1226c8: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1226c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1226cc:
    // 0x1226cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1226ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1226d0:
    // 0x1226d0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1226d4:
    // 0x1226d4: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1226d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1226d8:
    // 0x1226d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1226d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1226dc:
    // 0x1226dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1226dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1226e0:
    // 0x1226e0: 0x10640027  beq         $v1, $a0, . + 4 + (0x27 << 2)
label_1226e4:
    if (ctx->pc == 0x1226E4u) {
        ctx->pc = 0x1226E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226E0u;
        // 0x1226e4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1226E8u;
        goto label_1226e8;
    }
    ctx->pc = 0x1226E0u;
    {
        const bool branch_taken_0x1226e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1226E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226E0u;
        // 0x1226e4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226e0) {
            ctx->pc = 0x122780u;
            goto label_122780;
        }
    }
    ctx->pc = 0x1226E8u;
label_1226e8:
    // 0x1226e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1226ec:
    if (ctx->pc == 0x1226ECu) {
        ctx->pc = 0x1226ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226E8u;
        // 0x1226ec: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1226F0u;
        goto label_1226f0;
    }
    ctx->pc = 0x1226E8u;
    {
        const bool branch_taken_0x1226e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226E8u;
        // 0x1226ec: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226e8) {
            ctx->pc = 0x1226FCu;
            goto label_1226fc;
        }
    }
    ctx->pc = 0x1226F0u;
label_1226f0:
    // 0x1226f0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1226f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1226f4:
    // 0x1226f4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1226f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1226f8:
    // 0x1226f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1226f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1226fc:
    // 0x1226fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1226fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_122700:
    // 0x122700: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x122700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_122704:
    // 0x122704: 0x1064001e  beq         $v1, $a0, . + 4 + (0x1E << 2)
label_122708:
    if (ctx->pc == 0x122708u) {
        ctx->pc = 0x122708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122704u;
        // 0x122708: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12270Cu;
        goto label_12270c;
    }
    ctx->pc = 0x122704u;
    {
        const bool branch_taken_0x122704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x122708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122704u;
        // 0x122708: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122704) {
            ctx->pc = 0x122780u;
            goto label_122780;
        }
    }
    ctx->pc = 0x12270Cu;
label_12270c:
    // 0x12270c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x12270cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122710:
    // 0x122710: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x122710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122714:
    // 0x122714: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x122714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_122718:
    // 0x122718: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_12271c:
    if (ctx->pc == 0x12271Cu) {
        ctx->pc = 0x12271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122718u;
        // 0x12271c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122720u;
        goto label_122720;
    }
    ctx->pc = 0x122718u;
    {
        const bool branch_taken_0x122718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122718) {
            ctx->pc = 0x12271Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122718u;
            // 0x12271c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122774u;
            goto label_122774;
        }
    }
    ctx->pc = 0x122720u;
label_122720:
    // 0x122720: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x122720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_122724:
    // 0x122724: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x122724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_122728:
    // 0x122728: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_12272c:
    if (ctx->pc == 0x12272Cu) {
        ctx->pc = 0x12272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122728u;
        // 0x12272c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122730u;
        goto label_122730;
    }
    ctx->pc = 0x122728u;
    {
        const bool branch_taken_0x122728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122728) {
            ctx->pc = 0x12272Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122728u;
            // 0x12272c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122774u;
            goto label_122774;
        }
    }
    ctx->pc = 0x122730u;
label_122730:
    // 0x122730: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x122730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_122734:
    // 0x122734: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_122738:
    if (ctx->pc == 0x122738u) {
        ctx->pc = 0x12273Cu;
        goto label_12273c;
    }
    ctx->pc = 0x122734u;
    {
        const bool branch_taken_0x122734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x122734) {
            ctx->pc = 0x122768u;
            goto label_122768;
        }
    }
    ctx->pc = 0x12273Cu;
label_12273c:
    // 0x12273c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_122740:
    // 0x122740: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_122744:
    if (ctx->pc == 0x122744u) {
        ctx->pc = 0x122744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122740u;
        // 0x122744: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122748u;
        goto label_122748;
    }
    ctx->pc = 0x122740u;
    {
        const bool branch_taken_0x122740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122740u;
        // 0x122744: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122740) {
            ctx->pc = 0x122770u;
            goto label_122770;
        }
    }
    ctx->pc = 0x122748u;
label_122748:
    // 0x122748: 0x40f809  jalr        $v0
label_12274c:
    if (ctx->pc == 0x12274Cu) {
        ctx->pc = 0x12274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122748u;
        // 0x12274c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122750u;
        goto label_122750;
    }
    ctx->pc = 0x122748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122750u);
        ctx->pc = 0x12274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122748u;
        // 0x12274c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122748u, 0x122750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122750u;
label_122750:
    // 0x122750: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_122754:
    if (ctx->pc == 0x122754u) {
        ctx->pc = 0x122754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122750u;
        // 0x122754: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122758u;
        goto label_122758;
    }
    ctx->pc = 0x122750u;
    {
        const bool branch_taken_0x122750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122750) {
            ctx->pc = 0x122754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122750u;
            // 0x122754: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122774u;
            goto label_122774;
        }
    }
    ctx->pc = 0x122758u;
label_122758:
    // 0x122758: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_12275c:
    if (ctx->pc == 0x12275Cu) {
        ctx->pc = 0x12275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122758u;
        // 0x12275c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122760u;
        goto label_122760;
    }
    ctx->pc = 0x122758u;
    {
        const bool branch_taken_0x122758 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x122758) {
            ctx->pc = 0x12275Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122758u;
            // 0x12275c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122760u;
            goto label_122760;
        }
    }
    ctx->pc = 0x122760u;
label_122760:
    // 0x122760: 0x10000007  b           . + 4 + (0x7 << 2)
label_122764:
    if (ctx->pc == 0x122764u) {
        ctx->pc = 0x122764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122760u;
        // 0x122764: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122768u;
        goto label_122768;
    }
    ctx->pc = 0x122760u;
    {
        const bool branch_taken_0x122760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122760u;
        // 0x122764: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122760) {
            ctx->pc = 0x122780u;
            goto label_122780;
        }
    }
    ctx->pc = 0x122768u;
label_122768:
    // 0x122768: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_12276c:
    if (ctx->pc == 0x12276Cu) {
        ctx->pc = 0x12276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122768u;
        // 0x12276c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122770u;
        goto label_122770;
    }
    ctx->pc = 0x122768u;
    {
        const bool branch_taken_0x122768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x122768) {
            ctx->pc = 0x12276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122768u;
            // 0x12276c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122770u;
            goto label_122770;
        }
    }
    ctx->pc = 0x122770u;
label_122770:
    // 0x122770: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x122770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_122774:
    // 0x122774: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x122774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122778:
    // 0x122778: 0x1455ffe7  bne         $v0, $s5, . + 4 + (-0x19 << 2)
label_12277c:
    if (ctx->pc == 0x12277Cu) {
        ctx->pc = 0x12277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122778u;
        // 0x12277c: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122780u;
        goto label_122780;
    }
    ctx->pc = 0x122778u;
    {
        const bool branch_taken_0x122778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x12277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122778u;
        // 0x12277c: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122778) {
            ctx->pc = 0x122718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122718;
        }
    }
    ctx->pc = 0x122780u;
label_122780:
    // 0x122780: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x122780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_122784:
    // 0x122784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122788:
    // 0x122788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12278c:
    // 0x12278c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12278cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_122790:
    // 0x122790: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x122790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_122794:
    // 0x122794: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x122794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_122798:
    // 0x122798: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x122798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12279c:
    // 0x12279c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12279cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1227a0:
    // 0x1227a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1227a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1227a4:
    // 0x1227a4: 0x3e00008  jr          $ra
label_1227a8:
    if (ctx->pc == 0x1227A8u) {
        ctx->pc = 0x1227A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227A4u;
        // 0x1227a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1227ACu;
        goto label_1227ac;
    }
    ctx->pc = 0x1227A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1227A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227A4u;
        // 0x1227a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1227A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1227ACu;
label_1227ac:
    // 0x1227ac: 0x0  nop
    ctx->pc = 0x1227acu;
    // NOP
    ctx->pc = 0x1227b0u;
}
