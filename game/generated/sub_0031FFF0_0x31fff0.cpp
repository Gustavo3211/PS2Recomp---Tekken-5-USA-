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

// Function: sub_0031FFF0
// Address: 0x31fff0 - 0x3204e0
void sub_0031FFF0_0x31fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FFF0_0x31fff0");
#endif

    switch (ctx->pc) {
        case 0x31fff0u: goto label_31fff0;
        case 0x31fff4u: goto label_31fff4;
        case 0x31fff8u: goto label_31fff8;
        case 0x31fffcu: goto label_31fffc;
        case 0x320000u: goto label_320000;
        case 0x320004u: goto label_320004;
        case 0x320008u: goto label_320008;
        case 0x32000cu: goto label_32000c;
        case 0x320010u: goto label_320010;
        case 0x320014u: goto label_320014;
        case 0x320018u: goto label_320018;
        case 0x32001cu: goto label_32001c;
        case 0x320020u: goto label_320020;
        case 0x320024u: goto label_320024;
        case 0x320028u: goto label_320028;
        case 0x32002cu: goto label_32002c;
        case 0x320030u: goto label_320030;
        case 0x320034u: goto label_320034;
        case 0x320038u: goto label_320038;
        case 0x32003cu: goto label_32003c;
        case 0x320040u: goto label_320040;
        case 0x320044u: goto label_320044;
        case 0x320048u: goto label_320048;
        case 0x32004cu: goto label_32004c;
        case 0x320050u: goto label_320050;
        case 0x320054u: goto label_320054;
        case 0x320058u: goto label_320058;
        case 0x32005cu: goto label_32005c;
        case 0x320060u: goto label_320060;
        case 0x320064u: goto label_320064;
        case 0x320068u: goto label_320068;
        case 0x32006cu: goto label_32006c;
        case 0x320070u: goto label_320070;
        case 0x320074u: goto label_320074;
        case 0x320078u: goto label_320078;
        case 0x32007cu: goto label_32007c;
        case 0x320080u: goto label_320080;
        case 0x320084u: goto label_320084;
        case 0x320088u: goto label_320088;
        case 0x32008cu: goto label_32008c;
        case 0x320090u: goto label_320090;
        case 0x320094u: goto label_320094;
        case 0x320098u: goto label_320098;
        case 0x32009cu: goto label_32009c;
        case 0x3200a0u: goto label_3200a0;
        case 0x3200a4u: goto label_3200a4;
        case 0x3200a8u: goto label_3200a8;
        case 0x3200acu: goto label_3200ac;
        case 0x3200b0u: goto label_3200b0;
        case 0x3200b4u: goto label_3200b4;
        case 0x3200b8u: goto label_3200b8;
        case 0x3200bcu: goto label_3200bc;
        case 0x3200c0u: goto label_3200c0;
        case 0x3200c4u: goto label_3200c4;
        case 0x3200c8u: goto label_3200c8;
        case 0x3200ccu: goto label_3200cc;
        case 0x3200d0u: goto label_3200d0;
        case 0x3200d4u: goto label_3200d4;
        case 0x3200d8u: goto label_3200d8;
        case 0x3200dcu: goto label_3200dc;
        case 0x3200e0u: goto label_3200e0;
        case 0x3200e4u: goto label_3200e4;
        case 0x3200e8u: goto label_3200e8;
        case 0x3200ecu: goto label_3200ec;
        case 0x3200f0u: goto label_3200f0;
        case 0x3200f4u: goto label_3200f4;
        case 0x3200f8u: goto label_3200f8;
        case 0x3200fcu: goto label_3200fc;
        case 0x320100u: goto label_320100;
        case 0x320104u: goto label_320104;
        case 0x320108u: goto label_320108;
        case 0x32010cu: goto label_32010c;
        case 0x320110u: goto label_320110;
        case 0x320114u: goto label_320114;
        case 0x320118u: goto label_320118;
        case 0x32011cu: goto label_32011c;
        case 0x320120u: goto label_320120;
        case 0x320124u: goto label_320124;
        case 0x320128u: goto label_320128;
        case 0x32012cu: goto label_32012c;
        case 0x320130u: goto label_320130;
        case 0x320134u: goto label_320134;
        case 0x320138u: goto label_320138;
        case 0x32013cu: goto label_32013c;
        case 0x320140u: goto label_320140;
        case 0x320144u: goto label_320144;
        case 0x320148u: goto label_320148;
        case 0x32014cu: goto label_32014c;
        case 0x320150u: goto label_320150;
        case 0x320154u: goto label_320154;
        case 0x320158u: goto label_320158;
        case 0x32015cu: goto label_32015c;
        case 0x320160u: goto label_320160;
        case 0x320164u: goto label_320164;
        case 0x320168u: goto label_320168;
        case 0x32016cu: goto label_32016c;
        case 0x320170u: goto label_320170;
        case 0x320174u: goto label_320174;
        case 0x320178u: goto label_320178;
        case 0x32017cu: goto label_32017c;
        case 0x320180u: goto label_320180;
        case 0x320184u: goto label_320184;
        case 0x320188u: goto label_320188;
        case 0x32018cu: goto label_32018c;
        case 0x320190u: goto label_320190;
        case 0x320194u: goto label_320194;
        case 0x320198u: goto label_320198;
        case 0x32019cu: goto label_32019c;
        case 0x3201a0u: goto label_3201a0;
        case 0x3201a4u: goto label_3201a4;
        case 0x3201a8u: goto label_3201a8;
        case 0x3201acu: goto label_3201ac;
        case 0x3201b0u: goto label_3201b0;
        case 0x3201b4u: goto label_3201b4;
        case 0x3201b8u: goto label_3201b8;
        case 0x3201bcu: goto label_3201bc;
        case 0x3201c0u: goto label_3201c0;
        case 0x3201c4u: goto label_3201c4;
        case 0x3201c8u: goto label_3201c8;
        case 0x3201ccu: goto label_3201cc;
        case 0x3201d0u: goto label_3201d0;
        case 0x3201d4u: goto label_3201d4;
        case 0x3201d8u: goto label_3201d8;
        case 0x3201dcu: goto label_3201dc;
        case 0x3201e0u: goto label_3201e0;
        case 0x3201e4u: goto label_3201e4;
        case 0x3201e8u: goto label_3201e8;
        case 0x3201ecu: goto label_3201ec;
        case 0x3201f0u: goto label_3201f0;
        case 0x3201f4u: goto label_3201f4;
        case 0x3201f8u: goto label_3201f8;
        case 0x3201fcu: goto label_3201fc;
        case 0x320200u: goto label_320200;
        case 0x320204u: goto label_320204;
        case 0x320208u: goto label_320208;
        case 0x32020cu: goto label_32020c;
        case 0x320210u: goto label_320210;
        case 0x320214u: goto label_320214;
        case 0x320218u: goto label_320218;
        case 0x32021cu: goto label_32021c;
        case 0x320220u: goto label_320220;
        case 0x320224u: goto label_320224;
        case 0x320228u: goto label_320228;
        case 0x32022cu: goto label_32022c;
        case 0x320230u: goto label_320230;
        case 0x320234u: goto label_320234;
        case 0x320238u: goto label_320238;
        case 0x32023cu: goto label_32023c;
        case 0x320240u: goto label_320240;
        case 0x320244u: goto label_320244;
        case 0x320248u: goto label_320248;
        case 0x32024cu: goto label_32024c;
        case 0x320250u: goto label_320250;
        case 0x320254u: goto label_320254;
        case 0x320258u: goto label_320258;
        case 0x32025cu: goto label_32025c;
        case 0x320260u: goto label_320260;
        case 0x320264u: goto label_320264;
        case 0x320268u: goto label_320268;
        case 0x32026cu: goto label_32026c;
        case 0x320270u: goto label_320270;
        case 0x320274u: goto label_320274;
        case 0x320278u: goto label_320278;
        case 0x32027cu: goto label_32027c;
        case 0x320280u: goto label_320280;
        case 0x320284u: goto label_320284;
        case 0x320288u: goto label_320288;
        case 0x32028cu: goto label_32028c;
        case 0x320290u: goto label_320290;
        case 0x320294u: goto label_320294;
        case 0x320298u: goto label_320298;
        case 0x32029cu: goto label_32029c;
        case 0x3202a0u: goto label_3202a0;
        case 0x3202a4u: goto label_3202a4;
        case 0x3202a8u: goto label_3202a8;
        case 0x3202acu: goto label_3202ac;
        case 0x3202b0u: goto label_3202b0;
        case 0x3202b4u: goto label_3202b4;
        case 0x3202b8u: goto label_3202b8;
        case 0x3202bcu: goto label_3202bc;
        case 0x3202c0u: goto label_3202c0;
        case 0x3202c4u: goto label_3202c4;
        case 0x3202c8u: goto label_3202c8;
        case 0x3202ccu: goto label_3202cc;
        case 0x3202d0u: goto label_3202d0;
        case 0x3202d4u: goto label_3202d4;
        case 0x3202d8u: goto label_3202d8;
        case 0x3202dcu: goto label_3202dc;
        case 0x3202e0u: goto label_3202e0;
        case 0x3202e4u: goto label_3202e4;
        case 0x3202e8u: goto label_3202e8;
        case 0x3202ecu: goto label_3202ec;
        case 0x3202f0u: goto label_3202f0;
        case 0x3202f4u: goto label_3202f4;
        case 0x3202f8u: goto label_3202f8;
        case 0x3202fcu: goto label_3202fc;
        case 0x320300u: goto label_320300;
        case 0x320304u: goto label_320304;
        case 0x320308u: goto label_320308;
        case 0x32030cu: goto label_32030c;
        case 0x320310u: goto label_320310;
        case 0x320314u: goto label_320314;
        case 0x320318u: goto label_320318;
        case 0x32031cu: goto label_32031c;
        case 0x320320u: goto label_320320;
        case 0x320324u: goto label_320324;
        case 0x320328u: goto label_320328;
        case 0x32032cu: goto label_32032c;
        case 0x320330u: goto label_320330;
        case 0x320334u: goto label_320334;
        case 0x320338u: goto label_320338;
        case 0x32033cu: goto label_32033c;
        case 0x320340u: goto label_320340;
        case 0x320344u: goto label_320344;
        case 0x320348u: goto label_320348;
        case 0x32034cu: goto label_32034c;
        case 0x320350u: goto label_320350;
        case 0x320354u: goto label_320354;
        case 0x320358u: goto label_320358;
        case 0x32035cu: goto label_32035c;
        case 0x320360u: goto label_320360;
        case 0x320364u: goto label_320364;
        case 0x320368u: goto label_320368;
        case 0x32036cu: goto label_32036c;
        case 0x320370u: goto label_320370;
        case 0x320374u: goto label_320374;
        case 0x320378u: goto label_320378;
        case 0x32037cu: goto label_32037c;
        case 0x320380u: goto label_320380;
        case 0x320384u: goto label_320384;
        case 0x320388u: goto label_320388;
        case 0x32038cu: goto label_32038c;
        case 0x320390u: goto label_320390;
        case 0x320394u: goto label_320394;
        case 0x320398u: goto label_320398;
        case 0x32039cu: goto label_32039c;
        case 0x3203a0u: goto label_3203a0;
        case 0x3203a4u: goto label_3203a4;
        case 0x3203a8u: goto label_3203a8;
        case 0x3203acu: goto label_3203ac;
        case 0x3203b0u: goto label_3203b0;
        case 0x3203b4u: goto label_3203b4;
        case 0x3203b8u: goto label_3203b8;
        case 0x3203bcu: goto label_3203bc;
        case 0x3203c0u: goto label_3203c0;
        case 0x3203c4u: goto label_3203c4;
        case 0x3203c8u: goto label_3203c8;
        case 0x3203ccu: goto label_3203cc;
        case 0x3203d0u: goto label_3203d0;
        case 0x3203d4u: goto label_3203d4;
        case 0x3203d8u: goto label_3203d8;
        case 0x3203dcu: goto label_3203dc;
        case 0x3203e0u: goto label_3203e0;
        case 0x3203e4u: goto label_3203e4;
        case 0x3203e8u: goto label_3203e8;
        case 0x3203ecu: goto label_3203ec;
        case 0x3203f0u: goto label_3203f0;
        case 0x3203f4u: goto label_3203f4;
        case 0x3203f8u: goto label_3203f8;
        case 0x3203fcu: goto label_3203fc;
        case 0x320400u: goto label_320400;
        case 0x320404u: goto label_320404;
        case 0x320408u: goto label_320408;
        case 0x32040cu: goto label_32040c;
        case 0x320410u: goto label_320410;
        case 0x320414u: goto label_320414;
        case 0x320418u: goto label_320418;
        case 0x32041cu: goto label_32041c;
        case 0x320420u: goto label_320420;
        case 0x320424u: goto label_320424;
        case 0x320428u: goto label_320428;
        case 0x32042cu: goto label_32042c;
        case 0x320430u: goto label_320430;
        case 0x320434u: goto label_320434;
        case 0x320438u: goto label_320438;
        case 0x32043cu: goto label_32043c;
        case 0x320440u: goto label_320440;
        case 0x320444u: goto label_320444;
        case 0x320448u: goto label_320448;
        case 0x32044cu: goto label_32044c;
        case 0x320450u: goto label_320450;
        case 0x320454u: goto label_320454;
        case 0x320458u: goto label_320458;
        case 0x32045cu: goto label_32045c;
        case 0x320460u: goto label_320460;
        case 0x320464u: goto label_320464;
        case 0x320468u: goto label_320468;
        case 0x32046cu: goto label_32046c;
        case 0x320470u: goto label_320470;
        case 0x320474u: goto label_320474;
        case 0x320478u: goto label_320478;
        case 0x32047cu: goto label_32047c;
        case 0x320480u: goto label_320480;
        case 0x320484u: goto label_320484;
        case 0x320488u: goto label_320488;
        case 0x32048cu: goto label_32048c;
        case 0x320490u: goto label_320490;
        case 0x320494u: goto label_320494;
        case 0x320498u: goto label_320498;
        case 0x32049cu: goto label_32049c;
        case 0x3204a0u: goto label_3204a0;
        case 0x3204a4u: goto label_3204a4;
        case 0x3204a8u: goto label_3204a8;
        case 0x3204acu: goto label_3204ac;
        case 0x3204b0u: goto label_3204b0;
        case 0x3204b4u: goto label_3204b4;
        case 0x3204b8u: goto label_3204b8;
        case 0x3204bcu: goto label_3204bc;
        case 0x3204c0u: goto label_3204c0;
        case 0x3204c4u: goto label_3204c4;
        case 0x3204c8u: goto label_3204c8;
        case 0x3204ccu: goto label_3204cc;
        case 0x3204d0u: goto label_3204d0;
        case 0x3204d4u: goto label_3204d4;
        case 0x3204d8u: goto label_3204d8;
        case 0x3204dcu: goto label_3204dc;
        default: break;
    }

    ctx->pc = 0x31fff0u;

