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

// Function: sub_00223898
// Address: 0x223898 - 0x223eb8
void sub_00223898_0x223898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223898_0x223898");
#endif

    switch (ctx->pc) {
        case 0x223928u: goto label_223928;
        case 0x223a20u: goto label_223a20;
        case 0x223aa4u: goto label_223aa4;
        case 0x223c80u: goto label_223c80;
        case 0x223cc0u: goto label_223cc0;
        case 0x223d10u: goto label_223d10;
        case 0x223d6cu: goto label_223d6c;
        case 0x223d7cu: goto label_223d7c;
        case 0x223de0u: goto label_223de0;
        case 0x223decu: goto label_223dec;
        case 0x223e64u: goto label_223e64;
        default: break;
    }

    ctx->pc = 0x223898u;

    // 0x223898: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x223898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x22389c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22389cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2238a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2238a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2238a4: 0xffb60360  sd          $s6, 0x360($sp)
    ctx->pc = 0x2238a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 22));
    // 0x2238a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2238a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238ac: 0xffb70368  sd          $s7, 0x368($sp)
    ctx->pc = 0x2238acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 872), GPR_U64(ctx, 23));
    // 0x2238b0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2238b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238b4: 0xe7ba03b0  swc1        $f26, 0x3B0($sp)
    ctx->pc = 0x2238b4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 944), bits); }
    // 0x2238b8: 0xe7b903a8  swc1        $f25, 0x3A8($sp)
    ctx->pc = 0x2238b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
    // 0x2238bc: 0xe7b803a0  swc1        $f24, 0x3A0($sp)
    ctx->pc = 0x2238bcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
    // 0x2238c0: 0xe7b70398  swc1        $f23, 0x398($sp)
    ctx->pc = 0x2238c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
    // 0x2238c4: 0xe7b60390  swc1        $f22, 0x390($sp)
    ctx->pc = 0x2238c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
    // 0x2238c8: 0xffb00330  sd          $s0, 0x330($sp)
    ctx->pc = 0x2238c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 16));
    // 0x2238cc: 0xffb10338  sd          $s1, 0x338($sp)
    ctx->pc = 0x2238ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 824), GPR_U64(ctx, 17));
    // 0x2238d0: 0xffb20340  sd          $s2, 0x340($sp)
    ctx->pc = 0x2238d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 18));
    // 0x2238d4: 0xffb30348  sd          $s3, 0x348($sp)
    ctx->pc = 0x2238d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 840), GPR_U64(ctx, 19));
    // 0x2238d8: 0xffb40350  sd          $s4, 0x350($sp)
    ctx->pc = 0x2238d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 20));
    // 0x2238dc: 0xffb50358  sd          $s5, 0x358($sp)
    ctx->pc = 0x2238dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 856), GPR_U64(ctx, 21));
    // 0x2238e0: 0xffbe0370  sd          $fp, 0x370($sp)
    ctx->pc = 0x2238e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 30));
    // 0x2238e4: 0xffbf0378  sd          $ra, 0x378($sp)
    ctx->pc = 0x2238e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 888), GPR_U64(ctx, 31));
    // 0x2238e8: 0xe7b50388  swc1        $f21, 0x388($sp)
    ctx->pc = 0x2238e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
    // 0x2238ec: 0xe7b40380  swc1        $f20, 0x380($sp)
    ctx->pc = 0x2238ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
    // 0x2238f0: 0xc6f50008  lwc1        $f21, 0x8($s7)
    ctx->pc = 0x2238f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2238f4: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2238f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2238f8: 0x8ef10004  lw          $s1, 0x4($s7)
    ctx->pc = 0x2238f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2238fc: 0x4600ad82  mul.s       $f22, $f21, $f0
    ctx->pc = 0x2238fcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x223900: 0x4490b800  mtc1        $s0, $f23
    ctx->pc = 0x223900u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x223904: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x223904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x223908: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x223908u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22390c: 0x4491c000  mtc1        $s1, $f24
    ctx->pc = 0x22390cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x223910: 0x4680c620  cvt.s.w     $f24, $f24
    ctx->pc = 0x223910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[24], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x223914: 0x4616b802  mul.s       $f0, $f23, $f22
    ctx->pc = 0x223914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
    // 0x223918: 0x4616c042  mul.s       $f1, $f24, $f22
    ctx->pc = 0x223918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
    // 0x22391c: 0x46000647  neg.s       $f25, $f0
    ctx->pc = 0x22391cu;
    ctx->f[25] = FPU_NEG_S(ctx->f[0]);
    // 0x223920: 0xc088a7c  jal         func_2229F0
    ctx->pc = 0x223920u;
    SET_GPR_U32(ctx, 31, 0x223928u);
    ctx->pc = 0x223924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223920u;
    // 0x223924: 0x46000e87  neg.s       $f26, $f1 (Delay Slot)
    ctx->f[26] = FPU_NEG_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2229F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2229F0u, 0x223920u, 0x223928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223928u;
