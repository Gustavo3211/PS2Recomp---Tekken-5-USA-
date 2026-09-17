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

// Function: sub_004E5710
// Address: 0x4e5710 - 0x4e5ba0
void sub_004E5710_0x4e5710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5710_0x4e5710");
#endif

    switch (ctx->pc) {
        case 0x4e5740u: goto label_4e5740;
        case 0x4e5760u: goto label_4e5760;
        case 0x4e5898u: goto label_4e5898;
        case 0x4e58b8u: goto label_4e58b8;
        case 0x4e5928u: goto label_4e5928;
        case 0x4e5994u: goto label_4e5994;
        case 0x4e59b0u: goto label_4e59b0;
        case 0x4e59d8u: goto label_4e59d8;
        case 0x4e59e0u: goto label_4e59e0;
        case 0x4e5a78u: goto label_4e5a78;
        case 0x4e5b08u: goto label_4e5b08;
        case 0x4e5b58u: goto label_4e5b58;
        default: break;
    }

    ctx->pc = 0x4e5710u;

    // 0x4e5710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e5710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e5714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e5714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e5718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e5718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e571c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e571cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e5720: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e5720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e5724: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e5724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e5728: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e5728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e572c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e572cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e5730: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e5730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e5734: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4e5734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4e5738: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E5738u;
    SET_GPR_U32(ctx, 31, 0x4E5740u);
    ctx->pc = 0x4E573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5738u;
    // 0x4e573c: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E5738u, 0x4E5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5740u;
label_4e5740:
    // 0x4e5740: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e5740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e5744: 0x247611cc  addiu       $s6, $v1, 0x11CC
    ctx->pc = 0x4e5744u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4556));
    // 0x4e5748: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4e5748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F11CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11CCu, _value); } while (0);
    // 0x4e574c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e574cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5750: 0x4420011  bltzl       $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4E5750u;
    {
        const bool branch_taken_0x4e5750 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e5750) {
            ctx->pc = 0x4E5754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5750u;
            // 0x4e5754: 0x8e020140  lw          $v0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5798u;
            goto label_4e5798;
        }
    }
    ctx->pc = 0x4E5758u;
    // 0x4e5758: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E5758u;
    SET_GPR_U32(ctx, 31, 0x4E5760u);
    ctx->pc = 0x4E575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5758u;
    // 0x4e575c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E5758u, 0x4E5760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5760u;
label_4e5760:
    // 0x4e5760: 0xa600014a  sh          $zero, 0x14A($s0)
    ctx->pc = 0x4e5760u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e5764: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x4e5764u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4e5768: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e5768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e576c: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x4e576cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4e5770: 0x9604001a  lhu         $a0, 0x1A($s0)
    ctx->pc = 0x4e5770u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x4e5774: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4e5774u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e5778: 0xa605011a  sh          $a1, 0x11A($s0)
    ctx->pc = 0x4e5778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e577c: 0xa603011e  sh          $v1, 0x11E($s0)
    ctx->pc = 0x4e577cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 286), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e5780: 0xa6040122  sh          $a0, 0x122($s0)
    ctx->pc = 0x4e5780u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e5784: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e5784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e5788: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e5788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e578c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e5790: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e5790u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e5794: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x4e5794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4e5798:
    // 0x4e5798: 0x844301b4  lh          $v1, 0x1B4($v0)
    ctx->pc = 0x4e5798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 436)));
    // 0x4e579c: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E579Cu;
    {
        const bool branch_taken_0x4e579c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E57A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E579Cu;
        // 0x4e57a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e579c) {
            ctx->pc = 0x4E57D0u;
            goto label_4e57d0;
        }
    }
    ctx->pc = 0x4E57A4u;
    // 0x4e57a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e57a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e57a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e57a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e57ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e57acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e57b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e57b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e57b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e57b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e57b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e57b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e57bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e57bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e57c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e57c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e57c4: 0x81398a2  j           func_4E6288
    ctx->pc = 0x4E57C4u;
    ctx->pc = 0x4E57C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E57C4u;
    // 0x4e57c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6288u, 0x4E57C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E57CCu;
    // 0x4e57cc: 0x0  nop
    ctx->pc = 0x4e57ccu;
    // NOP
