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

// Function: sub_0025F990
// Address: 0x25f990 - 0x25fac8
void sub_0025F990_0x25f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F990_0x25f990");
#endif

    switch (ctx->pc) {
        case 0x25f9f8u: goto label_25f9f8;
        case 0x25fa24u: goto label_25fa24;
        case 0x25fa80u: goto label_25fa80;
        default: break;
    }

    ctx->pc = 0x25f990u;

    // 0x25f990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25f990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f994: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25f994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25f998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f99c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9a0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x25f9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f9a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25f9a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25f9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25f9ac: 0x24d2ffff  addiu       $s2, $a2, -0x1
    ctx->pc = 0x25f9acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x25f9b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25f9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25f9b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25f9b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25f9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25f9bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25f9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9c0: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x25f9c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25f9c4: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x25f9c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25f9c8: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x25F9C8u;
    {
        const bool branch_taken_0x25f9c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9C8u;
        // 0x25f9cc: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9c8) {
            ctx->pc = 0x25FA90u;
            goto label_25fa90;
        }
    }
    ctx->pc = 0x25F9D0u;
    // 0x25f9d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25f9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25f9d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25f9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f9d8: 0x24d2ffff  addiu       $s2, $a2, -0x1
    ctx->pc = 0x25f9d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x25f9dc: 0x0  nop
    ctx->pc = 0x25f9dcu;
    // NOP
    // 0x25f9e0: 0x0  nop
    ctx->pc = 0x25f9e0u;
    // NOP
    // 0x25f9e4: 0x460c0543  div.s       $f21, $f0, $f12
    ctx->pc = 0x25f9e4u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[12];
    // 0x25f9e8: 0x640002c  bltz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x25F9E8u;
    {
        const bool branch_taken_0x25f9e8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x25F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9E8u;
        // 0x25f9ec: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9e8) {
            ctx->pc = 0x25FA9Cu;
            goto label_25fa9c;
        }
    }
    ctx->pc = 0x25F9F0u;
    // 0x25f9f0: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x25f9f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x25f9f4: 0x0  nop
    ctx->pc = 0x25f9f4u;
    // NOP
label_25f9f8:
    // 0x25f9f8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x25f9f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25f9fc: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x25f9fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25fa00: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x25fa00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25fa04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25FA04u;
    {
        const bool branch_taken_0x25fa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA04u;
        // 0x25fa08: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa04) {
            ctx->pc = 0x25FA30u;
            goto label_25fa30;
        }
    }
    ctx->pc = 0x25FA0Cu;
    // 0x25fa0c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25FA0Cu;
    {
        const bool branch_taken_0x25fa0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA0Cu;
        // 0x25fa10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa0c) {
            ctx->pc = 0x25FA34u;
            goto label_25fa34;
        }
    }
    ctx->pc = 0x25FA14u;
    // 0x25fa14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25fa14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25fa18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa1c: 0xc097110  jal         func_25C440
    ctx->pc = 0x25FA1Cu;
    SET_GPR_U32(ctx, 31, 0x25FA24u);
    ctx->pc = 0x25FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA1Cu;
    // 0x25fa20: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x25FA1Cu, 0x25FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA24u;
label_25fa24:
    // 0x25fa24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25FA24u;
    {
        const bool branch_taken_0x25fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA24u;
        // 0x25fa28: 0x7a020000  lq          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa24) {
            ctx->pc = 0x25FA64u;
            goto label_25fa64;
        }
    }
    ctx->pc = 0x25FA2Cu;
    // 0x25fa2c: 0x0  nop
    ctx->pc = 0x25fa2cu;
    // NOP
label_25fa30:
    // 0x25fa30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fa34:
    // 0x25fa34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25fa34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa38: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x25fa38u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25fa3c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x25fa3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25fa40: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25fa40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x25fa44: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x25fa44u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fa48: 0x4614b001  sub.s       $f0, $f22, $f20
    ctx->pc = 0x25fa48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x25fa4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25fa4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25fa50: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25fa50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25fa54: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x25fa54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25fa58: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x25fa58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25fa5c: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x25fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25fa60: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x25fa60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_25fa64:
    // 0x25fa64: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x25fa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25fa68: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x25fa68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x25fa6c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x25fa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x25fa70: 0x641ffe1  bgez        $s2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x25FA70u;
    {
        const bool branch_taken_0x25fa70 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x25FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA70u;
        // 0x25fa74: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa70) {
            ctx->pc = 0x25F9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f9f8;
        }
    }
    ctx->pc = 0x25FA78u;
    // 0x25fa78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25FA78u;
    {
        const bool branch_taken_0x25fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA78u;
        // 0x25fa7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa78) {
            ctx->pc = 0x25FAA0u;
            goto label_25faa0;
        }
    }
    ctx->pc = 0x25FA80u;
label_25fa80:
    // 0x25fa80: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x25fa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25fa84: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x25fa84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x25fa88: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x25fa88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x25fa8c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x25fa8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_25fa90:
    // 0x25fa90: 0x0  nop
    ctx->pc = 0x25fa90u;
    // NOP
    // 0x25fa94: 0x643fffa  bgezl       $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25FA94u;
    {
        const bool branch_taken_0x25fa94 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x25fa94) {
            ctx->pc = 0x25FA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FA94u;
            // 0x25fa98: 0x7a020000  lq          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fa80;
        }
    }
    ctx->pc = 0x25FA9Cu;
label_25fa9c:
    // 0x25fa9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25fa9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25faa0:
    // 0x25faa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25faa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25faa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25faa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25faa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25faa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25faac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25faacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fab0: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x25fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25fab4: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x25fab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25fab8: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x25fab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25fabc: 0x3e00008  jr          $ra
    ctx->pc = 0x25FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FABCu;
        // 0x25fac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FAC4u;
    // 0x25fac4: 0x0  nop
    ctx->pc = 0x25fac4u;
    // NOP
    ctx->pc = 0x25fac8u;
}
