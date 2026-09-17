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

// Function: sub_00337718
// Address: 0x337718 - 0x337a08
void sub_00337718_0x337718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337718_0x337718");
#endif

    switch (ctx->pc) {
        case 0x337718u: goto label_337718;
        case 0x33771cu: goto label_33771c;
        case 0x337720u: goto label_337720;
        case 0x337724u: goto label_337724;
        case 0x337728u: goto label_337728;
        case 0x33772cu: goto label_33772c;
        case 0x337730u: goto label_337730;
        case 0x337734u: goto label_337734;
        case 0x337738u: goto label_337738;
        case 0x33773cu: goto label_33773c;
        case 0x337740u: goto label_337740;
        case 0x337744u: goto label_337744;
        case 0x337748u: goto label_337748;
        case 0x33774cu: goto label_33774c;
        case 0x337750u: goto label_337750;
        case 0x337754u: goto label_337754;
        case 0x337758u: goto label_337758;
        case 0x33775cu: goto label_33775c;
        case 0x337760u: goto label_337760;
        case 0x337764u: goto label_337764;
        case 0x337768u: goto label_337768;
        case 0x33776cu: goto label_33776c;
        case 0x337770u: goto label_337770;
        case 0x337774u: goto label_337774;
        case 0x337778u: goto label_337778;
        case 0x33777cu: goto label_33777c;
        case 0x337780u: goto label_337780;
        case 0x337784u: goto label_337784;
        case 0x337788u: goto label_337788;
        case 0x33778cu: goto label_33778c;
        case 0x337790u: goto label_337790;
        case 0x337794u: goto label_337794;
        case 0x337798u: goto label_337798;
        case 0x33779cu: goto label_33779c;
        case 0x3377a0u: goto label_3377a0;
        case 0x3377a4u: goto label_3377a4;
        case 0x3377a8u: goto label_3377a8;
        case 0x3377acu: goto label_3377ac;
        case 0x3377b0u: goto label_3377b0;
        case 0x3377b4u: goto label_3377b4;
        case 0x3377b8u: goto label_3377b8;
        case 0x3377bcu: goto label_3377bc;
        case 0x3377c0u: goto label_3377c0;
        case 0x3377c4u: goto label_3377c4;
        case 0x3377c8u: goto label_3377c8;
        case 0x3377ccu: goto label_3377cc;
        case 0x3377d0u: goto label_3377d0;
        case 0x3377d4u: goto label_3377d4;
        case 0x3377d8u: goto label_3377d8;
        case 0x3377dcu: goto label_3377dc;
        case 0x3377e0u: goto label_3377e0;
        case 0x3377e4u: goto label_3377e4;
        case 0x3377e8u: goto label_3377e8;
        case 0x3377ecu: goto label_3377ec;
        case 0x3377f0u: goto label_3377f0;
        case 0x3377f4u: goto label_3377f4;
        case 0x3377f8u: goto label_3377f8;
        case 0x3377fcu: goto label_3377fc;
        case 0x337800u: goto label_337800;
        case 0x337804u: goto label_337804;
        case 0x337808u: goto label_337808;
        case 0x33780cu: goto label_33780c;
        case 0x337810u: goto label_337810;
        case 0x337814u: goto label_337814;
        case 0x337818u: goto label_337818;
        case 0x33781cu: goto label_33781c;
        case 0x337820u: goto label_337820;
        case 0x337824u: goto label_337824;
        case 0x337828u: goto label_337828;
        case 0x33782cu: goto label_33782c;
        case 0x337830u: goto label_337830;
        case 0x337834u: goto label_337834;
        case 0x337838u: goto label_337838;
        case 0x33783cu: goto label_33783c;
        case 0x337840u: goto label_337840;
        case 0x337844u: goto label_337844;
        case 0x337848u: goto label_337848;
        case 0x33784cu: goto label_33784c;
        case 0x337850u: goto label_337850;
        case 0x337854u: goto label_337854;
        case 0x337858u: goto label_337858;
        case 0x33785cu: goto label_33785c;
        case 0x337860u: goto label_337860;
        case 0x337864u: goto label_337864;
        case 0x337868u: goto label_337868;
        case 0x33786cu: goto label_33786c;
        case 0x337870u: goto label_337870;
        case 0x337874u: goto label_337874;
        case 0x337878u: goto label_337878;
        case 0x33787cu: goto label_33787c;
        case 0x337880u: goto label_337880;
        case 0x337884u: goto label_337884;
        case 0x337888u: goto label_337888;
        case 0x33788cu: goto label_33788c;
        case 0x337890u: goto label_337890;
        case 0x337894u: goto label_337894;
        case 0x337898u: goto label_337898;
        case 0x33789cu: goto label_33789c;
        case 0x3378a0u: goto label_3378a0;
        case 0x3378a4u: goto label_3378a4;
        case 0x3378a8u: goto label_3378a8;
        case 0x3378acu: goto label_3378ac;
        case 0x3378b0u: goto label_3378b0;
        case 0x3378b4u: goto label_3378b4;
        case 0x3378b8u: goto label_3378b8;
        case 0x3378bcu: goto label_3378bc;
        case 0x3378c0u: goto label_3378c0;
        case 0x3378c4u: goto label_3378c4;
        case 0x3378c8u: goto label_3378c8;
        case 0x3378ccu: goto label_3378cc;
        case 0x3378d0u: goto label_3378d0;
        case 0x3378d4u: goto label_3378d4;
        case 0x3378d8u: goto label_3378d8;
        case 0x3378dcu: goto label_3378dc;
        case 0x3378e0u: goto label_3378e0;
        case 0x3378e4u: goto label_3378e4;
        case 0x3378e8u: goto label_3378e8;
        case 0x3378ecu: goto label_3378ec;
        case 0x3378f0u: goto label_3378f0;
        case 0x3378f4u: goto label_3378f4;
        case 0x3378f8u: goto label_3378f8;
        case 0x3378fcu: goto label_3378fc;
        case 0x337900u: goto label_337900;
        case 0x337904u: goto label_337904;
        case 0x337908u: goto label_337908;
        case 0x33790cu: goto label_33790c;
        case 0x337910u: goto label_337910;
        case 0x337914u: goto label_337914;
        case 0x337918u: goto label_337918;
        case 0x33791cu: goto label_33791c;
        case 0x337920u: goto label_337920;
        case 0x337924u: goto label_337924;
        case 0x337928u: goto label_337928;
        case 0x33792cu: goto label_33792c;
        case 0x337930u: goto label_337930;
        case 0x337934u: goto label_337934;
        case 0x337938u: goto label_337938;
        case 0x33793cu: goto label_33793c;
        case 0x337940u: goto label_337940;
        case 0x337944u: goto label_337944;
        case 0x337948u: goto label_337948;
        case 0x33794cu: goto label_33794c;
        case 0x337950u: goto label_337950;
        case 0x337954u: goto label_337954;
        case 0x337958u: goto label_337958;
        case 0x33795cu: goto label_33795c;
        case 0x337960u: goto label_337960;
        case 0x337964u: goto label_337964;
        case 0x337968u: goto label_337968;
        case 0x33796cu: goto label_33796c;
        case 0x337970u: goto label_337970;
        case 0x337974u: goto label_337974;
        case 0x337978u: goto label_337978;
        case 0x33797cu: goto label_33797c;
        case 0x337980u: goto label_337980;
        case 0x337984u: goto label_337984;
        case 0x337988u: goto label_337988;
        case 0x33798cu: goto label_33798c;
        case 0x337990u: goto label_337990;
        case 0x337994u: goto label_337994;
        case 0x337998u: goto label_337998;
        case 0x33799cu: goto label_33799c;
        case 0x3379a0u: goto label_3379a0;
        case 0x3379a4u: goto label_3379a4;
        case 0x3379a8u: goto label_3379a8;
        case 0x3379acu: goto label_3379ac;
        case 0x3379b0u: goto label_3379b0;
        case 0x3379b4u: goto label_3379b4;
        case 0x3379b8u: goto label_3379b8;
        case 0x3379bcu: goto label_3379bc;
        case 0x3379c0u: goto label_3379c0;
        case 0x3379c4u: goto label_3379c4;
        case 0x3379c8u: goto label_3379c8;
        case 0x3379ccu: goto label_3379cc;
        case 0x3379d0u: goto label_3379d0;
        case 0x3379d4u: goto label_3379d4;
        case 0x3379d8u: goto label_3379d8;
        case 0x3379dcu: goto label_3379dc;
        case 0x3379e0u: goto label_3379e0;
        case 0x3379e4u: goto label_3379e4;
        case 0x3379e8u: goto label_3379e8;
        case 0x3379ecu: goto label_3379ec;
        case 0x3379f0u: goto label_3379f0;
        case 0x3379f4u: goto label_3379f4;
        case 0x3379f8u: goto label_3379f8;
        case 0x3379fcu: goto label_3379fc;
        case 0x337a00u: goto label_337a00;
        case 0x337a04u: goto label_337a04;
        default: break;
    }

    ctx->pc = 0x337718u;