label_4e57d0:
    // 0x4e57d0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4e57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4e57d4: 0x8443f894  lh          $v1, -0x76C($v0)
    ctx->pc = 0x4e57d4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72F894u));
    // 0x4e57d8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4E57D8u;
    {
        const bool branch_taken_0x4e57d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E57D8u;
        // 0x4e57dc: 0x2604014a  addiu       $a0, $s0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e57d8) {
            ctx->pc = 0x4E5810u;
            goto label_4e5810;
        }
    }
    ctx->pc = 0x4E57E0u;
    // 0x4e57e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e57e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e57e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e57e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e57e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e57e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e57ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e57ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e57f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e57f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e57f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e57f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e57f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e57f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e57fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e57fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5800: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e5800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e5804: 0x81398a8  j           func_4E62A0
    ctx->pc = 0x4E5804u;
    ctx->pc = 0x4E5808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5804u;
    // 0x4e5808: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E62A0u, 0x4E5804u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E580Cu;
    // 0x4e580c: 0x0  nop
    ctx->pc = 0x4e580cu;
    // NOP
label_4e5810:
    // 0x4e5810: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e5810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e5814: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e5814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e5818: 0x247411b8  addiu       $s4, $v1, 0x11B8
    ctx->pc = 0x4e5818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4536));
    // 0x4e581c: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4e581cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x4e5820: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e5820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4e5824: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4e5824u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e5828: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e5828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e582c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e582cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5830: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e5830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5834: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5838: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e583c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e583cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5840: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5840u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5844: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5848: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e5848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e584c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4e584cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4e5850: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5854: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5858: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5858u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e585c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e585cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5860: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4E5860u;
    {
        const bool branch_taken_0x4e5860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5860u;
        // 0x4e5864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5860) {
            ctx->pc = 0x4E5890u;
            goto label_4e5890;
        }
    }
    ctx->pc = 0x4E5868u;
    // 0x4e5868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e586c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e586cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e5870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e5870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5874: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e5874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e5878: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e5878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e587c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e587cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e5880: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e5880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5884: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e5884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e5888: 0x81398a8  j           func_4E62A0
    ctx->pc = 0x4E5888u;
    ctx->pc = 0x4E588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5888u;
    // 0x4e588c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E62A0u, 0x4E5888u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E5890u;
label_4e5890:
    // 0x4e5890: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E5890u;
    SET_GPR_U32(ctx, 31, 0x4E5898u);
    ctx->pc = 0x4E5894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5890u;
    // 0x4e5894: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E5890u, 0x4E5898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5898u;
label_4e5898:
    // 0x4e5898: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4e5898u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4e589c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4e589cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e58a0: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x4e58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x4e58a4: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x4e58a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e58a8: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4e58a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4e58ac: 0x263111c8  addiu       $s1, $s1, 0x11C8
    ctx->pc = 0x4e58acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4552));
    // 0x4e58b0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E58B0u;
    SET_GPR_U32(ctx, 31, 0x4E58B8u);
    ctx->pc = 0x4E58B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E58B0u;
    // 0x4e58b4: 0x265211c0  addiu       $s2, $s2, 0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E58B0u, 0x4E58B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E58B8u;
label_4e58b8:
    // 0x4e58b8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e58bc: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e58bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e58c0: 0x261011bc  addiu       $s0, $s0, 0x11BC
    ctx->pc = 0x4e58c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4540));
    // 0x4e58c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e58c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e58c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e58c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e58cc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e58d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e58d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e58d4: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e58d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e58d8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4e58d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e58dc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x4e58dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x4e58e0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4e58e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e58e4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e58e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e58e8: 0xd53024  and         $a2, $a2, $s5
    ctx->pc = 0x4e58e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x4e58ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e58ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e58f0: 0xb52824  and         $a1, $a1, $s5
    ctx->pc = 0x4e58f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
    // 0x4e58f4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e58f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e58f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e58f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e58fc: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e58fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5900: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x4e5900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x4e5904: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5908: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e590c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4e590cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4e5910: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5910u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5914: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x4e5914u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4e5918: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4e5918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4e591c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4e591cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4e5920: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E5920u;
    SET_GPR_U32(ctx, 31, 0x4E5928u);
    ctx->pc = 0x4E5924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5920u;
    // 0x4e5924: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E5920u, 0x4E5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5928u;
label_4e5928:
    // 0x4e5928: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e5928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e592c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5930: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4e5930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e5934: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5938: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e593c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e593cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5940: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5944: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e5944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5948: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4e5948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4e594c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5950: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5954: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5954u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5958: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e595c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e595cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5960: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x4e5960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x4e5964: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5968: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e596c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e596cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5970: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5974: 0x84a40022  lh          $a0, 0x22($a1)
    ctx->pc = 0x4e5974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x4e5978: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e5978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e597c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4e597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4e5980: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5984: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5988: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5988u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e598c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E598Cu;
    SET_GPR_U32(ctx, 31, 0x4E5994u);
    ctx->pc = 0x4E5990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E598Cu;
    // 0x4e5990: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E598Cu, 0x4E5994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5994u;
