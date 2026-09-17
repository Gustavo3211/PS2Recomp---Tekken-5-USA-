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

// Function: sub_002871E8
// Address: 0x2871e8 - 0x2875e8
void sub_002871E8_0x2871e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002871E8_0x2871e8");
#endif

    switch (ctx->pc) {
        case 0x2871e8u: goto label_2871e8;
        case 0x2871ecu: goto label_2871ec;
        case 0x2871f0u: goto label_2871f0;
        case 0x2871f4u: goto label_2871f4;
        case 0x2871f8u: goto label_2871f8;
        case 0x2871fcu: goto label_2871fc;
        case 0x287200u: goto label_287200;
        case 0x287204u: goto label_287204;
        case 0x287208u: goto label_287208;
        case 0x28720cu: goto label_28720c;
        case 0x287210u: goto label_287210;
        case 0x287214u: goto label_287214;
        case 0x287218u: goto label_287218;
        case 0x28721cu: goto label_28721c;
        case 0x287220u: goto label_287220;
        case 0x287224u: goto label_287224;
        case 0x287228u: goto label_287228;
        case 0x28722cu: goto label_28722c;
        case 0x287230u: goto label_287230;
        case 0x287234u: goto label_287234;
        case 0x287238u: goto label_287238;
        case 0x28723cu: goto label_28723c;
        case 0x287240u: goto label_287240;
        case 0x287244u: goto label_287244;
        case 0x287248u: goto label_287248;
        case 0x28724cu: goto label_28724c;
        case 0x287250u: goto label_287250;
        case 0x287254u: goto label_287254;
        case 0x287258u: goto label_287258;
        case 0x28725cu: goto label_28725c;
        case 0x287260u: goto label_287260;
        case 0x287264u: goto label_287264;
        case 0x287268u: goto label_287268;
        case 0x28726cu: goto label_28726c;
        case 0x287270u: goto label_287270;
        case 0x287274u: goto label_287274;
        case 0x287278u: goto label_287278;
        case 0x28727cu: goto label_28727c;
        case 0x287280u: goto label_287280;
        case 0x287284u: goto label_287284;
        case 0x287288u: goto label_287288;
        case 0x28728cu: goto label_28728c;
        case 0x287290u: goto label_287290;
        case 0x287294u: goto label_287294;
        case 0x287298u: goto label_287298;
        case 0x28729cu: goto label_28729c;
        case 0x2872a0u: goto label_2872a0;
        case 0x2872a4u: goto label_2872a4;
        case 0x2872a8u: goto label_2872a8;
        case 0x2872acu: goto label_2872ac;
        case 0x2872b0u: goto label_2872b0;
        case 0x2872b4u: goto label_2872b4;
        case 0x2872b8u: goto label_2872b8;
        case 0x2872bcu: goto label_2872bc;
        case 0x2872c0u: goto label_2872c0;
        case 0x2872c4u: goto label_2872c4;
        case 0x2872c8u: goto label_2872c8;
        case 0x2872ccu: goto label_2872cc;
        case 0x2872d0u: goto label_2872d0;
        case 0x2872d4u: goto label_2872d4;
        case 0x2872d8u: goto label_2872d8;
        case 0x2872dcu: goto label_2872dc;
        case 0x2872e0u: goto label_2872e0;
        case 0x2872e4u: goto label_2872e4;
        case 0x2872e8u: goto label_2872e8;
        case 0x2872ecu: goto label_2872ec;
        case 0x2872f0u: goto label_2872f0;
        case 0x2872f4u: goto label_2872f4;
        case 0x2872f8u: goto label_2872f8;
        case 0x2872fcu: goto label_2872fc;
        case 0x287300u: goto label_287300;
        case 0x287304u: goto label_287304;
        case 0x287308u: goto label_287308;
        case 0x28730cu: goto label_28730c;
        case 0x287310u: goto label_287310;
        case 0x287314u: goto label_287314;
        case 0x287318u: goto label_287318;
        case 0x28731cu: goto label_28731c;
        case 0x287320u: goto label_287320;
        case 0x287324u: goto label_287324;
        case 0x287328u: goto label_287328;
        case 0x28732cu: goto label_28732c;
        case 0x287330u: goto label_287330;
        case 0x287334u: goto label_287334;
        case 0x287338u: goto label_287338;
        case 0x28733cu: goto label_28733c;
        case 0x287340u: goto label_287340;
        case 0x287344u: goto label_287344;
        case 0x287348u: goto label_287348;
        case 0x28734cu: goto label_28734c;
        case 0x287350u: goto label_287350;
        case 0x287354u: goto label_287354;
        case 0x287358u: goto label_287358;
        case 0x28735cu: goto label_28735c;
        case 0x287360u: goto label_287360;
        case 0x287364u: goto label_287364;
        case 0x287368u: goto label_287368;
        case 0x28736cu: goto label_28736c;
        case 0x287370u: goto label_287370;
        case 0x287374u: goto label_287374;
        case 0x287378u: goto label_287378;
        case 0x28737cu: goto label_28737c;
        case 0x287380u: goto label_287380;
        case 0x287384u: goto label_287384;
        case 0x287388u: goto label_287388;
        case 0x28738cu: goto label_28738c;
        case 0x287390u: goto label_287390;
        case 0x287394u: goto label_287394;
        case 0x287398u: goto label_287398;
        case 0x28739cu: goto label_28739c;
        case 0x2873a0u: goto label_2873a0;
        case 0x2873a4u: goto label_2873a4;
        case 0x2873a8u: goto label_2873a8;
        case 0x2873acu: goto label_2873ac;
        case 0x2873b0u: goto label_2873b0;
        case 0x2873b4u: goto label_2873b4;
        case 0x2873b8u: goto label_2873b8;
        case 0x2873bcu: goto label_2873bc;
        case 0x2873c0u: goto label_2873c0;
        case 0x2873c4u: goto label_2873c4;
        case 0x2873c8u: goto label_2873c8;
        case 0x2873ccu: goto label_2873cc;
        case 0x2873d0u: goto label_2873d0;
        case 0x2873d4u: goto label_2873d4;
        case 0x2873d8u: goto label_2873d8;
        case 0x2873dcu: goto label_2873dc;
        case 0x2873e0u: goto label_2873e0;
        case 0x2873e4u: goto label_2873e4;
        case 0x2873e8u: goto label_2873e8;
        case 0x2873ecu: goto label_2873ec;
        case 0x2873f0u: goto label_2873f0;
        case 0x2873f4u: goto label_2873f4;
        case 0x2873f8u: goto label_2873f8;
        case 0x2873fcu: goto label_2873fc;
        case 0x287400u: goto label_287400;
        case 0x287404u: goto label_287404;
        case 0x287408u: goto label_287408;
        case 0x28740cu: goto label_28740c;
        case 0x287410u: goto label_287410;
        case 0x287414u: goto label_287414;
        case 0x287418u: goto label_287418;
        case 0x28741cu: goto label_28741c;
        case 0x287420u: goto label_287420;
        case 0x287424u: goto label_287424;
        case 0x287428u: goto label_287428;
        case 0x28742cu: goto label_28742c;
        case 0x287430u: goto label_287430;
        case 0x287434u: goto label_287434;
        case 0x287438u: goto label_287438;
        case 0x28743cu: goto label_28743c;
        case 0x287440u: goto label_287440;
        case 0x287444u: goto label_287444;
        case 0x287448u: goto label_287448;
        case 0x28744cu: goto label_28744c;
        case 0x287450u: goto label_287450;
        case 0x287454u: goto label_287454;
        case 0x287458u: goto label_287458;
        case 0x28745cu: goto label_28745c;
        case 0x287460u: goto label_287460;
        case 0x287464u: goto label_287464;
        case 0x287468u: goto label_287468;
        case 0x28746cu: goto label_28746c;
        case 0x287470u: goto label_287470;
        case 0x287474u: goto label_287474;
        case 0x287478u: goto label_287478;
        case 0x28747cu: goto label_28747c;
        case 0x287480u: goto label_287480;
        case 0x287484u: goto label_287484;
        case 0x287488u: goto label_287488;
        case 0x28748cu: goto label_28748c;
        case 0x287490u: goto label_287490;
        case 0x287494u: goto label_287494;
        case 0x287498u: goto label_287498;
        case 0x28749cu: goto label_28749c;
        case 0x2874a0u: goto label_2874a0;
        case 0x2874a4u: goto label_2874a4;
        case 0x2874a8u: goto label_2874a8;
        case 0x2874acu: goto label_2874ac;
        case 0x2874b0u: goto label_2874b0;
        case 0x2874b4u: goto label_2874b4;
        case 0x2874b8u: goto label_2874b8;
        case 0x2874bcu: goto label_2874bc;
        case 0x2874c0u: goto label_2874c0;
        case 0x2874c4u: goto label_2874c4;
        case 0x2874c8u: goto label_2874c8;
        case 0x2874ccu: goto label_2874cc;
        case 0x2874d0u: goto label_2874d0;
        case 0x2874d4u: goto label_2874d4;
        case 0x2874d8u: goto label_2874d8;
        case 0x2874dcu: goto label_2874dc;
        case 0x2874e0u: goto label_2874e0;
        case 0x2874e4u: goto label_2874e4;
        case 0x2874e8u: goto label_2874e8;
        case 0x2874ecu: goto label_2874ec;
        case 0x2874f0u: goto label_2874f0;
        case 0x2874f4u: goto label_2874f4;
        case 0x2874f8u: goto label_2874f8;
        case 0x2874fcu: goto label_2874fc;
        case 0x287500u: goto label_287500;
        case 0x287504u: goto label_287504;
        case 0x287508u: goto label_287508;
        case 0x28750cu: goto label_28750c;
        case 0x287510u: goto label_287510;
        case 0x287514u: goto label_287514;
        case 0x287518u: goto label_287518;
        case 0x28751cu: goto label_28751c;
        case 0x287520u: goto label_287520;
        case 0x287524u: goto label_287524;
        case 0x287528u: goto label_287528;
        case 0x28752cu: goto label_28752c;
        case 0x287530u: goto label_287530;
        case 0x287534u: goto label_287534;
        case 0x287538u: goto label_287538;
        case 0x28753cu: goto label_28753c;
        case 0x287540u: goto label_287540;
        case 0x287544u: goto label_287544;
        case 0x287548u: goto label_287548;
        case 0x28754cu: goto label_28754c;
        case 0x287550u: goto label_287550;
        case 0x287554u: goto label_287554;
        case 0x287558u: goto label_287558;
        case 0x28755cu: goto label_28755c;
        case 0x287560u: goto label_287560;
        case 0x287564u: goto label_287564;
        case 0x287568u: goto label_287568;
        case 0x28756cu: goto label_28756c;
        case 0x287570u: goto label_287570;
        case 0x287574u: goto label_287574;
        case 0x287578u: goto label_287578;
        case 0x28757cu: goto label_28757c;
        case 0x287580u: goto label_287580;
        case 0x287584u: goto label_287584;
        case 0x287588u: goto label_287588;
        case 0x28758cu: goto label_28758c;
        case 0x287590u: goto label_287590;
        case 0x287594u: goto label_287594;
        case 0x287598u: goto label_287598;
        case 0x28759cu: goto label_28759c;
        case 0x2875a0u: goto label_2875a0;
        case 0x2875a4u: goto label_2875a4;
        case 0x2875a8u: goto label_2875a8;
        case 0x2875acu: goto label_2875ac;
        case 0x2875b0u: goto label_2875b0;
        case 0x2875b4u: goto label_2875b4;
        case 0x2875b8u: goto label_2875b8;
        case 0x2875bcu: goto label_2875bc;
        case 0x2875c0u: goto label_2875c0;
        case 0x2875c4u: goto label_2875c4;
        case 0x2875c8u: goto label_2875c8;
        case 0x2875ccu: goto label_2875cc;
        case 0x2875d0u: goto label_2875d0;
        case 0x2875d4u: goto label_2875d4;
        case 0x2875d8u: goto label_2875d8;
        case 0x2875dcu: goto label_2875dc;
        case 0x2875e0u: goto label_2875e0;
        case 0x2875e4u: goto label_2875e4;
        default: break;
    }

    ctx->pc = 0x2871e8u;

