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

// Function: sub_0032A8E0
// Address: 0x32a8e0 - 0x32ac30
void sub_0032A8E0_0x32a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A8E0_0x32a8e0");
#endif

    switch (ctx->pc) {
        case 0x32a988u: goto label_32a988;
        case 0x32a998u: goto label_32a998;
        case 0x32a9c4u: goto label_32a9c4;
        case 0x32aa48u: goto label_32aa48;
        case 0x32aa78u: goto label_32aa78;
        case 0x32ab28u: goto label_32ab28;
        case 0x32ab74u: goto label_32ab74;
        default: break;
    }

    ctx->pc = 0x32a8e0u;

    // 0x32a8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32a8e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32a8e8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x32a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x32a8ec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x32a8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8f0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x32a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x32a8f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x32a8f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x32a8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x32a8fc: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x32a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x32a900: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x32a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x32a904: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x32a904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x32a908: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x32a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x32a90c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x32a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x32a910: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x32a910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x32a914: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x32a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x32a918: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x32a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x32a91c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x32a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x32a920: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x32a920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x32a924: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x32a924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x32a928: 0x8c760014  lw          $s6, 0x14($v1)
    ctx->pc = 0x32a928u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x400414u));
    // 0x32a92c: 0xdab50000  lqc2        $vf21, 0x0($s5)
    ctx->pc = 0x32a92cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32a930: 0x48b33800  qmtc2.ni    $s3, $vf7
    ctx->pc = 0x32a930u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 19));
    // 0x32a934: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x32a934u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x32a938: 0x4b07393c  vitof0.x    $vf7, $vf7
    ctx->pc = 0x32a938u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[7]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x32a93c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x32a93cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x32a940: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x32a940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x32a944: 0x1260008d  beqz        $s3, . + 4 + (0x8D << 2)
    ctx->pc = 0x32A944u;
    {
        const bool branch_taken_0x32a944 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A944u;
        // 0x32a948: 0x26b50020  addiu       $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a944) {
            ctx->pc = 0x32AB7Cu;
            goto label_32ab7c;
        }
    }
    ctx->pc = 0x32A94Cu;
    // 0x32a94c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x32a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x32a950: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32a950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32a954: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x32a954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x32a958: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32a958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32a95c: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x32a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x32a960: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x32a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x32a964: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x32a964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
    // 0x32a968: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x32a968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x32a96c: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x32a96cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x32a970: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x32a970u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x32a974: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x32a974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x32a978: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x32a978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x32a97c: 0x37dee010  ori         $fp, $fp, 0xE010
    ctx->pc = 0x32a97cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)57360);
    // 0x32a980: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x32a980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x32a984: 0x36f7d000  ori         $s7, $s7, 0xD000
    ctx->pc = 0x32a984u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)53248);
label_32a988:
    // 0x32a988: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x32a988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32a98c: 0x24a503cc  addiu       $a1, $a1, 0x3CC
    ctx->pc = 0x32a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 972));
    // 0x32a990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32a990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a994: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x32a994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32a998:
    // 0x32a998: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32a99c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x32a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x32a9a0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x32A9A0u;
    {
        const bool branch_taken_0x32a9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9A0u;
        // 0x32a9a4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9a0) {
            ctx->pc = 0x32AAF0u;
            goto label_32aaf0;
        }
    }
    ctx->pc = 0x32A9A8u;
    // 0x32a9a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32a9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32a9ac: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x32a9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x32a9b0: 0x0  nop
    ctx->pc = 0x32a9b0u;
    // NOP
    // 0x32a9b4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32A9B4u;
    {
        const bool branch_taken_0x32a9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9B4u;
        // 0x32a9b8: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9b4) {
            ctx->pc = 0x32A998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a998;
        }
    }
    ctx->pc = 0x32A9BCu;
    // 0x32a9bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32a9bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a9c0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_32a9c4:
    // 0x32a9c4: 0x2e620030  sltiu       $v0, $s3, 0x30
    ctx->pc = 0x32a9c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x32a9c8: 0x249403c0  addiu       $s4, $a0, 0x3C0
    ctx->pc = 0x32a9c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 960));
    // 0x32a9cc: 0x2410002f  addiu       $s0, $zero, 0x2F
    ctx->pc = 0x32a9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x32a9d0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x32a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32a9d4: 0x262800b  movn        $s0, $s3, $v0
    ctx->pc = 0x32a9d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x32a9d8: 0x103440  sll         $a2, $s0, 17
    ctx->pc = 0x32a9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 17));
    // 0x32a9dc: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x32a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x32a9e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32a9e4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x32a9e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a9e8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x32a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x32a9ec: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x32a9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x32a9f0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x32a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x32a9f4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x32a9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x32a9f8: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x32a9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x32a9fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x32a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x32aa00: 0x3c036001  lui         $v1, 0x6001
    ctx->pc = 0x32aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24577 << 16));
    // 0x32aa04: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x32aa04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x32aa08: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x32aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x32aa0c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x32aa0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32aa10: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x32aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32aa14: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x32aa14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x32aa18: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x32aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x32aa1c: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x32aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x32aa20: 0x26a6ffe0  addiu       $a2, $s5, -0x20
    ctx->pc = 0x32aa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967264));
    // 0x32aa24: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x32aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x32aa28: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x32aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x32aa2c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x32aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x32aa30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32aa30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa34: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x32aa34u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x32aa38: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x32aa38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x32aa3c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x32aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x32aa40: 0xc0cab0c  jal         func_32AC30
    ctx->pc = 0x32AA40u;
    SET_GPR_U32(ctx, 31, 0x32AA48u);
    ctx->pc = 0x32AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA40u;
    // 0x32aa44: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AC30u, 0x32AA40u, 0x32AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA48u;
