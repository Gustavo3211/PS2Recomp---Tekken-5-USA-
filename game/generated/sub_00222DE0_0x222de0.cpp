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

// Function: sub_00222DE0
// Address: 0x222de0 - 0x2232b0
void sub_00222DE0_0x222de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222DE0_0x222de0");
#endif

    switch (ctx->pc) {
        case 0x222e6cu: goto label_222e6c;
        case 0x2230f0u: goto label_2230f0;
        case 0x223128u: goto label_223128;
        case 0x22314cu: goto label_22314c;
        case 0x2231e0u: goto label_2231e0;
        case 0x2231ecu: goto label_2231ec;
        case 0x223264u: goto label_223264;
        default: break;
    }

    ctx->pc = 0x222de0u;

    // 0x222de0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x222de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x222de4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x222de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x222de8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222dec: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x222decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x222df0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x222df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222df4: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x222df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x222df8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x222df8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222dfc: 0xe7b901c8  swc1        $f25, 0x1C8($sp)
    ctx->pc = 0x222dfcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x222e00: 0xe7b801c0  swc1        $f24, 0x1C0($sp)
    ctx->pc = 0x222e00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x222e04: 0xe7b701b8  swc1        $f23, 0x1B8($sp)
    ctx->pc = 0x222e04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x222e08: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x222e08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x222e0c: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x222e0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x222e10: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x222e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x222e14: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x222e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x222e18: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x222e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x222e1c: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x222e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x222e20: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x222e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x222e24: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x222e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x222e28: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x222e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x222e2c: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x222e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x222e30: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x222e30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x222e34: 0xc7d40008  lwc1        $f20, 0x8($fp)
    ctx->pc = 0x222e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222e38: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x222e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x222e3c: 0x8fd10004  lw          $s1, 0x4($fp)
    ctx->pc = 0x222e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x222e40: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x222e40u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x222e44: 0x4490b000  mtc1        $s0, $f22
    ctx->pc = 0x222e44u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x222e48: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x222e48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x222e4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x222e4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x222e50: 0x4491b800  mtc1        $s1, $f23
    ctx->pc = 0x222e50u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x222e54: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x222e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x222e58: 0x4615b002  mul.s       $f0, $f22, $f21
    ctx->pc = 0x222e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x222e5c: 0x4615b842  mul.s       $f1, $f23, $f21
    ctx->pc = 0x222e5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x222e60: 0x46000647  neg.s       $f25, $f0
    ctx->pc = 0x222e60u;
    ctx->f[25] = FPU_NEG_S(ctx->f[0]);
    // 0x222e64: 0xc088a7c  jal         func_2229F0
    ctx->pc = 0x222E64u;
    SET_GPR_U32(ctx, 31, 0x222E6Cu);
    ctx->pc = 0x222E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E64u;
    // 0x222e68: 0x46000e07  neg.s       $f24, $f1 (Delay Slot)
    ctx->f[24] = FPU_NEG_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2229F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2229F0u, 0x222E64u, 0x222E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E6Cu;
