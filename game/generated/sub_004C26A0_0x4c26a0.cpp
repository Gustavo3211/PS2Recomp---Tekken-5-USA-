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

// Function: sub_004C26A0
// Address: 0x4c26a0 - 0x4c28c0
void sub_004C26A0_0x4c26a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C26A0_0x4c26a0");
#endif

    switch (ctx->pc) {
        case 0x4c26a0u: goto label_4c26a0;
        case 0x4c26a4u: goto label_4c26a4;
        case 0x4c26a8u: goto label_4c26a8;
        case 0x4c26acu: goto label_4c26ac;
        case 0x4c26b0u: goto label_4c26b0;
        case 0x4c26b4u: goto label_4c26b4;
        case 0x4c26b8u: goto label_4c26b8;
        case 0x4c26bcu: goto label_4c26bc;
        case 0x4c26c0u: goto label_4c26c0;
        case 0x4c26c4u: goto label_4c26c4;
        case 0x4c26c8u: goto label_4c26c8;
        case 0x4c26ccu: goto label_4c26cc;
        case 0x4c26d0u: goto label_4c26d0;
        case 0x4c26d4u: goto label_4c26d4;
        case 0x4c26d8u: goto label_4c26d8;
        case 0x4c26dcu: goto label_4c26dc;
        case 0x4c26e0u: goto label_4c26e0;
        case 0x4c26e4u: goto label_4c26e4;
        case 0x4c26e8u: goto label_4c26e8;
        case 0x4c26ecu: goto label_4c26ec;
        case 0x4c26f0u: goto label_4c26f0;
        case 0x4c26f4u: goto label_4c26f4;
        case 0x4c26f8u: goto label_4c26f8;
        case 0x4c26fcu: goto label_4c26fc;
        case 0x4c2700u: goto label_4c2700;
        case 0x4c2704u: goto label_4c2704;
        case 0x4c2708u: goto label_4c2708;
        case 0x4c270cu: goto label_4c270c;
        case 0x4c2710u: goto label_4c2710;
        case 0x4c2714u: goto label_4c2714;
        case 0x4c2718u: goto label_4c2718;
        case 0x4c271cu: goto label_4c271c;
        case 0x4c2720u: goto label_4c2720;
        case 0x4c2724u: goto label_4c2724;
        case 0x4c2728u: goto label_4c2728;
        case 0x4c272cu: goto label_4c272c;
        case 0x4c2730u: goto label_4c2730;
        case 0x4c2734u: goto label_4c2734;
        case 0x4c2738u: goto label_4c2738;
        case 0x4c273cu: goto label_4c273c;
        case 0x4c2740u: goto label_4c2740;
        case 0x4c2744u: goto label_4c2744;
        case 0x4c2748u: goto label_4c2748;
        case 0x4c274cu: goto label_4c274c;
        case 0x4c2750u: goto label_4c2750;
        case 0x4c2754u: goto label_4c2754;
        case 0x4c2758u: goto label_4c2758;
        case 0x4c275cu: goto label_4c275c;
        case 0x4c2760u: goto label_4c2760;
        case 0x4c2764u: goto label_4c2764;
        case 0x4c2768u: goto label_4c2768;
        case 0x4c276cu: goto label_4c276c;
        case 0x4c2770u: goto label_4c2770;
        case 0x4c2774u: goto label_4c2774;
        case 0x4c2778u: goto label_4c2778;
        case 0x4c277cu: goto label_4c277c;
        case 0x4c2780u: goto label_4c2780;
        case 0x4c2784u: goto label_4c2784;
        case 0x4c2788u: goto label_4c2788;
        case 0x4c278cu: goto label_4c278c;
        case 0x4c2790u: goto label_4c2790;
        case 0x4c2794u: goto label_4c2794;
        case 0x4c2798u: goto label_4c2798;
        case 0x4c279cu: goto label_4c279c;
        case 0x4c27a0u: goto label_4c27a0;
        case 0x4c27a4u: goto label_4c27a4;
        case 0x4c27a8u: goto label_4c27a8;
        case 0x4c27acu: goto label_4c27ac;
        case 0x4c27b0u: goto label_4c27b0;
        case 0x4c27b4u: goto label_4c27b4;
        case 0x4c27b8u: goto label_4c27b8;
        case 0x4c27bcu: goto label_4c27bc;
        case 0x4c27c0u: goto label_4c27c0;
        case 0x4c27c4u: goto label_4c27c4;
        case 0x4c27c8u: goto label_4c27c8;
        case 0x4c27ccu: goto label_4c27cc;
        case 0x4c27d0u: goto label_4c27d0;
        case 0x4c27d4u: goto label_4c27d4;
        case 0x4c27d8u: goto label_4c27d8;
        case 0x4c27dcu: goto label_4c27dc;
        case 0x4c27e0u: goto label_4c27e0;
        case 0x4c27e4u: goto label_4c27e4;
        case 0x4c27e8u: goto label_4c27e8;
        case 0x4c27ecu: goto label_4c27ec;
        case 0x4c27f0u: goto label_4c27f0;
        case 0x4c27f4u: goto label_4c27f4;
        case 0x4c27f8u: goto label_4c27f8;
        case 0x4c27fcu: goto label_4c27fc;
        case 0x4c2800u: goto label_4c2800;
        case 0x4c2804u: goto label_4c2804;
        case 0x4c2808u: goto label_4c2808;
        case 0x4c280cu: goto label_4c280c;
        case 0x4c2810u: goto label_4c2810;
        case 0x4c2814u: goto label_4c2814;
        case 0x4c2818u: goto label_4c2818;
        case 0x4c281cu: goto label_4c281c;
        case 0x4c2820u: goto label_4c2820;
        case 0x4c2824u: goto label_4c2824;
        case 0x4c2828u: goto label_4c2828;
        case 0x4c282cu: goto label_4c282c;
        case 0x4c2830u: goto label_4c2830;
        case 0x4c2834u: goto label_4c2834;
        case 0x4c2838u: goto label_4c2838;
        case 0x4c283cu: goto label_4c283c;
        case 0x4c2840u: goto label_4c2840;
        case 0x4c2844u: goto label_4c2844;
        case 0x4c2848u: goto label_4c2848;
        case 0x4c284cu: goto label_4c284c;
        case 0x4c2850u: goto label_4c2850;
        case 0x4c2854u: goto label_4c2854;
        case 0x4c2858u: goto label_4c2858;
        case 0x4c285cu: goto label_4c285c;
        case 0x4c2860u: goto label_4c2860;
        case 0x4c2864u: goto label_4c2864;
        case 0x4c2868u: goto label_4c2868;
        case 0x4c286cu: goto label_4c286c;
        case 0x4c2870u: goto label_4c2870;
        case 0x4c2874u: goto label_4c2874;
        case 0x4c2878u: goto label_4c2878;
        case 0x4c287cu: goto label_4c287c;
        case 0x4c2880u: goto label_4c2880;
        case 0x4c2884u: goto label_4c2884;
        case 0x4c2888u: goto label_4c2888;
        case 0x4c288cu: goto label_4c288c;
        case 0x4c2890u: goto label_4c2890;
        case 0x4c2894u: goto label_4c2894;
        case 0x4c2898u: goto label_4c2898;
        case 0x4c289cu: goto label_4c289c;
        case 0x4c28a0u: goto label_4c28a0;
        case 0x4c28a4u: goto label_4c28a4;
        case 0x4c28a8u: goto label_4c28a8;
        case 0x4c28acu: goto label_4c28ac;
        case 0x4c28b0u: goto label_4c28b0;
        case 0x4c28b4u: goto label_4c28b4;
        case 0x4c28b8u: goto label_4c28b8;
        case 0x4c28bcu: goto label_4c28bc;
        default: break;
    }

    ctx->pc = 0x4c26a0u;

