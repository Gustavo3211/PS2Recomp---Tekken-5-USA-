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

// Function: sub_00322E68
// Address: 0x322e68 - 0x322f48
void sub_00322E68_0x322e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322E68_0x322e68");
#endif

    switch (ctx->pc) {
        case 0x322e80u: goto label_322e80;
        default: break;
    }

    ctx->pc = 0x322e68u;

    // 0x322e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322e70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x322e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x322e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x322e78: 0xc0ca84e  jal         func_32A138
    ctx->pc = 0x322E78u;
    SET_GPR_U32(ctx, 31, 0x322E80u);
    ctx->pc = 0x322E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E78u;
    // 0x322e7c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A138u, 0x322E78u, 0x322E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E80u;
label_322e80:
    // 0x322e80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x322e80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322e84: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x322e84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x322e88: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x322e88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x322e8c: 0x4bdc09bc  vmulax.xyz  $ACC, $vf1, $vf28x
    ctx->pc = 0x322e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x322e90: 0x4bdc10bd  vmadday.xyz $ACC, $vf2, $vf28y
    ctx->pc = 0x322e90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x322e94: 0x4bdc190a  vmaddz.xyz  $vf4, $vf3, $vf28z
    ctx->pc = 0x322e94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x322e98: 0x4bdd09bc  vmulax.xyz  $ACC, $vf1, $vf29x
    ctx->pc = 0x322e98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x322e9c: 0x4bdd10bd  vmadday.xyz $ACC, $vf2, $vf29y
    ctx->pc = 0x322e9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x322ea0: 0x4bdd194a  vmaddz.xyz  $vf5, $vf3, $vf29z
    ctx->pc = 0x322ea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x322ea4: 0x4bde09bc  vmulax.xyz  $ACC, $vf1, $vf30x
    ctx->pc = 0x322ea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x322ea8: 0x4bde10bd  vmadday.xyz $ACC, $vf2, $vf30y
    ctx->pc = 0x322ea8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x322eac: 0x4bde198a  vmaddz.xyz  $vf6, $vf3, $vf30z
    ctx->pc = 0x322eacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x322eb0: 0x4bc422be  vmula.xyz   $ACC, $vf4, $vf4
    ctx->pc = 0x322eb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x322eb4: 0x4bc52abd  vmadda.xyz  $ACC, $vf5, $vf5
    ctx->pc = 0x322eb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x322eb8: 0x4bc63069  vmadd.xyz   $vf1, $vf6, $vf6
    ctx->pc = 0x322eb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x322ebc: 0x4a200114  vminix.w    $vf4, $vf0, $vf0x
    ctx->pc = 0x322ebcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x322ec0: 0x4a200154  vminix.w    $vf5, $vf0, $vf0x
    ctx->pc = 0x322ec0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x322ec4: 0x4a200194  vminix.w    $vf6, $vf0, $vf0x
    ctx->pc = 0x322ec4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x322ec8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x322ec8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x322ecc: 0x4bc4012c  vsub.xyz    $vf4, $vf0, $vf4
    ctx->pc = 0x322eccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x322ed0: 0x4bc5016c  vsub.xyz    $vf5, $vf0, $vf5
    ctx->pc = 0x322ed0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x322ed4: 0x4bc601ac  vsub.xyz    $vf6, $vf0, $vf6
    ctx->pc = 0x322ed4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x322ed8: 0x4a0003bf  vwaitq
    ctx->pc = 0x322ed8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x322edc: 0x4b0000a0  vaddq.x     $vf2, $vf0, $Q
    ctx->pc = 0x322edcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x322ee0: 0x4a0002ff  vnop
    ctx->pc = 0x322ee0u;
    // NOP operation, no action needed for VU0
    // 0x322ee4: 0x4a0002ff  vnop
    ctx->pc = 0x322ee4u;
    // NOP operation, no action needed for VU0
    // 0x322ee8: 0x4ae103be  vrsqrt      $Q, $vf0w, $vf1y
    ctx->pc = 0x322ee8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x322eec: 0x4b02212a  vmul.x      $vf4, $vf4, $vf2
    ctx->pc = 0x322eecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x322ef0: 0x4b02296a  vmul.x      $vf5, $vf5, $vf2
    ctx->pc = 0x322ef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x322ef4: 0x4b0231aa  vmul.x      $vf6, $vf6, $vf2
    ctx->pc = 0x322ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x322ef8: 0x4a0003bf  vwaitq
    ctx->pc = 0x322ef8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x322efc: 0x4a8000a0  vaddq.y     $vf2, $vf0, $Q
    ctx->pc = 0x322efcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x322f00: 0x4a0002ff  vnop
    ctx->pc = 0x322f00u;
    // NOP operation, no action needed for VU0
    // 0x322f04: 0x4a0002ff  vnop
    ctx->pc = 0x322f04u;
    // NOP operation, no action needed for VU0
    // 0x322f08: 0x4b6103be  vrsqrt      $Q, $vf0w, $vf1z
    ctx->pc = 0x322f08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x322f0c: 0x4a82212a  vmul.y      $vf4, $vf4, $vf2
    ctx->pc = 0x322f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x322f10: 0x4a82296a  vmul.y      $vf5, $vf5, $vf2
    ctx->pc = 0x322f10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x322f14: 0x4a8231aa  vmul.y      $vf6, $vf6, $vf2
    ctx->pc = 0x322f14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x322f18: 0x4a0003bf  vwaitq
    ctx->pc = 0x322f18u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x322f1c: 0x4a40211c  vmulq.z     $vf4, $vf4, $Q
    ctx->pc = 0x322f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x322f20: 0x4a40295c  vmulq.z     $vf5, $vf5, $Q
    ctx->pc = 0x322f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x322f24: 0x4a40319c  vmulq.z     $vf6, $vf6, $Q
    ctx->pc = 0x322f24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x322f28: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x322f28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x322f2c: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x322f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x322f30: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x322f30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x322f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322f38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x322f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x322F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F3Cu;
        // 0x322f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322F44u;
    // 0x322f44: 0x0  nop
    ctx->pc = 0x322f44u;
    // NOP
    ctx->pc = 0x322f48u;
}
