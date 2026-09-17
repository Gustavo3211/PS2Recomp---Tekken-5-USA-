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

// Function: sub_00365548
// Address: 0x365548 - 0x365ab8
void sub_00365548_0x365548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365548_0x365548");
#endif

    switch (ctx->pc) {
        case 0x365548u: goto label_365548;
        case 0x36554cu: goto label_36554c;
        case 0x365550u: goto label_365550;
        case 0x365554u: goto label_365554;
        case 0x365558u: goto label_365558;
        case 0x36555cu: goto label_36555c;
        case 0x365560u: goto label_365560;
        case 0x365564u: goto label_365564;
        case 0x365568u: goto label_365568;
        case 0x36556cu: goto label_36556c;
        case 0x365570u: goto label_365570;
        case 0x365574u: goto label_365574;
        case 0x365578u: goto label_365578;
        case 0x36557cu: goto label_36557c;
        case 0x365580u: goto label_365580;
        case 0x365584u: goto label_365584;
        case 0x365588u: goto label_365588;
        case 0x36558cu: goto label_36558c;
        case 0x365590u: goto label_365590;
        case 0x365594u: goto label_365594;
        case 0x365598u: goto label_365598;
        case 0x36559cu: goto label_36559c;
        case 0x3655a0u: goto label_3655a0;
        case 0x3655a4u: goto label_3655a4;
        case 0x3655a8u: goto label_3655a8;
        case 0x3655acu: goto label_3655ac;
        case 0x3655b0u: goto label_3655b0;
        case 0x3655b4u: goto label_3655b4;
        case 0x3655b8u: goto label_3655b8;
        case 0x3655bcu: goto label_3655bc;
        case 0x3655c0u: goto label_3655c0;
        case 0x3655c4u: goto label_3655c4;
        case 0x3655c8u: goto label_3655c8;
        case 0x3655ccu: goto label_3655cc;
        case 0x3655d0u: goto label_3655d0;
        case 0x3655d4u: goto label_3655d4;
        case 0x3655d8u: goto label_3655d8;
        case 0x3655dcu: goto label_3655dc;
        case 0x3655e0u: goto label_3655e0;
        case 0x3655e4u: goto label_3655e4;
        case 0x3655e8u: goto label_3655e8;
        case 0x3655ecu: goto label_3655ec;
        case 0x3655f0u: goto label_3655f0;
        case 0x3655f4u: goto label_3655f4;
        case 0x3655f8u: goto label_3655f8;
        case 0x3655fcu: goto label_3655fc;
        case 0x365600u: goto label_365600;
        case 0x365604u: goto label_365604;
        case 0x365608u: goto label_365608;
        case 0x36560cu: goto label_36560c;
        case 0x365610u: goto label_365610;
        case 0x365614u: goto label_365614;
        case 0x365618u: goto label_365618;
        case 0x36561cu: goto label_36561c;
        case 0x365620u: goto label_365620;
        case 0x365624u: goto label_365624;
        case 0x365628u: goto label_365628;
        case 0x36562cu: goto label_36562c;
        case 0x365630u: goto label_365630;
        case 0x365634u: goto label_365634;
        case 0x365638u: goto label_365638;
        case 0x36563cu: goto label_36563c;
        case 0x365640u: goto label_365640;
        case 0x365644u: goto label_365644;
        case 0x365648u: goto label_365648;
        case 0x36564cu: goto label_36564c;
        case 0x365650u: goto label_365650;
        case 0x365654u: goto label_365654;
        case 0x365658u: goto label_365658;
        case 0x36565cu: goto label_36565c;
        case 0x365660u: goto label_365660;
        case 0x365664u: goto label_365664;
        case 0x365668u: goto label_365668;
        case 0x36566cu: goto label_36566c;
        case 0x365670u: goto label_365670;
        case 0x365674u: goto label_365674;
        case 0x365678u: goto label_365678;
        case 0x36567cu: goto label_36567c;
        case 0x365680u: goto label_365680;
        case 0x365684u: goto label_365684;
        case 0x365688u: goto label_365688;
        case 0x36568cu: goto label_36568c;
        case 0x365690u: goto label_365690;
        case 0x365694u: goto label_365694;
        case 0x365698u: goto label_365698;
        case 0x36569cu: goto label_36569c;
        case 0x3656a0u: goto label_3656a0;
        case 0x3656a4u: goto label_3656a4;
        case 0x3656a8u: goto label_3656a8;
        case 0x3656acu: goto label_3656ac;
        case 0x3656b0u: goto label_3656b0;
        case 0x3656b4u: goto label_3656b4;
        case 0x3656b8u: goto label_3656b8;
        case 0x3656bcu: goto label_3656bc;
        case 0x3656c0u: goto label_3656c0;
        case 0x3656c4u: goto label_3656c4;
        case 0x3656c8u: goto label_3656c8;
        case 0x3656ccu: goto label_3656cc;
        case 0x3656d0u: goto label_3656d0;
        case 0x3656d4u: goto label_3656d4;
        case 0x3656d8u: goto label_3656d8;
        case 0x3656dcu: goto label_3656dc;
        case 0x3656e0u: goto label_3656e0;
        case 0x3656e4u: goto label_3656e4;
        case 0x3656e8u: goto label_3656e8;
        case 0x3656ecu: goto label_3656ec;
        case 0x3656f0u: goto label_3656f0;
        case 0x3656f4u: goto label_3656f4;
        case 0x3656f8u: goto label_3656f8;
        case 0x3656fcu: goto label_3656fc;
        case 0x365700u: goto label_365700;
        case 0x365704u: goto label_365704;
        case 0x365708u: goto label_365708;
        case 0x36570cu: goto label_36570c;
        case 0x365710u: goto label_365710;
        case 0x365714u: goto label_365714;
        case 0x365718u: goto label_365718;
        case 0x36571cu: goto label_36571c;
        case 0x365720u: goto label_365720;
        case 0x365724u: goto label_365724;
        case 0x365728u: goto label_365728;
        case 0x36572cu: goto label_36572c;
        case 0x365730u: goto label_365730;
        case 0x365734u: goto label_365734;
        case 0x365738u: goto label_365738;
        case 0x36573cu: goto label_36573c;
        case 0x365740u: goto label_365740;
        case 0x365744u: goto label_365744;
        case 0x365748u: goto label_365748;
        case 0x36574cu: goto label_36574c;
        case 0x365750u: goto label_365750;
        case 0x365754u: goto label_365754;
        case 0x365758u: goto label_365758;
        case 0x36575cu: goto label_36575c;
        case 0x365760u: goto label_365760;
        case 0x365764u: goto label_365764;
        case 0x365768u: goto label_365768;
        case 0x36576cu: goto label_36576c;
        case 0x365770u: goto label_365770;
        case 0x365774u: goto label_365774;
        case 0x365778u: goto label_365778;
        case 0x36577cu: goto label_36577c;
        case 0x365780u: goto label_365780;
        case 0x365784u: goto label_365784;
        case 0x365788u: goto label_365788;
        case 0x36578cu: goto label_36578c;
        case 0x365790u: goto label_365790;
        case 0x365794u: goto label_365794;
        case 0x365798u: goto label_365798;
        case 0x36579cu: goto label_36579c;
        case 0x3657a0u: goto label_3657a0;
        case 0x3657a4u: goto label_3657a4;
        case 0x3657a8u: goto label_3657a8;
        case 0x3657acu: goto label_3657ac;
        case 0x3657b0u: goto label_3657b0;
        case 0x3657b4u: goto label_3657b4;
        case 0x3657b8u: goto label_3657b8;
        case 0x3657bcu: goto label_3657bc;
        case 0x3657c0u: goto label_3657c0;
        case 0x3657c4u: goto label_3657c4;
        case 0x3657c8u: goto label_3657c8;
        case 0x3657ccu: goto label_3657cc;
        case 0x3657d0u: goto label_3657d0;
        case 0x3657d4u: goto label_3657d4;
        case 0x3657d8u: goto label_3657d8;
        case 0x3657dcu: goto label_3657dc;
        case 0x3657e0u: goto label_3657e0;
        case 0x3657e4u: goto label_3657e4;
        case 0x3657e8u: goto label_3657e8;
        case 0x3657ecu: goto label_3657ec;
        case 0x3657f0u: goto label_3657f0;
        case 0x3657f4u: goto label_3657f4;
        case 0x3657f8u: goto label_3657f8;
        case 0x3657fcu: goto label_3657fc;
        case 0x365800u: goto label_365800;
        case 0x365804u: goto label_365804;
        case 0x365808u: goto label_365808;
        case 0x36580cu: goto label_36580c;
        case 0x365810u: goto label_365810;
        case 0x365814u: goto label_365814;
        case 0x365818u: goto label_365818;
        case 0x36581cu: goto label_36581c;
        case 0x365820u: goto label_365820;
        case 0x365824u: goto label_365824;
        case 0x365828u: goto label_365828;
        case 0x36582cu: goto label_36582c;
        case 0x365830u: goto label_365830;
        case 0x365834u: goto label_365834;
        case 0x365838u: goto label_365838;
        case 0x36583cu: goto label_36583c;
        case 0x365840u: goto label_365840;
        case 0x365844u: goto label_365844;
        case 0x365848u: goto label_365848;
        case 0x36584cu: goto label_36584c;
        case 0x365850u: goto label_365850;
        case 0x365854u: goto label_365854;
        case 0x365858u: goto label_365858;
        case 0x36585cu: goto label_36585c;
        case 0x365860u: goto label_365860;
        case 0x365864u: goto label_365864;
        case 0x365868u: goto label_365868;
        case 0x36586cu: goto label_36586c;
        case 0x365870u: goto label_365870;
        case 0x365874u: goto label_365874;
        case 0x365878u: goto label_365878;
        case 0x36587cu: goto label_36587c;
        case 0x365880u: goto label_365880;
        case 0x365884u: goto label_365884;
        case 0x365888u: goto label_365888;
        case 0x36588cu: goto label_36588c;
        case 0x365890u: goto label_365890;
        case 0x365894u: goto label_365894;
        case 0x365898u: goto label_365898;
        case 0x36589cu: goto label_36589c;
        case 0x3658a0u: goto label_3658a0;
        case 0x3658a4u: goto label_3658a4;
        case 0x3658a8u: goto label_3658a8;
        case 0x3658acu: goto label_3658ac;
        case 0x3658b0u: goto label_3658b0;
        case 0x3658b4u: goto label_3658b4;
        case 0x3658b8u: goto label_3658b8;
        case 0x3658bcu: goto label_3658bc;
        case 0x3658c0u: goto label_3658c0;
        case 0x3658c4u: goto label_3658c4;
        case 0x3658c8u: goto label_3658c8;
        case 0x3658ccu: goto label_3658cc;
        case 0x3658d0u: goto label_3658d0;
        case 0x3658d4u: goto label_3658d4;
        case 0x3658d8u: goto label_3658d8;
        case 0x3658dcu: goto label_3658dc;
        case 0x3658e0u: goto label_3658e0;
        case 0x3658e4u: goto label_3658e4;
        case 0x3658e8u: goto label_3658e8;
        case 0x3658ecu: goto label_3658ec;
        case 0x3658f0u: goto label_3658f0;
        case 0x3658f4u: goto label_3658f4;
        case 0x3658f8u: goto label_3658f8;
        case 0x3658fcu: goto label_3658fc;
        case 0x365900u: goto label_365900;
        case 0x365904u: goto label_365904;
        case 0x365908u: goto label_365908;
        case 0x36590cu: goto label_36590c;
        case 0x365910u: goto label_365910;
        case 0x365914u: goto label_365914;
        case 0x365918u: goto label_365918;
        case 0x36591cu: goto label_36591c;
        case 0x365920u: goto label_365920;
        case 0x365924u: goto label_365924;
        case 0x365928u: goto label_365928;
        case 0x36592cu: goto label_36592c;
        case 0x365930u: goto label_365930;
        case 0x365934u: goto label_365934;
        case 0x365938u: goto label_365938;
        case 0x36593cu: goto label_36593c;
        case 0x365940u: goto label_365940;
        case 0x365944u: goto label_365944;
        case 0x365948u: goto label_365948;
        case 0x36594cu: goto label_36594c;
        case 0x365950u: goto label_365950;
        case 0x365954u: goto label_365954;
        case 0x365958u: goto label_365958;
        case 0x36595cu: goto label_36595c;
        case 0x365960u: goto label_365960;
        case 0x365964u: goto label_365964;
        case 0x365968u: goto label_365968;
        case 0x36596cu: goto label_36596c;
        case 0x365970u: goto label_365970;
        case 0x365974u: goto label_365974;
        case 0x365978u: goto label_365978;
        case 0x36597cu: goto label_36597c;
        case 0x365980u: goto label_365980;
        case 0x365984u: goto label_365984;
        case 0x365988u: goto label_365988;
        case 0x36598cu: goto label_36598c;
        case 0x365990u: goto label_365990;
        case 0x365994u: goto label_365994;
        case 0x365998u: goto label_365998;
        case 0x36599cu: goto label_36599c;
        case 0x3659a0u: goto label_3659a0;
        case 0x3659a4u: goto label_3659a4;
        case 0x3659a8u: goto label_3659a8;
        case 0x3659acu: goto label_3659ac;
        case 0x3659b0u: goto label_3659b0;
        case 0x3659b4u: goto label_3659b4;
        case 0x3659b8u: goto label_3659b8;
        case 0x3659bcu: goto label_3659bc;
        case 0x3659c0u: goto label_3659c0;
        case 0x3659c4u: goto label_3659c4;
        case 0x3659c8u: goto label_3659c8;
        case 0x3659ccu: goto label_3659cc;
        case 0x3659d0u: goto label_3659d0;
        case 0x3659d4u: goto label_3659d4;
        case 0x3659d8u: goto label_3659d8;
        case 0x3659dcu: goto label_3659dc;
        case 0x3659e0u: goto label_3659e0;
        case 0x3659e4u: goto label_3659e4;
        case 0x3659e8u: goto label_3659e8;
        case 0x3659ecu: goto label_3659ec;
        case 0x3659f0u: goto label_3659f0;
        case 0x3659f4u: goto label_3659f4;
        case 0x3659f8u: goto label_3659f8;
        case 0x3659fcu: goto label_3659fc;
        case 0x365a00u: goto label_365a00;
        case 0x365a04u: goto label_365a04;
        case 0x365a08u: goto label_365a08;
        case 0x365a0cu: goto label_365a0c;
        case 0x365a10u: goto label_365a10;
        case 0x365a14u: goto label_365a14;
        case 0x365a18u: goto label_365a18;
        case 0x365a1cu: goto label_365a1c;
        case 0x365a20u: goto label_365a20;
        case 0x365a24u: goto label_365a24;
        case 0x365a28u: goto label_365a28;
        case 0x365a2cu: goto label_365a2c;
        case 0x365a30u: goto label_365a30;
        case 0x365a34u: goto label_365a34;
        case 0x365a38u: goto label_365a38;
        case 0x365a3cu: goto label_365a3c;
        case 0x365a40u: goto label_365a40;
        case 0x365a44u: goto label_365a44;
        case 0x365a48u: goto label_365a48;
        case 0x365a4cu: goto label_365a4c;
        case 0x365a50u: goto label_365a50;
        case 0x365a54u: goto label_365a54;
        case 0x365a58u: goto label_365a58;
        case 0x365a5cu: goto label_365a5c;
        case 0x365a60u: goto label_365a60;
        case 0x365a64u: goto label_365a64;
        case 0x365a68u: goto label_365a68;
        case 0x365a6cu: goto label_365a6c;
        case 0x365a70u: goto label_365a70;
        case 0x365a74u: goto label_365a74;
        case 0x365a78u: goto label_365a78;
        case 0x365a7cu: goto label_365a7c;
        case 0x365a80u: goto label_365a80;
        case 0x365a84u: goto label_365a84;
        case 0x365a88u: goto label_365a88;
        case 0x365a8cu: goto label_365a8c;
        case 0x365a90u: goto label_365a90;
        case 0x365a94u: goto label_365a94;
        case 0x365a98u: goto label_365a98;
        case 0x365a9cu: goto label_365a9c;
        case 0x365aa0u: goto label_365aa0;
        case 0x365aa4u: goto label_365aa4;
        case 0x365aa8u: goto label_365aa8;
        case 0x365aacu: goto label_365aac;
        case 0x365ab0u: goto label_365ab0;
        case 0x365ab4u: goto label_365ab4;
        default: break;
    }

    ctx->pc = 0x365548u;

