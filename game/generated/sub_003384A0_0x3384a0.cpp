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

// Function: sub_003384A0
// Address: 0x3384a0 - 0x338820
void sub_003384A0_0x3384a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003384A0_0x3384a0");
#endif

    switch (ctx->pc) {
        case 0x3384a0u: goto label_3384a0;
        case 0x3384a4u: goto label_3384a4;
        case 0x3384a8u: goto label_3384a8;
        case 0x3384acu: goto label_3384ac;
        case 0x3384b0u: goto label_3384b0;
        case 0x3384b4u: goto label_3384b4;
        case 0x3384b8u: goto label_3384b8;
        case 0x3384bcu: goto label_3384bc;
        case 0x3384c0u: goto label_3384c0;
        case 0x3384c4u: goto label_3384c4;
        case 0x3384c8u: goto label_3384c8;
        case 0x3384ccu: goto label_3384cc;
        case 0x3384d0u: goto label_3384d0;
        case 0x3384d4u: goto label_3384d4;
        case 0x3384d8u: goto label_3384d8;
        case 0x3384dcu: goto label_3384dc;
        case 0x3384e0u: goto label_3384e0;
        case 0x3384e4u: goto label_3384e4;
        case 0x3384e8u: goto label_3384e8;
        case 0x3384ecu: goto label_3384ec;
        case 0x3384f0u: goto label_3384f0;
        case 0x3384f4u: goto label_3384f4;
        case 0x3384f8u: goto label_3384f8;
        case 0x3384fcu: goto label_3384fc;
        case 0x338500u: goto label_338500;
        case 0x338504u: goto label_338504;
        case 0x338508u: goto label_338508;
        case 0x33850cu: goto label_33850c;
        case 0x338510u: goto label_338510;
        case 0x338514u: goto label_338514;
        case 0x338518u: goto label_338518;
        case 0x33851cu: goto label_33851c;
        case 0x338520u: goto label_338520;
        case 0x338524u: goto label_338524;
        case 0x338528u: goto label_338528;
        case 0x33852cu: goto label_33852c;
        case 0x338530u: goto label_338530;
        case 0x338534u: goto label_338534;
        case 0x338538u: goto label_338538;
        case 0x33853cu: goto label_33853c;
        case 0x338540u: goto label_338540;
        case 0x338544u: goto label_338544;
        case 0x338548u: goto label_338548;
        case 0x33854cu: goto label_33854c;
        case 0x338550u: goto label_338550;
        case 0x338554u: goto label_338554;
        case 0x338558u: goto label_338558;
        case 0x33855cu: goto label_33855c;
        case 0x338560u: goto label_338560;
        case 0x338564u: goto label_338564;
        case 0x338568u: goto label_338568;
        case 0x33856cu: goto label_33856c;
        case 0x338570u: goto label_338570;
        case 0x338574u: goto label_338574;
        case 0x338578u: goto label_338578;
        case 0x33857cu: goto label_33857c;
        case 0x338580u: goto label_338580;
        case 0x338584u: goto label_338584;
        case 0x338588u: goto label_338588;
        case 0x33858cu: goto label_33858c;
        case 0x338590u: goto label_338590;
        case 0x338594u: goto label_338594;
        case 0x338598u: goto label_338598;
        case 0x33859cu: goto label_33859c;
        case 0x3385a0u: goto label_3385a0;
        case 0x3385a4u: goto label_3385a4;
        case 0x3385a8u: goto label_3385a8;
        case 0x3385acu: goto label_3385ac;
        case 0x3385b0u: goto label_3385b0;
        case 0x3385b4u: goto label_3385b4;
        case 0x3385b8u: goto label_3385b8;
        case 0x3385bcu: goto label_3385bc;
        case 0x3385c0u: goto label_3385c0;
        case 0x3385c4u: goto label_3385c4;
        case 0x3385c8u: goto label_3385c8;
        case 0x3385ccu: goto label_3385cc;
        case 0x3385d0u: goto label_3385d0;
        case 0x3385d4u: goto label_3385d4;
        case 0x3385d8u: goto label_3385d8;
        case 0x3385dcu: goto label_3385dc;
        case 0x3385e0u: goto label_3385e0;
        case 0x3385e4u: goto label_3385e4;
        case 0x3385e8u: goto label_3385e8;
        case 0x3385ecu: goto label_3385ec;
        case 0x3385f0u: goto label_3385f0;
        case 0x3385f4u: goto label_3385f4;
        case 0x3385f8u: goto label_3385f8;
        case 0x3385fcu: goto label_3385fc;
        case 0x338600u: goto label_338600;
        case 0x338604u: goto label_338604;
        case 0x338608u: goto label_338608;
        case 0x33860cu: goto label_33860c;
        case 0x338610u: goto label_338610;
        case 0x338614u: goto label_338614;
        case 0x338618u: goto label_338618;
        case 0x33861cu: goto label_33861c;
        case 0x338620u: goto label_338620;
        case 0x338624u: goto label_338624;
        case 0x338628u: goto label_338628;
        case 0x33862cu: goto label_33862c;
        case 0x338630u: goto label_338630;
        case 0x338634u: goto label_338634;
        case 0x338638u: goto label_338638;
        case 0x33863cu: goto label_33863c;
        case 0x338640u: goto label_338640;
        case 0x338644u: goto label_338644;
        case 0x338648u: goto label_338648;
        case 0x33864cu: goto label_33864c;
        case 0x338650u: goto label_338650;
        case 0x338654u: goto label_338654;
        case 0x338658u: goto label_338658;
        case 0x33865cu: goto label_33865c;
        case 0x338660u: goto label_338660;
        case 0x338664u: goto label_338664;
        case 0x338668u: goto label_338668;
        case 0x33866cu: goto label_33866c;
        case 0x338670u: goto label_338670;
        case 0x338674u: goto label_338674;
        case 0x338678u: goto label_338678;
        case 0x33867cu: goto label_33867c;
        case 0x338680u: goto label_338680;
        case 0x338684u: goto label_338684;
        case 0x338688u: goto label_338688;
        case 0x33868cu: goto label_33868c;
        case 0x338690u: goto label_338690;
        case 0x338694u: goto label_338694;
        case 0x338698u: goto label_338698;
        case 0x33869cu: goto label_33869c;
        case 0x3386a0u: goto label_3386a0;
        case 0x3386a4u: goto label_3386a4;
        case 0x3386a8u: goto label_3386a8;
        case 0x3386acu: goto label_3386ac;
        case 0x3386b0u: goto label_3386b0;
        case 0x3386b4u: goto label_3386b4;
        case 0x3386b8u: goto label_3386b8;
        case 0x3386bcu: goto label_3386bc;
        case 0x3386c0u: goto label_3386c0;
        case 0x3386c4u: goto label_3386c4;
        case 0x3386c8u: goto label_3386c8;
        case 0x3386ccu: goto label_3386cc;
        case 0x3386d0u: goto label_3386d0;
        case 0x3386d4u: goto label_3386d4;
        case 0x3386d8u: goto label_3386d8;
        case 0x3386dcu: goto label_3386dc;
        case 0x3386e0u: goto label_3386e0;
        case 0x3386e4u: goto label_3386e4;
        case 0x3386e8u: goto label_3386e8;
        case 0x3386ecu: goto label_3386ec;
        case 0x3386f0u: goto label_3386f0;
        case 0x3386f4u: goto label_3386f4;
        case 0x3386f8u: goto label_3386f8;
        case 0x3386fcu: goto label_3386fc;
        case 0x338700u: goto label_338700;
        case 0x338704u: goto label_338704;
        case 0x338708u: goto label_338708;
        case 0x33870cu: goto label_33870c;
        case 0x338710u: goto label_338710;
        case 0x338714u: goto label_338714;
        case 0x338718u: goto label_338718;
        case 0x33871cu: goto label_33871c;
        case 0x338720u: goto label_338720;
        case 0x338724u: goto label_338724;
        case 0x338728u: goto label_338728;
        case 0x33872cu: goto label_33872c;
        case 0x338730u: goto label_338730;
        case 0x338734u: goto label_338734;
        case 0x338738u: goto label_338738;
        case 0x33873cu: goto label_33873c;
        case 0x338740u: goto label_338740;
        case 0x338744u: goto label_338744;
        case 0x338748u: goto label_338748;
        case 0x33874cu: goto label_33874c;
        case 0x338750u: goto label_338750;
        case 0x338754u: goto label_338754;
        case 0x338758u: goto label_338758;
        case 0x33875cu: goto label_33875c;
        case 0x338760u: goto label_338760;
        case 0x338764u: goto label_338764;
        case 0x338768u: goto label_338768;
        case 0x33876cu: goto label_33876c;
        case 0x338770u: goto label_338770;
        case 0x338774u: goto label_338774;
        case 0x338778u: goto label_338778;
        case 0x33877cu: goto label_33877c;
        case 0x338780u: goto label_338780;
        case 0x338784u: goto label_338784;
        case 0x338788u: goto label_338788;
        case 0x33878cu: goto label_33878c;
        case 0x338790u: goto label_338790;
        case 0x338794u: goto label_338794;
        case 0x338798u: goto label_338798;
        case 0x33879cu: goto label_33879c;
        case 0x3387a0u: goto label_3387a0;
        case 0x3387a4u: goto label_3387a4;
        case 0x3387a8u: goto label_3387a8;
        case 0x3387acu: goto label_3387ac;
        case 0x3387b0u: goto label_3387b0;
        case 0x3387b4u: goto label_3387b4;
        case 0x3387b8u: goto label_3387b8;
        case 0x3387bcu: goto label_3387bc;
        case 0x3387c0u: goto label_3387c0;
        case 0x3387c4u: goto label_3387c4;
        case 0x3387c8u: goto label_3387c8;
        case 0x3387ccu: goto label_3387cc;
        case 0x3387d0u: goto label_3387d0;
        case 0x3387d4u: goto label_3387d4;
        case 0x3387d8u: goto label_3387d8;
        case 0x3387dcu: goto label_3387dc;
        case 0x3387e0u: goto label_3387e0;
        case 0x3387e4u: goto label_3387e4;
        case 0x3387e8u: goto label_3387e8;
        case 0x3387ecu: goto label_3387ec;
        case 0x3387f0u: goto label_3387f0;
        case 0x3387f4u: goto label_3387f4;
        case 0x3387f8u: goto label_3387f8;
        case 0x3387fcu: goto label_3387fc;
        case 0x338800u: goto label_338800;
        case 0x338804u: goto label_338804;
        case 0x338808u: goto label_338808;
        case 0x33880cu: goto label_33880c;
        case 0x338810u: goto label_338810;
        case 0x338814u: goto label_338814;
        case 0x338818u: goto label_338818;
        case 0x33881cu: goto label_33881c;
        default: break;
    }

    ctx->pc = 0x3384a0u;