label_223928:
    // 0x223928: 0x27a80220  addiu       $t0, $sp, 0x220
    ctx->pc = 0x223928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x22392c: 0x7ac60000  lq          $a2, 0x0($s6)
    ctx->pc = 0x22392cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x223930: 0x7ac40010  lq          $a0, 0x10($s6)
    ctx->pc = 0x223930u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x223934: 0x7ac70020  lq          $a3, 0x20($s6)
    ctx->pc = 0x223934u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x223938: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x223938u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22393c: 0x70862c88  pextlw      $a1, $a0, $a2
    ctx->pc = 0x22393cu;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x223940: 0x708624a8  pextuw      $a0, $a0, $a2
    ctx->pc = 0x223940u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x223944: 0x70671488  pextlw      $v0, $v1, $a3
    ctx->pc = 0x223944u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x223948: 0x70671ca8  pextuw      $v1, $v1, $a3
    ctx->pc = 0x223948u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x22394c: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x22394cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x223950: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x223950u;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x223954: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x223954u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x223958: 0xdac70030  lqc2        $vf7, 0x30($s6)
    ctx->pc = 0x223958u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x22395c: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x22395cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x223960: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x223960u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x223964: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x223964u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x223968: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x223968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x22396c: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x22396cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x223970: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x223970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x223974: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x223974u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x223978: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x223978u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x22397c: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x22397cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
    // 0x223980: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x223980u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
    // 0x223984: 0xf9070030  sqc2        $vf7, 0x30($t0)
    ctx->pc = 0x223984u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x223988: 0x27a30260  addiu       $v1, $sp, 0x260
    ctx->pc = 0x223988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x22398c: 0x8ec20040  lw          $v0, 0x40($s6)
    ctx->pc = 0x22398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x223990: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x223990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x223994: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x223994u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x223998: 0xd8890010  lqc2        $vf9, 0x10($a0)
    ctx->pc = 0x223998u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22399c: 0xd88a0020  lqc2        $vf10, 0x20($a0)
    ctx->pc = 0x22399cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2239a0: 0xd88b0030  lqc2        $vf11, 0x30($a0)
    ctx->pc = 0x2239a0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2239a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2239a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2239a8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2239a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2239ac: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2239acu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2239b0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2239b0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2239b4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2239b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239b8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2239b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239bc: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2239bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239c0: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2239c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2239c4: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2239c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239c8: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2239c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239cc: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2239ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239d0: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2239d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2239d4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2239d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239d8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2239d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239dc: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2239dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239e0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2239e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2239e4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2239e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239e8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2239e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239ec: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2239ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2239f0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2239f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2239f4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2239f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2239f8: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2239f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2239fc: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2239fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x223a00: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x223a00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x223a04: 0x8ec30040  lw          $v1, 0x40($s6)
    ctx->pc = 0x223a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x223a08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a0c: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x223a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x223a10: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x223A10u;
    {
        const bool branch_taken_0x223a10 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x223A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A10u;
        // 0x223a14: 0xafa50320  sw          $a1, 0x320($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a10) {
            ctx->pc = 0x223A74u;
            goto label_223a74;
        }
    }
    ctx->pc = 0x223A18u;
    // 0x223a18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223A18u;
    {
        const bool branch_taken_0x223a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A18u;
        // 0x223a1c: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a18) {
            ctx->pc = 0x223A28u;
            goto label_223a28;
        }
    }
    ctx->pc = 0x223A20u;
label_223a20:
    // 0x223a20: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x223a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x223a24: 0x0  nop
    ctx->pc = 0x223a24u;
    // NOP
