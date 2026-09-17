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

// Function: sub_00345838
// Address: 0x345838 - 0x345b58
void sub_00345838_0x345838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345838_0x345838");
#endif

    switch (ctx->pc) {
        case 0x345894u: goto label_345894;
        case 0x3458c0u: goto label_3458c0;
        case 0x345900u: goto label_345900;
        case 0x3459a0u: goto label_3459a0;
        case 0x3459b4u: goto label_3459b4;
        case 0x3459b8u: goto label_3459b8;
        case 0x3459c0u: goto label_3459c0;
        case 0x345a4cu: goto label_345a4c;
        case 0x345a78u: goto label_345a78;
        case 0x345ab0u: goto label_345ab0;
        default: break;
    }

    ctx->pc = 0x345838u;

    // 0x345838: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x345838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34583c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34583cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x345840: 0x30f4ffff  andi        $s4, $a3, 0xFFFF
    ctx->pc = 0x345840u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x345844: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x345844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x345848: 0x3155ffff  andi        $s5, $t2, 0xFFFF
    ctx->pc = 0x345848u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x34584c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x34584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x345850: 0x3176ffff  andi        $s6, $t3, 0xFFFF
    ctx->pc = 0x345850u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x345854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345858: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x345858u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x34585c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34585cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x345860: 0x3111ffff  andi        $s1, $t0, 0xFFFF
    ctx->pc = 0x345860u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x345864: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x345864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x345868: 0x3132ffff  andi        $s2, $t1, 0xFFFF
    ctx->pc = 0x345868u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x34586c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34586cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x345870: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x345870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345874: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x345874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x345878: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x345878u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34587c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x34587cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345880: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x345880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345884: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x345884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x345888: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x345888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34588c: 0xc0d16d6  jal         func_345B58
    ctx->pc = 0x34588Cu;
    SET_GPR_U32(ctx, 31, 0x345894u);
    ctx->pc = 0x345890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34588Cu;
    // 0x345890: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345B58u, 0x34588Cu, 0x345894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345894u;
label_345894:
    // 0x345894: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x345894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345898: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x345898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x34589c: 0x24845ac0  addiu       $a0, $a0, 0x5AC0
    ctx->pc = 0x34589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23232));
    // 0x3458a0: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x3458a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3458a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3458a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3458a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3458a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3458ac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3458acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3458b0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x3458b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3458b4: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x3458b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3458b8: 0xc0d16ee  jal         func_345BB8
    ctx->pc = 0x3458B8u;
    SET_GPR_U32(ctx, 31, 0x3458C0u);
    ctx->pc = 0x3458BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3458B8u;
    // 0x3458bc: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345BB8u, 0x3458B8u, 0x3458C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3458C0u;
label_3458c0:
    // 0x3458c0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x3458c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x3458c4: 0x24425ac0  addiu       $v0, $v0, 0x5AC0
    ctx->pc = 0x3458c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23232));
    // 0x3458c8: 0x13c0002b  beqz        $fp, . + 4 + (0x2B << 2)
    ctx->pc = 0x3458C8u;
    {
        const bool branch_taken_0x3458c8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3458CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458C8u;
        // 0x3458cc: 0x24480060  addiu       $t0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3458c8) {
            ctx->pc = 0x345978u;
            goto label_345978;
        }
    }
    ctx->pc = 0x3458D0u;
    // 0x3458d0: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x3458d0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x3458d4: 0x24104000  addiu       $s0, $zero, 0x4000
    ctx->pc = 0x3458d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3458d8: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x3458d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x3458dc: 0x356b0001  ori         $t3, $t3, 0x1
    ctx->pc = 0x3458dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x3458e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3458e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3458e4: 0x340fc000  ori         $t7, $zero, 0xC000
    ctx->pc = 0x3458e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x3458e8: 0xf7b7c  dsll32      $t7, $t7, 13
    ctx->pc = 0x3458e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 13));
    // 0x3458ec: 0x3c0e3000  lui         $t6, 0x3000
    ctx->pc = 0x3458ecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)12288 << 16));
    // 0x3458f0: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x3458f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x3458f4: 0x3c0df000  lui         $t5, 0xF000
    ctx->pc = 0x3458f4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)61440 << 16));
    // 0x3458f8: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x3458f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x3458fc: 0x0  nop
    ctx->pc = 0x3458fcu;
    // NOP