label_4e5994:
    // 0x4e5994: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4e5994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5998: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e5998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e599c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e59a0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e59a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e59a4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4e59a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4e59a8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E59A8u;
    SET_GPR_U32(ctx, 31, 0x4E59B0u);
    ctx->pc = 0x4E59ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E59A8u;
    // 0x4e59ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E59A8u, 0x4E59B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E59B0u;
label_4e59b0:
    // 0x4e59b0: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4e59b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e59b4: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4e59b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e59b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e59b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e59bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e59c0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4e59c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4e59c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e59c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e59cc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4e59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4e59d0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E59D0u;
    SET_GPR_U32(ctx, 31, 0x4E59D8u);
    ctx->pc = 0x4E59D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E59D0u;
    // 0x4e59d4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E59D0u, 0x4E59D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E59D8u;
label_4e59d8:
    // 0x4e59d8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E59D8u;
    SET_GPR_U32(ctx, 31, 0x4E59E0u);
    ctx->pc = 0x4E59DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E59D8u;
    // 0x4e59dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E59D8u, 0x4E59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E59E0u;
label_4e59e0:
    // 0x4e59e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4e59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e59e4: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4e59e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e59e8: 0x26680010  addiu       $t0, $s3, 0x10
    ctx->pc = 0x4e59e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4e59ec: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4e59ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e59f0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e59f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e59f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e59f8: 0x26690018  addiu       $t1, $s3, 0x18
    ctx->pc = 0x4e59f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4e59fc: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4e59fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5a00: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4e5a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4e5a04: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e5a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5a08: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5a08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5a0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e5a10: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e5a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e5a14: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4e5a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4e5a18: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4e5a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4e5a1c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4e5a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4e5a20: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4e5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4e5a24: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4e5a24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e5a28: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4e5a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4e5a2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5a2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5a30: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e5a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e5a34: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4e5a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4e5a38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5a3c: 0xd53025  or          $a2, $a2, $s5
    ctx->pc = 0x4e5a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    // 0x4e5a40: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4e5a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4e5a44: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4e5a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4e5a48: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e5a4c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5a50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e5a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e5a54: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4e5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4e5a58: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4e5a58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5a5c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e5a60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e5a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e5a64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5a68: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5a6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e5a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e5a70: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E5A70u;
    SET_GPR_U32(ctx, 31, 0x4E5A78u);
    ctx->pc = 0x4E5A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5A70u;
    // 0x4e5a74: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E5A70u, 0x4E5A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5A78u;
label_4e5a78:
    // 0x4e5a78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5a7c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5a80: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4e5a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e5a84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5a88: 0x26660014  addiu       $a2, $s3, 0x14
    ctx->pc = 0x4e5a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4e5a8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5a90: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5a90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5a94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5a98: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e5a98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5a9c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4e5a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4e5aa0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5aa4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5aa8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5aac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5ab0: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e5ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5ab4: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x4e5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x4e5ab8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5abc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5ac0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5ac4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5ac8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e5acc: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4e5accu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5ad0: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4e5ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4e5ad4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5ad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5ad8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4e5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4e5adc: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x4e5adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x4e5ae0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4e5ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4e5ae4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5ae8: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e5ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5aec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4e5aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e5af0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e5af4: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4e5af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4e5af8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e5af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e5afc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5b00: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E5B00u;
    SET_GPR_U32(ctx, 31, 0x4E5B08u);
    ctx->pc = 0x4E5B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5B00u;
    // 0x4e5b04: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E5B00u, 0x4E5B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5B08u;
label_4e5b08:
    // 0x4e5b08: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e5b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5b0c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5b10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5b14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5b18: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5b18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5b1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5b20: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e5b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5b24: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4e5b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4e5b28: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5b2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5b30: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5b30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5b34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5b38: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e5b38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5b3c: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x4e5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x4e5b40: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5b44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5b48: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5b48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5b4c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e5b4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5b50: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E5B50u;
    SET_GPR_U32(ctx, 31, 0x4E5B58u);
    ctx->pc = 0x4E5B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5B50u;
    // 0x4e5b54: 0xa6620118  sh          $v0, 0x118($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E5B50u, 0x4E5B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5B58u;
label_4e5b58:
    // 0x4e5b58: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5b5c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e5b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5b60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e5b60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e5b64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5b6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5b70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e5b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e5b74: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e5b74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e5b78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e5b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5b7c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e5b7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5b80: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e5b80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5b84: 0xa662011c  sh          $v0, 0x11C($s3)
    ctx->pc = 0x4e5b84u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e5b88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e5b88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5b8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e5b8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e5b90: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e5b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e5b94: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5B94u;
        // 0x4e5b98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5B9Cu;
    // 0x4e5b9c: 0x0  nop
    ctx->pc = 0x4e5b9cu;
    // NOP
    ctx->pc = 0x4e5ba0u;
}
