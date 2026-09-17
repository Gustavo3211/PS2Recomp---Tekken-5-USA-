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

// Function: sub_00212A68
// Address: 0x212a68 - 0x212ab8
void sub_00212A68_0x212a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212A68_0x212a68");
#endif

    ctx->pc = 0x212a68u;

    // 0x212a68: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x212a68u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212a6c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x212a6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212a70: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x212a70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x212a74: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x212a74u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x212a78: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x212a78u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x212a7c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x212a7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x212a80: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x212a80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x212a84: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x212a84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x212a88: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x212a88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212a8c: 0x4bf003bc  vdiv        $Q, $vf0w, $vf16w
    ctx->pc = 0x212a8cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x212a90: 0x4a0003bf  vwaitq
    ctx->pc = 0x212a90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x212a94: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x212a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x212a98: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x212A98u;
    {
        const bool branch_taken_0x212a98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A98u;
        // 0x212a9c: 0x4bf8817d  vftoi4.xyzw $vf24, $vf16 (Delay Slot)
        { __m128 src = ctx->vu0_vf[16]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a98) {
            ctx->pc = 0x212AA4u;
            goto label_212aa4;
        }
    }
    ctx->pc = 0x212AA0u;
    // 0x212aa0: 0x4a78817c  vftoi0.zw   $vf24, $vf16
    ctx->pc = 0x212aa0u;
    { __m128 src = ctx->vu0_vf[16]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
label_212aa4:
    // 0x212aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x212AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AA4u;
        // 0x212aa8: 0xf8980000  sqc2        $vf24, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[24]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212AACu;
    // 0x212aac: 0x3e00008  jr          $ra
    ctx->pc = 0x212AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212AB4u;
    // 0x212ab4: 0x0  nop
    ctx->pc = 0x212ab4u;
    // NOP
    ctx->pc = 0x212ab8u;
}
