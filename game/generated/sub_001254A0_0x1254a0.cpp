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

// Function: sub_001254A0
// Address: 0x1254a0 - 0x1256e0
void sub_001254A0_0x1254a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001254A0_0x1254a0");
#endif

    switch (ctx->pc) {
        case 0x1254a0u: goto label_1254a0;
        case 0x1254a4u: goto label_1254a4;
        case 0x1254a8u: goto label_1254a8;
        case 0x1254acu: goto label_1254ac;
        case 0x1254b0u: goto label_1254b0;
        case 0x1254b4u: goto label_1254b4;
        case 0x1254b8u: goto label_1254b8;
        case 0x1254bcu: goto label_1254bc;
        case 0x1254c0u: goto label_1254c0;
        case 0x1254c4u: goto label_1254c4;
        case 0x1254c8u: goto label_1254c8;
        case 0x1254ccu: goto label_1254cc;
        case 0x1254d0u: goto label_1254d0;
        case 0x1254d4u: goto label_1254d4;
        case 0x1254d8u: goto label_1254d8;
        case 0x1254dcu: goto label_1254dc;
        case 0x1254e0u: goto label_1254e0;
        case 0x1254e4u: goto label_1254e4;
        case 0x1254e8u: goto label_1254e8;
        case 0x1254ecu: goto label_1254ec;
        case 0x1254f0u: goto label_1254f0;
        case 0x1254f4u: goto label_1254f4;
        case 0x1254f8u: goto label_1254f8;
        case 0x1254fcu: goto label_1254fc;
        case 0x125500u: goto label_125500;
        case 0x125504u: goto label_125504;
        case 0x125508u: goto label_125508;
        case 0x12550cu: goto label_12550c;
        case 0x125510u: goto label_125510;
        case 0x125514u: goto label_125514;
        case 0x125518u: goto label_125518;
        case 0x12551cu: goto label_12551c;
        case 0x125520u: goto label_125520;
        case 0x125524u: goto label_125524;
        case 0x125528u: goto label_125528;
        case 0x12552cu: goto label_12552c;
        case 0x125530u: goto label_125530;
        case 0x125534u: goto label_125534;
        case 0x125538u: goto label_125538;
        case 0x12553cu: goto label_12553c;
        case 0x125540u: goto label_125540;
        case 0x125544u: goto label_125544;
        case 0x125548u: goto label_125548;
        case 0x12554cu: goto label_12554c;
        case 0x125550u: goto label_125550;
        case 0x125554u: goto label_125554;
        case 0x125558u: goto label_125558;
        case 0x12555cu: goto label_12555c;
        case 0x125560u: goto label_125560;
        case 0x125564u: goto label_125564;
        case 0x125568u: goto label_125568;
        case 0x12556cu: goto label_12556c;
        case 0x125570u: goto label_125570;
        case 0x125574u: goto label_125574;
        case 0x125578u: goto label_125578;
        case 0x12557cu: goto label_12557c;
        case 0x125580u: goto label_125580;
        case 0x125584u: goto label_125584;
        case 0x125588u: goto label_125588;
        case 0x12558cu: goto label_12558c;
        case 0x125590u: goto label_125590;
        case 0x125594u: goto label_125594;
        case 0x125598u: goto label_125598;
        case 0x12559cu: goto label_12559c;
        case 0x1255a0u: goto label_1255a0;
        case 0x1255a4u: goto label_1255a4;
        case 0x1255a8u: goto label_1255a8;
        case 0x1255acu: goto label_1255ac;
        case 0x1255b0u: goto label_1255b0;
        case 0x1255b4u: goto label_1255b4;
        case 0x1255b8u: goto label_1255b8;
        case 0x1255bcu: goto label_1255bc;
        case 0x1255c0u: goto label_1255c0;
        case 0x1255c4u: goto label_1255c4;
        case 0x1255c8u: goto label_1255c8;
        case 0x1255ccu: goto label_1255cc;
        case 0x1255d0u: goto label_1255d0;
        case 0x1255d4u: goto label_1255d4;
        case 0x1255d8u: goto label_1255d8;
        case 0x1255dcu: goto label_1255dc;
        case 0x1255e0u: goto label_1255e0;
        case 0x1255e4u: goto label_1255e4;
        case 0x1255e8u: goto label_1255e8;
        case 0x1255ecu: goto label_1255ec;
        case 0x1255f0u: goto label_1255f0;
        case 0x1255f4u: goto label_1255f4;
        case 0x1255f8u: goto label_1255f8;
        case 0x1255fcu: goto label_1255fc;
        case 0x125600u: goto label_125600;
        case 0x125604u: goto label_125604;
        case 0x125608u: goto label_125608;
        case 0x12560cu: goto label_12560c;
        case 0x125610u: goto label_125610;
        case 0x125614u: goto label_125614;
        case 0x125618u: goto label_125618;
        case 0x12561cu: goto label_12561c;
        case 0x125620u: goto label_125620;
        case 0x125624u: goto label_125624;
        case 0x125628u: goto label_125628;
        case 0x12562cu: goto label_12562c;
        case 0x125630u: goto label_125630;
        case 0x125634u: goto label_125634;
        case 0x125638u: goto label_125638;
        case 0x12563cu: goto label_12563c;
        case 0x125640u: goto label_125640;
        case 0x125644u: goto label_125644;
        case 0x125648u: goto label_125648;
        case 0x12564cu: goto label_12564c;
        case 0x125650u: goto label_125650;
        case 0x125654u: goto label_125654;
        case 0x125658u: goto label_125658;
        case 0x12565cu: goto label_12565c;
        case 0x125660u: goto label_125660;
        case 0x125664u: goto label_125664;
        case 0x125668u: goto label_125668;
        case 0x12566cu: goto label_12566c;
        case 0x125670u: goto label_125670;
        case 0x125674u: goto label_125674;
        case 0x125678u: goto label_125678;
        case 0x12567cu: goto label_12567c;
        case 0x125680u: goto label_125680;
        case 0x125684u: goto label_125684;
        case 0x125688u: goto label_125688;
        case 0x12568cu: goto label_12568c;
        case 0x125690u: goto label_125690;
        case 0x125694u: goto label_125694;
        case 0x125698u: goto label_125698;
        case 0x12569cu: goto label_12569c;
        case 0x1256a0u: goto label_1256a0;
        case 0x1256a4u: goto label_1256a4;
        case 0x1256a8u: goto label_1256a8;
        case 0x1256acu: goto label_1256ac;
        case 0x1256b0u: goto label_1256b0;
        case 0x1256b4u: goto label_1256b4;
        case 0x1256b8u: goto label_1256b8;
        case 0x1256bcu: goto label_1256bc;
        case 0x1256c0u: goto label_1256c0;
        case 0x1256c4u: goto label_1256c4;
        case 0x1256c8u: goto label_1256c8;
        case 0x1256ccu: goto label_1256cc;
        case 0x1256d0u: goto label_1256d0;
        case 0x1256d4u: goto label_1256d4;
        case 0x1256d8u: goto label_1256d8;
        case 0x1256dcu: goto label_1256dc;
        default: break;
    }

    ctx->pc = 0x1254a0u;

