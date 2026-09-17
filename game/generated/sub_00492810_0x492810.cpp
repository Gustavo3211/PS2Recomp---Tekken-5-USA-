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

// Function: sub_00492810
// Address: 0x492810 - 0x492b98
void sub_00492810_0x492810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492810_0x492810");
#endif

    switch (ctx->pc) {
        case 0x4928b0u: goto label_4928b0;
        case 0x492950u: goto label_492950;
        case 0x4929a8u: goto label_4929a8;
        case 0x4929b8u: goto label_4929b8;
        case 0x4929ecu: goto label_4929ec;
        case 0x492a20u: goto label_492a20;
        case 0x492a94u: goto label_492a94;
        case 0x492a9cu: goto label_492a9c;
        case 0x492aa8u: goto label_492aa8;
        case 0x492ad4u: goto label_492ad4;
        case 0x492ae0u: goto label_492ae0;
        case 0x492b08u: goto label_492b08;
        case 0x492b14u: goto label_492b14;
        case 0x492b1cu: goto label_492b1c;
        case 0x492b28u: goto label_492b28;
        case 0x492b54u: goto label_492b54;
        case 0x492b60u: goto label_492b60;
        default: break;
    }

    ctx->pc = 0x492810u;

    // 0x492810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x492810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x492814: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x492814u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x492818: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x492818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x49281c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x49281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x492820: 0x2412ff00  addiu       $s2, $zero, -0x100
    ctx->pc = 0x492820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x492824: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x492824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x492828: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x492828u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
    // 0x49282c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x49282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x492830: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x492830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492834: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x492834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x492838: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x492838u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49283c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x492840: 0x2671d680  addiu       $s1, $s3, -0x2980
    ctx->pc = 0x492840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x492844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x492844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x492848: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x492848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49284c: 0x86230026  lh          $v1, 0x26($s1)
    ctx->pc = 0x49284cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D6A6u));
    // 0x492850: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x492850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x492854: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x492854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x492858: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x492858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x49285c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x49285cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x492860: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x492860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x492864: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x492864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x492868: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x492868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x49286c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x49286cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x492870: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x492870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x492874: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x492874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x492878: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x492878u;
    {
        const bool branch_taken_0x492878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492878u;
        // 0x49287c: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492878) {
            ctx->pc = 0x4928DCu;
            goto label_4928dc;
        }
    }
    ctx->pc = 0x492880u;
    // 0x492880: 0x96230022  lhu         $v1, 0x22($s1)
    ctx->pc = 0x492880u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x492884: 0x360400ff  ori         $a0, $s0, 0xFF
    ctx->pc = 0x492884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)255);
    // 0x492888: 0x2122824  and         $a1, $s0, $s2
    ctx->pc = 0x492888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
    // 0x49288c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49288cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492890: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x492890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x492894: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x492894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492898: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x492898u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49289c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49289Cu;
    {
        const bool branch_taken_0x49289c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4928A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49289Cu;
        // 0x4928a0: 0xa2800a  movz        $s0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49289c) {
            ctx->pc = 0x4928B8u;
            goto label_4928b8;
        }
    }
    ctx->pc = 0x4928A4u;
    // 0x4928a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4928a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4928a8: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x4928A8u;
    SET_GPR_U32(ctx, 31, 0x4928B0u);
    ctx->pc = 0x4928ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4928A8u;
    // 0x4928ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x4928A8u, 0x4928B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4928B0u;
label_4928b0:
    // 0x4928b0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4928b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4928b4: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4928b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_4928b8:
    // 0x4928b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4928B8u;
    {
        const bool branch_taken_0x4928b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4928BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4928B8u;
        // 0x4928bc: 0xa6230020  sh          $v1, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4928b8) {
            ctx->pc = 0x4928D0u;
            goto label_4928d0;
        }
    }
    ctx->pc = 0x4928C0u;
    // 0x4928c0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4928c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4928c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4928C4u;
    {
        const bool branch_taken_0x4928c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4928C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4928C4u;
        // 0x4928c8: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4928c4) {
            ctx->pc = 0x4928D8u;
            goto label_4928d8;
        }
    }
    ctx->pc = 0x4928CCu;
    // 0x4928cc: 0x0  nop
    ctx->pc = 0x4928ccu;
    // NOP
