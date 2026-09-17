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

// Function: sub_001256E0
// Address: 0x1256e0 - 0x125b20
void sub_001256E0_0x1256e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001256E0_0x1256e0");
#endif

    switch (ctx->pc) {
        case 0x1256e0u: goto label_1256e0;
        case 0x1256e4u: goto label_1256e4;
        case 0x1256e8u: goto label_1256e8;
        case 0x1256ecu: goto label_1256ec;
        case 0x1256f0u: goto label_1256f0;
        case 0x1256f4u: goto label_1256f4;
        case 0x1256f8u: goto label_1256f8;
        case 0x1256fcu: goto label_1256fc;
        case 0x125700u: goto label_125700;
        case 0x125704u: goto label_125704;
        case 0x125708u: goto label_125708;
        case 0x12570cu: goto label_12570c;
        case 0x125710u: goto label_125710;
        case 0x125714u: goto label_125714;
        case 0x125718u: goto label_125718;
        case 0x12571cu: goto label_12571c;
        case 0x125720u: goto label_125720;
        case 0x125724u: goto label_125724;
        case 0x125728u: goto label_125728;
        case 0x12572cu: goto label_12572c;
        case 0x125730u: goto label_125730;
        case 0x125734u: goto label_125734;
        case 0x125738u: goto label_125738;
        case 0x12573cu: goto label_12573c;
        case 0x125740u: goto label_125740;
        case 0x125744u: goto label_125744;
        case 0x125748u: goto label_125748;
        case 0x12574cu: goto label_12574c;
        case 0x125750u: goto label_125750;
        case 0x125754u: goto label_125754;
        case 0x125758u: goto label_125758;
        case 0x12575cu: goto label_12575c;
        case 0x125760u: goto label_125760;
        case 0x125764u: goto label_125764;
        case 0x125768u: goto label_125768;
        case 0x12576cu: goto label_12576c;
        case 0x125770u: goto label_125770;
        case 0x125774u: goto label_125774;
        case 0x125778u: goto label_125778;
        case 0x12577cu: goto label_12577c;
        case 0x125780u: goto label_125780;
        case 0x125784u: goto label_125784;
        case 0x125788u: goto label_125788;
        case 0x12578cu: goto label_12578c;
        case 0x125790u: goto label_125790;
        case 0x125794u: goto label_125794;
        case 0x125798u: goto label_125798;
        case 0x12579cu: goto label_12579c;
        case 0x1257a0u: goto label_1257a0;
        case 0x1257a4u: goto label_1257a4;
        case 0x1257a8u: goto label_1257a8;
        case 0x1257acu: goto label_1257ac;
        case 0x1257b0u: goto label_1257b0;
        case 0x1257b4u: goto label_1257b4;
        case 0x1257b8u: goto label_1257b8;
        case 0x1257bcu: goto label_1257bc;
        case 0x1257c0u: goto label_1257c0;
        case 0x1257c4u: goto label_1257c4;
        case 0x1257c8u: goto label_1257c8;
        case 0x1257ccu: goto label_1257cc;
        case 0x1257d0u: goto label_1257d0;
        case 0x1257d4u: goto label_1257d4;
        case 0x1257d8u: goto label_1257d8;
        case 0x1257dcu: goto label_1257dc;
        case 0x1257e0u: goto label_1257e0;
        case 0x1257e4u: goto label_1257e4;
        case 0x1257e8u: goto label_1257e8;
        case 0x1257ecu: goto label_1257ec;
        case 0x1257f0u: goto label_1257f0;
        case 0x1257f4u: goto label_1257f4;
        case 0x1257f8u: goto label_1257f8;
        case 0x1257fcu: goto label_1257fc;
        case 0x125800u: goto label_125800;
        case 0x125804u: goto label_125804;
        case 0x125808u: goto label_125808;
        case 0x12580cu: goto label_12580c;
        case 0x125810u: goto label_125810;
        case 0x125814u: goto label_125814;
        case 0x125818u: goto label_125818;
        case 0x12581cu: goto label_12581c;
        case 0x125820u: goto label_125820;
        case 0x125824u: goto label_125824;
        case 0x125828u: goto label_125828;
        case 0x12582cu: goto label_12582c;
        case 0x125830u: goto label_125830;
        case 0x125834u: goto label_125834;
        case 0x125838u: goto label_125838;
        case 0x12583cu: goto label_12583c;
        case 0x125840u: goto label_125840;
        case 0x125844u: goto label_125844;
        case 0x125848u: goto label_125848;
        case 0x12584cu: goto label_12584c;
        case 0x125850u: goto label_125850;
        case 0x125854u: goto label_125854;
        case 0x125858u: goto label_125858;
        case 0x12585cu: goto label_12585c;
        case 0x125860u: goto label_125860;
        case 0x125864u: goto label_125864;
        case 0x125868u: goto label_125868;
        case 0x12586cu: goto label_12586c;
        case 0x125870u: goto label_125870;
        case 0x125874u: goto label_125874;
        case 0x125878u: goto label_125878;
        case 0x12587cu: goto label_12587c;
        case 0x125880u: goto label_125880;
        case 0x125884u: goto label_125884;
        case 0x125888u: goto label_125888;
        case 0x12588cu: goto label_12588c;
        case 0x125890u: goto label_125890;
        case 0x125894u: goto label_125894;
        case 0x125898u: goto label_125898;
        case 0x12589cu: goto label_12589c;
        case 0x1258a0u: goto label_1258a0;
        case 0x1258a4u: goto label_1258a4;
        case 0x1258a8u: goto label_1258a8;
        case 0x1258acu: goto label_1258ac;
        case 0x1258b0u: goto label_1258b0;
        case 0x1258b4u: goto label_1258b4;
        case 0x1258b8u: goto label_1258b8;
        case 0x1258bcu: goto label_1258bc;
        case 0x1258c0u: goto label_1258c0;
        case 0x1258c4u: goto label_1258c4;
        case 0x1258c8u: goto label_1258c8;
        case 0x1258ccu: goto label_1258cc;
        case 0x1258d0u: goto label_1258d0;
        case 0x1258d4u: goto label_1258d4;
        case 0x1258d8u: goto label_1258d8;
        case 0x1258dcu: goto label_1258dc;
        case 0x1258e0u: goto label_1258e0;
        case 0x1258e4u: goto label_1258e4;
        case 0x1258e8u: goto label_1258e8;
        case 0x1258ecu: goto label_1258ec;
        case 0x1258f0u: goto label_1258f0;
        case 0x1258f4u: goto label_1258f4;
        case 0x1258f8u: goto label_1258f8;
        case 0x1258fcu: goto label_1258fc;
        case 0x125900u: goto label_125900;
        case 0x125904u: goto label_125904;
        case 0x125908u: goto label_125908;
        case 0x12590cu: goto label_12590c;
        case 0x125910u: goto label_125910;
        case 0x125914u: goto label_125914;
        case 0x125918u: goto label_125918;
        case 0x12591cu: goto label_12591c;
        case 0x125920u: goto label_125920;
        case 0x125924u: goto label_125924;
        case 0x125928u: goto label_125928;
        case 0x12592cu: goto label_12592c;
        case 0x125930u: goto label_125930;
        case 0x125934u: goto label_125934;
        case 0x125938u: goto label_125938;
        case 0x12593cu: goto label_12593c;
        case 0x125940u: goto label_125940;
        case 0x125944u: goto label_125944;
        case 0x125948u: goto label_125948;
        case 0x12594cu: goto label_12594c;
        case 0x125950u: goto label_125950;
        case 0x125954u: goto label_125954;
        case 0x125958u: goto label_125958;
        case 0x12595cu: goto label_12595c;
        case 0x125960u: goto label_125960;
        case 0x125964u: goto label_125964;
        case 0x125968u: goto label_125968;
        case 0x12596cu: goto label_12596c;
        case 0x125970u: goto label_125970;
        case 0x125974u: goto label_125974;
        case 0x125978u: goto label_125978;
        case 0x12597cu: goto label_12597c;
        case 0x125980u: goto label_125980;
        case 0x125984u: goto label_125984;
        case 0x125988u: goto label_125988;
        case 0x12598cu: goto label_12598c;
        case 0x125990u: goto label_125990;
        case 0x125994u: goto label_125994;
        case 0x125998u: goto label_125998;
        case 0x12599cu: goto label_12599c;
        case 0x1259a0u: goto label_1259a0;
        case 0x1259a4u: goto label_1259a4;
        case 0x1259a8u: goto label_1259a8;
        case 0x1259acu: goto label_1259ac;
        case 0x1259b0u: goto label_1259b0;
        case 0x1259b4u: goto label_1259b4;
        case 0x1259b8u: goto label_1259b8;
        case 0x1259bcu: goto label_1259bc;
        case 0x1259c0u: goto label_1259c0;
        case 0x1259c4u: goto label_1259c4;
        case 0x1259c8u: goto label_1259c8;
        case 0x1259ccu: goto label_1259cc;
        case 0x1259d0u: goto label_1259d0;
        case 0x1259d4u: goto label_1259d4;
        case 0x1259d8u: goto label_1259d8;
        case 0x1259dcu: goto label_1259dc;
        case 0x1259e0u: goto label_1259e0;
        case 0x1259e4u: goto label_1259e4;
        case 0x1259e8u: goto label_1259e8;
        case 0x1259ecu: goto label_1259ec;
        case 0x1259f0u: goto label_1259f0;
        case 0x1259f4u: goto label_1259f4;
        case 0x1259f8u: goto label_1259f8;
        case 0x1259fcu: goto label_1259fc;
        case 0x125a00u: goto label_125a00;
        case 0x125a04u: goto label_125a04;
        case 0x125a08u: goto label_125a08;
        case 0x125a0cu: goto label_125a0c;
        case 0x125a10u: goto label_125a10;
        case 0x125a14u: goto label_125a14;
        case 0x125a18u: goto label_125a18;
        case 0x125a1cu: goto label_125a1c;
        case 0x125a20u: goto label_125a20;
        case 0x125a24u: goto label_125a24;
        case 0x125a28u: goto label_125a28;
        case 0x125a2cu: goto label_125a2c;
        case 0x125a30u: goto label_125a30;
        case 0x125a34u: goto label_125a34;
        case 0x125a38u: goto label_125a38;
        case 0x125a3cu: goto label_125a3c;
        case 0x125a40u: goto label_125a40;
        case 0x125a44u: goto label_125a44;
        case 0x125a48u: goto label_125a48;
        case 0x125a4cu: goto label_125a4c;
        case 0x125a50u: goto label_125a50;
        case 0x125a54u: goto label_125a54;
        case 0x125a58u: goto label_125a58;
        case 0x125a5cu: goto label_125a5c;
        case 0x125a60u: goto label_125a60;
        case 0x125a64u: goto label_125a64;
        case 0x125a68u: goto label_125a68;
        case 0x125a6cu: goto label_125a6c;
        case 0x125a70u: goto label_125a70;
        case 0x125a74u: goto label_125a74;
        case 0x125a78u: goto label_125a78;
        case 0x125a7cu: goto label_125a7c;
        case 0x125a80u: goto label_125a80;
        case 0x125a84u: goto label_125a84;
        case 0x125a88u: goto label_125a88;
        case 0x125a8cu: goto label_125a8c;
        case 0x125a90u: goto label_125a90;
        case 0x125a94u: goto label_125a94;
        case 0x125a98u: goto label_125a98;
        case 0x125a9cu: goto label_125a9c;
        case 0x125aa0u: goto label_125aa0;
        case 0x125aa4u: goto label_125aa4;
        case 0x125aa8u: goto label_125aa8;
        case 0x125aacu: goto label_125aac;
        case 0x125ab0u: goto label_125ab0;
        case 0x125ab4u: goto label_125ab4;
        case 0x125ab8u: goto label_125ab8;
        case 0x125abcu: goto label_125abc;
        case 0x125ac0u: goto label_125ac0;
        case 0x125ac4u: goto label_125ac4;
        case 0x125ac8u: goto label_125ac8;
        case 0x125accu: goto label_125acc;
        case 0x125ad0u: goto label_125ad0;
        case 0x125ad4u: goto label_125ad4;
        case 0x125ad8u: goto label_125ad8;
        case 0x125adcu: goto label_125adc;
        case 0x125ae0u: goto label_125ae0;
        case 0x125ae4u: goto label_125ae4;
        case 0x125ae8u: goto label_125ae8;
        case 0x125aecu: goto label_125aec;
        case 0x125af0u: goto label_125af0;
        case 0x125af4u: goto label_125af4;
        case 0x125af8u: goto label_125af8;
        case 0x125afcu: goto label_125afc;
        case 0x125b00u: goto label_125b00;
        case 0x125b04u: goto label_125b04;
        case 0x125b08u: goto label_125b08;
        case 0x125b0cu: goto label_125b0c;
        case 0x125b10u: goto label_125b10;
        case 0x125b14u: goto label_125b14;
        case 0x125b18u: goto label_125b18;
        case 0x125b1cu: goto label_125b1c;
        default: break;
    }

    ctx->pc = 0x1256e0u;