label_4c26a0:
    // 0x4c26a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c26a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c26a4:
    // 0x4c26a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c26a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4c26a8:
    // 0x4c26a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c26a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c26ac:
    // 0x4c26ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c26acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4c26b0:
    // 0x4c26b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c26b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c26b4:
    // 0x4c26b4: 0xc1232f2  jal         func_48CBC8
label_4c26b8:
    if (ctx->pc == 0x4C26B8u) {
        ctx->pc = 0x4C26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C26B4u;
        // 0x4c26b8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C26BCu;
        goto label_4c26bc;
    }
    ctx->pc = 0x4C26B4u;
    SET_GPR_U32(ctx, 31, 0x4C26BCu);
    ctx->pc = 0x4C26B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C26B4u;
    // 0x4c26b8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C26B4u, 0x4C26BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C26BCu;
label_4c26bc:
    // 0x4c26bc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c26bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4c26c0:
    // 0x4c26c0: 0xac620eb4  sw          $v0, 0xEB4($v1)
    ctx->pc = 0x4c26c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3764), GPR_U32(ctx, 2));
label_4c26c4:
    // 0x4c26c4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c26c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c26c8:
    // 0x4c26c8: 0x440004c  bltz        $v0, . + 4 + (0x4C << 2)
label_4c26cc:
    if (ctx->pc == 0x4C26CCu) {
        ctx->pc = 0x4C26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C26C8u;
        // 0x4c26cc: 0x260a015e  addiu       $t2, $s0, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C26D0u;
        goto label_4c26d0;
    }
    ctx->pc = 0x4C26C8u;
    {
        const bool branch_taken_0x4c26c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C26C8u;
        // 0x4c26cc: 0x260a015e  addiu       $t2, $s0, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c26c8) {
            ctx->pc = 0x4C27FCu;
            goto label_4c27fc;
        }
    }
    ctx->pc = 0x4C26D0u;
