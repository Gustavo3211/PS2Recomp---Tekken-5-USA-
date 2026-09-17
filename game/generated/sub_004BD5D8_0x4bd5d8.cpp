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

// Function: sub_004BD5D8
// Address: 0x4bd5d8 - 0x4bd728
void sub_004BD5D8_0x4bd5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD5D8_0x4bd5d8");
#endif

    switch (ctx->pc) {
        case 0x4bd5d8u: goto label_4bd5d8;
        case 0x4bd5dcu: goto label_4bd5dc;
        case 0x4bd5e0u: goto label_4bd5e0;
        case 0x4bd5e4u: goto label_4bd5e4;
        case 0x4bd5e8u: goto label_4bd5e8;
        case 0x4bd5ecu: goto label_4bd5ec;
        case 0x4bd5f0u: goto label_4bd5f0;
        case 0x4bd5f4u: goto label_4bd5f4;
        case 0x4bd5f8u: goto label_4bd5f8;
        case 0x4bd5fcu: goto label_4bd5fc;
        case 0x4bd600u: goto label_4bd600;
        case 0x4bd604u: goto label_4bd604;
        case 0x4bd608u: goto label_4bd608;
        case 0x4bd60cu: goto label_4bd60c;
        case 0x4bd610u: goto label_4bd610;
        case 0x4bd614u: goto label_4bd614;
        case 0x4bd618u: goto label_4bd618;
        case 0x4bd61cu: goto label_4bd61c;
        case 0x4bd620u: goto label_4bd620;
        case 0x4bd624u: goto label_4bd624;
        case 0x4bd628u: goto label_4bd628;
        case 0x4bd62cu: goto label_4bd62c;
        case 0x4bd630u: goto label_4bd630;
        case 0x4bd634u: goto label_4bd634;
        case 0x4bd638u: goto label_4bd638;
        case 0x4bd63cu: goto label_4bd63c;
        case 0x4bd640u: goto label_4bd640;
        case 0x4bd644u: goto label_4bd644;
        case 0x4bd648u: goto label_4bd648;
        case 0x4bd64cu: goto label_4bd64c;
        case 0x4bd650u: goto label_4bd650;
        case 0x4bd654u: goto label_4bd654;
        case 0x4bd658u: goto label_4bd658;
        case 0x4bd65cu: goto label_4bd65c;
        case 0x4bd660u: goto label_4bd660;
        case 0x4bd664u: goto label_4bd664;
        case 0x4bd668u: goto label_4bd668;
        case 0x4bd66cu: goto label_4bd66c;
        case 0x4bd670u: goto label_4bd670;
        case 0x4bd674u: goto label_4bd674;
        case 0x4bd678u: goto label_4bd678;
        case 0x4bd67cu: goto label_4bd67c;
        case 0x4bd680u: goto label_4bd680;
        case 0x4bd684u: goto label_4bd684;
        case 0x4bd688u: goto label_4bd688;
        case 0x4bd68cu: goto label_4bd68c;
        case 0x4bd690u: goto label_4bd690;
        case 0x4bd694u: goto label_4bd694;
        case 0x4bd698u: goto label_4bd698;
        case 0x4bd69cu: goto label_4bd69c;
        case 0x4bd6a0u: goto label_4bd6a0;
        case 0x4bd6a4u: goto label_4bd6a4;
        case 0x4bd6a8u: goto label_4bd6a8;
        case 0x4bd6acu: goto label_4bd6ac;
        case 0x4bd6b0u: goto label_4bd6b0;
        case 0x4bd6b4u: goto label_4bd6b4;
        case 0x4bd6b8u: goto label_4bd6b8;
        case 0x4bd6bcu: goto label_4bd6bc;
        case 0x4bd6c0u: goto label_4bd6c0;
        case 0x4bd6c4u: goto label_4bd6c4;
        case 0x4bd6c8u: goto label_4bd6c8;
        case 0x4bd6ccu: goto label_4bd6cc;
        case 0x4bd6d0u: goto label_4bd6d0;
        case 0x4bd6d4u: goto label_4bd6d4;
        case 0x4bd6d8u: goto label_4bd6d8;
        case 0x4bd6dcu: goto label_4bd6dc;
        case 0x4bd6e0u: goto label_4bd6e0;
        case 0x4bd6e4u: goto label_4bd6e4;
        case 0x4bd6e8u: goto label_4bd6e8;
        case 0x4bd6ecu: goto label_4bd6ec;
        case 0x4bd6f0u: goto label_4bd6f0;
        case 0x4bd6f4u: goto label_4bd6f4;
        case 0x4bd6f8u: goto label_4bd6f8;
        case 0x4bd6fcu: goto label_4bd6fc;
        case 0x4bd700u: goto label_4bd700;
        case 0x4bd704u: goto label_4bd704;
        case 0x4bd708u: goto label_4bd708;
        case 0x4bd70cu: goto label_4bd70c;
        case 0x4bd710u: goto label_4bd710;
        case 0x4bd714u: goto label_4bd714;
        case 0x4bd718u: goto label_4bd718;
        case 0x4bd71cu: goto label_4bd71c;
        case 0x4bd720u: goto label_4bd720;
        case 0x4bd724u: goto label_4bd724;
        default: break;
    }

    ctx->pc = 0x4bd5d8u;

