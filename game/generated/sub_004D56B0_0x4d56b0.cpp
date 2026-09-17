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

// Function: sub_004D56B0
// Address: 0x4d56b0 - 0x4d5870
void sub_004D56B0_0x4d56b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D56B0_0x4d56b0");
#endif

    switch (ctx->pc) {
        case 0x4d56b0u: goto label_4d56b0;
        case 0x4d56b4u: goto label_4d56b4;
        case 0x4d56b8u: goto label_4d56b8;
        case 0x4d56bcu: goto label_4d56bc;
        case 0x4d56c0u: goto label_4d56c0;
        case 0x4d56c4u: goto label_4d56c4;
        case 0x4d56c8u: goto label_4d56c8;
        case 0x4d56ccu: goto label_4d56cc;
        case 0x4d56d0u: goto label_4d56d0;
        case 0x4d56d4u: goto label_4d56d4;
        case 0x4d56d8u: goto label_4d56d8;
        case 0x4d56dcu: goto label_4d56dc;
        case 0x4d56e0u: goto label_4d56e0;
        case 0x4d56e4u: goto label_4d56e4;
        case 0x4d56e8u: goto label_4d56e8;
        case 0x4d56ecu: goto label_4d56ec;
        case 0x4d56f0u: goto label_4d56f0;
        case 0x4d56f4u: goto label_4d56f4;
        case 0x4d56f8u: goto label_4d56f8;
        case 0x4d56fcu: goto label_4d56fc;
        case 0x4d5700u: goto label_4d5700;
        case 0x4d5704u: goto label_4d5704;
        case 0x4d5708u: goto label_4d5708;
        case 0x4d570cu: goto label_4d570c;
        case 0x4d5710u: goto label_4d5710;
        case 0x4d5714u: goto label_4d5714;
        case 0x4d5718u: goto label_4d5718;
        case 0x4d571cu: goto label_4d571c;
        case 0x4d5720u: goto label_4d5720;
        case 0x4d5724u: goto label_4d5724;
        case 0x4d5728u: goto label_4d5728;
        case 0x4d572cu: goto label_4d572c;
        case 0x4d5730u: goto label_4d5730;
        case 0x4d5734u: goto label_4d5734;
        case 0x4d5738u: goto label_4d5738;
        case 0x4d573cu: goto label_4d573c;
        case 0x4d5740u: goto label_4d5740;
        case 0x4d5744u: goto label_4d5744;
        case 0x4d5748u: goto label_4d5748;
        case 0x4d574cu: goto label_4d574c;
        case 0x4d5750u: goto label_4d5750;
        case 0x4d5754u: goto label_4d5754;
        case 0x4d5758u: goto label_4d5758;
        case 0x4d575cu: goto label_4d575c;
        case 0x4d5760u: goto label_4d5760;
        case 0x4d5764u: goto label_4d5764;
        case 0x4d5768u: goto label_4d5768;
        case 0x4d576cu: goto label_4d576c;
        case 0x4d5770u: goto label_4d5770;
        case 0x4d5774u: goto label_4d5774;
        case 0x4d5778u: goto label_4d5778;
        case 0x4d577cu: goto label_4d577c;
        case 0x4d5780u: goto label_4d5780;
        case 0x4d5784u: goto label_4d5784;
        case 0x4d5788u: goto label_4d5788;
        case 0x4d578cu: goto label_4d578c;
        case 0x4d5790u: goto label_4d5790;
        case 0x4d5794u: goto label_4d5794;
        case 0x4d5798u: goto label_4d5798;
        case 0x4d579cu: goto label_4d579c;
        case 0x4d57a0u: goto label_4d57a0;
        case 0x4d57a4u: goto label_4d57a4;
        case 0x4d57a8u: goto label_4d57a8;
        case 0x4d57acu: goto label_4d57ac;
        case 0x4d57b0u: goto label_4d57b0;
        case 0x4d57b4u: goto label_4d57b4;
        case 0x4d57b8u: goto label_4d57b8;
        case 0x4d57bcu: goto label_4d57bc;
        case 0x4d57c0u: goto label_4d57c0;
        case 0x4d57c4u: goto label_4d57c4;
        case 0x4d57c8u: goto label_4d57c8;
        case 0x4d57ccu: goto label_4d57cc;
        case 0x4d57d0u: goto label_4d57d0;
        case 0x4d57d4u: goto label_4d57d4;
        case 0x4d57d8u: goto label_4d57d8;
        case 0x4d57dcu: goto label_4d57dc;
        case 0x4d57e0u: goto label_4d57e0;
        case 0x4d57e4u: goto label_4d57e4;
        case 0x4d57e8u: goto label_4d57e8;
        case 0x4d57ecu: goto label_4d57ec;
        case 0x4d57f0u: goto label_4d57f0;
        case 0x4d57f4u: goto label_4d57f4;
        case 0x4d57f8u: goto label_4d57f8;
        case 0x4d57fcu: goto label_4d57fc;
        case 0x4d5800u: goto label_4d5800;
        case 0x4d5804u: goto label_4d5804;
        case 0x4d5808u: goto label_4d5808;
        case 0x4d580cu: goto label_4d580c;
        case 0x4d5810u: goto label_4d5810;
        case 0x4d5814u: goto label_4d5814;
        case 0x4d5818u: goto label_4d5818;
        case 0x4d581cu: goto label_4d581c;
        case 0x4d5820u: goto label_4d5820;
        case 0x4d5824u: goto label_4d5824;
        case 0x4d5828u: goto label_4d5828;
        case 0x4d582cu: goto label_4d582c;
        case 0x4d5830u: goto label_4d5830;
        case 0x4d5834u: goto label_4d5834;
        case 0x4d5838u: goto label_4d5838;
        case 0x4d583cu: goto label_4d583c;
        case 0x4d5840u: goto label_4d5840;
        case 0x4d5844u: goto label_4d5844;
        case 0x4d5848u: goto label_4d5848;
        case 0x4d584cu: goto label_4d584c;
        case 0x4d5850u: goto label_4d5850;
        case 0x4d5854u: goto label_4d5854;
        case 0x4d5858u: goto label_4d5858;
        case 0x4d585cu: goto label_4d585c;
        case 0x4d5860u: goto label_4d5860;
        case 0x4d5864u: goto label_4d5864;
        case 0x4d5868u: goto label_4d5868;
        case 0x4d586cu: goto label_4d586c;
        default: break;
    }

    ctx->pc = 0x4d56b0u;

