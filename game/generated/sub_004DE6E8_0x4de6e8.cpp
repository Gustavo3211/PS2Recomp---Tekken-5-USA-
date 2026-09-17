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

// Function: sub_004DE6E8
// Address: 0x4de6e8 - 0x4de9b8
void sub_004DE6E8_0x4de6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE6E8_0x4de6e8");
#endif

    switch (ctx->pc) {
        case 0x4de710u: goto label_4de710;
        case 0x4de72cu: goto label_4de72c;
        case 0x4de734u: goto label_4de734;
        case 0x4de96cu: goto label_4de96c;
        case 0x4de998u: goto label_4de998;
        case 0x4de9b0u: goto label_4de9b0;
        default: break;
    }

    ctx->pc = 0x4de6e8u;

    // 0x4de6e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4de6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4de6ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4de6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4de6f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4de6f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de6f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4de6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4de6f8: 0x263201b4  addiu       $s2, $s1, 0x1B4
    ctx->pc = 0x4de6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4de6fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4de6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4de700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4de700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4de704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4de704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4de708: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4DE708u;
    SET_GPR_U32(ctx, 31, 0x4DE710u);
    ctx->pc = 0x4DE70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE708u;
    // 0x4de70c: 0x3c13007f  lui         $s3, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4DE708u, 0x4DE710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE710u;
label_4de710:
    // 0x4de710: 0xae621144  sw          $v0, 0x1144($s3)
    ctx->pc = 0x4de710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4420), GPR_U32(ctx, 2));
    // 0x4de714: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4de714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4de718: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4DE718u;
    {
        const bool branch_taken_0x4de718 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE718u;
        // 0x4de71c: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de718) {
            ctx->pc = 0x4DE788u;
            goto label_4de788;
        }
    }
    ctx->pc = 0x4DE720u;
    // 0x4de720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4de720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de724: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4DE724u;
    SET_GPR_U32(ctx, 31, 0x4DE72Cu);
    ctx->pc = 0x4DE728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE724u;
    // 0x4de728: 0x26101120  addiu       $s0, $s0, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4DE724u, 0x4DE72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE72Cu;
label_4de72c:
    // 0x4de72c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4DE72Cu;
    SET_GPR_U32(ctx, 31, 0x4DE734u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4DE72Cu, 0x4DE734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE734u;
label_4de734:
    // 0x4de734: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4de734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de738: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4de738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4de73c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4de73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4de740: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de744: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de748: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4de748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4de74c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de750: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4de750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de754: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4de754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4de758: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4de758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4de75c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de760: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4de760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4de764: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4de764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de768: 0xa6200118  sh          $zero, 0x118($s1)
    ctx->pc = 0x4de768u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4de76c: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4de76cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4de770: 0xa620011c  sh          $zero, 0x11C($s1)
    ctx->pc = 0x4de770u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4de774: 0xa6200120  sh          $zero, 0x120($s1)
    ctx->pc = 0x4de774u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4de778: 0xa62001b6  sh          $zero, 0x1B6($s1)
    ctx->pc = 0x4de778u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4de77c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4de77cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4de780: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4de780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4de784: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4de784u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_4de788:
    // 0x4de788: 0x2622015a  addiu       $v0, $s1, 0x15A
    ctx->pc = 0x4de788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 346));
    // 0x4de78c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4de78cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4de790: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4de790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4de794: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x4de794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4de798: 0x4810009  bgez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4DE798u;
    {
        const bool branch_taken_0x4de798 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4DE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE798u;
        // 0x4de79c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de798) {
            ctx->pc = 0x4DE7C0u;
            goto label_4de7c0;
        }
    }
    ctx->pc = 0x4DE7A0u;
    // 0x4de7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4de7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de7a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4de7a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4de7a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4de7a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de7ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4de7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de7b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4de7b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4de7b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4de7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4de7b8: 0x8137a66  j           func_4DE998
    ctx->pc = 0x4DE7B8u;
    ctx->pc = 0x4DE7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE7B8u;
    // 0x4de7bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE998u;
    goto label_4de998;
    ctx->pc = 0x4DE7C0u;
