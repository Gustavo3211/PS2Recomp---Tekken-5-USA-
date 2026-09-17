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

// Function: sub_004F8840
// Address: 0x4f8840 - 0x4f8a58
void sub_004F8840_0x4f8840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8840_0x4f8840");
#endif

    switch (ctx->pc) {
        case 0x4f8868u: goto label_4f8868;
        case 0x4f8880u: goto label_4f8880;
        default: break;
    }

    ctx->pc = 0x4f8840u;

    // 0x4f8840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f8840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f8844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f8844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f8848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f8848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f884c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f884cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f8850: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f8850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f8854: 0x261201b4  addiu       $s2, $s0, 0x1B4
    ctx->pc = 0x4f8854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f8858: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f8858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f885c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f885cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f8860: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F8860u;
    SET_GPR_U32(ctx, 31, 0x4F8868u);
    ctx->pc = 0x4F8864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8860u;
    // 0x4f8864: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F8860u, 0x4F8868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8868u;
label_4f8868:
    // 0x4f8868: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4f8868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f886c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f886cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f8870: 0x442005e  bltzl       $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x4F8870u;
    {
        const bool branch_taken_0x4f8870 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8870) {
            ctx->pc = 0x4F8874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F8870u;
            // 0x4f8874: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F89ECu;
            goto label_4f89ec;
        }
    }
    ctx->pc = 0x4F8878u;
    // 0x4f8878: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F8878u;
    SET_GPR_U32(ctx, 31, 0x4F8880u);
    ctx->pc = 0x4F887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8878u;
    // 0x4f887c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F8878u, 0x4F8880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8880u;
label_4f8880:
    // 0x4f8880: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x4f8880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4f8884: 0x9602015e  lhu         $v0, 0x15E($s0)
    ctx->pc = 0x4f8884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4f8888: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4f8888u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4f888c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f8890: 0x260a0160  addiu       $t2, $s0, 0x160
    ctx->pc = 0x4f8890u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4f8894: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8898: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x4f8898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f889c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f889cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f88a0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f88a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f88a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f88a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f88a8: 0x2606012c  addiu       $a2, $s0, 0x12C
    ctx->pc = 0x4f88a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4f88ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f88acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f88b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f88b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f88b4: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x4f88b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x4f88b8: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4f88b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f88bc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4f88bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4f88c0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f88c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f88c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f88c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f88c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f88cc: 0x96020162  lhu         $v0, 0x162($s0)
    ctx->pc = 0x4f88ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4f88d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f88d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f88d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f88d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f88dc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f88dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f88e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f88e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f88e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f88e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f88e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f88e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f88ec: 0x86020164  lh          $v0, 0x164($s0)
    ctx->pc = 0x4f88ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4f88f0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f88f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f88f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f88f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f88f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f88f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f88fc: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x4f88fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4f8900: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f8900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f8904: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8908: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f890c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f890cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f8910: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8914: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f8914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f8918: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f891c: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f891cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f8920: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f8920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f8924: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8928: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f8928u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f892c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4f892cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4f8930: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4f8930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4f8934: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4f8934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f8938: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x4f8938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4f893c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4f893cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4f8940: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4f8940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4f8944: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x4f8944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4f8948: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4f8948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4f894c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4f894cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4f8950: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4f8950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4f8954: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4f8954u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4f8958: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f8958u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f895c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f895cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f8960: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f8960u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f8964: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f8964u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f8968: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f8968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f896c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x4f896cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4f8970: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4f8970u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f8974: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8978: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4f8978u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4f897c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4f897cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4f8980: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f8980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f8984: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f8984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f8988: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f8988u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f898c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f898cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f8990: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8994: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x4f8994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4f8998: 0x70631818  mult1       $v1, $v1, $v1
    ctx->pc = 0x4f8998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f899c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f899cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f89a0: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x4f89a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4f89a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4f89a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4f89a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f89ac: 0x124482b  sltu        $t1, $t1, $a0
    ctx->pc = 0x4f89acu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4f89b0: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F89B0u;
    {
        const bool branch_taken_0x4f89b0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F89B0u;
        // 0x4f89b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f89b0) {
            ctx->pc = 0x4F89D4u;
            goto label_4f89d4;
        }
    }
    ctx->pc = 0x4F89B8u;
    // 0x4f89b8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x4f89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x4f89bc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x4f89bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f89c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f89c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f89c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f89c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f89c8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4f89c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4f89cc: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x4f89ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x4f89d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f89d4:
    // 0x4f89d4: 0xa5530000  sh          $s3, 0x0($t2)
    ctx->pc = 0x4f89d4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x4f89d8: 0xa603002e  sh          $v1, 0x2E($s0)
    ctx->pc = 0x4f89d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f89dc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4f89dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f89e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f89e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f89e4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4f89e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f89e8: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4f89e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4f89ec:
    // 0x4f89ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4F89ECu;
    {
        const bool branch_taken_0x4f89ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F89ECu;
        // 0x4f89f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f89ec) {
            ctx->pc = 0x4F8A18u;
            goto label_4f8a18;
        }
    }
    ctx->pc = 0x4F89F4u;
    // 0x4f89f4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F89F4u;
    {
        const bool branch_taken_0x4f89f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F89F4u;
        // 0x4f89f8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f89f4) {
            ctx->pc = 0x4F8A38u;
            goto label_4f8a38;
        }
    }
    ctx->pc = 0x4F89FCu;
    // 0x4f89fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f89fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8a00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f8a00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8a04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f8a04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f8a08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f8a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f8a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F8A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8A0Cu;
        // 0x4f8a10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F8A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8A14u;
    // 0x4f8a14: 0x0  nop
    ctx->pc = 0x4f8a14u;
    // NOP
label_4f8a18:
    // 0x4f8a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f8a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8a20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f8a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f8a24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f8a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8a28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f8a28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f8a2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f8a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f8a30: 0x813e140  j           func_4F8500
    ctx->pc = 0x4F8A30u;
    ctx->pc = 0x4F8A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8A30u;
    // 0x4f8a34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8500u, 0x4F8A30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F8A38u;
label_4f8a38:
    // 0x4f8a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f8a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8a40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f8a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8a44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f8a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f8a48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f8a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f8a4c: 0x813e0da  j           func_4F8368
    ctx->pc = 0x4F8A4Cu;
    ctx->pc = 0x4F8A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8A4Cu;
    // 0x4f8a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8368u, 0x4F8A4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F8A54u;
    // 0x4f8a54: 0x0  nop
    ctx->pc = 0x4f8a54u;
    // NOP
    ctx->pc = 0x4f8a58u;
}