label_4d56b0:
    // 0x4d56b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d56b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d56b4:
    // 0x4d56b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d56b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d56b8:
    // 0x4d56b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d56b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d56bc:
    // 0x4d56bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d56bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d56c0:
    // 0x4d56c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d56c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d56c4:
    // 0x4d56c4: 0xc1232f2  jal         func_48CBC8
label_4d56c8:
    if (ctx->pc == 0x4D56C8u) {
        ctx->pc = 0x4D56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D56C4u;
        // 0x4d56c8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D56CCu;
        goto label_4d56cc;
    }
    ctx->pc = 0x4D56C4u;
    SET_GPR_U32(ctx, 31, 0x4D56CCu);
    ctx->pc = 0x4D56C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D56C4u;
    // 0x4d56c8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4D56C4u, 0x4D56CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D56CCu;
label_4d56cc:
    // 0x4d56cc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4d56d0:
    // 0x4d56d0: 0xac62108c  sw          $v0, 0x108C($v1)
    ctx->pc = 0x4d56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4236), GPR_U32(ctx, 2));
label_4d56d4:
    // 0x4d56d4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d56d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d56d8:
    // 0x4d56d8: 0x4420059  bltzl       $v0, . + 4 + (0x59 << 2)
label_4d56dc:
    if (ctx->pc == 0x4D56DCu) {
        ctx->pc = 0x4D56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D56D8u;
        // 0x4d56dc: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D56E0u;
        goto label_4d56e0;
    }
    ctx->pc = 0x4D56D8u;
    {
        const bool branch_taken_0x4d56d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d56d8) {
            ctx->pc = 0x4D56DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D56D8u;
            // 0x4d56dc: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D5840u;
            goto label_4d5840;
        }
    }
    ctx->pc = 0x4D56E0u;
label_4d56e0:
    // 0x4d56e0: 0xc12b642  jal         func_4AD908