label_4928d0:
    // 0x4928d0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4928d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4928d4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4928d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_4928d8:
    // 0x4928d8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x4928d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_4928dc:
    // 0x4928dc: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x4928dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4928e0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4928e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4928e4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4928e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4928e8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4928e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4928ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4928ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4928f0: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x4928f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4928f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4928f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4928f8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4928f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4928fc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4928fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x492900: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x492900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x492904: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x492904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x492908: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x492908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49290c: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x49290cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x492910: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x492910u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x492914: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x492914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x492918: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x492918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49291c: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x49291cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x492920: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x492920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x492924: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x492924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x492928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x492928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49292c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49292cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x492930: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x492930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x492934: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x492934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x492938: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x492938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x49293c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x49293cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x492940: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x492940u;
    {
        const bool branch_taken_0x492940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492940) {
            ctx->pc = 0x492944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492940u;
            // 0x492944: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4929E0u;
            goto label_4929e0;
        }
    }
    ctx->pc = 0x492948u;
    // 0x492948: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x492948u;
    SET_GPR_U32(ctx, 31, 0x492950u);
    ctx->pc = 0x49294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492948u;
    // 0x49294c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x492948u, 0x492950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492950u;
label_492950:
    // 0x492950: 0x2668d680  addiu       $t0, $s3, -0x2980
    ctx->pc = 0x492950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x492954: 0x85060026  lh          $a2, 0x26($t0)
    ctx->pc = 0x492954u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 38)));
    // 0x492958: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x492958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49295c: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x49295cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492960: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x492960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x492964: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x492964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492968: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x492968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49296c: 0x8507002a  lh          $a3, 0x2A($t0)
    ctx->pc = 0x49296cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 42)));
    // 0x492970: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x492970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x492974: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x492974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x492978: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x492978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49297c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x49297cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x492980: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x492980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x492984: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x492984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x492988: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x492988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49298c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x49298cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x492990: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x492990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x492994: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x492994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x492998: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x492998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x49299c: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x49299cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4929a0: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x4929A0u;
    SET_GPR_U32(ctx, 31, 0x4929A8u);
    ctx->pc = 0x4929A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4929A0u;
    // 0x4929a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x4929A0u, 0x4929A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4929A8u;
label_4929a8:
    // 0x4929a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4929a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4929ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4929acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4929b0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4929B0u;
    SET_GPR_U32(ctx, 31, 0x4929B8u);
    ctx->pc = 0x4929B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4929B0u;
    // 0x4929b4: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4929B0u, 0x4929B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4929B8u;
label_4929b8:
    // 0x4929b8: 0x87a2000c  lh          $v0, 0xC($sp)
    ctx->pc = 0x4929b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4929bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4929BCu;
    {
        const bool branch_taken_0x4929bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4929C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4929BCu;
        // 0x4929c0: 0x87a20000  lh          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4929bc) {
            ctx->pc = 0x4929DCu;
            goto label_4929dc;
        }
    }
    ctx->pc = 0x4929C4u;
    // 0x4929c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4929c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4929c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4929c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4929cc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4929ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4929d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4929d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4929d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4929d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4929d8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4929d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_4929dc:
    // 0x4929dc: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4929dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_4929e0:
    // 0x4929e0: 0x2663d680  addiu       $v1, $s3, -0x2980
    ctx->pc = 0x4929e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4929e4: 0xc12483e  jal         func_4920F8
    ctx->pc = 0x4929E4u;
    SET_GPR_U32(ctx, 31, 0x4929ECu);
    ctx->pc = 0x4929E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4929E4u;
    // 0x4929e8: 0xa4620028  sh          $v0, 0x28($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4920F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4920F8u, 0x4929E4u, 0x4929ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4929ECu;
label_4929ec:
    // 0x4929ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4929ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4929f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4929f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4929f4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4929f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4929f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4929f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4929fc: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x4929fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x492a00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x492a00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x492a04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x492a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x492a08: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x492a08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x492a0c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x492a0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x492a10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x492a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x492a14: 0x3e00008  jr          $ra
    ctx->pc = 0x492A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x492A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492A14u;
        // 0x492a18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492A1Cu;
    // 0x492a1c: 0x0  nop
    ctx->pc = 0x492a1cu;
    // NOP
label_492a20:
    // 0x492a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x492a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x492a24: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x492a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x492a28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x492a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x492a2c: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x492a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x492a30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x492a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x492a34: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x492a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x492a38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x492a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x492a3c: 0x2632002c  addiu       $s2, $s1, 0x2C
    ctx->pc = 0x492a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x492a40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x492a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x492a44: 0x2633002e  addiu       $s3, $s1, 0x2E
    ctx->pc = 0x492a44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 46));
    // 0x492a48: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x492a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x492a4c: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x492a4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x492a50: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x492a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x492a54: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x492a54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492a58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x492a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x492a5c: 0x26280022  addiu       $t0, $s1, 0x22
    ctx->pc = 0x492a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    // 0x492a60: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x492a60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x492a64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x492a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x492a68: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x492a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x492a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x492a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492a70: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x492a70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x492a74: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x492a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x492a78: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x492a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x492a7c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x492a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x492a80: 0x28e30100  slti        $v1, $a3, 0x100
    ctx->pc = 0x492a80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x492a84: 0xa6260034  sh          $a2, 0x34($s1)
    ctx->pc = 0x492a84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 6));
    // 0x492a88: 0xe3a80b  movn        $s5, $a3, $v1
    ctx->pc = 0x492a88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 7));
    // 0x492a8c: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x492A8Cu;
    SET_GPR_U32(ctx, 31, 0x492A94u);
    ctx->pc = 0x492A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492A8Cu;
    // 0x492a90: 0xa6260032  sh          $a2, 0x32($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x492A8Cu, 0x492A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492A94u;
