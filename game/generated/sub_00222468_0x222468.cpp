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

// Function: sub_00222468
// Address: 0x222468 - 0x2225f8
void sub_00222468_0x222468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222468_0x222468");
#endif

    ctx->pc = 0x222468u;

    // 0x222468: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x222468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22246c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22246cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222470: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x222470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x222474: 0xc78184b0  lwc1        $f1, -0x7B50($gp)
    ctx->pc = 0x222474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222478: 0x24427040  addiu       $v0, $v0, 0x7040
    ctx->pc = 0x222478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28736));
    // 0x22247c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x22247cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x222480: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x222480u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x467040u));
    // 0x222484: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x222484u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x222488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x222488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22248c: 0xdc4a0038  ld          $t2, 0x38($v0)
    ctx->pc = 0x22248cu;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x467078u));
    // 0x222490: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x222490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x222494: 0x0  nop
    ctx->pc = 0x222494u;
    // NOP
    // 0x222498: 0x0  nop
    ctx->pc = 0x222498u;
    // NOP
    // 0x22249c: 0x460e6b43  div.s       $f13, $f13, $f14
    ctx->pc = 0x22249cu;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[14];
    // 0x2224a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2224a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2224a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2224a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2224a8: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x2224a8u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x467048u));
    // 0x2224ac: 0xdc490010  ld          $t1, 0x10($v0)
    ctx->pc = 0x2224acu;
    SET_GPR_U64(ctx, 9, FAST_READ64(0x467050u));
    // 0x2224b0: 0xdc450018  ld          $a1, 0x18($v0)
    ctx->pc = 0x2224b0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x467058u));
    // 0x2224b4: 0xdc470020  ld          $a3, 0x20($v0)
    ctx->pc = 0x2224b4u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x467060u));
    // 0x2224b8: 0xdc430028  ld          $v1, 0x28($v0)
    ctx->pc = 0x2224b8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x467068u));
    // 0x2224bc: 0x0  nop
    ctx->pc = 0x2224bcu;
    // NOP
    // 0x2224c0: 0x0  nop
    ctx->pc = 0x2224c0u;
    // NOP
    // 0x2224c4: 0x460e6303  div.s       $f12, $f12, $f14
    ctx->pc = 0x2224c4u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[14];
    // 0x2224c8: 0xdc480030  ld          $t0, 0x30($v0)
    ctx->pc = 0x2224c8u;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x467070u));
    // 0x2224cc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2224ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2224d0: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x2224d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x2224d4: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x2224d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x2224d8: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x2224d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x2224dc: 0xffaa0038  sd          $t2, 0x38($sp)
    ctx->pc = 0x2224dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 10));
    // 0x2224e0: 0x0  nop
    ctx->pc = 0x2224e0u;
    // NOP
    // 0x2224e4: 0x0  nop
    ctx->pc = 0x2224e4u;
    // NOP
    // 0x2224e8: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x2224e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x2224ec: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2224ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2224f0: 0xffa90010  sd          $t1, 0x10($sp)
    ctx->pc = 0x2224f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 9));
    // 0x2224f4: 0xffa70020  sd          $a3, 0x20($sp)
    ctx->pc = 0x2224f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    // 0x2224f8: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x2224f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x2224fc: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x2224fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x222500: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x222500u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x222504: 0xe7ad0038  swc1        $f13, 0x38($sp)
    ctx->pc = 0x222504u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x222508: 0xe7ad0028  swc1        $f13, 0x28($sp)
    ctx->pc = 0x222508u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x22250c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x22250cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x222510: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x222510u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x222514: 0x460c601c  madd.s      $f0, $f12, $f12
    ctx->pc = 0x222514u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[12]));
    // 0x222518: 0x46001096  rsqrt.s     $f2, $f2, $f0
    ctx->pc = 0x222518u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[2]);
    // 0x22251c: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x22251cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222520: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x222520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x222524: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x222524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x222528: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x222528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x22252c: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x22252cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x222530: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222534: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x222534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x222538: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x222538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22253c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x222540: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x222540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222544: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x222544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222548: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x222548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22254c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x22254cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x222550: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x222550u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x222554: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x222554u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x222558: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x222558u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x22255c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x22255cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222560: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x222560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x222564: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x222564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x222568: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x222568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x22256c: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x22256cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x222570: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222574: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x222574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x222578: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x222578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22257c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x22257cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x222580: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x222580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222584: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x222584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222588: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x222588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22258c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x22258cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x222590: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x222590u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x222594: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x222594u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x222598: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x222598u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x22259c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x22259cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2225a0: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x2225a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2225a4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2225a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2225a8: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2225a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2225ac: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2225acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2225b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2225b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2225b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2225b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2225b8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2225b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2225bc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2225bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2225c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2225c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2225c4: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2225c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2225c8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2225c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2225cc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2225ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2225d0: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x2225d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x2225d4: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x2225d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2225d8: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x2225d8u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x2225dc: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2225dcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2225e0: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x2225e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2225e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2225e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2225e8: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2225e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2225ec: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2225ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2225f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2225F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2225F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225F0u;
        // 0x2225f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2225F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2225F8u;
}