label_337718:
    // 0x337718: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x337718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33771c:
    // 0x33771c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x33771cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_337720:
    // 0x337720: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x337720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_337724:
    // 0x337724: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x337724u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_337728:
    // 0x337728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33772c:
    // 0x33772c: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x33772cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
label_337730:
    // 0x337730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_337734:
    // 0x337734: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x337734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_337738:
    // 0x337738: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x337738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33773c:
    // 0x33773c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_337740:
    // 0x337740: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x337740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_337744:
    // 0x337744: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x337744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_337748:
    // 0x337748: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x337748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_33774c:
    // 0x33774c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x33774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_337750:
    // 0x337750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x337750u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000810
label_337754:
    // 0x337754: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x337754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_337758:
    // 0x337758: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_33775c:
    if (ctx->pc == 0x33775Cu) {
        ctx->pc = 0x33775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337758u;
        // 0x33775c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337760u;
        goto label_337760;
    }
    ctx->pc = 0x337758u;
    {
        const bool branch_taken_0x337758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337758u;
        // 0x33775c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337758) {
            ctx->pc = 0x337910u;
            goto label_337910;
        }
    }
    ctx->pc = 0x337760u;
label_337760:
    // 0x337760: 0x24460a60  addiu       $a2, $v0, 0xA60
    ctx->pc = 0x337760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2656));