label_1256e0:
    // 0x1256e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1256e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1256e4:
    // 0x1256e4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1256e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1256e8:
    // 0x1256e8: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1256e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1256ec:
    // 0x1256ec: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1256ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_1256f0:
    // 0x1256f0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1256f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1256f4:
    // 0x1256f4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1256f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1256f8:
    // 0x1256f8: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1256f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1256fc:
    // 0x1256fc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1256fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_125700:
    // 0x125700: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x125700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_125704:
    // 0x125704: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x125704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_125708:
    // 0x125708: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x125708u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12570c:
    // 0x12570c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x12570cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_125710:
    // 0x125710: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x125710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_125714:
    // 0x125714: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x125714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_125718:
    // 0x125718: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x125718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_12571c:
    // 0x12571c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x12571cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_125720:
    // 0x125720: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x125720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
label_125724:
    // 0x125724: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x125724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
label_125728:
    // 0x125728: 0x17d60009  bne         $fp, $s6, . + 4 + (0x9 << 2)
label_12572c:
    if (ctx->pc == 0x12572Cu) {
        ctx->pc = 0x12572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125728u;
        // 0x12572c: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125730u;
        goto label_125730;
    }
    ctx->pc = 0x125728u;
    {
        const bool branch_taken_0x125728 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 22));
        ctx->pc = 0x12572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125728u;
        // 0x12572c: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125728) {
            ctx->pc = 0x125750u;
            goto label_125750;
        }
    }
    ctx->pc = 0x125730u;