label_223a28:
    // 0x223a28: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x223a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x223a2c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x223a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x223a30: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x223a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x223a34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x223a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x223a38: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x223a38u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223a3c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x223a3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223a40: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x223a40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x223a44: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x223a44u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x223a48: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x223a48u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x223a4c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x223a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x223a50: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x223a50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x223a54: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x223a54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x223a58: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x223a58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x223a5c: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x223a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x223a60: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x223a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x223a64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x223a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x223a68: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x223a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x223a6c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x223A6Cu;
    {
        const bool branch_taken_0x223a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A6Cu;
        // 0x223a70: 0x8ec30040  lw          $v1, 0x40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a6c) {
            ctx->pc = 0x223A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223a20;
        }
    }
    ctx->pc = 0x223A74u;
label_223a74:
    // 0x223a74: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x223a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x223a78: 0x78620040  lq          $v0, 0x40($v1)
    ctx->pc = 0x223a78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x223a7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x223a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223a84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x223a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x223a88: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x223a88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a8c: 0x27a70220  addiu       $a3, $sp, 0x220
    ctx->pc = 0x223a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x223a90: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x223a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a94: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x223a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a98: 0x7fa202c0  sq          $v0, 0x2C0($sp)
    ctx->pc = 0x223a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
    // 0x223a9c: 0xc08491e  jal         func_212478
    ctx->pc = 0x223A9Cu;
    SET_GPR_U32(ctx, 31, 0x223AA4u);
    ctx->pc = 0x223AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A9Cu;
    // 0x223aa0: 0xe7b402cc  swc1        $f20, 0x2CC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x223A9Cu, 0x223AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223AA4u;