label_365548:
    // 0x365548: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x365548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36554c:
    // 0x36554c: 0x80c30008  lb          $v1, 0x8($a2)
    ctx->pc = 0x36554cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
label_365550:
    // 0x365550: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_365554:
    if (ctx->pc == 0x365554u) {
        ctx->pc = 0x365554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365550u;
        // 0x365554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365558u;
        goto label_365558;
    }
    ctx->pc = 0x365550u;
    {
        const bool branch_taken_0x365550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x365554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365550u;
        // 0x365554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365550) {
            ctx->pc = 0x3655C0u;
            goto label_3655c0;
        }
    }
    ctx->pc = 0x365558u;
label_365558:
    // 0x365558: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x365558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_36555c:
    // 0x36555c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x36555cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_365560:
    // 0x365560: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_365564:
    if (ctx->pc == 0x365564u) {
        ctx->pc = 0x365564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365560u;
        // 0x365564: 0x24a3000f  addiu       $v1, $a1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365568u;
        goto label_365568;
    }
    ctx->pc = 0x365560u;
    {
        const bool branch_taken_0x365560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x365564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365560u;
        // 0x365564: 0x24a3000f  addiu       $v1, $a1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365560) {
            ctx->pc = 0x3655C0u;
            goto label_3655c0;
        }
    }
    ctx->pc = 0x365568u;
