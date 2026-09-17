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

// Function: sub_00509020
// Address: 0x509020 - 0x5092e8
void sub_00509020_0x509020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509020_0x509020");
#endif

    switch (ctx->pc) {
        case 0x50914cu: goto label_50914c;
        case 0x5091e4u: goto label_5091e4;
        case 0x50927cu: goto label_50927c;
        case 0x5092a0u: goto label_5092a0;
        default: break;
    }

    ctx->pc = 0x509020u;

    // 0x509020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x509020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x509024: 0x3c080090  lui         $t0, 0x90
    ctx->pc = 0x509024u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)144 << 16));
    // 0x509028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x509028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50902c: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x50902cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x509030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x509030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x509034: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x509034u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x509038: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x509038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50903c: 0x3c120090  lui         $s2, 0x90
    ctx->pc = 0x50903cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)144 << 16));
    // 0x509040: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x509040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x509044: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x509044u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x509048: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x509048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50904c: 0x3c14008f  lui         $s4, 0x8F
    ctx->pc = 0x50904cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)143 << 16));
    // 0x509050: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x509050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x509054: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x509054u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x509058: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x509058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x50905c: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x50905cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x509060: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x509060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x509064: 0x3c170057  lui         $s7, 0x57
    ctx->pc = 0x509064u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)87 << 16));
    // 0x509068: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x509068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x50906c: 0x2610c5b4  addiu       $s0, $s0, -0x3A4C
    ctx->pc = 0x50906cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952372));
    // 0x509070: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x509070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x509074: 0x2652f080  addiu       $s2, $s2, -0xF80
    ctx->pc = 0x509074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963328));
    // 0x509078: 0x2673c5cc  addiu       $s3, $s3, -0x3A34
    ctx->pc = 0x509078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952396));
    // 0x50907c: 0x2694c5b8  addiu       $s4, $s4, -0x3A48
    ctx->pc = 0x50907cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952376));
    // 0x509080: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x509080u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC5B4u));
    // 0x509084: 0x2508f0d0  addiu       $t0, $t0, -0xF30
    ctx->pc = 0x509084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963408));
    // 0x509088: 0x86424e30  lh          $v0, 0x4E30($s2)
    ctx->pc = 0x509088u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x903EB0u));
    // 0x50908c: 0x26f77b40  addiu       $s7, $s7, 0x7B40
    ctx->pc = 0x50908cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 31552));
    // 0x509090: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x509090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x509094: 0x3c0b008f  lui         $t3, 0x8F
    ctx->pc = 0x509094u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)143 << 16));
    // 0x509098: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x509098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50909c: 0x257ec5ac  addiu       $fp, $t3, -0x3A54
    ctx->pc = 0x50909cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952364));
    // 0x5090a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5090a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5090a4: 0x26d6c5b0  addiu       $s6, $s6, -0x3A50
    ctx->pc = 0x5090a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952368));
    // 0x5090a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5090a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5090ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5090acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5090b0: 0x26b5c5d0  addiu       $s5, $s5, -0x3A30
    ctx->pc = 0x5090b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952400));
    // 0x5090b4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x5090b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5090b8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x5090b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5090bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5090bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x5090c0: 0x86444e32  lh          $a0, 0x4E32($s2)
    ctx->pc = 0x5090c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20018)));
    // 0x5090c4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x5090c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x5090c8: 0x86454e34  lh          $a1, 0x4E34($s2)
    ctx->pc = 0x5090c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20020)));
    // 0x5090cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5090ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5090d0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x5090d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5090d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5090d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5090d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5090d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5090dc: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x5090dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x5090e0: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x5090e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x5090e4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x5090e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5090e8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x5090e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x5090ec: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x5090ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5090f0: 0x3c080090  lui         $t0, 0x90
    ctx->pc = 0x5090f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)144 << 16));
    // 0x5090f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5090f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5090f8: 0x2508f0d4  addiu       $t0, $t0, -0xF2C
    ctx->pc = 0x5090f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963412));
    // 0x5090fc: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x5090fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x509100: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x509100u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x509104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x509104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x509108: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x509108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50910c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x50910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x509110: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x509110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x509114: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x509114u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x509118: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x509118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50911c: 0xafca0000  sw          $t2, 0x0($fp)
    ctx->pc = 0x50911cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
    // 0x509120: 0xf13824  and         $a3, $a3, $s1
    ctx->pc = 0x509120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x509124: 0xaec90000  sw          $t1, 0x0($s6)
    ctx->pc = 0x509124u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 9));
    // 0x509128: 0xac40c5a8  sw          $zero, -0x3A58($v0)
    ctx->pc = 0x509128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952360), GPR_U32(ctx, 0));
    // 0x50912c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50912cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x509130: 0x24423ec4  addiu       $v0, $v0, 0x3EC4
    ctx->pc = 0x509130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16068));
    // 0x509134: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x509134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x509138: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x509138u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x50913c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50913cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x509140: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x509140u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x509144: 0xc1423ca  jal         func_508F28
    ctx->pc = 0x509144u;
    SET_GPR_U32(ctx, 31, 0x50914Cu);
    ctx->pc = 0x509148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509144u;
    // 0x509148: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508F28u, 0x509144u, 0x50914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50914Cu;