label_31fff0:
    // 0x31fff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31fff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_31fff4:
    // 0x31fff4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x31fff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_31fff8:
    // 0x31fff8: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x31fff8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_31fffc:
    // 0x31fffc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_320000:
    // 0x320000: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x320000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320004:
    // 0x320004: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x320004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_320008:
    // 0x320008: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x320008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32000c:
    // 0x32000c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32000cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_320010:
    // 0x320010: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x320010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320014:
    // 0x320014: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x320014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_320018:
    // 0x320018: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x320018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_32001c:
    // 0x32001c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x32001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_320020:
    // 0x320020: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x320020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_320024:
    // 0x320024: 0xc0c7e66  jal         func_31F998
label_320028:
    if (ctx->pc == 0x320028u) {
        ctx->pc = 0x320028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320024u;
        // 0x320028: 0xffa70000  sd          $a3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32002Cu;
        goto label_32002c;
    }
    ctx->pc = 0x320024u;
    SET_GPR_U32(ctx, 31, 0x32002Cu);
    ctx->pc = 0x320028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320024u;
    // 0x320028: 0xffa70000  sd          $a3, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F998u, 0x320024u, 0x32002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32002Cu;
label_32002c:
    // 0x32002c: 0x26a30400  addiu       $v1, $s5, 0x400
    ctx->pc = 0x32002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