label_2871e8:
    // 0x2871e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2871e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2871ec:
    // 0x2871ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2871ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2871f0:
    // 0x2871f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2871f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2871f4:
    // 0x2871f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2871f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2871f8:
    // 0x2871f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2871f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2871fc:
    // 0x2871fc: 0x120000f5  beqz        $s0, . + 4 + (0xF5 << 2)
label_287200:
    if (ctx->pc == 0x287200u) {
        ctx->pc = 0x287200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871FCu;
        // 0x287200: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287204u;
        goto label_287204;
    }
    ctx->pc = 0x2871FCu;
    {
        const bool branch_taken_0x2871fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x287200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871FCu;
        // 0x287200: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871fc) {
            ctx->pc = 0x2875D4u;
            goto label_2875d4;
        }
    }
    ctx->pc = 0x287204u;
label_287204:
    // 0x287204: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x287204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_287208:
    // 0x287208: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_28720c:
    if (ctx->pc == 0x28720Cu) {
        ctx->pc = 0x28720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287208u;
        // 0x28720c: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287210u;
        goto label_287210;
    }
    ctx->pc = 0x287208u;
    {
        const bool branch_taken_0x287208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287208) {
            ctx->pc = 0x28720Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287208u;
            // 0x28720c: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287220u;
            goto label_287220;
        }
    }
    ctx->pc = 0x287210u;