label_4d56e4:
    if (ctx->pc == 0x4D56E4u) {
        ctx->pc = 0x4D56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D56E0u;
        // 0x4d56e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D56E8u;
        goto label_4d56e8;
    }
    ctx->pc = 0x4D56E0u;
    SET_GPR_U32(ctx, 31, 0x4D56E8u);
    ctx->pc = 0x4D56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D56E0u;
    // 0x4d56e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D56E0u, 0x4D56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D56E8u;
label_4d56e8:
    // 0x4d56e8: 0xc12b5b0  jal         func_4AD6C0
label_4d56ec:
    if (ctx->pc == 0x4D56ECu) {
        ctx->pc = 0x4D56F0u;
        goto label_4d56f0;
    }
    ctx->pc = 0x4D56E8u;
    SET_GPR_U32(ctx, 31, 0x4D56F0u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4D56E8u, 0x4D56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D56F0u;
label_4d56f0:
    // 0x4d56f0: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4d56f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
label_4d56f4:
    // 0x4d56f4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d56f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d56f8:
    // 0x4d56f8: 0x24c61078  addiu       $a2, $a2, 0x1078
    ctx->pc = 0x4d56f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4216));
label_4d56fc:
    // 0x4d56fc: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x4d56fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_4d5700:
    // 0x4d5700: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d5700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4d5704:
    // 0x4d5704: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4d5704u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_4d5708:
    // 0x4d5708: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x4d5708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
label_4d570c:
    // 0x4d570c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d570cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d5710:
    // 0x4d5710: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d5710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_4d5714:
    // 0x4d5714: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d5718:
    // 0x4d5718: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d571c:
    // 0x4d571c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d571cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d5720:
    // 0x4d5720: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d5724:
    // 0x4d5724: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4d5724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d5728:
    // 0x4d5728: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d5728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d572c:
    // 0x4d572c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_4d5730:
    // 0x4d5730: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d5734:
    // 0x4d5734: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d5734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d5738:
    // 0x4d5738: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d5738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d573c:
    // 0x4d573c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d573cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d5740:
    // 0x4d5740: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d5740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d5744:
    // 0x4d5744: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d5744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d5748:
    // 0x4d5748: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4d5748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4d574c:
    // 0x4d574c: 0x24217a80  addiu       $at, $at, 0x7A80
    ctx->pc = 0x4d574cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31360));
label_4d5750:
    // 0x4d5750: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4d5750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4d5754:
    // 0x4d5754: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d5754u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d5758:
    // 0x4d5758: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4d5758u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
label_4d575c:
    // 0x4d575c: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x4d575cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_4d5760:
    // 0x4d5760: 0xa6050164  sh          $a1, 0x164($s0)
    ctx->pc = 0x4d5760u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 5));
label_4d5764:
    // 0x4d5764: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4d5764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d5768:
    // 0x4d5768: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d5768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4d576c:
    // 0x4d576c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d576cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d5770:
    // 0x4d5770: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d5770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_4d5774:
    // 0x4d5774: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d5778:
    // 0x4d5778: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d577c:
    // 0x4d577c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d577cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d5780:
    // 0x4d5780: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d5780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d5784:
    // 0x4d5784: 0x860701be  lh          $a3, 0x1BE($s0)
    ctx->pc = 0x4d5784u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_4d5788:
    // 0x4d5788: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d5788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d578c:
    // 0x4d578c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d578cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d5790:
    // 0x4d5790: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4d5790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_4d5794:
    // 0x4d5794: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d5794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d5798:
    // 0x4d5798: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4d5798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_4d579c:
    // 0x4d579c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d579cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4d57a0:
    // 0x4d57a0: 0x94a57a70  lhu         $a1, 0x7A70($a1)
    ctx->pc = 0x4d57a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 31344)));
label_4d57a4:
    // 0x4d57a4: 0xa605000c  sh          $a1, 0xC($s0)
    ctx->pc = 0x4d57a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 5));