label_1254a0:
    // 0x1254a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1254a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1254a4:
    // 0x1254a4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1254a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1254a8:
    // 0x1254a8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1254a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1254ac:
    // 0x1254ac: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1254acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1254b0:
    // 0x1254b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1254b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1254b4:
    // 0x1254b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1254b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1254b8:
    // 0x1254b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1254b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1254bc:
    // 0x1254bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1254bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1254c0:
    // 0x1254c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1254c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1254c4:
    // 0x1254c4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1254c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1254c8:
    // 0x1254c8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1254c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1254cc:
    // 0x1254cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1254ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1254d0:
    // 0x1254d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1254d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1254d4:
    // 0x1254d4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1254d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1254d8:
    // 0x1254d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1254d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1254dc:
    // 0x1254dc: 0xc0493b0  jal         func_124EC0
label_1254e0:
    if (ctx->pc == 0x1254E0u) {
        ctx->pc = 0x1254E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254DCu;
        // 0x1254e0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254E4u;
        goto label_1254e4;
    }
    ctx->pc = 0x1254DCu;
    SET_GPR_U32(ctx, 31, 0x1254E4u);
    ctx->pc = 0x1254E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254DCu;
    // 0x1254e0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1254DCu, 0x1254E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254E4u;
label_1254e4:
    // 0x1254e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1254e8:
    if (ctx->pc == 0x1254E8u) {
        ctx->pc = 0x1254E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254E4u;
        // 0x1254e8: 0x32820006  andi        $v0, $s4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254ECu;
        goto label_1254ec;
    }
    ctx->pc = 0x1254E4u;
    {
        const bool branch_taken_0x1254e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1254E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254E4u;
        // 0x1254e8: 0x32820006  andi        $v0, $s4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254e4) {
            ctx->pc = 0x125518u;
            goto label_125518;
        }
    }
    ctx->pc = 0x1254ECu;
