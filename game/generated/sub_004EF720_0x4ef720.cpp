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

// Function: sub_004EF720
// Address: 0x4ef720 - 0x4efb48
void sub_004EF720_0x4ef720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF720_0x4ef720");
#endif

    switch (ctx->pc) {
        case 0x4ef7d8u: goto label_4ef7d8;
        case 0x4ef8acu: goto label_4ef8ac;
        case 0x4ef8bcu: goto label_4ef8bc;
        case 0x4ef8e8u: goto label_4ef8e8;
        case 0x4ef910u: goto label_4ef910;
        case 0x4ef918u: goto label_4ef918;
        case 0x4ef95cu: goto label_4ef95c;
        case 0x4efa14u: goto label_4efa14;
        case 0x4efb20u: goto label_4efb20;
        default: break;
    }

    ctx->pc = 0x4ef720u;

    // 0x4ef720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ef720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ef724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ef724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ef728: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ef728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ef72c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4ef72cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4ef730: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ef730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ef734: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4ef734u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef738: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ef738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ef73c: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4ef73cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4ef740: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ef740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ef744: 0x26a3014a  addiu       $v1, $s5, 0x14A
    ctx->pc = 0x4ef744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 330));
    // 0x4ef748: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ef748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ef74c: 0x26f01210  addiu       $s0, $s7, 0x1210
    ctx->pc = 0x4ef74cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4624));
    // 0x4ef750: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ef750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ef754: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ef754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ef758: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ef758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ef75c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ef75cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ef760: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ef760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ef764: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ef764u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef768: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ef768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ef76c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ef76cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ef770: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ef770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef774: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ef774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ef778: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef77c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef780: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ef780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ef784: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef788: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ef788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef78c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4ef78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4ef790: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ef790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ef794: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef798: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ef798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ef79c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ef79cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef7a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4EF7A0u;
    {
        const bool branch_taken_0x4ef7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF7A0u;
        // 0x4ef7a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef7a0) {
            ctx->pc = 0x4EF7D0u;
            goto label_4ef7d0;
        }
    }
    ctx->pc = 0x4EF7A8u;
    // 0x4ef7a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ef7a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef7ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ef7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ef7b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ef7b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ef7b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ef7b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ef7b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ef7b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ef7bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ef7bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ef7c0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ef7c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ef7c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ef7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ef7c8: 0x813be92  j           func_4EFA48
    ctx->pc = 0x4EF7C8u;
    ctx->pc = 0x4EF7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF7C8u;
    // 0x4ef7cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFA48u;
    goto label_4efa48;
    ctx->pc = 0x4EF7D0u;
label_4ef7d0:
    // 0x4ef7d0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4EF7D0u;
    SET_GPR_U32(ctx, 31, 0x4EF7D8u);
    ctx->pc = 0x4EF7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF7D0u;
    // 0x4ef7d4: 0x3c11007f  lui         $s1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4EF7D0u, 0x4EF7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF7D8u;
