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

// Function: sub_00348D90
// Address: 0x348d90 - 0x348e08
void sub_00348D90_0x348d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348D90_0x348d90");
#endif

    ctx->pc = 0x348d90u;

    // 0x348d90: 0x4bdde2fe  vopmula.xyz $ACC, $vf28, $vf29
    ctx->pc = 0x348d90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x348d94: 0x4bdce8ee  vopmsub.xyz $vf3, $vf29, $vf28
    ctx->pc = 0x348d94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x348d98: 0x4b1e0041  vaddy.x     $vf1, $vf0, $vf30y
    ctx->pc = 0x348d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x348d9c: 0x4b1e0082  vaddz.x     $vf2, $vf0, $vf30z
    ctx->pc = 0x348d9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x348da0: 0x4bdeeafe  vopmula.xyz $ACC, $vf29, $vf30
    ctx->pc = 0x348da0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x348da4: 0x4bddf12e  vopmsub.xyz $vf4, $vf30, $vf29
    ctx->pc = 0x348da4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x348da8: 0x4b03f1bc  vmulax.x    $ACC, $vf30, $vf3x
    ctx->pc = 0x348da8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x348dac: 0x4b0308bd  vmadday.x   $ACC, $vf1, $vf3y
    ctx->pc = 0x348dacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x348db0: 0x4b03104a  vmaddz.x    $vf1, $vf2, $vf3z
    ctx->pc = 0x348db0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x348db4: 0x4a0002ff  vnop
    ctx->pc = 0x348db4u;
    // NOP operation, no action needed for VU0
    // 0x348db8: 0x4a0002ff  vnop
    ctx->pc = 0x348db8u;
    // NOP operation, no action needed for VU0
    // 0x348dbc: 0x4a0002ff  vnop
    ctx->pc = 0x348dbcu;
    // NOP operation, no action needed for VU0
    // 0x348dc0: 0x4a0002ff  vnop
    ctx->pc = 0x348dc0u;
    // NOP operation, no action needed for VU0
    // 0x348dc4: 0x4a0002ff  vnop
    ctx->pc = 0x348dc4u;
    // NOP operation, no action needed for VU0
    // 0x348dc8: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x348dc8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x348dcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x348dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x348dd0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x348DD0u;
    {
        const bool branch_taken_0x348dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348dd0) {
            ctx->pc = 0x348DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348DD0u;
            // 0x348dd4: 0x4b000043  vaddw.x     $vf1, $vf0, $vf0w (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x348DD8u;
            goto label_348dd8;
        }
    }
    ctx->pc = 0x348DD8u;
label_348dd8:
    // 0x348dd8: 0x4bdcf2fe  vopmula.xyz $ACC, $vf30, $vf28
    ctx->pc = 0x348dd8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x348ddc: 0x4bdee16e  vopmsub.xyz $vf5, $vf28, $vf30
    ctx->pc = 0x348ddcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x348de0: 0x4a6103bc  vdiv        $Q, $vf0w, $vf1x
    ctx->pc = 0x348de0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x348de4: 0x4bdc233c  vmove.xyz   $vf28, $vf4
    ctx->pc = 0x348de4u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x348de8: 0x4bdd2b3c  vmove.xyz   $vf29, $vf5
    ctx->pc = 0x348de8u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x348dec: 0x4bde1b3c  vmove.xyz   $vf30, $vf3
    ctx->pc = 0x348decu;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x348df0: 0x4a0003bf  vwaitq
    ctx->pc = 0x348df0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x348df4: 0x4bc0e71c  vmulq.xyz   $vf28, $vf28, $Q
    ctx->pc = 0x348df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x348df8: 0x4bc0ef5c  vmulq.xyz   $vf29, $vf29, $Q
    ctx->pc = 0x348df8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x348dfc: 0x4bc0f79c  vmulq.xyz   $vf30, $vf30, $Q
    ctx->pc = 0x348dfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x348e00: 0x3e00008  jr          $ra
    ctx->pc = 0x348E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348E08u;
}