label_365568:
    // 0x365568: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x365568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_36556c:
    // 0x36556c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x36556cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_365570:
    // 0x365570: 0x80c409dc  lb          $a0, 0x9DC($a2)
    ctx->pc = 0x365570u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2524)));
label_365574:
    // 0x365574: 0x51903  sra         $v1, $a1, 4
    ctx->pc = 0x365574u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 4));
label_365578:
    // 0x365578: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x365578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_36557c:
    // 0x36557c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36557cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_365580:
    // 0x365580: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x365580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_365584:
    // 0x365584: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_365588:
    if (ctx->pc == 0x365588u) {
        ctx->pc = 0x365588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365584u;
        // 0x365588: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36558Cu;
        goto label_36558c;
    }
    ctx->pc = 0x365584u;
    {
        const bool branch_taken_0x365584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x365584) {
            ctx->pc = 0x365588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365584u;
            // 0x365588: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36558Cu;
            goto label_36558c;
        }
    }
    ctx->pc = 0x36558Cu;
label_36558c:
    // 0x36558c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x36558cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_365590:
    // 0x365590: 0xc4c109d0  lwc1        $f1, 0x9D0($a2)
    ctx->pc = 0x365590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365594:
    // 0x365594: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x365594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_365598:
    // 0x365598: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x365598u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_36559c:
    // 0x36559c: 0x1012  mflo        $v0
    ctx->pc = 0x36559cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3655a0:
    // 0x3655a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3655a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3655a4:
    // 0x3655a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3655a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3655a8:
    // 0x3655a8: 0x0  nop
    ctx->pc = 0x3655a8u;
    // NOP
label_3655ac:
    // 0x3655ac: 0x0  nop
    ctx->pc = 0x3655acu;
    // NOP
label_3655b0:
    // 0x3655b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3655b0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_3655b4:
    // 0x3655b4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3655b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3655b8:
    // 0x3655b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3655b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3655bc:
    // 0x3655bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3655bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3655c0:
    // 0x3655c0: 0x3e00008  jr          $ra
label_3655c4:
    if (ctx->pc == 0x3655C4u) {
        ctx->pc = 0x3655C8u;
        goto label_3655c8;
    }
    ctx->pc = 0x3655C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3655C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3655C8u;
label_3655c8:
    // 0x3655c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3655c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3655cc:
    // 0x3655cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3655ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3655d0:
    // 0x3655d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3655d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3655d4:
    // 0x3655d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3655d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3655d8:
    // 0x3655d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3655d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3655dc:
    // 0x3655dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3655dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3655e0:
    // 0x3655e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3655e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3655e4:
    // 0x3655e4: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x3655e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_3655e8:
    // 0x3655e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3655ec:
    if (ctx->pc == 0x3655ECu) {
        ctx->pc = 0x3655ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655E8u;
        // 0x3655ec: 0x8e120988  lw          $s2, 0x988($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3655F0u;
        goto label_3655f0;
    }
    ctx->pc = 0x3655E8u;
    {
        const bool branch_taken_0x3655e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3655ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655E8u;
        // 0x3655ec: 0x8e120988  lw          $s2, 0x988($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3655e8) {
            ctx->pc = 0x365608u;
            goto label_365608;
        }
    }
    ctx->pc = 0x3655F0u;
label_3655f0:
    // 0x3655f0: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x3655f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_3655f4:
    // 0x3655f4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x3655f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_3655f8:
    // 0x3655f8: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x3655f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_3655fc:
    // 0x3655fc: 0x1000005b  b           . + 4 + (0x5B << 2)
label_365600:
    if (ctx->pc == 0x365600u) {
        ctx->pc = 0x365600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655FCu;
        // 0x365600: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365604u;
        goto label_365604;
    }
    ctx->pc = 0x3655FCu;
    {
        const bool branch_taken_0x3655fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655FCu;
        // 0x365600: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3655fc) {
            ctx->pc = 0x36576Cu;
            goto label_36576c;
        }
    }
    ctx->pc = 0x365604u;
label_365604:
    // 0x365604: 0x0  nop
    ctx->pc = 0x365604u;
    // NOP
label_365608:
    // 0x365608: 0x820209dc  lb          $v0, 0x9DC($s0)
    ctx->pc = 0x365608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2524)));
label_36560c:
    // 0x36560c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x36560cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_365610:
    // 0x365610: 0x8e0509e4  lw          $a1, 0x9E4($s0)
    ctx->pc = 0x365610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2532)));
label_365614:
    // 0x365614: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x365614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
label_365618:
    // 0x365618: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x365618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_36561c:
    // 0x36561c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x36561cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_365620:
    // 0x365620: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x365620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_365624:
    // 0x365624: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x365624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_365628:
    // 0x365628: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x365628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_36562c:
    // 0x36562c: 0x8e0309e8  lw          $v1, 0x9E8($s0)
    ctx->pc = 0x36562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2536)));
label_365630:
    // 0x365630: 0xa2260008  sb          $a2, 0x8($s1)
    ctx->pc = 0x365630u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 6));
label_365634:
    // 0x365634: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x365634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_365638:
    // 0x365638: 0x920209dc  lbu         $v0, 0x9DC($s0)
    ctx->pc = 0x365638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2524)));
label_36563c:
    // 0x36563c: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x36563cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
label_365640:
    // 0x365640: 0x8e0309ec  lw          $v1, 0x9EC($s0)
    ctx->pc = 0x365640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2540)));
label_365644:
    // 0x365644: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x365644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_365648:
    // 0x365648: 0x960209f0  lhu         $v0, 0x9F0($s0)
    ctx->pc = 0x365648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2544)));
label_36564c:
    // 0x36564c: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x36564cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_365650:
    // 0x365650: 0xc60009f8  lwc1        $f0, 0x9F8($s0)
    ctx->pc = 0x365650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365654:
    // 0x365654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x365654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_365658:
    // 0x365658: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x365658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36565c:
    // 0x36565c: 0xc60209c0  lwc1        $f2, 0x9C0($s0)
    ctx->pc = 0x36565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_365660:
    // 0x365660: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x365660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_365664:
    // 0x365664: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x365664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_365668:
    // 0x365668: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x365668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_36566c:
    // 0x36566c: 0x0  nop
    ctx->pc = 0x36566cu;
    // NOP
label_365670:
    // 0x365670: 0x0  nop
    ctx->pc = 0x365670u;
    // NOP
label_365674:
    // 0x365674: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x365674u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_365678:
    // 0x365678: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x365678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_36567c:
    // 0x36567c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x36567cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_365680:
    // 0x365680: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x365680u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
label_365684:
    // 0x365684: 0x960309fc  lhu         $v1, 0x9FC($s0)
    ctx->pc = 0x365684u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2556)));
