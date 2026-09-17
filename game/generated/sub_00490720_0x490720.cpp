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

// Function: sub_00490720
// Address: 0x490720 - 0x490bb0
void sub_00490720_0x490720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490720_0x490720");
#endif

    switch (ctx->pc) {
        case 0x4908e0u: goto label_4908e0;
        case 0x49095cu: goto label_49095c;
        case 0x4909dcu: goto label_4909dc;
        case 0x490aacu: goto label_490aac;
        case 0x490ae8u: goto label_490ae8;
        default: break;
    }

    ctx->pc = 0x490720u;

    // 0x490720: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x490720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x490724: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x490724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x490728: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x490728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x49072c: 0x2462d680  addiu       $v0, $v1, -0x2980
    ctx->pc = 0x49072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x490730: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x490730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x490734: 0x3c06007e  lui         $a2, 0x7E
    ctx->pc = 0x490734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)126 << 16));
    // 0x490738: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x490738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x49073c: 0x24cf14bc  addiu       $t7, $a2, 0x14BC
    ctx->pc = 0x49073cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 5308));
    // 0x490740: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x490740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x490744: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x490744u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490748: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x490748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x49074c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x49074cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x490750: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x490750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x490754: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x490754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x490758: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x490758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x49075c: 0x24ae14dc  addiu       $t6, $a1, 0x14DC
    ctx->pc = 0x49075cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 5340));
    // 0x490760: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x490760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x490764: 0x3c06007e  lui         $a2, 0x7E
    ctx->pc = 0x490764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)126 << 16));
    // 0x490768: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x490768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x49076c: 0x24d014c4  addiu       $s0, $a2, 0x14C4
    ctx->pc = 0x49076cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 5316));
    // 0x490770: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x490770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x490774: 0x253e0018  addiu       $fp, $t1, 0x18
    ctx->pc = 0x490774u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
    // 0x490778: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x490778u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7E14DCu));
    // 0x49077c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x49077cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x490780: 0x8c4b0064  lw          $t3, 0x64($v0)
    ctx->pc = 0x490780u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x72D6E4u));
    // 0x490784: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x490784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x490788: 0x244d14d8  addiu       $t5, $v0, 0x14D8
    ctx->pc = 0x490788u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 5336));
    // 0x49078c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49078cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x490790: 0xadeb0000  sw          $t3, 0x0($t7)
    ctx->pc = 0x490790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x7E14BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14BCu, _value); } while (0);
    // 0x490794: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x490794u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7E14D8u));
    // 0x490798: 0x9522000c  lhu         $v0, 0xC($t1)
    ctx->pc = 0x490798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x49079c: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x49079cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4907a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4907a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4907a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4907a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4907a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4907a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4907ac: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4907acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4907b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4907b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4907b4: 0x8522000e  lh          $v0, 0xE($t1)
    ctx->pc = 0x4907b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x4907b8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4907b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4907bc: 0x626024  and         $t4, $v1, $v0
    ctx->pc = 0x4907bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4907c0: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x4907c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x4907c4: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x4907c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4907c8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4907c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4907cc: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x4907ccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4907d0: 0x10a1825  or          $v1, $t0, $t2
    ctx->pc = 0x4907d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x4907d4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4907d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4907d8: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4907d8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x4907dc: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x4907dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4907e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4907e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4907e4: 0x4a3025  or          $a2, $v0, $t2
    ctx->pc = 0x4907e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4907e8: 0x95220024  lhu         $v0, 0x24($t1)
    ctx->pc = 0x4907e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x4907ec: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x4907ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4907f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4907f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4907f4: 0x85230026  lh          $v1, 0x26($t1)
    ctx->pc = 0x4907f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 38)));
    // 0x4907f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4907f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4907fc: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4907fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x490800: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x490800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x490804: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x490804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x490808: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x490808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49080c: 0x54403  sra         $t0, $a1, 16
    ctx->pc = 0x49080cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
    // 0x490810: 0x1507000d  bne         $t0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x490810u;
    {
        const bool branch_taken_0x490810 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x490814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490810u;
        // 0x490814: 0x438824  and         $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490810) {
            ctx->pc = 0x490848u;
            goto label_490848;
        }
    }
    ctx->pc = 0x490818u;
    // 0x490818: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x490818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49081c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x49081cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x490820: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x490820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490824: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x490824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x490828: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x490828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49082c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x49082cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x490830: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x490830u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490834: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x490834u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x490838: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x490838u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49083c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x49083cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x490840: 0x8124128  j           func_4904A0
    ctx->pc = 0x490840u;
    ctx->pc = 0x490844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490840u;
    // 0x490844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904A0u, 0x490840u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x490848u;