label_32aa48:
    // 0x32aa48: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x32aa48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aa4c: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x32aa4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x32aa50: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x32AA50u;
    {
        const bool branch_taken_0x32aa50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA50u;
        // 0x32aa54: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa50) {
            ctx->pc = 0x32AAD4u;
            goto label_32aad4;
        }
    }
    ctx->pc = 0x32AA58u;
    // 0x32aa58: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32aa5c: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x32aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x32aa60: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x32aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x32aa64: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x32aa64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x32aa68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32aa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa6c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x32aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x32aa70: 0xc0ce218  jal         func_338860
    ctx->pc = 0x32AA70u;
    SET_GPR_U32(ctx, 31, 0x32AA78u);
    ctx->pc = 0x32AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA70u;
    // 0x32aa74: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x32AA70u, 0x32AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA78u;
label_32aa78:
    // 0x32aa78: 0x111902  srl         $v1, $s1, 4
    ctx->pc = 0x32aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x32aa7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x32aa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32aa80: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x32aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x32aa84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32aa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32aa88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x32aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x32aa8c: 0x32433fff  andi        $v1, $s2, 0x3FFF
    ctx->pc = 0x32aa8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16383);
    // 0x32aa90: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x32aa90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x32aa94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32aa98: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x32aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x32aa9c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x32aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x32aaa0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x32aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x32aaa4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32aaa8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x32aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x32aaac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x32aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32aab0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32aab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32aab4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x32aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32aab8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32aabc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x32aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x32aac0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x32aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x32aac4: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x32aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x32aac8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x32aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x32aacc: 0xae920008  sw          $s2, 0x8($s4)
    ctx->pc = 0x32aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 18));
    // 0x32aad0: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x32aad0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32aad4:
    // 0x32aad4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x32aad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aad8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x32aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32aadc: 0x1642000e  bne         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32AADCu;
    {
        const bool branch_taken_0x32aadc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x32AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AADCu;
        // 0x32aae0: 0x2684000c  addiu       $a0, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aadc) {
            ctx->pc = 0x32AB18u;
            goto label_32ab18;
        }
    }
    ctx->pc = 0x32AAE4u;
    // 0x32aae4: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x32aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x32aae8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x32AAE8u;
    {
        const bool branch_taken_0x32aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAE8u;
        // 0x32aaec: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aae8) {
            ctx->pc = 0x32AB54u;
            goto label_32ab54;
        }
    }
    ctx->pc = 0x32AAF0u;
label_32aaf0:
    // 0x32aaf0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x32aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x32aaf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32aaf8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32aafc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x32aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x32ab00: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x32ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x32ab04: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32ab08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ab0c: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x32AB0Cu;
    {
        const bool branch_taken_0x32ab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB0Cu;
        // 0x32ab10: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab0c) {
            ctx->pc = 0x32A9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a9c4;
        }
    }
    ctx->pc = 0x32AB14u;
    // 0x32ab14: 0x0  nop
    ctx->pc = 0x32ab14u;
    // NOP
label_32ab18:
    // 0x32ab18: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x32ab18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x32ab1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32ab1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ab20: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x32ab20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ab24: 0x0  nop
    ctx->pc = 0x32ab24u;
    // NOP
