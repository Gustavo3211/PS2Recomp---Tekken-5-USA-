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

// Function: sub_002875E8
// Address: 0x2875e8 - 0x287800
void sub_002875E8_0x2875e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002875E8_0x2875e8");
#endif

    switch (ctx->pc) {
        case 0x2875e8u: goto label_2875e8;
        case 0x2875ecu: goto label_2875ec;
        case 0x2875f0u: goto label_2875f0;
        case 0x2875f4u: goto label_2875f4;
        case 0x2875f8u: goto label_2875f8;
        case 0x2875fcu: goto label_2875fc;
        case 0x287600u: goto label_287600;
        case 0x287604u: goto label_287604;
        case 0x287608u: goto label_287608;
        case 0x28760cu: goto label_28760c;
        case 0x287610u: goto label_287610;
        case 0x287614u: goto label_287614;
        case 0x287618u: goto label_287618;
        case 0x28761cu: goto label_28761c;
        case 0x287620u: goto label_287620;
        case 0x287624u: goto label_287624;
        case 0x287628u: goto label_287628;
        case 0x28762cu: goto label_28762c;
        case 0x287630u: goto label_287630;
        case 0x287634u: goto label_287634;
        case 0x287638u: goto label_287638;
        case 0x28763cu: goto label_28763c;
        case 0x287640u: goto label_287640;
        case 0x287644u: goto label_287644;
        case 0x287648u: goto label_287648;
        case 0x28764cu: goto label_28764c;
        case 0x287650u: goto label_287650;
        case 0x287654u: goto label_287654;
        case 0x287658u: goto label_287658;
        case 0x28765cu: goto label_28765c;
        case 0x287660u: goto label_287660;
        case 0x287664u: goto label_287664;
        case 0x287668u: goto label_287668;
        case 0x28766cu: goto label_28766c;
        case 0x287670u: goto label_287670;
        case 0x287674u: goto label_287674;
        case 0x287678u: goto label_287678;
        case 0x28767cu: goto label_28767c;
        case 0x287680u: goto label_287680;
        case 0x287684u: goto label_287684;
        case 0x287688u: goto label_287688;
        case 0x28768cu: goto label_28768c;
        case 0x287690u: goto label_287690;
        case 0x287694u: goto label_287694;
        case 0x287698u: goto label_287698;
        case 0x28769cu: goto label_28769c;
        case 0x2876a0u: goto label_2876a0;
        case 0x2876a4u: goto label_2876a4;
        case 0x2876a8u: goto label_2876a8;
        case 0x2876acu: goto label_2876ac;
        case 0x2876b0u: goto label_2876b0;
        case 0x2876b4u: goto label_2876b4;
        case 0x2876b8u: goto label_2876b8;
        case 0x2876bcu: goto label_2876bc;
        case 0x2876c0u: goto label_2876c0;
        case 0x2876c4u: goto label_2876c4;
        case 0x2876c8u: goto label_2876c8;
        case 0x2876ccu: goto label_2876cc;
        case 0x2876d0u: goto label_2876d0;
        case 0x2876d4u: goto label_2876d4;
        case 0x2876d8u: goto label_2876d8;
        case 0x2876dcu: goto label_2876dc;
        case 0x2876e0u: goto label_2876e0;
        case 0x2876e4u: goto label_2876e4;
        case 0x2876e8u: goto label_2876e8;
        case 0x2876ecu: goto label_2876ec;
        case 0x2876f0u: goto label_2876f0;
        case 0x2876f4u: goto label_2876f4;
        case 0x2876f8u: goto label_2876f8;
        case 0x2876fcu: goto label_2876fc;
        case 0x287700u: goto label_287700;
        case 0x287704u: goto label_287704;
        case 0x287708u: goto label_287708;
        case 0x28770cu: goto label_28770c;
        case 0x287710u: goto label_287710;
        case 0x287714u: goto label_287714;
        case 0x287718u: goto label_287718;
        case 0x28771cu: goto label_28771c;
        case 0x287720u: goto label_287720;
        case 0x287724u: goto label_287724;
        case 0x287728u: goto label_287728;
        case 0x28772cu: goto label_28772c;
        case 0x287730u: goto label_287730;
        case 0x287734u: goto label_287734;
        case 0x287738u: goto label_287738;
        case 0x28773cu: goto label_28773c;
        case 0x287740u: goto label_287740;
        case 0x287744u: goto label_287744;
        case 0x287748u: goto label_287748;
        case 0x28774cu: goto label_28774c;
        case 0x287750u: goto label_287750;
        case 0x287754u: goto label_287754;
        case 0x287758u: goto label_287758;
        case 0x28775cu: goto label_28775c;
        case 0x287760u: goto label_287760;
        case 0x287764u: goto label_287764;
        case 0x287768u: goto label_287768;
        case 0x28776cu: goto label_28776c;
        case 0x287770u: goto label_287770;
        case 0x287774u: goto label_287774;
        case 0x287778u: goto label_287778;
        case 0x28777cu: goto label_28777c;
        case 0x287780u: goto label_287780;
        case 0x287784u: goto label_287784;
        case 0x287788u: goto label_287788;
        case 0x28778cu: goto label_28778c;
        case 0x287790u: goto label_287790;
        case 0x287794u: goto label_287794;
        case 0x287798u: goto label_287798;
        case 0x28779cu: goto label_28779c;
        case 0x2877a0u: goto label_2877a0;
        case 0x2877a4u: goto label_2877a4;
        case 0x2877a8u: goto label_2877a8;
        case 0x2877acu: goto label_2877ac;
        case 0x2877b0u: goto label_2877b0;
        case 0x2877b4u: goto label_2877b4;
        case 0x2877b8u: goto label_2877b8;
        case 0x2877bcu: goto label_2877bc;
        case 0x2877c0u: goto label_2877c0;
        case 0x2877c4u: goto label_2877c4;
        case 0x2877c8u: goto label_2877c8;
        case 0x2877ccu: goto label_2877cc;
        case 0x2877d0u: goto label_2877d0;
        case 0x2877d4u: goto label_2877d4;
        case 0x2877d8u: goto label_2877d8;
        case 0x2877dcu: goto label_2877dc;
        case 0x2877e0u: goto label_2877e0;
        case 0x2877e4u: goto label_2877e4;
        case 0x2877e8u: goto label_2877e8;
        case 0x2877ecu: goto label_2877ec;
        case 0x2877f0u: goto label_2877f0;
        case 0x2877f4u: goto label_2877f4;
        case 0x2877f8u: goto label_2877f8;
        case 0x2877fcu: goto label_2877fc;
        default: break;
    }

    ctx->pc = 0x2875e8u;

