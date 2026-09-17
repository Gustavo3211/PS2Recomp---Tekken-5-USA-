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

// Function: sub_002232B0
// Address: 0x2232b0 - 0x223898
void sub_002232B0_0x2232b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002232B0_0x2232b0");
#endif

    switch (ctx->pc) {
        case 0x223340u: goto label_223340;
        case 0x223668u: goto label_223668;
        case 0x223698u: goto label_223698;
        case 0x223730u: goto label_223730;
        case 0x2237c8u: goto label_2237c8;
        case 0x2237d4u: goto label_2237d4;
        case 0x22384cu: goto label_22384c;
        default: break;
    }

    ctx->pc = 0x2232b0u;

    // 0x2232b0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2232b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2232b4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2232b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232b8: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x2232b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x2232bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2232bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232c0: 0xe7b901e8  swc1        $f25, 0x1E8($sp)
    ctx->pc = 0x2232c0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2232c4: 0xe7b801e0  swc1        $f24, 0x1E0($sp)
    ctx->pc = 0x2232c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2232c8: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x2232c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2232cc: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x2232ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2232d0: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x2232d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2232d4: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x2232d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x2232d8: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x2232d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x2232dc: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x2232dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x2232e0: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x2232e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
    // 0x2232e4: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x2232e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
    // 0x2232e8: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x2232e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
    // 0x2232ec: 0xffb701a8  sd          $s7, 0x1A8($sp)
    ctx->pc = 0x2232ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 23));
    // 0x2232f0: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x2232f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
    // 0x2232f4: 0xffbf01b8  sd          $ra, 0x1B8($sp)
    ctx->pc = 0x2232f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 31));
    // 0x2232f8: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x2232f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2232fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2232fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x223300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223304: 0xc5340008  lwc1        $f20, 0x8($t1)
    ctx->pc = 0x223304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223308: 0x8d300000  lw          $s0, 0x0($t1)
    ctx->pc = 0x223308u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22330c: 0x8d310004  lw          $s1, 0x4($t1)
    ctx->pc = 0x22330cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x223310: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x223310u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x223314: 0x4490b000  mtc1        $s0, $f22
    ctx->pc = 0x223314u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x223318: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x223318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x22331c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22331cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x223320: 0x4491b800  mtc1        $s1, $f23
    ctx->pc = 0x223320u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x223324: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x223324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x223328: 0x7fa90160  sq          $t1, 0x160($sp)
    ctx->pc = 0x223328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 9));
    // 0x22332c: 0x4615b002  mul.s       $f0, $f22, $f21
    ctx->pc = 0x22332cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x223330: 0x4615b842  mul.s       $f1, $f23, $f21
    ctx->pc = 0x223330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x223334: 0x46000647  neg.s       $f25, $f0
    ctx->pc = 0x223334u;
    ctx->f[25] = FPU_NEG_S(ctx->f[0]);
    // 0x223338: 0xc088a7c  jal         func_2229F0
    ctx->pc = 0x223338u;
    SET_GPR_U32(ctx, 31, 0x223340u);
    ctx->pc = 0x22333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223338u;
    // 0x22333c: 0x46000e07  neg.s       $f24, $f1 (Delay Slot)
    ctx->f[24] = FPU_NEG_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2229F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2229F0u, 0x223338u, 0x223340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223340u;