label_4c26d0:
    // 0x4c26d0: 0xc12b642  jal         func_4AD908
label_4c26d4:
    if (ctx->pc == 0x4C26D4u) {
        ctx->pc = 0x4C26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C26D0u;
        // 0x4c26d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C26D8u;
        goto label_4c26d8;
    }
    ctx->pc = 0x4C26D0u;
    SET_GPR_U32(ctx, 31, 0x4C26D8u);
    ctx->pc = 0x4C26D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C26D0u;
    // 0x4c26d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C26D0u, 0x4C26D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C26D8u;
label_4c26d8:
    // 0x4c26d8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c26d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4c26dc:
    // 0x4c26dc: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x4c26dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
label_4c26e0:
    // 0x4c26e0: 0x260801be  addiu       $t0, $s0, 0x1BE
    ctx->pc = 0x4c26e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 446));
label_4c26e4:
    // 0x4c26e4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4c26e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c26e8:
    // 0x4c26e8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c26e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4c26ec:
    // 0x4c26ec: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c26ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4c26f0:
    // 0x4c26f0: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4c26f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_4c26f4:
    // 0x4c26f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c26f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4c26f8:
    // 0x4c26f8: 0x24e770e0  addiu       $a3, $a3, 0x70E0
    ctx->pc = 0x4c26f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28896));
label_4c26fc:
    // 0x4c26fc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c26fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c2700:
    // 0x4c2700: 0x260a015e  addiu       $t2, $s0, 0x15E
    ctx->pc = 0x4c2700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
label_4c2704:
    // 0x4c2704: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c2704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4c2708:
    // 0x4c2708: 0x260901b6  addiu       $t1, $s0, 0x1B6
    ctx->pc = 0x4c2708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
label_4c270c:
    // 0x4c270c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c270cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4c2710:
    // 0x4c2710: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c2710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4c2714:
    // 0x4c2714: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c2714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c2718:
    // 0x4c2718: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4c2718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4c271c:
    // 0x4c271c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c2720:
    // 0x4c2720: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c2720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4c2724:
    // 0x4c2724: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c2724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4c2728:
    // 0x4c2728: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c2728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4c272c:
    // 0x4c272c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c272cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c2730:
    // 0x4c2730: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c2730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c2734:
    // 0x4c2734: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4c2734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4c2738:
    // 0x4c2738: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4c2738u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4c273c:
    // 0x4c273c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4c273cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_4c2740:
    // 0x4c2740: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c2740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4c2744:
    // 0x4c2744: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c2744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4c2748:
    // 0x4c2748: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c2748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c274c:
    // 0x4c274c: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x4c274cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
label_4c2750:
    // 0x4c2750: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4c2750u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c2754:
    // 0x4c2754: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4c2754u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