label_4de7c0:
    // 0x4de7c0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4de7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4de7c4: 0x2627015e  addiu       $a3, $s1, 0x15E
    ctx->pc = 0x4de7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4de7c8: 0x26041120  addiu       $a0, $s0, 0x1120
    ctx->pc = 0x4de7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4384));
    // 0x4de7cc: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4de7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4de7d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4de7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4de7d4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4de7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4de7d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4de7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4de7dc: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4de7dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4de7e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de7e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de7e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4de7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4de7ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de7f0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4de7f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4de7f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4de7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4de7f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4de7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4de7fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de800: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4de800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4de804: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4de804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4de808: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x4de808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x4de80c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DE80Cu;
    {
        const bool branch_taken_0x4de80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE80Cu;
        // 0x4de810: 0x25261124  addiu       $a2, $t1, 0x1124 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de80c) {
            ctx->pc = 0x4DE820u;
            goto label_4de820;
        }
    }
    ctx->pc = 0x4DE814u;
    // 0x4de814: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4de814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DE818u;
    {
        const bool branch_taken_0x4de818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE818u;
        // 0x4de81c: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de818) {
            ctx->pc = 0x4DE82Cu;
            goto label_4de82c;
        }
    }
    ctx->pc = 0x4DE820u;
label_4de820:
    // 0x4de820: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4de820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de824: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4de824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4de828: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4de828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4de82c:
    // 0x4de82c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4de82cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4de830: 0x26101120  addiu       $s0, $s0, 0x1120
    ctx->pc = 0x4de830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4384));
    // 0x4de834: 0x25291124  addiu       $t1, $t1, 0x1124
    ctx->pc = 0x4de834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4388));
    // 0x4de838: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4de838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4de83c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x4de83cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de840: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4de840u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4de844: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4de844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de848: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4de848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de84c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4de84cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4de850: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4de850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4de854: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4de854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4de858: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4de858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4de85c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4de85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4de860: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4de860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de864: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4de864u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4de868: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4de868u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de86c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4de86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de870: 0x3042001c  andi        $v0, $v0, 0x1C
    ctx->pc = 0x4de870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28);
    // 0x4de874: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4de874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4de878: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de87c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de880: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4de880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4de884: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de888: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4de888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de88c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4de88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4de890: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4de890u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4de894: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4de894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4de898: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de89c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4de89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4de8a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de8a4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4de8a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de8a8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4de8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4de8ac: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4de8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4de8b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de8b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4de8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4de8b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de8bc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4de8bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de8c0: 0x24420420  addiu       $v0, $v0, 0x420
    ctx->pc = 0x4de8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
    // 0x4de8c4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4de8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4de8c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de8cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4de8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4de8d0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4de8d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de8d4: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x4de8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4de8d8: 0x8e671144  lw          $a3, 0x1144($s3)
    ctx->pc = 0x4de8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4420)));
    // 0x4de8dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4de8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de8e0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4de8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4de8e4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4de8e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4de8e8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4de8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4de8ec: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4de8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4de8f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4de8f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4de8f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de8f8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4de8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4de8fc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4de8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4de900: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4de900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4de904: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4de904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4de908: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4de908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4de90c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4de90cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de910: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4de910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4de914: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4de914u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4de918: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4de918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4de91c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4de91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4de920: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4de920u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4de924: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4de924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4de928: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4de928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4de92c: 0x85270000  lh          $a3, 0x0($t1)
    ctx->pc = 0x4de92cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4de930: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4de930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4de934: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4de934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4de938: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4de938u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4de93c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4de93cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4de940: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4de940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4de944: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4de944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4de948: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4de948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4de94c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4de94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4de950: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4de950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4de954: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4de954u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4de958: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4de958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4de95c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4de95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4de960: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4de960u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4de964: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4DE964u;
    SET_GPR_U32(ctx, 31, 0x4DE96Cu);
    ctx->pc = 0x4DE968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE964u;
    // 0x4de968: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4DE964u, 0x4DE96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE96Cu;
label_4de96c:
    // 0x4de96c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4de96cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4de970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4de970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4de974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de978: 0xa622011c  sh          $v0, 0x11C($s1)
    ctx->pc = 0x4de978u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x4de97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4de97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4de980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4de984: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4de984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4de988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4de988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4de98c: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4DE98Cu;
    ctx->pc = 0x4DE990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE98Cu;
    // 0x4de990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4DE994u;
    // 0x4de994: 0x0  nop
    ctx->pc = 0x4de994u;
    // NOP
label_4de998:
    // 0x4de998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4de998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4de99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4de9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de9a4: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4DE9A4u;
    ctx->pc = 0x4DE9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE9A4u;
    // 0x4de9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DE9ACu;
    // 0x4de9ac: 0x0  nop
    ctx->pc = 0x4de9acu;
    // NOP
label_4de9b0:
    // 0x4de9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE9B8u;
}