label_223aa4:
    // 0x223aa4: 0x8ec40040  lw          $a0, 0x40($s6)
    ctx->pc = 0x223aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x223aa8: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x223aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x223aac: 0xc7a002c0  lwc1        $f0, 0x2C0($sp)
    ctx->pc = 0x223aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223ab0: 0xc483004c  lwc1        $f3, 0x4C($a0)
    ctx->pc = 0x223ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223ab4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x223ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x223ab8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x223ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x223abc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x223abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x223ac0: 0xe7a402a4  swc1        $f4, 0x2A4($sp)
    ctx->pc = 0x223ac0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x223ac4: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x223ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223ac8: 0xc7a102c0  lwc1        $f1, 0x2C0($sp)
    ctx->pc = 0x223ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223acc: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x223accu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x223ad0: 0xe7b402ac  swc1        $f20, 0x2AC($sp)
    ctx->pc = 0x223ad0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
    // 0x223ad4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x223ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x223ad8: 0xe7b402bc  swc1        $f20, 0x2BC($sp)
    ctx->pc = 0x223ad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 700), bits); }
    // 0x223adc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x223adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x223ae0: 0xe7a402b4  swc1        $f4, 0x2B4($sp)
    ctx->pc = 0x223ae0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
    // 0x223ae4: 0xe7a202a8  swc1        $f2, 0x2A8($sp)
    ctx->pc = 0x223ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x223ae8: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x223ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
    // 0x223aec: 0xe7a102b0  swc1        $f1, 0x2B0($sp)
    ctx->pc = 0x223aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x223af0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x223af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223af4: 0x46190041  sub.s       $f1, $f0, $f25
    ctx->pc = 0x223af4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x223af8: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x223af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223afc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x223AFCu;
    {
        const bool branch_taken_0x223afc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AFCu;
        // 0x223b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223afc) {
            ctx->pc = 0x223B28u;
            goto label_223b28;
        }
    }
    ctx->pc = 0x223B04u;
    // 0x223b04: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x223b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x223b08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x223b08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223b0c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x223B0Cu;
    {
        const bool branch_taken_0x223b0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B0Cu;
        // 0x223b10: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b0c) {
            ctx->pc = 0x223B28u;
            goto label_223b28;
        }
    }
    ctx->pc = 0x223B14u;
    // 0x223b14: 0x0  nop
    ctx->pc = 0x223b14u;
    // NOP
    // 0x223b18: 0x0  nop
    ctx->pc = 0x223b18u;
    // NOP
    // 0x223b1c: 0x46150803  div.s       $f0, $f1, $f21
    ctx->pc = 0x223b1cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[21];
    // 0x223b20: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223b20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x223b24: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x223b24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223b28:
    // 0x223b28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x223b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x223b2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x223b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223b30: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x223b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223b34: 0x461a0081  sub.s       $f2, $f0, $f26
    ctx->pc = 0x223b34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x223b38: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x223b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223b3c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x223B3Cu;
    {
        const bool branch_taken_0x223b3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B3Cu;
        // 0x223b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b3c) {
            ctx->pc = 0x223B68u;
            goto label_223b68;
        }
    }
    ctx->pc = 0x223B44u;
    // 0x223b44: 0x4615c002  mul.s       $f0, $f24, $f21
    ctx->pc = 0x223b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x223b48: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x223b48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223b4c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x223B4Cu;
    {
        const bool branch_taken_0x223b4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B4Cu;
        // 0x223b50: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b4c) {
            ctx->pc = 0x223B68u;
            goto label_223b68;
        }
    }
    ctx->pc = 0x223B54u;
    // 0x223b54: 0x0  nop
    ctx->pc = 0x223b54u;
    // NOP
    // 0x223b58: 0x0  nop
    ctx->pc = 0x223b58u;
    // NOP
    // 0x223b5c: 0x46151003  div.s       $f0, $f2, $f21
    ctx->pc = 0x223b5cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[21];
    // 0x223b60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223b60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x223b64: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x223b64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223b68:
    // 0x223b68: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x223b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x223b6c: 0x27b502b0  addiu       $s5, $sp, 0x2B0
    ctx->pc = 0x223b6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x223b70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x223b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223b74: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x223b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223b78: 0x46190081  sub.s       $f2, $f0, $f25
    ctx->pc = 0x223b78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x223b7c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x223b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223b80: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x223B80u;
    {
        const bool branch_taken_0x223b80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B80u;
        // 0x223b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b80) {
            ctx->pc = 0x223BACu;
            goto label_223bac;
        }
    }
    ctx->pc = 0x223B88u;
    // 0x223b88: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x223b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x223b8c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x223b8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223b90: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x223B90u;
    {
        const bool branch_taken_0x223b90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B90u;
        // 0x223b94: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b90) {
            ctx->pc = 0x223BACu;
            goto label_223bac;
        }
    }
    ctx->pc = 0x223B98u;
    // 0x223b98: 0x0  nop
    ctx->pc = 0x223b98u;
    // NOP
    // 0x223b9c: 0x0  nop
    ctx->pc = 0x223b9cu;
    // NOP
    // 0x223ba0: 0x46151003  div.s       $f0, $f2, $f21
    ctx->pc = 0x223ba0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[21];
    // 0x223ba4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223ba4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x223ba8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x223ba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223bac:
    // 0x223bac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x223bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x223bb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x223bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223bb4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x223bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223bb8: 0x461a0081  sub.s       $f2, $f0, $f26
    ctx->pc = 0x223bb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x223bbc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x223bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223bc0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x223BC0u;
    {
        const bool branch_taken_0x223bc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BC0u;
        // 0x223bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bc0) {
            ctx->pc = 0x223BECu;
            goto label_223bec;
        }
    }
    ctx->pc = 0x223BC8u;
    // 0x223bc8: 0x4615c002  mul.s       $f0, $f24, $f21
    ctx->pc = 0x223bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x223bcc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x223bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223bd0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x223BD0u;
    {
        const bool branch_taken_0x223bd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BD0u;
        // 0x223bd4: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bd0) {
            ctx->pc = 0x223BECu;
            goto label_223bec;
        }
    }
    ctx->pc = 0x223BD8u;
    // 0x223bd8: 0x0  nop
    ctx->pc = 0x223bd8u;
    // NOP
    // 0x223bdc: 0x0  nop
    ctx->pc = 0x223bdcu;
    // NOP
    // 0x223be0: 0x46151003  div.s       $f0, $f2, $f21
    ctx->pc = 0x223be0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[21];
    // 0x223be4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223be4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x223be8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x223be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223bec:
    // 0x223bec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x223becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x223bf0: 0x27a20270  addiu       $v0, $sp, 0x270
    ctx->pc = 0x223bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x223bf4: 0x4616cdc0  add.s       $f23, $f25, $f22
    ctx->pc = 0x223bf4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[25], ctx->f[22]);
    // 0x223bf8: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x223bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x223bfc: 0x4616d080  add.s       $f2, $f26, $f22
    ctx->pc = 0x223bfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[26], ctx->f[22]);
    // 0x223c00: 0xafa00268  sw          $zero, 0x268($sp)
    ctx->pc = 0x223c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
    // 0x223c04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x223c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x223c08: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x223c08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x223c0c: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x223c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x223c10: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x223c10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x223c14: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x223c14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x223c18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x223c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x223c1c: 0xafa30298  sw          $v1, 0x298($sp)
    ctx->pc = 0x223c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 3));
    // 0x223c20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x223c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223c24: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x223c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x223c28: 0xafa2032c  sw          $v0, 0x32C($sp)
    ctx->pc = 0x223c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 2));
    // 0x223c2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223c30: 0xc7a0032c  lwc1        $f0, 0x32C($sp)
    ctx->pc = 0x223c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223c38: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x223c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x223c3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223c40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x223c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x223c44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x223c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c48: 0xafa40328  sw          $a0, 0x328($sp)
    ctx->pc = 0x223c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 4));
    // 0x223c4c: 0x93202a  slt         $a0, $a0, $s3
    ctx->pc = 0x223c4cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x223c50: 0xafa30284  sw          $v1, 0x284($sp)
    ctx->pc = 0x223c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 3));
    // 0x223c54: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x223c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x223c58: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x223c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x223c5c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x223c5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x223c60: 0xafa50324  sw          $a1, 0x324($sp)
    ctx->pc = 0x223c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 5));
    // 0x223c64: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x223c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x223c68: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x223c68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x223c6c: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x223c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x223c70: 0x1480007d  bnez        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x223C70u;
    {
        const bool branch_taken_0x223c70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x223C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C70u;
        // 0x223c74: 0xe7a202a8  swc1        $f2, 0x2A8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c70) {
            ctx->pc = 0x223E68u;
            goto label_223e68;
        }
    }
    ctx->pc = 0x223C78u;
    // 0x223c78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223C78u;
    {
        const bool branch_taken_0x223c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223c78) {
            ctx->pc = 0x223C88u;
            goto label_223c88;
        }
    }
    ctx->pc = 0x223C80u;
