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

// Function: sub_00322F48
// Address: 0x322f48 - 0x3230d8
void sub_00322F48_0x322f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322F48_0x322f48");
#endif

    switch (ctx->pc) {
        case 0x322f60u: goto label_322f60;
        case 0x323040u: goto label_323040;
        case 0x323068u: goto label_323068;
        case 0x323070u: goto label_323070;
        default: break;
    }

    ctx->pc = 0x322f48u;

    // 0x322f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322f50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x322f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322f54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x322f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x322f58: 0xc0ca868  jal         func_32A1A0
    ctx->pc = 0x322F58u;
    SET_GPR_U32(ctx, 31, 0x322F60u);
    ctx->pc = 0x322F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322F58u;
    // 0x322f5c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A1A0u, 0x322F58u, 0x322F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F60u;
label_322f60:
    // 0x322f60: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x322f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322f64: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x322f64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x322f68: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x322f68u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x322f6c: 0x4bfc09bc  vmulax.xyzw $ACC, $vf1, $vf28x
    ctx->pc = 0x322f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x322f70: 0x4bfc10bd  vmadday.xyzw $ACC, $vf2, $vf28y
    ctx->pc = 0x322f70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x322f74: 0x4bfc190a  vmaddz.xyzw $vf4, $vf3, $vf28z
    ctx->pc = 0x322f74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x322f78: 0x4bfd09bc  vmulax.xyzw $ACC, $vf1, $vf29x
    ctx->pc = 0x322f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x322f7c: 0x4bfd10bd  vmadday.xyzw $ACC, $vf2, $vf29y
    ctx->pc = 0x322f7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x322f80: 0x4bfd194a  vmaddz.xyzw $vf5, $vf3, $vf29z
    ctx->pc = 0x322f80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x322f84: 0x4bfe09bc  vmulax.xyzw $ACC, $vf1, $vf30x
    ctx->pc = 0x322f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x322f88: 0x4bfe10bd  vmadday.xyzw $ACC, $vf2, $vf30y
    ctx->pc = 0x322f88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x322f8c: 0x4bfe198a  vmaddz.xyzw $vf6, $vf3, $vf30z
    ctx->pc = 0x322f8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x322f90: 0x4be422be  vmula.xyzw  $ACC, $vf4, $vf4
    ctx->pc = 0x322f90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x322f94: 0x4be52abd  vmadda.xyzw $ACC, $vf5, $vf5
    ctx->pc = 0x322f94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x322f98: 0x4be63069  vmadd.xyzw  $vf1, $vf6, $vf6
    ctx->pc = 0x322f98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x322f9c: 0x4be000d4  vminix.xyzw $vf3, $vf0, $vf0x
    ctx->pc = 0x322f9cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x322fa0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x322fa0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x322fa4: 0x4be4192c  vsub.xyzw   $vf4, $vf3, $vf4
    ctx->pc = 0x322fa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x322fa8: 0x4be5196c  vsub.xyzw   $vf5, $vf3, $vf5
    ctx->pc = 0x322fa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x322fac: 0x4be619ac  vsub.xyzw   $vf6, $vf3, $vf6
    ctx->pc = 0x322facu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x322fb0: 0x4a0003bf  vwaitq
    ctx->pc = 0x322fb0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x322fb4: 0x4b0000a0  vaddq.x     $vf2, $vf0, $Q
    ctx->pc = 0x322fb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x322fb8: 0x4a0002ff  vnop
    ctx->pc = 0x322fb8u;
    // NOP operation, no action needed for VU0
    // 0x322fbc: 0x4a0002ff  vnop
    ctx->pc = 0x322fbcu;
    // NOP operation, no action needed for VU0
    // 0x322fc0: 0x4ae103be  vrsqrt      $Q, $vf0w, $vf1y
    ctx->pc = 0x322fc0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x322fc4: 0x4b02212a  vmul.x      $vf4, $vf4, $vf2
    ctx->pc = 0x322fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x322fc8: 0x4b02296a  vmul.x      $vf5, $vf5, $vf2
    ctx->pc = 0x322fc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x322fcc: 0x4b0231aa  vmul.x      $vf6, $vf6, $vf2
    ctx->pc = 0x322fccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x322fd0: 0x4a0003bf  vwaitq
    ctx->pc = 0x322fd0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x322fd4: 0x4a8000a0  vaddq.y     $vf2, $vf0, $Q
    ctx->pc = 0x322fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x322fd8: 0x4a0002ff  vnop
    ctx->pc = 0x322fd8u;
    // NOP operation, no action needed for VU0
    // 0x322fdc: 0x4a0002ff  vnop
    ctx->pc = 0x322fdcu;
    // NOP operation, no action needed for VU0
    // 0x322fe0: 0x4b6103be  vrsqrt      $Q, $vf0w, $vf1z
    ctx->pc = 0x322fe0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x322fe4: 0x4a82212a  vmul.y      $vf4, $vf4, $vf2
    ctx->pc = 0x322fe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x322fe8: 0x4a82296a  vmul.y      $vf5, $vf5, $vf2
    ctx->pc = 0x322fe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x322fec: 0x4a8231aa  vmul.y      $vf6, $vf6, $vf2
    ctx->pc = 0x322fecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x322ff0: 0x4a0003bf  vwaitq
    ctx->pc = 0x322ff0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x322ff4: 0x4a4000a0  vaddq.z     $vf2, $vf0, $Q
    ctx->pc = 0x322ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x322ff8: 0x4a0002ff  vnop
    ctx->pc = 0x322ff8u;
    // NOP operation, no action needed for VU0
    // 0x322ffc: 0x4a0002ff  vnop
    ctx->pc = 0x322ffcu;
    // NOP operation, no action needed for VU0
    // 0x323000: 0x4be103be  vrsqrt      $Q, $vf0w, $vf1w
    ctx->pc = 0x323000u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x323004: 0x4a42212a  vmul.z      $vf4, $vf4, $vf2
    ctx->pc = 0x323004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x323008: 0x4a42296a  vmul.z      $vf5, $vf5, $vf2
    ctx->pc = 0x323008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x32300c: 0x4a4231aa  vmul.z      $vf6, $vf6, $vf2
    ctx->pc = 0x32300cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x323010: 0x4a0003bf  vwaitq
    ctx->pc = 0x323010u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x323014: 0x4a20211c  vmulq.w     $vf4, $vf4, $Q
    ctx->pc = 0x323014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x323018: 0x4a20295c  vmulq.w     $vf5, $vf5, $Q
    ctx->pc = 0x323018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x32301c: 0x4a20319c  vmulq.w     $vf6, $vf6, $Q
    ctx->pc = 0x32301cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x323020: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x323020u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x323024: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x323024u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x323028: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x323028u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x32302c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32302cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323030: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x323030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323034: 0x3e00008  jr          $ra
    ctx->pc = 0x323034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323034u;
        // 0x323038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32303Cu;
    // 0x32303c: 0x0  nop
    ctx->pc = 0x32303cu;
    // NOP