label_345900:
    // 0x345900: 0x2fc24001  sltiu       $v0, $fp, 0x4001
    ctx->pc = 0x345900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x345904: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x345904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345908: 0x3c2300b  movn        $a2, $fp, $v0
    ctx->pc = 0x345908u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 30));
    // 0x34590c: 0x712b5b89  pcpyld      $t3, $t1, $t3
    ctx->pc = 0x34590cu;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x345910: 0x7d0b0000  sq          $t3, 0x0($t0)
    ctx->pc = 0x345910u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 11));
    // 0x345914: 0x34c28000  ori         $v0, $a2, 0x8000
    ctx->pc = 0x345914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x345918: 0x2ed2825  or          $a1, $s7, $t5
    ctx->pc = 0x345918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | GPR_U64(ctx, 13));
    // 0x34591c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34591cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345920: 0xce1825  or          $v1, $a2, $t6
    ctx->pc = 0x345920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 14));
    // 0x345924: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x345924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x345928: 0x2ec2024  and         $a0, $s7, $t4
    ctx->pc = 0x345928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & GPR_U64(ctx, 12));
    // 0x34592c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x34592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x345930: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x345930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x345934: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x345934u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x345938: 0x2ea2824  and         $a1, $s7, $t2
    ctx->pc = 0x345938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & GPR_U64(ctx, 10));
    // 0x34593c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x34593cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x345940: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x345940u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x345944: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x345944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x345948: 0x14aa0003  bne         $a1, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x345948u;
    {
        const bool branch_taken_0x345948 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        ctx->pc = 0x34594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345948u;
        // 0x34594c: 0xfd000018  sd          $zero, 0x18($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345948) {
            ctx->pc = 0x345958u;
            goto label_345958;
        }
    }
    ctx->pc = 0x345950u;
    // 0x345950: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x345950u;
    {
        const bool branch_taken_0x345950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345950u;
        // 0x345954: 0x671825  or          $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345950) {
            ctx->pc = 0x34595Cu;
            goto label_34595c;
        }
    }
    ctx->pc = 0x345958u;
label_345958:
    // 0x345958: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x345958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_34595c:
    // 0x34595c: 0x71231b89  pcpyld      $v1, $t1, $v1
    ctx->pc = 0x34595cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x345960: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x345960u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
    // 0x345964: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x345964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x345968: 0x3c6f023  subu        $fp, $fp, $a2
    ctx->pc = 0x345968u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x34596c: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x34596cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x345970: 0x17c0ffe3  bnez        $fp, . + 4 + (-0x1D << 2)
    ctx->pc = 0x345970u;
    {
        const bool branch_taken_0x345970 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x345974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345970u;
        // 0x345974: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345970) {
            ctx->pc = 0x345900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345900;
        }
    }
    ctx->pc = 0x345978u;
label_345978:
    // 0x345978: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x345978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34597c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34597cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345980: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x345980u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x345984: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x345984u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x345988: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x345988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x34598c: 0x24425ac0  addiu       $v0, $v0, 0x5AC0
    ctx->pc = 0x34598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23232));
    // 0x345990: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x345990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x345994: 0x24845ac0  addiu       $a0, $a0, 0x5AC0
    ctx->pc = 0x345994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23232));
    // 0x345998: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x345998u;
    SET_GPR_U32(ctx, 31, 0x3459A0u);
    ctx->pc = 0x34599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345998u;
    // 0x34599c: 0x244503ff  addiu       $a1, $v0, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x345998u, 0x3459A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459A0u;
