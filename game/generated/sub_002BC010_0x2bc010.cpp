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

// Function: sub_002BC010
// Address: 0x2bc010 - 0x2bc0c0
void sub_002BC010_0x2bc010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC010_0x2bc010");
#endif

    ctx->pc = 0x2bc010u;

    // 0x2bc010: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2bc010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bc014: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2bc014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bc018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bc01c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2bc01cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2bc020: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2bc020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc024: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2bc024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2bc028: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2bc028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc02c: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x2bc02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bc030: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2bc030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bc034: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2bc034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc038: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2bc038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc03c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2bc03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc040: 0x4603081a  mula.s      $f1, $f3
    ctx->pc = 0x2bc040u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x2bc044: 0x4602281e  madda.s     $f5, $f2
    ctx->pc = 0x2bc044u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[2])));
    // 0x2bc048: 0x4600205c  madd.s      $f1, $f4, $f0
    ctx->pc = 0x2bc048u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x2bc04c: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2bc04cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bc050: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bc050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bc054: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bc054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bc058: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2bc058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bc05c: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bc05cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bc060: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x2bc060u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bc064: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x2bc064u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc068: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2bc068u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bc06c: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2bc06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bc070: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x2bc070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bc074: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2bc074u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc078: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2bc078u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bc07c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bc07cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bc080: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bc080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bc084: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bc084u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bc088: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bc088u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bc08c: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2bc08cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bc090: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bc090u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bc094: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2bc094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc098: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2bc098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2bc09c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2bc09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bc0a0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bc0a0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc0a4: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x2bc0a4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc0a8: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x2bc0a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bc0ac: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x2bc0acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bc0b0: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2bc0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bc0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0B4u;
        // 0x2bc0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC0BCu;
    // 0x2bc0bc: 0x0  nop
    ctx->pc = 0x2bc0bcu;
    // NOP
    ctx->pc = 0x2bc0c0u;
}
