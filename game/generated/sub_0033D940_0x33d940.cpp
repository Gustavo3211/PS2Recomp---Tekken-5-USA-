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

// Function: sub_0033D940
// Address: 0x33d940 - 0x33dab0
void sub_0033D940_0x33d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D940_0x33d940");
#endif

    switch (ctx->pc) {
        case 0x33d9c0u: goto label_33d9c0;
        case 0x33d9f4u: goto label_33d9f4;
        case 0x33da0cu: goto label_33da0c;
        default: break;
    }

    ctx->pc = 0x33d940u;

    // 0x33d940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33d944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33d944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d948: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33d948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33d94c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33d94cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d954: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x33d954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x33d958: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x33d958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x33d95c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33d95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33d960: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33d960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33d964: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33d968: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33d968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x33d96c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x33d96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x33d970: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x33d970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x33d974: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x33d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x33d978: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x33d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x33d97c: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x33d97cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x33d980: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x33d980u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33d984: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x33d984u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x33d988: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x33d988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x33d98c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33d98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d990: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33D990u;
    {
        const bool branch_taken_0x33d990 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d990) {
            ctx->pc = 0x33D994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D990u;
            // 0x33d994: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D998u;
label_33d998:
    // 0x33d998: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33d998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d99c: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x33d99cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x33d9a0: 0x1812  mflo        $v1
    ctx->pc = 0x33d9a0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x33d9a4: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x33D9A4u;
    {
        const bool branch_taken_0x33d9a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D9A4u;
        // 0x33d9a8: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d9a4) {
            ctx->pc = 0x33DA58u;
            goto label_33da58;
        }
    }
    ctx->pc = 0x33D9ACu;
    // 0x33d9ac: 0x341ec000  ori         $fp, $zero, 0xC000
    ctx->pc = 0x33d9acu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x33d9b0: 0x1ef37c  dsll32      $fp, $fp, 13
    ctx->pc = 0x33d9b0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 13));
    // 0x33d9b4: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x33d9b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x33d9b8: 0x36d60005  ori         $s6, $s6, 0x5
    ctx->pc = 0x33d9b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)5);
    // 0x33d9bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x33d9bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d9c0:
    // 0x33d9c0: 0x2e420101  sltiu       $v0, $s2, 0x101
    ctx->pc = 0x33d9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x33d9c4: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x33d9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x33d9c8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x33D9C8u;
    {
        const bool branch_taken_0x33d9c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D9C8u;
        // 0x33d9cc: 0x242880b  movn        $s1, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d9c8) {
            ctx->pc = 0x33D9E8u;
            goto label_33d9e8;
        }
    }
    ctx->pc = 0x33D9D0u;
    // 0x33d9d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x33d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x33d9d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33d9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33d9d8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x33d9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x33d9dc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x33d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33d9e0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x33d9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x33d9e4: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x33d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_33d9e8:
    // 0x33d9e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33d9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d9ec: 0xc0cf6d2  jal         func_33DB48
    ctx->pc = 0x33D9ECu;
    SET_GPR_U32(ctx, 31, 0x33D9F4u);
    ctx->pc = 0x33D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D9ECu;
    // 0x33d9f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DB48u, 0x33D9ECu, 0x33D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D9F4u;
label_33d9f4:
    // 0x33d9f4: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x33d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x33d9f8: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x33d9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x33d9fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33d9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33da00: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x33da00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x33da04: 0xc0cf6e2  jal         func_33DB88
    ctx->pc = 0x33DA04u;
    SET_GPR_U32(ctx, 31, 0x33DA0Cu);
    ctx->pc = 0x33DA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA04u;
    // 0x33da08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DB88u, 0x33DA04u, 0x33DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA0Cu;
label_33da0c:
    // 0x33da0c: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x33da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x33da10: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x33da10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x33da14: 0x2371818  mult        $v1, $s1, $s7
    ctx->pc = 0x33da14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33da18: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x33da18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x33da1c: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x33da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x33da20: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x33da20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
    // 0x33da24: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x33da24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x33da28: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x33da28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x33da2c: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x33da2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x33da30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33da30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33da34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33da34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x33da38: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x33da38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x33da3c: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x33da3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x33da40: 0x72b6b389  pcpyld      $s6, $s5, $s6
    ctx->pc = 0x33da40u;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 21), GPR_VEC(ctx, 22)));
    // 0x33da44: 0x7e160060  sq          $s6, 0x60($s0)
    ctx->pc = 0x33da44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 22));
    // 0x33da48: 0x2519023  subu        $s2, $s2, $s1
    ctx->pc = 0x33da48u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x33da4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33da4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33da50: 0x1640ffdb  bnez        $s2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x33DA50u;
    {
        const bool branch_taken_0x33da50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA50u;
        // 0x33da54: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da50) {
            ctx->pc = 0x33D9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d9c0;
        }
    }
    ctx->pc = 0x33DA58u;
label_33da58:
    // 0x33da58: 0x2605ff90  addiu       $a1, $s0, -0x70
    ctx->pc = 0x33da58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967184));
    // 0x33da5c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x33da5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33da60: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x33da60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x33da64: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x33da64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x33da68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33da68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33da6c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33da6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x33da70: 0xfca20040  sd          $v0, 0x40($a1)
    ctx->pc = 0x33da70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 2));
    // 0x33da74: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33da74u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33da78: 0x7e04fff0  sq          $a0, -0x10($s0)
    ctx->pc = 0x33da78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_VEC(ctx, 4));
    // 0x33da7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33da7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33da80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33da80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33da84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33da84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33da88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33da88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33da8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33da8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33da90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x33da90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33da94: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x33da94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33da98: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x33da98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33da9c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x33da9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33daa0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x33daa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33daa4: 0x3e00008  jr          $ra
    ctx->pc = 0x33DAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAA4u;
        // 0x33daa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DAACu;
    // 0x33daac: 0x0  nop
    ctx->pc = 0x33daacu;
    // NOP
    ctx->pc = 0x33dab0u;
}
