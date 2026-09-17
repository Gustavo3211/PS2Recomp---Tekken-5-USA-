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

// Function: sub_0033F4D0
// Address: 0x33f4d0 - 0x33f5d0
void sub_0033F4D0_0x33f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F4D0_0x33f4d0");
#endif

    ctx->pc = 0x33f4d0u;

    // 0x33f4d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33f4d4: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x33f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x33f4d8: 0xd8580380  lqc2        $vf24, 0x380($v0)
    ctx->pc = 0x33f4d8u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400800u));
    // 0x33f4dc: 0xd8590390  lqc2        $vf25, 0x390($v0)
    ctx->pc = 0x33f4dcu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400810u));
    // 0x33f4e0: 0xd85a03a0  lqc2        $vf26, 0x3A0($v0)
    ctx->pc = 0x33f4e0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x400820u));
    // 0x33f4e4: 0xd85b03b0  lqc2        $vf27, 0x3B0($v0)
    ctx->pc = 0x33f4e4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x400830u));
    // 0x33f4e8: 0x4bfcc1bc  vmulax.xyzw $ACC, $vf24, $vf28x
    ctx->pc = 0x33f4e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f4ec: 0x4bfcc8bd  vmadday.xyzw $ACC, $vf25, $vf28y
    ctx->pc = 0x33f4ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f4f0: 0x4bfcd04a  vmaddz.xyzw $vf1, $vf26, $vf28z
    ctx->pc = 0x33f4f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f4f4: 0x4bfdc1bc  vmulax.xyzw $ACC, $vf24, $vf29x
    ctx->pc = 0x33f4f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f4f8: 0x4bfdc8bd  vmadday.xyzw $ACC, $vf25, $vf29y
    ctx->pc = 0x33f4f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f4fc: 0x4bfdd08a  vmaddz.xyzw $vf2, $vf26, $vf29z
    ctx->pc = 0x33f4fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33f500: 0x4bfec1bc  vmulax.xyzw $ACC, $vf24, $vf30x
    ctx->pc = 0x33f500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f504: 0x4bfec8bd  vmadday.xyzw $ACC, $vf25, $vf30y
    ctx->pc = 0x33f504u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f508: 0x4bfed0ca  vmaddz.xyzw $vf3, $vf26, $vf30z
    ctx->pc = 0x33f508u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33f50c: 0x4bffc1bc  vmulax.xyzw $ACC, $vf24, $vf31x
    ctx->pc = 0x33f50cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f510: 0x4bffc8bd  vmadday.xyzw $ACC, $vf25, $vf31y
    ctx->pc = 0x33f510u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f514: 0x4bffd0be  vmaddaz.xyzw $ACC, $vf26, $vf31z
    ctx->pc = 0x33f514u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f518: 0x4bffdecb  vmaddw.xyzw $vf27, $vf27, $vf31w
    ctx->pc = 0x33f518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x33f51c: 0x4bf80b3c  vmove.xyzw  $vf24, $vf1
    ctx->pc = 0x33f51cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x33f520: 0x4bf9133c  vmove.xyzw  $vf25, $vf2
    ctx->pc = 0x33f520u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], ctx->vu0_vf[2], _mm_castsi128_ps(mask)); }
    // 0x33f524: 0x4bfa1b3c  vmove.xyzw  $vf26, $vf3
    ctx->pc = 0x33f524u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x33f528: 0x4bf8c2be  vmula.xyzw  $ACC, $vf24, $vf24
    ctx->pc = 0x33f528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[24]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f52c: 0x4bf9cabd  vmadda.xyzw $ACC, $vf25, $vf25
    ctx->pc = 0x33f52cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f530: 0x4bfad069  vmadd.xyzw  $vf1, $vf26, $vf26
    ctx->pc = 0x33f530u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[26]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f534: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x33f534u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x33f538: 0x4a0003bf  vwaitq
    ctx->pc = 0x33f538u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x33f53c: 0x4b00c61c  vmulq.x     $vf24, $vf24, $Q
    ctx->pc = 0x33f53cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x33f540: 0x4b00ce5c  vmulq.x     $vf25, $vf25, $Q
    ctx->pc = 0x33f540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x33f544: 0x4b00d69c  vmulq.x     $vf26, $vf26, $Q
    ctx->pc = 0x33f544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x33f548: 0x4b00dedc  vmulq.x     $vf27, $vf27, $Q
    ctx->pc = 0x33f548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[27], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x33f54c: 0x4a0002ff  vnop
    ctx->pc = 0x33f54cu;
    // NOP operation, no action needed for VU0
    // 0x33f550: 0x4a0002ff  vnop
    ctx->pc = 0x33f550u;
    // NOP operation, no action needed for VU0
    // 0x33f554: 0x4ae103be  vrsqrt      $Q, $vf0w, $vf1y
    ctx->pc = 0x33f554u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x33f558: 0x4a0003bf  vwaitq
    ctx->pc = 0x33f558u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x33f55c: 0x4a80c61c  vmulq.y     $vf24, $vf24, $Q
    ctx->pc = 0x33f55cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x33f560: 0x4a80ce5c  vmulq.y     $vf25, $vf25, $Q
    ctx->pc = 0x33f560u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x33f564: 0x4a80d69c  vmulq.y     $vf26, $vf26, $Q
    ctx->pc = 0x33f564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x33f568: 0x4a80dedc  vmulq.y     $vf27, $vf27, $Q
    ctx->pc = 0x33f568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[27], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x33f56c: 0x4a0002ff  vnop
    ctx->pc = 0x33f56cu;
    // NOP operation, no action needed for VU0
    // 0x33f570: 0x4a0002ff  vnop
    ctx->pc = 0x33f570u;
    // NOP operation, no action needed for VU0
    // 0x33f574: 0x4b6103be  vrsqrt      $Q, $vf0w, $vf1z
    ctx->pc = 0x33f574u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x33f578: 0x4a0003bf  vwaitq
    ctx->pc = 0x33f578u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x33f57c: 0x4a40c61c  vmulq.z     $vf24, $vf24, $Q
    ctx->pc = 0x33f57cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x33f580: 0x4a40ce5c  vmulq.z     $vf25, $vf25, $Q
    ctx->pc = 0x33f580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x33f584: 0x4a40d69c  vmulq.z     $vf26, $vf26, $Q
    ctx->pc = 0x33f584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x33f588: 0x4a40dedc  vmulq.z     $vf27, $vf27, $Q
    ctx->pc = 0x33f588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[27], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x33f58c: 0x4a0002ff  vnop
    ctx->pc = 0x33f58cu;
    // NOP operation, no action needed for VU0
    // 0x33f590: 0x4a0002ff  vnop
    ctx->pc = 0x33f590u;
    // NOP operation, no action needed for VU0
    // 0x33f594: 0x4be103be  vrsqrt      $Q, $vf0w, $vf1w
    ctx->pc = 0x33f594u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x33f598: 0x4a0003bf  vwaitq
    ctx->pc = 0x33f598u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x33f59c: 0x4a20c61c  vmulq.w     $vf24, $vf24, $Q
    ctx->pc = 0x33f59cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x33f5a0: 0x4a20ce5c  vmulq.w     $vf25, $vf25, $Q
    ctx->pc = 0x33f5a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x33f5a4: 0x4a20d69c  vmulq.w     $vf26, $vf26, $Q
    ctx->pc = 0x33f5a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x33f5a8: 0x4a20dedc  vmulq.w     $vf27, $vf27, $Q
    ctx->pc = 0x33f5a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[27], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x33f5ac: 0x4bf0c33c  vmove.xyzw  $vf16, $vf24
    ctx->pc = 0x33f5acu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], ctx->vu0_vf[24], _mm_castsi128_ps(mask)); }
    // 0x33f5b0: 0x4bf1cb3c  vmove.xyzw  $vf17, $vf25
    ctx->pc = 0x33f5b0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], ctx->vu0_vf[25], _mm_castsi128_ps(mask)); }
    // 0x33f5b4: 0x4bf2d33c  vmove.xyzw  $vf18, $vf26
    ctx->pc = 0x33f5b4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], ctx->vu0_vf[26], _mm_castsi128_ps(mask)); }
    // 0x33f5b8: 0x4bf3db3c  vmove.xyzw  $vf19, $vf27
    ctx->pc = 0x33f5b8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], ctx->vu0_vf[27], _mm_castsi128_ps(mask)); }
    // 0x33f5bc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x33f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x33f5c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33f5c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33f5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33f5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x33F5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5C8u;
        // 0x33f5cc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F5D0u;
}