label_222e6c:
    // 0x222e6c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x222e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x222e70: 0x7a860000  lq          $a2, 0x0($s4)
    ctx->pc = 0x222e70u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x222e74: 0x7a840010  lq          $a0, 0x10($s4)
    ctx->pc = 0x222e74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x222e78: 0x7a870020  lq          $a3, 0x20($s4)
    ctx->pc = 0x222e78u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x222e7c: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x222e7cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x222e80: 0x70862c88  pextlw      $a1, $a0, $a2
    ctx->pc = 0x222e80u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x222e84: 0x708624a8  pextuw      $a0, $a0, $a2
    ctx->pc = 0x222e84u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x222e88: 0x70671488  pextlw      $v0, $v1, $a3
    ctx->pc = 0x222e88u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x222e8c: 0x70671ca8  pextuw      $v1, $v1, $a3
    ctx->pc = 0x222e8cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x222e90: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x222e90u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x222e94: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x222e94u;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x222e98: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x222e98u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x222e9c: 0xda870030  lqc2        $vf7, 0x30($s4)
    ctx->pc = 0x222e9cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x222ea0: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x222ea0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x222ea4: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x222ea4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x222ea8: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x222ea8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x222eac: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x222eacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x222eb0: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x222eb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x222eb4: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x222eb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x222eb8: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x222eb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x222ebc: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x222ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x222ec0: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x222ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
    // 0x222ec4: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x222ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
    // 0x222ec8: 0xf9070030  sqc2        $vf7, 0x30($t0)
    ctx->pc = 0x222ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x222ecc: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x222eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x222ed0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x222ed0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ed4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x222ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x222ed8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x222ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x222edc: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x222edcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222ee0: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x222ee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x222ee4: 0xd9250010  lqc2        $vf5, 0x10($t1)
    ctx->pc = 0x222ee4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x222ee8: 0xd9260020  lqc2        $vf6, 0x20($t1)
    ctx->pc = 0x222ee8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x222eec: 0xd9270030  lqc2        $vf7, 0x30($t1)
    ctx->pc = 0x222eecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x222ef0: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x222ef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222ef4: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x222ef4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222ef8: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x222ef8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222efc: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x222efcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x222f00: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x222f00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x222f04: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x222f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x222f08: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x222f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x222f0c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x222f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x222f10: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x222f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222f14: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x222f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222f18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222f1c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x222f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x222f20: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x222f20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x222f24: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x222f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x222f28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x222f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x222f2c: 0xe7a5009c  swc1        $f5, 0x9C($sp)
    ctx->pc = 0x222f2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x222f30: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x222f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222f34: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x222f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222f38: 0x460208c0  add.s       $f3, $f1, $f2
    ctx->pc = 0x222f38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x222f3c: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x222f3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x222f40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x222f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x222f44: 0xe7a5008c  swc1        $f5, 0x8C($sp)
    ctx->pc = 0x222f44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x222f48: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x222f48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x222f4c: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x222f4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x222f50: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x222f50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x222f54: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x222f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x222f58: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x222f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x222f5c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x222f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222f60: 0x46190041  sub.s       $f1, $f0, $f25
    ctx->pc = 0x222f60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x222f64: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x222f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222f68: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x222F68u;
    {
        const bool branch_taken_0x222f68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F68u;
        // 0x222f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f68) {
            ctx->pc = 0x222F94u;
            goto label_222f94;
        }
    }
    ctx->pc = 0x222F70u;
    // 0x222f70: 0x4614b002  mul.s       $f0, $f22, $f20
    ctx->pc = 0x222f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x222f74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x222f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222f78: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x222F78u;
    {
        const bool branch_taken_0x222f78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F78u;
        // 0x222f7c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f78) {
            ctx->pc = 0x222F94u;
            goto label_222f94;
        }
    }
    ctx->pc = 0x222F80u;
    // 0x222f80: 0x0  nop
    ctx->pc = 0x222f80u;
    // NOP
    // 0x222f84: 0x0  nop
    ctx->pc = 0x222f84u;
    // NOP
    // 0x222f88: 0x46140803  div.s       $f0, $f1, $f20
    ctx->pc = 0x222f88u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[20];
    // 0x222f8c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x222f8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x222f90: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x222f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_222f94:
    // 0x222f94: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x222f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x222f98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x222f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222f9c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x222f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222fa0: 0x46180081  sub.s       $f2, $f0, $f24
    ctx->pc = 0x222fa0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x222fa4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x222fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222fa8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x222FA8u;
    {
        const bool branch_taken_0x222fa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FA8u;
        // 0x222fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fa8) {
            ctx->pc = 0x222FD4u;
            goto label_222fd4;
        }
    }
    ctx->pc = 0x222FB0u;
    // 0x222fb0: 0x4614b802  mul.s       $f0, $f23, $f20
    ctx->pc = 0x222fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x222fb4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x222fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222fb8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x222FB8u;
    {
        const bool branch_taken_0x222fb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FB8u;
        // 0x222fbc: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fb8) {
            ctx->pc = 0x222FD4u;
            goto label_222fd4;
        }
    }
    ctx->pc = 0x222FC0u;
    // 0x222fc0: 0x0  nop
    ctx->pc = 0x222fc0u;
    // NOP
    // 0x222fc4: 0x0  nop
    ctx->pc = 0x222fc4u;
    // NOP
    // 0x222fc8: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x222fc8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x222fcc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x222fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x222fd0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x222fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_222fd4:
    // 0x222fd4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x222fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x222fd8: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x222fd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x222fdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x222fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222fe0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x222fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222fe4: 0x46190081  sub.s       $f2, $f0, $f25
    ctx->pc = 0x222fe4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x222fe8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x222fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222fec: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x222FECu;
    {
        const bool branch_taken_0x222fec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FECu;
        // 0x222ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fec) {
            ctx->pc = 0x223018u;
            goto label_223018;
        }
    }
    ctx->pc = 0x222FF4u;
    // 0x222ff4: 0x4614b002  mul.s       $f0, $f22, $f20
    ctx->pc = 0x222ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x222ff8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x222ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222ffc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x222FFCu;
    {
        const bool branch_taken_0x222ffc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FFCu;
        // 0x223000: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ffc) {
            ctx->pc = 0x223018u;
            goto label_223018;
        }
    }
    ctx->pc = 0x223004u;
    // 0x223004: 0x0  nop
    ctx->pc = 0x223004u;
    // NOP
    // 0x223008: 0x0  nop
    ctx->pc = 0x223008u;
    // NOP
    // 0x22300c: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x22300cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x223010: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223010u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x223014: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x223014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223018:
    // 0x223018: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x223018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x22301c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22301cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223020: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x223020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223024: 0x46180081  sub.s       $f2, $f0, $f24
    ctx->pc = 0x223024u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x223028: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x223028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22302c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x22302Cu;
    {
        const bool branch_taken_0x22302c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22302Cu;
        // 0x223030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22302c) {
            ctx->pc = 0x223058u;
            goto label_223058;
        }
    }
    ctx->pc = 0x223034u;
    // 0x223034: 0x4614b802  mul.s       $f0, $f23, $f20
    ctx->pc = 0x223034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x223038: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x223038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22303c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22303Cu;
    {
        const bool branch_taken_0x22303c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22303Cu;
        // 0x223040: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22303c) {
            ctx->pc = 0x223058u;
            goto label_223058;
        }
    }
    ctx->pc = 0x223044u;
    // 0x223044: 0x0  nop
    ctx->pc = 0x223044u;
    // NOP
    // 0x223048: 0x0  nop
    ctx->pc = 0x223048u;
    // NOP
    // 0x22304c: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x22304cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x223050: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223050u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x223054: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x223054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223058:
    // 0x223058: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x223058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x22305c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x22305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223060: 0x4615c080  add.s       $f2, $f24, $f21
    ctx->pc = 0x223060u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x223064: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x223064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x223068: 0x4615cd40  add.s       $f21, $f25, $f21
    ctx->pc = 0x223068u;
    ctx->f[21] = FPU_ADD_S(ctx->f[25], ctx->f[21]);
    // 0x22306c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x22306cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x223070: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x223070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x223074: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x223074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x223078: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x223078u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x22307c: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x22307cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x223080: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x223080u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x223084: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x223084u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x223088: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x223088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22308c: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x22308cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x223090: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223094: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x223094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x223098: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x223098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x22309c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2230a0: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2230a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2230a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2230a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2230a8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2230a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2230ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2230acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2230b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2230b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2230b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2230b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230b8: 0xafa40134  sw          $a0, 0x134($sp)
    ctx->pc = 0x2230b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 4));
    // 0x2230bc: 0x93202a  slt         $a0, $a0, $s3
    ctx->pc = 0x2230bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2230c0: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x2230c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x2230c4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2230c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2230c8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2230c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2230cc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2230ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2230d0: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x2230d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x2230d4: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2230d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2230d8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2230d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2230dc: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2230dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2230e0: 0x14800061  bnez        $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2230E0u;
    {
        const bool branch_taken_0x2230e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2230E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230E0u;
        // 0x2230e4: 0xe7a200d8  swc1        $f2, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230e0) {
            ctx->pc = 0x223268u;
            goto label_223268;
        }
    }
    ctx->pc = 0x2230E8u;
    // 0x2230e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2230E8u;
    {
        const bool branch_taken_0x2230e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2230e8) {
            ctx->pc = 0x2230F8u;
            goto label_2230f8;
        }
    }
    ctx->pc = 0x2230F0u;
