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

// Function: sub_0032E760
// Address: 0x32e760 - 0x32e9e8
void sub_0032E760_0x32e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E760_0x32e760");
#endif

    ctx->pc = 0x32e760u;

    // 0x32e760: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x32e760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32e764: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x32e764u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32e768: 0x4be208aa  vmul.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x32e768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32e76c: 0x4a2201bc  vmulax.w    $ACC, $vf0, $vf2x
    ctx->pc = 0x32e76cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32e770: 0x4a2200bd  vmadday.w   $ACC, $vf0, $vf2y
    ctx->pc = 0x32e770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32e774: 0x4a2200be  vmaddaz.w   $ACC, $vf0, $vf2z
    ctx->pc = 0x32e774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32e778: 0x4a22004b  vmaddw.w    $vf1, $vf0, $vf2w
    ctx->pc = 0x32e778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e77c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x32e77cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32e780: 0x704214a8  pextuw      $v0, $v0, $v0
    ctx->pc = 0x32e780u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x32e784: 0x704213a9  pcpyud      $v0, $v0, $v0
    ctx->pc = 0x32e784u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x32e788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32e788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32e78c: 0x3e00008  jr          $ra
    ctx->pc = 0x32E78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E794u;
    // 0x32e794: 0x0  nop
    ctx->pc = 0x32e794u;
    // NOP
    // 0x32e798: 0xc4ed0000  lwc1        $f13, 0x0($a3)
    ctx->pc = 0x32e798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x32e79c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32e79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e7a0: 0xc4e5000c  lwc1        $f5, 0xC($a3)
    ctx->pc = 0x32e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32e7a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e7a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e7a8: 0xc4c7000c  lwc1        $f7, 0xC($a2)
    ctx->pc = 0x32e7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x32e7ac: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x32e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32e7b0: 0xc4ef0004  lwc1        $f15, 0x4($a3)
    ctx->pc = 0x32e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x32e7b4: 0x460d3c02  mul.s       $f16, $f7, $f13
    ctx->pc = 0x32e7b4u;
    ctx->f[16] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
    // 0x32e7b8: 0xc4c90004  lwc1        $f9, 0x4($a2)
    ctx->pc = 0x32e7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x32e7bc: 0x46052182  mul.s       $f6, $f4, $f5
    ctx->pc = 0x32e7bcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x32e7c0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x32e7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32e7c4: 0x460f3c42  mul.s       $f17, $f7, $f15
    ctx->pc = 0x32e7c4u;
    ctx->f[17] = FPU_MUL_S(ctx->f[7], ctx->f[15]);
    // 0x32e7c8: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x32e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32e7cc: 0x46054a02  mul.s       $f8, $f9, $f5
    ctx->pc = 0x32e7ccu;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x32e7d0: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x32e7d0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x32e7d4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x32e7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32e7d8: 0x460d12c2  mul.s       $f11, $f2, $f13
    ctx->pc = 0x32e7d8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x32e7dc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x32e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32e7e0: 0x46002382  mul.s       $f14, $f4, $f0
    ctx->pc = 0x32e7e0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x32e7e4: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x32e7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x32e7e8: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x32e7e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x32e7ec: 0xc4ac000c  lwc1        $f12, 0xC($a1)
    ctx->pc = 0x32e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32e7f0: 0x460f1082  mul.s       $f2, $f2, $f15
    ctx->pc = 0x32e7f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x32e7f4: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x32e7f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x32e7f8: 0x460b7381  sub.s       $f14, $f14, $f11
    ctx->pc = 0x32e7f8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[11]);
    // 0x32e7fc: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x32e7fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x32e800: 0x46103181  sub.s       $f6, $f6, $f16
    ctx->pc = 0x32e800u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[16]);
    // 0x32e804: 0x46114201  sub.s       $f8, $f8, $f17
    ctx->pc = 0x32e804u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[17]);
    // 0x32e808: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x32e808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x32e80c: 0x460d4a42  mul.s       $f9, $f9, $f13
    ctx->pc = 0x32e80cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x32e810: 0x460f2102  mul.s       $f4, $f4, $f15
    ctx->pc = 0x32e810u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[15]);
    // 0x32e814: 0x460609c2  mul.s       $f7, $f1, $f6
    ctx->pc = 0x32e814u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x32e818: 0x46001ac2  mul.s       $f11, $f3, $f0
    ctx->pc = 0x32e818u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x32e81c: 0x460e0882  mul.s       $f2, $f1, $f14
    ctx->pc = 0x32e81cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x32e820: 0x46051b42  mul.s       $f13, $f3, $f5
    ctx->pc = 0x32e820u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x32e824: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x32e824u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x32e828: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x32e828u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x32e82c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x32e82cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x32e830: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x32e830u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x32e834: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x32e834u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x32e838: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x32e838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x32e83c: 0x46045282  mul.s       $f10, $f10, $f4
    ctx->pc = 0x32e83cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x32e840: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x32e840u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x32e844: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x32e844u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x32e848: 0x460b1081  sub.s       $f2, $f2, $f11
    ctx->pc = 0x32e848u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x32e84c: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x32e84cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x32e850: 0x460d3181  sub.s       $f6, $f6, $f13
    ctx->pc = 0x32e850u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[13]);
    // 0x32e854: 0x460e6302  mul.s       $f12, $f12, $f14
    ctx->pc = 0x32e854u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
    // 0x32e858: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x32e858u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x32e85c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x32e85cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x32e860: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x32e860u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32e864: 0x460c3181  sub.s       $f6, $f6, $f12
    ctx->pc = 0x32e864u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[12]);
    // 0x32e868: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x32e868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x32e86c: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x32e86cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x32e870: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x32e870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32e874: 0xe4860004  swc1        $f6, 0x4($a0)
    ctx->pc = 0x32e874u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x32e878: 0x3e00008  jr          $ra
    ctx->pc = 0x32E878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E878u;
        // 0x32e87c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E880u;
    // 0x32e880: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x32e880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32e884: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x32e884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e888: 0x4a2101bc  vmulax.w    $ACC, $vf0, $vf1x
    ctx->pc = 0x32e888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32e88c: 0x4a2100bd  vmadday.w   $ACC, $vf0, $vf1y
    ctx->pc = 0x32e88cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32e890: 0x4a2100be  vmaddaz.w   $ACC, $vf0, $vf1z
    ctx->pc = 0x32e890u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32e894: 0x4a21004b  vmaddw.w    $vf1, $vf0, $vf1w
    ctx->pc = 0x32e894u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e898: 0x4ba103bd  .word       0x4BA103BD                   # vsqrt       $Q, $vf1w # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x32e898u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x32e89c: 0x4a0003bf  vwaitq
    ctx->pc = 0x32e89cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x32e8a0: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x32e8a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32e8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32e8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32e8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E8B0u;
    // 0x32e8b0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x32e8b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32e8b4: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x32e8b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e8b8: 0x4a2101bc  vmulax.w    $ACC, $vf0, $vf1x
    ctx->pc = 0x32e8b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32e8bc: 0x4a2100bd  vmadday.w   $ACC, $vf0, $vf1y
    ctx->pc = 0x32e8bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32e8c0: 0x4a2100be  vmaddaz.w   $ACC, $vf0, $vf1z
    ctx->pc = 0x32e8c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32e8c4: 0x4a21004b  vmaddw.w    $vf1, $vf0, $vf1w
    ctx->pc = 0x32e8c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e8c8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x32e8c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32e8cc: 0x704214a8  pextuw      $v0, $v0, $v0
    ctx->pc = 0x32e8ccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x32e8d0: 0x704213a9  pcpyud      $v0, $v0, $v0
    ctx->pc = 0x32e8d0u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x32e8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32e8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32e8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E8E0u;
    // 0x32e8e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32e8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e8e4: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x32e8e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32e8e8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32e8e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32e8ec: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32e8ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32e8f0: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x32e8f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32e8f4: 0x4a2300c4  vsubx.w     $vf3, $vf0, $vf3x
    ctx->pc = 0x32e8f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32e8f8: 0x4be309bf  vmulaw.xyzw $ACC, $vf1, $vf3w
    ctx->pc = 0x32e8f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32e8fc: 0x4be310c8  vmaddx.xyzw $vf3, $vf2, $vf3x
    ctx->pc = 0x32e8fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32e900: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x32e900u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x32e904: 0x3e00008  jr          $ra
    ctx->pc = 0x32E904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E90Cu;
    // 0x32e90c: 0x0  nop
    ctx->pc = 0x32e90cu;
    // NOP
    // 0x32e910: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x32e910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x32e914: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x32e914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x32e918: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x32e918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32e91c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32e91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32e920: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x32e920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x32e924: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32e924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32e928: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32e928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e92c: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x32e92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x32e930: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x32e930u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x32e934: 0x46010940  add.s       $f5, $f1, $f1
    ctx->pc = 0x32e934u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x32e938: 0x46000100  add.s       $f4, $f0, $f0
    ctx->pc = 0x32e938u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x32e93c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x32e93cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32e940: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x32e940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x32e944: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x32e944u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x32e948: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x32e948u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x32e94c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x32e94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x32e950: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x32e950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x32e954: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x32e954u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x32e958: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x32e958u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32e95c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x32e95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x32e960: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x32e960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32e964: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x32e964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32e968: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x32e968u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e96c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x32e96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x32e970: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x32e970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x32e974: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32e974u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32e978: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x32e978u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32e97c: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x32e97cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32e980: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x32e980u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32e984: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x32e984u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e988: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x32e988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32e98c: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x32e98cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32e990: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x32e990u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32e994: 0x4be5214b  vmaddw.xyzw $vf5, $vf4, $vf5w
    ctx->pc = 0x32e994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x32e998: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x32e998u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x32e99c: 0x3e00008  jr          $ra
    ctx->pc = 0x32E99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E99Cu;
        // 0x32e9a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E9A4u;
    // 0x32e9a4: 0x0  nop
    ctx->pc = 0x32e9a4u;
    // NOP
    // 0x32e9a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32e9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e9ac: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32e9acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32e9b0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32e9b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32e9b4: 0x4be2086f  vmini.xyzw  $vf1, $vf1, $vf2
    ctx->pc = 0x32e9b4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e9b8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32e9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x32E9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E9C4u;
    // 0x32e9c4: 0x0  nop
    ctx->pc = 0x32e9c4u;
    // NOP
    // 0x32e9c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32e9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e9cc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32e9ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32e9d0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32e9d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32e9d4: 0x4be2086b  vmax.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x32e9d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e9d8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32e9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32e9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x32E9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E9E4u;
    // 0x32e9e4: 0x0  nop
    ctx->pc = 0x32e9e4u;
    // NOP
    ctx->pc = 0x32e9e8u;
}