label_4ef7d8:
    // 0x4ef7d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ef7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef7dc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ef7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ef7e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef7e4: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4ef7e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4ef7e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef7ec: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ef7ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ef7f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ef7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ef7f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef7f8: 0x262a121c  addiu       $t2, $s1, 0x121C
    ctx->pc = 0x4ef7f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 4636));
    // 0x4ef7fc: 0x26881220  addiu       $t0, $s4, 0x1220
    ctx->pc = 0x4ef7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4640));
    // 0x4ef800: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ef800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef804: 0x26691224  addiu       $t1, $s3, 0x1224
    ctx->pc = 0x4ef804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4644));
    // 0x4ef808: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4ef808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ef80c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ef80cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ef810: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4ef810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4ef814: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4ef814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ef818: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ef818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ef81c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4ef81cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1224u));
    // 0x4ef820: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef824: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ef824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ef828: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ef828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ef82c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef830: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x4ef830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x4ef834: 0xf23824  and         $a3, $a3, $s2
    ctx->pc = 0x4ef834u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 18));
    // 0x4ef838: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ef838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef83c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4ef83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4ef840: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4ef840u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4ef844: 0xd23024  and         $a2, $a2, $s2
    ctx->pc = 0x4ef844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x4ef848: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4ef848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4ef84c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ef84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ef850: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef854: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ef854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ef858: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4ef85c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4ef85cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4ef860: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x4ef860u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x4ef864: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4ef864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef868: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4ef868u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4ef86c: 0x2c620340  sltiu       $v0, $v1, 0x340
    ctx->pc = 0x4ef86cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)832) ? 1 : 0);
    // 0x4ef870: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4EF870u;
    {
        const bool branch_taken_0x4ef870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF870u;
        // 0x4ef874: 0xad260000  sw          $a2, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef870) {
            ctx->pc = 0x4EF898u;
            goto label_4ef898;
        }
    }
    ctx->pc = 0x4EF878u;
    // 0x4ef878: 0x2c620280  sltiu       $v0, $v1, 0x280
    ctx->pc = 0x4ef878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)640) ? 1 : 0);
    // 0x4ef87c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EF87Cu;
    {
        const bool branch_taken_0x4ef87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF87Cu;
        // 0x4ef880: 0x3c160073  lui         $s6, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef87c) {
            ctx->pc = 0x4EF890u;
            goto label_4ef890;
        }
    }
    ctx->pc = 0x4EF884u;
    // 0x4ef884: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4EF884u;
    {
        const bool branch_taken_0x4ef884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF884u;
        // 0x4ef888: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef884) {
            ctx->pc = 0x4EF8A0u;
            goto label_4ef8a0;
        }
    }
    ctx->pc = 0x4EF88Cu;
    // 0x4ef88c: 0x0  nop
    ctx->pc = 0x4ef88cu;
    // NOP
label_4ef890:
    // 0x4ef890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4EF890u;
    {
        const bool branch_taken_0x4ef890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF890u;
        // 0x4ef894: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef890) {
            ctx->pc = 0x4EF8A0u;
            goto label_4ef8a0;
        }
    }
    ctx->pc = 0x4EF898u;
label_4ef898:
    // 0x4ef898: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x4ef898u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x4ef89c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4ef89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4ef8a0:
    // 0x4ef8a0: 0x26c2d680  addiu       $v0, $s6, -0x2980
    ctx->pc = 0x4ef8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4ef8a4: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4EF8A4u;
    SET_GPR_U32(ctx, 31, 0x4EF8ACu);
    ctx->pc = 0x4EF8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF8A4u;
    // 0x4ef8a8: 0xa443232c  sh          $v1, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4EF8A4u, 0x4EF8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF8ACu;
label_4ef8ac:
    // 0x4ef8ac: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ef8acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ef8b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ef8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef8b4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4EF8B4u;
    SET_GPR_U32(ctx, 31, 0x4EF8BCu);
    ctx->pc = 0x4EF8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF8B4u;
    // 0x4ef8b8: 0x2631121c  addiu       $s1, $s1, 0x121C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4EF8B4u, 0x4EF8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF8BCu;
label_4ef8bc:
    // 0x4ef8bc: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4ef8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ef8c0: 0x26101214  addiu       $s0, $s0, 0x1214
    ctx->pc = 0x4ef8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4628));
    // 0x4ef8c4: 0x26731224  addiu       $s3, $s3, 0x1224
    ctx->pc = 0x4ef8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4644));
    // 0x4ef8c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ef8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ef8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ef8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef8d0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4ef8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4ef8d4: 0x26941220  addiu       $s4, $s4, 0x1220
    ctx->pc = 0x4ef8d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4640));
    // 0x4ef8d8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ef8d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef8dc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4ef8dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ef8e0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EF8E0u;
    SET_GPR_U32(ctx, 31, 0x4EF8E8u);
    ctx->pc = 0x4EF8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF8E0u;
    // 0x4ef8e4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EF8E0u, 0x4EF8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF8E8u;
label_4ef8e8:
    // 0x4ef8e8: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4ef8e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ef8ec: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4ef8ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef8f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ef8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef8f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4ef8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ef8f8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4ef8f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ef8fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ef8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ef900: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ef900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ef904: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ef904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ef908: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EF908u;
    SET_GPR_U32(ctx, 31, 0x4EF910u);
    ctx->pc = 0x4EF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF908u;
    // 0x4ef90c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EF908u, 0x4EF910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF910u;
