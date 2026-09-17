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

// Function: sub_003262B8
// Address: 0x3262b8 - 0x326370
void sub_003262B8_0x3262b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003262B8_0x3262b8");
#endif

    ctx->pc = 0x3262b8u;

    // 0x3262b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3262b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3262bc: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x3262bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3262c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3262c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3262c4: 0xdc430038  ld          $v1, 0x38($v0)
    ctx->pc = 0x3262c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x3262c8: 0x327ba  dsrl        $a0, $v1, 30
    ctx->pc = 0x3262c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 30);
    // 0x3262cc: 0x31eba  dsrl        $v1, $v1, 26
    ctx->pc = 0x3262ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 26);
    // 0x3262d0: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x3262d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x3262d4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3262d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x3262d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3262d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3262dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3262dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3262e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3262e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3262e4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3262e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3262e8: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x3262e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3262ec: 0x663004  sllv        $a2, $a2, $v1
    ctx->pc = 0x3262ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3262f0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3262f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3262f4: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x3262f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3262f8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3262f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3262fc: 0x4b02113c  vitof0.x    $vf2, $vf2
    ctx->pc = 0x3262fcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x326300: 0x4b03193c  vitof0.x    $vf3, $vf3
    ctx->pc = 0x326300u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[3]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x326304: 0x4a410840  vaddx.z     $vf1, $vf1, $vf1x
    ctx->pc = 0x326304u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326308: 0x4a210841  vaddy.w     $vf1, $vf1, $vf1y
    ctx->pc = 0x326308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32630c: 0x4a420854  vminix.z    $vf1, $vf1, $vf2x
    ctx->pc = 0x32630cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326310: 0x4a230854  vminix.w    $vf1, $vf1, $vf3x
    ctx->pc = 0x326310u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326314: 0x4b80086b  vmax.xy     $vf1, $vf1, $vf0
    ctx->pc = 0x326314u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326318: 0x4a600847  vsubw.zw    $vf1, $vf1, $vf0w
    ctx->pc = 0x326318u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32631c: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x32631cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326320: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x326320u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x326324: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x326324u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x326328: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x326328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32632c: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x32632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x326330: 0x6283e  dsrl32      $a1, $a2, 0
    ctx->pc = 0x326330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x326334: 0x6243e  dsrl32      $a0, $a2, 16
    ctx->pc = 0x326334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) >> (32 + 16));
    // 0x326338: 0x6143a  dsrl        $v0, $a2, 16
    ctx->pc = 0x326338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 16);
    // 0x32633c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x32633cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x326340: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x326340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x326344: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x326344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x326348: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x326348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x32634c: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x32634cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
    // 0x326350: 0x63138  dsll        $a2, $a2, 4
    ctx->pc = 0x326350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 4);
    // 0x326354: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x326354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x326358: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x326358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x32635c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x32635cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x326360: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x326360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x326364: 0x3e00008  jr          $ra
    ctx->pc = 0x326364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326364u;
        // 0x326368: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32636Cu;
    // 0x32636c: 0x0  nop
    ctx->pc = 0x32636cu;
    // NOP
    ctx->pc = 0x326370u;
}