label_320030:
    // 0x320030: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x320030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_320034:
    // 0x320034: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x320034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_320038:
    // 0x320038: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x320038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32003c:
    // 0x32003c: 0x24c40020  addiu       $a0, $a2, 0x20
    ctx->pc = 0x32003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_320040:
    // 0x320040: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x320040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_320044:
    // 0x320044: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_320048:
    if (ctx->pc == 0x320048u) {
        ctx->pc = 0x320048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320044u;
        // 0x320048: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32004Cu;
        goto label_32004c;
    }
    ctx->pc = 0x320044u;
    {
        const bool branch_taken_0x320044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x320044) {
            ctx->pc = 0x320048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320044u;
            // 0x320048: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320060u;
            goto label_320060;
        }
    }
    ctx->pc = 0x32004Cu;
label_32004c:
    // 0x32004c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x32004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_320050:
    // 0x320050: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x320050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_320054:
    // 0x320054: 0x10000005  b           . + 4 + (0x5 << 2)
label_320058:
    if (ctx->pc == 0x320058u) {
        ctx->pc = 0x320058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320054u;
        // 0x320058: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32005Cu;
        goto label_32005c;
    }
    ctx->pc = 0x320054u;
    {
        const bool branch_taken_0x320054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320054u;
        // 0x320058: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320054) {
            ctx->pc = 0x32006Cu;
            goto label_32006c;
        }
    }
    ctx->pc = 0x32005Cu;
label_32005c:
    // 0x32005c: 0x0  nop
    ctx->pc = 0x32005cu;
    // NOP