label_490848:
    // 0x490848: 0x18a1024  and         $v0, $t4, $t2
    ctx->pc = 0x490848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x49084c: 0x25640002  addiu       $a0, $t3, 0x2
    ctx->pc = 0x49084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x490850: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x490850u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x490854: 0x25290022  addiu       $t1, $t1, 0x22
    ctx->pc = 0x490854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 34));
    // 0x490858: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x490858u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49085c: 0x25630004  addiu       $v1, $t3, 0x4
    ctx->pc = 0x49085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x490860: 0xade40000  sw          $a0, 0x0($t7)
    ctx->pc = 0x490860u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
    // 0x490864: 0x25650006  addiu       $a1, $t3, 0x6
    ctx->pc = 0x490864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x490868: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x490868u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x49086c: 0x3c07007e  lui         $a3, 0x7E
    ctx->pc = 0x49086cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)126 << 16));
    // 0x490870: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x490870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x490874: 0x24e614d4  addiu       $a2, $a3, 0x14D4
    ctx->pc = 0x490874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 5332));
    // 0x490878: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x490878u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49087c: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x49087cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x490880: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x490880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x490884: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x490884u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x490888: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x490888u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
    // 0x49088c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49088cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490890: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x490890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7E14D4u));
    // 0x490894: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x490894u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x490898: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x490898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49089c: 0x85c40000  lh          $a0, 0x0($t6)
    ctx->pc = 0x49089cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4908a0: 0x10a1825  or          $v1, $t0, $t2
    ctx->pc = 0x4908a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x4908a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4908a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4908a8: 0x480009a  bltz        $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x4908A8u;
    {
        const bool branch_taken_0x4908a8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4908ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4908A8u;
        // 0x4908ac: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4908a8) {
            ctx->pc = 0x490B14u;
            goto label_490b14;
        }
    }
    ctx->pc = 0x4908B0u;
    // 0x4908b0: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x4908b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x4908b4: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x4908b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x4908b8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x4908b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x4908bc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4908bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4908c0: 0x245714c8  addiu       $s7, $v0, 0x14C8
    ctx->pc = 0x4908c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x4908c4: 0x247214cc  addiu       $s2, $v1, 0x14CC
    ctx->pc = 0x4908c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5324));
    // 0x4908c8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4908c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4908cc: 0x249014d0  addiu       $s0, $a0, 0x14D0
    ctx->pc = 0x4908ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
    // 0x4908d0: 0x1c0a82d  daddu       $s5, $t6, $zero
    ctx->pc = 0x4908d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4908d4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4908d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4908d8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4908d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4908dc: 0x0  nop
    ctx->pc = 0x4908dcu;
    // NOP
label_4908e0:
    // 0x4908e0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4908e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4908e4: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4908e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4908e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4908e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4908ec: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4908ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4908f0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4908f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4908f4: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4908f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4908f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4908f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4908fc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4908fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x490900: 0x24c70002  addiu       $a3, $a2, 0x2
    ctx->pc = 0x490900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x490904: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x490904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x490908: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x490908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49090c: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x49090cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x490910: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x490910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x490914: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x490914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x490918: 0x86c80000  lh          $t0, 0x0($s6)
    ctx->pc = 0x490918u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49091c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x49091cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x490920: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x490920u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x490924: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x490924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490928: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x490928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x49092c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49092cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x490930: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x490930u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x490934: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x490934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x490938: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x490938u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49093c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x49093cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x490940: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x490940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490944: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x490944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x490948: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x490948u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49094c: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x49094cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x490950: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x490950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x490954: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x490954u;
    SET_GPR_U32(ctx, 31, 0x49095Cu);
    ctx->pc = 0x490958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490954u;
    // 0x490958: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x490954u, 0x49095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49095Cu;
label_49095c:
    // 0x49095c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x49095cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x490960: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x490960u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x490964: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x490964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x490968: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x490968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49096c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49096cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x490970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x490974: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x490974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490978: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x490978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x49097c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49097cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x490980: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x490980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x490984: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x490984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x490988: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x490988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x49098c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49098cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x490990: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x490990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x490994: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x490994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x490998: 0x86c70000  lh          $a3, 0x0($s6)
    ctx->pc = 0x490998u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49099c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x49099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4909a0: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4909a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4909a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4909a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4909a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4909a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4909ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4909acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4909b0: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4909b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4909b4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4909b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4909b8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4909b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4909bc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4909bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4909c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4909c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4909c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4909c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4909c8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4909c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4909cc: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4909ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4909d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4909d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4909d4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4909D4u;
    SET_GPR_U32(ctx, 31, 0x4909DCu);
    ctx->pc = 0x4909D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4909D4u;
    // 0x4909d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4909D4u, 0x4909DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4909DCu;