label_365688:
    // 0x365688: 0xa6230016  sh          $v1, 0x16($s1)
    ctx->pc = 0x365688u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 3));
label_36568c:
    // 0x36568c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x36568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_365690:
    // 0x365690: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x365690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_365694:
    // 0x365694: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x365694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_365698:
    // 0x365698: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x365698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_36569c:
    // 0x36569c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x36569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3656a0:
    // 0x3656a0: 0xc0d9552  jal         func_365548
label_3656a4:
    if (ctx->pc == 0x3656A4u) {
        ctx->pc = 0x3656A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656A0u;
        // 0x3656a4: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3656A8u;
        goto label_3656a8;
    }
    ctx->pc = 0x3656A0u;
    SET_GPR_U32(ctx, 31, 0x3656A8u);
    ctx->pc = 0x3656A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3656A0u;
    // 0x3656a4: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365548u;
    goto label_365548;
    ctx->pc = 0x3656A8u;
label_3656a8:
    // 0x3656a8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3656a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3656ac:
    // 0x3656ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3656acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3656b0:
    // 0x3656b0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_3656b4:
    if (ctx->pc == 0x3656B4u) {
        ctx->pc = 0x3656B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656B0u;
        // 0x3656b4: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3656B8u;
        goto label_3656b8;
    }
    ctx->pc = 0x3656B0u;
    {
        const bool branch_taken_0x3656b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3656B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656B0u;
        // 0x3656b4: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3656b0) {
            ctx->pc = 0x3656C0u;
            goto label_3656c0;
        }
    }
    ctx->pc = 0x3656B8u;
label_3656b8:
    // 0x3656b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3656b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3656bc:
    // 0x3656bc: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3656bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_3656c0:
    // 0x3656c0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3656c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3656c4:
    // 0x3656c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3656c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3656c8:
    // 0x3656c8: 0x10650021  beq         $v1, $a1, . + 4 + (0x21 << 2)
label_3656cc:
    if (ctx->pc == 0x3656CCu) {
        ctx->pc = 0x3656CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656C8u;
        // 0x3656cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3656D0u;
        goto label_3656d0;
    }
    ctx->pc = 0x3656C8u;
    {
        const bool branch_taken_0x3656c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3656CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656C8u;
        // 0x3656cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3656c8) {
            ctx->pc = 0x365750u;
            goto label_365750;
        }
    }
    ctx->pc = 0x3656D0u;
label_3656d0:
    // 0x3656d0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3656d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3656d4:
    // 0x3656d4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3656d8:
    if (ctx->pc == 0x3656D8u) {
        ctx->pc = 0x3656D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656D4u;
        // 0x3656d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3656DCu;
        goto label_3656dc;
    }
    ctx->pc = 0x3656D4u;
    {
        const bool branch_taken_0x3656d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3656d4) {
            ctx->pc = 0x3656D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3656D4u;
            // 0x3656d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3656F0u;
            goto label_3656f0;
        }
    }
    ctx->pc = 0x3656DCu;
label_3656dc:
    // 0x3656dc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3656e0:
    if (ctx->pc == 0x3656E0u) {
        ctx->pc = 0x3656E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656DCu;
        // 0x3656e0: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3656E4u;
        goto label_3656e4;
    }
    ctx->pc = 0x3656DCu;
    {
        const bool branch_taken_0x3656dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3656E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656DCu;
        // 0x3656e0: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3656dc) {
            ctx->pc = 0x365708u;
            goto label_365708;
        }
    }
    ctx->pc = 0x3656E4u;
label_3656e4:
    // 0x3656e4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3656e8:
    if (ctx->pc == 0x3656E8u) {
        ctx->pc = 0x3656ECu;
        goto label_3656ec;
    }
    ctx->pc = 0x3656E4u;
    {
        const bool branch_taken_0x3656e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3656e4) {
            ctx->pc = 0x365750u;
            goto label_365750;
        }
    }
    ctx->pc = 0x3656ECu;
label_3656ec:
    // 0x3656ec: 0x0  nop
    ctx->pc = 0x3656ecu;
    // NOP
label_3656f0:
    // 0x3656f0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_3656f4:
    if (ctx->pc == 0x3656F4u) {
        ctx->pc = 0x3656F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656F0u;
        // 0x3656f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3656F8u;
        goto label_3656f8;
    }
    ctx->pc = 0x3656F0u;
    {
        const bool branch_taken_0x3656f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3656F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656F0u;
        // 0x3656f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3656f0) {
            ctx->pc = 0x365720u;
            goto label_365720;
        }
    }
    ctx->pc = 0x3656F8u;
label_3656f8:
    // 0x3656f8: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
label_3656fc:
    if (ctx->pc == 0x3656FCu) {
        ctx->pc = 0x3656FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656F8u;
        // 0x3656fc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365700u;
        goto label_365700;
    }
    ctx->pc = 0x3656F8u;
    {
        const bool branch_taken_0x3656f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3656f8) {
            ctx->pc = 0x3656FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3656F8u;
            // 0x3656fc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365738u;
            goto label_365738;
        }
    }
    ctx->pc = 0x365700u;
label_365700:
    // 0x365700: 0x10000013  b           . + 4 + (0x13 << 2)
label_365704:
    if (ctx->pc == 0x365704u) {
        ctx->pc = 0x365704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365700u;
        // 0x365704: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365708u;
        goto label_365708;
    }
    ctx->pc = 0x365700u;
    {
        const bool branch_taken_0x365700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365700u;
        // 0x365704: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365700) {
            ctx->pc = 0x365750u;
            goto label_365750;
        }
    }
    ctx->pc = 0x365708u;
label_365708:
    // 0x365708: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x365708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36570c:
    // 0x36570c: 0x10450010  beq         $v0, $a1, . + 4 + (0x10 << 2)
label_365710:
    if (ctx->pc == 0x365710u) {
        ctx->pc = 0x365710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36570Cu;
        // 0x365710: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365714u;
        goto label_365714;
    }
    ctx->pc = 0x36570Cu;
    {
        const bool branch_taken_0x36570c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x365710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36570Cu;
        // 0x365710: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36570c) {
            ctx->pc = 0x365750u;
            goto label_365750;
        }
    }
    ctx->pc = 0x365714u;
label_365714:
    // 0x365714: 0x1000000e  b           . + 4 + (0xE << 2)
label_365718:
    if (ctx->pc == 0x365718u) {
        ctx->pc = 0x365718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365714u;
        // 0x365718: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36571Cu;
        goto label_36571c;
    }
    ctx->pc = 0x365714u;
    {
        const bool branch_taken_0x365714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365714u;
        // 0x365718: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365714) {
            ctx->pc = 0x365750u;
            goto label_365750;
        }
    }
    ctx->pc = 0x36571Cu;
label_36571c:
    // 0x36571c: 0x0  nop
    ctx->pc = 0x36571cu;
    // NOP
label_365720:
    // 0x365720: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x365720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_365724:
    // 0x365724: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x365724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_365728:
    // 0x365728: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x365728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_36572c:
    // 0x36572c: 0x10000008  b           . + 4 + (0x8 << 2)
label_365730:
    if (ctx->pc == 0x365730u) {
        ctx->pc = 0x365730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36572Cu;
        // 0x365730: 0xa2200b  movn        $a0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365734u;
        goto label_365734;
    }
    ctx->pc = 0x36572Cu;
    {
        const bool branch_taken_0x36572c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36572Cu;
        // 0x365730: 0xa2200b  movn        $a0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36572c) {
            ctx->pc = 0x365750u;
            goto label_365750;
        }
    }
    ctx->pc = 0x365734u;
label_365734:
    // 0x365734: 0x0  nop
    ctx->pc = 0x365734u;
    // NOP
label_365738:
    // 0x365738: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x365738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36573c:
    // 0x36573c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
label_365740:
    if (ctx->pc == 0x365740u) {
        ctx->pc = 0x365740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36573Cu;
        // 0x365740: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365744u;
        goto label_365744;
    }
    ctx->pc = 0x36573Cu;
    {
        const bool branch_taken_0x36573c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x365740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36573Cu;
        // 0x365740: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36573c) {
            ctx->pc = 0x365750u;
            goto label_365750;
        }
    }
    ctx->pc = 0x365744u;