label_3384a0:
    // 0x3384a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3384a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3384a4:
    // 0x3384a4: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x3384a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_3384a8:
    // 0x3384a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3384a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3384ac:
    // 0x3384ac: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3384acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3384b0:
    // 0x3384b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3384b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3384b4:
    // 0x3384b4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3384b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3384b8:
    // 0x3384b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3384b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3384bc:
    // 0x3384bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3384bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3384c0:
    // 0x3384c0: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x3384c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3384c4:
    // 0x3384c4: 0x40f809  jalr        $v0
label_3384c8:
    if (ctx->pc == 0x3384C8u) {
        ctx->pc = 0x3384C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384C4u;
        // 0x3384c8: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3384CCu;
        goto label_3384cc;
    }
    ctx->pc = 0x3384C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3384CCu);
        ctx->pc = 0x3384C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384C4u;
        // 0x3384c8: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3384C4u, 0x3384CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3384CCu;
label_3384cc:
    // 0x3384cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3384d0:
    if (ctx->pc == 0x3384D0u) {
        ctx->pc = 0x3384D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384CCu;
        // 0x3384d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3384D4u;
        goto label_3384d4;
    }
    ctx->pc = 0x3384CCu;
    {
        const bool branch_taken_0x3384cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3384cc) {
            ctx->pc = 0x3384D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3384CCu;
            // 0x3384d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3384F0u;
            goto label_3384f0;
        }
    }
    ctx->pc = 0x3384D4u;
