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

// Function: sub_004D4648
// Address: 0x4d4648 - 0x4d4a40
void sub_004D4648_0x4d4648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4648_0x4d4648");
#endif

    switch (ctx->pc) {
        case 0x4d4648u: goto label_4d4648;
        case 0x4d464cu: goto label_4d464c;
        case 0x4d4650u: goto label_4d4650;
        case 0x4d4654u: goto label_4d4654;
        case 0x4d4658u: goto label_4d4658;
        case 0x4d465cu: goto label_4d465c;
        case 0x4d4660u: goto label_4d4660;
        case 0x4d4664u: goto label_4d4664;
        case 0x4d4668u: goto label_4d4668;
        case 0x4d466cu: goto label_4d466c;
        case 0x4d4670u: goto label_4d4670;
        case 0x4d4674u: goto label_4d4674;
        case 0x4d4678u: goto label_4d4678;
        case 0x4d467cu: goto label_4d467c;
        case 0x4d4680u: goto label_4d4680;
        case 0x4d4684u: goto label_4d4684;
        case 0x4d4688u: goto label_4d4688;
        case 0x4d468cu: goto label_4d468c;
        case 0x4d4690u: goto label_4d4690;
        case 0x4d4694u: goto label_4d4694;
        case 0x4d4698u: goto label_4d4698;
        case 0x4d469cu: goto label_4d469c;
        case 0x4d46a0u: goto label_4d46a0;
        case 0x4d46a4u: goto label_4d46a4;
        case 0x4d46a8u: goto label_4d46a8;
        case 0x4d46acu: goto label_4d46ac;
        case 0x4d46b0u: goto label_4d46b0;
        case 0x4d46b4u: goto label_4d46b4;
        case 0x4d46b8u: goto label_4d46b8;
        case 0x4d46bcu: goto label_4d46bc;
        case 0x4d46c0u: goto label_4d46c0;
        case 0x4d46c4u: goto label_4d46c4;
        case 0x4d46c8u: goto label_4d46c8;
        case 0x4d46ccu: goto label_4d46cc;
        case 0x4d46d0u: goto label_4d46d0;
        case 0x4d46d4u: goto label_4d46d4;
        case 0x4d46d8u: goto label_4d46d8;
        case 0x4d46dcu: goto label_4d46dc;
        case 0x4d46e0u: goto label_4d46e0;
        case 0x4d46e4u: goto label_4d46e4;
        case 0x4d46e8u: goto label_4d46e8;
        case 0x4d46ecu: goto label_4d46ec;
        case 0x4d46f0u: goto label_4d46f0;
        case 0x4d46f4u: goto label_4d46f4;
        case 0x4d46f8u: goto label_4d46f8;
        case 0x4d46fcu: goto label_4d46fc;
        case 0x4d4700u: goto label_4d4700;
        case 0x4d4704u: goto label_4d4704;
        case 0x4d4708u: goto label_4d4708;
        case 0x4d470cu: goto label_4d470c;
        case 0x4d4710u: goto label_4d4710;
        case 0x4d4714u: goto label_4d4714;
        case 0x4d4718u: goto label_4d4718;
        case 0x4d471cu: goto label_4d471c;
        case 0x4d4720u: goto label_4d4720;
        case 0x4d4724u: goto label_4d4724;
        case 0x4d4728u: goto label_4d4728;
        case 0x4d472cu: goto label_4d472c;
        case 0x4d4730u: goto label_4d4730;
        case 0x4d4734u: goto label_4d4734;
        case 0x4d4738u: goto label_4d4738;
        case 0x4d473cu: goto label_4d473c;
        case 0x4d4740u: goto label_4d4740;
        case 0x4d4744u: goto label_4d4744;
        case 0x4d4748u: goto label_4d4748;
        case 0x4d474cu: goto label_4d474c;
        case 0x4d4750u: goto label_4d4750;
        case 0x4d4754u: goto label_4d4754;
        case 0x4d4758u: goto label_4d4758;
        case 0x4d475cu: goto label_4d475c;
        case 0x4d4760u: goto label_4d4760;
        case 0x4d4764u: goto label_4d4764;
        case 0x4d4768u: goto label_4d4768;
        case 0x4d476cu: goto label_4d476c;
        case 0x4d4770u: goto label_4d4770;
        case 0x4d4774u: goto label_4d4774;
        case 0x4d4778u: goto label_4d4778;
        case 0x4d477cu: goto label_4d477c;
        case 0x4d4780u: goto label_4d4780;
        case 0x4d4784u: goto label_4d4784;
        case 0x4d4788u: goto label_4d4788;
        case 0x4d478cu: goto label_4d478c;
        case 0x4d4790u: goto label_4d4790;
        case 0x4d4794u: goto label_4d4794;
        case 0x4d4798u: goto label_4d4798;
        case 0x4d479cu: goto label_4d479c;
        case 0x4d47a0u: goto label_4d47a0;
        case 0x4d47a4u: goto label_4d47a4;
        case 0x4d47a8u: goto label_4d47a8;
        case 0x4d47acu: goto label_4d47ac;
        case 0x4d47b0u: goto label_4d47b0;
        case 0x4d47b4u: goto label_4d47b4;
        case 0x4d47b8u: goto label_4d47b8;
        case 0x4d47bcu: goto label_4d47bc;
        case 0x4d47c0u: goto label_4d47c0;
        case 0x4d47c4u: goto label_4d47c4;
        case 0x4d47c8u: goto label_4d47c8;
        case 0x4d47ccu: goto label_4d47cc;
        case 0x4d47d0u: goto label_4d47d0;
        case 0x4d47d4u: goto label_4d47d4;
        case 0x4d47d8u: goto label_4d47d8;
        case 0x4d47dcu: goto label_4d47dc;
        case 0x4d47e0u: goto label_4d47e0;
        case 0x4d47e4u: goto label_4d47e4;
        case 0x4d47e8u: goto label_4d47e8;
        case 0x4d47ecu: goto label_4d47ec;
        case 0x4d47f0u: goto label_4d47f0;
        case 0x4d47f4u: goto label_4d47f4;
        case 0x4d47f8u: goto label_4d47f8;
        case 0x4d47fcu: goto label_4d47fc;
        case 0x4d4800u: goto label_4d4800;
        case 0x4d4804u: goto label_4d4804;
        case 0x4d4808u: goto label_4d4808;
        case 0x4d480cu: goto label_4d480c;
        case 0x4d4810u: goto label_4d4810;
        case 0x4d4814u: goto label_4d4814;
        case 0x4d4818u: goto label_4d4818;
        case 0x4d481cu: goto label_4d481c;
        case 0x4d4820u: goto label_4d4820;
        case 0x4d4824u: goto label_4d4824;
        case 0x4d4828u: goto label_4d4828;
        case 0x4d482cu: goto label_4d482c;
        case 0x4d4830u: goto label_4d4830;
        case 0x4d4834u: goto label_4d4834;
        case 0x4d4838u: goto label_4d4838;
        case 0x4d483cu: goto label_4d483c;
        case 0x4d4840u: goto label_4d4840;
        case 0x4d4844u: goto label_4d4844;
        case 0x4d4848u: goto label_4d4848;
        case 0x4d484cu: goto label_4d484c;
        case 0x4d4850u: goto label_4d4850;
        case 0x4d4854u: goto label_4d4854;
        case 0x4d4858u: goto label_4d4858;
        case 0x4d485cu: goto label_4d485c;
        case 0x4d4860u: goto label_4d4860;
        case 0x4d4864u: goto label_4d4864;
        case 0x4d4868u: goto label_4d4868;
        case 0x4d486cu: goto label_4d486c;
        case 0x4d4870u: goto label_4d4870;
        case 0x4d4874u: goto label_4d4874;
        case 0x4d4878u: goto label_4d4878;
        case 0x4d487cu: goto label_4d487c;
        case 0x4d4880u: goto label_4d4880;
        case 0x4d4884u: goto label_4d4884;
        case 0x4d4888u: goto label_4d4888;
        case 0x4d488cu: goto label_4d488c;
        case 0x4d4890u: goto label_4d4890;
        case 0x4d4894u: goto label_4d4894;
        case 0x4d4898u: goto label_4d4898;
        case 0x4d489cu: goto label_4d489c;
        case 0x4d48a0u: goto label_4d48a0;
        case 0x4d48a4u: goto label_4d48a4;
        case 0x4d48a8u: goto label_4d48a8;
        case 0x4d48acu: goto label_4d48ac;
        case 0x4d48b0u: goto label_4d48b0;
        case 0x4d48b4u: goto label_4d48b4;
        case 0x4d48b8u: goto label_4d48b8;
        case 0x4d48bcu: goto label_4d48bc;
        case 0x4d48c0u: goto label_4d48c0;
        case 0x4d48c4u: goto label_4d48c4;
        case 0x4d48c8u: goto label_4d48c8;
        case 0x4d48ccu: goto label_4d48cc;
        case 0x4d48d0u: goto label_4d48d0;
        case 0x4d48d4u: goto label_4d48d4;
        case 0x4d48d8u: goto label_4d48d8;
        case 0x4d48dcu: goto label_4d48dc;
        case 0x4d48e0u: goto label_4d48e0;
        case 0x4d48e4u: goto label_4d48e4;
        case 0x4d48e8u: goto label_4d48e8;
        case 0x4d48ecu: goto label_4d48ec;
        case 0x4d48f0u: goto label_4d48f0;
        case 0x4d48f4u: goto label_4d48f4;
        case 0x4d48f8u: goto label_4d48f8;
        case 0x4d48fcu: goto label_4d48fc;
        case 0x4d4900u: goto label_4d4900;
        case 0x4d4904u: goto label_4d4904;
        case 0x4d4908u: goto label_4d4908;
        case 0x4d490cu: goto label_4d490c;
        case 0x4d4910u: goto label_4d4910;
        case 0x4d4914u: goto label_4d4914;
        case 0x4d4918u: goto label_4d4918;
        case 0x4d491cu: goto label_4d491c;
        case 0x4d4920u: goto label_4d4920;
        case 0x4d4924u: goto label_4d4924;
        case 0x4d4928u: goto label_4d4928;
        case 0x4d492cu: goto label_4d492c;
        case 0x4d4930u: goto label_4d4930;
        case 0x4d4934u: goto label_4d4934;
        case 0x4d4938u: goto label_4d4938;
        case 0x4d493cu: goto label_4d493c;
        case 0x4d4940u: goto label_4d4940;
        case 0x4d4944u: goto label_4d4944;
        case 0x4d4948u: goto label_4d4948;
        case 0x4d494cu: goto label_4d494c;
        case 0x4d4950u: goto label_4d4950;
        case 0x4d4954u: goto label_4d4954;
        case 0x4d4958u: goto label_4d4958;
        case 0x4d495cu: goto label_4d495c;
        case 0x4d4960u: goto label_4d4960;
        case 0x4d4964u: goto label_4d4964;
        case 0x4d4968u: goto label_4d4968;
        case 0x4d496cu: goto label_4d496c;
        case 0x4d4970u: goto label_4d4970;
        case 0x4d4974u: goto label_4d4974;
        case 0x4d4978u: goto label_4d4978;
        case 0x4d497cu: goto label_4d497c;
        case 0x4d4980u: goto label_4d4980;
        case 0x4d4984u: goto label_4d4984;
        case 0x4d4988u: goto label_4d4988;
        case 0x4d498cu: goto label_4d498c;
        case 0x4d4990u: goto label_4d4990;
        case 0x4d4994u: goto label_4d4994;
        case 0x4d4998u: goto label_4d4998;
        case 0x4d499cu: goto label_4d499c;
        case 0x4d49a0u: goto label_4d49a0;
        case 0x4d49a4u: goto label_4d49a4;
        case 0x4d49a8u: goto label_4d49a8;
        case 0x4d49acu: goto label_4d49ac;
        case 0x4d49b0u: goto label_4d49b0;
        case 0x4d49b4u: goto label_4d49b4;
        case 0x4d49b8u: goto label_4d49b8;
        case 0x4d49bcu: goto label_4d49bc;
        case 0x4d49c0u: goto label_4d49c0;
        case 0x4d49c4u: goto label_4d49c4;
        case 0x4d49c8u: goto label_4d49c8;
        case 0x4d49ccu: goto label_4d49cc;
        case 0x4d49d0u: goto label_4d49d0;
        case 0x4d49d4u: goto label_4d49d4;
        case 0x4d49d8u: goto label_4d49d8;
        case 0x4d49dcu: goto label_4d49dc;
        case 0x4d49e0u: goto label_4d49e0;
        case 0x4d49e4u: goto label_4d49e4;
        case 0x4d49e8u: goto label_4d49e8;
        case 0x4d49ecu: goto label_4d49ec;
        case 0x4d49f0u: goto label_4d49f0;
        case 0x4d49f4u: goto label_4d49f4;
        case 0x4d49f8u: goto label_4d49f8;
        case 0x4d49fcu: goto label_4d49fc;
        case 0x4d4a00u: goto label_4d4a00;
        case 0x4d4a04u: goto label_4d4a04;
        case 0x4d4a08u: goto label_4d4a08;
        case 0x4d4a0cu: goto label_4d4a0c;
        case 0x4d4a10u: goto label_4d4a10;
        case 0x4d4a14u: goto label_4d4a14;
        case 0x4d4a18u: goto label_4d4a18;
        case 0x4d4a1cu: goto label_4d4a1c;
        case 0x4d4a20u: goto label_4d4a20;
        case 0x4d4a24u: goto label_4d4a24;
        case 0x4d4a28u: goto label_4d4a28;
        case 0x4d4a2cu: goto label_4d4a2c;
        case 0x4d4a30u: goto label_4d4a30;
        case 0x4d4a34u: goto label_4d4a34;
        case 0x4d4a38u: goto label_4d4a38;
        case 0x4d4a3cu: goto label_4d4a3c;
        default: break;
    }

    ctx->pc = 0x4d4648u;