label_2875e8:
    // 0x2875e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2875e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2875ec:
    // 0x2875ec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2875ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2875f0:
    // 0x2875f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2875f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2875f4:
    // 0x2875f4: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x2875f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_2875f8:
    // 0x2875f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2875f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2875fc:
    // 0x2875fc: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x2875fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_287600:
    // 0x287600: 0x50400080  beql        $v0, $zero, . + 4 + (0x80 << 2)
label_287604:
    if (ctx->pc == 0x287604u) {
        ctx->pc = 0x287604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287600u;
        // 0x287604: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287608u;
        goto label_287608;
    }
    ctx->pc = 0x287600u;
    {
        const bool branch_taken_0x287600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287600) {
            ctx->pc = 0x287604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287600u;
            // 0x287604: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287804u;
            return;
        }
    }
    ctx->pc = 0x287608u;
label_287608:
    // 0x287608: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x287608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28760c:
    // 0x28760c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28760cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_287610:
    // 0x287610: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x287610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_287614:
    // 0x287614: 0x8c6397d0  lw          $v1, -0x6830($v1)
    ctx->pc = 0x287614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940624)));
label_287618:
    // 0x287618: 0x600008  jr          $v1
label_28761c:
    if (ctx->pc == 0x28761Cu) {
        ctx->pc = 0x287620u;
        goto label_287620;
    }
    ctx->pc = 0x287618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287620u: goto label_287620;
            case 0x287628u: goto label_287628;
            case 0x287648u: goto label_287648;
            case 0x2876B0u: goto label_2876b0;
            case 0x2876B8u: goto label_2876b8;
            case 0x2876E0u: goto label_2876e0;
            case 0x287758u: goto label_287758;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287618u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x287620u;
label_287620:
    // 0x287620: 0x1000002b  b           . + 4 + (0x2B << 2)