label_337764:
    // 0x337764: 0x8cd00018  lw          $s0, 0x18($a2)
    ctx->pc = 0x337764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_337768:
    // 0x337768: 0x1200006a  beqz        $s0, . + 4 + (0x6A << 2)
label_33776c:
    if (ctx->pc == 0x33776Cu) {
        ctx->pc = 0x33776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337768u;
        // 0x33776c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337770u;
        goto label_337770;
    }
    ctx->pc = 0x337768u;
    {
        const bool branch_taken_0x337768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337768u;
        // 0x33776c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337768) {
            ctx->pc = 0x337914u;
            goto label_337914;
        }
    }
    ctx->pc = 0x337770u;
label_337770:
    // 0x337770: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x337770u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_337774:
    // 0x337774: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x337774u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_337778:
    // 0x337778: 0x34840800  ori         $a0, $a0, 0x800
    ctx->pc = 0x337778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
label_33777c:
    // 0x33777c: 0xde050018  ld          $a1, 0x18($s0)
    ctx->pc = 0x33777cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_337780:
    // 0x337780: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x337780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_337784:
    // 0x337784: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x337784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
label_337788:
    // 0x337788: 0x9c830000  lwu         $v1, 0x0($a0)
    ctx->pc = 0x337788u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33778c:
    // 0x33778c: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x33778cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_337790:
    // 0x337790: 0xdcca0000  ld          $t2, 0x0($a2)
    ctx->pc = 0x337790u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_337794:
    // 0x337794: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x337794u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_337798:
    // 0x337798: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_33779c:
    if (ctx->pc == 0x33779Cu) {
        ctx->pc = 0x33779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337798u;
        // 0x33779c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3377A0u;
        goto label_3377a0;
    }
    ctx->pc = 0x337798u;
    {
        const bool branch_taken_0x337798 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337798u;
        // 0x33779c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337798) {
            ctx->pc = 0x3377BCu;
            goto label_3377bc;
        }
    }
    ctx->pc = 0x3377A0u;