label_4d4648:
    // 0x4d4648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d4648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d464c:
    // 0x4d464c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4650:
    // 0x4d4650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d4650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4654:
    // 0x4d4654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d4654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d4658:
    // 0x4d4658: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d4658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
label_4d465c:
    // 0x4d465c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d4660:
    // 0x4d4660: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d4660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d4664:
    // 0x4d4664: 0x4420011  bltzl       $v0, . + 4 + (0x11 << 2)
label_4d4668:
    if (ctx->pc == 0x4D4668u) {
        ctx->pc = 0x4D4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4664u;
        // 0x4d4668: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D466Cu;
        goto label_4d466c;
    }
    ctx->pc = 0x4D4664u;
    {
        const bool branch_taken_0x4d4664 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d4664) {
            ctx->pc = 0x4D4668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D4664u;
            // 0x4d4668: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D46ACu;
            goto label_4d46ac;
        }
    }
    ctx->pc = 0x4D466Cu;
label_4d466c:
    // 0x4d466c: 0xc12b642  jal         func_4AD908
label_4d4670:
    if (ctx->pc == 0x4D4670u) {
        ctx->pc = 0x4D4674u;
        goto label_4d4674;
    }
    ctx->pc = 0x4D466Cu;
    SET_GPR_U32(ctx, 31, 0x4D4674u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D466Cu, 0x4D4674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4674u;
label_4d4674:
    // 0x4d4674: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4d4674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4d4678:
    // 0x4d4678: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x4d4678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_4d467c:
    // 0x4d467c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d467cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d4680:
    // 0x4d4680: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4d4680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
label_4d4684:
    // 0x4d4684: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x4d4684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_4d4688:
    // 0x4d4688: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4d4688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
label_4d468c:
    // 0x4d468c: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4d468cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4d4690:
    // 0x4d4690: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4d4690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d4694:
    // 0x4d4694: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x4d4694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
label_4d4698:
    // 0x4d4698: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d4698u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4d469c:
    // 0x4d469c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d469cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d46a0:
    // 0x4d46a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d46a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d46a4:
    // 0x4d46a4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d46a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d46a8:
    // 0x4d46a8: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4d46a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d46ac:
    // 0x4d46ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d46acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d46b0:
    // 0x4d46b0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_4d46b4:
    if (ctx->pc == 0x4D46B4u) {
        ctx->pc = 0x4D46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46B0u;
        // 0x4d46b4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D46B8u;
        goto label_4d46b8;
    }
    ctx->pc = 0x4D46B0u;
    {
        const bool branch_taken_0x4d46b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46B0u;
        // 0x4d46b4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d46b0) {
            ctx->pc = 0x4D46F8u;
            goto label_4d46f8;
        }
    }
    ctx->pc = 0x4D46B8u;