label_287624:
    if (ctx->pc == 0x287624u) {
        ctx->pc = 0x287624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287620u;
        // 0x287624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287628u;
        goto label_287628;
    }
    ctx->pc = 0x287620u;
    {
        const bool branch_taken_0x287620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287620u;
        // 0x287624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287620) {
            ctx->pc = 0x2876D0u;
            goto label_2876d0;
        }
    }
    ctx->pc = 0x287628u;
label_287628:
    // 0x287628: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x287628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_28762c:
    // 0x28762c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_287630:
    // 0x287630: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x287630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_287634:
    // 0x287634: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
label_287638:
    if (ctx->pc == 0x287638u) {
        ctx->pc = 0x287638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287634u;
        // 0x287638: 0xace20030  sw          $v0, 0x30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28763Cu;
        goto label_28763c;
    }
    ctx->pc = 0x287634u;
    {
        const bool branch_taken_0x287634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287634u;
        // 0x287638: 0xace20030  sw          $v0, 0x30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287634) {
            ctx->pc = 0x287800u;
            return;
        }
    }
    ctx->pc = 0x28763Cu;
label_28763c:
    // 0x28763c: 0x10000024  b           . + 4 + (0x24 << 2)
label_287640:
    if (ctx->pc == 0x287640u) {
        ctx->pc = 0x287640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28763Cu;
        // 0x287640: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287644u;
        goto label_287644;
    }
    ctx->pc = 0x28763Cu;
    {
        const bool branch_taken_0x28763c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28763Cu;
        // 0x287640: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28763c) {
            ctx->pc = 0x2876D0u;
            goto label_2876d0;
        }
    }
    ctx->pc = 0x287644u;
label_287644:
    // 0x287644: 0x0  nop
    ctx->pc = 0x287644u;
    // NOP
label_287648:
    // 0x287648: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x287648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_28764c:
    // 0x28764c: 0x2784a850  addiu       $a0, $gp, -0x57B0
    ctx->pc = 0x28764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
label_287650:
    // 0x287650: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_287654:
    // 0x287654: 0xace30030  sw          $v1, 0x30($a3)
    ctx->pc = 0x287654u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 3));
label_287658:
    // 0x287658: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x287658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28765c:
    // 0x28765c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x28765cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_287660:
    // 0x287660: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_287664:
    if (ctx->pc == 0x287664u) {
        ctx->pc = 0x287664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287660u;
        // 0x287664: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287668u;
        goto label_287668;
    }
    ctx->pc = 0x287660u;
    {
        const bool branch_taken_0x287660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287660) {
            ctx->pc = 0x287664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287660u;
            // 0x287664: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287674u;
            goto label_287674;
        }
    }
    ctx->pc = 0x287668u;
label_287668:
    // 0x287668: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
label_28766c:
    if (ctx->pc == 0x28766Cu) {
        ctx->pc = 0x28766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287668u;
        // 0x28766c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287670u;
        goto label_287670;
    }
    ctx->pc = 0x287668u;
    {
        const bool branch_taken_0x287668 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287668u;
        // 0x28766c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287668) {
            ctx->pc = 0x28769Cu;
            goto label_28769c;
        }
    }
    ctx->pc = 0x287670u;
label_287670:
    // 0x287670: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x287670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_287674:
    // 0x287674: 0x30620060  andi        $v0, $v1, 0x60
    ctx->pc = 0x287674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
label_287678:
    // 0x287678: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_28767c:
    if (ctx->pc == 0x28767Cu) {
        ctx->pc = 0x28767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287678u;
        // 0x28767c: 0x30620090  andi        $v0, $v1, 0x90 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)144);
        ctx->in_delay_slot = false;
        ctx->pc = 0x287680u;
        goto label_287680;
    }
    ctx->pc = 0x287678u;
    {
        const bool branch_taken_0x287678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287678) {
            ctx->pc = 0x28767Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287678u;
            // 0x28767c: 0x30620090  andi        $v0, $v1, 0x90 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)144);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28768Cu;
            goto label_28768c;
        }
    }
    ctx->pc = 0x287680u;
label_287680:
    // 0x287680: 0x54c00006  bnel        $a2, $zero, . + 4 + (0x6 << 2)
