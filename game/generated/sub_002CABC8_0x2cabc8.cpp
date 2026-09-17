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

// Function: sub_002CABC8
// Address: 0x2cabc8 - 0x2cad00
void sub_002CABC8_0x2cabc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CABC8_0x2cabc8");
#endif

    switch (ctx->pc) {
        case 0x2cac30u: goto label_2cac30;
        case 0x2cac5cu: goto label_2cac5c;
        case 0x2cacb8u: goto label_2cacb8;
        default: break;
    }

    ctx->pc = 0x2cabc8u;

    // 0x2cabc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cabc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cabcc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cabccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cabd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cabd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cabd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cabd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabd8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2cabd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cabdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cabdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cabe0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cabe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cabe4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2cabe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabe8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cabe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cabec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cabecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cabf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cabf4: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x2cabf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2cabf8: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x2cabf8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cabfc: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x2cabfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cac00: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x2CAC00u;
    {
        const bool branch_taken_0x2cac00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC00u;
        // 0x2cac04: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac00) {
            ctx->pc = 0x2CACC8u;
            goto label_2cacc8;
        }
    }
    ctx->pc = 0x2CAC08u;
    // 0x2cac08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cac08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cac0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cac0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cac10: 0x24f2ffff  addiu       $s2, $a3, -0x1
    ctx->pc = 0x2cac10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2cac14: 0x0  nop
    ctx->pc = 0x2cac14u;
    // NOP
    // 0x2cac18: 0x0  nop
    ctx->pc = 0x2cac18u;
    // NOP
    // 0x2cac1c: 0x460c0543  div.s       $f21, $f0, $f12
    ctx->pc = 0x2cac1cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[12];
    // 0x2cac20: 0x640002c  bltz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CAC20u;
    {
        const bool branch_taken_0x2cac20 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2CAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC20u;
        // 0x2cac24: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac20) {
            ctx->pc = 0x2CACD4u;
            goto label_2cacd4;
        }
    }
    ctx->pc = 0x2CAC28u;
    // 0x2cac28: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x2cac28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x2cac2c: 0x0  nop
    ctx->pc = 0x2cac2cu;
    // NOP
label_2cac30:
    // 0x2cac30: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x2cac30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2cac34: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x2cac34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cac38: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2cac38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cac3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CAC3Cu;
    {
        const bool branch_taken_0x2cac3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC3Cu;
        // 0x2cac40: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac3c) {
            ctx->pc = 0x2CAC68u;
            goto label_2cac68;
        }
    }
    ctx->pc = 0x2CAC44u;
    // 0x2cac44: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CAC44u;
    {
        const bool branch_taken_0x2cac44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC44u;
        // 0x2cac48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac44) {
            ctx->pc = 0x2CAC6Cu;
            goto label_2cac6c;
        }
    }
    ctx->pc = 0x2CAC4Cu;
    // 0x2cac4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cac4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cac50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac54: 0xc097110  jal         func_25C440
    ctx->pc = 0x2CAC54u;
    SET_GPR_U32(ctx, 31, 0x2CAC5Cu);
    ctx->pc = 0x2CAC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC54u;
    // 0x2cac58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x2CAC54u, 0x2CAC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC5Cu;
label_2cac5c:
    // 0x2cac5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2CAC5Cu;
    {
        const bool branch_taken_0x2cac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC5Cu;
        // 0x2cac60: 0x7a020000  lq          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac5c) {
            ctx->pc = 0x2CAC9Cu;
            goto label_2cac9c;
        }
    }
    ctx->pc = 0x2CAC64u;
    // 0x2cac64: 0x0  nop
    ctx->pc = 0x2cac64u;
    // NOP
label_2cac68:
    // 0x2cac68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cac68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cac6c:
    // 0x2cac6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cac6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac70: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2cac70u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cac74: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2cac74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cac78: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2cac78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2cac7c: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2cac7cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cac80: 0x4614b001  sub.s       $f0, $f22, $f20
    ctx->pc = 0x2cac80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x2cac84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2cac84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cac88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2cac88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2cac8c: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x2cac8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cac90: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x2cac90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2cac94: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2cac94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2cac98: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2cac98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2cac9c:
    // 0x2cac9c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2cac9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2caca0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2caca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2caca4: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x2caca4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x2caca8: 0x641ffe1  bgez        $s2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2CACA8u;
    {
        const bool branch_taken_0x2caca8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2CACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACA8u;
        // 0x2cacac: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caca8) {
            ctx->pc = 0x2CAC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cac30;
        }
    }
    ctx->pc = 0x2CACB0u;
    // 0x2cacb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CACB0u;
    {
        const bool branch_taken_0x2cacb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACB0u;
        // 0x2cacb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cacb0) {
            ctx->pc = 0x2CACD8u;
            goto label_2cacd8;
        }
    }
    ctx->pc = 0x2CACB8u;
label_2cacb8:
    // 0x2cacb8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2cacb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cacbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cacc0: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x2cacc0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x2cacc4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2cacc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2cacc8:
    // 0x2cacc8: 0x0  nop
    ctx->pc = 0x2cacc8u;
    // NOP
    // 0x2caccc: 0x463fffa  bgezl       $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CACCCu;
    {
        const bool branch_taken_0x2caccc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2caccc) {
            ctx->pc = 0x2CACD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CACCCu;
            // 0x2cacd0: 0x7a020000  lq          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CACB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cacb8;
        }
    }
    ctx->pc = 0x2CACD4u;
label_2cacd4:
    // 0x2cacd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cacd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cacd8:
    // 0x2cacd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cacd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cacdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cacdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cace0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cace0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cace4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cace4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cace8: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x2cace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2cacec: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x2cacecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cacf0: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x2cacf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cacf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACF4u;
        // 0x2cacf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CACF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CACFCu;
    // 0x2cacfc: 0x0  nop
    ctx->pc = 0x2cacfcu;
    // NOP
    ctx->pc = 0x2cad00u;
}
