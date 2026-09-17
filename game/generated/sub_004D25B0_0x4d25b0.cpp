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

// Function: sub_004D25B0
// Address: 0x4d25b0 - 0x4d26d0
void sub_004D25B0_0x4d25b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D25B0_0x4d25b0");
#endif

    switch (ctx->pc) {
        case 0x4d25b0u: goto label_4d25b0;
        case 0x4d25b4u: goto label_4d25b4;
        case 0x4d25b8u: goto label_4d25b8;
        case 0x4d25bcu: goto label_4d25bc;
        case 0x4d25c0u: goto label_4d25c0;
        case 0x4d25c4u: goto label_4d25c4;
        case 0x4d25c8u: goto label_4d25c8;
        case 0x4d25ccu: goto label_4d25cc;
        case 0x4d25d0u: goto label_4d25d0;
        case 0x4d25d4u: goto label_4d25d4;
        case 0x4d25d8u: goto label_4d25d8;
        case 0x4d25dcu: goto label_4d25dc;
        case 0x4d25e0u: goto label_4d25e0;
        case 0x4d25e4u: goto label_4d25e4;
        case 0x4d25e8u: goto label_4d25e8;
        case 0x4d25ecu: goto label_4d25ec;
        case 0x4d25f0u: goto label_4d25f0;
        case 0x4d25f4u: goto label_4d25f4;
        case 0x4d25f8u: goto label_4d25f8;
        case 0x4d25fcu: goto label_4d25fc;
        case 0x4d2600u: goto label_4d2600;
        case 0x4d2604u: goto label_4d2604;
        case 0x4d2608u: goto label_4d2608;
        case 0x4d260cu: goto label_4d260c;
        case 0x4d2610u: goto label_4d2610;
        case 0x4d2614u: goto label_4d2614;
        case 0x4d2618u: goto label_4d2618;
        case 0x4d261cu: goto label_4d261c;
        case 0x4d2620u: goto label_4d2620;
        case 0x4d2624u: goto label_4d2624;
        case 0x4d2628u: goto label_4d2628;
        case 0x4d262cu: goto label_4d262c;
        case 0x4d2630u: goto label_4d2630;
        case 0x4d2634u: goto label_4d2634;
        case 0x4d2638u: goto label_4d2638;
        case 0x4d263cu: goto label_4d263c;
        case 0x4d2640u: goto label_4d2640;
        case 0x4d2644u: goto label_4d2644;
        case 0x4d2648u: goto label_4d2648;
        case 0x4d264cu: goto label_4d264c;
        case 0x4d2650u: goto label_4d2650;
        case 0x4d2654u: goto label_4d2654;
        case 0x4d2658u: goto label_4d2658;
        case 0x4d265cu: goto label_4d265c;
        case 0x4d2660u: goto label_4d2660;
        case 0x4d2664u: goto label_4d2664;
        case 0x4d2668u: goto label_4d2668;
        case 0x4d266cu: goto label_4d266c;
        case 0x4d2670u: goto label_4d2670;
        case 0x4d2674u: goto label_4d2674;
        case 0x4d2678u: goto label_4d2678;
        case 0x4d267cu: goto label_4d267c;
        case 0x4d2680u: goto label_4d2680;
        case 0x4d2684u: goto label_4d2684;
        case 0x4d2688u: goto label_4d2688;
        case 0x4d268cu: goto label_4d268c;
        case 0x4d2690u: goto label_4d2690;
        case 0x4d2694u: goto label_4d2694;
        case 0x4d2698u: goto label_4d2698;
        case 0x4d269cu: goto label_4d269c;
        case 0x4d26a0u: goto label_4d26a0;
        case 0x4d26a4u: goto label_4d26a4;
        case 0x4d26a8u: goto label_4d26a8;
        case 0x4d26acu: goto label_4d26ac;
        case 0x4d26b0u: goto label_4d26b0;
        case 0x4d26b4u: goto label_4d26b4;
        case 0x4d26b8u: goto label_4d26b8;
        case 0x4d26bcu: goto label_4d26bc;
        case 0x4d26c0u: goto label_4d26c0;
        case 0x4d26c4u: goto label_4d26c4;
        case 0x4d26c8u: goto label_4d26c8;
        case 0x4d26ccu: goto label_4d26cc;
        default: break;
    }

    ctx->pc = 0x4d25b0u;

label_4d25b0:
    // 0x4d25b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d25b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d25b4:
    // 0x4d25b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d25b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d25b8:
    // 0x4d25b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d25b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d25bc:
    // 0x4d25bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d25bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d25c0:
    // 0x4d25c0: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d25c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
label_4d25c4:
    // 0x4d25c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d25c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d25c8:
    // 0x4d25c8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d25c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d25cc:
    // 0x4d25cc: 0x4420037  bltzl       $v0, . + 4 + (0x37 << 2)
label_4d25d0:
    if (ctx->pc == 0x4D25D0u) {
        ctx->pc = 0x4D25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D25CCu;
        // 0x4d25d0: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D25D4u;
        goto label_4d25d4;
    }
    ctx->pc = 0x4D25CCu;
    {
        const bool branch_taken_0x4d25cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d25cc) {
            ctx->pc = 0x4D25D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D25CCu;
            // 0x4d25d0: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D26ACu;
            goto label_4d26ac;
        }
    }
    ctx->pc = 0x4D25D4u;
label_4d25d4:
    // 0x4d25d4: 0xc12b642  jal         func_4AD908