label_223c80:
    // 0x223c80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x223c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223c84: 0x0  nop
    ctx->pc = 0x223c84u;
    // NOP
label_223c88:
    // 0x223c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223c8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223c90: 0x8fb2032c  lw          $s2, 0x32C($sp)
    ctx->pc = 0x223c90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x223c94: 0x8fa70324  lw          $a3, 0x324($sp)
    ctx->pc = 0x223c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
    // 0x223c98: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x223c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x223c9c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x223c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x223ca0: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x223ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x223ca4: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x223CA4u;
    {
        const bool branch_taken_0x223ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CA4u;
        // 0x223ca8: 0xe7a002a0  swc1        $f0, 0x2A0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ca4) {
            ctx->pc = 0x223E34u;
            goto label_223e34;
        }
    }
    ctx->pc = 0x223CACu;
    // 0x223cac: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x223cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x223cb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223cb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x223cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x223cb8: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x223cb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223cbc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x223cbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223cc0:
    // 0x223cc0: 0xc7a102a0  lwc1        $f1, 0x2A0($sp)
    ctx->pc = 0x223cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223cc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x223cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223cc8: 0xc7a002a8  lwc1        $f0, 0x2A8($sp)
    ctx->pc = 0x223cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223ccc: 0x461608c0  add.s       $f3, $f1, $f22
    ctx->pc = 0x223cccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x223cd0: 0xe7b402dc  swc1        $f20, 0x2DC($sp)
    ctx->pc = 0x223cd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
    // 0x223cd4: 0x46160080  add.s       $f2, $f0, $f22
    ctx->pc = 0x223cd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x223cd8: 0xe7b402ec  swc1        $f20, 0x2EC($sp)
    ctx->pc = 0x223cd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 748), bits); }
    // 0x223cdc: 0x46160841  sub.s       $f1, $f1, $f22
    ctx->pc = 0x223cdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x223ce0: 0xe7b402fc  swc1        $f20, 0x2FC($sp)
    ctx->pc = 0x223ce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 764), bits); }
    // 0x223ce4: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x223ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x223ce8: 0xe7b4030c  swc1        $f20, 0x30C($sp)
    ctx->pc = 0x223ce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
    // 0x223cec: 0xe7a302f0  swc1        $f3, 0x2F0($sp)
    ctx->pc = 0x223cecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x223cf0: 0xe7a20308  swc1        $f2, 0x308($sp)
    ctx->pc = 0x223cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x223cf4: 0xe7a10300  swc1        $f1, 0x300($sp)
    ctx->pc = 0x223cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x223cf8: 0xe7a002e8  swc1        $f0, 0x2E8($sp)
    ctx->pc = 0x223cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x223cfc: 0xe7a102d0  swc1        $f1, 0x2D0($sp)
    ctx->pc = 0x223cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x223d00: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x223d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
    // 0x223d04: 0xe7a302e0  swc1        $f3, 0x2E0($sp)
    ctx->pc = 0x223d04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x223d08: 0xe7a202f8  swc1        $f2, 0x2F8($sp)
    ctx->pc = 0x223d08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x223d0c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x223d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_223d10:
    // 0x223d10: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x223d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x223d14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x223d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x223d18: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x223d18u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223d1c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x223d1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x223d20: 0xda850010  lqc2        $vf5, 0x10($s4)
    ctx->pc = 0x223d20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x223d24: 0xda860020  lqc2        $vf6, 0x20($s4)
    ctx->pc = 0x223d24u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x223d28: 0xda870030  lqc2        $vf7, 0x30($s4)
    ctx->pc = 0x223d28u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x223d2c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x223d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x223d30: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x223d30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x223d34: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x223d34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x223d38: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x223d38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x223d3c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x223d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x223d40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x223d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x223d44: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x223d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x223d48: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x223D48u;
    {
        const bool branch_taken_0x223d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D48u;
        // 0x223d4c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d48) {
            ctx->pc = 0x223D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223d10;
        }
    }
    ctx->pc = 0x223D50u;
    // 0x223d50: 0x27a702d0  addiu       $a3, $sp, 0x2D0
    ctx->pc = 0x223d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x223d54: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x223d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x223d58: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x223d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x223d5c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x223d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d60: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x223d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x223d64: 0xc08887e  jal         func_2221F8
    ctx->pc = 0x223D64u;
    SET_GPR_U32(ctx, 31, 0x223D6Cu);
    ctx->pc = 0x223D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D64u;
    // 0x223d68: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221F8u, 0x223D64u, 0x223D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D6Cu;