label_4d46b8:
    // 0x4d46b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4d46bc:
    if (ctx->pc == 0x4D46BCu) {
        ctx->pc = 0x4D46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46B8u;
        // 0x4d46bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D46C0u;
        goto label_4d46c0;
    }
    ctx->pc = 0x4D46B8u;
    {
        const bool branch_taken_0x4d46b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d46b8) {
            ctx->pc = 0x4D46BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D46B8u;
            // 0x4d46bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D46D0u;
            goto label_4d46d0;
        }
    }
    ctx->pc = 0x4D46C0u;
label_4d46c0:
    // 0x4d46c0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_4d46c4:
    if (ctx->pc == 0x4D46C4u) {
        ctx->pc = 0x4D46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46C0u;
        // 0x4d46c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D46C8u;
        goto label_4d46c8;
    }
    ctx->pc = 0x4D46C0u;
    {
        const bool branch_taken_0x4d46c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46C0u;
        // 0x4d46c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d46c0) {
            ctx->pc = 0x4D46E0u;
            goto label_4d46e0;
        }
    }
    ctx->pc = 0x4D46C8u;
label_4d46c8:
    // 0x4d46c8: 0x10000017  b           . + 4 + (0x17 << 2)
label_4d46cc:
    if (ctx->pc == 0x4D46CCu) {
        ctx->pc = 0x4D46CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46C8u;
        // 0x4d46cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D46D0u;
        goto label_4d46d0;
    }
    ctx->pc = 0x4D46C8u;
    {
        const bool branch_taken_0x4d46c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D46CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46C8u;
        // 0x4d46cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d46c8) {
            ctx->pc = 0x4D4728u;
            goto label_4d4728;
        }
    }
    ctx->pc = 0x4D46D0u;