label_287684:
    if (ctx->pc == 0x287684u) {
        ctx->pc = 0x287684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287680u;
        // 0x287684: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287688u;
        goto label_287688;
    }
    ctx->pc = 0x287680u;
    {
        const bool branch_taken_0x287680 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x287680) {
            ctx->pc = 0x287684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287680u;
            // 0x287684: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28769Cu;
            goto label_28769c;
        }
    }
    ctx->pc = 0x287688u;
label_287688:
    // 0x287688: 0x30620090  andi        $v0, $v1, 0x90
    ctx->pc = 0x287688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)144);
label_28768c:
    // 0x28768c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_287690:
    if (ctx->pc == 0x287690u) {
        ctx->pc = 0x287690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28768Cu;
        // 0x287690: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287694u;
        goto label_287694;
    }
    ctx->pc = 0x28768Cu;
    {
        const bool branch_taken_0x28768c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28768Cu;
        // 0x287690: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28768c) {
            ctx->pc = 0x287804u;
            return;
        }
    }
    ctx->pc = 0x287694u;
label_287694:
    // 0x287694: 0x10a0005b  beqz        $a1, . + 4 + (0x5B << 2)
label_287698:
    if (ctx->pc == 0x287698u) {
        ctx->pc = 0x287698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287694u;
        // 0x287698: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28769Cu;
        goto label_28769c;
    }
    ctx->pc = 0x287694u;
    {
        const bool branch_taken_0x287694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x287698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287694u;
        // 0x287698: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287694) {
            ctx->pc = 0x287804u;
            return;
        }
    }
    ctx->pc = 0x28769Cu;
label_28769c:
    // 0x28769c: 0x8ce20068  lw          $v0, 0x68($a3)
    ctx->pc = 0x28769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
label_2876a0:
    // 0x2876a0: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x2876a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
label_2876a4:
    // 0x2876a4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2876a8:
    if (ctx->pc == 0x2876A8u) {
        ctx->pc = 0x2876A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876A4u;
        // 0x2876a8: 0x24420068  addiu       $v0, $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876ACu;
        goto label_2876ac;
    }
    ctx->pc = 0x2876A4u;
    {
        const bool branch_taken_0x2876a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876A4u;
        // 0x2876a8: 0x24420068  addiu       $v0, $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876a4) {
            ctx->pc = 0x287798u;
            goto label_287798;
        }
    }
    ctx->pc = 0x2876ACu;
label_2876ac:
    // 0x2876ac: 0x0  nop
    ctx->pc = 0x2876acu;
    // NOP
label_2876b0:
    // 0x2876b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2876b4:
    if (ctx->pc == 0x2876B4u) {
        ctx->pc = 0x2876B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876B0u;
        // 0x2876b4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876B8u;
        goto label_2876b8;
    }
    ctx->pc = 0x2876B0u;
    {
        const bool branch_taken_0x2876b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876B0u;
        // 0x2876b4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876b0) {
            ctx->pc = 0x2876D0u;
            goto label_2876d0;
        }
    }
    ctx->pc = 0x2876B8u;
label_2876b8:
    // 0x2876b8: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x2876b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_2876bc:
    // 0x2876bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2876bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2876c0:
    // 0x2876c0: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x2876c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_2876c4:
    // 0x2876c4: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
label_2876c8:
    if (ctx->pc == 0x2876C8u) {
        ctx->pc = 0x2876C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876C4u;
        // 0x2876c8: 0xace20030  sw          $v0, 0x30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876CCu;
        goto label_2876cc;
    }
    ctx->pc = 0x2876C4u;
    {
        const bool branch_taken_0x2876c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2876C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876C4u;
        // 0x2876c8: 0xace20030  sw          $v0, 0x30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876c4) {
            ctx->pc = 0x287800u;
            return;
        }
    }
    ctx->pc = 0x2876CCu;
label_2876cc:
    // 0x2876cc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2876ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2876d0:
    // 0x2876d0: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x2876d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
label_2876d4:
    // 0x2876d4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2876d8:
    if (ctx->pc == 0x2876D8u) {
        ctx->pc = 0x2876D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876D4u;
        // 0x2876d8: 0xace2002c  sw          $v0, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876DCu;
        goto label_2876dc;
    }
    ctx->pc = 0x2876D4u;
    {
        const bool branch_taken_0x2876d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876D4u;
        // 0x2876d8: 0xace2002c  sw          $v0, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876d4) {
            ctx->pc = 0x287800u;
            return;
        }
    }
    ctx->pc = 0x2876DCu;