label_3377a0:
    // 0x3377a0: 0x9c830000  lwu         $v1, 0x0($a0)
    ctx->pc = 0x3377a0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3377a4:
    // 0x3377a4: 0x2409fbff  addiu       $t1, $zero, -0x401
    ctx->pc = 0x3377a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_3377a8:
    // 0x3377a8: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3377a8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3377ac:
    // 0x3377ac: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x3377acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_3377b0:
    // 0x3377b0: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x3377b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
label_3377b4:
    // 0x3377b4: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x3377b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
label_3377b8:
    // 0x3377b8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3377b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3377bc:
    // 0x3377bc: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3377bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_3377c0:
    // 0x3377c0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3377c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_3377c4:
    // 0x3377c4: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3377c4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_3377c8:
    // 0x3377c8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x3377c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_3377cc:
    // 0x3377cc: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3377ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
label_3377d0:
    // 0x3377d0: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x3377d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
label_3377d4:
    // 0x3377d4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x3377d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3377d8:
    // 0x3377d8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3377d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3377dc:
    // 0x3377dc: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_3377e0:
    if (ctx->pc == 0x3377E0u) {
        ctx->pc = 0x3377E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377DCu;
        // 0x3377e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3377E4u;
        goto label_3377e4;
    }
    ctx->pc = 0x3377DCu;
    {
        const bool branch_taken_0x3377dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3377E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377DCu;
        // 0x3377e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3377dc) {
            ctx->pc = 0x337914u;
            goto label_337914;
        }
    }
    ctx->pc = 0x3377E4u;
label_3377e4:
    // 0x3377e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3377e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3377e8:
    // 0x3377e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3377e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3377ec:
    // 0x3377ec: 0x241efffd  addiu       $fp, $zero, -0x3
    ctx->pc = 0x3377ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3377f0:
    // 0x3377f0: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3377f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3377f4:
    // 0x3377f4: 0x24163999  addiu       $s6, $zero, 0x3999
    ctx->pc = 0x3377f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
label_3377f8:
    // 0x3377f8: 0xc0cddb6  jal         func_3376D8
label_3377fc:
    if (ctx->pc == 0x3377FCu) {
        ctx->pc = 0x3377FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377F8u;
        // 0x3377fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337800u;
        goto label_337800;
    }
    ctx->pc = 0x3377F8u;
    SET_GPR_U32(ctx, 31, 0x337800u);
    ctx->pc = 0x3377FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377F8u;
    // 0x3377fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3376D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3376D8u, 0x3377F8u, 0x337800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337800u;
label_337800:
    // 0x337800: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x337800u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_337804:
    // 0x337804: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x337804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_337808:
    // 0x337808: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x337808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33780c:
    // 0x33780c: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x33780cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_337810:
    // 0x337810: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x337810u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_337814:
    // 0x337814: 0x226302d  daddu       $a2, $s1, $a2
    ctx->pc = 0x337814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 6));
label_337818:
    // 0x337818: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x337818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_33781c:
    // 0x33781c: 0xc3302f  dsubu       $a2, $a2, $v1
    ctx->pc = 0x33781cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
label_337820:
    // 0x337820: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x337820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_337824:
    // 0x337824: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x337824u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_337828:
    // 0x337828: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x337828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33782c:
    // 0x33782c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x33782cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_337830:
    // 0x337830: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x337830u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_337834:
    // 0x337834: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x337834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_337838:
    // 0x337838: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x337838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_33783c:
    // 0x33783c: 0x40f809  jalr        $v0
label_337840:
    if (ctx->pc == 0x337840u) {
        ctx->pc = 0x337840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33783Cu;
        // 0x337840: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337844u;
        goto label_337844;
    }
    ctx->pc = 0x33783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x337844u);
        ctx->pc = 0x337840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33783Cu;
        // 0x337840: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33783Cu, 0x337844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x337844u;
label_337844:
    // 0x337844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x337844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_337848:
    // 0x337848: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_33784c:
    if (ctx->pc == 0x33784Cu) {
        ctx->pc = 0x337850u;
        goto label_337850;
    }
    ctx->pc = 0x337848u;
    {
        const bool branch_taken_0x337848 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x337848) {
            ctx->pc = 0x337860u;
            goto label_337860;
        }
    }
    ctx->pc = 0x337850u;