label_4d46d0:
    // 0x4d46d0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_4d46d4:
    if (ctx->pc == 0x4D46D4u) {
        ctx->pc = 0x4D46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46D0u;
        // 0x4d46d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D46D8u;
        goto label_4d46d8;
    }
    ctx->pc = 0x4D46D0u;
    {
        const bool branch_taken_0x4d46d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46D0u;
        // 0x4d46d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d46d0) {
            ctx->pc = 0x4D4710u;
            goto label_4d4710;
        }
    }
    ctx->pc = 0x4D46D8u;
label_4d46d8:
    // 0x4d46d8: 0x10000013  b           . + 4 + (0x13 << 2)
label_4d46dc:
    if (ctx->pc == 0x4D46DCu) {
        ctx->pc = 0x4D46DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46D8u;
        // 0x4d46dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D46E0u;
        goto label_4d46e0;
    }
    ctx->pc = 0x4D46D8u;
    {
        const bool branch_taken_0x4d46d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D46DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46D8u;
        // 0x4d46dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d46d8) {
            ctx->pc = 0x4D4728u;
            goto label_4d4728;
        }
    }
    ctx->pc = 0x4D46E0u;
label_4d46e0:
    // 0x4d46e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d46e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d46e4:
    // 0x4d46e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d46e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d46e8:
    // 0x4d46e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d46e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d46ec:
    // 0x4d46ec: 0x81351ce  j           func_4D4738
label_4d46f0:
    if (ctx->pc == 0x4D46F0u) {
        ctx->pc = 0x4D46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D46ECu;
        // 0x4d46f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D46F4u;
        goto label_4d46f4;
    }
    ctx->pc = 0x4D46ECu;
    ctx->pc = 0x4D46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D46ECu;
    // 0x4d46f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4738u;
    goto label_4d4738;
    ctx->pc = 0x4D46F4u;
label_4d46f4:
    // 0x4d46f4: 0x0  nop
    ctx->pc = 0x4d46f4u;
    // NOP
label_4d46f8:
    // 0x4d46f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d46f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d46fc:
    // 0x4d46fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d46fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4700:
    // 0x4d4700: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4704:
    // 0x4d4704: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4708:
    // 0x4d4708: 0x8135220  j           func_4D4880