label_2876dc:
    // 0x2876dc: 0x0  nop
    ctx->pc = 0x2876dcu;
    // NOP
label_2876e0:
    // 0x2876e0: 0x2783a850  addiu       $v1, $gp, -0x57B0
    ctx->pc = 0x2876e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
label_2876e4:
    // 0x2876e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2876e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2876e8:
    // 0x2876e8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2876e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_2876ec:
    // 0x2876ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2876f0:
    if (ctx->pc == 0x2876F0u) {
        ctx->pc = 0x2876F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876ECu;
        // 0x2876f0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876F4u;
        goto label_2876f4;
    }
    ctx->pc = 0x2876ECu;
    {
        const bool branch_taken_0x2876ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2876ec) {
            ctx->pc = 0x2876F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2876ECu;
            // 0x2876f0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287700u;
            goto label_287700;
        }
    }
    ctx->pc = 0x2876F4u;
label_2876f4:
    // 0x2876f4: 0x54a00025  bnel        $a1, $zero, . + 4 + (0x25 << 2)
label_2876f8:
    if (ctx->pc == 0x2876F8u) {
        ctx->pc = 0x2876F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876F4u;
        // 0x2876f8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876FCu;
        goto label_2876fc;
    }
    ctx->pc = 0x2876F4u;
    {
        const bool branch_taken_0x2876f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2876f4) {
            ctx->pc = 0x2876F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2876F4u;
            // 0x2876f8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28778Cu;
            goto label_28778c;
        }
    }
    ctx->pc = 0x2876FCu;
label_2876fc:
    // 0x2876fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2876fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_287700:
    // 0x287700: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x287700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_287704:
    // 0x287704: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_287708:
    if (ctx->pc == 0x287708u) {
        ctx->pc = 0x28770Cu;
        goto label_28770c;
    }
    ctx->pc = 0x287704u;
    {
        const bool branch_taken_0x287704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287704) {
            ctx->pc = 0x287714u;
            goto label_287714;
        }
    }
    ctx->pc = 0x28770Cu;
label_28770c:
    // 0x28770c: 0x14c0001f  bnez        $a2, . + 4 + (0x1F << 2)
label_287710:
    if (ctx->pc == 0x287710u) {
        ctx->pc = 0x287710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28770Cu;
        // 0x287710: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287714u;
        goto label_287714;
    }
    ctx->pc = 0x28770Cu;
    {
        const bool branch_taken_0x28770c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x287710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28770Cu;
        // 0x287710: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28770c) {
            ctx->pc = 0x28778Cu;
            goto label_28778c;
        }
    }
    ctx->pc = 0x287714u;
label_287714:
    // 0x287714: 0x2783a850  addiu       $v1, $gp, -0x57B0
    ctx->pc = 0x287714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
label_287718:
    // 0x287718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x287718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28771c:
    // 0x28771c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x28771cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_287720:
    // 0x287720: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_287724:
    if (ctx->pc == 0x287724u) {
        ctx->pc = 0x287724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287720u;
        // 0x287724: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287728u;
        goto label_287728;
    }
    ctx->pc = 0x287720u;
    {
        const bool branch_taken_0x287720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287720) {
            ctx->pc = 0x287724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287720u;
            // 0x287724: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287734u;
            goto label_287734;
        }
    }
    ctx->pc = 0x287728u;
label_287728:
    // 0x287728: 0x54a00007  bnel        $a1, $zero, . + 4 + (0x7 << 2)
label_28772c:
    if (ctx->pc == 0x28772Cu) {
        ctx->pc = 0x28772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287728u;
        // 0x28772c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287730u;
        goto label_287730;
    }
    ctx->pc = 0x287728u;
    {
        const bool branch_taken_0x287728 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x287728) {
            ctx->pc = 0x28772Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287728u;
            // 0x28772c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287748u;
            goto label_287748;
        }
    }
    ctx->pc = 0x287730u;
label_287730:
    // 0x287730: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x287730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_287734:
    // 0x287734: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x287734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_287738:
    // 0x287738: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_28773c:
    if (ctx->pc == 0x28773Cu) {
        ctx->pc = 0x28773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287738u;
        // 0x28773c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287740u;
        goto label_287740;
    }
    ctx->pc = 0x287738u;
    {
        const bool branch_taken_0x287738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287738u;
        // 0x28773c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287738) {
            ctx->pc = 0x287804u;
            return;
        }
    }
    ctx->pc = 0x287740u;