label_365744:
    // 0x365744: 0x82020885  lb          $v0, 0x885($s0)
    ctx->pc = 0x365744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2181)));
label_365748:
    // 0x365748: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x365748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36574c:
    // 0x36574c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x36574cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_365750:
    // 0x365750: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_365754:
    if (ctx->pc == 0x365754u) {
        ctx->pc = 0x365754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365750u;
        // 0x365754: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365758u;
        goto label_365758;
    }
    ctx->pc = 0x365750u;
    {
        const bool branch_taken_0x365750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x365754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365750u;
        // 0x365754: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365750) {
            ctx->pc = 0x365760u;
            goto label_365760;
        }
    }
    ctx->pc = 0x365758u;
label_365758:
    // 0x365758: 0x82030887  lb          $v1, 0x887($s0)
    ctx->pc = 0x365758u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2183)));
label_36575c:
    // 0x36575c: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x36575cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_365760:
    // 0x365760: 0xa6240010  sh          $a0, 0x10($s1)
    ctx->pc = 0x365760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 4));
label_365764:
    // 0x365764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365768:
    // 0x365768: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x365768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_36576c:
    // 0x36576c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36576cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_365770:
    // 0x365770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x365770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_365774:
    // 0x365774: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x365774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_365778:
    // 0x365778: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x365778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36577c:
    // 0x36577c: 0x3e00008  jr          $ra
label_365780:
    if (ctx->pc == 0x365780u) {
        ctx->pc = 0x365780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36577Cu;
        // 0x365780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365784u;
        goto label_365784;
    }
    ctx->pc = 0x36577Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36577Cu;
        // 0x365780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36577Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365784u;
label_365784:
    // 0x365784: 0x0  nop
    ctx->pc = 0x365784u;
    // NOP
label_365788:
    // 0x365788: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_36578c:
    if (ctx->pc == 0x36578Cu) {
        ctx->pc = 0x36578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365788u;
        // 0x36578c: 0xa0800a08  sb          $zero, 0xA08($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2568), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365790u;
        goto label_365790;
    }
    ctx->pc = 0x365788u;
    {
        const bool branch_taken_0x365788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x365788) {
            ctx->pc = 0x36578Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365788u;
            // 0x36578c: 0xa0800a08  sb          $zero, 0xA08($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 2568), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3657A8u;
            goto label_3657a8;
        }
    }
    ctx->pc = 0x365790u;
label_365790:
    // 0x365790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365794:
    // 0x365794: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
label_365798:
    if (ctx->pc == 0x365798u) {
        ctx->pc = 0x365798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365794u;
        // 0x365798: 0xa0850a08  sb          $a1, 0xA08($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2568), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36579Cu;
        goto label_36579c;
    }
    ctx->pc = 0x365794u;
    {
        const bool branch_taken_0x365794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x365794) {
            ctx->pc = 0x365798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365794u;
            // 0x365798: 0xa0850a08  sb          $a1, 0xA08($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 2568), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3657A8u;
            goto label_3657a8;
        }
    }
    ctx->pc = 0x36579Cu;
label_36579c:
    // 0x36579c: 0x3e00008  jr          $ra
label_3657a0:
    if (ctx->pc == 0x3657A0u) {
        ctx->pc = 0x3657A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36579Cu;
        // 0x3657a0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3657A4u;
        goto label_3657a4;
    }
    ctx->pc = 0x36579Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3657A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36579Cu;
        // 0x3657a0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36579Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3657A4u;
label_3657a4:
    // 0x3657a4: 0x0  nop
    ctx->pc = 0x3657a4u;
    // NOP
label_3657a8:
    // 0x3657a8: 0x3e00008  jr          $ra
label_3657ac:
    if (ctx->pc == 0x3657ACu) {
        ctx->pc = 0x3657ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657A8u;
        // 0x3657ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3657B0u;
        goto label_3657b0;
    }
    ctx->pc = 0x3657A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3657ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657A8u;
        // 0x3657ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3657A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3657B0u;
label_3657b0:
    // 0x3657b0: 0x80820a08  lb          $v0, 0xA08($a0)
    ctx->pc = 0x3657b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2568)));
label_3657b4:
    // 0x3657b4: 0x3e00008  jr          $ra
label_3657b8:
    if (ctx->pc == 0x3657B8u) {
        ctx->pc = 0x3657B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657B4u;
        // 0x3657b8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3657BCu;
        goto label_3657bc;
    }
    ctx->pc = 0x3657B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3657B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657B4u;
        // 0x3657b8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3657B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3657BCu;
label_3657bc:
    // 0x3657bc: 0x0  nop
    ctx->pc = 0x3657bcu;
    // NOP
label_3657c0:
    // 0x3657c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3657c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3657c4:
    // 0x3657c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3657c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3657c8:
    // 0x3657c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3657c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3657cc:
    // 0x3657cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3657ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3657d0:
    // 0x3657d0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3657d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3657d4:
    // 0x3657d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3657d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3657d8:
    // 0x3657d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3657d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3657dc:
    // 0x3657dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3657dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3657e0:
    // 0x3657e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3657e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3657e4:
    // 0x3657e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3657e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_3657e8:
    // 0x3657e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3657e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_3657ec:
    // 0x3657ec: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x3657ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_3657f0:
    // 0x3657f0: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_3657f4:
    if (ctx->pc == 0x3657F4u) {
        ctx->pc = 0x3657F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657F0u;
        // 0x3657f4: 0x8e140988  lw          $s4, 0x988($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3657F8u;
        goto label_3657f8;
    }
    ctx->pc = 0x3657F0u;
    {
        const bool branch_taken_0x3657f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3657F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657F0u;
        // 0x3657f4: 0x8e140988  lw          $s4, 0x988($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3657f0) {
            ctx->pc = 0x365A94u;
            goto label_365a94;
        }
    }
    ctx->pc = 0x3657F8u;
label_3657f8:
    // 0x3657f8: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x3657f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3657fc:
    // 0x3657fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3657fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_365800:
    // 0x365800: 0x56220032  bnel        $s1, $v0, . + 4 + (0x32 << 2)
label_365804:
    if (ctx->pc == 0x365804u) {
        ctx->pc = 0x365804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365800u;
        // 0x365804: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365808u;
        goto label_365808;
    }
    ctx->pc = 0x365800u;
    {
        const bool branch_taken_0x365800 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x365800) {
            ctx->pc = 0x365804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365800u;
            // 0x365804: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3658CCu;
            goto label_3658cc;
        }
    }
    ctx->pc = 0x365808u;
label_365808:
    // 0x365808: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x365808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36580c:
    // 0x36580c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36580cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_365810:
    // 0x365810: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x365810u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_365814:
    // 0x365814: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_365818:
    if (ctx->pc == 0x365818u) {
        ctx->pc = 0x36581Cu;
        goto label_36581c;
    }
    ctx->pc = 0x365814u;
    {
        const bool branch_taken_0x365814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x365814) {
            ctx->pc = 0x36587Cu;
            goto label_36587c;
        }
    }
    ctx->pc = 0x36581Cu;
label_36581c:
    // 0x36581c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x36581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_365820:
    // 0x365820: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
label_365824:
    if (ctx->pc == 0x365824u) {
        ctx->pc = 0x365824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365820u;
        // 0x365824: 0x82020885  lb          $v0, 0x885($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2181)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365828u;
        goto label_365828;
    }
    ctx->pc = 0x365820u;
    {
        const bool branch_taken_0x365820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x365820) {
            ctx->pc = 0x365824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365820u;
            // 0x365824: 0x82020885  lb          $v0, 0x885($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2181)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365838u;
            goto label_365838;
        }
    }
    ctx->pc = 0x365828u;
label_365828:
    // 0x365828: 0x820209b4  lb          $v0, 0x9B4($s0)
    ctx->pc = 0x365828u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2484)));
label_36582c:
    // 0x36582c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_365830:
    if (ctx->pc == 0x365830u) {
        ctx->pc = 0x365834u;
        goto label_365834;
    }
    ctx->pc = 0x36582Cu;
    {
        const bool branch_taken_0x36582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36582c) {
            ctx->pc = 0x36586Cu;
            goto label_36586c;
        }
    }
    ctx->pc = 0x365834u;
