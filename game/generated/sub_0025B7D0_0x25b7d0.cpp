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

// Function: sub_0025B7D0
// Address: 0x25b7d0 - 0x25b848
void sub_0025B7D0_0x25b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B7D0_0x25b7d0");
#endif

    ctx->pc = 0x25b7d0u;

    // 0x25b7d0: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x25b7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x25b7d4: 0x250823a0  addiu       $t0, $t0, 0x23A0
    ctx->pc = 0x25b7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9120));
    // 0x25b7d8: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x25b7d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x3B23A0u));
    // 0x25b7dc: 0x4a231b3d  vmr32.w     $vf3, $vf3
    ctx->pc = 0x25b7dcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25b7e0: 0x4b030100  vaddx.x     $vf4, $vf0, $vf3x
    ctx->pc = 0x25b7e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b7e4: 0x4b0318ea  vmul.x      $vf3, $vf3, $vf3
    ctx->pc = 0x25b7e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x25b7e8: 0x4ae02118  vmulx.yzw   $vf4, $vf4, $vf0x
    ctx->pc = 0x25b7e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b7ec: 0x4be3089b  vmulw.xyzw  $vf2, $vf1, $vf3w
    ctx->pc = 0x25b7ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25b7f0: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x25b7f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25b7f4: 0x4bc31098  vmulx.xyz   $vf2, $vf2, $vf3x
    ctx->pc = 0x25b7f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25b7f8: 0x4b022103  vaddw.x     $vf4, $vf4, $vf2w
    ctx->pc = 0x25b7f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b7fc: 0x4b831098  vmulx.xy    $vf2, $vf2, $vf3x
    ctx->pc = 0x25b7fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25b800: 0x4b022102  vaddz.x     $vf4, $vf4, $vf2z
    ctx->pc = 0x25b800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b804: 0x4b031098  vmulx.x     $vf2, $vf2, $vf3x
    ctx->pc = 0x25b804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25b808: 0x4b022101  vaddy.x     $vf4, $vf4, $vf2y
    ctx->pc = 0x25b808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b80c: 0x4b022100  vaddx.x     $vf4, $vf4, $vf2x
    ctx->pc = 0x25b80cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b810: 0x4b849900  vaddx.xy    $vf4, $vf19, $vf4x
    ctx->pc = 0x25b810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b814: 0x4b04216a  vmul.x      $vf5, $vf4, $vf4
    ctx->pc = 0x25b814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25b818: 0x4a250144  vsubx.w     $vf5, $vf0, $vf5x
    ctx->pc = 0x25b818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25b81c: 0x4ba503bd  .word       0x4BA503BD                   # vsqrt       $Q, $vf5w # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x25b81cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x25b820: 0x4a0003bf  vwaitq
    ctx->pc = 0x25b820u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25b824: 0x4848b000  cfc2.ni     $t0, $vi22
    ctx->pc = 0x25b824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25b828: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B828u;
    {
        const bool branch_taken_0x25b828 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B828u;
        // 0x25b82c: 0x48a82800  qmtc2.ni    $t0, $vf5 (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b828) {
            ctx->pc = 0x25B838u;
            goto label_25b838;
        }
    }
    ctx->pc = 0x25B830u;
    // 0x25b830: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25B830u;
    {
        const bool branch_taken_0x25b830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B830u;
        // 0x25b834: 0x4b059900  vaddx.x     $vf4, $vf19, $vf5x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b830) {
            ctx->pc = 0x25B83Cu;
            goto label_25b83c;
        }
    }
    ctx->pc = 0x25B838u;
label_25b838:
    // 0x25b838: 0x4b059904  vsubx.x     $vf4, $vf19, $vf5x
    ctx->pc = 0x25b838u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25b83c:
    // 0x25b83c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B844u;
    // 0x25b844: 0x0  nop
    ctx->pc = 0x25b844u;
    // NOP
    ctx->pc = 0x25b848u;
}