label_4c2758:
    // 0x4c2758: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c2758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4c275c:
    // 0x4c275c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c2760:
    // 0x4c2760: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c2760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c2764:
    // 0x4c2764: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c2768:
    // 0x4c2768: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c276c:
    // 0x4c276c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c276cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4c2770:
    // 0x4c2770: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c2774:
    // 0x4c2774: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c2774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c2778:
    // 0x4c2778: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x4c2778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
label_4c277c:
    // 0x4c277c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c2780:
    // 0x4c2780: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c2784:
    // 0x4c2784: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c2784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4c2788:
    // 0x4c2788: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c278c:
    // 0x4c278c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c278cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c2790:
    // 0x4c2790: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c2790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c2794:
    // 0x4c2794: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x4c2794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_4c2798:
    // 0x4c2798: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c2798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c279c:
    // 0x4c279c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c279cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c27a0:
    // 0x4c27a0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4c27a4:
    // 0x4c27a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c27a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c27a8:
    // 0x4c27a8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c27a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c27ac:
    // 0x4c27ac: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4c27acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_4c27b0:
    // 0x4c27b0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c27b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4c27b4:
    // 0x4c27b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c27b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c27b8:
    // 0x4c27b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c27b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4c27bc:
    // 0x4c27bc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c27bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c27c0:
    // 0x4c27c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c27c4:
    // 0x4c27c4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c27c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4c27c8:
    // 0x4c27c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c27cc:
    // 0x4c27cc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4c27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4c27d0:
    // 0x4c27d0: 0x94430010  lhu         $v1, 0x10($v0)
    ctx->pc = 0x4c27d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_4c27d4:
    // 0x4c27d4: 0xa600015c  sh          $zero, 0x15C($s0)
    ctx->pc = 0x4c27d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 0));
label_4c27d8:
    // 0x4c27d8: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4c27d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
label_4c27dc:
    // 0x4c27dc: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x4c27dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
label_4c27e0:
    // 0x4c27e0: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4c27e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4c27e4:
    // 0x4c27e4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4c27e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4c27e8:
    // 0x4c27e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4c27e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4c27ec:
    // 0x4c27ec: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4c27ecu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c27f0:
    // 0x4c27f0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4c27f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c27f4:
    // 0x4c27f4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4c27f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_4c27f8:
    // 0x4c27f8: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4c27f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_4c27fc:
    // 0x4c27fc: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c27fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4c2800:
    // 0x4c2800: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
label_4c2804:
    if (ctx->pc == 0x4C2804u) {
        ctx->pc = 0x4C2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2800u;
        // 0x4c2804: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2808u;
        goto label_4c2808;
    }
    ctx->pc = 0x4C2800u;
    {
        const bool branch_taken_0x4c2800 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2800u;
        // 0x4c2804: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2800) {
            ctx->pc = 0x4C2848u;
            goto label_4c2848;
        }
    }
    ctx->pc = 0x4C2808u;
label_4c2808:
    // 0x4c2808: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c2808u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4c280c:
    // 0x4c280c: 0x25470ea4  addiu       $a3, $t2, 0xEA4
    ctx->pc = 0x4c280cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 3748));
label_4c2810:
    // 0x4c2810: 0x25280ea8  addiu       $t0, $t1, 0xEA8
    ctx->pc = 0x4c2810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 3752));
label_4c2814:
    // 0x4c2814: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4c2814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4c2818:
    // 0x4c2818: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c2818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4c281c:
    // 0x4c281c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4c281cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4c2820:
    // 0x4c2820: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c2820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4c2824:
    // 0x4c2824: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c2824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c2828:
    // 0x4c2828: 0x34a5041f  ori         $a1, $a1, 0x41F
    ctx->pc = 0x4c2828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1055);
label_4c282c:
    // 0x4c282c: 0x3062041f  andi        $v0, $v1, 0x41F
    ctx->pc = 0x4c282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1055);
label_4c2830:
    // 0x4c2830: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c2830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4c2834:
    // 0x4c2834: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4c2834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_4c2838:
    // 0x4c2838: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4c2838u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4c283c:
    // 0x4c283c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4c283cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4c2840:
    // 0x4c2840: 0x10000010  b           . + 4 + (0x10 << 2)