label_365834:
    // 0x365834: 0x82020885  lb          $v0, 0x885($s0)
    ctx->pc = 0x365834u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2181)));
label_365838:
    // 0x365838: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_36583c:
    if (ctx->pc == 0x36583Cu) {
        ctx->pc = 0x36583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365838u;
        // 0x36583c: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x365840u;
        goto label_365840;
    }
    ctx->pc = 0x365838u;
    {
        const bool branch_taken_0x365838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365838u;
        // 0x36583c: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x365838) {
            ctx->pc = 0x365850u;
            goto label_365850;
        }
    }
    ctx->pc = 0x365840u;
label_365840:
    // 0x365840: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x365840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_365844:
    // 0x365844: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x365844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_365848:
    // 0x365848: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x365848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_36584c:
    // 0x36584c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x36584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365850:
    // 0x365850: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x365850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_365854:
    // 0x365854: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x365854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_365858:
    // 0x365858: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_36585c:
    if (ctx->pc == 0x36585Cu) {
        ctx->pc = 0x36585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365858u;
        // 0x36585c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365860u;
        goto label_365860;
    }
    ctx->pc = 0x365858u;
    {
        const bool branch_taken_0x365858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365858u;
        // 0x36585c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365858) {
            ctx->pc = 0x36587Cu;
            goto label_36587c;
        }
    }
    ctx->pc = 0x365860u;
label_365860:
    // 0x365860: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x365860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_365864:
    // 0x365864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365868:
    // 0x365868: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x365868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_36586c:
    // 0x36586c: 0xc0d93e6  jal         func_364F98
label_365870:
    if (ctx->pc == 0x365870u) {
        ctx->pc = 0x365874u;
        goto label_365874;
    }
    ctx->pc = 0x36586Cu;
    SET_GPR_U32(ctx, 31, 0x365874u);
    ctx->pc = 0x364F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364F98u, 0x36586Cu, 0x365874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365874u;
label_365874:
    // 0x365874: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x365874u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_365878:
    // 0x365878: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x365878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36587c:
    // 0x36587c: 0x56220013  bnel        $s1, $v0, . + 4 + (0x13 << 2)
label_365880:
    if (ctx->pc == 0x365880u) {
        ctx->pc = 0x365880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36587Cu;
        // 0x365880: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365884u;
        goto label_365884;
    }
    ctx->pc = 0x36587Cu;
    {
        const bool branch_taken_0x36587c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x36587c) {
            ctx->pc = 0x365880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36587Cu;
            // 0x365880: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3658CCu;
            goto label_3658cc;
        }
    }
    ctx->pc = 0x365884u;
label_365884:
    // 0x365884: 0xc60109c8  lwc1        $f1, 0x9C8($s0)
    ctx->pc = 0x365884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365888:
    // 0x365888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x365888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36588c:
    // 0x36588c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x36588cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_365890:
    // 0x365890: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_365894:
    if (ctx->pc == 0x365894u) {
        ctx->pc = 0x365894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365890u;
        // 0x365894: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365898u;
        goto label_365898;
    }
    ctx->pc = 0x365890u;
    {
        const bool branch_taken_0x365890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x365890) {
            ctx->pc = 0x365894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365890u;
            // 0x365894: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3658CCu;
            goto label_3658cc;
        }
    }
    ctx->pc = 0x365898u;
label_365898:
    // 0x365898: 0x82020885  lb          $v0, 0x885($s0)
    ctx->pc = 0x365898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2181)));
label_36589c:
    // 0x36589c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3658a0:
    if (ctx->pc == 0x3658A0u) {
        ctx->pc = 0x3658A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36589Cu;
        // 0x3658a0: 0xc60009c4  lwc1        $f0, 0x9C4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3658A4u;
        goto label_3658a4;
    }
    ctx->pc = 0x36589Cu;
    {
        const bool branch_taken_0x36589c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3658A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36589Cu;
        // 0x3658a0: 0xc60009c4  lwc1        $f0, 0x9C4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36589c) {
            ctx->pc = 0x3658B4u;
            goto label_3658b4;
        }
    }
    ctx->pc = 0x3658A4u;
label_3658a4:
    // 0x3658a4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3658a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3658a8:
    // 0x3658a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3658a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3658ac:
    // 0x3658ac: 0xe60009c4  swc1        $f0, 0x9C4($s0)
    ctx->pc = 0x3658acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2500), bits); }
label_3658b0:
    // 0x3658b0: 0xc60009c4  lwc1        $f0, 0x9C4($s0)
    ctx->pc = 0x3658b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3658b4:
    // 0x3658b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3658b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3658b8:
    // 0x3658b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3658b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3658bc:
    // 0x3658bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3658bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3658c0:
    // 0x3658c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3658c4:
    if (ctx->pc == 0x3658C4u) {
        ctx->pc = 0x3658C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658C0u;
        // 0x3658c4: 0xe60109c4  swc1        $f1, 0x9C4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2500), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3658C8u;
        goto label_3658c8;
    }
    ctx->pc = 0x3658C0u;
    {
        const bool branch_taken_0x3658c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3658c0) {
            ctx->pc = 0x3658C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3658C0u;
            // 0x3658c4: 0xe60109c4  swc1        $f1, 0x9C4($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2500), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3658C8u;
            goto label_3658c8;
        }
    }
    ctx->pc = 0x3658C8u;
label_3658c8:
    // 0x3658c8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3658c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3658cc:
    // 0x3658cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3658d0:
    if (ctx->pc == 0x3658D0u) {
        ctx->pc = 0x3658D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658CCu;
        // 0x3658d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3658D4u;
        goto label_3658d4;
    }
    ctx->pc = 0x3658CCu;
    {
        const bool branch_taken_0x3658cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3658D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658CCu;
        // 0x3658d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3658cc) {
            ctx->pc = 0x3658ECu;
            goto label_3658ec;
        }
    }
    ctx->pc = 0x3658D4u;
label_3658d4:
    // 0x3658d4: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
label_3658d8:
    if (ctx->pc == 0x3658D8u) {
        ctx->pc = 0x3658D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658D4u;
        // 0x3658d8: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3658DCu;
        goto label_3658dc;
    }
    ctx->pc = 0x3658D4u;
    {
        const bool branch_taken_0x3658d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3658d4) {
            ctx->pc = 0x3658D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3658D4u;
            // 0x3658d8: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3658F0u;
            goto label_3658f0;
        }
    }
    ctx->pc = 0x3658DCu;
label_3658dc:
    // 0x3658dc: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x3658dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_3658e0:
    // 0x3658e0: 0xc0d93e6  jal         func_364F98
label_3658e4:
    if (ctx->pc == 0x3658E4u) {
        ctx->pc = 0x3658E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658E0u;
        // 0x3658e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3658E8u;
        goto label_3658e8;
    }
    ctx->pc = 0x3658E0u;
    SET_GPR_U32(ctx, 31, 0x3658E8u);
    ctx->pc = 0x3658E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3658E0u;
    // 0x3658e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364F98u, 0x3658E0u, 0x3658E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3658E8u;
label_3658e8:
    // 0x3658e8: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x3658e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3658ec:
    // 0x3658ec: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3658ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3658f0:
    // 0x3658f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3658f4:
    if (ctx->pc == 0x3658F4u) {
        ctx->pc = 0x3658F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658F0u;
        // 0x3658f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3658F8u;
        goto label_3658f8;
    }
    ctx->pc = 0x3658F0u;
    {
        const bool branch_taken_0x3658f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3658F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658F0u;
        // 0x3658f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3658f0) {
            ctx->pc = 0x365910u;
            goto label_365910;
        }
    }
    ctx->pc = 0x3658F8u;
label_3658f8:
    // 0x3658f8: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
label_3658fc:
    if (ctx->pc == 0x3658FCu) {
        ctx->pc = 0x3658FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658F8u;
        // 0x3658fc: 0x82020886  lb          $v0, 0x886($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2182)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365900u;
        goto label_365900;
    }
    ctx->pc = 0x3658F8u;
    {
        const bool branch_taken_0x3658f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3658f8) {
            ctx->pc = 0x3658FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3658F8u;
            // 0x3658fc: 0x82020886  lb          $v0, 0x886($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2182)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365914u;
            goto label_365914;
        }
    }
    ctx->pc = 0x365900u;