label_320060:
    // 0x320060: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x320060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_320064:
    // 0x320064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x320064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_320068:
    // 0x320068: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x320068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_32006c:
    // 0x32006c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_320070:
    // 0x320070: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x320070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_320074:
    // 0x320074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320078:
    // 0x320078: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x320078u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32007c:
    // 0x32007c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x32007cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_320080:
    // 0x320080: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x320080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_320084:
    // 0x320084: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x320084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_320088:
    // 0x320088: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x320088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_32008c:
    // 0x32008c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x32008cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_320090:
    // 0x320090: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x320090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_320094:
    // 0x320094: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x320094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_320098:
    // 0x320098: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_32009c:
    if (ctx->pc == 0x32009Cu) {
        ctx->pc = 0x32009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320098u;
        // 0x32009c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200A0u;
        goto label_3200a0;
    }
    ctx->pc = 0x320098u;
    {
        const bool branch_taken_0x320098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x32009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320098u;
        // 0x32009c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320098) {
            ctx->pc = 0x3200B0u;
            goto label_3200b0;
        }
    }
    ctx->pc = 0x3200A0u;
label_3200a0:
    // 0x3200a0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3200a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_3200a4:
    // 0x3200a4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3200a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3200a8:
    // 0x3200a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3200ac:
    if (ctx->pc == 0x3200ACu) {
        ctx->pc = 0x3200ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200A8u;
        // 0x3200ac: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200B0u;
        goto label_3200b0;
    }
    ctx->pc = 0x3200A8u;
    {
        const bool branch_taken_0x3200a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3200ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200A8u;
        // 0x3200ac: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200a8) {
            ctx->pc = 0x3200C0u;
            goto label_3200c0;
        }
    }
    ctx->pc = 0x3200B0u;
label_3200b0:
    // 0x3200b0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3200b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_3200b4:
    // 0x3200b4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3200b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3200b8:
    // 0x3200b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3200b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3200bc:
    // 0x3200bc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3200bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_3200c0:
    // 0x3200c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3200c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3200c4:
    // 0x3200c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3200c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3200c8:
    // 0x3200c8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x3200c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_3200cc:
    // 0x3200cc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3200ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_3200d0:
    // 0x3200d0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x3200d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3200d4:
    // 0x3200d4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3200d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3200d8:
    // 0x3200d8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_3200dc:
    if (ctx->pc == 0x3200DCu) {
        ctx->pc = 0x3200DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200D8u;
        // 0x3200dc: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200E0u;
        goto label_3200e0;
    }
    ctx->pc = 0x3200D8u;
    {
        const bool branch_taken_0x3200d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3200d8) {
            ctx->pc = 0x3200DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3200D8u;
            // 0x3200dc: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3200F0u;
            goto label_3200f0;
        }
    }
    ctx->pc = 0x3200E0u;
label_3200e0:
    // 0x3200e0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3200e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_3200e4:
    // 0x3200e4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3200e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3200e8:
    // 0x3200e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3200ec:
    if (ctx->pc == 0x3200ECu) {
        ctx->pc = 0x3200ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200E8u;
        // 0x3200ec: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200F0u;
        goto label_3200f0;
    }
    ctx->pc = 0x3200E8u;
    {
        const bool branch_taken_0x3200e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3200ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200E8u;
        // 0x3200ec: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200e8) {
            ctx->pc = 0x3200FCu;
            goto label_3200fc;
        }
    }
    ctx->pc = 0x3200F0u;
label_3200f0:
    // 0x3200f0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3200f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3200f4:
    // 0x3200f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3200f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3200f8:
    // 0x3200f8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3200f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3200fc:
    // 0x3200fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3200fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_320100:
    // 0x320100: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x320100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_320104:
    // 0x320104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320108:
    // 0x320108: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x320108u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32010c:
    // 0x32010c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x32010cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
label_320110:
    // 0x320110: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x320110u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_320114:
    // 0x320114: 0x264c0018  addiu       $t4, $s2, 0x18
    ctx->pc = 0x320114u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_320118:
    // 0x320118: 0x24c40020  addiu       $a0, $a2, 0x20
    ctx->pc = 0x320118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_32011c:
    // 0x32011c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x32011cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320120:
    // 0x320120: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x320120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_320124:
    // 0x320124: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x320124u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
label_320128:
    // 0x320128: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x320128u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_32012c:
    // 0x32012c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32012cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_320130:
    // 0x320130: 0x1163002a  beq         $t3, $v1, . + 4 + (0x2A << 2)
label_320134:
    if (ctx->pc == 0x320134u) {
        ctx->pc = 0x320134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320130u;
        // 0x320134: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320138u;
        goto label_320138;
    }
    ctx->pc = 0x320130u;
    {
        const bool branch_taken_0x320130 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x320134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320130u;
        // 0x320134: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320130) {
            ctx->pc = 0x3201DCu;
            goto label_3201dc;
        }
    }
    ctx->pc = 0x320138u;
label_320138:
    // 0x320138: 0x238c2  srl         $a3, $v0, 3
    ctx->pc = 0x320138u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_32013c:
    // 0x32013c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x32013cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320140:
    // 0x320140: 0x8d8a0004  lw          $t2, 0x4($t4)
    ctx->pc = 0x320140u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_320144:
    // 0x320144: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
label_320148:
    if (ctx->pc == 0x320148u) {
        ctx->pc = 0x320148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320144u;
        // 0x320148: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32014Cu;
        goto label_32014c;
    }
    ctx->pc = 0x320144u;
    {
        const bool branch_taken_0x320144 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x320148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320144u;
        // 0x320148: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320144) {
            ctx->pc = 0x3201D4u;
            goto label_3201d4;
        }
    }
    ctx->pc = 0x32014Cu;
label_32014c:
    // 0x32014c: 0x3c0e0fff  lui         $t6, 0xFFF
    ctx->pc = 0x32014cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4095 << 16));
label_320150:
    // 0x320150: 0x24130100  addiu       $s3, $zero, 0x100
    ctx->pc = 0x320150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_320154:
    // 0x320154: 0x3c193000  lui         $t9, 0x3000
    ctx->pc = 0x320154u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)12288 << 16));
label_320158:
    // 0x320158: 0x3c0d7000  lui         $t5, 0x7000
    ctx->pc = 0x320158u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)28672 << 16));
label_32015c:
    // 0x32015c: 0x3c18f000  lui         $t8, 0xF000
    ctx->pc = 0x32015cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)61440 << 16));