label_4c2844:
    if (ctx->pc == 0x4C2844u) {
        ctx->pc = 0x4C2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2840u;
        // 0x4c2844: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2848u;
        goto label_4c2848;
    }
    ctx->pc = 0x4C2840u;
    {
        const bool branch_taken_0x4c2840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2840u;
        // 0x4c2844: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2840) {
            ctx->pc = 0x4C2884u;
            goto label_4c2884;
        }
    }
    ctx->pc = 0x4C2848u;
label_4c2848:
    // 0x4c2848: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c2848u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4c284c:
    // 0x4c284c: 0x25460ea4  addiu       $a2, $t2, 0xEA4
    ctx->pc = 0x4c284cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 3748));
label_4c2850:
    // 0x4c2850: 0x25270ea8  addiu       $a3, $t1, 0xEA8
    ctx->pc = 0x4c2850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 3752));
label_4c2854:
    // 0x4c2854: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4c2854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c2858:
    // 0x4c2858: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c2858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4c285c:
    // 0x4c285c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4c2860:
    // 0x4c2860: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c2860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4c2864:
    // 0x4c2864: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c2864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4c2868:
    // 0x4c2868: 0x34a5041e  ori         $a1, $a1, 0x41E
    ctx->pc = 0x4c2868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1054);
label_4c286c:
    // 0x4c286c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c286cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4c2870:
    // 0x4c2870: 0x34630483  ori         $v1, $v1, 0x483
    ctx->pc = 0x4c2870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1155);
label_4c2874:
    // 0x4c2874: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4c2874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_4c2878:
    // 0x4c2878: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c2878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4c287c:
    // 0x4c287c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4c287cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_4c2880:
    // 0x4c2880: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4c2880u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4c2884:
    // 0x4c2884: 0x25450ea4  addiu       $a1, $t2, 0xEA4
    ctx->pc = 0x4c2884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 3748));
label_4c2888:
    // 0x4c2888: 0x25260ea8  addiu       $a2, $t1, 0xEA8
    ctx->pc = 0x4c2888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3752));
label_4c288c:
    // 0x4c288c: 0xc12b698  jal         func_4ADA60
label_4c2890:
    if (ctx->pc == 0x4C2890u) {
        ctx->pc = 0x4C2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C288Cu;
        // 0x4c2890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2894u;
        goto label_4c2894;
    }
    ctx->pc = 0x4C288Cu;
    SET_GPR_U32(ctx, 31, 0x4C2894u);
    ctx->pc = 0x4C2890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C288Cu;
    // 0x4c2890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4C288Cu, 0x4C2894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2894u;
label_4c2894:
    // 0x4c2894: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4c2894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4c2898:
    // 0x4c2898: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x4c2898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_4c289c:
    // 0x4c289c: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_4c28a0:
    if (ctx->pc == 0x4C28A0u) {
        ctx->pc = 0x4C28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C289Cu;
        // 0x4c28a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C28A4u;
        goto label_4c28a4;
    }
    ctx->pc = 0x4C289Cu;
    {
        const bool branch_taken_0x4c289c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c289c) {
            ctx->pc = 0x4C28A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C289Cu;
            // 0x4c28a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C296Cu;
            return;
        }
    }
    ctx->pc = 0x4C28A4u;
label_4c28a4:
    // 0x4c28a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4c28a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c28a8:
    // 0x4c28a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c28a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4c28ac:
    // 0x4c28ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c28acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c28b0:
    // 0x4c28b0: 0x8c63b480  lw          $v1, -0x4B80($v1)
    ctx->pc = 0x4c28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947968)));
label_4c28b4:
    // 0x4c28b4: 0x600008  jr          $v1
label_4c28b8:
    if (ctx->pc == 0x4C28B8u) {
        ctx->pc = 0x4C28BCu;
        goto label_4c28bc;
    }
    ctx->pc = 0x4C28B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C28B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4C28BCu;
label_4c28bc:
    // 0x4c28bc: 0x0  nop
    ctx->pc = 0x4c28bcu;
    // NOP
    ctx->pc = 0x4c28c0u;
}