label_4d470c:
    if (ctx->pc == 0x4D470Cu) {
        ctx->pc = 0x4D470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4708u;
        // 0x4d470c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4710u;
        goto label_4d4710;
    }
    ctx->pc = 0x4D4708u;
    ctx->pc = 0x4D470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4708u;
    // 0x4d470c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4880u;
    goto label_4d4880;
    ctx->pc = 0x4D4710u;
label_4d4710:
    // 0x4d4710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4714:
    // 0x4d4714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4718:
    // 0x4d4718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d471c:
    // 0x4d471c: 0x813523a  j           func_4D48E8
label_4d4720:
    if (ctx->pc == 0x4D4720u) {
        ctx->pc = 0x4D4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D471Cu;
        // 0x4d4720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4724u;
        goto label_4d4724;
    }
    ctx->pc = 0x4D471Cu;
    ctx->pc = 0x4D4720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D471Cu;
    // 0x4d4720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D48E8u;
    goto label_4d48e8;
    ctx->pc = 0x4D4724u;
label_4d4724:
    // 0x4d4724: 0x0  nop
    ctx->pc = 0x4d4724u;
    // NOP
label_4d4728:
    // 0x4d4728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d472c:
    // 0x4d472c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4730:
    // 0x4d4730: 0x3e00008  jr          $ra
label_4d4734:
    if (ctx->pc == 0x4D4734u) {
        ctx->pc = 0x4D4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4730u;
        // 0x4d4734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4738u;
        goto label_4d4738;
    }
    ctx->pc = 0x4D4730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4730u;
        // 0x4d4734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D4738u;
label_4d4738:
    // 0x4d4738: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d4738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d473c:
    // 0x4d473c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d473cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d4740:
    // 0x4d4740: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d4740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d4744:
    // 0x4d4744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d4744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4748:
    // 0x4d4748: 0x24451058  addiu       $a1, $v0, 0x1058
    ctx->pc = 0x4d4748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4184));
label_4d474c:
    // 0x4d474c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d4750:
    // 0x4d4750: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d4750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4d4754:
    // 0x4d4754: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d4754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d4758:
    // 0x4d4758: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x4d4758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_4d475c:
    // 0x4d475c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d4760:
    // 0x4d4760: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4d4760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_4d4764:
    // 0x4d4764: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d4764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d4768:
    // 0x4d4768: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d4768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d476c:
    // 0x4d476c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d4770:
    // 0x4d4770: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d4770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4d4774:
    // 0x4d4774: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4d4774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d4778:
    // 0x4d4778: 0x4600034  bltz        $v1, . + 4 + (0x34 << 2)
label_4d477c:
    if (ctx->pc == 0x4D477Cu) {
        ctx->pc = 0x4D477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4778u;
        // 0x4d477c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4780u;
        goto label_4d4780;
    }
    ctx->pc = 0x4D4778u;
    {
        const bool branch_taken_0x4d4778 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4778u;
        // 0x4d477c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4778) {
            ctx->pc = 0x4D484Cu;
            goto label_4d484c;
        }
    }
    ctx->pc = 0x4D4780u;
label_4d4780:
    // 0x4d4780: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4d4780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4d4784:
    // 0x4d4784: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d4784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4d4788:
    // 0x4d4788: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d4788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d478c:
    // 0x4d478c: 0x245478d8  addiu       $s4, $v0, 0x78D8
    ctx->pc = 0x4d478cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30936));
label_4d4790:
    // 0x4d4790: 0x24711048  addiu       $s1, $v1, 0x1048
    ctx->pc = 0x4d4790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4168));
label_4d4794:
    // 0x4d4794: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4d4794u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_4d4798:
    // 0x4d4798: 0xc12b5dc  jal         func_4AD770
label_4d479c:
    if (ctx->pc == 0x4D479Cu) {
        ctx->pc = 0x4D479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4798u;
        // 0x4d479c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D47A0u;
        goto label_4d47a0;
    }
    ctx->pc = 0x4D4798u;
    SET_GPR_U32(ctx, 31, 0x4D47A0u);
    ctx->pc = 0x4D479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4798u;
    // 0x4d479c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D4798u, 0x4D47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D47A0u;
label_4d47a0:
    // 0x4d47a0: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x4d47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_4d47a4:
    // 0x4d47a4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4d47a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_4d47a8:
    // 0x4d47a8: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4d47a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d47ac:
    // 0x4d47ac: 0xa440015e  sh          $zero, 0x15E($v0)
    ctx->pc = 0x4d47acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 0));
label_4d47b0:
    // 0x4d47b0: 0xa44401be  sh          $a0, 0x1BE($v0)
    ctx->pc = 0x4d47b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 4));
label_4d47b4:
    // 0x4d47b4: 0xa4400160  sh          $zero, 0x160($v0)
    ctx->pc = 0x4d47b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d47b8:
    // 0x4d47b8: 0xac520140  sw          $s2, 0x140($v0)
    ctx->pc = 0x4d47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 18));
label_4d47bc:
    // 0x4d47bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4d47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4d47c0:
    // 0x4d47c0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4d47c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d47c4:
    // 0x4d47c4: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x4d47c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