label_125730:
    // 0x125730: 0xc0493b0  jal         func_124EC0
label_125734:
    if (ctx->pc == 0x125734u) {
        ctx->pc = 0x125734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125730u;
        // 0x125734: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125738u;
        goto label_125738;
    }
    ctx->pc = 0x125730u;
    SET_GPR_U32(ctx, 31, 0x125738u);
    ctx->pc = 0x125734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125730u;
    // 0x125734: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125730u, 0x125738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125738u;
label_125738:
    // 0x125738: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12573c:
    if (ctx->pc == 0x12573Cu) {
        ctx->pc = 0x12573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125738u;
        // 0x12573c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125740u;
        goto label_125740;
    }
    ctx->pc = 0x125738u;
    {
        const bool branch_taken_0x125738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125738u;
        // 0x12573c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125738) {
            ctx->pc = 0x125750u;
            goto label_125750;
        }
    }
    ctx->pc = 0x125740u;
label_125740:
    // 0x125740: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x125740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_125744:
    // 0x125744: 0x100000ea  b           . + 4 + (0xEA << 2)
label_125748:
    if (ctx->pc == 0x125748u) {
        ctx->pc = 0x125748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125744u;
        // 0x125748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12574Cu;
        goto label_12574c;
    }
    ctx->pc = 0x125744u;
    {
        const bool branch_taken_0x125744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125744u;
        // 0x125748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125744) {
            ctx->pc = 0x125AF0u;
            goto label_125af0;
        }
    }
    ctx->pc = 0x12574Cu;
label_12574c:
    // 0x12574c: 0x0  nop
    ctx->pc = 0x12574cu;
    // NOP
label_125750:
    // 0x125750: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x125750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_125754:
    // 0x125754: 0xc0493b0  jal         func_124EC0
label_125758:
    if (ctx->pc == 0x125758u) {
        ctx->pc = 0x125758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125754u;
        // 0x125758: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12575Cu;
        goto label_12575c;
    }
    ctx->pc = 0x125754u;
    SET_GPR_U32(ctx, 31, 0x12575Cu);
    ctx->pc = 0x125758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125754u;
    // 0x125758: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125754u, 0x12575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12575Cu;
label_12575c:
    // 0x12575c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_125760:
    if (ctx->pc == 0x125760u) {
        ctx->pc = 0x125760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12575Cu;
        // 0x125760: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125764u;
        goto label_125764;
    }
    ctx->pc = 0x12575Cu;
    {
        const bool branch_taken_0x12575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12575Cu;
        // 0x125760: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12575c) {
            ctx->pc = 0x1257B8u;
            goto label_1257b8;
        }
    }
    ctx->pc = 0x125764u;
label_125764:
    // 0x125764: 0xae5e0000  sw          $fp, 0x0($s2)
    ctx->pc = 0x125764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 30));
label_125768:
    // 0x125768: 0x6800009  bltz        $s4, . + 4 + (0x9 << 2)
label_12576c:
    if (ctx->pc == 0x12576Cu) {
        ctx->pc = 0x12576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125768u;
        // 0x12576c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125770u;
        goto label_125770;
    }
    ctx->pc = 0x125768u;
    {
        const bool branch_taken_0x125768 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x12576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125768u;
        // 0x12576c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125768) {
            ctx->pc = 0x125790u;
            goto label_125790;
        }
    }
    ctx->pc = 0x125770u;
label_125770:
    // 0x125770: 0x2de1023  subu        $v0, $s6, $fp
    ctx->pc = 0x125770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_125774:
    // 0x125774: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125778:
    // 0x125778: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x125778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
label_12577c:
    // 0x12577c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x12577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_125780:
    // 0x125780: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x125780u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_125784:
    // 0x125784: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_125788:
    if (ctx->pc == 0x125788u) {
        ctx->pc = 0x125788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125784u;
        // 0x125788: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12578Cu;
        goto label_12578c;
    }
    ctx->pc = 0x125784u;
    {
        const bool branch_taken_0x125784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125784u;
        // 0x125788: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125784) {
            ctx->pc = 0x125744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125744;
        }
    }
    ctx->pc = 0x12578Cu;
label_12578c:
    // 0x12578c: 0x0  nop
    ctx->pc = 0x12578cu;
    // NOP
label_125790:
    // 0x125790: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x125790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_125794:
    // 0x125794: 0x568200d6  bnel        $s4, $v0, . + 4 + (0xD6 << 2)