label_320160:
    // 0x320160: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x320160u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_320164:
    // 0x320164: 0x3c0f4a00  lui         $t7, 0x4A00
    ctx->pc = 0x320164u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)18944 << 16));
label_320168:
    // 0x320168: 0x2ce20101  sltiu       $v0, $a3, 0x101
    ctx->pc = 0x320168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_32016c:
    // 0x32016c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32016cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_320170:
    // 0x320170: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x320170u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_320174:
    // 0x320174: 0x10d2024  and         $a0, $t0, $t5
    ctx->pc = 0x320174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 13));
label_320178:
    // 0x320178: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x320178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_32017c:
    // 0x32017c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x32017cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_320180:
    // 0x320180: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x320180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_320184:
    // 0x320184: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x320184u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_320188:
    // 0x320188: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x320188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_32018c:
    // 0x32018c: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x32018cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
label_320190:
    // 0x320190: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x320190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_320194:
    // 0x320194: 0x148d0004  bne         $a0, $t5, . + 4 + (0x4 << 2)
label_320198:
    if (ctx->pc == 0x320198u) {
        ctx->pc = 0x320198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320194u;
        // 0x320198: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32019Cu;
        goto label_32019c;
    }
    ctx->pc = 0x320194u;
    {
        const bool branch_taken_0x320194 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 13));
        ctx->pc = 0x320198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320194u;
        // 0x320198: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320194) {
            ctx->pc = 0x3201A8u;
            goto label_3201a8;
        }
    }
    ctx->pc = 0x32019Cu;
label_32019c:
    // 0x32019c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3201a0:
    if (ctx->pc == 0x3201A0u) {
        ctx->pc = 0x3201A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32019Cu;
        // 0x3201a0: 0x1181025  or          $v0, $t0, $t8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201A4u;
        goto label_3201a4;
    }
    ctx->pc = 0x32019Cu;
    {
        const bool branch_taken_0x32019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32019Cu;
        // 0x3201a0: 0x1181025  or          $v0, $t0, $t8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32019c) {
            ctx->pc = 0x3201ACu;
            goto label_3201ac;
        }
    }
    ctx->pc = 0x3201A4u;
label_3201a4:
    // 0x3201a4: 0x0  nop
    ctx->pc = 0x3201a4u;
    // NOP
label_3201a8:
    // 0x3201a8: 0x10e1024  and         $v0, $t0, $t6
    ctx->pc = 0x3201a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
label_3201ac:
    // 0x3201ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3201acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3201b0:
    // 0x3201b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3201b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3201b4:
    // 0x3201b4: 0x70c31b89  pcpyld      $v1, $a2, $v1
    ctx->pc = 0x3201b4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
label_3201b8:
    // 0x3201b8: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x3201b8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
label_3201bc:
    // 0x3201bc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3201bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3201c0:
    // 0x3201c0: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x3201c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_3201c4:
    // 0x3201c4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x3201c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_3201c8:
    // 0x3201c8: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x3201c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_3201cc:
    // 0x3201cc: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
label_3201d0:
    if (ctx->pc == 0x3201D0u) {
        ctx->pc = 0x3201D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201CCu;
        // 0x3201d0: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201D4u;
        goto label_3201d4;
    }
    ctx->pc = 0x3201CCu;
    {
        const bool branch_taken_0x3201cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3201D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201CCu;
        // 0x3201d0: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201cc) {
            ctx->pc = 0x320168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320168;
        }
    }
    ctx->pc = 0x3201D4u;
label_3201d4:
    // 0x3201d4: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x3201d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
label_3201d8:
    // 0x3201d8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3201d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3201dc:
    // 0x3201dc: 0x26a20400  addiu       $v0, $s5, 0x400
    ctx->pc = 0x3201dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
label_3201e0:
    // 0x3201e0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_3201e4:
    if (ctx->pc == 0x3201E4u) {
        ctx->pc = 0x3201E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201E0u;
        // 0x3201e4: 0xac450014  sw          $a1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201E8u;
        goto label_3201e8;
    }
    ctx->pc = 0x3201E0u;
    {
        const bool branch_taken_0x3201e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201E0u;
        // 0x3201e4: 0xac450014  sw          $a1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201e0) {
            ctx->pc = 0x320238u;
            goto label_320238;
        }
    }
    ctx->pc = 0x3201E8u;
label_3201e8:
    // 0x3201e8: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x3201e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_3201ec:
    // 0x3201ec: 0x32840001  andi        $a0, $s4, 0x1
    ctx->pc = 0x3201ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_3201f0:
    // 0x3201f0: 0xde030038  ld          $v1, 0x38($s0)
    ctx->pc = 0x3201f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 56)));
label_3201f4:
    // 0x3201f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3201f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3201f8:
    // 0x3201f8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_3201fc:
    if (ctx->pc == 0x3201FCu) {
        ctx->pc = 0x3201FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201F8u;
        // 0x3201fc: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320200u;
        goto label_320200;
    }
    ctx->pc = 0x3201F8u;
    {
        const bool branch_taken_0x3201f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201F8u;
        // 0x3201fc: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201f8) {
            ctx->pc = 0x320238u;
            goto label_320238;
        }
    }
    ctx->pc = 0x320200u;
label_320200:
    // 0x320200: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x320200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_320204:
    // 0x320204: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x320204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_320208:
    // 0x320208: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32020c:
    // 0x32020c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320210:
    // 0x320210: 0x40f809  jalr        $v0
label_320214:
    if (ctx->pc == 0x320214u) {
        ctx->pc = 0x320214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320210u;
        // 0x320214: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320218u;
        goto label_320218;
    }
    ctx->pc = 0x320210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320218u);
        ctx->pc = 0x320214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320210u;
        // 0x320214: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320210u, 0x320218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320218u;
label_320218:
    // 0x320218: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x320218u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_32021c:
    // 0x32021c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x32021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_320220:
    // 0x320220: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x320220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_320224:
    // 0x320224: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320228:
    // 0x320228: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32022c:
    // 0x32022c: 0x40f809  jalr        $v0