label_1254ec:
    // 0x1254ec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1254ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1254f0:
    // 0x1254f0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1254f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_1254f4:
    // 0x1254f4: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x1254f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
label_1254f8:
    // 0x1254f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1254f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1254fc:
    // 0x1254fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1254fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_125500:
    // 0x125500: 0x1000006b  b           . + 4 + (0x6B << 2)
label_125504:
    if (ctx->pc == 0x125504u) {
        ctx->pc = 0x125504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125500u;
        // 0x125504: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125508u;
        goto label_125508;
    }
    ctx->pc = 0x125500u;
    {
        const bool branch_taken_0x125500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125500u;
        // 0x125504: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125500) {
            ctx->pc = 0x1256B0u;
            goto label_1256b0;
        }
    }
    ctx->pc = 0x125508u;
label_125508:
    // 0x125508: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x125508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_12550c:
    // 0x12550c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12550cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_125510:
    // 0x125510: 0x10000067  b           . + 4 + (0x67 << 2)
label_125514:
    if (ctx->pc == 0x125514u) {
        ctx->pc = 0x125514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125510u;
        // 0x125514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125518u;
        goto label_125518;
    }
    ctx->pc = 0x125510u;
    {
        const bool branch_taken_0x125510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125510u;
        // 0x125514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125510) {
            ctx->pc = 0x1256B0u;
            goto label_1256b0;
        }
    }
    ctx->pc = 0x125518u;
label_125518:
    // 0x125518: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x125518u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_12551c:
    // 0x12551c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125520:
    // 0x125520: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x125520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_125524:
    // 0x125524: 0x12420061  beq         $s2, $v0, . + 4 + (0x61 << 2)
label_125528:
    if (ctx->pc == 0x125528u) {
        ctx->pc = 0x125528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125524u;
        // 0x125528: 0x36970001  ori         $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12552Cu;
        goto label_12552c;
    }
    ctx->pc = 0x125524u;
    {
        const bool branch_taken_0x125524 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x125528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125524u;
        // 0x125528: 0x36970001  ori         $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125524) {
            ctx->pc = 0x1256ACu;
            goto label_1256ac;
        }
    }
    ctx->pc = 0x12552Cu;
label_12552c:
    // 0x12552c: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x12552cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_125530:
    // 0x125530: 0x1288c0  sll         $s1, $s2, 3
    ctx->pc = 0x125530u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_125534:
    // 0x125534: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x125534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_125538:
    // 0x125538: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x125538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12553c:
    // 0x12553c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12553cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_125540:
    // 0x125540: 0x2291821  addu        $v1, $s1, $t1
    ctx->pc = 0x125540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_125544:
    // 0x125544: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x125544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_125548:
    // 0x125548: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12554c:
    // 0x12554c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_125550:
    // 0x125550: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x125550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_125554:
    // 0x125554: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x125554u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_125558:
    // 0x125558: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x125558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_12555c:
    // 0x12555c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_125560:
    if (ctx->pc == 0x125560u) {
        ctx->pc = 0x125560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12555Cu;
        // 0x125560: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125564u;
        goto label_125564;
    }
    ctx->pc = 0x12555Cu;
    {
        const bool branch_taken_0x12555c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x125560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12555Cu;
        // 0x125560: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12555c) {
            ctx->pc = 0x125574u;
            goto label_125574;
        }
    }
    ctx->pc = 0x125564u;
label_125564:
    // 0x125564: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_125568:
    if (ctx->pc == 0x125568u) {
        ctx->pc = 0x125568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125564u;
        // 0x125568: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12556Cu;
        goto label_12556c;
    }
    ctx->pc = 0x125564u;
    {
        const bool branch_taken_0x125564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125564u;
        // 0x125568: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125564) {
            ctx->pc = 0x125574u;
            goto label_125574;
        }
    }
    ctx->pc = 0x12556Cu;