label_223340:
    // 0x223340: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x223340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x223344: 0x7a860000  lq          $a2, 0x0($s4)
    ctx->pc = 0x223344u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x223348: 0x7a840010  lq          $a0, 0x10($s4)
    ctx->pc = 0x223348u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x22334c: 0x7a870020  lq          $a3, 0x20($s4)
    ctx->pc = 0x22334cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x223350: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x223350u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x223354: 0x70862c88  pextlw      $a1, $a0, $a2
    ctx->pc = 0x223354u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x223358: 0x708624a8  pextuw      $a0, $a0, $a2
    ctx->pc = 0x223358u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x22335c: 0x70671488  pextlw      $v0, $v1, $a3
    ctx->pc = 0x22335cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x223360: 0x70671ca8  pextuw      $v1, $v1, $a3
    ctx->pc = 0x223360u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x223364: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x223364u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x223368: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x223368u;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x22336c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x22336cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x223370: 0xda870030  lqc2        $vf7, 0x30($s4)
    ctx->pc = 0x223370u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x223374: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x223374u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x223378: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x223378u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x22337c: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x22337cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x223380: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x223380u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x223384: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x223384u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x223388: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x223388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x22338c: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x22338cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x223390: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x223390u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x223394: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x223394u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
    // 0x223398: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x223398u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
    // 0x22339c: 0xf9070030  sqc2        $vf7, 0x30($t0)
    ctx->pc = 0x22339cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2233a0: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x2233a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2233a4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2233a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2233a8: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x2233a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x2233ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2233acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233b0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2233b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2233b4: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2233b4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2233b8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2233b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2233bc: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2233bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2233c0: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2233c0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2233c4: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2233c4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2233c8: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2233c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2233cc: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2233ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2233d0: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2233d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2233d4: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2233d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2233d8: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2233d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2233dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2233dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2233e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2233e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2233e4: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x2233e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2233e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2233e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2233ec: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2233ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2233f0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2233f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2233f4: 0xc4a10060  lwc1        $f1, 0x60($a1)
    ctx->pc = 0x2233f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2233f8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2233f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2233fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223400: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x223400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x223404: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x223404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x223408: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x223408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22340c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x22340cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x223410: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x223410u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x223414: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x223414u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x223418: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x223418u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x22341c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x22341cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x223420: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x223420u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x223424: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x223424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x223428: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x223428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22342c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x22342cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x223430: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x223430u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x223434: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x223434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223438: 0x4602109c  madd.s      $f2, $f2, $f2
    ctx->pc = 0x223438u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x22343c: 0x46020084  c1          0x20084
    ctx->pc = 0x22343cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x223440: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x223440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x223444: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x223444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223448: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22344c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22344cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223450: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x223450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x223454: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x223454u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223458: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x223458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x22345c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x22345cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x223460: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x223460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223464: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x223464u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x223468: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x223468u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x22346c: 0xe444000c  swc1        $f4, 0xC($v0)
    ctx->pc = 0x22346cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x223470: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x223470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x223474: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x223474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223478: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x223478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x22347c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x22347cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x223480: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x223480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223484: 0xe444001c  swc1        $f4, 0x1C($v0)
    ctx->pc = 0x223484u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x223488: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x223488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x22348c: 0xe4430014  swc1        $f3, 0x14($v0)
    ctx->pc = 0x22348cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x223490: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x223490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x223494: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x223494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223498: 0x46190041  sub.s       $f1, $f0, $f25
    ctx->pc = 0x223498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x22349c: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x22349cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2234a0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2234A0u;
    {
        const bool branch_taken_0x2234a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2234A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234A0u;
        // 0x2234a4: 0x7ba90160  lq          $t1, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234a0) {
            ctx->pc = 0x2234CCu;
            goto label_2234cc;
        }
    }
    ctx->pc = 0x2234A8u;
    // 0x2234a8: 0x4614b002  mul.s       $f0, $f22, $f20
    ctx->pc = 0x2234a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2234ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2234acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2234b0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2234B0u;
    {
        const bool branch_taken_0x2234b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2234B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234B0u;
        // 0x2234b4: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234b0) {
            ctx->pc = 0x2234CCu;
            goto label_2234cc;
        }
    }
    ctx->pc = 0x2234B8u;
    // 0x2234b8: 0x0  nop
    ctx->pc = 0x2234b8u;
    // NOP
    // 0x2234bc: 0x0  nop
    ctx->pc = 0x2234bcu;
    // NOP
    // 0x2234c0: 0x46140803  div.s       $f0, $f1, $f20
    ctx->pc = 0x2234c0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[20];
    // 0x2234c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2234c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2234c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2234c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2234cc:
    // 0x2234cc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2234ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2234d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2234d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2234d4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2234d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2234d8: 0x46180081  sub.s       $f2, $f0, $f24
    ctx->pc = 0x2234d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x2234dc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2234dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2234e0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2234E0u;
    {
        const bool branch_taken_0x2234e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2234E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234E0u;
        // 0x2234e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234e0) {
            ctx->pc = 0x22350Cu;
            goto label_22350c;
        }
    }
    ctx->pc = 0x2234E8u;
    // 0x2234e8: 0x4614b802  mul.s       $f0, $f23, $f20
    ctx->pc = 0x2234e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x2234ec: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2234ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2234f0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2234F0u;
    {
        const bool branch_taken_0x2234f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2234F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234F0u;
        // 0x2234f4: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234f0) {
            ctx->pc = 0x22350Cu;
            goto label_22350c;
        }
    }
    ctx->pc = 0x2234F8u;
    // 0x2234f8: 0x0  nop
    ctx->pc = 0x2234f8u;
    // NOP
    // 0x2234fc: 0x0  nop
    ctx->pc = 0x2234fcu;
    // NOP
    // 0x223500: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x223500u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x223504: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x223508: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x223508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_22350c:
    // 0x22350c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22350cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x223510: 0x27b600b0  addiu       $s6, $sp, 0xB0
    ctx->pc = 0x223510u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x223514: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x223514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223518: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x223518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22351c: 0x46190081  sub.s       $f2, $f0, $f25
    ctx->pc = 0x22351cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x223520: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x223520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223524: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x223524u;
    {
        const bool branch_taken_0x223524 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223524u;
        // 0x223528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223524) {
            ctx->pc = 0x223550u;
            goto label_223550;
        }
    }
    ctx->pc = 0x22352Cu;
    // 0x22352c: 0x4614b002  mul.s       $f0, $f22, $f20
    ctx->pc = 0x22352cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x223530: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x223530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223534: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x223534u;
    {
        const bool branch_taken_0x223534 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223534u;
        // 0x223538: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223534) {
            ctx->pc = 0x223550u;
            goto label_223550;
        }
    }
    ctx->pc = 0x22353Cu;
    // 0x22353c: 0x0  nop
    ctx->pc = 0x22353cu;
    // NOP
    // 0x223540: 0x0  nop
    ctx->pc = 0x223540u;
    // NOP
    // 0x223544: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x223544u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x223548: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223548u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22354c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x22354cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223550:
    // 0x223550: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x223550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x223554: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x223554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223558: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x223558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22355c: 0x46180081  sub.s       $f2, $f0, $f24
    ctx->pc = 0x22355cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x223560: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x223560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223564: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x223564u;
    {
        const bool branch_taken_0x223564 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223564u;
        // 0x223568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223564) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x22356Cu;
    // 0x22356c: 0x4614b802  mul.s       $f0, $f23, $f20
    ctx->pc = 0x22356cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x223570: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x223570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223574: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x223574u;
    {
        const bool branch_taken_0x223574 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223574u;
        // 0x223578: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223574) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x22357Cu;
    // 0x22357c: 0x0  nop
    ctx->pc = 0x22357cu;
    // NOP
    // 0x223580: 0x0  nop
    ctx->pc = 0x223580u;
    // NOP
    // 0x223584: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x223584u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x223588: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22358c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x22358cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223590:
    // 0x223590: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x223590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x223594: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x223594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223598: 0x4615c080  add.s       $f2, $f24, $f21
    ctx->pc = 0x223598u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x22359c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x22359cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2235a0: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x2235a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2235a4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2235a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2235a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2235a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2235ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2235acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2235b0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2235b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2235b4: 0x4615cd40  add.s       $f21, $f25, $f21
    ctx->pc = 0x2235b4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[25], ctx->f[21]);
    // 0x2235b8: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2235b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2235bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2235bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2235c0: 0xe7a40114  swc1        $f4, 0x114($sp)
    ctx->pc = 0x2235c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2235c4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2235c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2235c8: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x2235c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2235cc: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x2235ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2235d0: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x2235d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x2235d4: 0xe7a40104  swc1        $f4, 0x104($sp)
    ctx->pc = 0x2235d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2235d8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2235d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2235dc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2235dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2235e0: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x2235e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2235e4: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x2235e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2235e8: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x2235e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x2235ec: 0x7fc00000  sq          $zero, 0x0($fp)
    ctx->pc = 0x2235ecu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 0));
    // 0x2235f0: 0x7fc00010  sq          $zero, 0x10($fp)
    ctx->pc = 0x2235f0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), GPR_VEC(ctx, 0));
    // 0x2235f4: 0x7fc00020  sq          $zero, 0x20($fp)
    ctx->pc = 0x2235f4u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 32), GPR_VEC(ctx, 0));
    // 0x2235f8: 0xfbc00030  sqc2        $vf0, 0x30($fp)
    ctx->pc = 0x2235f8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2235fc: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2235fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x223600: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x223600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x223604: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223608: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x223608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22360c: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x22360cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x223610: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223614: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x223614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22361c: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x22361cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x223620: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223624: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x223624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x223628: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x223628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22362c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x22362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x223630: 0xafa40154  sw          $a0, 0x154($sp)
    ctx->pc = 0x223630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 4));
    // 0x223634: 0x93202a  slt         $a0, $a0, $s3
    ctx->pc = 0x223634u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x223638: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x223638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x22363c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x22363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x223640: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x223640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x223644: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x223644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x223648: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x223648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x22364c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x22364cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x223650: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x223650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x223654: 0x1480007e  bnez        $a0, . + 4 + (0x7E << 2)
    ctx->pc = 0x223654u;
    {
        const bool branch_taken_0x223654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x223658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223654u;
        // 0x223658: 0xe7a200f8  swc1        $f2, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223654) {
            ctx->pc = 0x223850u;
            goto label_223850;
        }
    }
    ctx->pc = 0x22365Cu;
    // 0x22365c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22365Cu;
    {
        const bool branch_taken_0x22365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22365c) {
            ctx->pc = 0x223670u;
            goto label_223670;
        }
    }
    ctx->pc = 0x223664u;
    // 0x223664: 0x0  nop
    ctx->pc = 0x223664u;
    // NOP