label_320230:
    if (ctx->pc == 0x320230u) {
        ctx->pc = 0x320230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32022Cu;
        // 0x320230: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320234u;
        goto label_320234;
    }
    ctx->pc = 0x32022Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320234u);
        ctx->pc = 0x320230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32022Cu;
        // 0x320230: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32022Cu, 0x320234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320234u;
label_320234:
    // 0x320234: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x320234u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_320238:
    // 0x320238: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x320238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32023c:
    // 0x32023c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32023cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_320240:
    // 0x320240: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x320240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_320244:
    // 0x320244: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x320244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_320248:
    // 0x320248: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x320248u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32024c:
    // 0x32024c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x32024cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_320250:
    // 0x320250: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x320250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_320254:
    // 0x320254: 0x3e00008  jr          $ra
label_320258:
    if (ctx->pc == 0x320258u) {
        ctx->pc = 0x320258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320254u;
        // 0x320258: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32025Cu;
        goto label_32025c;
    }
    ctx->pc = 0x320254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320254u;
        // 0x320258: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32025Cu;
label_32025c:
    // 0x32025c: 0x0  nop
    ctx->pc = 0x32025cu;
    // NOP
label_320260:
    // 0x320260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x320260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_320264:
    // 0x320264: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x320264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_320268:
    // 0x320268: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x320268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32026c:
    // 0x32026c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_320270:
    // 0x320270: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x320270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_320274:
    // 0x320274: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x320274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_320278:
    // 0x320278: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x320278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32027c:
    // 0x32027c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x32027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_320280:
    // 0x320280: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x320280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320284:
    // 0x320284: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x320284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_320288:
    // 0x320288: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x320288u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_32028c:
    // 0x32028c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x32028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_320290:
    // 0x320290: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x320290u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_320294:
    // 0x320294: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x320294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_320298:
    // 0x320298: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x320298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_32029c:
    // 0x32029c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3202a0:
    // 0x3202a0: 0xc0c7e66  jal         func_31F998
label_3202a4:
    if (ctx->pc == 0x3202A4u) {
        ctx->pc = 0x3202A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202A0u;
        // 0x3202a4: 0xffa80000  sd          $t0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3202A8u;
        goto label_3202a8;
    }
    ctx->pc = 0x3202A0u;
    SET_GPR_U32(ctx, 31, 0x3202A8u);
    ctx->pc = 0x3202A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202A0u;
    // 0x3202a4: 0xffa80000  sd          $t0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F998u, 0x3202A0u, 0x3202A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202A8u;
label_3202a8:
    // 0x3202a8: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x3202a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3202ac:
    // 0x3202ac: 0x26e30400  addiu       $v1, $s7, 0x400
    ctx->pc = 0x3202acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
label_3202b0:
    // 0x3202b0: 0x266c0018  addiu       $t4, $s3, 0x18
    ctx->pc = 0x3202b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3202b4:
    // 0x3202b4: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x3202b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3202b8:
    // 0x3202b8: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x3202b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3202bc:
    // 0x3202bc: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x3202bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
label_3202c0:
    // 0x3202c0: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x3202c0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_3202c4:
    // 0x3202c4: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x3202c4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3202c8:
    // 0x3202c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3202c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3202cc:
    // 0x3202cc: 0x1164002b  beq         $t3, $a0, . + 4 + (0x2B << 2)
label_3202d0:
    if (ctx->pc == 0x3202D0u) {
        ctx->pc = 0x3202D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202CCu;
        // 0x3202d0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3202D4u;
        goto label_3202d4;
    }
    ctx->pc = 0x3202CCu;
    {
        const bool branch_taken_0x3202cc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 4));
        ctx->pc = 0x3202D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202CCu;
        // 0x3202d0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3202cc) {
            ctx->pc = 0x32037Cu;
            goto label_32037c;
        }
    }
    ctx->pc = 0x3202D4u;
label_3202d4:
    // 0x3202d4: 0x238c2  srl         $a3, $v0, 3
    ctx->pc = 0x3202d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_3202d8:
    // 0x3202d8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3202d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3202dc:
    // 0x3202dc: 0x8d8a0004  lw          $t2, 0x4($t4)
    ctx->pc = 0x3202dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_3202e0:
    // 0x3202e0: 0x10e00024  beqz        $a3, . + 4 + (0x24 << 2)
label_3202e4:
    if (ctx->pc == 0x3202E4u) {
        ctx->pc = 0x3202E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202E0u;
        // 0x3202e4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3202E8u;
        goto label_3202e8;
    }
    ctx->pc = 0x3202E0u;
    {
        const bool branch_taken_0x3202e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3202E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202E0u;
        // 0x3202e4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3202e0) {
            ctx->pc = 0x320374u;
            goto label_320374;
        }
    }
    ctx->pc = 0x3202E8u;
label_3202e8:
    // 0x3202e8: 0x3c0e0fff  lui         $t6, 0xFFF
    ctx->pc = 0x3202e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4095 << 16));
label_3202ec:
    // 0x3202ec: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x3202ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3202f0:
    // 0x3202f0: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x3202f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
label_3202f4:
    // 0x3202f4: 0x3c0d7000  lui         $t5, 0x7000
    ctx->pc = 0x3202f4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)28672 << 16));
label_3202f8:
    // 0x3202f8: 0x3c19f000  lui         $t9, 0xF000
    ctx->pc = 0x3202f8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)61440 << 16));
label_3202fc:
    // 0x3202fc: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x3202fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_320300:
    // 0x320300: 0x3c184a00  lui         $t8, 0x4A00
    ctx->pc = 0x320300u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)18944 << 16));
label_320304:
    // 0x320304: 0x0  nop
    ctx->pc = 0x320304u;
    // NOP
label_320308:
    // 0x320308: 0x2ce20101  sltiu       $v0, $a3, 0x101
    ctx->pc = 0x320308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_32030c:
    // 0x32030c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x32030cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_320310:
    // 0x320310: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x320310u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_320314:
    // 0x320314: 0x10d2024  and         $a0, $t0, $t5
    ctx->pc = 0x320314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 13));