label_12556c:
    // 0x12556c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x12556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_125570:
    // 0x125570: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x125570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125574:
    // 0x125574: 0x2294821  addu        $t1, $s1, $t1
    ctx->pc = 0x125574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_125578:
    // 0x125578: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x125578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12557c:
    // 0x12557c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x12557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_125580:
    // 0x125580: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125584:
    // 0x125584: 0x21f42  srl         $v1, $v0, 29
    ctx->pc = 0x125584u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_125588:
    // 0x125588: 0x21782  srl         $v0, $v0, 30
    ctx->pc = 0x125588u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 30));
label_12558c:
    // 0x12558c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12558cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_125590:
    // 0x125590: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_125594:
    if (ctx->pc == 0x125594u) {
        ctx->pc = 0x125594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125590u;
        // 0x125594: 0x2e3280b  movn        $a1, $s7, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125598u;
        goto label_125598;
    }
    ctx->pc = 0x125590u;
    {
        const bool branch_taken_0x125590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x125594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125590u;
        // 0x125594: 0x2e3280b  movn        $a1, $s7, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125590) {
            ctx->pc = 0x1255A0u;
            goto label_1255a0;
        }
    }
    ctx->pc = 0x125598u;
label_125598:
    // 0x125598: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x125598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_12559c:
    // 0x12559c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x12559cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1255a0:
    // 0x1255a0: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x1255a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1255a4:
    // 0x1255a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1255a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1255a8:
    // 0x1255a8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1255a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1255ac:
    // 0x1255ac: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1255acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1255b0:
    // 0x1255b0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1255b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1255b4:
    // 0x1255b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1255b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1255b8:
    // 0x1255b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1255b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1255bc:
    // 0x1255bc: 0x40f809  jalr        $v0
label_1255c0:
    if (ctx->pc == 0x1255C0u) {
        ctx->pc = 0x1255C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255BCu;
        // 0x1255c0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1255C4u;
        goto label_1255c4;
    }
    ctx->pc = 0x1255BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1255C4u);
        ctx->pc = 0x1255C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255BCu;
        // 0x1255c0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1255BCu, 0x1255C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1255C4u;
label_1255c4:
    // 0x1255c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1255c8:
    if (ctx->pc == 0x1255C8u) {
        ctx->pc = 0x1255C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255C4u;
        // 0x1255c8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1255CCu;
        goto label_1255cc;
    }
    ctx->pc = 0x1255C4u;
    {
        const bool branch_taken_0x1255c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1255C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255C4u;
        // 0x1255c8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255c4) {
            ctx->pc = 0x1255DCu;
            goto label_1255dc;
        }
    }
    ctx->pc = 0x1255CCu;
label_1255cc:
    // 0x1255cc: 0x30630005  andi        $v1, $v1, 0x5
    ctx->pc = 0x1255ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)5);
label_1255d0:
    // 0x1255d0: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x1255d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_1255d4:
    // 0x1255d4: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_1255d8:
    if (ctx->pc == 0x1255D8u) {
        ctx->pc = 0x1255D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255D4u;
        // 0x1255d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1255DCu;
        goto label_1255dc;
    }
    ctx->pc = 0x1255D4u;
    {
        const bool branch_taken_0x1255d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1255D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255D4u;
        // 0x1255d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255d4) {
            ctx->pc = 0x1256B0u;
            goto label_1256b0;
        }
    }
    ctx->pc = 0x1255DCu;
label_1255dc:
    // 0x1255dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1255dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1255e0:
    // 0x1255e0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_1255e4:
    if (ctx->pc == 0x1255E4u) {
        ctx->pc = 0x1255E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255E0u;
        // 0x1255e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1255E8u;
        goto label_1255e8;
    }
    ctx->pc = 0x1255E0u;
    {
        const bool branch_taken_0x1255e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1255E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255E0u;
        // 0x1255e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255e0) {
            ctx->pc = 0x12569Cu;
            goto label_12569c;
        }
    }
    ctx->pc = 0x1255E8u;
