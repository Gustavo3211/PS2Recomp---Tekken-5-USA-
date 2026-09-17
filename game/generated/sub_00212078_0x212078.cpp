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

// Function: sub_00212078
// Address: 0x212078 - 0x212478
void sub_00212078_0x212078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212078_0x212078");
#endif

    ctx->pc = 0x212078u;

    // 0x212078: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x212078u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21207c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x21207cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x212080: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x212080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x212084: 0x3e00008  jr          $ra
    ctx->pc = 0x212084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212084u;
        // 0x212088: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21208Cu;
    // 0x21208c: 0x0  nop
    ctx->pc = 0x21208cu;
    // NOP
    // 0x212090: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x212090u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212094: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x212094u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212098: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x212098u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x21209c: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x21209cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2120a0: 0x4bd087ea  vmul.xyz    $vf31, $vf16, $vf16
    ctx->pc = 0x2120a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2120a4: 0x4a3f01bc  vmulax.w    $ACC, $vf0, $vf31x
    ctx->pc = 0x2120a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x2120a8: 0x4a3f00bd  vmadday.w   $ACC, $vf0, $vf31y
    ctx->pc = 0x2120a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x2120ac: 0x4a3f07ca  vmaddz.w    $vf31, $vf0, $vf31z
    ctx->pc = 0x2120acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2120b0: 0x4bff03be  vrsqrt      $Q, $vf0w, $vf31w
    ctx->pc = 0x2120b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2120b4: 0x4a30842c  vsub.w      $vf16, $vf16, $vf16
    ctx->pc = 0x2120b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2120b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2120b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2120bc: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2120bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2120c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2120C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2120C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120C0u;
        // 0x2120c4: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2120C8u;
    // 0x2120c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2120C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2120D0u;
    // 0x2120d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2120d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2120d4: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2120d4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2120d8: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x2120d8u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2120dc: 0xd8940000  lqc2        $vf20, 0x0($a0)
    ctx->pc = 0x2120dcu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2120e0: 0xd8950000  lqc2        $vf21, 0x0($a0)
    ctx->pc = 0x2120e0u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2120e4: 0x4bf4842c  vsub.xyzw   $vf16, $vf16, $vf20
    ctx->pc = 0x2120e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2120e8: 0x4bf58c6c  vsub.xyzw   $vf17, $vf17, $vf21
    ctx->pc = 0x2120e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[17], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2120ec: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x2120ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2120f0: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x2120f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2120f4: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2120f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2120f8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2120f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2120fc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2120fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212100: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x212100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212104: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x212104u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x212108: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x212108u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x21210c: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x21210cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x212110: 0x46000004  c1          0x4
    ctx->pc = 0x212110u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x212114: 0x3e00008  jr          $ra
    ctx->pc = 0x212114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212114u;
        // 0x212118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21211Cu;
    // 0x21211c: 0x0  nop
    ctx->pc = 0x21211cu;
    // NOP
    // 0x212120: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x212120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212124: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x212124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212128: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x212128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21212c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x21212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212130: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x212130u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x212134: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x212134u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x212138: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x212138u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x21213c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x21213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212140: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x212140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212144: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x212144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x212148: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x212148u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x21214c: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x21214cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x212150: 0x3e00008  jr          $ra
    ctx->pc = 0x212150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212150u;
        // 0x212154: 0x46000005  abs.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212158u;
    // 0x212158: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x212158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21215c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x21215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212160: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x212160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212164: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x212164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212168: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x212168u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x21216c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21216cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x212170: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x212170u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x212174: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x212174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212178: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x212178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21217c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21217cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x212180: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x212180u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x212184: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x212184u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x212188: 0x3e00008  jr          $ra
    ctx->pc = 0x212188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212188u;
        // 0x21218c: 0x46000005  abs.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212190u;
    // 0x212190: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x212190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212194: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x212194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212198: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x212198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21219c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x21219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2121a0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2121a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2121a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2121a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2121a8: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x2121a8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x2121ac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2121acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2121b0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2121b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2121b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2121b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2121b8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2121b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2121bc: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x2121bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x2121c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2121C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2121C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121C0u;
        // 0x2121c4: 0x46000005  abs.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2121C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2121C8u;
    // 0x2121c8: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x2121c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2121cc: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2121ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2121d0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2121d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2121d4: 0x4605281a  mula.s      $f5, $f5
    ctx->pc = 0x2121d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x2121d8: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x2121d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4])));
    // 0x2121dc: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x2121dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2121e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2121e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2121e4: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x2121e4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
    // 0x2121e8: 0x46003032  c.eq.s      $f6, $f0
    ctx->pc = 0x2121e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2121ec: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2121ECu;
    {
        const bool branch_taken_0x2121ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2121ec) {
            ctx->pc = 0x2121F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2121ECu;
            // 0x2121f0: 0xc4a20008  lwc1        $f2, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x212200u;
            goto label_212200;
        }
    }
    ctx->pc = 0x2121F4u;
    // 0x2121f4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2121f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2121f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2121F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2121FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121F8u;
        // 0x2121fc: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2121F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212200u;