label_125798:
    if (ctx->pc == 0x125798u) {
        ctx->pc = 0x125798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125794u;
        // 0x125798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12579Cu;
        goto label_12579c;
    }
    ctx->pc = 0x125794u;
    {
        const bool branch_taken_0x125794 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x125794) {
            ctx->pc = 0x125798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125794u;
            // 0x125798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125AF0u;
            goto label_125af0;
        }
    }
    ctx->pc = 0x12579Cu;
label_12579c:
    // 0x12579c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1257a0:
    // 0x1257a0: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1257a4:
    if (ctx->pc == 0x1257A4u) {
        ctx->pc = 0x1257A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257A0u;
        // 0x1257a4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257A8u;
        goto label_1257a8;
    }
    ctx->pc = 0x1257A0u;
    {
        const bool branch_taken_0x1257a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257A0u;
        // 0x1257a4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257a0) {
            ctx->pc = 0x125744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125744;
        }
    }
    ctx->pc = 0x1257A8u;
label_1257a8:
    // 0x1257a8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1257a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1257ac:
    // 0x1257ac: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1257acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1257b0:
    // 0x1257b0: 0x100000cf  b           . + 4 + (0xCF << 2)
label_1257b4:
    if (ctx->pc == 0x1257B4u) {
        ctx->pc = 0x1257B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257B0u;
        // 0x1257b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257B8u;
        goto label_1257b8;
    }
    ctx->pc = 0x1257B0u;
    {
        const bool branch_taken_0x1257b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257B0u;
        // 0x1257b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257b0) {
            ctx->pc = 0x125AF0u;
            goto label_125af0;
        }
    }
    ctx->pc = 0x1257B8u;
label_1257b8:
    // 0x1257b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1257b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1257bc:
    // 0x1257bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1257bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1257c0:
    // 0x1257c0: 0x8c95000c  lw          $s5, 0xC($a0)
    ctx->pc = 0x1257c0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1257c4:
    // 0x1257c4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1257c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1257c8:
    // 0x1257c8: 0x12a200c8  beq         $s5, $v0, . + 4 + (0xC8 << 2)
label_1257cc:
    if (ctx->pc == 0x1257CCu) {
        ctx->pc = 0x1257CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257C8u;
        // 0x1257cc: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257D0u;
        goto label_1257d0;
    }
    ctx->pc = 0x1257C8u;
    {
        const bool branch_taken_0x1257c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1257CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257C8u;
        // 0x1257cc: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257c8) {
            ctx->pc = 0x125AECu;
            goto label_125aec;
        }
    }
    ctx->pc = 0x1257D0u;
label_1257d0:
    // 0x1257d0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1257d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1257d4:
    // 0x1257d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1257d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1257d8:
    // 0x1257d8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1257d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1257dc:
    // 0x1257dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1257dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1257e0:
    // 0x1257e0: 0x1560c0  sll         $t4, $s5, 3
    ctx->pc = 0x1257e0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1257e4:
    // 0x1257e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1257e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1257e8:
    // 0x1257e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1257e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1257ec:
    // 0x1257ec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1257ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1257f0:
    // 0x1257f0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1257f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1257f4:
    // 0x1257f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1257f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1257f8:
    // 0x1257f8: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x1257f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_1257fc:
    // 0x1257fc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1257fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_125800:
    // 0x125800: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x125800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_125804:
    // 0x125804: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x125804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_125808:
    // 0x125808: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x125808u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_12580c:
    // 0x12580c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12580cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_125810:
    // 0x125810: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_125814:
    if (ctx->pc == 0x125814u) {
        ctx->pc = 0x125814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125810u;
        // 0x125814: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125818u;
        goto label_125818;
    }
    ctx->pc = 0x125810u;
    {
        const bool branch_taken_0x125810 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x125814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125810u;
        // 0x125814: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125810) {
            ctx->pc = 0x125828u;
            goto label_125828;
        }
    }
    ctx->pc = 0x125818u;
label_125818:
    // 0x125818: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12581c:
    if (ctx->pc == 0x12581Cu) {
        ctx->pc = 0x12581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125818u;
        // 0x12581c: 0x3c34021  addu        $t0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125820u;
        goto label_125820;
    }
    ctx->pc = 0x125818u;
    {
        const bool branch_taken_0x125818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125818u;
        // 0x12581c: 0x3c34021  addu        $t0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125818) {
            ctx->pc = 0x125828u;
            goto label_125828;
        }
    }
    ctx->pc = 0x125820u;
label_125820:
    // 0x125820: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x125820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_125824:
    // 0x125824: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x125824u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125828:
    // 0x125828: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x125828u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_12582c:
    // 0x12582c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x12582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_125830:
    // 0x125830: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x125830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_125834:
    // 0x125834: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x125834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_125838:
    // 0x125838: 0x31742  srl         $v0, $v1, 29
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_12583c:
    // 0x12583c: 0x31f82  srl         $v1, $v1, 30
    ctx->pc = 0x12583cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 30));
label_125840:
    // 0x125840: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x125840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_125844:
    // 0x125844: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x125844u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
label_125848:
    // 0x125848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12584c:
    // 0x12584c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_125850:
    if (ctx->pc == 0x125850u) {
        ctx->pc = 0x125850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12584Cu;
        // 0x125850: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125854u;
        goto label_125854;
    }
    ctx->pc = 0x12584Cu;
    {
        const bool branch_taken_0x12584c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12584Cu;
        // 0x125850: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12584c) {
            ctx->pc = 0x125858u;
            goto label_125858;
        }
    }
    ctx->pc = 0x125854u;
label_125854:
    // 0x125854: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x125854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_125858:
    // 0x125858: 0x8d8c0000  lw          $t4, 0x0($t4)
    ctx->pc = 0x125858u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_12585c:
    // 0x12585c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12585cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_125860:
    // 0x125860: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x125860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_125864:
    // 0x125864: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x125864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_125868:
    // 0x125868: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x125868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_12586c:
    // 0x12586c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x12586cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_125870:
    // 0x125870: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x125870u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_125874:
    // 0x125874: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x125874u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125878:
    // 0x125878: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x125878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_12587c:
    // 0x12587c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x12587cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_125880:
    // 0x125880: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x125880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_125884:
    // 0x125884: 0x40f809  jalr        $v0