label_492a94:
    // 0x492a94: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492A94u;
    SET_GPR_U32(ctx, 31, 0x492A9Cu);
    ctx->pc = 0x492A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492A94u;
    // 0x492a98: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492A94u, 0x492A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492A9Cu;
label_492a9c:
    // 0x492a9c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x492a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x492aa0: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492AA0u;
    SET_GPR_U32(ctx, 31, 0x492AA8u);
    ctx->pc = 0x492AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492AA0u;
    // 0x492aa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492AA0u, 0x492AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492AA8u;
label_492aa8:
    // 0x492aa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x492aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x492aac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x492aacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x492ab0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x492ab0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x492ab4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x492ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x492ab8: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x492ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x492abc: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x492abcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x492ac0: 0x2158023  subu        $s0, $s0, $s5
    ctx->pc = 0x492ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x492ac4: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x492ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x492ac8: 0x102e02  srl         $a1, $s0, 24
    ctx->pc = 0x492ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x492acc: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x492ACCu;
    SET_GPR_U32(ctx, 31, 0x492AD4u);
    ctx->pc = 0x492AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492ACCu;
    // 0x492ad0: 0x108403  sra         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x492ACCu, 0x492AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492AD4u;
label_492ad4:
    // 0x492ad4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x492ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x492ad8: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x492AD8u;
    SET_GPR_U32(ctx, 31, 0x492AE0u);
    ctx->pc = 0x492ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492AD8u;
    // 0x492adc: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x492AD8u, 0x492AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492AE0u;
label_492ae0:
    // 0x492ae0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x492ae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x492ae4: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x492ae4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x492ae8: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x492ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x492aec: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x492aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x492af0: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x492af0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492af4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x492af4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x492af8: 0x28c30100  slti        $v1, $a2, 0x100
    ctx->pc = 0x492af8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x492afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x492afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492b00: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x492B00u;
    SET_GPR_U32(ctx, 31, 0x492B08u);
    ctx->pc = 0x492B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492B00u;
    // 0x492b04: 0xc3a80b  movn        $s5, $a2, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x492B00u, 0x492B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492B08u;
label_492b08:
    // 0x492b08: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x492b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x492b0c: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x492B0Cu;
    SET_GPR_U32(ctx, 31, 0x492B14u);
    ctx->pc = 0x492B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492B0Cu;
    // 0x492b10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x492B0Cu, 0x492B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492B14u;
label_492b14:
    // 0x492b14: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492B14u;
    SET_GPR_U32(ctx, 31, 0x492B1Cu);
    ctx->pc = 0x492B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492B14u;
    // 0x492b18: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492B14u, 0x492B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492B1Cu;
label_492b1c:
    // 0x492b1c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x492b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x492b20: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492B20u;
    SET_GPR_U32(ctx, 31, 0x492B28u);
    ctx->pc = 0x492B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492B20u;
    // 0x492b24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492B20u, 0x492B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492B28u;
label_492b28:
    // 0x492b28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x492b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x492b2c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x492b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x492b30: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x492b30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x492b34: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x492b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x492b38: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x492b38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x492b3c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x492b3cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x492b40: 0x2158023  subu        $s0, $s0, $s5
    ctx->pc = 0x492b40u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x492b44: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x492b44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x492b48: 0x102e02  srl         $a1, $s0, 24
    ctx->pc = 0x492b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x492b4c: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x492B4Cu;
    SET_GPR_U32(ctx, 31, 0x492B54u);
    ctx->pc = 0x492B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492B4Cu;
    // 0x492b50: 0x108403  sra         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x492B4Cu, 0x492B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492B54u;
label_492b54:
    // 0x492b54: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x492b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x492b58: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x492B58u;
    SET_GPR_U32(ctx, 31, 0x492B60u);
    ctx->pc = 0x492B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492B58u;
    // 0x492b5c: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x492B58u, 0x492B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492B60u;
label_492b60:
    // 0x492b60: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x492b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x492b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x492b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492b68: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x492b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x492b6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x492b6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x492b70: 0xa6200030  sh          $zero, 0x30($s1)
    ctx->pc = 0x492b70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x492b74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x492b74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x492b78: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x492b78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x492b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x492b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x492b80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x492b80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x492b84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x492b84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x492b88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x492b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x492b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x492B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x492B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492B8Cu;
        // 0x492b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492B94u;
    // 0x492b94: 0x0  nop
    ctx->pc = 0x492b94u;
    // NOP
    ctx->pc = 0x492b98u;
}