label_287210:
    // 0x287210: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x287210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_287214:
    // 0x287214: 0x504000f0  beql        $v0, $zero, . + 4 + (0xF0 << 2)
label_287218:
    if (ctx->pc == 0x287218u) {
        ctx->pc = 0x287218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287214u;
        // 0x287218: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28721Cu;
        goto label_28721c;
    }
    ctx->pc = 0x287214u;
    {
        const bool branch_taken_0x287214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287214) {
            ctx->pc = 0x287218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287214u;
            // 0x287218: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2875D8u;
            goto label_2875d8;
        }
    }
    ctx->pc = 0x28721Cu;
label_28721c:
    // 0x28721c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x28721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_287220:
    // 0x287220: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x287220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_287224:
    // 0x287224: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_287228:
    if (ctx->pc == 0x287228u) {
        ctx->pc = 0x287228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287224u;
        // 0x287228: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28722Cu;
        goto label_28722c;
    }
    ctx->pc = 0x287224u;
    {
        const bool branch_taken_0x287224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287224u;
        // 0x287228: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287224) {
            ctx->pc = 0x287248u;
            goto label_287248;
        }
    }
    ctx->pc = 0x28722Cu;
label_28722c:
    // 0x28722c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_287230:
    // 0x287230: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_287234:
    if (ctx->pc == 0x287234u) {
        ctx->pc = 0x287234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287230u;
        // 0x287234: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x287238u;
        goto label_287238;
    }
    ctx->pc = 0x287230u;
    {
        const bool branch_taken_0x287230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287230) {
            ctx->pc = 0x287234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287230u;
            // 0x287234: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x287248u;
            goto label_287248;
        }
    }
    ctx->pc = 0x287238u;
label_287238:
    // 0x287238: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x287238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_28723c:
    // 0x28723c: 0x10000009  b           . + 4 + (0x9 << 2)
label_287240:
    if (ctx->pc == 0x287240u) {
        ctx->pc = 0x287240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28723Cu;
        // 0x287240: 0x24420058  addiu       $v0, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287244u;
        goto label_287244;
    }
    ctx->pc = 0x28723Cu;
    {
        const bool branch_taken_0x28723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28723Cu;
        // 0x287240: 0x24420058  addiu       $v0, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28723c) {
            ctx->pc = 0x287264u;
            goto label_287264;
        }
    }
    ctx->pc = 0x287244u;
label_287244:
    // 0x287244: 0x0  nop
    ctx->pc = 0x287244u;
    // NOP
label_287248:
    // 0x287248: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_28724c:
    if (ctx->pc == 0x28724Cu) {
        ctx->pc = 0x28724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287248u;
        // 0x28724c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287250u;
        goto label_287250;
    }
    ctx->pc = 0x287248u;
    {
        const bool branch_taken_0x287248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287248) {
            ctx->pc = 0x28724Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287248u;
            // 0x28724c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287280u;
            goto label_287280;
        }
    }
    ctx->pc = 0x287250u;
label_287250:
    // 0x287250: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x287250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_287254:
    // 0x287254: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_287258:
    if (ctx->pc == 0x287258u) {
        ctx->pc = 0x287258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287254u;
        // 0x287258: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28725Cu;
        goto label_28725c;
    }
    ctx->pc = 0x287254u;
    {
        const bool branch_taken_0x287254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287254) {
            ctx->pc = 0x287258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287254u;
            // 0x287258: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287280u;
            goto label_287280;
        }
    }
    ctx->pc = 0x28725Cu;
label_28725c:
    // 0x28725c: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x28725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_287260:
    // 0x287260: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x287260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_287264:
    // 0x287264: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x287264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_287268:
    // 0x287268: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x287268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28726c:
    // 0x28726c: 0x60f809  jalr        $v1
label_287270:
    if (ctx->pc == 0x287270u) {
        ctx->pc = 0x287270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28726Cu;
        // 0x287270: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287274u;
        goto label_287274;
    }
    ctx->pc = 0x28726Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x287274u);
        ctx->pc = 0x287270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28726Cu;
        // 0x287270: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28726Cu, 0x287274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x287274u;
label_287274:
    // 0x287274: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_287278:
    if (ctx->pc == 0x287278u) {
        ctx->pc = 0x287278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287274u;
        // 0x287278: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28727Cu;
        goto label_28727c;
    }
    ctx->pc = 0x287274u;
    {
        const bool branch_taken_0x287274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287274u;
        // 0x287278: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287274) {
            ctx->pc = 0x2875D8u;
            goto label_2875d8;
        }
    }
    ctx->pc = 0x28727Cu;
label_28727c:
    // 0x28727c: 0x0  nop
    ctx->pc = 0x28727cu;
    // NOP
label_287280:
    // 0x287280: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_287284:
    if (ctx->pc == 0x287284u) {
        ctx->pc = 0x287284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287280u;
        // 0x287284: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287288u;
        goto label_287288;
    }
    ctx->pc = 0x287280u;
    {
        const bool branch_taken_0x287280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287280) {
            ctx->pc = 0x287284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287280u;
            // 0x287284: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2872A0u;
            goto label_2872a0;
        }
    }
    ctx->pc = 0x287288u;