label_223668:
    // 0x223668: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22366c: 0x0  nop
    ctx->pc = 0x22366cu;
    // NOP
label_223670:
    // 0x223670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223678: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x223678u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x22367c: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x22367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x223680: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x223680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x223684: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x223684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x223688: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x223688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x22368c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x22368Cu;
    {
        const bool branch_taken_0x22368c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22368Cu;
        // 0x223690: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22368c) {
            ctx->pc = 0x223818u;
            goto label_223818;
        }
    }
    ctx->pc = 0x223694u;
    // 0x223694: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x223694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_223698:
    // 0x223698: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x223698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x22369c: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x22369cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2236a0: 0xda890010  lqc2        $vf9, 0x10($s4)
    ctx->pc = 0x2236a0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2236a4: 0xda8a0020  lqc2        $vf10, 0x20($s4)
    ctx->pc = 0x2236a4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2236a8: 0xda8b0030  lqc2        $vf11, 0x30($s4)
    ctx->pc = 0x2236a8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2236ac: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x2236acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2236b0: 0xdbc50010  lqc2        $vf5, 0x10($fp)
    ctx->pc = 0x2236b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2236b4: 0xdbc60020  lqc2        $vf6, 0x20($fp)
    ctx->pc = 0x2236b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2236b8: 0xdbc70030  lqc2        $vf7, 0x30($fp)
    ctx->pc = 0x2236b8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x2236bc: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2236bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236c0: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2236c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236c4: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2236c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236c8: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2236c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2236cc: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2236ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236d0: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2236d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236d4: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2236d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236d8: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2236d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2236dc: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2236dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236e0: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2236e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236e4: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2236e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236e8: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2236e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2236ec: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2236ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236f0: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2236f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236f4: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2236f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2236f8: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2236f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2236fc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2236fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223700: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x223700u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x223704: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x223704u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x223708: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x223708u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x22370c: 0x8e870040  lw          $a3, 0x40($s4)
    ctx->pc = 0x22370cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x223710: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x223710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x223714: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x223714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x223718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x223718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22371c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22371cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223720: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x223720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223724: 0x7fa90160  sq          $t1, 0x160($sp)
    ctx->pc = 0x223724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 9));
    // 0x223728: 0xc088650  jal         func_221940
    ctx->pc = 0x223728u;
    SET_GPR_U32(ctx, 31, 0x223730u);
    ctx->pc = 0x22372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223728u;
    // 0x22372c: 0xafb5015c  sw          $s5, 0x15C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221940u, 0x223728u, 0x223730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223730u;