label_337850:
    // 0x337850: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x337850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_337854:
    // 0x337854: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x337854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_337858:
    // 0x337858: 0x1000000f  b           . + 4 + (0xF << 2)
label_33785c:
    if (ctx->pc == 0x33785Cu) {
        ctx->pc = 0x33785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337858u;
        // 0x33785c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337860u;
        goto label_337860;
    }
    ctx->pc = 0x337858u;
    {
        const bool branch_taken_0x337858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337858u;
        // 0x33785c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337858) {
            ctx->pc = 0x337898u;
            goto label_337898;
        }
    }
    ctx->pc = 0x337860u;
label_337860:
    // 0x337860: 0x54b70007  bnel        $a1, $s7, . + 4 + (0x7 << 2)
label_337864:
    if (ctx->pc == 0x337864u) {
        ctx->pc = 0x337864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337860u;
        // 0x337864: 0xde020020  ld          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337868u;
        goto label_337868;
    }
    ctx->pc = 0x337860u;
    {
        const bool branch_taken_0x337860 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        if (branch_taken_0x337860) {
            ctx->pc = 0x337864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337860u;
            // 0x337864: 0xde020020  ld          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337880u;
            goto label_337880;
        }
    }
    ctx->pc = 0x337868u;
label_337868:
    // 0x337868: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x337868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_33786c:
    // 0x33786c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x33786cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_337870:
    // 0x337870: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x337870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_337874:
    // 0x337874: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x337874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_337878:
    // 0x337878: 0x10000007  b           . + 4 + (0x7 << 2)
label_33787c:
    if (ctx->pc == 0x33787Cu) {
        ctx->pc = 0x33787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337878u;
        // 0x33787c: 0xae700014  sw          $s0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337880u;
        goto label_337880;
    }
    ctx->pc = 0x337878u;
    {
        const bool branch_taken_0x337878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337878u;
        // 0x33787c: 0xae700014  sw          $s0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337878) {
            ctx->pc = 0x337898u;
            goto label_337898;
        }
    }
    ctx->pc = 0x337880u;
label_337880:
    // 0x337880: 0x2ca33999  sltiu       $v1, $a1, 0x3999
    ctx->pc = 0x337880u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)14745) ? 1 : 0);
label_337884:
    // 0x337884: 0x2c3280b  movn        $a1, $s6, $v1
    ctx->pc = 0x337884u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 22));
label_337888:
    // 0x337888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33788c:
    // 0x33788c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x33788cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
label_337890:
    // 0x337890: 0xc0cdd94  jal         func_337650
label_337894:
    if (ctx->pc == 0x337894u) {
        ctx->pc = 0x337894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337890u;
        // 0x337894: 0xfe020020  sd          $v0, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337898u;
        goto label_337898;
    }
    ctx->pc = 0x337890u;
    SET_GPR_U32(ctx, 31, 0x337898u);
    ctx->pc = 0x337894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337890u;
    // 0x337894: 0xfe020020  sd          $v0, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337650u, 0x337890u, 0x337898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337898u;
label_337898:
    // 0x337898: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
label_33789c:
    if (ctx->pc == 0x33789Cu) {
        ctx->pc = 0x33789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337898u;
        // 0x33789c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3378A0u;
        goto label_3378a0;
    }
    ctx->pc = 0x337898u;
    {
        const bool branch_taken_0x337898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x33789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337898u;
        // 0x33789c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337898) {
            ctx->pc = 0x337910u;
            goto label_337910;
        }
    }
    ctx->pc = 0x3378A0u;
label_3378a0:
    // 0x3378a0: 0xde420020  ld          $v0, 0x20($s2)
    ctx->pc = 0x3378a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 32)));
label_3378a4:
    // 0x3378a4: 0xde430010  ld          $v1, 0x10($s2)
    ctx->pc = 0x3378a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_3378a8:
    // 0x3378a8: 0xde440018  ld          $a0, 0x18($s2)
    ctx->pc = 0x3378a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 24)));