label_32ab28:
    // 0x32ab28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32ab2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AB2Cu;
    {
        const bool branch_taken_0x32ab2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB2Cu;
        // 0x32ab30: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab2c) {
            ctx->pc = 0x32AB3Cu;
            goto label_32ab3c;
        }
    }
    ctx->pc = 0x32AB34u;
    // 0x32ab34: 0x50d20007  beql        $a2, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x32AB34u;
    {
        const bool branch_taken_0x32ab34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        if (branch_taken_0x32ab34) {
            ctx->pc = 0x32AB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AB34u;
            // 0x32ab38: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AB54u;
            goto label_32ab54;
        }
    }
    ctx->pc = 0x32AB3Cu;
label_32ab3c:
    // 0x32ab3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32ab40: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32ab44: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x32ab44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x32ab48: 0x0  nop
    ctx->pc = 0x32ab48u;
    // NOP
    // 0x32ab4c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x32AB4Cu;
    {
        const bool branch_taken_0x32ab4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB4Cu;
        // 0x32ab50: 0x24c60c00  addiu       $a2, $a2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab4c) {
            ctx->pc = 0x32AB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ab28;
        }
    }
    ctx->pc = 0x32AB54u;
label_32ab54:
    // 0x32ab54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32ab58: 0x244403c0  addiu       $a0, $v0, 0x3C0
    ctx->pc = 0x32ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x32ab5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4003C0u));
    // 0x32ab60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32ab64: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AB64u;
    {
        const bool branch_taken_0x32ab64 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x32AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB64u;
        // 0x32ab68: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab64) {
            ctx->pc = 0x32AB74u;
            goto label_32ab74;
        }
    }
    ctx->pc = 0x32AB6Cu;
    // 0x32ab6c: 0xc0ce218  jal         func_338860
    ctx->pc = 0x32AB6Cu;
    SET_GPR_U32(ctx, 31, 0x32AB74u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x32AB6Cu, 0x32AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB74u;
label_32ab74:
    // 0x32ab74: 0x1660ff84  bnez        $s3, . + 4 + (-0x7C << 2)
    ctx->pc = 0x32AB74u;
    {
        const bool branch_taken_0x32ab74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ab74) {
            ctx->pc = 0x32A988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a988;
        }
    }
    ctx->pc = 0x32AB7Cu;
label_32ab7c:
    // 0x32ab7c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32ab80: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x32ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x32ab84: 0x24660400  addiu       $a2, $v1, 0x400
    ctx->pc = 0x32ab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x32ab88: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x32ab88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x32ab8c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x32ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400414u));
    // 0x32ab90: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x32ab90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x32ab94: 0x2c54024  and         $t0, $s6, $a1
    ctx->pc = 0x32ab94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x32ab98: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x32ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32ab9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32aba0: 0x961023  subu        $v0, $a0, $s6
    ctx->pc = 0x32aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x32aba4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x32aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x32aba8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x32aba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x32abac: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x32abacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x32abb0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x32abb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x32abb4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x32abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x32abb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32abb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32abbc: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x32abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
    // 0x32abc0: 0x15050005  bne         $t0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32ABC0u;
    {
        const bool branch_taken_0x32abc0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x32ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABC0u;
        // 0x32abc4: 0x2183e  dsrl32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abc0) {
            ctx->pc = 0x32ABD8u;
            goto label_32abd8;
        }
    }
    ctx->pc = 0x32ABC8u;
    // 0x32abc8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x32abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x32abcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32ABCCu;
    {
        const bool branch_taken_0x32abcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABCCu;
        // 0x32abd0: 0x2c21025  or          $v0, $s6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abcc) {
            ctx->pc = 0x32ABE4u;
            goto label_32abe4;
        }
    }
    ctx->pc = 0x32ABD4u;
    // 0x32abd4: 0x0  nop
    ctx->pc = 0x32abd4u;
    // NOP
label_32abd8:
    // 0x32abd8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x32abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x32abdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32abdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32abe0: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x32abe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_32abe4:
    // 0x32abe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32abe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32abe8: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x32abe8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32abec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32abecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32abf0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x32abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32abf4: 0x70484389  pcpyld      $t0, $v0, $t0
    ctx->pc = 0x32abf4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x32abf8: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x32abf8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x32abfc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x32abfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ac00: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x32ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32ac04: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x32ac04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32ac08: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x32ac08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ac0c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x32ac0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32ac10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x32ac10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32ac14: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x32ac14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32ac18: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x32ac18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32ac1c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x32ac1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32ac20: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x32ac20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32ac24: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x32ac24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32ac28: 0x3e00008  jr          $ra
    ctx->pc = 0x32AC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC28u;
        // 0x32ac2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AC30u;
}