label_212200:
    // 0x212200: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x212200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212204: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x212204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212208: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x212208u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x21220c: 0x4604081e  madda.s     $f1, $f4
    ctx->pc = 0x21220cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4])));
    // 0x212210: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x212210u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x212214: 0x46060043  div.s       $f1, $f0, $f6
    ctx->pc = 0x212214u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[6];
    // 0x212218: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x212218u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21221c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x21221cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212220: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x212220u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212224: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x212224u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212228: 0x3e00008  jr          $ra
    ctx->pc = 0x212228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212228u;
        // 0x21222c: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212230u;
    // 0x212230: 0x3e00008  jr          $ra
    ctx->pc = 0x212230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212238u;
    // 0x212238: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x212238u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21223c: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x21223cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212240: 0x4bdf842a  vmul.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x212240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212244: 0x4bd087ea  vmul.xyz    $vf31, $vf16, $vf16
    ctx->pc = 0x212244u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x212248: 0x4a3f01bc  vmulax.w    $ACC, $vf0, $vf31x
    ctx->pc = 0x212248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x21224c: 0x4a3f00bd  vmadday.w   $ACC, $vf0, $vf31y
    ctx->pc = 0x21224cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x212250: 0x4a3f07ca  vmaddz.w    $vf31, $vf0, $vf31z
    ctx->pc = 0x212250u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x212254: 0x4bff03be  vrsqrt      $Q, $vf0w, $vf31w
    ctx->pc = 0x212254u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x212258: 0x4a30842c  vsub.w      $vf16, $vf16, $vf16
    ctx->pc = 0x212258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x21225c: 0x4a0003bf  vwaitq
    ctx->pc = 0x21225cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x212260: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x212260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212264: 0x3e00008  jr          $ra
    ctx->pc = 0x212264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212264u;
        // 0x212268: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21226Cu;
    // 0x21226c: 0x3e00008  jr          $ra
    ctx->pc = 0x21226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21226Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212274u;
    // 0x212274: 0x0  nop
    ctx->pc = 0x212274u;
    // NOP
    // 0x212278: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x212278u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21227c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x21227cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212280: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x212280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212284: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x212284u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212288: 0x4be0803c  vaddax.xyzw $ACC, $vf16, $vf0x
    ctx->pc = 0x212288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x21228c: 0x4be1fc08  vmaddx.xyzw $vf16, $vf31, $vf1x
    ctx->pc = 0x21228cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212290: 0x3e00008  jr          $ra
    ctx->pc = 0x212290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212290u;
        // 0x212294: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212298u;
    // 0x212298: 0x3e00008  jr          $ra
    ctx->pc = 0x212298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2122A0u;
    // 0x2122a0: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2122a0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2122a4: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2122a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2122a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2122a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2122ac: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x2122acu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2122b0: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2122b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2122b4: 0x4bc1fc08  vmaddx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x2122b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2122b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2122B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2122BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122B8u;
        // 0x2122bc: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2122C0u;
    // 0x2122c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2122C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2122C8u;
    // 0x2122c8: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2122c8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2122cc: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2122ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2122d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2122d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2122d4: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x2122d4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2122d8: 0x4be0803c  vaddax.xyzw $ACC, $vf16, $vf0x
    ctx->pc = 0x2122d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2122dc: 0x4be1fc0c  vmsubx.xyzw $vf16, $vf31, $vf1x
    ctx->pc = 0x2122dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2122e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2122E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E0u;
        // 0x2122e4: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2122E8u;
    // 0x2122e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2122E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2122F0u;
    // 0x2122f0: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2122f0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2122f4: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2122f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2122f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2122f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2122fc: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x2122fcu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212300: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x212300u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212304: 0x4bc1fc0c  vmsubx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x212304u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212308: 0x3e00008  jr          $ra
    ctx->pc = 0x212308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212308u;
        // 0x21230c: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212310u;
    // 0x212310: 0x3e00008  jr          $ra
    ctx->pc = 0x212310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212318u;
    // 0x212318: 0x44027000  mfc1        $v0, $f14
    ctx->pc = 0x212318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21231c: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x21231cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212320: 0x4a7f03bc  vdiv        $Q, $vf0w, $vf31x
    ctx->pc = 0x212320u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x212324: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x212324u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212328: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x212328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21232c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21232cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212330: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x212330u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212334: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x212334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212338: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x212338u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21233c: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x21233cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x212340: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x212340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212344: 0x4a0003bf  vwaitq
    ctx->pc = 0x212344u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x212348: 0x4be0841c  vmulq.xyzw  $vf16, $vf16, $Q
    ctx->pc = 0x212348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x21234c: 0x3e00008  jr          $ra
    ctx->pc = 0x21234Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21234Cu;
        // 0x212350: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21234Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212354u;
    // 0x212354: 0x3e00008  jr          $ra
    ctx->pc = 0x212354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21235Cu;
    // 0x21235c: 0x0  nop
    ctx->pc = 0x21235cu;
    // NOP
    // 0x212360: 0x44027000  mfc1        $v0, $f14
    ctx->pc = 0x212360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212364: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x212364u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212368: 0x4a7f03bc  vdiv        $Q, $vf0w, $vf31x
    ctx->pc = 0x212368u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x21236c: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x21236cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212370: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x212370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212374: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x212374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212378: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x212378u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21237c: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x21237cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212380: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x212380u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212384: 0x4bc181bc  vmulax.xyz  $ACC, $vf16, $vf1x
    ctx->pc = 0x212384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212388: 0x4bc28c08  vmaddx.xyz  $vf16, $vf17, $vf2x
    ctx->pc = 0x212388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x21238c: 0x4a0003bf  vwaitq
    ctx->pc = 0x21238cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x212390: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x212390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212394: 0x3e00008  jr          $ra
    ctx->pc = 0x212394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212394u;
        // 0x212398: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21239Cu;
    // 0x21239c: 0x3e00008  jr          $ra
    ctx->pc = 0x21239Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21239Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2123A4u;
    // 0x2123a4: 0x0  nop
    ctx->pc = 0x2123a4u;
    // NOP
    // 0x2123a8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2123a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2123ac: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2123acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2123b0: 0x70431408  paddsw      $v0, $v0, $v1
    ctx->pc = 0x2123b0u;
    SET_GPR_VEC(ctx, 2, PS2_PADDSW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2123b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2123B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2123B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123B4u;
        // 0x2123b8: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2123BCu;
    // 0x2123bc: 0x0  nop
    ctx->pc = 0x2123bcu;
    // NOP
    // 0x2123c0: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2123c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2123c4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2123c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2123c8: 0x70431408  paddsw      $v0, $v0, $v1
    ctx->pc = 0x2123c8u;
    SET_GPR_VEC(ctx, 2, PS2_PADDSW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2123cc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2123ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2123d0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2123d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2123d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2123D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2123D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123D4u;
        // 0x2123d8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2123DCu;
    // 0x2123dc: 0x0  nop
    ctx->pc = 0x2123dcu;
    // NOP
    // 0x2123e0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2123e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2123e4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2123e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2123e8: 0x70431448  psubsw      $v0, $v0, $v1
    ctx->pc = 0x2123e8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBSW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2123ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2123ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2123F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123ECu;
        // 0x2123f0: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2123F4u;
    // 0x2123f4: 0x0  nop
    ctx->pc = 0x2123f4u;
    // NOP
    // 0x2123f8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2123f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2123fc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2123fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212400: 0x70431448  psubsw      $v0, $v0, $v1
    ctx->pc = 0x212400u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBSW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x212404: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x212404u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x212408: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x212408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21240c: 0x3e00008  jr          $ra
    ctx->pc = 0x21240Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21240Cu;
        // 0x212410: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21240Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212414u;
    // 0x212414: 0x0  nop
    ctx->pc = 0x212414u;
    // NOP
    // 0x212418: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x212418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21241c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x21241cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212420: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x212420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x212424: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x212424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x212428: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x212428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21242c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x21242cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x212430: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x212430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x212434: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x212434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212438: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x212438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x21243c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x21243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x212440: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x212440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212444: 0x3e00008  jr          $ra
    ctx->pc = 0x212444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212444u;
        // 0x212448: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21244Cu;
    // 0x21244c: 0x0  nop
    ctx->pc = 0x21244cu;
    // NOP
    // 0x212450: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x212450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212454: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x212454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212458: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x212458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21245c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x212460: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x212460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x212464: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x212464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x212468: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x212468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21246c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x21246cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x212470: 0x3e00008  jr          $ra
    ctx->pc = 0x212470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212470u;
        // 0x212474: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212478u;
}