label_323040:
    // 0x323040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323048: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x323048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32304c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323058: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x323058u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x32305c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32305cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x323060: 0xc0cb84a  jal         func_32E128
    ctx->pc = 0x323060u;
    SET_GPR_U32(ctx, 31, 0x323068u);
    ctx->pc = 0x32E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E128u, 0x323060u, 0x323068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323068u;
label_323068:
    // 0x323068: 0xc0ca918  jal         func_32A460
    ctx->pc = 0x323068u;
    SET_GPR_U32(ctx, 31, 0x323070u);
    ctx->pc = 0x32306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323068u;
    // 0x32306c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A460u, 0x323068u, 0x323070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323070u;
label_323070:
    // 0x323070: 0x4be001d4  vminix.xyzw $vf7, $vf0, $vf0x
    ctx->pc = 0x323070u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x323074: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x323074u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323078: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x323078u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32307c: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x32307cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x323080: 0x4bff383c  vaddax.xyzw $ACC, $vf7, $vf31x
    ctx->pc = 0x323080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x323084: 0x4bfc08bc  vmaddax.xyzw $ACC, $vf1, $vf28x
    ctx->pc = 0x323084u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x323088: 0x4bfd10bc  vmaddax.xyzw $ACC, $vf2, $vf29x
    ctx->pc = 0x323088u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32308c: 0x4bfe1908  vmaddx.xyzw $vf4, $vf3, $vf30x
    ctx->pc = 0x32308cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x323090: 0x4bff383d  vadday.xyzw $ACC, $vf7, $vf31y
    ctx->pc = 0x323090u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x323094: 0x4bfc08bd  vmadday.xyzw $ACC, $vf1, $vf28y
    ctx->pc = 0x323094u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x323098: 0x4bfd10bd  vmadday.xyzw $ACC, $vf2, $vf29y
    ctx->pc = 0x323098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32309c: 0x4bfe1949  vmaddy.xyzw $vf5, $vf3, $vf30y
    ctx->pc = 0x32309cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3230a0: 0x4bff383e  vaddaz.xyzw $ACC, $vf7, $vf31z
    ctx->pc = 0x3230a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3230a4: 0x4bfc08be  vmaddaz.xyzw $ACC, $vf1, $vf28z
    ctx->pc = 0x3230a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3230a8: 0x4bfd10be  vmaddaz.xyzw $ACC, $vf2, $vf29z
    ctx->pc = 0x3230a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3230ac: 0x4bfe198a  vmaddz.xyzw $vf6, $vf3, $vf30z
    ctx->pc = 0x3230acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3230b0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x3230b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3230b4: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x3230b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3230b8: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x3230b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x3230bc: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x3230bcu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x3230c0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3230c0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3230c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3230c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3230c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3230c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3230cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3230ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3230d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3230D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3230D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230D0u;
        // 0x3230d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3230D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3230D8u;
}