label_3384d4:
    // 0x3384d4: 0x8f83cbc0  lw          $v1, -0x3440($gp)
    ctx->pc = 0x3384d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953920)));
label_3384d8:
    // 0x3384d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3384d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3384dc:
    // 0x3384dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3384dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3384e0:
    // 0x3384e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3384e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3384e4:
    // 0x3384e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3384e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3384e8:
    // 0x3384e8: 0xaf90cbc0  sw          $s0, -0x3440($gp)
    ctx->pc = 0x3384e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 16));
label_3384ec:
    // 0x3384ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3384ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3384f0:
    // 0x3384f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3384f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3384f4:
    // 0x3384f4: 0x3e00008  jr          $ra
label_3384f8:
    if (ctx->pc == 0x3384F8u) {
        ctx->pc = 0x3384F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384F4u;
        // 0x3384f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3384FCu;
        goto label_3384fc;
    }
    ctx->pc = 0x3384F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3384F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384F4u;
        // 0x3384f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3384F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3384FCu;
label_3384fc:
    // 0x3384fc: 0x0  nop
    ctx->pc = 0x3384fcu;
    // NOP
label_338500:
    // 0x338500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x338500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_338504:
    // 0x338504: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x338504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
label_338508:
    // 0x338508: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x338508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33850c:
    // 0x33850c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33850cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_338510:
    // 0x338510: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x338510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_338514:
    // 0x338514: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x338514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_338518:
    // 0x338518: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x338518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_33851c:
    // 0x33851c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x33851cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338520:
    // 0x338520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_338524:
    // 0x338524: 0x34420016  ori         $v0, $v0, 0x16
    ctx->pc = 0x338524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
label_338528:
    // 0x338528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33852c:
    // 0x33852c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_338530:
    // 0x338530: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
label_338534:
    if (ctx->pc == 0x338534u) {
        ctx->pc = 0x338534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338530u;
        // 0x338534: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338538u;
        goto label_338538;
    }
    ctx->pc = 0x338530u;
    {
        const bool branch_taken_0x338530 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x338534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338530u;
        // 0x338534: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338530) {
            ctx->pc = 0x338600u;
            goto label_338600;
        }
    }
    ctx->pc = 0x338538u;
label_338538:
    // 0x338538: 0xc04626a  jal         func_1189A8
label_33853c:
    if (ctx->pc == 0x33853Cu) {
        ctx->pc = 0x338540u;
        goto label_338540;
    }
    ctx->pc = 0x338538u;
    SET_GPR_U32(ctx, 31, 0x338540u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x338538u, 0x338540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338540u;
label_338540:
    // 0x338540: 0x8f90cbc0  lw          $s0, -0x3440($gp)
    ctx->pc = 0x338540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953920)));