label_4d47c8:
    // 0x4d47c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4d47c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4d47cc:
    // 0x4d47cc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4d47ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4d47d0:
    // 0x4d47d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d47d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d47d4:
    // 0x4d47d4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4d47d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d47d8:
    // 0x4d47d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4d47d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4d47dc:
    // 0x4d47dc: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4d47dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
label_4d47e0:
    // 0x4d47e0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d47e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d47e4:
    // 0x4d47e4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4d47e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4d47e8:
    // 0x4d47e8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4d47e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d47ec:
    // 0x4d47ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4d47f0:
    // 0x4d47f0: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x4d47f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_4d47f4:
    // 0x4d47f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4d47f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4d47f8:
    // 0x4d47f8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4d47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_4d47fc:
    // 0x4d47fc: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x4d47fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4800:
    // 0x4d4800: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d4800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4d4804:
    // 0x4d4804: 0xa4440162  sh          $a0, 0x162($v0)
    ctx->pc = 0x4d4804u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 354), (uint16_t)GPR_U32(ctx, 4));
label_4d4808:
    // 0x4d4808: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x4d4808u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d480c:
    // 0x4d480c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4d4810:
    // 0x4d4810: 0xa4450164  sh          $a1, 0x164($v0)
    ctx->pc = 0x4d4810u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 356), (uint16_t)GPR_U32(ctx, 5));
label_4d4814:
    // 0x4d4814: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x4d4814u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4818:
    // 0x4d4818: 0xa4440166  sh          $a0, 0x166($v0)
    ctx->pc = 0x4d4818u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 4));
label_4d481c:
    // 0x4d481c: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x4d481cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_4d4820:
    // 0x4d4820: 0xa4450168  sh          $a1, 0x168($v0)
    ctx->pc = 0x4d4820u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 360), (uint16_t)GPR_U32(ctx, 5));
label_4d4824:
    // 0x4d4824: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d4824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4828:
    // 0x4d4828: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d4828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d482c:
    // 0x4d482c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d4830:
    // 0x4d4830: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d4830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_4d4834:
    // 0x4d4834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d4834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d4838:
    // 0x4d4838: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d4838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d483c:
    // 0x4d483c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d483cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d4840:
    // 0x4d4840: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d4840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4844:
    // 0x4d4844: 0x441ffd4  bgez        $v0, . + 4 + (-0x2C << 2)
label_4d4848:
    if (ctx->pc == 0x4D4848u) {
        ctx->pc = 0x4D484Cu;
        goto label_4d484c;
    }
    ctx->pc = 0x4D4844u;
    {
        const bool branch_taken_0x4d4844 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4d4844) {
            ctx->pc = 0x4D4798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d4798;
        }
    }
    ctx->pc = 0x4D484Cu;
label_4d484c:
    // 0x4d484c: 0x264301bc  addiu       $v1, $s2, 0x1BC
    ctx->pc = 0x4d484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
label_4d4850:
    // 0x4d4850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d4850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d4854:
    // 0x4d4854: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d4854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4858:
    // 0x4d4858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d485c:
    // 0x4d485c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d485cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4860:
    // 0x4d4860: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d4860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d4864:
    // 0x4d4864: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d4864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4868:
    // 0x4d4868: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d4868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d486c:
    // 0x4d486c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d486cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4870:
    // 0x4d4870: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4d4870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d4874:
    // 0x4d4874: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d4874u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d4878:
    // 0x4d4878: 0x8135220  j           func_4D4880
label_4d487c:
    if (ctx->pc == 0x4D487Cu) {
        ctx->pc = 0x4D487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4878u;
        // 0x4d487c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4880u;
        goto label_4d4880;
    }
    ctx->pc = 0x4D4878u;
    ctx->pc = 0x4D487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4878u;
    // 0x4d487c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4880u;
    goto label_4d4880;
    ctx->pc = 0x4D4880u;
label_4d4880:
    // 0x4d4880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d4880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d4884:
    // 0x4d4884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d4884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4888:
    // 0x4d4888: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d4888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4d488c:
    // 0x4d488c: 0xc122db4  jal         func_48B6D0
label_4d4890:
    if (ctx->pc == 0x4D4890u) {
        ctx->pc = 0x4D4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D488Cu;
        // 0x4d4890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4894u;
        goto label_4d4894;
    }
    ctx->pc = 0x4D488Cu;
    SET_GPR_U32(ctx, 31, 0x4D4894u);
    ctx->pc = 0x4D4890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D488Cu;
    // 0x4d4890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D488Cu, 0x4D4894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4894u;
label_4d4894:
    // 0x4d4894: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_4d4898:
    if (ctx->pc == 0x4D4898u) {
        ctx->pc = 0x4D4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4894u;
        // 0x4d4898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D489Cu;
        goto label_4d489c;
    }
    ctx->pc = 0x4D4894u;
    {
        const bool branch_taken_0x4d4894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4894) {
            ctx->pc = 0x4D4898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D4894u;
            // 0x4d4898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D48DCu;
            goto label_4d48dc;
        }
    }
    ctx->pc = 0x4D489Cu;
label_4d489c:
    // 0x4d489c: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x4d489cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