label_125888:
    if (ctx->pc == 0x125888u) {
        ctx->pc = 0x125888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125884u;
        // 0x125888: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12588Cu;
        goto label_12588c;
    }
    ctx->pc = 0x125884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12588Cu);
        ctx->pc = 0x125888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125884u;
        // 0x125888: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125884u, 0x12588Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12588Cu;
label_12588c:
    // 0x12588c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x12588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_125890:
    // 0x125890: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x125890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_125894:
    // 0x125894: 0x8fb3000c  lw          $s3, 0xC($sp)
    ctx->pc = 0x125894u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_125898:
    // 0x125898: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x125898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_12589c:
    // 0x12589c: 0x7bad0020  lq          $t5, 0x20($sp)
    ctx->pc = 0x12589cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1258a0:
    // 0x1258a0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1258a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1258a4:
    // 0x1258a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1258a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1258a8:
    // 0x1258a8: 0x12630004  beq         $s3, $v1, . + 4 + (0x4 << 2)
label_1258ac:
    if (ctx->pc == 0x1258ACu) {
        ctx->pc = 0x1258ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258A8u;
        // 0x1258ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258B0u;
        goto label_1258b0;
    }
    ctx->pc = 0x1258A8u;
    {
        const bool branch_taken_0x1258a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x1258ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258A8u;
        // 0x1258ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258a8) {
            ctx->pc = 0x1258BCu;
            goto label_1258bc;
        }
    }
    ctx->pc = 0x1258B0u;
label_1258b0:
    // 0x1258b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1258b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1258b4:
    // 0x1258b4: 0x16630008  bne         $s3, $v1, . + 4 + (0x8 << 2)
label_1258b8:
    if (ctx->pc == 0x1258B8u) {
        ctx->pc = 0x1258BCu;
        goto label_1258bc;
    }
    ctx->pc = 0x1258B4u;
    {
        const bool branch_taken_0x1258b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x1258b4) {
            ctx->pc = 0x1258D8u;
            goto label_1258d8;
        }
    }
    ctx->pc = 0x1258BCu;
label_1258bc:
    // 0x1258bc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1258bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1258c0:
    // 0x1258c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1258c4:
    // 0x1258c4: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x1258c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_1258c8:
    // 0x1258c8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1258c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1258cc:
    // 0x1258cc: 0x10000088  b           . + 4 + (0x88 << 2)
label_1258d0:
    if (ctx->pc == 0x1258D0u) {
        ctx->pc = 0x1258D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258CCu;
        // 0x1258d0: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258D4u;
        goto label_1258d4;
    }
    ctx->pc = 0x1258CCu;
    {
        const bool branch_taken_0x1258cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258CCu;
        // 0x1258d0: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258cc) {
            ctx->pc = 0x125AF0u;
            goto label_125af0;
        }
    }
    ctx->pc = 0x1258D4u;
label_1258d4:
    // 0x1258d4: 0x0  nop
    ctx->pc = 0x1258d4u;
    // NOP
label_1258d8:
    // 0x1258d8: 0x15a00009  bnez        $t5, . + 4 + (0x9 << 2)
label_1258dc:
    if (ctx->pc == 0x1258DCu) {
        ctx->pc = 0x1258DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258D8u;
        // 0x1258dc: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258E0u;
        goto label_1258e0;
    }
    ctx->pc = 0x1258D8u;
    {
        const bool branch_taken_0x1258d8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1258DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258D8u;
        // 0x1258dc: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258d8) {
            ctx->pc = 0x125900u;
            goto label_125900;
        }
    }
    ctx->pc = 0x1258E0u;
label_1258e0:
    // 0x1258e0: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
label_1258e4:
    if (ctx->pc == 0x1258E4u) {
        ctx->pc = 0x1258E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258E0u;
        // 0x1258e4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258E8u;
        goto label_1258e8;
    }
    ctx->pc = 0x1258E0u;
    {
        const bool branch_taken_0x1258e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1258E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258E0u;
        // 0x1258e4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258e0) {
            ctx->pc = 0x12590Cu;
            goto label_12590c;
        }
    }
    ctx->pc = 0x1258E8u;
label_1258e8:
    // 0x1258e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1258e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1258ec:
    // 0x1258ec: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1258ecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1258f0:
    // 0x1258f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1258f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1258f4:
    // 0x1258f4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1258f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1258f8:
    // 0x1258f8: 0x10000075  b           . + 4 + (0x75 << 2)
label_1258fc:
    if (ctx->pc == 0x1258FCu) {
        ctx->pc = 0x1258FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258F8u;
        // 0x1258fc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125900u;
        goto label_125900;
    }
    ctx->pc = 0x1258F8u;
    {
        const bool branch_taken_0x1258f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258F8u;
        // 0x1258fc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258f8) {
            ctx->pc = 0x125AD0u;
            goto label_125ad0;
        }
    }
    ctx->pc = 0x125900u;
label_125900:
    // 0x125900: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_125904:
    if (ctx->pc == 0x125904u) {
        ctx->pc = 0x125908u;
        goto label_125908;
    }
    ctx->pc = 0x125900u;
    {
        const bool branch_taken_0x125900 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x125900) {
            ctx->pc = 0x125930u;
            goto label_125930;
        }
    }
    ctx->pc = 0x125908u;
label_125908:
    // 0x125908: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x125908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12590c:
    // 0x12590c: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
label_125910:
    if (ctx->pc == 0x125910u) {
        ctx->pc = 0x125910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12590Cu;
        // 0x125910: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125914u;
        goto label_125914;
    }
    ctx->pc = 0x12590Cu;
    {
        const bool branch_taken_0x12590c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x125910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12590Cu;
        // 0x125910: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12590c) {
            ctx->pc = 0x125928u;
            goto label_125928;
        }
    }
    ctx->pc = 0x125914u;
label_125914:
    // 0x125914: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x125914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_125918:
    // 0x125918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_12591c:
    // 0x12591c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_125920:
    if (ctx->pc == 0x125920u) {
        ctx->pc = 0x125920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12591Cu;
        // 0x125920: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125924u;
        goto label_125924;
    }
    ctx->pc = 0x12591Cu;
    {
        const bool branch_taken_0x12591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12591Cu;
        // 0x125920: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12591c) {
            ctx->pc = 0x125AD0u;
            goto label_125ad0;
        }
    }
    ctx->pc = 0x125924u;
label_125924:
    // 0x125924: 0x0  nop
    ctx->pc = 0x125924u;
    // NOP
