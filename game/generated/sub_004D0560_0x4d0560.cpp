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

// Function: sub_004D0560
// Address: 0x4d0560 - 0x4d0688
void sub_004D0560_0x4d0560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0560_0x4d0560");
#endif

    switch (ctx->pc) {
        case 0x4d0560u: goto label_4d0560;
        case 0x4d0564u: goto label_4d0564;
        case 0x4d0568u: goto label_4d0568;
        case 0x4d056cu: goto label_4d056c;
        case 0x4d0570u: goto label_4d0570;
        case 0x4d0574u: goto label_4d0574;
        case 0x4d0578u: goto label_4d0578;
        case 0x4d057cu: goto label_4d057c;
        case 0x4d0580u: goto label_4d0580;
        case 0x4d0584u: goto label_4d0584;
        case 0x4d0588u: goto label_4d0588;
        case 0x4d058cu: goto label_4d058c;
        case 0x4d0590u: goto label_4d0590;
        case 0x4d0594u: goto label_4d0594;
        case 0x4d0598u: goto label_4d0598;
        case 0x4d059cu: goto label_4d059c;
        case 0x4d05a0u: goto label_4d05a0;
        case 0x4d05a4u: goto label_4d05a4;
        case 0x4d05a8u: goto label_4d05a8;
        case 0x4d05acu: goto label_4d05ac;
        case 0x4d05b0u: goto label_4d05b0;
        case 0x4d05b4u: goto label_4d05b4;
        case 0x4d05b8u: goto label_4d05b8;
        case 0x4d05bcu: goto label_4d05bc;
        case 0x4d05c0u: goto label_4d05c0;
        case 0x4d05c4u: goto label_4d05c4;
        case 0x4d05c8u: goto label_4d05c8;
        case 0x4d05ccu: goto label_4d05cc;
        case 0x4d05d0u: goto label_4d05d0;
        case 0x4d05d4u: goto label_4d05d4;
        case 0x4d05d8u: goto label_4d05d8;
        case 0x4d05dcu: goto label_4d05dc;
        case 0x4d05e0u: goto label_4d05e0;
        case 0x4d05e4u: goto label_4d05e4;
        case 0x4d05e8u: goto label_4d05e8;
        case 0x4d05ecu: goto label_4d05ec;
        case 0x4d05f0u: goto label_4d05f0;
        case 0x4d05f4u: goto label_4d05f4;
        case 0x4d05f8u: goto label_4d05f8;
        case 0x4d05fcu: goto label_4d05fc;
        case 0x4d0600u: goto label_4d0600;
        case 0x4d0604u: goto label_4d0604;
        case 0x4d0608u: goto label_4d0608;
        case 0x4d060cu: goto label_4d060c;
        case 0x4d0610u: goto label_4d0610;
        case 0x4d0614u: goto label_4d0614;
        case 0x4d0618u: goto label_4d0618;
        case 0x4d061cu: goto label_4d061c;
        case 0x4d0620u: goto label_4d0620;
        case 0x4d0624u: goto label_4d0624;
        case 0x4d0628u: goto label_4d0628;
        case 0x4d062cu: goto label_4d062c;
        case 0x4d0630u: goto label_4d0630;
        case 0x4d0634u: goto label_4d0634;
        case 0x4d0638u: goto label_4d0638;
        case 0x4d063cu: goto label_4d063c;
        case 0x4d0640u: goto label_4d0640;
        case 0x4d0644u: goto label_4d0644;
        case 0x4d0648u: goto label_4d0648;
        case 0x4d064cu: goto label_4d064c;
        case 0x4d0650u: goto label_4d0650;
        case 0x4d0654u: goto label_4d0654;
        case 0x4d0658u: goto label_4d0658;
        case 0x4d065cu: goto label_4d065c;
        case 0x4d0660u: goto label_4d0660;
        case 0x4d0664u: goto label_4d0664;
        case 0x4d0668u: goto label_4d0668;
        case 0x4d066cu: goto label_4d066c;
        case 0x4d0670u: goto label_4d0670;
        case 0x4d0674u: goto label_4d0674;
        case 0x4d0678u: goto label_4d0678;
        case 0x4d067cu: goto label_4d067c;
        case 0x4d0680u: goto label_4d0680;
        case 0x4d0684u: goto label_4d0684;
        default: break;
    }

    ctx->pc = 0x4d0560u;

label_4d0560:
    // 0x4d0560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d0560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d0564:
    // 0x4d0564: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d0564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d0568:
    // 0x4d0568: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d0568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d056c:
    // 0x4d056c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d0570:
    // 0x4d0570: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d0570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
label_4d0574:
    // 0x4d0574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d0574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d0578:
    // 0x4d0578: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d0578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d057c:
    // 0x4d057c: 0x4420039  bltzl       $v0, . + 4 + (0x39 << 2)
label_4d0580:
    if (ctx->pc == 0x4D0580u) {
        ctx->pc = 0x4D0580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D057Cu;
        // 0x4d0580: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0584u;
        goto label_4d0584;
    }
    ctx->pc = 0x4D057Cu;
    {
        const bool branch_taken_0x4d057c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d057c) {
            ctx->pc = 0x4D0580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D057Cu;
            // 0x4d0580: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0664u;
            goto label_4d0664;
        }
    }
    ctx->pc = 0x4D0584u;
label_4d0584:
    // 0x4d0584: 0xc12b642  jal         func_4AD908