label_287740:
    // 0x287740: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
label_287744:
    if (ctx->pc == 0x287744u) {
        ctx->pc = 0x287744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287740u;
        // 0x287744: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287748u;
        goto label_287748;
    }
    ctx->pc = 0x287740u;
    {
        const bool branch_taken_0x287740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x287744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287740u;
        // 0x287744: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287740) {
            ctx->pc = 0x287804u;
            return;
        }
    }
    ctx->pc = 0x287748u;
label_287748:
    // 0x287748: 0x8ce20068  lw          $v0, 0x68($a3)
    ctx->pc = 0x287748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
label_28774c:
    // 0x28774c: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x28774cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
label_287750:
    // 0x287750: 0x10000011  b           . + 4 + (0x11 << 2)
label_287754:
    if (ctx->pc == 0x287754u) {
        ctx->pc = 0x287754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287750u;
        // 0x287754: 0x24420068  addiu       $v0, $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287758u;
        goto label_287758;
    }
    ctx->pc = 0x287750u;
    {
        const bool branch_taken_0x287750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287750u;
        // 0x287754: 0x24420068  addiu       $v0, $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287750) {
            ctx->pc = 0x287798u;
            goto label_287798;
        }
    }
    ctx->pc = 0x287758u;
label_287758:
    // 0x287758: 0x2783a850  addiu       $v1, $gp, -0x57B0
    ctx->pc = 0x287758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
label_28775c:
    // 0x28775c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_287760:
    // 0x287760: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x287760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_287764:
    // 0x287764: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_287768:
    if (ctx->pc == 0x287768u) {
        ctx->pc = 0x287768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287764u;
        // 0x287768: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28776Cu;
        goto label_28776c;
    }
    ctx->pc = 0x287764u;
    {
        const bool branch_taken_0x287764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287764) {
            ctx->pc = 0x287768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287764u;
            // 0x287768: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287778u;
            goto label_287778;
        }
    }
    ctx->pc = 0x28776Cu;
label_28776c:
    // 0x28776c: 0x54a00007  bnel        $a1, $zero, . + 4 + (0x7 << 2)
label_287770:
    if (ctx->pc == 0x287770u) {
        ctx->pc = 0x287770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28776Cu;
        // 0x287770: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287774u;
        goto label_287774;
    }
    ctx->pc = 0x28776Cu;
    {
        const bool branch_taken_0x28776c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28776c) {
            ctx->pc = 0x287770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28776Cu;
            // 0x287770: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28778Cu;
            goto label_28778c;
        }
    }
    ctx->pc = 0x287774u;
label_287774:
    // 0x287774: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x287774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_287778:
    // 0x287778: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x287778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_28777c:
    // 0x28777c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_287780:
    if (ctx->pc == 0x287780u) {
        ctx->pc = 0x287784u;
        goto label_287784;
    }
    ctx->pc = 0x28777Cu;
    {
        const bool branch_taken_0x28777c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28777c) {
            ctx->pc = 0x2877B0u;
            goto label_2877b0;
        }
    }
    ctx->pc = 0x287784u;
label_287784:
    // 0x287784: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_287788:
    if (ctx->pc == 0x287788u) {
        ctx->pc = 0x287788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287784u;
        // 0x287788: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28778Cu;
        goto label_28778c;
    }
    ctx->pc = 0x287784u;
    {
        const bool branch_taken_0x287784 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x287788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287784u;
        // 0x287788: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287784) {
            ctx->pc = 0x2877B0u;
            goto label_2877b0;
        }
    }
    ctx->pc = 0x28778Cu;
label_28778c:
    // 0x28778c: 0x8ce20068  lw          $v0, 0x68($a3)
    ctx->pc = 0x28778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
label_287790:
    // 0x287790: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x287790u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
label_287794:
    // 0x287794: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x287794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_287798:
    // 0x287798: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x287798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_28779c:
    // 0x28779c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2877a0:
    // 0x2877a0: 0x60f809  jalr        $v1