label_125928:
    // 0x125928: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_12592c:
    if (ctx->pc == 0x12592Cu) {
        ctx->pc = 0x125930u;
        goto label_125930;
    }
    ctx->pc = 0x125928u;
    {
        const bool branch_taken_0x125928 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x125928) {
            ctx->pc = 0x125938u;
            goto label_125938;
        }
    }
    ctx->pc = 0x125930u;
label_125930:
    // 0x125930: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
label_125934:
    if (ctx->pc == 0x125934u) {
        ctx->pc = 0x125934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125930u;
        // 0x125934: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125938u;
        goto label_125938;
    }
    ctx->pc = 0x125930u;
    {
        const bool branch_taken_0x125930 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x125934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125930u;
        // 0x125934: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125930) {
            ctx->pc = 0x125940u;
            goto label_125940;
        }
    }
    ctx->pc = 0x125938u;
label_125938:
    // 0x125938: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_12593c:
    if (ctx->pc == 0x12593Cu) {
        ctx->pc = 0x12593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125938u;
        // 0x12593c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125940u;
        goto label_125940;
    }
    ctx->pc = 0x125938u;
    {
        const bool branch_taken_0x125938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125938) {
            ctx->pc = 0x12593Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125938u;
            // 0x12593c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125954u;
            goto label_125954;
        }
    }
    ctx->pc = 0x125940u;
label_125940:
    // 0x125940: 0x50a00064  beql        $a1, $zero, . + 4 + (0x64 << 2)
label_125944:
    if (ctx->pc == 0x125944u) {
        ctx->pc = 0x125944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125940u;
        // 0x125944: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125948u;
        goto label_125948;
    }
    ctx->pc = 0x125940u;
    {
        const bool branch_taken_0x125940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x125940) {
            ctx->pc = 0x125944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125940u;
            // 0x125944: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125AD4u;
            goto label_125ad4;
        }
    }
    ctx->pc = 0x125948u;
label_125948:
    // 0x125948: 0x50e00062  beql        $a3, $zero, . + 4 + (0x62 << 2)
label_12594c:
    if (ctx->pc == 0x12594Cu) {
        ctx->pc = 0x12594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125948u;
        // 0x12594c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125950u;
        goto label_125950;
    }
    ctx->pc = 0x125948u;
    {
        const bool branch_taken_0x125948 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x125948) {
            ctx->pc = 0x12594Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125948u;
            // 0x12594c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125AD4u;
            goto label_125ad4;
        }
    }
    ctx->pc = 0x125950u;
label_125950:
    // 0x125950: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x125950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_125954:
    // 0x125954: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x125954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125958:
    // 0x125958: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x125958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_12595c:
    // 0x12595c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x12595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_125960:
    // 0x125960: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_125964:
    if (ctx->pc == 0x125964u) {
        ctx->pc = 0x125964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125960u;
        // 0x125964: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125968u;
        goto label_125968;
    }
    ctx->pc = 0x125960u;
    {
        const bool branch_taken_0x125960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125960u;
        // 0x125964: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125960) {
            ctx->pc = 0x125980u;
            goto label_125980;
        }
    }
    ctx->pc = 0x125968u;
label_125968:
    // 0x125968: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12596c:
    // 0x12596c: 0x1620003e  bnez        $s1, . + 4 + (0x3E << 2)
label_125970:
    if (ctx->pc == 0x125970u) {
        ctx->pc = 0x125970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12596Cu;
        // 0x125970: 0x90800a  movz        $s0, $a0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125974u;
        goto label_125974;
    }
    ctx->pc = 0x12596Cu;
    {
        const bool branch_taken_0x12596c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x125970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12596Cu;
        // 0x125970: 0x90800a  movz        $s0, $a0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12596c) {
            ctx->pc = 0x125A68u;
            goto label_125a68;
        }
    }
    ctx->pc = 0x125974u;
label_125974:
    // 0x125974: 0x1000003c  b           . + 4 + (0x3C << 2)
label_125978:
    if (ctx->pc == 0x125978u) {
        ctx->pc = 0x125978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125974u;
        // 0x125978: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12597Cu;
        goto label_12597c;
    }
    ctx->pc = 0x125974u;
    {
        const bool branch_taken_0x125974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125974u;
        // 0x125978: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125974) {
            ctx->pc = 0x125A68u;
            goto label_125a68;
        }
    }
    ctx->pc = 0x12597Cu;
label_12597c:
    // 0x12597c: 0x0  nop
    ctx->pc = 0x12597cu;
    // NOP
label_125980:
    // 0x125980: 0x1e00001b  bgtz        $s0, . + 4 + (0x1B << 2)
label_125984:
    if (ctx->pc == 0x125984u) {
        ctx->pc = 0x125984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125980u;
        // 0x125984: 0x32220005  andi        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125988u;
        goto label_125988;
    }
    ctx->pc = 0x125980u;
    {
        const bool branch_taken_0x125980 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x125984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125980u;
        // 0x125984: 0x32220005  andi        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125980) {
            ctx->pc = 0x1259F0u;
            goto label_1259f0;
        }
    }
    ctx->pc = 0x125988u;
label_125988:
    // 0x125988: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x125988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_12598c:
    // 0x12598c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_125990:
    if (ctx->pc == 0x125990u) {
        ctx->pc = 0x125990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12598Cu;
        // 0x125990: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125994u;
        goto label_125994;
    }
    ctx->pc = 0x12598Cu;
    {
        const bool branch_taken_0x12598c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12598Cu;
        // 0x125990: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12598c) {
            ctx->pc = 0x1259F0u;
            goto label_1259f0;
        }
    }
    ctx->pc = 0x125994u;
label_125994:
    // 0x125994: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
label_125998:
    if (ctx->pc == 0x125998u) {
        ctx->pc = 0x125998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125994u;
        // 0x125998: 0x2c71023  subu        $v0, $s6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12599Cu;
        goto label_12599c;
    }
    ctx->pc = 0x125994u;
    {
        const bool branch_taken_0x125994 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x125998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125994u;
        // 0x125998: 0x2c71023  subu        $v0, $s6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125994) {
            ctx->pc = 0x1259B0u;
            goto label_1259b0;
        }
    }
    ctx->pc = 0x12599Cu;
label_12599c:
    // 0x12599c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1259a0:
    // 0x1259a0: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x1259a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
