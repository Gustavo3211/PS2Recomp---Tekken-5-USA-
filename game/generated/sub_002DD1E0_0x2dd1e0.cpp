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

// Function: sub_002DD1E0
// Address: 0x2dd1e0 - 0x2dd320
void sub_002DD1E0_0x2dd1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD1E0_0x2dd1e0");
#endif

    ctx->pc = 0x2dd1e0u;

    // 0x2dd1e0: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2dd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2dd1e4: 0x24422b80  addiu       $v0, $v0, 0x2B80
    ctx->pc = 0x2dd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11136));
    // 0x2dd1e8: 0xc7839500  lwc1        $f3, -0x6B00($gp)
    ctx->pc = 0x2dd1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd1ec: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2dd1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd1f0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2dd1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd1f4: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2dd1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd1f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2dd1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2dd1fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd1fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2dd200: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2dd200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2dd204: 0x30e9003f  andi        $t1, $a3, 0x3F
    ctx->pc = 0x2dd204u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x2dd208: 0x30e7ffc0  andi        $a3, $a3, 0xFFC0
    ctx->pc = 0x2dd208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65472);
    // 0x2dd20c: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x2dd20cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x2dd210: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2dd210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2dd214: 0xcce00000  pref        0x00, 0x0($a3)
    ctx->pc = 0x2dd214u;
    // PREF instruction (ignored)
    // 0x2dd218: 0x71294c88  pextlw      $t1, $t1, $t1
    ctx->pc = 0x2dd218u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x2dd21c: 0x48a96000  qmtc2.ni    $t1, $vf12
    ctx->pc = 0x2dd21cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2dd220: 0x4b8c613c  vitof0.xy   $vf12, $vf12
    ctx->pc = 0x2dd220u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[12]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x2dd224: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2dd224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2dd228: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd228u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2dd22c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2dd22cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2dd230: 0x3088003f  andi        $t0, $a0, 0x3F
    ctx->pc = 0x2dd230u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x2dd234: 0x3084ffc0  andi        $a0, $a0, 0xFFC0
    ctx->pc = 0x2dd234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65472);
    // 0x2dd238: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2dd238u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2dd23c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2dd23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dd240: 0x71084488  pextlw      $t0, $t0, $t0
    ctx->pc = 0x2dd240u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x2dd244: 0x48a86800  qmtc2.ni    $t0, $vf13
    ctx->pc = 0x2dd244u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2dd248: 0x4b8d693c  vitof0.xy   $vf13, $vf13
    ctx->pc = 0x2dd248u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[13]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x2dd24c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2dd24cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2dd250: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2dd254: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2dd254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2dd258: 0x3069003f  andi        $t1, $v1, 0x3F
    ctx->pc = 0x2dd258u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2dd25c: 0x3063ffc0  andi        $v1, $v1, 0xFFC0
    ctx->pc = 0x2dd25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65472);
    // 0x2dd260: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2dd260u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2dd264: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dd264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dd268: 0x71294c88  pextlw      $t1, $t1, $t1
    ctx->pc = 0x2dd268u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x2dd26c: 0x48a97000  qmtc2.ni    $t1, $vf14
    ctx->pc = 0x2dd26cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2dd270: 0x4b8e713c  vitof0.xy   $vf14, $vf14
    ctx->pc = 0x2dd270u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[14]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x2dd274: 0xd8ef0000  lqc2        $vf15, 0x0($a3)
    ctx->pc = 0x2dd274u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2dd278: 0x4b0f61be  vmulaz.x    $ACC, $vf12, $vf15z
    ctx->pc = 0x2dd278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2dd27c: 0x4a8f61bf  vmulaw.y    $ACC, $vf12, $vf15w
    ctx->pc = 0x2dd27cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2dd280: 0x4b807b0b  vmaddw.xy   $vf12, $vf15, $vf0w
    ctx->pc = 0x2dd280u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x2dd284: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x2dd284u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd288: 0x4b1171be  vmulaz.x    $ACC, $vf14, $vf17z
    ctx->pc = 0x2dd288u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2dd28c: 0x4a9171bf  vmulaw.y    $ACC, $vf14, $vf17w
    ctx->pc = 0x2dd28cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2dd290: 0x4b808b8b  vmaddw.xy   $vf14, $vf17, $vf0w
    ctx->pc = 0x2dd290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x2dd294: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2dd294u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dd298: 0x4b1069be  vmulaz.x    $ACC, $vf13, $vf16z
    ctx->pc = 0x2dd298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2dd29c: 0x4a9069bf  vmulaw.y    $ACC, $vf13, $vf16w
    ctx->pc = 0x2dd29cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2dd2a0: 0x4b80834b  vmaddw.xy   $vf13, $vf16, $vf0w
    ctx->pc = 0x2dd2a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2a4: 0x4bc00043  vaddw.xyz   $vf1, $vf0, $vf0w
    ctx->pc = 0x2dd2a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2a8: 0x4b0c73d9  vmuly.x     $vf15, $vf14, $vf12y
    ctx->pc = 0x2dd2a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2ac: 0x4b0c7418  vmulx.x     $vf16, $vf14, $vf12x
    ctx->pc = 0x2dd2acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2b0: 0x4a8c73d9  vmuly.y     $vf15, $vf14, $vf12y
    ctx->pc = 0x2dd2b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2b4: 0x4a8c7418  vmulx.y     $vf16, $vf14, $vf12x
    ctx->pc = 0x2dd2b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2b8: 0x4a8d70aa  vmul.y      $vf2, $vf14, $vf13
    ctx->pc = 0x2dd2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2bc: 0x4a8e6c58  vmulx.y     $vf17, $vf13, $vf14x
    ctx->pc = 0x2dd2bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2c0: 0x4a4d0444  vsubx.z     $vf17, $vf0, $vf13x
    ctx->pc = 0x2dd2c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2c4: 0x4a200458  vmulx.w     $vf17, $vf0, $vf0x
    ctx->pc = 0x2dd2c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2c8: 0x4b020441  vaddy.x     $vf17, $vf0, $vf2y
    ctx->pc = 0x2dd2c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2cc: 0x4b106abe  vmula.x     $ACC, $vf13, $vf16
    ctx->pc = 0x2dd2ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[16]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2dd2d0: 0x4b0f0889  vmaddy.x    $vf2, $vf1, $vf15y
    ctx->pc = 0x2dd2d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2d4: 0x4b0d60d9  vmuly.x     $vf3, $vf12, $vf13y
    ctx->pc = 0x2dd2d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2d8: 0xf8b10000  sqc2        $vf17, 0x0($a1)
    ctx->pc = 0x2dd2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x2dd2dc: 0x4b1069bd  vmulay.x    $ACC, $vf13, $vf16y
    ctx->pc = 0x2dd2dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2dd2e0: 0x4b0f0c6d  vmsub.x     $vf17, $vf1, $vf15
    ctx->pc = 0x2dd2e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[15]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2e4: 0x4a820440  vaddx.y     $vf17, $vf0, $vf2x
    ctx->pc = 0x2dd2e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2e8: 0x4a430440  vaddx.z     $vf17, $vf0, $vf3x
    ctx->pc = 0x2dd2e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2ec: 0x4b0f6abe  vmula.x     $ACC, $vf13, $vf15
    ctx->pc = 0x2dd2ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[15]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2dd2f0: 0x4b10088d  vmsuby.x    $vf2, $vf1, $vf16y
    ctx->pc = 0x2dd2f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2f4: 0x4a8d60ea  vmul.y      $vf3, $vf12, $vf13
    ctx->pc = 0x2dd2f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2dd2f8: 0xf8b10010  sqc2        $vf17, 0x10($a1)
    ctx->pc = 0x2dd2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x2dd2fc: 0x4b0f69bd  vmulay.x    $ACC, $vf13, $vf15y
    ctx->pc = 0x2dd2fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2dd300: 0x4b100c69  vmadd.x     $vf17, $vf1, $vf16
    ctx->pc = 0x2dd300u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[16]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2dd304: 0x4a820440  vaddx.y     $vf17, $vf0, $vf2x
    ctx->pc = 0x2dd304u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2dd308: 0x4a430441  vaddy.z     $vf17, $vf0, $vf3y
    ctx->pc = 0x2dd308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2dd30c: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x2dd30cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dd310: 0xaca9003c  sw          $t1, 0x3C($a1)
    ctx->pc = 0x2dd310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 9));
    // 0x2dd314: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD314u;
        // 0x2dd318: 0xf8b10020  sqc2        $vf17, 0x20($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[17]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD31Cu;
    // 0x2dd31c: 0x0  nop
    ctx->pc = 0x2dd31cu;
    // NOP
    ctx->pc = 0x2dd320u;
}