label_338544:
    // 0x338544: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_338548:
    if (ctx->pc == 0x338548u) {
        ctx->pc = 0x338548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338544u;
        // 0x338548: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33854Cu;
        goto label_33854c;
    }
    ctx->pc = 0x338544u;
    {
        const bool branch_taken_0x338544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x338548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338544u;
        // 0x338548: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338544) {
            ctx->pc = 0x338554u;
            goto label_338554;
        }
    }
    ctx->pc = 0x33854Cu;
label_33854c:
    // 0x33854c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_338550:
    // 0x338550: 0xaf82cbc0  sw          $v0, -0x3440($gp)
    ctx->pc = 0x338550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 2));
label_338554:
    // 0x338554: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_338558:
    if (ctx->pc == 0x338558u) {
        ctx->pc = 0x33855Cu;
        goto label_33855c;
    }
    ctx->pc = 0x338554u;
    {
        const bool branch_taken_0x338554 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x338554) {
            ctx->pc = 0x338578u;
            goto label_338578;
        }
    }
    ctx->pc = 0x33855Cu;
label_33855c:
    // 0x33855c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_338560:
    if (ctx->pc == 0x338560u) {
        ctx->pc = 0x338564u;
        goto label_338564;
    }
    ctx->pc = 0x33855Cu;
    {
        const bool branch_taken_0x33855c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33855c) {
            ctx->pc = 0x33856Cu;
            goto label_33856c;
        }
    }
    ctx->pc = 0x338564u;
label_338564:
    // 0x338564: 0xc04627e  jal         func_1189F8
label_338568:
    if (ctx->pc == 0x338568u) {
        ctx->pc = 0x33856Cu;
        goto label_33856c;
    }
    ctx->pc = 0x338564u;
    SET_GPR_U32(ctx, 31, 0x33856Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x338564u, 0x33856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33856Cu;
label_33856c:
    // 0x33856c: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x33856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
label_338570:
    // 0x338570: 0x10000023  b           . + 4 + (0x23 << 2)
label_338574:
    if (ctx->pc == 0x338574u) {
        ctx->pc = 0x338574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338570u;
        // 0x338574: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = 0x338578u;
        goto label_338578;
    }
    ctx->pc = 0x338570u;
    {
        const bool branch_taken_0x338570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338570u;
        // 0x338574: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x338570) {
            ctx->pc = 0x338600u;
            goto label_338600;
        }
    }
    ctx->pc = 0x338578u;
label_338578:
    // 0x338578: 0xc0cded0  jal         func_337B40
label_33857c:
    if (ctx->pc == 0x33857Cu) {
        ctx->pc = 0x338580u;
        goto label_338580;
    }
    ctx->pc = 0x338578u;
    SET_GPR_U32(ctx, 31, 0x338580u);
    ctx->pc = 0x337B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B40u, 0x338578u, 0x338580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338580u;
label_338580:
    // 0x338580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x338580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338584:
    // 0x338584: 0x623000c  bgezl       $s1, . + 4 + (0xC << 2)
label_338588:
    if (ctx->pc == 0x338588u) {
        ctx->pc = 0x338588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338584u;
        // 0x338588: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33858Cu;
        goto label_33858c;
    }
    ctx->pc = 0x338584u;
    {
        const bool branch_taken_0x338584 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x338584) {
            ctx->pc = 0x338588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338584u;
            // 0x338588: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3385B8u;
            goto label_3385b8;
        }
    }
    ctx->pc = 0x33858Cu;
label_33858c:
    // 0x33858c: 0x8f82cbc0  lw          $v0, -0x3440($gp)
    ctx->pc = 0x33858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953920)));
label_338590:
    // 0x338590: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x338590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_338594:
    // 0x338594: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x338594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_338598:
    // 0x338598: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x338598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33859c:
    // 0x33859c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_3385a0:
    if (ctx->pc == 0x3385A0u) {
        ctx->pc = 0x3385A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33859Cu;
        // 0x3385a0: 0xaf90cbc0  sw          $s0, -0x3440($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385A4u;
        goto label_3385a4;
    }
    ctx->pc = 0x33859Cu;
    {
        const bool branch_taken_0x33859c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3385A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33859Cu;
        // 0x3385a0: 0xaf90cbc0  sw          $s0, -0x3440($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33859c) {
            ctx->pc = 0x3385ACu;
            goto label_3385ac;
        }
    }
    ctx->pc = 0x3385A4u;
label_3385a4:
    // 0x3385a4: 0xc04627e  jal         func_1189F8
label_3385a8:
    if (ctx->pc == 0x3385A8u) {
        ctx->pc = 0x3385ACu;
        goto label_3385ac;
    }
    ctx->pc = 0x3385A4u;
    SET_GPR_U32(ctx, 31, 0x3385ACu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x3385A4u, 0x3385ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3385ACu;
label_3385ac:
    // 0x3385ac: 0x10000014  b           . + 4 + (0x14 << 2)
label_3385b0:
    if (ctx->pc == 0x3385B0u) {
        ctx->pc = 0x3385B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385ACu;
        // 0x3385b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385B4u;
        goto label_3385b4;
    }
    ctx->pc = 0x3385ACu;
    {
        const bool branch_taken_0x3385ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3385B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385ACu;
        // 0x3385b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3385ac) {
            ctx->pc = 0x338600u;
            goto label_338600;
        }
    }
    ctx->pc = 0x3385B4u;
