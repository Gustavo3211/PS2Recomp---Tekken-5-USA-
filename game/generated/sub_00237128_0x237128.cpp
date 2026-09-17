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

// Function: sub_00237128
// Address: 0x237128 - 0x2373c8
void sub_00237128_0x237128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237128_0x237128");
#endif

    switch (ctx->pc) {
        case 0x2372d0u: goto label_2372d0;
        default: break;
    }

    ctx->pc = 0x237128u;

    // 0x237128: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x237128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23712c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x23712cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x237130: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x237130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x237134: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x237134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x237138: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x237138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x23713c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x23713cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x237140: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x237140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x237144: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x237144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x237148: 0x84e20012  lh          $v0, 0x12($a3)
    ctx->pc = 0x237148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x23714c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x23714cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x237150: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x237150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x237154: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x237154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x237158: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x237158u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x23715c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x23715cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x237160: 0x85020012  lh          $v0, 0x12($t0)
    ctx->pc = 0x237160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x237164: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x237164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x237168: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x237168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23716c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x23716cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x237170: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x237170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x237174: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x237174u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x237178: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x237178u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23717c: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x23717cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237180: 0xf9300000  sqc2        $vf16, 0x0($t1)
    ctx->pc = 0x237180u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x237184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x237188: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x237188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23718c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x23718cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x237190: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x237190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x237194: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x237194u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x237198: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x237198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23719c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x23719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2371a0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2371a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2371a4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2371a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2371a8: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x2371a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x2371ac: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x2371acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2371b0: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x2371b0u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x2371b4: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2371b4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2371b8: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x2371b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2371bc: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2371bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2371c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2371c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2371c4: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2371c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2371c8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2371c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2371cc: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2371ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2371d0: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x2371d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x2371d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2371d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2371d8: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2371d8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2371dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2371dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2371e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2371e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2371e4: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2371e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2371e8: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2371e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2371ec: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2371ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2371f0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2371f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2371f4: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2371f4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2371f8: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2371f8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2371fc: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2371fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237200: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x237200u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x237204: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x237204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x237208: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x237208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23720c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23720cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237210: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x237210u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x237214: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x237214u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237218: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x237218u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23721c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23721cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x237220: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x237220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x237224: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x237224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x237228: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x237228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x23722c: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x23722cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x237230: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x237230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x237234: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x237234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237238: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x237238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23723c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x23723cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x237240: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x237240u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x237244: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x237244u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x237248: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x237248u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x23724c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x23724cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237250: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x237250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237254: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x237254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x237258: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x237258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23725c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x23725cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237260: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x237260u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x237264: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x237264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x237268: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x237268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x23726c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23726cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237270: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x237270u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237274: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x237274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x237278: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x237278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23727c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x23727cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237280: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x237280u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x237284: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x237284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x237288: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x237288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23728c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x23728cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237290: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x237290u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237294: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x237294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237298: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x237298u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23729c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372a0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2372a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2372a4: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x2372a4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2372a8: 0xd8bf0000  lqc2        $vf31, 0x0($a1)
    ctx->pc = 0x2372a8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2372ac: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2372acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2372b0: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2372b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2372b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2372b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2372b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2372b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2372bc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x2372bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x2372c0: 0x24e77bf0  addiu       $a3, $a3, 0x7BF0
    ctx->pc = 0x2372c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31728));
    // 0x2372c4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2372c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2372c8: 0xc084ac6  jal         func_212B18
    ctx->pc = 0x2372C8u;
    SET_GPR_U32(ctx, 31, 0x2372D0u);
    ctx->pc = 0x2372CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372C8u;
    // 0x2372cc: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212B18u, 0x2372C8u, 0x2372D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372D0u;
label_2372d0:
    // 0x2372d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2372d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2372d4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2372d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372d8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2372d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2372dc: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2372dcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2372e0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2372e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2372e4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2372e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2372e8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2372e8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2372ec: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2372ecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2372f0: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2372f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2372f4: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2372f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2372f8: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2372f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2372fc: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2372fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237300: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x237300u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x237304: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x237304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x237308: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x237308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23730c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x23730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x237310: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x237310u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237314: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x237314u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237318: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x237318u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x23731c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x23731cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x237320: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x237320u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x237324: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x237324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x237328: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x237328u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23732c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x23732cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x237330: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x237330u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x237334: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x237334u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x237338: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x237338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x23733c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x23733cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x237340: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x237340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x237344: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x237344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237348: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x237348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23734c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x23734cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x237350: 0xc78286cc  lwc1        $f2, -0x7934($gp)
    ctx->pc = 0x237350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x237354: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x237354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237358: 0xc78586d0  lwc1        $f5, -0x7930($gp)
    ctx->pc = 0x237358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x23735c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x23735cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x237360: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x237360u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x237364: 0xc78386d4  lwc1        $f3, -0x792C($gp)
    ctx->pc = 0x237364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x237368: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x237368u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x23736c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x23736cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x237370: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x237370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x237374: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x237374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x237378: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x237378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x23737c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x23737cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x237380: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x237380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x237384: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x237384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x237388: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x237388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x23738c: 0x46010528  max.s       $f20, $f0, $f1
    ctx->pc = 0x23738cu;
    ctx->f[20] = std::max(ctx->f[0], ctx->f[1]);
    // 0x237390: 0xc78086d8  lwc1        $f0, -0x7928($gp)
    ctx->pc = 0x237390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237394: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x237394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237398: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x237398u;
    {
        const bool branch_taken_0x237398 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237398) {
            ctx->pc = 0x23739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237398u;
            // 0x23739c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373A0u;
            goto label_2373a0;
        }
    }
    ctx->pc = 0x2373A0u;
label_2373a0:
    // 0x2373a0: 0xc78086dc  lwc1        $f0, -0x7924($gp)
    ctx->pc = 0x2373a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2373a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2373a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2373a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2373A8u;
    {
        const bool branch_taken_0x2373a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2373a8) {
            ctx->pc = 0x2373ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2373A8u;
            // 0x2373ac: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373B0u;
            goto label_2373b0;
        }
    }
    ctx->pc = 0x2373B0u;
label_2373b0:
    // 0x2373b0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2373b0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x2373b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2373b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2373b8: 0xc7b40098  lwc1        $f20, 0x98($sp)
    ctx->pc = 0x2373b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2373bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2373BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2373C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373BCu;
        // 0x2373c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2373BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2373C4u;
    // 0x2373c4: 0x0  nop
    ctx->pc = 0x2373c4u;
    // NOP
    ctx->pc = 0x2373c8u;
}