label_287288:
    // 0x287288: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x287288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28728c:
    // 0x28728c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_287290:
    if (ctx->pc == 0x287290u) {
        ctx->pc = 0x287290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28728Cu;
        // 0x287290: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287294u;
        goto label_287294;
    }
    ctx->pc = 0x28728Cu;
    {
        const bool branch_taken_0x28728c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x28728c) {
            ctx->pc = 0x287290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28728Cu;
            // 0x287290: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2872A0u;
            goto label_2872a0;
        }
    }
    ctx->pc = 0x287294u;
label_287294:
    // 0x287294: 0xc0a17e8  jal         func_285FA0
label_287298:
    if (ctx->pc == 0x287298u) {
        ctx->pc = 0x287298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287294u;
        // 0x287298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28729Cu;
        goto label_28729c;
    }
    ctx->pc = 0x287294u;
    SET_GPR_U32(ctx, 31, 0x28729Cu);
    ctx->pc = 0x287298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287294u;
    // 0x287298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285FA0u, 0x287294u, 0x28729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28729Cu;
label_28729c:
    // 0x28729c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2872a0:
    // 0x2872a0: 0x2c620018  sltiu       $v0, $v1, 0x18
    ctx->pc = 0x2872a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
label_2872a4:
    // 0x2872a4: 0x504000bd  beql        $v0, $zero, . + 4 + (0xBD << 2)
label_2872a8:
    if (ctx->pc == 0x2872A8u) {
        ctx->pc = 0x2872A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872A4u;
        // 0x2872a8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2872ACu;
        goto label_2872ac;
    }
    ctx->pc = 0x2872A4u;
    {
        const bool branch_taken_0x2872a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2872a4) {
            ctx->pc = 0x2872A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2872A4u;
            // 0x2872a8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x2872ACu;
label_2872ac:
    // 0x2872ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2872acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2872b0:
    // 0x2872b0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2872b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2872b4:
    // 0x2872b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2872b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2872b8:
    // 0x2872b8: 0x8c639770  lw          $v1, -0x6890($v1)
    ctx->pc = 0x2872b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940528)));
label_2872bc:
    // 0x2872bc: 0x600008  jr          $v1
label_2872c0:
    if (ctx->pc == 0x2872C0u) {
        ctx->pc = 0x2872C4u;
        goto label_2872c4;
    }
    ctx->pc = 0x2872BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2872C8u: goto label_2872c8;
            case 0x2872E0u: goto label_2872e0;
            case 0x2872F8u: goto label_2872f8;
            case 0x287318u: goto label_287318;
            case 0x287338u: goto label_287338;
            case 0x287358u: goto label_287358;
            case 0x287378u: goto label_287378;
            case 0x287398u: goto label_287398;
            case 0x2873B8u: goto label_2873b8;
            case 0x2873D8u: goto label_2873d8;
            case 0x2873F8u: goto label_2873f8;
            case 0x287418u: goto label_287418;
            case 0x287438u: goto label_287438;
            case 0x287458u: goto label_287458;
            case 0x287470u: goto label_287470;
            case 0x2874A0u: goto label_2874a0;
            case 0x2874C0u: goto label_2874c0;
            case 0x2874E0u: goto label_2874e0;
            case 0x2874F8u: goto label_2874f8;
            case 0x287530u: goto label_287530;
            case 0x287550u: goto label_287550;
            case 0x287570u: goto label_287570;
            case 0x287588u: goto label_287588;
            case 0x287598u: goto label_287598;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2872BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2872C4u;
label_2872c4:
    // 0x2872c4: 0x0  nop
    ctx->pc = 0x2872c4u;
    // NOP
label_2872c8:
    // 0x2872c8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2872c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2872cc:
    // 0x2872cc: 0xc0a1802  jal         func_286008
label_2872d0:
    if (ctx->pc == 0x2872D0u) {
        ctx->pc = 0x2872D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872CCu;
        // 0x2872d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2872D4u;
        goto label_2872d4;
    }
    ctx->pc = 0x2872CCu;
    SET_GPR_U32(ctx, 31, 0x2872D4u);
    ctx->pc = 0x2872D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2872CCu;
    // 0x2872d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286008u, 0x2872CCu, 0x2872D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2872D4u;