label_3385b4:
    // 0x3385b4: 0x0  nop
    ctx->pc = 0x3385b4u;
    // NOP
label_3385b8:
    // 0x3385b8: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x3385b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_3385bc:
    // 0x3385bc: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x3385bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_3385c0:
    // 0x3385c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3385c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3385c4:
    // 0x3385c4: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3385c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_3385c8:
    // 0x3385c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3385c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3385cc:
    // 0x3385cc: 0x24c684a0  addiu       $a2, $a2, -0x7B60
    ctx->pc = 0x3385ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935712));
label_3385d0:
    // 0x3385d0: 0xc0ce092  jal         func_338248
label_3385d4:
    if (ctx->pc == 0x3385D4u) {
        ctx->pc = 0x3385D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385D0u;
        // 0x3385d4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385D8u;
        goto label_3385d8;
    }
    ctx->pc = 0x3385D0u;
    SET_GPR_U32(ctx, 31, 0x3385D8u);
    ctx->pc = 0x3385D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3385D0u;
    // 0x3385d4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338248u, 0x3385D0u, 0x3385D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3385D8u;
label_3385d8:
    // 0x3385d8: 0xc0cdf72  jal         func_337DC8
label_3385dc:
    if (ctx->pc == 0x3385DCu) {
        ctx->pc = 0x3385DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385D8u;
        // 0x3385dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385E0u;
        goto label_3385e0;
    }
    ctx->pc = 0x3385D8u;
    SET_GPR_U32(ctx, 31, 0x3385E0u);
    ctx->pc = 0x3385DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3385D8u;
    // 0x3385dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337DC8u, 0x3385D8u, 0x3385E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3385E0u;
label_3385e0:
    // 0x3385e0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_3385e4:
    if (ctx->pc == 0x3385E4u) {
        ctx->pc = 0x3385E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385E0u;
        // 0x3385e4: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385E8u;
        goto label_3385e8;
    }
    ctx->pc = 0x3385E0u;
    {
        const bool branch_taken_0x3385e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3385E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385E0u;
        // 0x3385e4: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3385e0) {
            ctx->pc = 0x3385F4u;
            goto label_3385f4;
        }
    }
    ctx->pc = 0x3385E8u;
label_3385e8:
    // 0x3385e8: 0xc04627e  jal         func_1189F8
label_3385ec:
    if (ctx->pc == 0x3385ECu) {
        ctx->pc = 0x3385F0u;
        goto label_3385f0;
    }
    ctx->pc = 0x3385E8u;
    SET_GPR_U32(ctx, 31, 0x3385F0u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x3385E8u, 0x3385F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3385F0u;
label_3385f0:
    // 0x3385f0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3385f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3385f4:
    // 0x3385f4: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x3385f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
label_3385f8:
    // 0x3385f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3385f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3385fc:
    // 0x3385fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3385fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_338600:
    // 0x338600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338604:
    // 0x338604: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_338608:
    // 0x338608: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x338608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33860c:
    // 0x33860c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33860cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_338610:
    // 0x338610: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x338610u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_338614:
    // 0x338614: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x338614u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_338618:
    // 0x338618: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x338618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33861c:
    // 0x33861c: 0x3e00008  jr          $ra
label_338620:
    if (ctx->pc == 0x338620u) {
        ctx->pc = 0x338620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33861Cu;
        // 0x338620: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338624u;
        goto label_338624;
    }
    ctx->pc = 0x33861Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33861Cu;
        // 0x338620: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33861Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338624u;
label_338624:
    // 0x338624: 0x0  nop
    ctx->pc = 0x338624u;
    // NOP
label_338628:
    // 0x338628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33862c:
    // 0x33862c: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x33862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
label_338630:
    // 0x338630: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x338630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_338634:
    // 0x338634: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x338634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_338638:
    // 0x338638: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x338638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33863c:
    // 0x33863c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33863cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338640:
    // 0x338640: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x338640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_338644:
    // 0x338644: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x338644u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_338648:
    // 0x338648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33864c:
    // 0x33864c: 0x34420016  ori         $v0, $v0, 0x16
    ctx->pc = 0x33864cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
label_338650:
    // 0x338650: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_338654:
    // 0x338654: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_338658:
    if (ctx->pc == 0x338658u) {
        ctx->pc = 0x338658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338654u;
        // 0x338658: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33865Cu;
        goto label_33865c;
    }
    ctx->pc = 0x338654u;
    {
        const bool branch_taken_0x338654 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x338658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338654u;
        // 0x338658: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338654) {
            ctx->pc = 0x3386E4u;
            goto label_3386e4;
        }
    }
    ctx->pc = 0x33865Cu;
label_33865c:
    // 0x33865c: 0x8f90cbc0  lw          $s0, -0x3440($gp)
    ctx->pc = 0x33865cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953920)));