label_3378ac:
    // 0x3378ac: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3378acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_3378b0:
    // 0x3378b0: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x3378b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_3378b4:
    // 0x3378b4: 0x9e830000  lwu         $v1, 0x0($s4)
    ctx->pc = 0x3378b4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3378b8:
    // 0x3378b8: 0x8e880010  lw          $t0, 0x10($s4)
    ctx->pc = 0x3378b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3378bc:
    // 0x3378bc: 0xde6a0000  ld          $t2, 0x0($s3)
    ctx->pc = 0x3378bcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_3378c0:
    // 0x3378c0: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3378c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_3378c4:
    // 0x3378c4: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_3378c8:
    if (ctx->pc == 0x3378C8u) {
        ctx->pc = 0x3378C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3378C4u;
        // 0x3378c8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3378CCu;
        goto label_3378cc;
    }
    ctx->pc = 0x3378C4u;
    {
        const bool branch_taken_0x3378c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3378C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3378C4u;
        // 0x3378c8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3378c4) {
            ctx->pc = 0x3378E8u;
            goto label_3378e8;
        }
    }
    ctx->pc = 0x3378CCu;
label_3378cc:
    // 0x3378cc: 0x9e830000  lwu         $v1, 0x0($s4)
    ctx->pc = 0x3378ccu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3378d0:
    // 0x3378d0: 0x2409fbff  addiu       $t1, $zero, -0x401
    ctx->pc = 0x3378d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_3378d4:
    // 0x3378d4: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3378d4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3378d8:
    // 0x3378d8: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x3378d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_3378dc:
    // 0x3378dc: 0xfe6a0000  sd          $t2, 0x0($s3)
    ctx->pc = 0x3378dcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 10));
label_3378e0:
    // 0x3378e0: 0xae880010  sw          $t0, 0x10($s4)
    ctx->pc = 0x3378e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 8));
label_3378e4:
    // 0x3378e4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3378e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3378e8:
    // 0x3378e8: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3378e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_3378ec:
    // 0x3378ec: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3378ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_3378f0:
    // 0x3378f0: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3378f0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_3378f4:
    // 0x3378f4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x3378f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_3378f8:
    // 0x3378f8: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3378f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
label_3378fc:
    // 0x3378fc: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x3378fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
label_337900:
    // 0x337900: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x337900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_337904:
    // 0x337904: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x337904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_337908:
    // 0x337908: 0x1040ffbb  beqz        $v0, . + 4 + (-0x45 << 2)
label_33790c:
    if (ctx->pc == 0x33790Cu) {
        ctx->pc = 0x337910u;
        goto label_337910;
    }
    ctx->pc = 0x337908u;
    {
        const bool branch_taken_0x337908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337908) {
            ctx->pc = 0x3377F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3377f8;
        }
    }
    ctx->pc = 0x337910u;
label_337910:
    // 0x337910: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x337910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_337914:
    // 0x337914: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x337914u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
label_337918:
    // 0x337918: 0x24510a60  addiu       $s1, $v0, 0xA60
    ctx->pc = 0x337918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2656));
label_33791c:
    // 0x33791c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_337920:
    // 0x337920: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x337920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_337924:
    // 0x337924: 0x36100800  ori         $s0, $s0, 0x800
    ctx->pc = 0x337924u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2048);
label_337928:
    // 0x337928: 0x9e040000  lwu         $a0, 0x0($s0)
    ctx->pc = 0x337928u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33792c:
    // 0x33792c: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x33792cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 16), 16))); // MMIO: 0x10000810
label_337930:
    // 0x337930: 0xde2a0000  ld          $t2, 0x0($s1)
    ctx->pc = 0x337930u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_337934:
    // 0x337934: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x337934u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_337938:
    // 0x337938: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_33793c:
    if (ctx->pc == 0x33793Cu) {
        ctx->pc = 0x33793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337938u;
        // 0x33793c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337940u;
        goto label_337940;
    }
    ctx->pc = 0x337938u;
    {
        const bool branch_taken_0x337938 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337938u;
        // 0x33793c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337938) {
            ctx->pc = 0x33795Cu;
            goto label_33795c;
        }
    }
    ctx->pc = 0x337940u;
label_337940:
    // 0x337940: 0x9e040000  lwu         $a0, 0x0($s0)
    ctx->pc = 0x337940u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_337944:
    // 0x337944: 0x2409fbff  addiu       $t1, $zero, -0x401
    ctx->pc = 0x337944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_337948:
    // 0x337948: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x337948u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_33794c:
    // 0x33794c: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x33794cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_337950:
    // 0x337950: 0xfe2a0000  sd          $t2, 0x0($s1)
    ctx->pc = 0x337950u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 10));