label_50914c:
    // 0x50914c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50914cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509150: 0x86424e36  lh          $v0, 0x4E36($s2)
    ctx->pc = 0x509150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20022)));
    // 0x509154: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x509154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x509158: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x509158u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50915c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x509160: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x509160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x509164: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x509164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x509168: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x509168u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50916c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50916cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x509170: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x509170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x509174: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x509174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x509178: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x509178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50917c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50917cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509180: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x509180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x509184: 0x86464e38  lh          $a2, 0x4E38($s2)
    ctx->pc = 0x509184u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20024)));
    // 0x509188: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x509188u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x50918c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50918cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x509190: 0x86444e3a  lh          $a0, 0x4E3A($s2)
    ctx->pc = 0x509190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20026)));
    // 0x509194: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x509194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x509198: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x509198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x50919c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50919cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5091a0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x5091a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x5091a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5091a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5091a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5091a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5091ac: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x5091acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x5091b0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x5091b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x5091b4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x5091b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5091b8: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x5091b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x5091bc: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x5091bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x5091c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5091c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5091c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5091c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5091c8: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x5091c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x5091cc: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x5091ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x5091d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x5091d4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x5091d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x5091d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x5091d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x5091dc: 0xc1423ca  jal         func_508F28
    ctx->pc = 0x5091DCu;
    SET_GPR_U32(ctx, 31, 0x5091E4u);
    ctx->pc = 0x5091E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5091DCu;
    // 0x5091e0: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508F28u, 0x5091DCu, 0x5091E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5091E4u;
label_5091e4:
    // 0x5091e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5091e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5091e8: 0x86424e3c  lh          $v0, 0x4E3C($s2)
    ctx->pc = 0x5091e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20028)));
    // 0x5091ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5091ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5091f0: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x5091f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5091f4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x5091f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x5091f8: 0x86484e40  lh          $t0, 0x4E40($s2)
    ctx->pc = 0x5091f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20032)));
    // 0x5091fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5091fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x509200: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x509200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x509204: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x509204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x509208: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x509208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50920c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x50920cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x509210: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x509210u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x509214: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x509214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509218: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x509218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x50921c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x50921cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x509220: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x509220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x509224: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x509224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x509228: 0x86444e3e  lh          $a0, 0x4E3E($s2)
    ctx->pc = 0x509228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20030)));
    // 0x50922c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x509230: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x509230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x509234: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x509234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x509238: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x509238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x50923c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50923cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x509240: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x509240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x509244: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x509244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x509248: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x509248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x50924c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50924cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509250: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x509250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x509254: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x509254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x509258: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x509258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50925c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50925cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x509260: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x509260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x509264: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x509264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x509268: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x509268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x50926c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x50926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x509270: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x509270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x509274: 0xc1423ca  jal         func_508F28
    ctx->pc = 0x509274u;
    SET_GPR_U32(ctx, 31, 0x50927Cu);
    ctx->pc = 0x509278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509274u;
    // 0x509278: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508F28u, 0x509274u, 0x50927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50927Cu;
label_50927c:
    // 0x50927c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x50927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x509280: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x509280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x509284: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x509284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x509288: 0x3c080090  lui         $t0, 0x90
    ctx->pc = 0x509288u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)144 << 16));
    // 0x50928c: 0x2484f0d0  addiu       $a0, $a0, -0xF30
    ctx->pc = 0x50928cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963408));
    // 0x509290: 0x2508f0d4  addiu       $t0, $t0, -0xF2C
    ctx->pc = 0x509290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963412));
    // 0x509294: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x509294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8FF0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D0u, _value); } while (0);
    // 0x509298: 0xc124620  jal         func_491880
    ctx->pc = 0x509298u;
    SET_GPR_U32(ctx, 31, 0x5092A0u);
    ctx->pc = 0x50929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509298u;
    // 0x50929c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x509298u, 0x5092A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5092A0u;
label_5092a0:
    // 0x5092a0: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x5092a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x5092a4: 0x24843ec4  addiu       $a0, $a0, 0x3EC4
    ctx->pc = 0x5092a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16068));
    // 0x5092a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5092a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5092ac: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x5092acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x903EC4u));
    // 0x5092b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5092b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5092b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5092b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5092b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5092b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5092bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5092bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5092c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x5092c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5092c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x5092c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5092c8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x5092c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5092cc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x5092ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5092d0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x5092d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x5092d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x5092d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x5092d8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x5092d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x5092dc: 0xa423e812  sh          $v1, -0x17EE($at)
    ctx->pc = 0x5092dcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961170), (uint16_t)GPR_U32(ctx, 3));
    // 0x5092e0: 0x3e00008  jr          $ra
    ctx->pc = 0x5092E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5092E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5092E0u;
        // 0x5092e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5092E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5092E8u;
}