label_338660:
    // 0x338660: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_338664:
    if (ctx->pc == 0x338664u) {
        ctx->pc = 0x338668u;
        goto label_338668;
    }
    ctx->pc = 0x338660u;
    {
        const bool branch_taken_0x338660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x338660) {
            ctx->pc = 0x338670u;
            goto label_338670;
        }
    }
    ctx->pc = 0x338668u;
label_338668:
    // 0x338668: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x338668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33866c:
    // 0x33866c: 0xaf82cbc0  sw          $v0, -0x3440($gp)
    ctx->pc = 0x33866cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 2));
label_338670:
    // 0x338670: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x338670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
label_338674:
    // 0x338674: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_338678:
    if (ctx->pc == 0x338678u) {
        ctx->pc = 0x338678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338674u;
        // 0x338678: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33867Cu;
        goto label_33867c;
    }
    ctx->pc = 0x338674u;
    {
        const bool branch_taken_0x338674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x338678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338674u;
        // 0x338678: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x338674) {
            ctx->pc = 0x3386E4u;
            goto label_3386e4;
        }
    }
    ctx->pc = 0x33867Cu;
label_33867c:
    // 0x33867c: 0xc0cdeb4  jal         func_337AD0
label_338680:
    if (ctx->pc == 0x338680u) {
        ctx->pc = 0x338684u;
        goto label_338684;
    }
    ctx->pc = 0x33867Cu;
    SET_GPR_U32(ctx, 31, 0x338684u);
    ctx->pc = 0x337AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AD0u, 0x33867Cu, 0x338684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338684u;
label_338684:
    // 0x338684: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x338684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_338688:
    // 0x338688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x338688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33868c:
    // 0x33868c: 0x24c684a0  addiu       $a2, $a2, -0x7B60
    ctx->pc = 0x33868cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935712));
label_338690:
    // 0x338690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x338690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_338694:
    // 0x338694: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x338694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_338698:
    // 0x338698: 0x6210007  bgez        $s1, . + 4 + (0x7 << 2)
label_33869c:
    if (ctx->pc == 0x33869Cu) {
        ctx->pc = 0x33869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338698u;
        // 0x33869c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3386A0u;
        goto label_3386a0;
    }
    ctx->pc = 0x338698u;
    {
        const bool branch_taken_0x338698 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x33869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338698u;
        // 0x33869c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338698) {
            ctx->pc = 0x3386B8u;
            goto label_3386b8;
        }
    }
    ctx->pc = 0x3386A0u;
label_3386a0:
    // 0x3386a0: 0x8f83cbc0  lw          $v1, -0x3440($gp)
    ctx->pc = 0x3386a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953920)));
label_3386a4:
    // 0x3386a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3386a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3386a8:
    // 0x3386a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3386a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3386ac:
    // 0x3386ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3386acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3386b0:
    // 0x3386b0: 0x1000000c  b           . + 4 + (0xC << 2)
label_3386b4:
    if (ctx->pc == 0x3386B4u) {
        ctx->pc = 0x3386B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386B0u;
        // 0x3386b4: 0xaf90cbc0  sw          $s0, -0x3440($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3386B8u;
        goto label_3386b8;
    }
    ctx->pc = 0x3386B0u;
    {
        const bool branch_taken_0x3386b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3386B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386B0u;
        // 0x3386b4: 0xaf90cbc0  sw          $s0, -0x3440($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3386b0) {
            ctx->pc = 0x3386E4u;
            goto label_3386e4;
        }
    }
    ctx->pc = 0x3386B8u;
label_3386b8:
    // 0x3386b8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x3386b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_3386bc:
    // 0x3386bc: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x3386bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_3386c0:
    // 0x3386c0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3386c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_3386c4:
    // 0x3386c4: 0xc0ce054  jal         func_338150
label_3386c8:
    if (ctx->pc == 0x3386C8u) {
        ctx->pc = 0x3386CCu;
        goto label_3386cc;
    }
    ctx->pc = 0x3386C4u;
    SET_GPR_U32(ctx, 31, 0x3386CCu);
    ctx->pc = 0x338150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338150u, 0x3386C4u, 0x3386CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3386CCu;
label_3386cc:
    // 0x3386cc: 0xc0cdf44  jal         func_337D10
label_3386d0:
    if (ctx->pc == 0x3386D0u) {
        ctx->pc = 0x3386D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386CCu;
        // 0x3386d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3386D4u;
        goto label_3386d4;
    }
    ctx->pc = 0x3386CCu;
    SET_GPR_U32(ctx, 31, 0x3386D4u);
    ctx->pc = 0x3386D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3386CCu;
    // 0x3386d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D10u, 0x3386CCu, 0x3386D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3386D4u;
label_3386d4:
    // 0x3386d4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3386d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3386d8:
    // 0x3386d8: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x3386d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