label_4ef910:
    // 0x4ef910: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EF910u;
    SET_GPR_U32(ctx, 31, 0x4EF918u);
    ctx->pc = 0x4EF914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF910u;
    // 0x4ef914: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EF910u, 0x4EF918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF918u;
label_4ef918:
    // 0x4ef918: 0x26e71210  addiu       $a3, $s7, 0x1210
    ctx->pc = 0x4ef918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4624));
    // 0x4ef91c: 0x86a2002a  lh          $v0, 0x2A($s5)
    ctx->pc = 0x4ef91cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 42)));
    // 0x4ef920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ef920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef924: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4ef924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ef928: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ef928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef92c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ef92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ef930: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ef930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ef934: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ef934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ef938: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ef938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ef93c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef940: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x4ef940u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x4ef944: 0x86a2002c  lh          $v0, 0x2C($s5)
    ctx->pc = 0x4ef944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x4ef948: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ef948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ef94c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef950: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ef950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ef954: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4EF954u;
    SET_GPR_U32(ctx, 31, 0x4EF95Cu);
    ctx->pc = 0x4EF958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF954u;
    // 0x4ef958: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4EF954u, 0x4EF95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF95Cu;
label_4ef95c:
    // 0x4ef95c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4ef95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ef960: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x4ef960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x4ef964: 0x26c7d680  addiu       $a3, $s6, -0x2980
    ctx->pc = 0x4ef964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4ef968: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4ef968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ef96c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ef96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ef970: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ef970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ef974: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4ef974u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ef978: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ef978u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ef97c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4ef97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ef980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ef980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ef984: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x4ef984u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ef988: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ef988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ef98c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4ef98cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ef990: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ef990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ef994: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ef994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ef998: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4ef998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4ef99c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ef99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef9a0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ef9a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ef9a4: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x4ef9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4ef9a8: 0x962a0000  lhu         $t2, 0x0($s1)
    ctx->pc = 0x4ef9a8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ef9ac: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ef9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ef9b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ef9b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ef9b4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4ef9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ef9b8: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4ef9b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4ef9bc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4ef9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4ef9c0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4ef9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4ef9c4: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x4ef9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4ef9c8: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4ef9c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ef9cc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ef9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ef9d0: 0xa4ea2334  sh          $t2, 0x2334($a3)
    ctx->pc = 0x4ef9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9012), (uint16_t)GPR_U32(ctx, 10));
    // 0x4ef9d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ef9d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ef9d8: 0xa4e32336  sh          $v1, 0x2336($a3)
    ctx->pc = 0x4ef9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ef9dc: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4ef9dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4ef9e0: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x4ef9e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x4ef9e4: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4ef9e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4ef9e8: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4ef9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4ef9ec: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4ef9ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ef9f0: 0xa4e22338  sh          $v0, 0x2338($a3)
    ctx->pc = 0x4ef9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef9f4: 0x8ea30124  lw          $v1, 0x124($s5)
    ctx->pc = 0x4ef9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
    // 0x4ef9f8: 0xace32340  sw          $v1, 0x2340($a3)
    ctx->pc = 0x4ef9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 9024), GPR_U32(ctx, 3));
    // 0x4ef9fc: 0x8ea20128  lw          $v0, 0x128($s5)
    ctx->pc = 0x4ef9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x4efa00: 0xace22344  sw          $v0, 0x2344($a3)
    ctx->pc = 0x4efa00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 9028), GPR_U32(ctx, 2));
    // 0x4efa04: 0x8ea3012c  lw          $v1, 0x12C($s5)
    ctx->pc = 0x4efa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 300)));
    // 0x4efa08: 0xa4e02332  sh          $zero, 0x2332($a3)
    ctx->pc = 0x4efa08u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9010), (uint16_t)GPR_U32(ctx, 0));
    // 0x4efa0c: 0xc13d6c2  jal         func_4F5B08
    ctx->pc = 0x4EFA0Cu;
    SET_GPR_U32(ctx, 31, 0x4EFA14u);
    ctx->pc = 0x4EFA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFA0Cu;
    // 0x4efa10: 0xace32348  sw          $v1, 0x2348($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 9032), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5B08u, 0x4EFA0Cu, 0x4EFA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFA14u;