label_223730:
    // 0x223730: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x223730u;
    {
        const bool branch_taken_0x223730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223730u;
        // 0x223734: 0x7ba90160  lq          $t1, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223730) {
            ctx->pc = 0x2237FCu;
            goto label_2237fc;
        }
    }
    ctx->pc = 0x223738u;
    // 0x223738: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x223738u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22373c: 0x7a830010  lq          $v1, 0x10($s4)
    ctx->pc = 0x22373cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x223740: 0x7a840020  lq          $a0, 0x20($s4)
    ctx->pc = 0x223740u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x223744: 0x7a850030  lq          $a1, 0x30($s4)
    ctx->pc = 0x223744u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x223748: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x223748u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x22374c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x22374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x223750: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x223750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x223754: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x223754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x223758: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x223758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x22375c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x22375cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x223760: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x223760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x223764: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x223764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223768: 0x226402a  slt         $t0, $s1, $a2
    ctx->pc = 0x223768u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22376c: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x22376cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x223770: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x223770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x223774: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x223774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x223778: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x223778u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x22377c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x22377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x223780: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x223780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223788: 0xe8200a  movz        $a0, $a3, $t0
    ctx->pc = 0x223788u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x22378c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22378cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223790: 0x27b70140  addiu       $s7, $sp, 0x140
    ctx->pc = 0x223790u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x223794: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223798: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x223798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22379c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22379cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2237a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2237a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2237a4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2237a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2237a8: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x2237a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2237ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2237acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2237b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2237b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237b4: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x2237b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x2237b8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2237b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2237bc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2237bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2237c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2237c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237c4: 0x0  nop
    ctx->pc = 0x2237c4u;
    // NOP