label_3386dc:
    // 0x3386dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3386dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3386e0:
    // 0x3386e0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3386e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3386e4:
    // 0x3386e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3386e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3386e8:
    // 0x3386e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3386e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3386ec:
    // 0x3386ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3386ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3386f0:
    // 0x3386f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3386f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3386f4:
    // 0x3386f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3386f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3386f8:
    // 0x3386f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3386f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3386fc:
    // 0x3386fc: 0x3e00008  jr          $ra
label_338700:
    if (ctx->pc == 0x338700u) {
        ctx->pc = 0x338700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386FCu;
        // 0x338700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338704u;
        goto label_338704;
    }
    ctx->pc = 0x3386FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386FCu;
        // 0x338700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3386FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338704u;
label_338704:
    // 0x338704: 0x0  nop
    ctx->pc = 0x338704u;
    // NOP
label_338708:
    // 0x338708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33870c:
    // 0x33870c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33870cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_338710:
    // 0x338710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x338710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338714:
    // 0x338714: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x338714u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_338718:
    // 0x338718: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33871c:
    // 0x33871c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_338720:
    // 0x338720: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x338720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_338724:
    // 0x338724: 0xc04626a  jal         func_1189A8
label_338728:
    if (ctx->pc == 0x338728u) {
        ctx->pc = 0x338728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338724u;
        // 0x338728: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33872Cu;
        goto label_33872c;
    }
    ctx->pc = 0x338724u;
    SET_GPR_U32(ctx, 31, 0x33872Cu);
    ctx->pc = 0x338728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338724u;
    // 0x338728: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x338724u, 0x33872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33872Cu;
label_33872c:
    // 0x33872c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_338730:
    if (ctx->pc == 0x338730u) {
        ctx->pc = 0x338730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33872Cu;
        // 0x338730: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338734u;
        goto label_338734;
    }
    ctx->pc = 0x33872Cu;
    {
        const bool branch_taken_0x33872c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x338730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33872Cu;
        // 0x338730: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33872c) {
            ctx->pc = 0x338748u;
            goto label_338748;
        }
    }
    ctx->pc = 0x338734u;
label_338734:
    // 0x338734: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x338734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_338738:
    // 0x338738: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x338738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_33873c:
    // 0x33873c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33873cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_338740:
    // 0x338740: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_338744:
    if (ctx->pc == 0x338744u) {
        ctx->pc = 0x338748u;
        goto label_338748;
    }
    ctx->pc = 0x338740u;
    {
        const bool branch_taken_0x338740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338740) {
            ctx->pc = 0x338768u;
            goto label_338768;
        }
    }
    ctx->pc = 0x338748u;
label_338748:
    // 0x338748: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_33874c:
    if (ctx->pc == 0x33874Cu) {
        ctx->pc = 0x338750u;
        goto label_338750;
    }
    ctx->pc = 0x338748u;
    {
        const bool branch_taken_0x338748 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x338748) {
            ctx->pc = 0x338758u;
            goto label_338758;
        }
    }
    ctx->pc = 0x338750u;
label_338750:
    // 0x338750: 0xc04627e  jal         func_1189F8
label_338754:
    if (ctx->pc == 0x338754u) {
        ctx->pc = 0x338758u;
        goto label_338758;
    }
    ctx->pc = 0x338750u;
    SET_GPR_U32(ctx, 31, 0x338758u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x338750u, 0x338758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338758u;
label_338758:
    // 0x338758: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x338758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
label_33875c:
    // 0x33875c: 0x1000000e  b           . + 4 + (0xE << 2)
label_338760:
    if (ctx->pc == 0x338760u) {
        ctx->pc = 0x338760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33875Cu;
        // 0x338760: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        ctx->pc = 0x338764u;
        goto label_338764;
    }
    ctx->pc = 0x33875Cu;
    {
        const bool branch_taken_0x33875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33875Cu;
        // 0x338760: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33875c) {
            ctx->pc = 0x338798u;
            goto label_338798;
        }
    }
    ctx->pc = 0x338764u;
label_338764:
    // 0x338764: 0x0  nop
    ctx->pc = 0x338764u;
    // NOP
label_338768:
    // 0x338768: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x338768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_33876c:
    // 0x33876c: 0xc0cdf08  jal         func_337C20
label_338770:
    if (ctx->pc == 0x338770u) {
        ctx->pc = 0x338774u;
        goto label_338774;
    }
    ctx->pc = 0x33876Cu;
    SET_GPR_U32(ctx, 31, 0x338774u);
    ctx->pc = 0x337C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337C20u, 0x33876Cu, 0x338774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338774u;
label_338774:
    // 0x338774: 0x8f83cbc0  lw          $v1, -0x3440($gp)
    ctx->pc = 0x338774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953920)));
label_338778:
    // 0x338778: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x338778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_33877c:
    // 0x33877c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x33877cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_338780:
    // 0x338780: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x338780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_338784:
    // 0x338784: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_338788:
    if (ctx->pc == 0x338788u) {
        ctx->pc = 0x338788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338784u;
        // 0x338788: 0xaf91cbc0  sw          $s1, -0x3440($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33878Cu;
        goto label_33878c;
    }
    ctx->pc = 0x338784u;
    {
        const bool branch_taken_0x338784 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x338788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338784u;
        // 0x338788: 0xaf91cbc0  sw          $s1, -0x3440($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338784) {
            ctx->pc = 0x338794u;
            goto label_338794;
        }
    }
    ctx->pc = 0x33878Cu;