label_4efa14:
    // 0x4efa14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4efa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4efa18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4efa18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efa1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4efa1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4efa20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4efa20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4efa24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4efa24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4efa28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4efa28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4efa2c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4efa2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4efa30: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4efa30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4efa34: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4efa34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4efa38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4efa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4efa3c: 0x813be92  j           func_4EFA48
    ctx->pc = 0x4EFA3Cu;
    ctx->pc = 0x4EFA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFA3Cu;
    // 0x4efa40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFA48u;
    goto label_4efa48;
    ctx->pc = 0x4EFA44u;
    // 0x4efa44: 0x0  nop
    ctx->pc = 0x4efa44u;
    // NOP
label_4efa48:
    // 0x4efa48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4efa4c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4efa4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4efa50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4efa54: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4efa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4efa58: 0x24481210  addiu       $t0, $v0, 0x1210
    ctx->pc = 0x4efa58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4624));
    // 0x4efa5c: 0x252a0014  addiu       $t2, $t1, 0x14
    ctx->pc = 0x4efa5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x4efa60: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4efa60u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4efa64: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4efa64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4efa68: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x4efa68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x4efa6c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4efa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4efa70: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4efa70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4efa74: 0x8c671228  lw          $a3, 0x1228($v1)
    ctx->pc = 0x4efa74u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F1228u));
    // 0x4efa78: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4efa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4efa7c: 0x252b0120  addiu       $t3, $t1, 0x120
    ctx->pc = 0x4efa7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
    // 0x4efa80: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4efa80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4efa84: 0x252d0128  addiu       $t5, $t1, 0x128
    ctx->pc = 0x4efa84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 296));
    // 0x4efa88: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4efa88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4efa8c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4efa8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4efa90: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x4efa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4efa94: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4efa94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4efa98: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4efa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4efa9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4efa9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4efaa0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4efaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4efaa4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4efaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4efaa8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4efaa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4efaac: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4efaacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4efab0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4efab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4efab4: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x4efab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x4efab8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EFAB8u;
    {
        const bool branch_taken_0x4efab8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4EFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFAB8u;
        // 0x4efabc: 0x252c0010  addiu       $t4, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efab8) {
            ctx->pc = 0x4EFAD0u;
            goto label_4efad0;
        }
    }
    ctx->pc = 0x4EFAC0u;
    // 0x4efac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efac4: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4EFAC4u;
    ctx->pc = 0x4EFAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFAC4u;
    // 0x4efac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFACCu;
    // 0x4efacc: 0x0  nop
    ctx->pc = 0x4efaccu;
    // NOP
label_4efad0:
    // 0x4efad0: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4efad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4efad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efad8: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4efad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4efadc: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4efadcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4efae0: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4efae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4efae4: 0x2463fc00  addiu       $v1, $v1, -0x400
    ctx->pc = 0x4efae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x4efae8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4efae8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4efaec: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4efaecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4efaf0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4efaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4efaf4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4efaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4efaf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4efaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4efafc: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4efafcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4efb00: 0x8d230124  lw          $v1, 0x124($t1)
    ctx->pc = 0x4efb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 292)));
    // 0x4efb04: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4efb04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4efb08: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4efb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4efb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4efb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4efb10: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4efb10u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4efb14: 0x813bec8  j           func_4EFB20
    ctx->pc = 0x4EFB14u;
    ctx->pc = 0x4EFB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFB14u;
    // 0x4efb18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFB20u;
    goto label_4efb20;
    ctx->pc = 0x4EFB1Cu;
    // 0x4efb1c: 0x0  nop
    ctx->pc = 0x4efb1cu;
    // NOP
label_4efb20:
    // 0x4efb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4efb24: 0x2483011c  addiu       $v1, $a0, 0x11C
    ctx->pc = 0x4efb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x4efb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4efb2c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4efb2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4efb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efb34: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4efb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4efb38: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4efb38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4efb3c: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4EFB3Cu;
    ctx->pc = 0x4EFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EFB3Cu;
    // 0x4efb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4EFB44u;
    // 0x4efb44: 0x0  nop
    ctx->pc = 0x4efb44u;
    // NOP
    ctx->pc = 0x4efb48u;
}