label_4d0588:
    if (ctx->pc == 0x4D0588u) {
        ctx->pc = 0x4D058Cu;
        goto label_4d058c;
    }
    ctx->pc = 0x4D0584u;
    SET_GPR_U32(ctx, 31, 0x4D058Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D0584u, 0x4D058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D058Cu;
label_4d058c:
    // 0x4d058c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d058cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d0590:
    // 0x4d0590: 0x24a50fec  addiu       $a1, $a1, 0xFEC
    ctx->pc = 0x4d0590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4076));
label_4d0594:
    // 0x4d0594: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4d0594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_4d0598:
    // 0x4d0598: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d0598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d059c:
    // 0x4d059c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d059cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4d05a0:
    // 0x4d05a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d05a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d05a4:
    // 0x4d05a4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d05a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
label_4d05a8:
    // 0x4d05a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d05a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d05ac:
    // 0x4d05ac: 0x24e71008  addiu       $a3, $a3, 0x1008
    ctx->pc = 0x4d05acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4104));
label_4d05b0:
    // 0x4d05b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d05b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d05b4:
    // 0x4d05b4: 0x26080164  addiu       $t0, $s0, 0x164
    ctx->pc = 0x4d05b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
label_4d05b8:
    // 0x4d05b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d05bc:
    // 0x4d05bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d05bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d05c0:
    // 0x4d05c0: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x4d05c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4d05c4:
    // 0x4d05c4: 0x240b049e  addiu       $t3, $zero, 0x49E
    ctx->pc = 0x4d05c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1182));
label_4d05c8:
    // 0x4d05c8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d05c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d05cc:
    // 0x4d05cc: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x4d05ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_4d05d0:
    // 0x4d05d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d05d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d05d4:
    // 0x4d05d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4d05d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4d05d8:
    // 0x4d05d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d05d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d05dc:
    // 0x4d05dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d05dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d05e0:
    // 0x4d05e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d05e4:
    // 0x4d05e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d05e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d05e8:
    // 0x4d05e8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d05e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d05ec:
    // 0x4d05ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d05f0:
    // 0x4d05f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d05f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d05f4:
    // 0x4d05f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d05f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d05f8:
    // 0x4d05f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d05fc:
    // 0x4d05fc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d05fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d0600:
    // 0x4d0600: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d0600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d0604:
    // 0x4d0604: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d0604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d0608:
    // 0x4d0608: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d0608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d060c:
    // 0x4d060c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4d060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4d0610:
    // 0x4d0610: 0x242173d8  addiu       $at, $at, 0x73D8
    ctx->pc = 0x4d0610u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29656));
label_4d0614:
    // 0x4d0614: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4d0614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4d0618:
    // 0x4d0618: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d0618u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d061c:
    // 0x4d061c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4d061cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d0620:
    // 0x4d0620: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4d0620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4d0624:
    // 0x4d0624: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4d0624u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
label_4d0628:
    // 0x4d0628: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4d0628u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_4d062c:
    // 0x4d062c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4d062cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d0630:
    // 0x4d0630: 0xa6090158  sh          $t1, 0x158($s0)
    ctx->pc = 0x4d0630u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 9));
label_4d0634:
    // 0x4d0634: 0xa602011c  sh          $v0, 0x11C($s0)
    ctx->pc = 0x4d0634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 2));
label_4d0638:
    // 0x4d0638: 0xa60b000c  sh          $t3, 0xC($s0)
    ctx->pc = 0x4d0638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 11));
label_4d063c:
    // 0x4d063c: 0xa60a015e  sh          $t2, 0x15E($s0)
    ctx->pc = 0x4d063cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 10));
label_4d0640:
    // 0x4d0640: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4d0640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4d0644:
    // 0x4d0644: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4d0644u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4d0648:
    // 0x4d0648: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4d0648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d064c:
    // 0x4d064c: 0xc127e84  jal         func_49FA10
label_4d0650:
    if (ctx->pc == 0x4D0650u) {
        ctx->pc = 0x4D0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D064Cu;
        // 0x4d0650: 0xa6000162  sh          $zero, 0x162($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0654u;
        goto label_4d0654;
    }
    ctx->pc = 0x4D064Cu;
    SET_GPR_U32(ctx, 31, 0x4D0654u);
    ctx->pc = 0x4D0650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D064Cu;
    // 0x4d0650: 0xa6000162  sh          $zero, 0x162($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4D064Cu, 0x4D0654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0654u;
label_4d0654:
    // 0x4d0654: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d0654u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d0658:
    // 0x4d0658: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d0658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d065c:
    // 0x4d065c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d065cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d0660:
    // 0x4d0660: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4d0660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d0664:
    // 0x4d0664: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x4d0664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_4d0668:
    // 0x4d0668: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
label_4d066c:
    if (ctx->pc == 0x4D066Cu) {
        ctx->pc = 0x4D066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0668u;
        // 0x4d066c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D0670u;
        goto label_4d0670;
    }
    ctx->pc = 0x4D0668u;
    {
        const bool branch_taken_0x4d0668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0668) {
            ctx->pc = 0x4D066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0668u;
            // 0x4d066c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0824u;
            return;
        }
    }
    ctx->pc = 0x4D0670u;
label_4d0670:
    // 0x4d0670: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4d0670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d0674:
    // 0x4d0674: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d0674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4d0678:
    // 0x4d0678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d0678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d067c:
    // 0x4d067c: 0x8c63b6d0  lw          $v1, -0x4930($v1)
    ctx->pc = 0x4d067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948560)));
label_4d0680:
    // 0x4d0680: 0x600008  jr          $v1
label_4d0684:
    if (ctx->pc == 0x4D0684u) {
        ctx->pc = 0x4D0688u;
        goto label_fallthrough_0x4d0680;
    }
    ctx->pc = 0x4D0680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D0680u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4d0680:
    ctx->pc = 0x4D0688u;
}