label_320318:
    // 0x320318: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x320318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_32031c:
    // 0x32031c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x32031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_320320:
    // 0x320320: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x320320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_320324:
    // 0x320324: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x320324u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_320328:
    // 0x320328: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x320328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_32032c:
    // 0x32032c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x32032cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
label_320330:
    // 0x320330: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x320330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
label_320334:
    // 0x320334: 0x148d0004  bne         $a0, $t5, . + 4 + (0x4 << 2)
label_320338:
    if (ctx->pc == 0x320338u) {
        ctx->pc = 0x320338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320334u;
        // 0x320338: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32033Cu;
        goto label_32033c;
    }
    ctx->pc = 0x320334u;
    {
        const bool branch_taken_0x320334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 13));
        ctx->pc = 0x320338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320334u;
        // 0x320338: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320334) {
            ctx->pc = 0x320348u;
            goto label_320348;
        }
    }
    ctx->pc = 0x32033Cu;
label_32033c:
    // 0x32033c: 0x10000003  b           . + 4 + (0x3 << 2)
label_320340:
    if (ctx->pc == 0x320340u) {
        ctx->pc = 0x320340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32033Cu;
        // 0x320340: 0x1191025  or          $v0, $t0, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320344u;
        goto label_320344;
    }
    ctx->pc = 0x32033Cu;
    {
        const bool branch_taken_0x32033c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32033Cu;
        // 0x320340: 0x1191025  or          $v0, $t0, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32033c) {
            ctx->pc = 0x32034Cu;
            goto label_32034c;
        }
    }
    ctx->pc = 0x320344u;
label_320344:
    // 0x320344: 0x0  nop
    ctx->pc = 0x320344u;
    // NOP
label_320348:
    // 0x320348: 0x10e1024  and         $v0, $t0, $t6
    ctx->pc = 0x320348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
label_32034c:
    // 0x32034c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_320350:
    // 0x320350: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x320350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_320354:
    // 0x320354: 0x70c31b89  pcpyld      $v1, $a2, $v1
    ctx->pc = 0x320354u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
label_320358:
    // 0x320358: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x320358u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
label_32035c:
    // 0x32035c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x32035cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_320360:
    // 0x320360: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x320360u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_320364:
    // 0x320364: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x320364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_320368:
    // 0x320368: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x320368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_32036c:
    // 0x32036c: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
label_320370:
    if (ctx->pc == 0x320370u) {
        ctx->pc = 0x320370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32036Cu;
        // 0x320370: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320374u;
        goto label_320374;
    }
    ctx->pc = 0x32036Cu;
    {
        const bool branch_taken_0x32036c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x320370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32036Cu;
        // 0x320370: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32036c) {
            ctx->pc = 0x320308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320308;
        }
    }
    ctx->pc = 0x320374u;
label_320374:
    // 0x320374: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x320374u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
label_320378:
    // 0x320378: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x320378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_32037c:
    // 0x32037c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32037cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_320380:
    // 0x320380: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x320380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_320384:
    // 0x320384: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_320388:
    if (ctx->pc == 0x320388u) {
        ctx->pc = 0x320388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320384u;
        // 0x320388: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32038Cu;
        goto label_32038c;
    }
    ctx->pc = 0x320384u;
    {
        const bool branch_taken_0x320384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x320384) {
            ctx->pc = 0x320388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320384u;
            // 0x320388: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3203A0u;
            goto label_3203a0;
        }
    }
    ctx->pc = 0x32038Cu;
label_32038c:
    // 0x32038c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x32038cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_320390:
    // 0x320390: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x320390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_320394:
    // 0x320394: 0x10000005  b           . + 4 + (0x5 << 2)
label_320398:
    if (ctx->pc == 0x320398u) {
        ctx->pc = 0x320398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320394u;
        // 0x320398: 0x2021025  or          $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32039Cu;
        goto label_32039c;
    }
    ctx->pc = 0x320394u;
    {
        const bool branch_taken_0x320394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320394u;
        // 0x320398: 0x2021025  or          $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320394) {
            ctx->pc = 0x3203ACu;
            goto label_3203ac;
        }
    }
    ctx->pc = 0x32039Cu;
label_32039c:
    // 0x32039c: 0x0  nop
    ctx->pc = 0x32039cu;
    // NOP
label_3203a0:
    // 0x3203a0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3203a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_3203a4:
    // 0x3203a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3203a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3203a8:
    // 0x3203a8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3203a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_3203ac:
    // 0x3203ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3203acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3203b0:
    // 0x3203b0: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x3203b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3203b4:
    // 0x3203b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3203b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3203b8:
    // 0x3203b8: 0x70463389  pcpyld      $a2, $v0, $a2
    ctx->pc = 0x3203b8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_3203bc:
    // 0x3203bc: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x3203bcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_3203c0:
    // 0x3203c0: 0x26680010  addiu       $t0, $s3, 0x10
    ctx->pc = 0x3203c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3203c4:
    // 0x3203c4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3203c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_3203c8:
    // 0x3203c8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3203c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3203cc:
    // 0x3203cc: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x3203ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_3203d0:
    // 0x3203d0: 0x1e41824  and         $v1, $t7, $a0
    ctx->pc = 0x3203d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) & GPR_U64(ctx, 4));
label_3203d4:
    // 0x3203d4: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x3203d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_3203d8:
    // 0x3203d8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_3203dc:
    if (ctx->pc == 0x3203DCu) {
        ctx->pc = 0x3203DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203D8u;
        // 0x3203dc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3203E0u;
        goto label_3203e0;
    }
    ctx->pc = 0x3203D8u;
    {
        const bool branch_taken_0x3203d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3203DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203D8u;
        // 0x3203dc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203d8) {
            ctx->pc = 0x3203F0u;
            goto label_3203f0;
        }
    }
    ctx->pc = 0x3203E0u;
label_3203e0:
    // 0x3203e0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3203e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_3203e4:
    // 0x3203e4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3203e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3203e8:
    // 0x3203e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3203ec:
    if (ctx->pc == 0x3203ECu) {
        ctx->pc = 0x3203ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203E8u;
        // 0x3203ec: 0x1e21025  or          $v0, $t7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3203F0u;
        goto label_3203f0;
    }
    ctx->pc = 0x3203E8u;
    {
        const bool branch_taken_0x3203e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203E8u;
        // 0x3203ec: 0x1e21025  or          $v0, $t7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203e8) {
            ctx->pc = 0x320400u;
            goto label_320400;
        }
    }
    ctx->pc = 0x3203F0u;