label_4d57a8:
    // 0x4d57a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d57a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4d57ac:
    // 0x4d57ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d57acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d57b0:
    // 0x4d57b0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4d57b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4d57b4:
    // 0x4d57b4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d57b8:
    // 0x4d57b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d57b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d57bc:
    // 0x4d57bc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d57bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d57c0:
    // 0x4d57c0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4d57c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4d57c4:
    // 0x4d57c4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d57c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_4d57c8:
    // 0x4d57c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d57c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d57cc:
    // 0x4d57cc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d57ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d57d0:
    // 0x4d57d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d57d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d57d4:
    // 0x4d57d4: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4d57d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d57d8:
    // 0x4d57d8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4d57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4d57dc:
    // 0x4d57dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4d57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4d57e0:
    // 0x4d57e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d57e4:
    // 0x4d57e4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d57e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_4d57e8:
    // 0x4d57e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d57e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d57ec:
    // 0x4d57ec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d57f0:
    // 0x4d57f0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d57f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d57f4:
    // 0x4d57f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d57f8:
    // 0x4d57f8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d57f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d57fc:
    // 0x4d57fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d5800:
    // 0x4d5800: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4d5800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4d5804:
    // 0x4d5804: 0x24217a88  addiu       $at, $at, 0x7A88
    ctx->pc = 0x4d5804u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31368));
label_4d5808:
    // 0x4d5808: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4d5808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4d580c:
    // 0x4d580c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4d580cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d5810:
    // 0x4d5810: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d5810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d5814:
    // 0x4d5814: 0xa6050118  sh          $a1, 0x118($s0)
    ctx->pc = 0x4d5814u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 5));
label_4d5818:
    // 0x4d5818: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d5818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d581c:
    // 0x4d581c: 0xa603011c  sh          $v1, 0x11C($s0)
    ctx->pc = 0x4d581cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 3));
label_4d5820:
    // 0x4d5820: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x4d5820u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_4d5824:
    // 0x4d5824: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d5824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4d5828:
    // 0x4d5828: 0xc127e84  jal         func_49FA10
label_4d582c:
    if (ctx->pc == 0x4D582Cu) {
        ctx->pc = 0x4D582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5828u;
        // 0x4d582c: 0xa6050120  sh          $a1, 0x120($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D5830u;
        goto label_4d5830;
    }
    ctx->pc = 0x4D5828u;
    SET_GPR_U32(ctx, 31, 0x4D5830u);
    ctx->pc = 0x4D582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5828u;
    // 0x4d582c: 0xa6050120  sh          $a1, 0x120($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4D5828u, 0x4D5830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5830u;
label_4d5830:
    // 0x4d5830: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d5830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d5834:
    // 0x4d5834: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d5834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d5838:
    // 0x4d5838: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d5838u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d583c:
    // 0x4d583c: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4d583cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d5840:
    // 0x4d5840: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d5840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d5844:
    // 0x4d5844: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d5844u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d5848:
    // 0x4d5848: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x4d5848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4d584c:
    // 0x4d584c: 0x50600038  beql        $v1, $zero, . + 4 + (0x38 << 2)
label_4d5850:
    if (ctx->pc == 0x4D5850u) {
        ctx->pc = 0x4D5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D584Cu;
        // 0x4d5850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D5854u;
        goto label_4d5854;
    }
    ctx->pc = 0x4D584Cu;
    {
        const bool branch_taken_0x4d584c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d584c) {
            ctx->pc = 0x4D5850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D584Cu;
            // 0x4d5850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D5930u;
            return;
        }
    }
    ctx->pc = 0x4D5854u;
label_4d5854:
    // 0x4d5854: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d5854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d5858:
    // 0x4d5858: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d5858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4d585c:
    // 0x4d585c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d585cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d5860:
    // 0x4d5860: 0x8c63b7f0  lw          $v1, -0x4810($v1)
    ctx->pc = 0x4d5860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948848)));
label_4d5864:
    // 0x4d5864: 0x600008  jr          $v1
label_4d5868:
    if (ctx->pc == 0x4D5868u) {
        ctx->pc = 0x4D586Cu;
        goto label_4d586c;
    }
    ctx->pc = 0x4D5864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D5864u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4D586Cu;
label_4d586c:
    // 0x4d586c: 0x0  nop
    ctx->pc = 0x4d586cu;
    // NOP
    ctx->pc = 0x4d5870u;
}