label_4bd5d8:
    // 0x4bd5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bd5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4bd5dc:
    // 0x4bd5dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bd5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4bd5e0:
    // 0x4bd5e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bd5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bd5e4:
    // 0x4bd5e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bd5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4bd5e8:
    // 0x4bd5e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bd5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4bd5ec:
    // 0x4bd5ec: 0xc1232f2  jal         func_48CBC8
label_4bd5f0:
    if (ctx->pc == 0x4BD5F0u) {
        ctx->pc = 0x4BD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD5ECu;
        // 0x4bd5f0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BD5F4u;
        goto label_4bd5f4;
    }
    ctx->pc = 0x4BD5ECu;
    SET_GPR_U32(ctx, 31, 0x4BD5F4u);
    ctx->pc = 0x4BD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD5ECu;
    // 0x4bd5f0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4BD5ECu, 0x4BD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD5F4u;
label_4bd5f4:
    // 0x4bd5f4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bd5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4bd5f8:
    // 0x4bd5f8: 0xac620e50  sw          $v0, 0xE50($v1)
    ctx->pc = 0x4bd5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3664), GPR_U32(ctx, 2));
label_4bd5fc:
    // 0x4bd5fc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4bd5fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4bd600:
    // 0x4bd600: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
label_4bd604:
    if (ctx->pc == 0x4BD604u) {
        ctx->pc = 0x4BD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD600u;
        // 0x4bd604: 0x3c09007f  lui         $t1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BD608u;
        goto label_4bd608;
    }
    ctx->pc = 0x4BD600u;
    {
        const bool branch_taken_0x4bd600 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD600u;
        // 0x4bd604: 0x3c09007f  lui         $t1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd600) {
            ctx->pc = 0x4BD6B4u;
            goto label_4bd6b4;
        }
    }
    ctx->pc = 0x4BD608u;
label_4bd608:
    // 0x4bd608: 0xc12b642  jal         func_4AD908
label_4bd60c:
    if (ctx->pc == 0x4BD60Cu) {
        ctx->pc = 0x4BD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD608u;
        // 0x4bd60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BD610u;
        goto label_4bd610;
    }
    ctx->pc = 0x4BD608u;
    SET_GPR_U32(ctx, 31, 0x4BD610u);
    ctx->pc = 0x4BD60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD608u;
    // 0x4bd60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BD608u, 0x4BD610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD610u;
label_4bd610:
    // 0x4bd610: 0xc12b5b0  jal         func_4AD6C0
label_4bd614:
    if (ctx->pc == 0x4BD614u) {
        ctx->pc = 0x4BD618u;
        goto label_4bd618;
    }
    ctx->pc = 0x4BD610u;
    SET_GPR_U32(ctx, 31, 0x4BD618u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4BD610u, 0x4BD618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD618u;
label_4bd618:
    // 0x4bd618: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4bd618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
label_4bd61c:
    // 0x4bd61c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4bd61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4bd620:
    // 0x4bd620: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4bd620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4bd624:
    // 0x4bd624: 0x24a50e38  addiu       $a1, $a1, 0xE38
    ctx->pc = 0x4bd624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3640));
label_4bd628:
    // 0x4bd628: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4bd628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_4bd62c:
    // 0x4bd62c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4bd62cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4bd630:
    // 0x4bd630: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bd630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4bd634:
    // 0x4bd634: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bd634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4bd638:
    // 0x4bd638: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bd638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4bd63c:
    // 0x4bd63c: 0x24c60e54  addiu       $a2, $a2, 0xE54
    ctx->pc = 0x4bd63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3668));
label_4bd640:
    // 0x4bd640: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4bd644:
    // 0x4bd644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bd644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bd648:
    // 0x4bd648: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4bd64c:
    // 0x4bd64c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4bd650:
    // 0x4bd650: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4bd654:
    // 0x4bd654: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bd654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4bd658:
    // 0x4bd658: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4bd658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4bd65c:
    // 0x4bd65c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bd65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4bd660:
    // 0x4bd660: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4bd664:
    // 0x4bd664: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bd664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4bd668:
    // 0x4bd668: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bd668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4bd66c:
    // 0x4bd66c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4bd670:
    // 0x4bd670: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4bd670u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4bd674:
    // 0x4bd674: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4bd674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4bd678:
    // 0x4bd678: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4bd678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4bd67c:
    // 0x4bd67c: 0x24216fe8  addiu       $at, $at, 0x6FE8
    ctx->pc = 0x4bd67cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28648));