label_2877a4:
    if (ctx->pc == 0x2877A4u) {
        ctx->pc = 0x2877A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877A0u;
        // 0x2877a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2877A8u;
        goto label_2877a8;
    }
    ctx->pc = 0x2877A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2877A8u);
        ctx->pc = 0x2877A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877A0u;
        // 0x2877a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2877A0u, 0x2877A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2877A8u;
label_2877a8:
    // 0x2877a8: 0x10000016  b           . + 4 + (0x16 << 2)
label_2877ac:
    if (ctx->pc == 0x2877ACu) {
        ctx->pc = 0x2877ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877A8u;
        // 0x2877ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2877B0u;
        goto label_2877b0;
    }
    ctx->pc = 0x2877A8u;
    {
        const bool branch_taken_0x2877a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877A8u;
        // 0x2877ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877a8) {
            ctx->pc = 0x287804u;
            return;
        }
    }
    ctx->pc = 0x2877B0u;
label_2877b0:
    // 0x2877b0: 0x2783a850  addiu       $v1, $gp, -0x57B0
    ctx->pc = 0x2877b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
label_2877b4:
    // 0x2877b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2877b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2877b8:
    // 0x2877b8: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x2877b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_2877bc:
    // 0x2877bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2877c0:
    if (ctx->pc == 0x2877C0u) {
        ctx->pc = 0x2877C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877BCu;
        // 0x2877c0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2877C4u;
        goto label_2877c4;
    }
    ctx->pc = 0x2877BCu;
    {
        const bool branch_taken_0x2877bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2877bc) {
            ctx->pc = 0x2877C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2877BCu;
            // 0x2877c0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2877D0u;
            goto label_2877d0;
        }
    }
    ctx->pc = 0x2877C4u;
label_2877c4:
    // 0x2877c4: 0x54a00007  bnel        $a1, $zero, . + 4 + (0x7 << 2)
label_2877c8:
    if (ctx->pc == 0x2877C8u) {
        ctx->pc = 0x2877C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877C4u;
        // 0x2877c8: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2877CCu;
        goto label_2877cc;
    }
    ctx->pc = 0x2877C4u;
    {
        const bool branch_taken_0x2877c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2877c4) {
            ctx->pc = 0x2877C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2877C4u;
            // 0x2877c8: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2877E4u;
            goto label_2877e4;
        }
    }
    ctx->pc = 0x2877CCu;
label_2877cc:
    // 0x2877cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2877ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2877d0:
    // 0x2877d0: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x2877d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_2877d4:
    // 0x2877d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2877d8:
    if (ctx->pc == 0x2877D8u) {
        ctx->pc = 0x2877D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877D4u;
        // 0x2877d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2877DCu;
        goto label_2877dc;
    }
    ctx->pc = 0x2877D4u;
    {
        const bool branch_taken_0x2877d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877D4u;
        // 0x2877d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877d4) {
            ctx->pc = 0x287804u;
            return;
        }
    }
    ctx->pc = 0x2877DCu;
label_2877dc:
    // 0x2877dc: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_2877e0:
    if (ctx->pc == 0x2877E0u) {
        ctx->pc = 0x2877E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877DCu;
        // 0x2877e0: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2877E4u;
        goto label_2877e4;
    }
    ctx->pc = 0x2877DCu;
    {
        const bool branch_taken_0x2877dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877DCu;
        // 0x2877e0: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877dc) {
            ctx->pc = 0x287804u;
            return;
        }
    }
    ctx->pc = 0x2877E4u;
label_2877e4:
    // 0x2877e4: 0x8ce20068  lw          $v0, 0x68($a3)
    ctx->pc = 0x2877e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
label_2877e8:
    // 0x2877e8: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x2877e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
label_2877ec:
    // 0x2877ec: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2877ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2877f0:
    // 0x2877f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2877f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2877f4:
    // 0x2877f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2877f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2877f8:
    // 0x2877f8: 0x60f809  jalr        $v1
label_2877fc:
    if (ctx->pc == 0x2877FCu) {
        ctx->pc = 0x2877FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877F8u;
        // 0x2877fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287800u;
        goto label_fallthrough_0x2877f8;
    }
    ctx->pc = 0x2877F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x287800u);
        ctx->pc = 0x2877FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877F8u;
        // 0x2877fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2877F8u, 0x287800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x2877f8:
    ctx->pc = 0x287800u;
}
