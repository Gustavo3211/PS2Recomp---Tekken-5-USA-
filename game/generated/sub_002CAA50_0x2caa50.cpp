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

// Function: sub_002CAA50
// Address: 0x2caa50 - 0x2cabc8
void sub_002CAA50_0x2caa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAA50_0x2caa50");
#endif

    switch (ctx->pc) {
        case 0x2caa74u: goto label_2caa74;
        case 0x2cab2cu: goto label_2cab2c;
        default: break;
    }

    ctx->pc = 0x2caa50u;

    // 0x2caa50: 0x8f82bb40  lw          $v0, -0x44C0($gp)
    ctx->pc = 0x2caa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949696)));
    // 0x2caa54: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2caa54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2caa58: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2caa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2caa5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2caa5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa60: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2caa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2caa64: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2CAA64u;
    {
        const bool branch_taken_0x2caa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA64u;
        // 0x2caa68: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa64) {
            ctx->pc = 0x2CABB0u;
            goto label_2cabb0;
        }
    }
    ctx->pc = 0x2CAA6Cu;
    // 0x2caa6c: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2CAA6Cu;
    SET_GPR_U32(ctx, 31, 0x2CAA74u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2CAA6Cu, 0x2CAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA74u;
label_2caa74:
    // 0x2caa74: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x2CAA74u;
    {
        const bool branch_taken_0x2caa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caa74) {
            ctx->pc = 0x2CAA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAA74u;
            // 0x2caa78: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CABB4u;
            goto label_2cabb4;
        }
    }
    ctx->pc = 0x2CAA7Cu;
    // 0x2caa7c: 0x8e030894  lw          $v1, 0x894($s0)
    ctx->pc = 0x2caa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2196)));
    // 0x2caa80: 0xc780bb34  lwc1        $f0, -0x44CC($gp)
    ctx->pc = 0x2caa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caa84: 0x8c71001c  lw          $s1, 0x1C($v1)
    ctx->pc = 0x2caa84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2caa88: 0x9602003c  lhu         $v0, 0x3C($s0)
    ctx->pc = 0x2caa88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2caa8c: 0xc6212da0  lwc1        $f1, 0x2DA0($s1)
    ctx->pc = 0x2caa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2caa90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2caa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2caa94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2caa94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caa98: 0x2781bb48  addiu       $at, $gp, -0x44B8
    ctx->pc = 0x2caa98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949704));
    // 0x2caa9c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2caa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2caaa0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2CAAA0u;
    {
        const bool branch_taken_0x2caaa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2caaa0) {
            ctx->pc = 0x2CAAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAAA0u;
            // 0x2caaa4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAAA8u;
            goto label_2caaa8;
        }
    }
    ctx->pc = 0x2CAAA8u;
label_2caaa8:
    // 0x2caaa8: 0xc780bb30  lwc1        $f0, -0x44D0($gp)
    ctx->pc = 0x2caaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caaac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2caaacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caab0: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x2CAAB0u;
    {
        const bool branch_taken_0x2caab0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2caab0) {
            ctx->pc = 0x2CAAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAAB0u;
            // 0x2caab4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB00u;
            goto label_2cab00;
        }
    }
    ctx->pc = 0x2CAAB8u;
    // 0x2caab8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2caab8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2caabc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2caabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2caac0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2caac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caac4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAAC4u;
    {
        const bool branch_taken_0x2caac4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAC4u;
        // 0x2caac8: 0xc780bb38  lwc1        $f0, -0x44C8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caac4) {
            ctx->pc = 0x2CAAE0u;
            goto label_2caae0;
        }
    }
    ctx->pc = 0x2CAACCu;
    // 0x2caacc: 0xc780bb3c  lwc1        $f0, -0x44C4($gp)
    ctx->pc = 0x2caaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caad0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2caad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2caad4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2caad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caad8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAAD8u;
    {
        const bool branch_taken_0x2caad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAD8u;
        // 0x2caadc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caad8) {
            ctx->pc = 0x2CAAECu;
            goto label_2caaec;
        }
    }
    ctx->pc = 0x2CAAE0u;
label_2caae0:
    // 0x2caae0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2caae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2caae4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2caae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caae8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2caae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2caaec:
    // 0x2caaec: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x2CAAECu;
    {
        const bool branch_taken_0x2caaec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2caaec) {
            ctx->pc = 0x2CAAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAAECu;
            // 0x2caaf0: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB1Cu;
            goto label_2cab1c;
        }
    }
    ctx->pc = 0x2CAAF4u;
    // 0x2caaf4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CAAF4u;
    {
        const bool branch_taken_0x2caaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAF4u;
        // 0x2caaf8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caaf4) {
            ctx->pc = 0x2CAB20u;
            goto label_2cab20;
        }
    }
    ctx->pc = 0x2CAAFCu;
    // 0x2caafc: 0x0  nop
    ctx->pc = 0x2caafcu;
    // NOP
label_2cab00:
    // 0x2cab00: 0xc781bb3c  lwc1        $f1, -0x44C4($gp)
    ctx->pc = 0x2cab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cab04: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2cab04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cab08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cab08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cab0c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2cab0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cab10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CAB10u;
    {
        const bool branch_taken_0x2cab10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB10u;
        // 0x2cab14: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab10) {
            ctx->pc = 0x2CAB1Cu;
            goto label_2cab1c;
        }
    }
    ctx->pc = 0x2CAB18u;
    // 0x2cab18: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2cab18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2cab1c:
    // 0x2cab1c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2cab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2cab20:
    // 0x2cab20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cab20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab24: 0xc084cc6  jal         func_213318
    ctx->pc = 0x2CAB24u;
    SET_GPR_U32(ctx, 31, 0x2CAB2Cu);
    ctx->pc = 0x2CAB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB24u;
    // 0x2cab28: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x213318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213318u, 0x2CAB24u, 0x2CAB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB2Cu;
label_2cab2c:
    // 0x2cab2c: 0x26230240  addiu       $v1, $s1, 0x240
    ctx->pc = 0x2cab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x2cab30: 0x7a220270  lq          $v0, 0x270($s1)
    ctx->pc = 0x2cab30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x2cab34: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2cab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2cab38: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x2cab38u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cab3c: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x2cab3cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab40: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x2cab40u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cab44: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x2cab44u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cab48: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2cab48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cab4c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2cab4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2cab50: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2cab50u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2cab54: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2cab54u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2cab58: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2cab58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab5c: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2cab5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab60: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2cab60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab64: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2cab64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2cab68: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2cab68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab6c: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2cab6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab70: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2cab70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab74: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2cab74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2cab78: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2cab78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab7c: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2cab7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab80: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2cab80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab84: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2cab84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2cab88: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2cab88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab8c: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2cab8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab90: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2cab90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2cab94: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2cab94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2cab98: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2cab98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2cab9c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2cab9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2caba0: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2caba0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2caba4: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2caba4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2caba8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2caba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cabac: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x2cabacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
label_2cabb0:
    // 0x2cabb0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2cabb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2cabb4:
    // 0x2cabb4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2cabb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cabb8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2cabb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cabbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABBCu;
        // 0x2cabc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CABBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CABC4u;
    // 0x2cabc4: 0x0  nop
    ctx->pc = 0x2cabc4u;
    // NOP
    ctx->pc = 0x2cabc8u;
}