label_365900:
    // 0x365900: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x365900u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_365904:
    // 0x365904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365908:
    // 0x365908: 0xa2020886  sb          $v0, 0x886($s0)
    ctx->pc = 0x365908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2182), (uint8_t)GPR_U32(ctx, 2));
label_36590c:
    // 0x36590c: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x36590cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_365910:
    // 0x365910: 0x82020886  lb          $v0, 0x886($s0)
    ctx->pc = 0x365910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2182)));
label_365914:
    // 0x365914: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_365918:
    if (ctx->pc == 0x365918u) {
        ctx->pc = 0x365918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365914u;
        // 0x365918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36591Cu;
        goto label_36591c;
    }
    ctx->pc = 0x365914u;
    {
        const bool branch_taken_0x365914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365914u;
        // 0x365918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365914) {
            ctx->pc = 0x3659ECu;
            goto label_3659ec;
        }
    }
    ctx->pc = 0x36591Cu;
label_36591c:
    // 0x36591c: 0x16220034  bne         $s1, $v0, . + 4 + (0x34 << 2)
label_365920:
    if (ctx->pc == 0x365920u) {
        ctx->pc = 0x365920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36591Cu;
        // 0x365920: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365924u;
        goto label_365924;
    }
    ctx->pc = 0x36591Cu;
    {
        const bool branch_taken_0x36591c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x365920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36591Cu;
        // 0x365920: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36591c) {
            ctx->pc = 0x3659F0u;
            goto label_3659f0;
        }
    }
    ctx->pc = 0x365924u;
label_365924:
    // 0x365924: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x365924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365928:
    // 0x365928: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x365928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_36592c:
    // 0x36592c: 0x96060a00  lhu         $a2, 0xA00($s0)
    ctx->pc = 0x36592cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2560)));
label_365930:
    // 0x365930: 0x24031fc6  addiu       $v1, $zero, 0x1FC6
    ctx->pc = 0x365930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8134));
label_365934:
    // 0x365934: 0xae040998  sw          $a0, 0x998($s0)
    ctx->pc = 0x365934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2456), GPR_U32(ctx, 4));
label_365938:
    // 0x365938: 0x2613098c  addiu       $s3, $s0, 0x98C
    ctx->pc = 0x365938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2444));
label_36593c:
    // 0x36593c: 0xa6020990  sh          $v0, 0x990($s0)
    ctx->pc = 0x36593cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2448), (uint16_t)GPR_U32(ctx, 2));
label_365940:
    // 0x365940: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x365940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_365944:
    // 0x365944: 0xa6030992  sh          $v1, 0x992($s0)
    ctx->pc = 0x365944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2450), (uint16_t)GPR_U32(ctx, 3));
label_365948:
    // 0x365948: 0xa6060994  sh          $a2, 0x994($s0)
    ctx->pc = 0x365948u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2452), (uint16_t)GPR_U32(ctx, 6));
label_36594c:
    // 0x36594c: 0xa600098c  sh          $zero, 0x98C($s0)
    ctx->pc = 0x36594cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2444), (uint16_t)GPR_U32(ctx, 0));
label_365950:
    // 0x365950: 0xa600098e  sh          $zero, 0x98E($s0)
    ctx->pc = 0x365950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2446), (uint16_t)GPR_U32(ctx, 0));
label_365954:
    // 0x365954: 0xc0d8856  jal         func_362158
label_365958:
    if (ctx->pc == 0x365958u) {
        ctx->pc = 0x365958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365954u;
        // 0x365958: 0x86040038  lh          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36595Cu;
        goto label_36595c;
    }
    ctx->pc = 0x365954u;
    SET_GPR_U32(ctx, 31, 0x36595Cu);
    ctx->pc = 0x365958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365954u;
    // 0x365958: 0x86040038  lh          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362158u, 0x365954u, 0x36595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36595Cu;
label_36595c:
    // 0x36595c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36595cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365960:
    // 0x365960: 0x820209dc  lb          $v0, 0x9DC($s0)
    ctx->pc = 0x365960u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2524)));
label_365964:
    // 0x365964: 0x14510013  bne         $v0, $s1, . + 4 + (0x13 << 2)
label_365968:
    if (ctx->pc == 0x365968u) {
        ctx->pc = 0x365968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365964u;
        // 0x365968: 0x260509a0  addiu       $a1, $s0, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36596Cu;
        goto label_36596c;
    }
    ctx->pc = 0x365964u;
    {
        const bool branch_taken_0x365964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x365968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365964u;
        // 0x365968: 0x260509a0  addiu       $a1, $s0, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365964) {
            ctx->pc = 0x3659B4u;
            goto label_3659b4;
        }
    }
    ctx->pc = 0x36596Cu;
label_36596c:
    // 0x36596c: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x36596cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_365970:
    // 0x365970: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x365970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_365974:
    // 0x365974: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x365974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_365978:
    // 0x365978: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x365978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_36597c:
    // 0x36597c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x36597cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_365980:
    // 0x365980: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x365980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_365984:
    // 0x365984: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x365984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_365988:
    // 0x365988: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x365988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36598c:
    // 0x36598c: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x36598cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_365990:
    // 0x365990: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x365990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_365994:
    // 0x365994: 0x8e0209e0  lw          $v0, 0x9E0($s0)
    ctx->pc = 0x365994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2528)));
label_365998:
    // 0x365998: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x365998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_36599c:
    // 0x36599c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36599cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3659a0:
    // 0x3659a0: 0x8604003a  lh          $a0, 0x3A($s0)
    ctx->pc = 0x3659a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_3659a4:
    // 0x3659a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3659a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3659a8:
    // 0x3659a8: 0xc0d8856  jal         func_362158
label_3659ac:
    if (ctx->pc == 0x3659ACu) {
        ctx->pc = 0x3659ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3659A8u;
        // 0x3659ac: 0xae0309ac  sw          $v1, 0x9AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3659B0u;
        goto label_3659b0;
    }
    ctx->pc = 0x3659A8u;
    SET_GPR_U32(ctx, 31, 0x3659B0u);
    ctx->pc = 0x3659ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659A8u;
    // 0x3659ac: 0xae0309ac  sw          $v1, 0x9AC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2476), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362158u, 0x3659A8u, 0x3659B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659B0u;
label_3659b0:
    // 0x3659b0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3659b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3659b4:
    // 0x3659b4: 0x5640000d  bnel        $s2, $zero, . + 4 + (0xD << 2)
label_3659b8:
    if (ctx->pc == 0x3659B8u) {
        ctx->pc = 0x3659B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3659B4u;
        // 0x3659b8: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3659BCu;
        goto label_3659bc;
    }
    ctx->pc = 0x3659B4u;
    {
        const bool branch_taken_0x3659b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3659b4) {
            ctx->pc = 0x3659B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3659B4u;
            // 0x3659b8: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3659ECu;
            goto label_3659ec;
        }
    }
    ctx->pc = 0x3659BCu;
label_3659bc:
    // 0x3659bc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3659bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3659c0:
    // 0x3659c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3659c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3659c4:
    // 0x3659c4: 0xa2000886  sb          $zero, 0x886($s0)
    ctx->pc = 0x3659c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2182), (uint8_t)GPR_U32(ctx, 0));
label_3659c8:
    // 0x3659c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3659c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3659cc:
    // 0x3659cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3659ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3659d0:
    // 0x3659d0: 0xc0d6ab6  jal         func_35AAD8
label_3659d4:
    if (ctx->pc == 0x3659D4u) {
        ctx->pc = 0x3659D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3659D0u;
        // 0x3659d4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3659D8u;
        goto label_3659d8;
    }
    ctx->pc = 0x3659D0u;
    SET_GPR_U32(ctx, 31, 0x3659D8u);
    ctx->pc = 0x3659D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659D0u;
    // 0x3659d4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x3659D0u, 0x3659D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659D8u;
label_3659d8:
    // 0x3659d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3659d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3659dc:
    // 0x3659dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3659dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3659e0:
    // 0x3659e0: 0xc0d9320  jal         func_364C80