label_3203f0:
    // 0x3203f0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3203f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_3203f4:
    // 0x3203f4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3203f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3203f8:
    // 0x3203f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3203f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3203fc:
    // 0x3203fc: 0x1e21024  and         $v0, $t7, $v0
    ctx->pc = 0x3203fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
label_320400:
    // 0x320400: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x320400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_320404:
    // 0x320404: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x320404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_320408:
    // 0x320408: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x320408u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_32040c:
    // 0x32040c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32040cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_320410:
    // 0x320410: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x320410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_320414:
    // 0x320414: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x320414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_320418:
    // 0x320418: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_32041c:
    if (ctx->pc == 0x32041Cu) {
        ctx->pc = 0x32041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320418u;
        // 0x32041c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320420u;
        goto label_320420;
    }
    ctx->pc = 0x320418u;
    {
        const bool branch_taken_0x320418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x320418) {
            ctx->pc = 0x32041Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320418u;
            // 0x32041c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320430u;
            goto label_320430;
        }
    }
    ctx->pc = 0x320420u;
label_320420:
    // 0x320420: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x320420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_320424:
    // 0x320424: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x320424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_320428:
    // 0x320428: 0x10000004  b           . + 4 + (0x4 << 2)
label_32042c:
    if (ctx->pc == 0x32042Cu) {
        ctx->pc = 0x32042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320428u;
        // 0x32042c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320430u;
        goto label_320430;
    }
    ctx->pc = 0x320428u;
    {
        const bool branch_taken_0x320428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320428u;
        // 0x32042c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320428) {
            ctx->pc = 0x32043Cu;
            goto label_32043c;
        }
    }
    ctx->pc = 0x320430u;
label_320430:
    // 0x320430: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x320430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_320434:
    // 0x320434: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x320434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_320438:
    // 0x320438: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x320438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_32043c:
    // 0x32043c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_320440:
    // 0x320440: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x320440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_320444:
    // 0x320444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320448:
    // 0x320448: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x320448u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32044c:
    // 0x32044c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x32044cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_320450:
    // 0x320450: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x320450u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_320454:
    // 0x320454: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x320454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_320458:
    // 0x320458: 0x26e20400  addiu       $v0, $s7, 0x400
    ctx->pc = 0x320458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
label_32045c:
    // 0x32045c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_320460:
    if (ctx->pc == 0x320460u) {
        ctx->pc = 0x320460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32045Cu;
        // 0x320460: 0xac460014  sw          $a2, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320464u;
        goto label_320464;
    }
    ctx->pc = 0x32045Cu;
    {
        const bool branch_taken_0x32045c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x320460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32045Cu;
        // 0x320460: 0xac460014  sw          $a2, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32045c) {
            ctx->pc = 0x3204B4u;
            goto label_3204b4;
        }
    }
    ctx->pc = 0x320464u;
label_320464:
    // 0x320464: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x320464u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_320468:
    // 0x320468: 0x32c40001  andi        $a0, $s6, 0x1
    ctx->pc = 0x320468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_32046c:
    // 0x32046c: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x32046cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_320470:
    // 0x320470: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x320470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_320474:
    // 0x320474: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_320478:
    if (ctx->pc == 0x320478u) {
        ctx->pc = 0x320478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320474u;
        // 0x320478: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32047Cu;
        goto label_32047c;
    }
    ctx->pc = 0x320474u;
    {
        const bool branch_taken_0x320474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x320478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320474u;
        // 0x320478: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320474) {
            ctx->pc = 0x3204B4u;
            goto label_3204b4;
        }
    }
    ctx->pc = 0x32047Cu;
label_32047c:
    // 0x32047c: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x32047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_320480:
    // 0x320480: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x320480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_320484:
    // 0x320484: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320488:
    // 0x320488: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32048c:
    // 0x32048c: 0x40f809  jalr        $v0
label_320490:
    if (ctx->pc == 0x320490u) {
        ctx->pc = 0x320490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32048Cu;
        // 0x320490: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320494u;
        goto label_320494;
    }
    ctx->pc = 0x32048Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320494u);
        ctx->pc = 0x320490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32048Cu;
        // 0x320490: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32048Cu, 0x320494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320494u;
label_320494:
    // 0x320494: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x320494u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_320498:
    // 0x320498: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x320498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_32049c:
    // 0x32049c: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x32049cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_3204a0:
    // 0x3204a0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3204a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3204a4:
    // 0x3204a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3204a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3204a8:
    // 0x3204a8: 0x40f809  jalr        $v0
label_3204ac:
    if (ctx->pc == 0x3204ACu) {
        ctx->pc = 0x3204ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204A8u;
        // 0x3204ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204B0u;
        goto label_3204b0;
    }
    ctx->pc = 0x3204A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3204B0u);
        ctx->pc = 0x3204ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204A8u;
        // 0x3204ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3204A8u, 0x3204B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3204B0u;
label_3204b0:
    // 0x3204b0: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3204b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_3204b4:
    // 0x3204b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3204b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3204b8:
    // 0x3204b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3204b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3204bc:
    // 0x3204bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3204bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3204c0:
    // 0x3204c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3204c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3204c4:
    // 0x3204c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3204c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3204c8:
    // 0x3204c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3204c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3204cc:
    // 0x3204cc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3204ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3204d0:
    // 0x3204d0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3204d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3204d4:
    // 0x3204d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3204d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3204d8:
    // 0x3204d8: 0x3e00008  jr          $ra
label_3204dc:
    if (ctx->pc == 0x3204DCu) {
        ctx->pc = 0x3204DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204D8u;
        // 0x3204dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204E0u;
        goto label_fallthrough_0x3204d8;
    }
    ctx->pc = 0x3204D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3204DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204D8u;
        // 0x3204dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3204D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3204d8:
    ctx->pc = 0x3204E0u;
}