label_337954:
    // 0x337954: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x337954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
label_337958:
    // 0x337958: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x337958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33795c:
    // 0x33795c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x33795cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_337960:
    // 0x337960: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x337960u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_337964:
    // 0x337964: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x337964u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_337968:
    // 0x337968: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x337968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
label_33796c:
    // 0x33796c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x33796cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
label_337970:
    // 0x337970: 0x1242014  dsllv       $a0, $a0, $t1
    ctx->pc = 0x337970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 9) & 0x3F));
label_337974:
    // 0x337974: 0xc0cdd48  jal         func_337520
label_337978:
    if (ctx->pc == 0x337978u) {
        ctx->pc = 0x33797Cu;
        goto label_33797c;
    }
    ctx->pc = 0x337974u;
    SET_GPR_U32(ctx, 31, 0x33797Cu);
    ctx->pc = 0x337520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337520u, 0x337974u, 0x33797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33797Cu;
label_33797c:
    // 0x33797c: 0x9e020000  lwu         $v0, 0x0($s0)
    ctx->pc = 0x33797cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_337980:
    // 0x337980: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x337980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_337984:
    // 0x337984: 0xde2a0000  ld          $t2, 0x0($s1)
    ctx->pc = 0x337984u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_337988:
    // 0x337988: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x337988u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_33798c:
    // 0x33798c: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_337990:
    if (ctx->pc == 0x337990u) {
        ctx->pc = 0x337990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33798Cu;
        // 0x337990: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337994u;
        goto label_337994;
    }
    ctx->pc = 0x33798Cu;
    {
        const bool branch_taken_0x33798c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x337990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33798Cu;
        // 0x337990: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33798c) {
            ctx->pc = 0x3379B0u;
            goto label_3379b0;
        }
    }
    ctx->pc = 0x337994u;
label_337994:
    // 0x337994: 0x9e020000  lwu         $v0, 0x0($s0)
    ctx->pc = 0x337994u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_337998:
    // 0x337998: 0x2409fbff  addiu       $t1, $zero, -0x401
    ctx->pc = 0x337998u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_33799c:
    // 0x33799c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x33799cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3379a0:
    // 0x3379a0: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x3379a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_3379a4:
    // 0x3379a4: 0xfe2a0000  sd          $t2, 0x0($s1)
    ctx->pc = 0x3379a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 10));
label_3379a8:
    // 0x3379a8: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x3379a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
label_3379ac:
    // 0x3379ac: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3379acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3379b0:
    // 0x3379b0: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3379b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_3379b4:
    // 0x3379b4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3379b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_3379b8:
    // 0x3379b8: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3379b8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_3379bc:
    // 0x3379bc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x3379bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_3379c0:
    // 0x3379c0: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3379c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
label_3379c4:
    // 0x3379c4: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x3379c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
label_3379c8:
    // 0x3379c8: 0xf  sync
    ctx->pc = 0x3379c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3379cc:
    // 0x3379cc: 0x42000038  ei
    ctx->pc = 0x3379ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3379d0:
    // 0x3379d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3379d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3379d4:
    // 0x3379d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3379d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3379d8:
    // 0x3379d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3379d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3379dc:
    // 0x3379dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3379dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3379e0:
    // 0x3379e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3379e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3379e4:
    // 0x3379e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3379e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3379e8:
    // 0x3379e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3379e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3379ec:
    // 0x3379ec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3379ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3379f0:
    // 0x3379f0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3379f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3379f4:
    // 0x3379f4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x3379f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3379f8:
    // 0x3379f8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3379f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3379fc:
    // 0x3379fc: 0x3e00008  jr          $ra
label_337a00:
    if (ctx->pc == 0x337A00u) {
        ctx->pc = 0x337A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3379FCu;
        // 0x337a00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337A04u;
        goto label_337a04;
    }
    ctx->pc = 0x3379FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3379FCu;
        // 0x337a00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3379FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337A04u;
label_337a04:
    // 0x337a04: 0x0  nop
    ctx->pc = 0x337a04u;
    // NOP
    ctx->pc = 0x337a08u;
}
