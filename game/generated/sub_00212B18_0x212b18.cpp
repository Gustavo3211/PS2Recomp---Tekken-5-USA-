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

// Function: sub_00212B18
// Address: 0x212b18 - 0x212c08
void sub_00212B18_0x212b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212B18_0x212b18");
#endif

    ctx->pc = 0x212b18u;

    // 0x212b18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x212b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x212b1c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x212b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212b20: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x212b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212b24: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x212b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212b28: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x212b28u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x212b2c: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x212b2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x212b30: 0x460000dc  madd.s      $f3, $f0, $f0
    ctx->pc = 0x212b30u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x212b34: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x212b34u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x212b38: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x212b38u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212b3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212b40: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x212b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x212b44: 0x460320d6  rsqrt.s     $f3, $f4, $f3
    ctx->pc = 0x212b44u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[4]);
    // 0x212b48: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x212b48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212b4c: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x212b4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212b50: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x212b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212b54: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x212b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x212b58: 0xe7a4004c  swc1        $f4, 0x4C($sp)
    ctx->pc = 0x212b58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x212b5c: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x212b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x212b60: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x212b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212b64: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x212b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212b68: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x212b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212b6c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x212b6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x212b70: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x212b70u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x212b74: 0x4600009c  madd.s      $f2, $f0, $f0
    ctx->pc = 0x212b74u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x212b78: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x212b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212b7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x212b7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212b80: 0x46022116  rsqrt.s     $f4, $f4, $f2
    ctx->pc = 0x212b80u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[4]);
    // 0x212b84: 0x4bc18c58  vmulx.xyz   $vf17, $vf17, $vf1x
    ctx->pc = 0x212b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x212b88: 0x48250000  qmfc2.ni    $a1, $vf0
    ctx->pc = 0x212b88u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x212b8c: 0x48228800  qmfc2.ni    $v0, $vf17
    ctx->pc = 0x212b8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x212b90: 0x4bd1046c  vsub.xyz    $vf17, $vf0, $vf17
    ctx->pc = 0x212b90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x212b94: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x212b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x212b98: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x212b98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x212b9c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x212b9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212ba0: 0x70a24488  pextlw      $t0, $a1, $v0
    ctx->pc = 0x212ba0u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x212ba4: 0x70a22ca8  pextuw      $a1, $a1, $v0
    ctx->pc = 0x212ba4u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTUW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x212ba8: 0x48268000  qmfc2.ni    $a2, $vf16
    ctx->pc = 0x212ba8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x212bac: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x212bacu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212bb0: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x212bb0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212bb4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x212bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x212bb8: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x212bb8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x212bbc: 0x48228000  qmfc2.ni    $v0, $vf16
    ctx->pc = 0x212bbcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x212bc0: 0x70461c88  pextlw      $v1, $v0, $a2
    ctx->pc = 0x212bc0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x212bc4: 0x704614a8  pextuw      $v0, $v0, $a2
    ctx->pc = 0x212bc4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x212bc8: 0x71033b89  pcpyld      $a3, $t0, $v1
    ctx->pc = 0x212bc8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x212bcc: 0x70681ba9  pcpyud      $v1, $v1, $t0
    ctx->pc = 0x212bccu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x212bd0: 0x70a22b89  pcpyld      $a1, $a1, $v0
    ctx->pc = 0x212bd0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x212bd4: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x212bd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x212bd8: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x212bd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x212bdc: 0x48a53000  qmtc2.ni    $a1, $vf6
    ctx->pc = 0x212bdcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x212be0: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x212be0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212be4: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x212be4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212be8: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x212be8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212bec: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x212becu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x212bf0: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x212bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x212bf4: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x212bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x212bf8: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x212bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x212bfc: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x212bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x212c00: 0x3e00008  jr          $ra
    ctx->pc = 0x212C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C00u;
        // 0x212c04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212C08u;
}