label_4d48a0:
    // 0x4d48a0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_4d48a4:
    if (ctx->pc == 0x4D48A4u) {
        ctx->pc = 0x4D48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D48A0u;
        // 0x4d48a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D48A8u;
        goto label_4d48a8;
    }
    ctx->pc = 0x4D48A0u;
    {
        const bool branch_taken_0x4d48a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d48a0) {
            ctx->pc = 0x4D48A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D48A0u;
            // 0x4d48a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D48DCu;
            goto label_4d48dc;
        }
    }
    ctx->pc = 0x4D48A8u;
label_4d48a8:
    // 0x4d48a8: 0xc126d66  jal         func_49B598
label_4d48ac:
    if (ctx->pc == 0x4D48ACu) {
        ctx->pc = 0x4D48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D48A8u;
        // 0x4d48ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D48B0u;
        goto label_4d48b0;
    }
    ctx->pc = 0x4D48A8u;
    SET_GPR_U32(ctx, 31, 0x4D48B0u);
    ctx->pc = 0x4D48ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D48A8u;
    // 0x4d48ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x4D48A8u, 0x4D48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D48B0u;
label_4d48b0:
    // 0x4d48b0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4d48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_4d48b4:
    // 0x4d48b4: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4d48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_4d48b8:
    // 0x4d48b8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x4d48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_4d48bc:
    // 0x4d48bc: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4d48bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
label_4d48c0:
    // 0x4d48c0: 0xc1297fa  jal         func_4A5FE8
label_4d48c4:
    if (ctx->pc == 0x4D48C4u) {
        ctx->pc = 0x4D48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D48C0u;
        // 0x4d48c4: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D48C8u;
        goto label_4d48c8;
    }
    ctx->pc = 0x4D48C0u;
    SET_GPR_U32(ctx, 31, 0x4D48C8u);
    ctx->pc = 0x4D48C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D48C0u;
    // 0x4d48c4: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D48C0u, 0x4D48C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D48C8u;
label_4d48c8:
    // 0x4d48c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4d48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d48cc:
    // 0x4d48cc: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4d48ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
label_4d48d0:
    // 0x4d48d0: 0xa60201bc  sh          $v0, 0x1BC($s0)
    ctx->pc = 0x4d48d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 2));
label_4d48d4:
    // 0x4d48d4: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x4d48d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
label_4d48d8:
    // 0x4d48d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d48d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d48dc:
    // 0x4d48dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d48dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d48e0:
    // 0x4d48e0: 0x3e00008  jr          $ra
label_4d48e4:
    if (ctx->pc == 0x4D48E4u) {
        ctx->pc = 0x4D48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D48E0u;
        // 0x4d48e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D48E8u;
        goto label_4d48e8;
    }
    ctx->pc = 0x4D48E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D48E0u;
        // 0x4d48e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D48E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D48E8u;
label_4d48e8:
    // 0x4d48e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d48e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d48ec:
    // 0x4d48ec: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d48ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d48f0:
    // 0x4d48f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d48f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d48f4:
    // 0x4d48f4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d48f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d48f8:
    // 0x4d48f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d48f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d48fc:
    // 0x4d48fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d48fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4900:
    // 0x4d4900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d4900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d4904:
    // 0x4d4904: 0x24b21048  addiu       $s2, $a1, 0x1048
    ctx->pc = 0x4d4904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4168));
label_4d4908:
    // 0x4d4908: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d4908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d490c:
    // 0x4d490c: 0x24d3105c  addiu       $s3, $a2, 0x105C
    ctx->pc = 0x4d490cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4188));
label_4d4910:
    // 0x4d4910: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d4910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d4914:
    // 0x4d4914: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x4d4914u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d4918:
    // 0x4d4918: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d4918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d491c:
    // 0x4d491c: 0x26230166  addiu       $v1, $s1, 0x166
    ctx->pc = 0x4d491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 358));
label_4d4920:
    // 0x4d4920: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d4920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d4924:
    // 0x4d4924: 0x26300168  addiu       $s0, $s1, 0x168
    ctx->pc = 0x4d4924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
label_4d4928:
    // 0x4d4928: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d4928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4d492c:
    // 0x4d492c: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x4d492cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d4930:
    // 0x4d4930: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d4930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4d4934:
    // 0x4d4934: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x4d4934u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
label_4d4938:
    // 0x4d4938: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d4938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4d493c:
    // 0x4d493c: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4d493cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_4d4940:
    // 0x4d4940: 0x24957928  addiu       $s5, $a0, 0x7928
    ctx->pc = 0x4d4940u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 31016));
label_4d4944:
    // 0x4d4944: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x4d4944u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4948:
    // 0x4d4948: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d4948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d494c:
    // 0x4d494c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4d4950:
    // 0x4d4950: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d4950u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d4954:
    // 0x4d4954: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x4d4954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_4d4958:
    // 0x4d4958: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4d4958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d495c:
    // 0x4d495c: 0x74001a  div         $zero, $v1, $s4
    ctx->pc = 0x4d495cu;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4d4960:
    // 0x4d4960: 0x1812  mflo        $v1
    ctx->pc = 0x4d4960u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4d4964:
    // 0x4d4964: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4d4964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4d4968:
    // 0x4d4968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d4968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d496c:
    // 0x4d496c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d496cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d4970:
    // 0x4d4970: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4d4970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4d4974:
    // 0x4d4974: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d4974u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d4978:
    // 0x4d4978: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d4978u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d497c:
    // 0x4d497c: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