label_4d25d8:
    if (ctx->pc == 0x4D25D8u) {
        ctx->pc = 0x4D25DCu;
        goto label_4d25dc;
    }
    ctx->pc = 0x4D25D4u;
    SET_GPR_U32(ctx, 31, 0x4D25DCu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D25D4u, 0x4D25DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D25DCu;
label_4d25dc:
    // 0x4d25dc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d25dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d25e0:
    // 0x4d25e0: 0x24a5102c  addiu       $a1, $a1, 0x102C
    ctx->pc = 0x4d25e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4140));
label_4d25e4:
    // 0x4d25e4: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4d25e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_4d25e8:
    // 0x4d25e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d25ec:
    // 0x4d25ec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d25ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4d25f0:
    // 0x4d25f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d25f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d25f4:
    // 0x4d25f4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d25f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
label_4d25f8:
    // 0x4d25f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d25f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d25fc:
    // 0x4d25fc: 0x24e71040  addiu       $a3, $a3, 0x1040
    ctx->pc = 0x4d25fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4160));
label_4d2600:
    // 0x4d2600: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d2604:
    // 0x4d2604: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x4d2604u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4d2608:
    // 0x4d2608: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d2608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d260c:
    // 0x4d260c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d260cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d2610:
    // 0x4d2610: 0x240804a1  addiu       $t0, $zero, 0x4A1
    ctx->pc = 0x4d2610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1185));
label_4d2614:
    // 0x4d2614: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x4d2614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_4d2618:
    // 0x4d2618: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d2618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d261c:
    // 0x4d261c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d261cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d2620:
    // 0x4d2620: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4d2620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4d2624:
    // 0x4d2624: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d2624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d2628:
    // 0x4d2628: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d262c:
    // 0x4d262c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d262cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d2630:
    // 0x4d2630: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d2634:
    // 0x4d2634: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d2634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d2638:
    // 0x4d2638: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d2638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d263c:
    // 0x4d263c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d2640:
    // 0x4d2640: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d2644:
    // 0x4d2644: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d2644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d2648:
    // 0x4d2648: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d2648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d264c:
    // 0x4d264c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d264cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d2650:
    // 0x4d2650: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d2650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d2654:
    // 0x4d2654: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d2654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d2658:
    // 0x4d2658: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4d2658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4d265c:
    // 0x4d265c: 0x24217580  addiu       $at, $at, 0x7580
    ctx->pc = 0x4d265cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30080));
label_4d2660:
    // 0x4d2660: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4d2660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4d2664:
    // 0x4d2664: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d2664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d2668:
    // 0x4d2668: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4d2668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d266c:
    // 0x4d266c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4d266cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4d2670:
    // 0x4d2670: 0xa603011c  sh          $v1, 0x11C($s0)
    ctx->pc = 0x4d2670u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 3));
label_4d2674:
    // 0x4d2674: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4d2674u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_4d2678:
    // 0x4d2678: 0xa60a0158  sh          $t2, 0x158($s0)
    ctx->pc = 0x4d2678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 10));
label_4d267c:
    // 0x4d267c: 0xa608000c  sh          $t0, 0xC($s0)
    ctx->pc = 0x4d267cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 8));
label_4d2680:
    // 0x4d2680: 0xa609015e  sh          $t1, 0x15E($s0)
    ctx->pc = 0x4d2680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 9));
label_4d2684:
    // 0x4d2684: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4d2684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4d2688:
    // 0x4d2688: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4d2688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4d268c:
    // 0x4d268c: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4d268cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d2690:
    // 0x4d2690: 0xc127e84  jal         func_49FA10
label_4d2694:
    if (ctx->pc == 0x4D2694u) {
        ctx->pc = 0x4D2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2690u;
        // 0x4d2694: 0xa6000162  sh          $zero, 0x162($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D2698u;
        goto label_4d2698;
    }
    ctx->pc = 0x4D2690u;
    SET_GPR_U32(ctx, 31, 0x4D2698u);
    ctx->pc = 0x4D2694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2690u;
    // 0x4d2694: 0xa6000162  sh          $zero, 0x162($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4D2690u, 0x4D2698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2698u;
label_4d2698:
    // 0x4d2698: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d2698u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4d269c:
    // 0x4d269c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d269cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d26a0:
    // 0x4d26a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d26a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d26a4:
    // 0x4d26a4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d26a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d26a8:
    // 0x4d26a8: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4d26a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d26ac:
    // 0x4d26ac: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x4d26acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_4d26b0:
    // 0x4d26b0: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
label_4d26b4:
    if (ctx->pc == 0x4D26B4u) {
        ctx->pc = 0x4D26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D26B0u;
        // 0x4d26b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D26B8u;
        goto label_4d26b8;
    }
    ctx->pc = 0x4D26B0u;
    {
        const bool branch_taken_0x4d26b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d26b0) {
            ctx->pc = 0x4D26B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D26B0u;
            // 0x4d26b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D286Cu;
            return;
        }
    }
    ctx->pc = 0x4D26B8u;
label_4d26b8:
    // 0x4d26b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4d26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d26bc:
    // 0x4d26bc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d26bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4d26c0:
    // 0x4d26c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d26c4:
    // 0x4d26c4: 0x8c63b760  lw          $v1, -0x48A0($v1)
    ctx->pc = 0x4d26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948704)));
label_4d26c8:
    // 0x4d26c8: 0x600008  jr          $v1
label_4d26cc:
    if (ctx->pc == 0x4D26CCu) {
        ctx->pc = 0x4D26D0u;
        goto label_fallthrough_0x4d26c8;
    }
    ctx->pc = 0x4D26C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D26C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4d26c8:
    ctx->pc = 0x4D26D0u;
}