label_33878c:
    // 0x33878c: 0xc04627e  jal         func_1189F8
label_338790:
    if (ctx->pc == 0x338790u) {
        ctx->pc = 0x338794u;
        goto label_338794;
    }
    ctx->pc = 0x33878Cu;
    SET_GPR_U32(ctx, 31, 0x338794u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x33878Cu, 0x338794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338794u;
label_338794:
    // 0x338794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x338794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338798:
    // 0x338798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33879c:
    // 0x33879c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33879cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3387a0:
    // 0x3387a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3387a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3387a4:
    // 0x3387a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3387a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3387a8:
    // 0x3387a8: 0x3e00008  jr          $ra
label_3387ac:
    if (ctx->pc == 0x3387ACu) {
        ctx->pc = 0x3387ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387A8u;
        // 0x3387ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3387B0u;
        goto label_3387b0;
    }
    ctx->pc = 0x3387A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3387ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387A8u;
        // 0x3387ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3387A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3387B0u;
label_3387b0:
    // 0x3387b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3387b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3387b4:
    // 0x3387b4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3387b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_3387b8:
    // 0x3387b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3387b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3387bc:
    // 0x3387bc: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x3387bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3387c0:
    // 0x3387c0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_3387c4:
    if (ctx->pc == 0x3387C4u) {
        ctx->pc = 0x3387C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387C0u;
        // 0x3387c4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3387C8u;
        goto label_3387c8;
    }
    ctx->pc = 0x3387C0u;
    {
        const bool branch_taken_0x3387c0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3387C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387C0u;
        // 0x3387c4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387c0) {
            ctx->pc = 0x3387DCu;
            goto label_3387dc;
        }
    }
    ctx->pc = 0x3387C8u;
label_3387c8:
    // 0x3387c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3387c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3387cc:
    // 0x3387cc: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x3387ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_3387d0:
    // 0x3387d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3387d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3387d4:
    // 0x3387d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3387d8:
    if (ctx->pc == 0x3387D8u) {
        ctx->pc = 0x3387DCu;
        goto label_3387dc;
    }
    ctx->pc = 0x3387D4u;
    {
        const bool branch_taken_0x3387d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3387d4) {
            ctx->pc = 0x3387E8u;
            goto label_3387e8;
        }
    }
    ctx->pc = 0x3387DCu;
label_3387dc:
    // 0x3387dc: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3387dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
label_3387e0:
    // 0x3387e0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3387e4:
    if (ctx->pc == 0x3387E4u) {
        ctx->pc = 0x3387E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387E0u;
        // 0x3387e4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3387E8u;
        goto label_3387e8;
    }
    ctx->pc = 0x3387E0u;
    {
        const bool branch_taken_0x3387e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3387E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387E0u;
        // 0x3387e4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387e0) {
            ctx->pc = 0x338810u;
            goto label_338810;
        }
    }
    ctx->pc = 0x3387E8u;
label_3387e8:
    // 0x3387e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3387e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3387ec:
    // 0x3387ec: 0xc0cdee0  jal         func_337B80
label_3387f0:
    if (ctx->pc == 0x3387F0u) {
        ctx->pc = 0x3387F4u;
        goto label_3387f4;
    }
    ctx->pc = 0x3387ECu;
    SET_GPR_U32(ctx, 31, 0x3387F4u);
    ctx->pc = 0x337B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B80u, 0x3387ECu, 0x3387F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3387F4u;
label_3387f4:
    // 0x3387f4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3387f8:
    if (ctx->pc == 0x3387F8u) {
        ctx->pc = 0x3387F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387F4u;
        // 0x3387f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3387FCu;
        goto label_3387fc;
    }
    ctx->pc = 0x3387F4u;
    {
        const bool branch_taken_0x3387f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3387f4) {
            ctx->pc = 0x3387F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3387F4u;
            // 0x3387f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338814u;
            goto label_338814;
        }
    }
    ctx->pc = 0x3387FCu;
label_3387fc:
    // 0x3387fc: 0x8f83cbc0  lw          $v1, -0x3440($gp)
    ctx->pc = 0x3387fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953920)));
label_338800:
    // 0x338800: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x338800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_338804:
    // 0x338804: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x338804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_338808:
    // 0x338808: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x338808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33880c:
    // 0x33880c: 0xaf90cbc0  sw          $s0, -0x3440($gp)
    ctx->pc = 0x33880cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 16));
label_338810:
    // 0x338810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338814:
    // 0x338814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_338818:
    // 0x338818: 0x3e00008  jr          $ra
label_33881c:
    if (ctx->pc == 0x33881Cu) {
        ctx->pc = 0x33881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338818u;
        // 0x33881c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338820u;
        goto label_fallthrough_0x338818;
    }
    ctx->pc = 0x338818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338818u;
        // 0x33881c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x338818:
    ctx->pc = 0x338820u;
}