label_4d4980:
    if (ctx->pc == 0x4D4980u) {
        ctx->pc = 0x4D4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D497Cu;
        // 0x4d4980: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4984u;
        goto label_4d4984;
    }
    ctx->pc = 0x4D497Cu;
    {
        const bool branch_taken_0x4d497c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D497Cu;
        // 0x4d4980: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d497c) {
            ctx->pc = 0x4D49D8u;
            goto label_4d49d8;
        }
    }
    ctx->pc = 0x4D4984u;
label_4d4984:
    // 0x4d4984: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d4984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d4988:
    // 0x4d4988: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d4988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4d498c:
    // 0x4d498c: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4d498cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4d4990:
    // 0x4d4990: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d4990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d4994:
    // 0x4d4994: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4d4994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_4d4998:
    // 0x4d4998: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d4998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d499c:
    // 0x4d499c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d499cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d49a0:
    // 0x4d49a0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d49a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d49a4:
    // 0x4d49a4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d49a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d49a8:
    // 0x4d49a8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_4d49ac:
    if (ctx->pc == 0x4D49ACu) {
        ctx->pc = 0x4D49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D49A8u;
        // 0x4d49ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D49B0u;
        goto label_4d49b0;
    }
    ctx->pc = 0x4D49A8u;
    {
        const bool branch_taken_0x4d49a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d49a8) {
            ctx->pc = 0x4D49ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D49A8u;
            // 0x4d49ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D4A10u;
            goto label_4d4a10;
        }
    }
    ctx->pc = 0x4D49B0u;
label_4d49b0:
    // 0x4d49b0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d49b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d49b4:
    // 0x4d49b4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4d49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_4d49b8:
    // 0x4d49b8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4d49b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d49bc:
    // 0x4d49bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d49bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d49c0:
    // 0x4d49c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4d49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4d49c4:
    // 0x4d49c4: 0x40f809  jalr        $v0
label_4d49c8:
    if (ctx->pc == 0x4D49C8u) {
        ctx->pc = 0x4D49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D49C4u;
        // 0x4d49c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D49CCu;
        goto label_4d49cc;
    }
    ctx->pc = 0x4D49C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4D49CCu);
        ctx->pc = 0x4D49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D49C4u;
        // 0x4d49c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D49C4u, 0x4D49CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4D49CCu;
label_4d49cc:
    // 0x4d49cc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_4d49d0:
    if (ctx->pc == 0x4D49D0u) {
        ctx->pc = 0x4D49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D49CCu;
        // 0x4d49d0: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D49D4u;
        goto label_4d49d4;
    }
    ctx->pc = 0x4D49CCu;
    {
        const bool branch_taken_0x4d49cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D49CCu;
        // 0x4d49d0: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d49cc) {
            ctx->pc = 0x4D4958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d4958;
        }
    }
    ctx->pc = 0x4D49D4u;
label_4d49d4:
    // 0x4d49d4: 0x0  nop
    ctx->pc = 0x4d49d4u;
    // NOP
label_4d49d8:
    // 0x4d49d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d49d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d49dc:
    // 0x4d49dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d49dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d49e0:
    // 0x4d49e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d49e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d49e4:
    // 0x4d49e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d49e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d49e8:
    // 0x4d49e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d49e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d49ec:
    // 0x4d49ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d49ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d49f0:
    // 0x4d49f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d49f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d49f4:
    // 0x4d49f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d49f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d49f8:
    // 0x4d49f8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d49f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d49fc:
    // 0x4d49fc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d49fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d4a00:
    // 0x4d4a00: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d4a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d4a04:
    // 0x4d4a04: 0x8122db4  j           func_48B6D0
label_4d4a08:
    if (ctx->pc == 0x4D4A08u) {
        ctx->pc = 0x4D4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4A04u;
        // 0x4d4a08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4A0Cu;
        goto label_4d4a0c;
    }
    ctx->pc = 0x4D4A04u;
    ctx->pc = 0x4D4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4A04u;
    // 0x4d4a08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    sub_0048B6D0_0x48b6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D4A0Cu;
label_4d4a0c:
    // 0x4d4a0c: 0x0  nop
    ctx->pc = 0x4d4a0cu;
    // NOP
label_4d4a10:
    // 0x4d4a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4a14:
    // 0x4d4a14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d4a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4a18:
    // 0x4d4a18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d4a18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d4a1c:
    // 0x4d4a1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d4a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4a20:
    // 0x4d4a20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d4a20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d4a24:
    // 0x4d4a24: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d4a24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d4a28:
    // 0x4d4a28: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d4a28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d4a2c:
    // 0x4d4a2c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d4a2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d4a30:
    // 0x4d4a30: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d4a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d4a34:
    // 0x4d4a34: 0x3e00008  jr          $ra
label_4d4a38:
    if (ctx->pc == 0x4D4A38u) {
        ctx->pc = 0x4D4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4A34u;
        // 0x4d4a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4A3Cu;
        goto label_4d4a3c;
    }
    ctx->pc = 0x4D4A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4A34u;
        // 0x4d4a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D4A3Cu;
label_4d4a3c:
    // 0x4d4a3c: 0x0  nop
    ctx->pc = 0x4d4a3cu;
    // NOP
    ctx->pc = 0x4d4a40u;
}