label_4909dc:
    // 0x4909dc: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4909dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4909e0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4909e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4909e4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4909e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4909e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4909e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4909ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4909ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4909f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4909f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4909f4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4909f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4909f8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4909f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4909fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4909fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x490a00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x490a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490a04: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x490a04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x490a08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x490a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x490a0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x490a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x490a10: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x490a10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x490a14: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x490a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x490a18: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x490a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490a1c: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x490a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x490a20: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x490a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x490a24: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x490a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x490a28: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x490a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x490a2c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x490a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x490a30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x490a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490a34: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x490a34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x490a38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x490a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x490a3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x490a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x490a40: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x490a40u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490a44: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x490a44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x490a48: 0x86c80000  lh          $t0, 0x0($s6)
    ctx->pc = 0x490a48u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x490a4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x490a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x490a50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x490a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x490a54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x490a54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x490a58: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x490a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x490a5c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x490a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x490a60: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x490a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x490a64: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x490a64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x490a68: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x490a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x490a6c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x490a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x490a70: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x490a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x490a74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x490a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490a78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x490a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x490a7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x490a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x490a80: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x490a80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x490a84: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x490a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490a88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x490a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x490a8c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x490a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x490a90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x490a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490a94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x490a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x490a98: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x490a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490a9c: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x490a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x490aa0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x490aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x490aa4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x490AA4u;
    SET_GPR_U32(ctx, 31, 0x490AACu);
    ctx->pc = 0x490AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490AA4u;
    // 0x490aa8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x490AA4u, 0x490AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490AACu;
label_490aac:
    // 0x490aac: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x490aacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x490ab0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x490ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490ab4: 0x3c06007e  lui         $a2, 0x7E
    ctx->pc = 0x490ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)126 << 16));
    // 0x490ab8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x490ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490abc: 0x24c414bc  addiu       $a0, $a2, 0x14BC
    ctx->pc = 0x490abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5308));
    // 0x490ac0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x490ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x490ac4: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x490ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x490ac8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x490ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x490acc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x490accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x490ad0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x490ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x490ad4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x490ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x490ad8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x490ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x490adc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x490adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490ae0: 0xc122288  jal         func_488A20
    ctx->pc = 0x490AE0u;
    SET_GPR_U32(ctx, 31, 0x490AE8u);
    ctx->pc = 0x490AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490AE0u;
    // 0x490ae4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A20u, 0x490AE0u, 0x490AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490AE8u;
label_490ae8:
    // 0x490ae8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x490ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x490aec: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x490aecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x490af0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x490af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x490af4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x490af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x490af8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x490af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x490afc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x490afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490b00: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x490b00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x490b04: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x490b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x490b08: 0x443ff75  bgezl       $v0, . + 4 + (-0x8B << 2)
    ctx->pc = 0x490B08u;
    {
        const bool branch_taken_0x490b08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x490b08) {
            ctx->pc = 0x490B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490B08u;
            // 0x490b0c: 0x8e860000  lw          $a2, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4908E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4908e0;
        }
    }
    ctx->pc = 0x490B10u;
    // 0x490b10: 0x3c07007e  lui         $a3, 0x7E
    ctx->pc = 0x490b10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)126 << 16));
label_490b14:
    // 0x490b14: 0x87c60000  lh          $a2, 0x0($fp)
    ctx->pc = 0x490b14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x490b18: 0x24e414d4  addiu       $a0, $a3, 0x14D4
    ctx->pc = 0x490b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 5332));
    // 0x490b1c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x490b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x490b20: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x490b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x490b24: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x490b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x490b28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x490b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x490b2c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x490b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x490b30: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x490b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x490b34: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x490b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x490b38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x490b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x490b3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x490b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490b40: 0x24c8d680  addiu       $t0, $a2, -0x2980
    ctx->pc = 0x490b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x490b44: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x490b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x490b48: 0x3c06007e  lui         $a2, 0x7E
    ctx->pc = 0x490b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)126 << 16));
    // 0x490b4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x490b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490b50: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x490b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x490b54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x490b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490b58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x490b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x490b5c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x490b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x490b60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x490b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490b64: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x490b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x490b68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x490b68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x490b6c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x490b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x490b70: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x490b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x490b74: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x490b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x490b78: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x490b78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490b7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x490b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x490b80: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x490b80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x490b84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x490b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490b88: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x490b88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490b8c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x490b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x490b90: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x490b90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x490b94: 0x8cc214bc  lw          $v0, 0x14BC($a2)
    ctx->pc = 0x490b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5308)));
    // 0x490b98: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x490b98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x490b9c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x490b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x490ba0: 0xad020064  sw          $v0, 0x64($t0)
    ctx->pc = 0x490ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 100), GPR_U32(ctx, 2));
    // 0x490ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x490BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x490BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490BA4u;
        // 0x490ba8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490BACu;
    // 0x490bac: 0x0  nop
    ctx->pc = 0x490bacu;
    // NOP
    ctx->pc = 0x490bb0u;
}