label_3459a0:
    // 0x3459a0: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x3459a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x3459a4: 0x24845ac0  addiu       $a0, $a0, 0x5AC0
    ctx->pc = 0x3459a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23232));
    // 0x3459a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3459a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3459ac: 0xc0cd0f8  jal         func_3343E0
    ctx->pc = 0x3459ACu;
    SET_GPR_U32(ctx, 31, 0x3459B4u);
    ctx->pc = 0x3459B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3459ACu;
    // 0x3459b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3343E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3343E0u, 0x3459ACu, 0x3459B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459B4u;
label_3459b4:
    // 0x3459b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3459b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3459b8:
    // 0x3459b8: 0xc0cd138  jal         func_3344E0
    ctx->pc = 0x3459B8u;
    SET_GPR_U32(ctx, 31, 0x3459C0u);
    ctx->pc = 0x3459BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3459B8u;
    // 0x3459bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3344E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3344E0u, 0x3459B8u, 0x3459C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459C0u;
label_3459c0:
    // 0x3459c0: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3459C0u;
    {
        const bool branch_taken_0x3459c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3459C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459C0u;
        // 0x3459c4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3459c0) {
            ctx->pc = 0x3459B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3459b8;
        }
    }
    ctx->pc = 0x3459C8u;
    // 0x3459c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3459c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3459cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3459ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3459d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3459d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3459d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3459d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3459d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3459d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3459dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3459dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3459e0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3459e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3459e4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x3459e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3459e8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3459e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3459ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3459ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3459F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459ECu;
        // 0x3459f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3459ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3459F4u;
    // 0x3459f4: 0x0  nop
    ctx->pc = 0x3459f4u;
    // NOP
    // 0x3459f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3459f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3459fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3459fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x345a00: 0x3111ffff  andi        $s1, $t0, 0xFFFF
    ctx->pc = 0x345a00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x345a04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x345a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x345a08: 0x3132ffff  andi        $s2, $t1, 0xFFFF
    ctx->pc = 0x345a08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x345a0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x345a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x345a10: 0x3153ffff  andi        $s3, $t2, 0xFFFF
    ctx->pc = 0x345a10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x345a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345a18: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x345a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x345a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x345a20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x345a20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a24: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x345a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x345a28: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x345a28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x345a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x345a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x345a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x345a3c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x345a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x345a40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x345a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x345a44: 0xc0d16d6  jal         func_345B58
    ctx->pc = 0x345A44u;
    SET_GPR_U32(ctx, 31, 0x345A4Cu);
    ctx->pc = 0x345A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A44u;
    // 0x345a48: 0x30f4ffff  andi        $s4, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x345B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345B58u, 0x345A44u, 0x345A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A4Cu;
label_345a4c:
    // 0x345a4c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x345a4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x345a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a54: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x345a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x345a58: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x345a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x345a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a60: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x345a60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a64: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x345a64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x345a68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x345a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a70: 0xc0d16ee  jal         func_345BB8
    ctx->pc = 0x345A70u;
    SET_GPR_U32(ctx, 31, 0x345A78u);
    ctx->pc = 0x345A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A70u;
    // 0x345a74: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345BB8u, 0x345A70u, 0x345A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A78u;
label_345a78:
    // 0x345a78: 0x12e0002c  beqz        $s7, . + 4 + (0x2C << 2)
    ctx->pc = 0x345A78u;
    {
        const bool branch_taken_0x345a78 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A78u;
        // 0x345a7c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a78) {
            ctx->pc = 0x345B2Cu;
            goto label_345b2c;
        }
    }
    ctx->pc = 0x345A80u;
    // 0x345a80: 0x3c0b0fff  lui         $t3, 0xFFF
    ctx->pc = 0x345a80u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4095 << 16));
    // 0x345a84: 0x240f4000  addiu       $t7, $zero, 0x4000
    ctx->pc = 0x345a84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x345a88: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x345a88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x345a8c: 0x354a0001  ori         $t2, $t2, 0x1
    ctx->pc = 0x345a8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1);
    // 0x345a90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x345a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a94: 0x340ec000  ori         $t6, $zero, 0xC000
    ctx->pc = 0x345a94u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x345a98: 0xe737c  dsll32      $t6, $t6, 13
    ctx->pc = 0x345a98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 13));
    // 0x345a9c: 0x3c0d3000  lui         $t5, 0x3000
    ctx->pc = 0x345a9cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)12288 << 16));
    // 0x345aa0: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x345aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x345aa4: 0x3c0cf000  lui         $t4, 0xF000
    ctx->pc = 0x345aa4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)61440 << 16));
    // 0x345aa8: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x345aa8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x345aac: 0x0  nop
    ctx->pc = 0x345aacu;
    // NOP