label_1259a4:
    // 0x1259a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1259a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1259a8:
    // 0x1259a8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1259ac:
    if (ctx->pc == 0x1259ACu) {
        ctx->pc = 0x1259ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259A8u;
        // 0x1259ac: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259B0u;
        goto label_1259b0;
    }
    ctx->pc = 0x1259A8u;
    {
        const bool branch_taken_0x1259a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259A8u;
        // 0x1259ac: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259a8) {
            ctx->pc = 0x1259ECu;
            goto label_1259ec;
        }
    }
    ctx->pc = 0x1259B0u;
label_1259b0:
    // 0x1259b0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1259b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1259b4:
    // 0x1259b4: 0x1282000d  beq         $s4, $v0, . + 4 + (0xD << 2)
label_1259b8:
    if (ctx->pc == 0x1259B8u) {
        ctx->pc = 0x1259B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259B4u;
        // 0x1259b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259BCu;
        goto label_1259bc;
    }
    ctx->pc = 0x1259B4u;
    {
        const bool branch_taken_0x1259b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1259B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259B4u;
        // 0x1259b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259b4) {
            ctx->pc = 0x1259ECu;
            goto label_1259ec;
        }
    }
    ctx->pc = 0x1259BCu;
label_1259bc:
    // 0x1259bc: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1259bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1259c0:
    // 0x1259c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1259c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1259c4:
    // 0x1259c4: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x1259c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_1259c8:
    // 0x1259c8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1259c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1259cc:
    // 0x1259cc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1259ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1259d0:
    // 0x1259d0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1259d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1259d4:
    // 0x1259d4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1259d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1259d8:
    // 0x1259d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1259d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1259dc:
    // 0x1259dc: 0x40f809  jalr        $v0
label_1259e0:
    if (ctx->pc == 0x1259E0u) {
        ctx->pc = 0x1259E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259DCu;
        // 0x1259e0: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259E4u;
        goto label_1259e4;
    }
    ctx->pc = 0x1259DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1259E4u);
        ctx->pc = 0x1259E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259DCu;
        // 0x1259e0: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1259DCu, 0x1259E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1259E4u;
label_1259e4:
    // 0x1259e4: 0x7bad0020  lq          $t5, 0x20($sp)
    ctx->pc = 0x1259e4u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1259e8:
    // 0x1259e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1259e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1259ec:
    // 0x1259ec: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1259ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1259f0:
    // 0x1259f0: 0x1e60001e  bgtz        $s3, . + 4 + (0x1E << 2)
label_1259f4:
    if (ctx->pc == 0x1259F4u) {
        ctx->pc = 0x1259F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259F0u;
        // 0x1259f4: 0x2301026  xor         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259F8u;
        goto label_1259f8;
    }
    ctx->pc = 0x1259F0u;
    {
        const bool branch_taken_0x1259f0 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x1259F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259F0u;
        // 0x1259f4: 0x2301026  xor         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259f0) {
            ctx->pc = 0x125A6Cu;
            goto label_125a6c;
        }
    }
    ctx->pc = 0x1259F8u;
label_1259f8:
    // 0x1259f8: 0x32020005  andi        $v0, $s0, 0x5
    ctx->pc = 0x1259f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)5);
label_1259fc:
    // 0x1259fc: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1259fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_125a00:
    // 0x125a00: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_125a04:
    if (ctx->pc == 0x125A04u) {
        ctx->pc = 0x125A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A00u;
        // 0x125a04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A08u;
        goto label_125a08;
    }
    ctx->pc = 0x125A00u;
    {
        const bool branch_taken_0x125a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A00u;
        // 0x125a04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a00) {
            ctx->pc = 0x125A68u;
            goto label_125a68;
        }
    }
    ctx->pc = 0x125A08u;
label_125a08:
    // 0x125a08: 0x6800007  bltz        $s4, . + 4 + (0x7 << 2)
label_125a0c:
    if (ctx->pc == 0x125A0Cu) {
        ctx->pc = 0x125A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A08u;
        // 0x125a0c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A10u;
        goto label_125a10;
    }
    ctx->pc = 0x125A08u;
    {
        const bool branch_taken_0x125a08 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x125A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A08u;
        // 0x125a0c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a08) {
            ctx->pc = 0x125A28u;
            goto label_125a28;
        }
    }
    ctx->pc = 0x125A10u;
label_125a10:
    // 0x125a10: 0x2c71023  subu        $v0, $s6, $a3
    ctx->pc = 0x125a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
label_125a14:
    // 0x125a14: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x125a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_125a18:
    // 0x125a18: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x125a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
label_125a1c:
    // 0x125a1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125a20:
    // 0x125a20: 0x10000010  b           . + 4 + (0x10 << 2)
label_125a24:
    if (ctx->pc == 0x125A24u) {
        ctx->pc = 0x125A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A20u;
        // 0x125a24: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A28u;
        goto label_125a28;
    }
    ctx->pc = 0x125A20u;
    {
        const bool branch_taken_0x125a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A20u;
        // 0x125a24: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a20) {
            ctx->pc = 0x125A64u;
            goto label_125a64;
        }
    }
    ctx->pc = 0x125A28u;
label_125a28:
    // 0x125a28: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x125a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_125a2c:
    // 0x125a2c: 0x1282000d  beq         $s4, $v0, . + 4 + (0xD << 2)
label_125a30:
    if (ctx->pc == 0x125A30u) {
        ctx->pc = 0x125A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A2Cu;
        // 0x125a30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A34u;
        goto label_125a34;
    }
    ctx->pc = 0x125A2Cu;
    {
        const bool branch_taken_0x125a2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x125A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A2Cu;
        // 0x125a30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a2c) {
            ctx->pc = 0x125A64u;
            goto label_125a64;
        }
    }
    ctx->pc = 0x125A34u;
label_125a34:
    // 0x125a34: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x125a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_125a38:
    // 0x125a38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x125a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_125a3c:
    // 0x125a3c: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x125a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_125a40:
    // 0x125a40: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x125a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_125a44:
    // 0x125a44: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x125a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_125a48:
    // 0x125a48: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x125a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_125a4c:
    // 0x125a4c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x125a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_125a50:
    // 0x125a50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x125a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_125a54:
    // 0x125a54: 0x40f809  jalr        $v0