label_2230f0:
    // 0x2230f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2230f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2230f4: 0x0  nop
    ctx->pc = 0x2230f4u;
    // NOP
label_2230f8:
    // 0x2230f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2230f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2230fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2230fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223100: 0x8fb10138  lw          $s1, 0x138($sp)
    ctx->pc = 0x223100u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x223104: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x223104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x223108: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x223108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x22310c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x22310cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x223110: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x223110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x223114: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x223114u;
    {
        const bool branch_taken_0x223114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223114u;
        // 0x223118: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223114) {
            ctx->pc = 0x223230u;
            goto label_223230;
        }
    }
    ctx->pc = 0x22311Cu;
    // 0x22311c: 0xafa9013c  sw          $t1, 0x13C($sp)
    ctx->pc = 0x22311cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 9));
    // 0x223120: 0x27b70110  addiu       $s7, $sp, 0x110
    ctx->pc = 0x223120u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223124: 0x0  nop
    ctx->pc = 0x223124u;
    // NOP
label_223128:
    // 0x223128: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x223128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x22312c: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x22312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x223130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x223130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223134: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x223134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x223138: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x223138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22313c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22313cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223140: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x223140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223144: 0xc088528  jal         func_2214A0
    ctx->pc = 0x223144u;
    SET_GPR_U32(ctx, 31, 0x22314Cu);
    ctx->pc = 0x223148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223144u;
    // 0x223148: 0x7fa90140  sq          $t1, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2214A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2214A0u, 0x223144u, 0x22314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22314Cu;