label_4bd680:
    // 0x4bd680: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4bd680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4bd684:
    // 0x4bd684: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4bd684u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4bd688:
    // 0x4bd688: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4bd688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4bd68c:
    // 0x4bd68c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4bd68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4bd690:
    // 0x4bd690: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4bd690u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4bd694:
    // 0x4bd694: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4bd694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4bd698:
    // 0x4bd698: 0xa603011c  sh          $v1, 0x11C($s0)
    ctx->pc = 0x4bd698u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 3));
label_4bd69c:
    // 0x4bd69c: 0xc127e84  jal         func_49FA10
label_4bd6a0:
    if (ctx->pc == 0x4BD6A0u) {
        ctx->pc = 0x4BD6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD69Cu;
        // 0x4bd6a0: 0xa60001b6  sh          $zero, 0x1B6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BD6A4u;
        goto label_4bd6a4;
    }
    ctx->pc = 0x4BD69Cu;
    SET_GPR_U32(ctx, 31, 0x4BD6A4u);
    ctx->pc = 0x4BD6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD69Cu;
    // 0x4bd6a0: 0xa60001b6  sh          $zero, 0x1B6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4BD69Cu, 0x4BD6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD6A4u;
label_4bd6a4:
    // 0x4bd6a4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4bd6a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4bd6a8:
    // 0x4bd6a8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4bd6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4bd6ac:
    // 0x4bd6ac: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4bd6acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4bd6b0:
    // 0x4bd6b0: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4bd6b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4bd6b4:
    // 0x4bd6b4: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4bd6b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
label_4bd6b8:
    // 0x4bd6b8: 0x25290e44  addiu       $t1, $t1, 0xE44
    ctx->pc = 0x4bd6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3652));
label_4bd6bc:
    // 0x4bd6bc: 0x254a0e48  addiu       $t2, $t2, 0xE48
    ctx->pc = 0x4bd6bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3656));
label_4bd6c0:
    // 0x4bd6c0: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4bd6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4bd6c4:
    // 0x4bd6c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4bd6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4bd6c8:
    // 0x4bd6c8: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4bd6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4bd6cc:
    // 0x4bd6cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4bd6d0:
    // 0x4bd6d0: 0x34630498  ori         $v1, $v1, 0x498
    ctx->pc = 0x4bd6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1176);
label_4bd6d4:
    // 0x4bd6d4: 0x3442049d  ori         $v0, $v0, 0x49D
    ctx->pc = 0x4bd6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1181);
label_4bd6d8:
    // 0x4bd6d8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4bd6d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4bd6dc:
    // 0x4bd6dc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bd6dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4bd6e0:
    // 0x4bd6e0: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4bd6e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_4bd6e4:
    // 0x4bd6e4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4bd6e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4bd6e8:
    // 0x4bd6e8: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4bd6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_4bd6ec:
    // 0x4bd6ec: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4bd6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4bd6f0:
    // 0x4bd6f0: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4bd6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
label_4bd6f4:
    // 0x4bd6f4: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4bd6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4bd6f8:
    // 0x4bd6f8: 0xc12b698  jal         func_4ADA60
label_4bd6fc:
    if (ctx->pc == 0x4BD6FCu) {
        ctx->pc = 0x4BD6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD6F8u;
        // 0x4bd6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BD700u;
        goto label_4bd700;
    }
    ctx->pc = 0x4BD6F8u;
    SET_GPR_U32(ctx, 31, 0x4BD700u);
    ctx->pc = 0x4BD6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD6F8u;
    // 0x4bd6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4BD6F8u, 0x4BD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD700u;
label_4bd700:
    // 0x4bd700: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4bd700u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4bd704:
    // 0x4bd704: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x4bd704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4bd708:
    // 0x4bd708: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_4bd70c:
    if (ctx->pc == 0x4BD70Cu) {
        ctx->pc = 0x4BD70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD708u;
        // 0x4bd70c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BD710u;
        goto label_4bd710;
    }
    ctx->pc = 0x4BD708u;
    {
        const bool branch_taken_0x4bd708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd708) {
            ctx->pc = 0x4BD70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BD708u;
            // 0x4bd70c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BD7A4u;
            return;
        }
    }
    ctx->pc = 0x4BD710u;
label_4bd710:
    // 0x4bd710: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4bd710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bd714:
    // 0x4bd714: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4bd714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4bd718:
    // 0x4bd718: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bd718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4bd71c:
    // 0x4bd71c: 0x8c63b390  lw          $v1, -0x4C70($v1)
    ctx->pc = 0x4bd71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947728)));
label_4bd720:
    // 0x4bd720: 0x600008  jr          $v1
label_4bd724:
    if (ctx->pc == 0x4BD724u) {
        ctx->pc = 0x4BD728u;
        goto label_fallthrough_0x4bd720;
    }
    ctx->pc = 0x4BD720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BD720u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4bd720:
    ctx->pc = 0x4BD728u;
}