label_2237c8:
    // 0x2237c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2237c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2237cc: 0xc089146  jal         func_224518
    ctx->pc = 0x2237CCu;
    SET_GPR_U32(ctx, 31, 0x2237D4u);
    ctx->pc = 0x2237D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237CCu;
    // 0x2237d0: 0x7fa90160  sq          $t1, 0x160($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224518u, 0x2237CCu, 0x2237D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237D4u;
label_2237d4:
    // 0x2237d4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2237d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2237d8: 0x7ba90160  lq          $t1, 0x160($sp)
    ctx->pc = 0x2237d8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2237dc: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2237dcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2237e0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2237e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2237e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2237e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2237e8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2237e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2237ec: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2237ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2237f0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2237f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2237f4: 0x1450fff4  bne         $v0, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2237F4u;
    {
        const bool branch_taken_0x2237f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2237F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237F4u;
        // 0x2237f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237f4) {
            ctx->pc = 0x2237C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2237c8;
        }
    }
    ctx->pc = 0x2237FCu;
label_2237fc:
    // 0x2237fc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2237fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223800: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x223800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x223804: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x223804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x223808: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x223808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22380c: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x22380cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x223810: 0x1040ffa1  beqz        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x223810u;
    {
        const bool branch_taken_0x223810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223810u;
        // 0x223814: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223810) {
            ctx->pc = 0x223698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223698;
        }
    }
    ctx->pc = 0x223818u;
label_223818:
    // 0x223818: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x223818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22381c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22381cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x223820: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x223820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x223824: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x223824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x223828: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x223828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22382c: 0x1040ff8e  beqz        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x22382Cu;
    {
        const bool branch_taken_0x22382c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22382Cu;
        // 0x223830: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22382c) {
            ctx->pc = 0x223668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223668;
        }
    }
    ctx->pc = 0x223834u;
    // 0x223834: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x223834u;
    {
        const bool branch_taken_0x223834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223834u;
        // 0x223838: 0xdfb00170  ld          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223834) {
            ctx->pc = 0x223854u;
            goto label_223854;
        }
    }
    ctx->pc = 0x22383Cu;
    // 0x22383c: 0x0  nop
    ctx->pc = 0x22383cu;
    // NOP
    // 0x223840: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x223840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x223844: 0xc048b90  jal         func_122E40
    ctx->pc = 0x223844u;
    SET_GPR_U32(ctx, 31, 0x22384Cu);
    ctx->pc = 0x223848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223844u;
    // 0x223848: 0x2484fbe8  addiu       $a0, $a0, -0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x223844u, 0x22384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22384Cu;
label_22384c:
    // 0x22384c: 0x0  nop
    ctx->pc = 0x22384cu;
    // NOP
label_223850:
    // 0x223850: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x223850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_223854:
    // 0x223854: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x223854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x223858: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x223858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x22385c: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x22385cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x223860: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x223860u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x223864: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x223864u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x223868: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x223868u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x22386c: 0xdfb701a8  ld          $s7, 0x1A8($sp)
    ctx->pc = 0x22386cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x223870: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x223870u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x223874: 0xdfbf01b8  ld          $ra, 0x1B8($sp)
    ctx->pc = 0x223874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x223878: 0xc7b901e8  lwc1        $f25, 0x1E8($sp)
    ctx->pc = 0x223878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x22387c: 0xc7b801e0  lwc1        $f24, 0x1E0($sp)
    ctx->pc = 0x22387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x223880: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x223880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x223884: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x223884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x223888: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x223888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22388c: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x22388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223890: 0x3e00008  jr          $ra
    ctx->pc = 0x223890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223890u;
        // 0x223894: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223898u;
}