label_22314c:
    // 0x22314c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x22314Cu;
    {
        const bool branch_taken_0x22314c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22314Cu;
        // 0x223150: 0x7ba90140  lq          $t1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22314c) {
            ctx->pc = 0x223214u;
            goto label_223214;
        }
    }
    ctx->pc = 0x223154u;
    // 0x223154: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x223154u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x223158: 0x7a830010  lq          $v1, 0x10($s4)
    ctx->pc = 0x223158u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x22315c: 0x7a840020  lq          $a0, 0x20($s4)
    ctx->pc = 0x22315cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x223160: 0x7a850030  lq          $a1, 0x30($s4)
    ctx->pc = 0x223160u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x223164: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x223164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x223168: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x223168u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x22316c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x22316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x223170: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x223170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x223174: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x223174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x223178: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x223178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x22317c: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x22317cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x223180: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x223180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x223184: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x223184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223188: 0x226402a  slt         $t0, $s1, $a2
    ctx->pc = 0x223188u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22318c: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x22318cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x223190: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x223190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x223194: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x223194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x223198: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x223198u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x22319c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22319cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231a0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2231a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2231a4: 0xe8200a  movz        $a0, $a3, $t0
    ctx->pc = 0x2231a4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x2231a8: 0x27b60120  addiu       $s6, $sp, 0x120
    ctx->pc = 0x2231a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2231ac: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2231acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2231b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2231b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2231b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2231b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2231b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2231bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2231bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2231c0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2231c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2231c4: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x2231c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2231c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2231c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2231cc: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x2231ccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x2231d0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2231d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2231d4: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2231d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x2231d8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2231d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2231dc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2231dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2231e0:
    // 0x2231e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2231e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2231e4: 0xc089146  jal         func_224518
    ctx->pc = 0x2231E4u;
    SET_GPR_U32(ctx, 31, 0x2231ECu);
    ctx->pc = 0x2231E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231E4u;
    // 0x2231e8: 0x7fa90140  sq          $t1, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224518u, 0x2231E4u, 0x2231ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231ECu;
label_2231ec:
    // 0x2231ec: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2231ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2231f0: 0x7ba90140  lq          $t1, 0x140($sp)
    ctx->pc = 0x2231f0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2231f4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2231f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2231f8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2231f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2231fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2231fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x223200: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x223200u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x223204: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x223204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x223208: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x223208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x22320c: 0x1450fff4  bne         $v0, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22320Cu;
    {
        const bool branch_taken_0x22320c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x223210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22320Cu;
        // 0x223210: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22320c) {
            ctx->pc = 0x2231E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2231e0;
        }
    }
    ctx->pc = 0x223214u;
label_223214:
    // 0x223214: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x223214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x223218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22321c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x22321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x223220: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x223220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x223224: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x223224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x223228: 0x1040ffbf  beqz        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x223228u;
    {
        const bool branch_taken_0x223228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223228u;
        // 0x22322c: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223228) {
            ctx->pc = 0x223128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223128;
        }
    }
    ctx->pc = 0x223230u;
label_223230:
    // 0x223230: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x223230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223234: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x223234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x223238: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x223238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x22323c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x22323cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x223240: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x223240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x223244: 0x1040ffaa  beqz        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x223244u;
    {
        const bool branch_taken_0x223244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223244u;
        // 0x223248: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223244) {
            ctx->pc = 0x2230F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2230f0;
        }
    }
    ctx->pc = 0x22324Cu;
    // 0x22324c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22324Cu;
    {
        const bool branch_taken_0x22324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22324Cu;
        // 0x223250: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22324c) {
            ctx->pc = 0x22326Cu;
            goto label_22326c;
        }
    }
    ctx->pc = 0x223254u;
    // 0x223254: 0x0  nop
    ctx->pc = 0x223254u;
    // NOP
    // 0x223258: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x223258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x22325c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x22325Cu;
    SET_GPR_U32(ctx, 31, 0x223264u);
    ctx->pc = 0x223260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22325Cu;
    // 0x223260: 0x2484fbd8  addiu       $a0, $a0, -0x428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x22325Cu, 0x223264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223264u;
label_223264:
    // 0x223264: 0x0  nop
    ctx->pc = 0x223264u;
    // NOP
label_223268:
    // 0x223268: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x223268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_22326c:
    // 0x22326c: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x22326cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x223270: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x223270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x223274: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x223274u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x223278: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x223278u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x22327c: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x22327cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x223280: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x223280u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x223284: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x223284u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x223288: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x223288u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x22328c: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x22328cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x223290: 0xc7b901c8  lwc1        $f25, 0x1C8($sp)
    ctx->pc = 0x223290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x223294: 0xc7b801c0  lwc1        $f24, 0x1C0($sp)
    ctx->pc = 0x223294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x223298: 0xc7b701b8  lwc1        $f23, 0x1B8($sp)
    ctx->pc = 0x223298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22329c: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x22329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2232a0: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x2232a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2232a4: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x2232a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2232a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2232A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2232ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232A8u;
        // 0x2232ac: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2232A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2232B0u;
}