label_1255e8:
    // 0x1255e8: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_1255ec:
    if (ctx->pc == 0x1255ECu) {
        ctx->pc = 0x1255ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255E8u;
        // 0x1255ec: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1255F0u;
        goto label_1255f0;
    }
    ctx->pc = 0x1255E8u;
    {
        const bool branch_taken_0x1255e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1255e8) {
            ctx->pc = 0x1255ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1255E8u;
            // 0x1255ec: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125618u;
            goto label_125618;
        }
    }
    ctx->pc = 0x1255F0u;
label_1255f0:
    // 0x1255f0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1255f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1255f4:
    // 0x1255f4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1255f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1255f8:
    // 0x1255f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1255f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1255fc:
    // 0x1255fc: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1255fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_125600:
    // 0x125600: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x125600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_125604:
    // 0x125604: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_125608:
    if (ctx->pc == 0x125608u) {
        ctx->pc = 0x125608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125604u;
        // 0x125608: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12560Cu;
        goto label_12560c;
    }
    ctx->pc = 0x125604u;
    {
        const bool branch_taken_0x125604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125604) {
            ctx->pc = 0x125608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125604u;
            // 0x125608: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125618u;
            goto label_125618;
        }
    }
    ctx->pc = 0x12560Cu;
label_12560c:
    // 0x12560c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125610:
    // 0x125610: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x125610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_125614:
    // 0x125614: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x125614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_125618:
    // 0x125618: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
label_12561c:
    if (ctx->pc == 0x12561Cu) {
        ctx->pc = 0x12561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125618u;
        // 0x12561c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125620u;
        goto label_125620;
    }
    ctx->pc = 0x125618u;
    {
        const bool branch_taken_0x125618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x125618) {
            ctx->pc = 0x12561Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125618u;
            // 0x12561c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125640u;
            goto label_125640;
        }
    }
    ctx->pc = 0x125620u;
label_125620:
    // 0x125620: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x125620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_125624:
    // 0x125624: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x125624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_125628:
    // 0x125628: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x125628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12562c:
    // 0x12562c: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x12562cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_125630:
    // 0x125630: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x125630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_125634:
    // 0x125634: 0x10000019  b           . + 4 + (0x19 << 2)
label_125638:
    if (ctx->pc == 0x125638u) {
        ctx->pc = 0x125638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125634u;
        // 0x125638: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12563Cu;
        goto label_12563c;
    }
    ctx->pc = 0x125634u;
    {
        const bool branch_taken_0x125634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125634u;
        // 0x125638: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125634) {
            ctx->pc = 0x12569Cu;
            goto label_12569c;
        }
    }
    ctx->pc = 0x12563Cu;
label_12563c:
    // 0x12563c: 0x0  nop
    ctx->pc = 0x12563cu;
    // NOP
label_125640:
    // 0x125640: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x125640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125644:
    // 0x125644: 0x1462ffb0  bne         $v1, $v0, . + 4 + (-0x50 << 2)
label_125648:
    if (ctx->pc == 0x125648u) {
        ctx->pc = 0x125648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125644u;
        // 0x125648: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12564Cu;
        goto label_12564c;
    }
    ctx->pc = 0x125644u;
    {
        const bool branch_taken_0x125644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x125648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125644u;
        // 0x125648: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125644) {
            ctx->pc = 0x125508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125508;
        }
    }
    ctx->pc = 0x12564Cu;
label_12564c:
    // 0x12564c: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
label_125650:
    if (ctx->pc == 0x125650u) {
        ctx->pc = 0x125650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12564Cu;
        // 0x125650: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125654u;
        goto label_125654;
    }
    ctx->pc = 0x12564Cu;
    {
        const bool branch_taken_0x12564c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12564c) {
            ctx->pc = 0x125650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12564Cu;
            // 0x125650: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125690u;
            goto label_125690;
        }
    }
    ctx->pc = 0x125654u;
label_125654:
    // 0x125654: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x125654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_125658:
    // 0x125658: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x125658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_12565c:
    // 0x12565c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_125660:
    if (ctx->pc == 0x125660u) {
        ctx->pc = 0x125660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12565Cu;
        // 0x125660: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125664u;
        goto label_125664;
    }
    ctx->pc = 0x12565Cu;
    {
        const bool branch_taken_0x12565c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x125660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12565Cu;
        // 0x125660: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12565c) {
            ctx->pc = 0x125680u;
            goto label_125680;
        }
    }
    ctx->pc = 0x125664u;