label_223d6c:
    // 0x223d6c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x223D6Cu;
    {
        const bool branch_taken_0x223d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D6Cu;
        // 0x223d70: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d6c) {
            ctx->pc = 0x223E18u;
            goto label_223e18;
        }
    }
    ctx->pc = 0x223D74u;
    // 0x223d74: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x223D74u;
    SET_GPR_U32(ctx, 31, 0x223D7Cu);
    ctx->pc = 0x223D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D74u;
    // 0x223d78: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x223D74u, 0x223D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D7Cu;
label_223d7c:
    // 0x223d7c: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x223d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
    // 0x223d80: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x223d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x223d84: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x223d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x223d88: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x223d88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d8c: 0x246402a  slt         $t0, $s2, $a2
    ctx->pc = 0x223d8cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x223d90: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x223d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x223d94: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x223d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x223d98: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x223d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x223d9c: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x223d9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x223da0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223da4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x223da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x223da8: 0xe8200a  movz        $a0, $a3, $t0
    ctx->pc = 0x223da8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x223dac: 0x27b10310  addiu       $s1, $sp, 0x310
    ctx->pc = 0x223dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x223db0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223db4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x223db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x223db8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x223db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x223dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x223dc0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x223dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x223dc4: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x223dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x223dc8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x223dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x223dcc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x223dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223dd0: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x223dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
    // 0x223dd4: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x223dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
    // 0x223dd8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x223dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x223ddc: 0x27a30220  addiu       $v1, $sp, 0x220
    ctx->pc = 0x223ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_223de0:
    // 0x223de0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x223de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223de4: 0xc089146  jal         func_224518
    ctx->pc = 0x223DE4u;
    SET_GPR_U32(ctx, 31, 0x223DECu);
    ctx->pc = 0x223DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223DE4u;
    // 0x223de8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224518u, 0x223DE4u, 0x223DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223DECu;
label_223dec:
    // 0x223dec: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x223decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x223df0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x223df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x223df4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x223df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x223df8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x223df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x223dfc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x223dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x223e00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x223e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x223e04: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x223e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
    // 0x223e08: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x223e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x223e0c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x223e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x223e10: 0x1450fff3  bne         $v0, $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x223E10u;
    {
        const bool branch_taken_0x223e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x223E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E10u;
        // 0x223e14: 0x27a30220  addiu       $v1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e10) {
            ctx->pc = 0x223DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223de0;
        }
    }
    ctx->pc = 0x223E18u;