label_345ab0:
    // 0x345ab0: 0x2ee24001  sltiu       $v0, $s7, 0x4001
    ctx->pc = 0x345ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x345ab4: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x345ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345ab8: 0x2e2300b  movn        $a2, $s7, $v0
    ctx->pc = 0x345ab8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 23));
    // 0x345abc: 0x710a5389  pcpyld      $t2, $t0, $t2
    ctx->pc = 0x345abcu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x345ac0: 0x7eaa0000  sq          $t2, 0x0($s5)
    ctx->pc = 0x345ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 10));
    // 0x345ac4: 0x34c28000  ori         $v0, $a2, 0x8000
    ctx->pc = 0x345ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x345ac8: 0x2cc2825  or          $a1, $s6, $t4
    ctx->pc = 0x345ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 12));
    // 0x345acc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x345accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345ad0: 0xcd1825  or          $v1, $a2, $t5
    ctx->pc = 0x345ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x345ad4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x345ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x345ad8: 0x2cb2024  and         $a0, $s6, $t3
    ctx->pc = 0x345ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & GPR_U64(ctx, 11));
    // 0x345adc: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x345adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x345ae0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x345ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x345ae4: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x345ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x345ae8: 0x2c92824  and         $a1, $s6, $t1
    ctx->pc = 0x345ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & GPR_U64(ctx, 9));
    // 0x345aec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x345aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x345af0: 0xfea20010  sd          $v0, 0x10($s5)
    ctx->pc = 0x345af0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
    // 0x345af4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x345af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x345af8: 0x14a90003  bne         $a1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x345AF8u;
    {
        const bool branch_taken_0x345af8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x345AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AF8u;
        // 0x345afc: 0xfea00018  sd          $zero, 0x18($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345af8) {
            ctx->pc = 0x345B08u;
            goto label_345b08;
        }
    }
    ctx->pc = 0x345B00u;
    // 0x345b00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x345B00u;
    {
        const bool branch_taken_0x345b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B00u;
        // 0x345b04: 0x671825  or          $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b00) {
            ctx->pc = 0x345B0Cu;
            goto label_345b0c;
        }
    }
    ctx->pc = 0x345B08u;
label_345b08:
    // 0x345b08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x345b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_345b0c:
    // 0x345b0c: 0x71031b89  pcpyld      $v1, $t0, $v1
    ctx->pc = 0x345b0cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x345b10: 0x7ea30020  sq          $v1, 0x20($s5)
    ctx->pc = 0x345b10u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 3));
    // 0x345b14: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x345b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x345b18: 0x2e6b823  subu        $s7, $s7, $a2
    ctx->pc = 0x345b18u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x345b1c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x345b1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x345b20: 0x16e0ffe3  bnez        $s7, . + 4 + (-0x1D << 2)
    ctx->pc = 0x345B20u;
    {
        const bool branch_taken_0x345b20 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x345B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B20u;
        // 0x345b24: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b20) {
            ctx->pc = 0x345AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345ab0;
        }
    }
    ctx->pc = 0x345B28u;
    // 0x345b28: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x345b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_345b2c:
    // 0x345b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345b30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345b34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345b34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345b38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x345b38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345b3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x345b3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345b40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x345b40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345b44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x345b44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x345b48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x345b48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345b4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x345b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x345b50: 0x3e00008  jr          $ra
    ctx->pc = 0x345B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B50u;
        // 0x345b54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345B58u;
}