label_125a58:
    if (ctx->pc == 0x125A58u) {
        ctx->pc = 0x125A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A54u;
        // 0x125a58: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A5Cu;
        goto label_125a5c;
    }
    ctx->pc = 0x125A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125A5Cu);
        ctx->pc = 0x125A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A54u;
        // 0x125a58: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125A54u, 0x125A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125A5Cu;
label_125a5c:
    // 0x125a5c: 0x7bad0020  lq          $t5, 0x20($sp)
    ctx->pc = 0x125a5cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125a60:
    // 0x125a60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x125a60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125a64:
    // 0x125a64: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x125a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_125a68:
    // 0x125a68: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x125a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
label_125a6c:
    // 0x125a6c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x125a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_125a70:
    // 0x125a70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x125a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_125a74:
    // 0x125a74: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_125a78:
    if (ctx->pc == 0x125A78u) {
        ctx->pc = 0x125A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A74u;
        // 0x125a78: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A7Cu;
        goto label_125a7c;
    }
    ctx->pc = 0x125A74u;
    {
        const bool branch_taken_0x125a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A74u;
        // 0x125a78: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a74) {
            ctx->pc = 0x125AB0u;
            goto label_125ab0;
        }
    }
    ctx->pc = 0x125A7Cu;
label_125a7c:
    // 0x125a7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x125a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_125a80:
    // 0x125a80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_125a84:
    if (ctx->pc == 0x125A84u) {
        ctx->pc = 0x125A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A80u;
        // 0x125a84: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125A88u;
        goto label_125a88;
    }
    ctx->pc = 0x125A80u;
    {
        const bool branch_taken_0x125a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A80u;
        // 0x125a84: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a80) {
            ctx->pc = 0x125A9Cu;
            goto label_125a9c;
        }
    }
    ctx->pc = 0x125A88u;
label_125a88:
    // 0x125a88: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x125a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125a8c:
    // 0x125a8c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x125a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_125a90:
    // 0x125a90: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x125a90u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125a94:
    // 0x125a94: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x125a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_125a98:
    // 0x125a98: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x125a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_125a9c:
    // 0x125a9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x125a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_125aa0:
    // 0x125aa0: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
label_125aa4:
    if (ctx->pc == 0x125AA4u) {
        ctx->pc = 0x125AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AA0u;
        // 0x125aa4: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125AA8u;
        goto label_125aa8;
    }
    ctx->pc = 0x125AA0u;
    {
        const bool branch_taken_0x125aa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x125AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AA0u;
        // 0x125aa4: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125aa0) {
            ctx->pc = 0x125AD0u;
            goto label_125ad0;
        }
    }
    ctx->pc = 0x125AA8u;
label_125aa8:
    // 0x125aa8: 0x10000011  b           . + 4 + (0x11 << 2)
label_125aac:
    if (ctx->pc == 0x125AACu) {
        ctx->pc = 0x125AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AA8u;
        // 0x125aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125AB0u;
        goto label_125ab0;
    }
    ctx->pc = 0x125AA8u;
    {
        const bool branch_taken_0x125aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AA8u;
        // 0x125aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125aa8) {
            ctx->pc = 0x125AF0u;
            goto label_125af0;
        }
    }
    ctx->pc = 0x125AB0u;
label_125ab0:
    // 0x125ab0: 0x2301024  and         $v0, $s1, $s0
    ctx->pc = 0x125ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
label_125ab4:
    // 0x125ab4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x125ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_125ab8:
    // 0x125ab8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x125ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_125abc:
    // 0x125abc: 0x1440ff3a  bnez        $v0, . + 4 + (-0xC6 << 2)
label_125ac0:
    if (ctx->pc == 0x125AC0u) {
        ctx->pc = 0x125AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125ABCu;
        // 0x125ac0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125AC4u;
        goto label_125ac4;
    }
    ctx->pc = 0x125ABCu;
    {
        const bool branch_taken_0x125abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125ABCu;
        // 0x125ac0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125abc) {
            ctx->pc = 0x1257A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1257a8;
        }
    }
    ctx->pc = 0x125AC4u;
label_125ac4:
    // 0x125ac4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x125ac4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125ac8:
    // 0x125ac8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x125ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_125acc:
    // 0x125acc: 0xae4d000c  sw          $t5, 0xC($s2)
    ctx->pc = 0x125accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 13));
label_125ad0:
    // 0x125ad0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x125ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_125ad4:
    // 0x125ad4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x125ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_125ad8:
    // 0x125ad8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_125adc:
    if (ctx->pc == 0x125ADCu) {
        ctx->pc = 0x125ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AD8u;
        // 0x125adc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125AE0u;
        goto label_125ae0;
    }
    ctx->pc = 0x125AD8u;
    {
        const bool branch_taken_0x125ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AD8u;
        // 0x125adc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ad8) {
            ctx->pc = 0x125AECu;
            goto label_125aec;
        }
    }
    ctx->pc = 0x125AE0u;
label_125ae0:
    // 0x125ae0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125ae4:
    // 0x125ae4: 0x16a2ff3e  bne         $s5, $v0, . + 4 + (-0xC2 << 2)
label_125ae8:
    if (ctx->pc == 0x125AE8u) {
        ctx->pc = 0x125AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AE4u;
        // 0x125ae8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125AECu;
        goto label_125aec;
    }
    ctx->pc = 0x125AE4u;
    {
        const bool branch_taken_0x125ae4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x125AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AE4u;
        // 0x125ae8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ae4) {
            ctx->pc = 0x1257E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1257e0;
        }
    }
    ctx->pc = 0x125AECu;
label_125aec:
    // 0x125aec: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x125aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_125af0:
    // 0x125af0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x125af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125af4:
    // 0x125af4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x125af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_125af8:
    // 0x125af8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x125af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125afc:
    // 0x125afc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x125afcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_125b00:
    // 0x125b00: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x125b00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_125b04:
    // 0x125b04: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x125b04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_125b08:
    // 0x125b08: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x125b08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_125b0c:
    // 0x125b0c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x125b0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_125b10:
    // 0x125b10: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x125b10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_125b14:
    // 0x125b14: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x125b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_125b18:
    // 0x125b18: 0x3e00008  jr          $ra
label_125b1c:
    if (ctx->pc == 0x125B1Cu) {
        ctx->pc = 0x125B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B18u;
        // 0x125b1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125B20u;
        goto label_fallthrough_0x125b18;
    }
    ctx->pc = 0x125B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B18u;
        // 0x125b1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125b18:
    ctx->pc = 0x125B20u;
}