label_223e18:
    // 0x223e18: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x223e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223e1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x223e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x223e20: 0x8fa40324  lw          $a0, 0x324($sp)
    ctx->pc = 0x223e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
    // 0x223e24: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x223e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x223e28: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x223e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x223e2c: 0x1040ffa4  beqz        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x223E2Cu;
    {
        const bool branch_taken_0x223e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E2Cu;
        // 0x223e30: 0xe7a002a0  swc1        $f0, 0x2A0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e2c) {
            ctx->pc = 0x223CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223cc0;
        }
    }
    ctx->pc = 0x223E34u;
label_223e34:
    // 0x223e34: 0xc7a002a8  lwc1        $f0, 0x2A8($sp)
    ctx->pc = 0x223e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223e38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x223e38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x223e3c: 0x8fa50328  lw          $a1, 0x328($sp)
    ctx->pc = 0x223e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
    // 0x223e40: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x223e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x223e44: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x223e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x223e48: 0x1040ff8d  beqz        $v0, . + 4 + (-0x73 << 2)
    ctx->pc = 0x223E48u;
    {
        const bool branch_taken_0x223e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E48u;
        // 0x223e4c: 0xe7a002a8  swc1        $f0, 0x2A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e48) {
            ctx->pc = 0x223C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223c80;
        }
    }
    ctx->pc = 0x223E50u;
    // 0x223e50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x223E50u;
    {
        const bool branch_taken_0x223e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E50u;
        // 0x223e54: 0xdfb00330  ld          $s0, 0x330($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e50) {
            ctx->pc = 0x223E6Cu;
            goto label_223e6c;
        }
    }
    ctx->pc = 0x223E58u;
    // 0x223e58: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x223e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x223e5c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x223E5Cu;
    SET_GPR_U32(ctx, 31, 0x223E64u);
    ctx->pc = 0x223E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E5Cu;
    // 0x223e60: 0x2484fbf8  addiu       $a0, $a0, -0x408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x223E5Cu, 0x223E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E64u;
label_223e64:
    // 0x223e64: 0x0  nop
    ctx->pc = 0x223e64u;
    // NOP
label_223e68:
    // 0x223e68: 0xdfb00330  ld          $s0, 0x330($sp)
    ctx->pc = 0x223e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 816)));
label_223e6c:
    // 0x223e6c: 0xdfb10338  ld          $s1, 0x338($sp)
    ctx->pc = 0x223e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x223e70: 0xdfb20340  ld          $s2, 0x340($sp)
    ctx->pc = 0x223e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x223e74: 0xdfb30348  ld          $s3, 0x348($sp)
    ctx->pc = 0x223e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x223e78: 0xdfb40350  ld          $s4, 0x350($sp)
    ctx->pc = 0x223e78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x223e7c: 0xdfb50358  ld          $s5, 0x358($sp)
    ctx->pc = 0x223e7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x223e80: 0xdfb60360  ld          $s6, 0x360($sp)
    ctx->pc = 0x223e80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x223e84: 0xdfb70368  ld          $s7, 0x368($sp)
    ctx->pc = 0x223e84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x223e88: 0xdfbe0370  ld          $fp, 0x370($sp)
    ctx->pc = 0x223e88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x223e8c: 0xdfbf0378  ld          $ra, 0x378($sp)
    ctx->pc = 0x223e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 888)));
    // 0x223e90: 0xc7ba03b0  lwc1        $f26, 0x3B0($sp)
    ctx->pc = 0x223e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x223e94: 0xc7b903a8  lwc1        $f25, 0x3A8($sp)
    ctx->pc = 0x223e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x223e98: 0xc7b803a0  lwc1        $f24, 0x3A0($sp)
    ctx->pc = 0x223e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x223e9c: 0xc7b70398  lwc1        $f23, 0x398($sp)
    ctx->pc = 0x223e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x223ea0: 0xc7b60390  lwc1        $f22, 0x390($sp)
    ctx->pc = 0x223ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x223ea4: 0xc7b50388  lwc1        $f21, 0x388($sp)
    ctx->pc = 0x223ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x223ea8: 0xc7b40380  lwc1        $f20, 0x380($sp)
    ctx->pc = 0x223ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223eac: 0x3e00008  jr          $ra
    ctx->pc = 0x223EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EACu;
        // 0x223eb0: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223EB4u;
    // 0x223eb4: 0x0  nop
    ctx->pc = 0x223eb4u;
    // NOP
    ctx->pc = 0x223eb8u;
}