label_3659e4:
    if (ctx->pc == 0x3659E4u) {
        ctx->pc = 0x3659E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3659E0u;
        // 0x3659e4: 0x240602a3  addiu       $a2, $zero, 0x2A3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3659E8u;
        goto label_3659e8;
    }
    ctx->pc = 0x3659E0u;
    SET_GPR_U32(ctx, 31, 0x3659E8u);
    ctx->pc = 0x3659E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659E0u;
    // 0x3659e4: 0x240602a3  addiu       $a2, $zero, 0x2A3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364C80u, 0x3659E0u, 0x3659E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659E8u;
label_3659e8:
    // 0x3659e8: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x3659e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3659ec:
    // 0x3659ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3659ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3659f0:
    // 0x3659f0: 0x56220025  bnel        $s1, $v0, . + 4 + (0x25 << 2)
label_3659f4:
    if (ctx->pc == 0x3659F4u) {
        ctx->pc = 0x3659F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3659F0u;
        // 0x3659f4: 0xc60009d8  lwc1        $f0, 0x9D8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3659F8u;
        goto label_3659f8;
    }
    ctx->pc = 0x3659F0u;
    {
        const bool branch_taken_0x3659f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3659f0) {
            ctx->pc = 0x3659F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3659F0u;
            // 0x3659f4: 0xc60009d8  lwc1        $f0, 0x9D8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x365A88u;
            goto label_365a88;
        }
    }
    ctx->pc = 0x3659F8u;
label_3659f8:
    // 0x3659f8: 0x820309dc  lb          $v1, 0x9DC($s0)
    ctx->pc = 0x3659f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2524)));
label_3659fc:
    // 0x3659fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3659fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365a00:
    // 0x365a00: 0x860509f0  lh          $a1, 0x9F0($s0)
    ctx->pc = 0x365a00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2544)));
label_365a04:
    // 0x365a04: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x365a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_365a08:
    // 0x365a08: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_365a0c:
    if (ctx->pc == 0x365A0Cu) {
        ctx->pc = 0x365A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A08u;
        // 0x365a0c: 0x86060038  lh          $a2, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365A10u;
        goto label_365a10;
    }
    ctx->pc = 0x365A08u;
    {
        const bool branch_taken_0x365a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x365A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A08u;
        // 0x365a0c: 0x86060038  lh          $a2, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365a08) {
            ctx->pc = 0x365A14u;
            goto label_365a14;
        }
    }
    ctx->pc = 0x365A10u;
label_365a10:
    // 0x365a10: 0x8607003a  lh          $a3, 0x3A($s0)
    ctx->pc = 0x365a10u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_365a14:
    // 0x365a14: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x365a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_365a18:
    // 0x365a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365a1c:
    // 0x365a1c: 0xc60009c0  lwc1        $f0, 0x9C0($s0)
    ctx->pc = 0x365a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365a20:
    // 0x365a20: 0xc60109c4  lwc1        $f1, 0x9C4($s0)
    ctx->pc = 0x365a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365a24:
    // 0x365a24: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x365a24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_365a28:
    // 0x365a28: 0x860209fc  lh          $v0, 0x9FC($s0)
    ctx->pc = 0x365a28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2556)));
label_365a2c:
    // 0x365a2c: 0x8e0909bc  lw          $t1, 0x9BC($s0)
    ctx->pc = 0x365a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2492)));
label_365a30:
    // 0x365a30: 0x8e0809f8  lw          $t0, 0x9F8($s0)
    ctx->pc = 0x365a30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2552)));
label_365a34:
    // 0x365a34: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x365a34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_365a38:
    // 0x365a38: 0xc0d96ae  jal         func_365AB8
label_365a3c:
    if (ctx->pc == 0x365A3Cu) {
        ctx->pc = 0x365A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A38u;
        // 0x365a3c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x365A40u;
        goto label_365a40;
    }
    ctx->pc = 0x365A38u;
    SET_GPR_U32(ctx, 31, 0x365A40u);
    ctx->pc = 0x365A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A38u;
    // 0x365a3c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x365AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365AB8u, 0x365A38u, 0x365A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A40u;
label_365a40:
    // 0x365a40: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x365a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_365a44:
    // 0x365a44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x365a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_365a48:
    // 0x365a48: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_365a4c:
    if (ctx->pc == 0x365A4Cu) {
        ctx->pc = 0x365A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A48u;
        // 0x365a4c: 0xc60009d8  lwc1        $f0, 0x9D8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x365A50u;
        goto label_365a50;
    }
    ctx->pc = 0x365A48u;
    {
        const bool branch_taken_0x365a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x365a48) {
            ctx->pc = 0x365A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365A48u;
            // 0x365a4c: 0xc60009d8  lwc1        $f0, 0x9D8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x365A88u;
            goto label_365a88;
        }
    }
    ctx->pc = 0x365A50u;
label_365a50:
    // 0x365a50: 0x8e0209b8  lw          $v0, 0x9B8($s0)
    ctx->pc = 0x365a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2488)));
label_365a54:
    // 0x365a54: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x365a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_365a58:
    // 0x365a58: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x365a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_365a5c:
    // 0x365a5c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_365a60:
    if (ctx->pc == 0x365A60u) {
        ctx->pc = 0x365A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A5Cu;
        // 0x365a60: 0xae0309b8  sw          $v1, 0x9B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365A64u;
        goto label_365a64;
    }
    ctx->pc = 0x365A5Cu;
    {
        const bool branch_taken_0x365a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365a5c) {
            ctx->pc = 0x365A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365A5Cu;
            // 0x365a60: 0xae0309b8  sw          $v1, 0x9B8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2488), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365A84u;
            goto label_365a84;
        }
    }
    ctx->pc = 0x365A64u;
label_365a64:
    // 0x365a64: 0x8f82c820  lw          $v0, -0x37E0($gp)
    ctx->pc = 0x365a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952992)));
label_365a68:
    // 0x365a68: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_365a6c:
    if (ctx->pc == 0x365A6Cu) {
        ctx->pc = 0x365A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A68u;
        // 0x365a6c: 0xae0309b8  sw          $v1, 0x9B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365A70u;
        goto label_365a70;
    }
    ctx->pc = 0x365A68u;
    {
        const bool branch_taken_0x365a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365a68) {
            ctx->pc = 0x365A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365A68u;
            // 0x365a6c: 0xae0309b8  sw          $v1, 0x9B8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2488), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365A84u;
            goto label_365a84;
        }
    }
    ctx->pc = 0x365A70u;
label_365a70:
    // 0x365a70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x365a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_365a74:
    // 0x365a74: 0x40f809  jalr        $v0
label_365a78:
    if (ctx->pc == 0x365A78u) {
        ctx->pc = 0x365A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A74u;
        // 0x365a78: 0x8f85c824  lw          $a1, -0x37DC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365A7Cu;
        goto label_365a7c;
    }
    ctx->pc = 0x365A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x365A7Cu);
        ctx->pc = 0x365A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A74u;
        // 0x365a78: 0x8f85c824  lw          $a1, -0x37DC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952996)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365A74u, 0x365A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365A7Cu;
label_365a7c:
    // 0x365a7c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x365a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_365a80:
    // 0x365a80: 0xae0309b8  sw          $v1, 0x9B8($s0)
    ctx->pc = 0x365a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2488), GPR_U32(ctx, 3));
label_365a84:
    // 0x365a84: 0xc60009d8  lwc1        $f0, 0x9D8($s0)
    ctx->pc = 0x365a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365a88:
    // 0x365a88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365a8c:
    // 0x365a8c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x365a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_365a90:
    // 0x365a90: 0xe60009d8  swc1        $f0, 0x9D8($s0)
    ctx->pc = 0x365a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2520), bits); }
label_365a94:
    // 0x365a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_365a98:
    // 0x365a98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x365a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_365a9c:
    // 0x365a9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x365a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_365aa0:
    // 0x365aa0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x365aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_365aa4:
    // 0x365aa4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x365aa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_365aa8:
    // 0x365aa8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x365aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_365aac:
    // 0x365aac: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x365aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_365ab0:
    // 0x365ab0: 0x3e00008  jr          $ra
label_365ab4:
    if (ctx->pc == 0x365AB4u) {
        ctx->pc = 0x365AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365AB0u;
        // 0x365ab4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365AB8u;
        goto label_fallthrough_0x365ab0;
    }
    ctx->pc = 0x365AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365AB0u;
        // 0x365ab4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x365ab0:
    ctx->pc = 0x365AB8u;
}