label_125664:
    // 0x125664: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_125668:
    if (ctx->pc == 0x125668u) {
        ctx->pc = 0x125668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125664u;
        // 0x125668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12566Cu;
        goto label_12566c;
    }
    ctx->pc = 0x125664u;
    {
        const bool branch_taken_0x125664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x125668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125664u;
        // 0x125668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125664) {
            ctx->pc = 0x125684u;
            goto label_125684;
        }
    }
    ctx->pc = 0x12566Cu;
label_12566c:
    // 0x12566c: 0xc0493b0  jal         func_124EC0
label_125670:
    if (ctx->pc == 0x125670u) {
        ctx->pc = 0x125674u;
        goto label_125674;
    }
    ctx->pc = 0x12566Cu;
    SET_GPR_U32(ctx, 31, 0x125674u);
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x12566Cu, 0x125674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125674u;
label_125674:
    // 0x125674: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_125678:
    if (ctx->pc == 0x125678u) {
        ctx->pc = 0x125678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125674u;
        // 0x125678: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12567Cu;
        goto label_12567c;
    }
    ctx->pc = 0x125674u;
    {
        const bool branch_taken_0x125674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125674) {
            ctx->pc = 0x125678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125674u;
            // 0x125678: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125690u;
            goto label_125690;
        }
    }
    ctx->pc = 0x12567Cu;
label_12567c:
    // 0x12567c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125680:
    // 0x125680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125684:
    // 0x125684: 0x1000000a  b           . + 4 + (0xA << 2)
label_125688:
    if (ctx->pc == 0x125688u) {
        ctx->pc = 0x125688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125684u;
        // 0x125688: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12568Cu;
        goto label_12568c;
    }
    ctx->pc = 0x125684u;
    {
        const bool branch_taken_0x125684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125684u;
        // 0x125688: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125684) {
            ctx->pc = 0x1256B0u;
            goto label_1256b0;
        }
    }
    ctx->pc = 0x12568Cu;
label_12568c:
    // 0x12568c: 0x0  nop
    ctx->pc = 0x12568cu;
    // NOP
label_125690:
    // 0x125690: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x125690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_125694:
    // 0x125694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_125698:
    // 0x125698: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x125698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_12569c:
    // 0x12569c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12569cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1256a0:
    // 0x1256a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1256a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1256a4:
    // 0x1256a4: 0x5642ffa2  bnel        $s2, $v0, . + 4 + (-0x5E << 2)
label_1256a8:
    if (ctx->pc == 0x1256A8u) {
        ctx->pc = 0x1256A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256A4u;
        // 0x1256a8: 0x8e690008  lw          $t1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1256ACu;
        goto label_1256ac;
    }
    ctx->pc = 0x1256A4u;
    {
        const bool branch_taken_0x1256a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1256a4) {
            ctx->pc = 0x1256A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1256A4u;
            // 0x1256a8: 0x8e690008  lw          $t1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125530;
        }
    }
    ctx->pc = 0x1256ACu;
label_1256ac:
    // 0x1256ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1256acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1256b0:
    // 0x1256b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1256b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1256b4:
    // 0x1256b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1256b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1256b8:
    // 0x1256b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1256b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1256bc:
    // 0x1256bc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1256bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1256c0:
    // 0x1256c0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1256c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1256c4:
    // 0x1256c4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1256c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1256c8:
    // 0x1256c8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1256c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1256cc:
    // 0x1256cc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1256ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1256d0:
    // 0x1256d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1256d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1256d4:
    // 0x1256d4: 0x3e00008  jr          $ra
label_1256d8:
    if (ctx->pc == 0x1256D8u) {
        ctx->pc = 0x1256D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256D4u;
        // 0x1256d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1256DCu;
        goto label_1256dc;
    }
    ctx->pc = 0x1256D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1256D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256D4u;
        // 0x1256d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1256D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1256DCu;
label_1256dc:
    // 0x1256dc: 0x0  nop
    ctx->pc = 0x1256dcu;
    // NOP
    ctx->pc = 0x1256e0u;
}