label_2872d4:
    // 0x2872d4: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_2872d8:
    if (ctx->pc == 0x2872D8u) {
        ctx->pc = 0x2872D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872D4u;
        // 0x2872d8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2872DCu;
        goto label_2872dc;
    }
    ctx->pc = 0x2872D4u;
    {
        const bool branch_taken_0x2872d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2872D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872D4u;
        // 0x2872d8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872d4) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x2872DCu;
label_2872dc:
    // 0x2872dc: 0x0  nop
    ctx->pc = 0x2872dcu;
    // NOP
label_2872e0:
    // 0x2872e0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2872e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2872e4:
    // 0x2872e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2872e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2872e8:
    // 0x2872e8: 0xc0a180a  jal         func_286028
label_2872ec:
    if (ctx->pc == 0x2872ECu) {
        ctx->pc = 0x2872ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872E8u;
        // 0x2872ec: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2872F0u;
        goto label_2872f0;
    }
    ctx->pc = 0x2872E8u;
    SET_GPR_U32(ctx, 31, 0x2872F0u);
    ctx->pc = 0x2872ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2872E8u;
    // 0x2872ec: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286028u, 0x2872E8u, 0x2872F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2872F0u;
label_2872f0:
    // 0x2872f0: 0x100000aa  b           . + 4 + (0xAA << 2)
label_2872f4:
    if (ctx->pc == 0x2872F4u) {
        ctx->pc = 0x2872F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872F0u;
        // 0x2872f4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2872F8u;
        goto label_2872f8;
    }
    ctx->pc = 0x2872F0u;
    {
        const bool branch_taken_0x2872f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2872F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872F0u;
        // 0x2872f4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872f0) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x2872F8u;
label_2872f8:
    // 0x2872f8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2872f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2872fc:
    // 0x2872fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2872fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287300:
    // 0x287300: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x287300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_287304:
    // 0x287304: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x287304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_287308:
    // 0x287308: 0xc0a183a  jal         func_2860E8
label_28730c:
    if (ctx->pc == 0x28730Cu) {
        ctx->pc = 0x28730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287308u;
        // 0x28730c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287310u;
        goto label_287310;
    }
    ctx->pc = 0x287308u;
    SET_GPR_U32(ctx, 31, 0x287310u);
    ctx->pc = 0x28730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287308u;
    // 0x28730c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2860E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2860E8u, 0x287308u, 0x287310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287310u;
label_287310:
    // 0x287310: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_287314:
    if (ctx->pc == 0x287314u) {
        ctx->pc = 0x287314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287310u;
        // 0x287314: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287318u;
        goto label_287318;
    }
    ctx->pc = 0x287310u;
    {
        const bool branch_taken_0x287310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287310u;
        // 0x287314: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287310) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x287318u;
label_287318:
    // 0x287318: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x287318u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_28731c:
    // 0x28731c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287320:
    // 0x287320: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x287320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_287324:
    // 0x287324: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x287324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_287328:
    // 0x287328: 0xc0a183a  jal         func_2860E8
label_28732c:
    if (ctx->pc == 0x28732Cu) {
        ctx->pc = 0x28732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287328u;
        // 0x28732c: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287330u;
        goto label_287330;
    }
    ctx->pc = 0x287328u;
    SET_GPR_U32(ctx, 31, 0x287330u);
    ctx->pc = 0x28732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287328u;
    // 0x28732c: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2860E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2860E8u, 0x287328u, 0x287330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287330u;
label_287330:
    // 0x287330: 0x1000009a  b           . + 4 + (0x9A << 2)
label_287334:
    if (ctx->pc == 0x287334u) {
        ctx->pc = 0x287334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287330u;
        // 0x287334: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287338u;
        goto label_287338;
    }
    ctx->pc = 0x287330u;
    {
        const bool branch_taken_0x287330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287330u;
        // 0x287334: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287330) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x287338u;
label_287338:
    // 0x287338: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x287338u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_28733c:
    // 0x28733c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287340:
    // 0x287340: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x287340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_287344:
    // 0x287344: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x287344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_287348:
    // 0x287348: 0xc0a1870  jal         func_2861C0
label_28734c:
    if (ctx->pc == 0x28734Cu) {
        ctx->pc = 0x28734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287348u;
        // 0x28734c: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287350u;
        goto label_287350;
    }
    ctx->pc = 0x287348u;
    SET_GPR_U32(ctx, 31, 0x287350u);
    ctx->pc = 0x28734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287348u;
    // 0x28734c: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2861C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2861C0u, 0x287348u, 0x287350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287350u;
label_287350:
    // 0x287350: 0x10000092  b           . + 4 + (0x92 << 2)
label_287354:
    if (ctx->pc == 0x287354u) {
        ctx->pc = 0x287354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287350u;
        // 0x287354: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287358u;
        goto label_287358;
    }
    ctx->pc = 0x287350u;
    {
        const bool branch_taken_0x287350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287350u;
        // 0x287354: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287350) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x287358u;
label_287358:
    // 0x287358: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x287358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28735c:
    // 0x28735c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28735cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287360:
    // 0x287360: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x287360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_287364:
    // 0x287364: 0xc0a18ae  jal         func_2862B8
label_287368:
    if (ctx->pc == 0x287368u) {
        ctx->pc = 0x287368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287364u;
        // 0x287368: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28736Cu;
        goto label_28736c;
    }
    ctx->pc = 0x287364u;
    SET_GPR_U32(ctx, 31, 0x28736Cu);
    ctx->pc = 0x287368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287364u;
    // 0x287368: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2862B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2862B8u, 0x287364u, 0x28736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28736Cu;
label_28736c:
    // 0x28736c: 0x1000008b  b           . + 4 + (0x8B << 2)
label_287370:
    if (ctx->pc == 0x287370u) {
        ctx->pc = 0x287370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28736Cu;
        // 0x287370: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287374u;
        goto label_287374;
    }
    ctx->pc = 0x28736Cu;
    {
        const bool branch_taken_0x28736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28736Cu;
        // 0x287370: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28736c) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x287374u;
label_287374:
    // 0x287374: 0x0  nop
    ctx->pc = 0x287374u;
    // NOP
label_287378:
    // 0x287378: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x287378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28737c:
    // 0x28737c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287380:
    // 0x287380: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x287380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_287384:
    // 0x287384: 0xc0a18f2  jal         func_2863C8
label_287388:
    if (ctx->pc == 0x287388u) {
        ctx->pc = 0x287388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287384u;
        // 0x287388: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28738Cu;
        goto label_28738c;
    }
    ctx->pc = 0x287384u;
    SET_GPR_U32(ctx, 31, 0x28738Cu);
    ctx->pc = 0x287388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287384u;
    // 0x287388: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2863C8u, 0x287384u, 0x28738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28738Cu;
label_28738c:
    // 0x28738c: 0x10000083  b           . + 4 + (0x83 << 2)
label_287390:
    if (ctx->pc == 0x287390u) {
        ctx->pc = 0x287390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28738Cu;
        // 0x287390: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287394u;
        goto label_287394;
    }
    ctx->pc = 0x28738Cu;
    {
        const bool branch_taken_0x28738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28738Cu;
        // 0x287390: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28738c) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x287394u;
label_287394:
    // 0x287394: 0x0  nop
    ctx->pc = 0x287394u;
    // NOP
label_287398:
    // 0x287398: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x287398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28739c:
    // 0x28739c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2873a0:
    // 0x2873a0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2873a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2873a4:
    // 0x2873a4: 0xc0a192e  jal         func_2864B8
label_2873a8:
    if (ctx->pc == 0x2873A8u) {
        ctx->pc = 0x2873A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873A4u;
        // 0x2873a8: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2873ACu;
        goto label_2873ac;
    }
    ctx->pc = 0x2873A4u;
    SET_GPR_U32(ctx, 31, 0x2873ACu);
    ctx->pc = 0x2873A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2873A4u;
    // 0x2873a8: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2864B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2864B8u, 0x2873A4u, 0x2873ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873ACu;
label_2873ac:
    // 0x2873ac: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2873b0:
    if (ctx->pc == 0x2873B0u) {
        ctx->pc = 0x2873B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873ACu;
        // 0x2873b0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2873B4u;
        goto label_2873b4;
    }
    ctx->pc = 0x2873ACu;
    {
        const bool branch_taken_0x2873ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873ACu;
        // 0x2873b0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873ac) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x2873B4u;
label_2873b4:
    // 0x2873b4: 0x0  nop
    ctx->pc = 0x2873b4u;
    // NOP
label_2873b8:
    // 0x2873b8: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x2873b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2873bc:
    // 0x2873bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2873bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2873c0:
    // 0x2873c0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2873c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2873c4:
    // 0x2873c4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2873c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2873c8:
    // 0x2873c8: 0xc0a1962  jal         func_286588
label_2873cc:
    if (ctx->pc == 0x2873CCu) {
        ctx->pc = 0x2873CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873C8u;
        // 0x2873cc: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2873D0u;
        goto label_2873d0;
    }
    ctx->pc = 0x2873C8u;
    SET_GPR_U32(ctx, 31, 0x2873D0u);
    ctx->pc = 0x2873CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2873C8u;
    // 0x2873cc: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286588u, 0x2873C8u, 0x2873D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873D0u;
label_2873d0:
    // 0x2873d0: 0x10000072  b           . + 4 + (0x72 << 2)
label_2873d4:
    if (ctx->pc == 0x2873D4u) {
        ctx->pc = 0x2873D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873D0u;
        // 0x2873d4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2873D8u;
        goto label_2873d8;
    }
    ctx->pc = 0x2873D0u;
    {
        const bool branch_taken_0x2873d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873D0u;
        // 0x2873d4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873d0) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x2873D8u;
label_2873d8:
    // 0x2873d8: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x2873d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2873dc:
    // 0x2873dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2873dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2873e0:
    // 0x2873e0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2873e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2873e4:
    // 0x2873e4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2873e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2873e8:
    // 0x2873e8: 0xc0a19ca  jal         func_286728
label_2873ec:
    if (ctx->pc == 0x2873ECu) {
        ctx->pc = 0x2873ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873E8u;
        // 0x2873ec: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2873F0u;
        goto label_2873f0;
    }
    ctx->pc = 0x2873E8u;
    SET_GPR_U32(ctx, 31, 0x2873F0u);
    ctx->pc = 0x2873ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2873E8u;
    // 0x2873ec: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286728u, 0x2873E8u, 0x2873F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873F0u;
label_2873f0:
    // 0x2873f0: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2873f4:
    if (ctx->pc == 0x2873F4u) {
        ctx->pc = 0x2873F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873F0u;
        // 0x2873f4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2873F8u;
        goto label_2873f8;
    }
    ctx->pc = 0x2873F0u;
    {
        const bool branch_taken_0x2873f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873F0u;
        // 0x2873f4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873f0) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x2873F8u;
label_2873f8:
    // 0x2873f8: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x2873f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2873fc:
    // 0x2873fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2873fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287400:
    // 0x287400: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x287400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_287404:
    // 0x287404: 0xc0a1a0e  jal         func_286838
label_287408:
    if (ctx->pc == 0x287408u) {
        ctx->pc = 0x287408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287404u;
        // 0x287408: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28740Cu;
        goto label_28740c;
    }
    ctx->pc = 0x287404u;
    SET_GPR_U32(ctx, 31, 0x28740Cu);
    ctx->pc = 0x287408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287404u;
    // 0x287408: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286838u, 0x287404u, 0x28740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28740Cu;
label_28740c:
    // 0x28740c: 0x10000063  b           . + 4 + (0x63 << 2)
label_287410:
    if (ctx->pc == 0x287410u) {
        ctx->pc = 0x287410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28740Cu;
        // 0x287410: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287414u;
        goto label_287414;
    }
    ctx->pc = 0x28740Cu;
    {
        const bool branch_taken_0x28740c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28740Cu;
        // 0x287410: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28740c) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x287414u;
label_287414:
    // 0x287414: 0x0  nop
    ctx->pc = 0x287414u;
    // NOP
label_287418:
    // 0x287418: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x287418u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28741c:
    // 0x28741c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28741cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287420:
    // 0x287420: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x287420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_287424:
    // 0x287424: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x287424u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287428:
    // 0x287428: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x287428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28742c:
    // 0x28742c: 0x10000016  b           . + 4 + (0x16 << 2)
label_287430:
    if (ctx->pc == 0x287430u) {
        ctx->pc = 0x287430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28742Cu;
        // 0x287430: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287434u;
        goto label_287434;
    }
    ctx->pc = 0x28742Cu;
    {
        const bool branch_taken_0x28742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28742Cu;
        // 0x287430: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28742c) {
            ctx->pc = 0x287488u;
            goto label_287488;
        }
    }
    ctx->pc = 0x287434u;
label_287434:
    // 0x287434: 0x0  nop
    ctx->pc = 0x287434u;
    // NOP
label_287438:
    // 0x287438: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x287438u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28743c:
    // 0x28743c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287440:
    // 0x287440: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x287440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_287444:
    // 0x287444: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x287444u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287448:
    // 0x287448: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x287448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28744c:
    // 0x28744c: 0x1000000e  b           . + 4 + (0xE << 2)
label_287450:
    if (ctx->pc == 0x287450u) {
        ctx->pc = 0x287450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28744Cu;
        // 0x287450: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287454u;
        goto label_287454;
    }
    ctx->pc = 0x28744Cu;
    {
        const bool branch_taken_0x28744c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28744Cu;
        // 0x287450: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28744c) {
            ctx->pc = 0x287488u;
            goto label_287488;
        }
    }
    ctx->pc = 0x287454u;
label_287454:
    // 0x287454: 0x0  nop
    ctx->pc = 0x287454u;
    // NOP
label_287458:
    // 0x287458: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x287458u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28745c:
    // 0x28745c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28745cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287460:
    // 0x287460: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x287460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_287464:
    // 0x287464: 0x10000006  b           . + 4 + (0x6 << 2)
label_287468:
    if (ctx->pc == 0x287468u) {
        ctx->pc = 0x287468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287464u;
        // 0x287468: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28746Cu;
        goto label_28746c;
    }
    ctx->pc = 0x287464u;
    {
        const bool branch_taken_0x287464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287464u;
        // 0x287468: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287464) {
            ctx->pc = 0x287480u;
            goto label_287480;
        }
    }
    ctx->pc = 0x28746Cu;
label_28746c:
    // 0x28746c: 0x0  nop
    ctx->pc = 0x28746cu;
    // NOP
label_287470:
    // 0x287470: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x287470u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_287474:
    // 0x287474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287478:
    // 0x287478: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x287478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_28747c:
    // 0x28747c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x28747cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287480:
    // 0x287480: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x287480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_287484:
    // 0x287484: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x287484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_287488:
    // 0x287488: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x287488u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28748c:
    // 0x28748c: 0xc0a1a48  jal         func_286920
label_287490:
    if (ctx->pc == 0x287490u) {
        ctx->pc = 0x287490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28748Cu;
        // 0x287490: 0x8e09000c  lw          $t1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287494u;
        goto label_287494;
    }
    ctx->pc = 0x28748Cu;
    SET_GPR_U32(ctx, 31, 0x287494u);
    ctx->pc = 0x287490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28748Cu;
    // 0x287490: 0x8e09000c  lw          $t1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286920u, 0x28748Cu, 0x287494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287494u;
label_287494:
    // 0x287494: 0x10000041  b           . + 4 + (0x41 << 2)
label_287498:
    if (ctx->pc == 0x287498u) {
        ctx->pc = 0x287498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287494u;
        // 0x287498: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28749Cu;
        goto label_28749c;
    }
    ctx->pc = 0x287494u;
    {
        const bool branch_taken_0x287494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287494u;
        // 0x287498: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287494) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x28749Cu;
label_28749c:
    // 0x28749c: 0x0  nop
    ctx->pc = 0x28749cu;
    // NOP
label_2874a0:
    // 0x2874a0: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x2874a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2874a4:
    // 0x2874a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2874a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2874a8:
    // 0x2874a8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2874a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2874ac:
    // 0x2874ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2874acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2874b0:
    // 0x2874b0: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x2874b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2874b4:
    // 0x2874b4: 0x10000016  b           . + 4 + (0x16 << 2)
label_2874b8:
    if (ctx->pc == 0x2874B8u) {
        ctx->pc = 0x2874B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874B4u;
        // 0x2874b8: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2874BCu;
        goto label_2874bc;
    }
    ctx->pc = 0x2874B4u;
    {
        const bool branch_taken_0x2874b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874B4u;
        // 0x2874b8: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874b4) {
            ctx->pc = 0x287510u;
            goto label_287510;
        }
    }
    ctx->pc = 0x2874BCu;
label_2874bc:
    // 0x2874bc: 0x0  nop
    ctx->pc = 0x2874bcu;
    // NOP
label_2874c0:
    // 0x2874c0: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x2874c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2874c4:
    // 0x2874c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2874c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2874c8:
    // 0x2874c8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2874c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2874cc:
    // 0x2874cc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2874ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2874d0:
    // 0x2874d0: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x2874d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2874d4:
    // 0x2874d4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2874d8:
    if (ctx->pc == 0x2874D8u) {
        ctx->pc = 0x2874D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874D4u;
        // 0x2874d8: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2874DCu;
        goto label_2874dc;
    }
    ctx->pc = 0x2874D4u;
    {
        const bool branch_taken_0x2874d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874D4u;
        // 0x2874d8: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874d4) {
            ctx->pc = 0x287510u;
            goto label_287510;
        }
    }
    ctx->pc = 0x2874DCu;
label_2874dc:
    // 0x2874dc: 0x0  nop
    ctx->pc = 0x2874dcu;
    // NOP
label_2874e0:
    // 0x2874e0: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x2874e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2874e4:
    // 0x2874e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2874e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2874e8:
    // 0x2874e8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2874e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2874ec:
    // 0x2874ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_2874f0:
    if (ctx->pc == 0x2874F0u) {
        ctx->pc = 0x2874F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874ECu;
        // 0x2874f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2874F4u;
        goto label_2874f4;
    }
    ctx->pc = 0x2874ECu;
    {
        const bool branch_taken_0x2874ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874ECu;
        // 0x2874f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874ec) {
            ctx->pc = 0x287508u;
            goto label_287508;
        }
    }
    ctx->pc = 0x2874F4u;
label_2874f4:
    // 0x2874f4: 0x0  nop
    ctx->pc = 0x2874f4u;
    // NOP
label_2874f8:
    // 0x2874f8: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x2874f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2874fc:
    // 0x2874fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2874fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287500:
    // 0x287500: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x287500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_287504:
    // 0x287504: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x287504u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287508:
    // 0x287508: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x287508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_28750c:
    // 0x28750c: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x28750cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_287510:
    // 0x287510: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x287510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_287514:
    // 0x287514: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x287514u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_287518:
    // 0x287518: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x287518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_28751c:
    // 0x28751c: 0xc0a1aee  jal         func_286BB8
label_287520:
    if (ctx->pc == 0x287520u) {
        ctx->pc = 0x287520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28751Cu;
        // 0x287520: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287524u;
        goto label_287524;
    }
    ctx->pc = 0x28751Cu;
    SET_GPR_U32(ctx, 31, 0x287524u);
    ctx->pc = 0x287520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28751Cu;
    // 0x287520: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286BB8u, 0x28751Cu, 0x287524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287524u;
label_287524:
    // 0x287524: 0x1000001d  b           . + 4 + (0x1D << 2)
label_287528:
    if (ctx->pc == 0x287528u) {
        ctx->pc = 0x287528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287524u;
        // 0x287528: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28752Cu;
        goto label_28752c;
    }
    ctx->pc = 0x287524u;
    {
        const bool branch_taken_0x287524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287524u;
        // 0x287528: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287524) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x28752Cu;
label_28752c:
    // 0x28752c: 0x0  nop
    ctx->pc = 0x28752cu;
    // NOP
label_287530:
    // 0x287530: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x287530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_287534:
    // 0x287534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287538:
    // 0x287538: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x287538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_28753c:
    // 0x28753c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x28753cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_287540:
    // 0x287540: 0xc0a1bd2  jal         func_286F48
label_287544:
    if (ctx->pc == 0x287544u) {
        ctx->pc = 0x287544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287540u;
        // 0x287544: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287548u;
        goto label_287548;
    }
    ctx->pc = 0x287540u;
    SET_GPR_U32(ctx, 31, 0x287548u);
    ctx->pc = 0x287544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287540u;
    // 0x287544: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286F48u, 0x287540u, 0x287548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287548u;
label_287548:
    // 0x287548: 0x10000014  b           . + 4 + (0x14 << 2)
label_28754c:
    if (ctx->pc == 0x28754Cu) {
        ctx->pc = 0x28754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287548u;
        // 0x28754c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287550u;
        goto label_287550;
    }
    ctx->pc = 0x287548u;
    {
        const bool branch_taken_0x287548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287548u;
        // 0x28754c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287548) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x287550u;
label_287550:
    // 0x287550: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x287550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_287554:
    // 0x287554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287558:
    // 0x287558: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x287558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28755c:
    // 0x28755c: 0xc0a1c0c  jal         func_287030
label_287560:
    if (ctx->pc == 0x287560u) {
        ctx->pc = 0x287560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28755Cu;
        // 0x287560: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287564u;
        goto label_287564;
    }
    ctx->pc = 0x28755Cu;
    SET_GPR_U32(ctx, 31, 0x287564u);
    ctx->pc = 0x287560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28755Cu;
    // 0x287560: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287030u, 0x28755Cu, 0x287564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287564u;
label_287564:
    // 0x287564: 0x1000000d  b           . + 4 + (0xD << 2)
label_287568:
    if (ctx->pc == 0x287568u) {
        ctx->pc = 0x287568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287564u;
        // 0x287568: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28756Cu;
        goto label_28756c;
    }
    ctx->pc = 0x287564u;
    {
        const bool branch_taken_0x287564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287564u;
        // 0x287568: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287564) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x28756Cu;
label_28756c:
    // 0x28756c: 0x0  nop
    ctx->pc = 0x28756cu;
    // NOP
label_287570:
    // 0x287570: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x287570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_287574:
    // 0x287574: 0xc0a1c3e  jal         func_2870F8
label_287578:
    if (ctx->pc == 0x287578u) {
        ctx->pc = 0x287578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287574u;
        // 0x287578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28757Cu;
        goto label_28757c;
    }
    ctx->pc = 0x287574u;
    SET_GPR_U32(ctx, 31, 0x28757Cu);
    ctx->pc = 0x287578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287574u;
    // 0x287578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2870F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2870F8u, 0x287574u, 0x28757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28757Cu;
label_28757c:
    // 0x28757c: 0x10000007  b           . + 4 + (0x7 << 2)
label_287580:
    if (ctx->pc == 0x287580u) {
        ctx->pc = 0x287580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28757Cu;
        // 0x287580: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287584u;
        goto label_287584;
    }
    ctx->pc = 0x28757Cu;
    {
        const bool branch_taken_0x28757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28757Cu;
        // 0x287580: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28757c) {
            ctx->pc = 0x28759Cu;
            goto label_28759c;
        }
    }
    ctx->pc = 0x287584u;
label_287584:
    // 0x287584: 0x0  nop
    ctx->pc = 0x287584u;
    // NOP
label_287588:
    // 0x287588: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x287588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_28758c:
    // 0x28758c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28758cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287590:
    // 0x287590: 0xc0a1c56  jal         func_287158
label_287594:
    if (ctx->pc == 0x287594u) {
        ctx->pc = 0x287594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287590u;
        // 0x287594: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287598u;
        goto label_287598;
    }
    ctx->pc = 0x287590u;
    SET_GPR_U32(ctx, 31, 0x287598u);
    ctx->pc = 0x287594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287590u;
    // 0x287594: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287158u, 0x287590u, 0x287598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287598u;
label_287598:
    // 0x287598: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x287598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28759c:
    // 0x28759c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2875a0:
    // 0x2875a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2875a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2875a4:
    // 0x2875a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2875a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2875a8:
    // 0x2875a8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_2875ac:
    if (ctx->pc == 0x2875ACu) {
        ctx->pc = 0x2875ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875A8u;
        // 0x2875ac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2875B0u;
        goto label_2875b0;
    }
    ctx->pc = 0x2875A8u;
    {
        const bool branch_taken_0x2875a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2875ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875A8u;
        // 0x2875ac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875a8) {
            ctx->pc = 0x2875C0u;
            goto label_2875c0;
        }
    }
    ctx->pc = 0x2875B0u;
label_2875b0:
    // 0x2875b0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2875b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2875b4:
    // 0x2875b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2875b8:
    if (ctx->pc == 0x2875B8u) {
        ctx->pc = 0x2875B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875B4u;
        // 0x2875b8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2875BCu;
        goto label_2875bc;
    }
    ctx->pc = 0x2875B4u;
    {
        const bool branch_taken_0x2875b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875B4u;
        // 0x2875b8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875b4) {
            ctx->pc = 0x2875D4u;
            goto label_2875d4;
        }
    }
    ctx->pc = 0x2875BCu;
label_2875bc:
    // 0x2875bc: 0x0  nop
    ctx->pc = 0x2875bcu;
    // NOP
label_2875c0:
    // 0x2875c0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2875c4:
    if (ctx->pc == 0x2875C4u) {
        ctx->pc = 0x2875C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875C0u;
        // 0x2875c4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2875C8u;
        goto label_2875c8;
    }
    ctx->pc = 0x2875C0u;
    {
        const bool branch_taken_0x2875c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2875C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875C0u;
        // 0x2875c4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875c0) {
            ctx->pc = 0x2875D8u;
            goto label_2875d8;
        }
    }
    ctx->pc = 0x2875C8u;
label_2875c8:
    // 0x2875c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2875c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2875cc:
    // 0x2875cc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2875ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2875d0:
    // 0x2875d0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2875d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2875d4:
    // 0x2875d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2875d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2875d8:
    // 0x2875d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2875d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2875dc:
    // 0x2875dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2875dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2875e0:
    // 0x2875e0: 0x3e00008  jr          $ra
label_2875e4:
    if (ctx->pc == 0x2875E4u) {
        ctx->pc = 0x2875E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875E0u;
        // 0x2875e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2875E8u;
        goto label_fallthrough_0x2875e0;
    }
    ctx->pc = 0x2875E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2875E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875E0u;
        // 0x2875e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2875E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2875e0:
    ctx->pc = 0x2875E8u;
}
