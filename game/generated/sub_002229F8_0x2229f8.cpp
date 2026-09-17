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

// Function: sub_002229F8
// Address: 0x2229f8 - 0x222de0
void sub_002229F8_0x2229f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002229F8_0x2229f8");
#endif

    switch (ctx->pc) {
        case 0x222a80u: goto label_222a80;
        case 0x222d58u: goto label_222d58;
        case 0x222d60u: goto label_222d60;
        case 0x222d9cu: goto label_222d9c;
        default: break;
    }

    ctx->pc = 0x2229f8u;

    // 0x2229f8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2229f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2229fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2229fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x222a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222a04: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x222a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x222a08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x222a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a0c: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x222a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x222a10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x222a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a14: 0xe7b70100  swc1        $f23, 0x100($sp)
    ctx->pc = 0x222a14u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x222a18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x222a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222a1c: 0xe7b600f8  swc1        $f22, 0xF8($sp)
    ctx->pc = 0x222a1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x222a20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x222a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222a24: 0xe7b500f0  swc1        $f21, 0xF0($sp)
    ctx->pc = 0x222a24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x222a28: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x222a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x222a2c: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x222a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x222a30: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x222a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x222a34: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x222a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x222a38: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x222a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x222a3c: 0xe7b90110  swc1        $f25, 0x110($sp)
    ctx->pc = 0x222a3cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x222a40: 0xe7b80108  swc1        $f24, 0x108($sp)
    ctx->pc = 0x222a40u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x222a44: 0xe7b400e8  swc1        $f20, 0xE8($sp)
    ctx->pc = 0x222a44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x222a48: 0xc6740008  lwc1        $f20, 0x8($s3)
    ctx->pc = 0x222a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222a4c: 0xc6780000  lwc1        $f24, 0x0($s3)
    ctx->pc = 0x222a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x222a50: 0x4680c620  cvt.s.w     $f24, $f24
    ctx->pc = 0x222a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[24], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x222a54: 0xc6790004  lwc1        $f25, 0x4($s3)
    ctx->pc = 0x222a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x222a58: 0x4680ce60  cvt.s.w     $f25, $f25
    ctx->pc = 0x222a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[25], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x222a5c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x222a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x222a60: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x222a60u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x222a64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x222a64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x222a68: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x222a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x222a6c: 0x4615c002  mul.s       $f0, $f24, $f21
    ctx->pc = 0x222a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x222a70: 0x4615c842  mul.s       $f1, $f25, $f21
    ctx->pc = 0x222a70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x222a74: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x222a74u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
    // 0x222a78: 0xc088a7c  jal         func_2229F0
    ctx->pc = 0x222A78u;
    SET_GPR_U32(ctx, 31, 0x222A80u);
    ctx->pc = 0x222A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A78u;
    // 0x222a7c: 0x46000dc7  neg.s       $f23, $f1 (Delay Slot)
    ctx->f[23] = FPU_NEG_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2229F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2229F0u, 0x222A78u, 0x222A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A80u;
label_222a80:
    // 0x222a80: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x222a80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x222a84: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x222a84u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222a88: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x222a88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x222a8c: 0x7a070020  lq          $a3, 0x20($s0)
    ctx->pc = 0x222a8cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x222a90: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x222a90u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x222a94: 0x70862c88  pextlw      $a1, $a0, $a2
    ctx->pc = 0x222a94u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x222a98: 0x708624a8  pextuw      $a0, $a0, $a2
    ctx->pc = 0x222a98u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x222a9c: 0x70671488  pextlw      $v0, $v1, $a3
    ctx->pc = 0x222a9cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x222aa0: 0x70671ca8  pextuw      $v1, $v1, $a3
    ctx->pc = 0x222aa0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x222aa4: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x222aa4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x222aa8: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x222aa8u;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x222aac: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x222aacu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x222ab0: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x222ab0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x222ab4: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x222ab4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x222ab8: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x222ab8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x222abc: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x222abcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x222ac0: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x222ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x222ac4: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x222ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x222ac8: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x222ac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x222acc: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x222accu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x222ad0: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x222ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x222ad4: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x222ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
    // 0x222ad8: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x222ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
    // 0x222adc: 0xf9070030  sqc2        $vf7, 0x30($t0)
    ctx->pc = 0x222adcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x222ae0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x222ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x222ae4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x222ae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ae8: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x222ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x222aec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x222aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x222af0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x222af0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222af4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x222af4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x222af8: 0xda450010  lqc2        $vf5, 0x10($s2)
    ctx->pc = 0x222af8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x222afc: 0xda460020  lqc2        $vf6, 0x20($s2)
    ctx->pc = 0x222afcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x222b00: 0xda470030  lqc2        $vf7, 0x30($s2)
    ctx->pc = 0x222b00u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x222b04: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x222b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222b08: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x222b08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222b0c: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x222b0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222b10: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x222b10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x222b14: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x222b14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x222b18: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x222b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222b1c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x222b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222b20: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x222b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222b24: 0x461600c1  sub.s       $f3, $f0, $f22
    ctx->pc = 0x222b24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x222b28: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x222b28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222b2c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x222B2Cu;
    {
        const bool branch_taken_0x222b2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B2Cu;
        // 0x222b30: 0x46170841  sub.s       $f1, $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b2c) {
            ctx->pc = 0x222B58u;
            goto label_222b58;
        }
    }
    ctx->pc = 0x222B34u;
    // 0x222b34: 0x4614c002  mul.s       $f0, $f24, $f20
    ctx->pc = 0x222b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x222b38: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x222b38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222b3c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x222B3Cu;
    {
        const bool branch_taken_0x222b3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222b3c) {
            ctx->pc = 0x222B58u;
            goto label_222b58;
        }
    }
    ctx->pc = 0x222B44u;
    // 0x222b44: 0x0  nop
    ctx->pc = 0x222b44u;
    // NOP
    // 0x222b48: 0x0  nop
    ctx->pc = 0x222b48u;
    // NOP
    // 0x222b4c: 0x46141803  div.s       $f0, $f3, $f20
    ctx->pc = 0x222b4cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[20];
    // 0x222b50: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x222b50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x222b54: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x222b54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_222b58:
    // 0x222b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222b5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x222b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222b60: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x222B60u;
    {
        const bool branch_taken_0x222b60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B60u;
        // 0x222b64: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b60) {
            ctx->pc = 0x222B90u;
            goto label_222b90;
        }
    }
    ctx->pc = 0x222B68u;
    // 0x222b68: 0x4614c802  mul.s       $f0, $f25, $f20
    ctx->pc = 0x222b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x222b6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x222b6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222b70: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x222B70u;
    {
        const bool branch_taken_0x222b70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222b70) {
            ctx->pc = 0x222B90u;
            goto label_222b90;
        }
    }
    ctx->pc = 0x222B78u;
    // 0x222b78: 0x0  nop
    ctx->pc = 0x222b78u;
    // NOP
    // 0x222b7c: 0x0  nop
    ctx->pc = 0x222b7cu;
    // NOP
    // 0x222b80: 0x46140803  div.s       $f0, $f1, $f20
    ctx->pc = 0x222b80u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[20];
    // 0x222b84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x222b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x222b88: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x222b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x222b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_222b90:
    // 0x222b90: 0x4400083  bltz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x222B90u;
    {
        const bool branch_taken_0x222b90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x222B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B90u;
        // 0x222b94: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b90) {
            ctx->pc = 0x222DA0u;
            goto label_222da0;
        }
    }
    ctx->pc = 0x222B98u;
    // 0x222b98: 0x4400081  bltz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x222B98u;
    {
        const bool branch_taken_0x222b98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x222B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B98u;
        // 0x222b9c: 0x27b10060  addiu       $s1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b98) {
            ctx->pc = 0x222DA0u;
            goto label_222da0;
        }
    }
    ctx->pc = 0x222BA0u;
    // 0x222ba0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x222ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x222ba4: 0x4615b8c0  add.s       $f3, $f23, $f21
    ctx->pc = 0x222ba4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
    // 0x222ba8: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x222ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x222bac: 0x4615b080  add.s       $f2, $f22, $f21
    ctx->pc = 0x222bacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x222bb0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x222bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x222bb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x222bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x222bb8: 0x7e200000  sq          $zero, 0x0($s1)
    ctx->pc = 0x222bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x222bbc: 0x7e200010  sq          $zero, 0x10($s1)
    ctx->pc = 0x222bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 0));
    // 0x222bc0: 0x7e200020  sq          $zero, 0x20($s1)
    ctx->pc = 0x222bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 0));
    // 0x222bc4: 0xfa200030  sqc2        $vf0, 0x30($s1)
    ctx->pc = 0x222bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x222bc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x222bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x222bcc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x222bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222bd0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x222bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x222bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222bd8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x222bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222bdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x222bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x222be0: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x222be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x222be4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x222be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222be8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222bec: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x222becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x222bf0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x222bf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x222bf4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x222bf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x222bf8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x222bf8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x222bfc: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x222bfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x222c00: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x222c00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x222c04: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x222c04u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222c08: 0xda090010  lqc2        $vf9, 0x10($s0)
    ctx->pc = 0x222c08u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x222c0c: 0xda0a0020  lqc2        $vf10, 0x20($s0)
    ctx->pc = 0x222c0cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x222c10: 0xda0b0030  lqc2        $vf11, 0x30($s0)
    ctx->pc = 0x222c10u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x222c14: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x222c14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222c18: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x222c18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x222c1c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x222c1cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x222c20: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x222c20u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x222c24: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x222c24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c28: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x222c28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c2c: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x222c2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c30: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x222c30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x222c34: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x222c34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c38: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x222c38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c3c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x222c3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c40: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x222c40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x222c44: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x222c44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c48: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x222c48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c4c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x222c4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c50: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x222c50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x222c54: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x222c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c58: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x222c58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c5c: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x222c5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x222c60: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x222c60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x222c64: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x222c64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x222c68: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x222c68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x222c6c: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x222c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x222c70: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x222c70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x222c74: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x222c74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222c78: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x222c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x222c7c: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x222c7cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222c80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x222c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x222c84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222c88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x222c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222c8c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x222c8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222c90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222c94: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x222c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x222c98: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x222c98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x222c9c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x222c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x222ca0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x222ca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x222ca4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x222ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x222ca8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x222ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x222cac: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x222cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x222cb0: 0x4601b040  add.s       $f1, $f22, $f1
    ctx->pc = 0x222cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x222cb4: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x222cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x222cb8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x222cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x222cbc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x222cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x222cc0: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x222cc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222cc4: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x222cc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x222cc8: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x222cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x222ccc: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x222cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x222cd0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x222cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222cd4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x222cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222cd8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x222cd8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x222cdc: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x222cdcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x222ce0: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x222ce0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222ce4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x222CE4u;
    {
        const bool branch_taken_0x222ce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222ce4) {
            ctx->pc = 0x222CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222CE4u;
            // 0x222ce8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222CF8u;
            goto label_222cf8;
        }
    }
    ctx->pc = 0x222CECu;
    // 0x222cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222cf0: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x222cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x222cf4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x222cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_222cf8:
    // 0x222cf8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x222cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222cfc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x222cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x222d00: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x222d00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d04: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x222d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x222d08: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x222d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x222d0c: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x222d0cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x222d10: 0x104282a  slt         $a1, $t0, $a0
    ctx->pc = 0x222d10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x222d14: 0xe41818  mult        $v1, $a3, $a0
    ctx->pc = 0x222d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x222d18: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x222d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x222d1c: 0x85400a  movz        $t0, $a0, $a1
    ctx->pc = 0x222d1cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x222d20: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x222d20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x222d24: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x222d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x222d28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x222d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x222d2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x222d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222d30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x222d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222d34: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x222d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x222d38: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x222d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x222d3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x222d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x222d40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x222d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d44: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x222d44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x222d48: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x222d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x222d4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x222d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x222d50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x222d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d54: 0x0  nop
    ctx->pc = 0x222d54u;
    // NOP
label_222d58:
    // 0x222d58: 0xc089146  jal         func_224518
    ctx->pc = 0x222D58u;
    SET_GPR_U32(ctx, 31, 0x222D60u);
    ctx->pc = 0x222D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D58u;
    // 0x222d5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224518u, 0x222D58u, 0x222D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D60u;
label_222d60:
    // 0x222d60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x222d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x222d64: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x222d64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x222d68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x222d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x222d6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x222d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x222d70: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x222d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x222d74: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x222d74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x222d78: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x222d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x222d7c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x222D7Cu;
    {
        const bool branch_taken_0x222d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x222D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D7Cu;
        // 0x222d80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d7c) {
            ctx->pc = 0x222D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222d58;
        }
    }
    ctx->pc = 0x222D84u;
    // 0x222d84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x222D84u;
    {
        const bool branch_taken_0x222d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D84u;
        // 0x222d88: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d84) {
            ctx->pc = 0x222DA4u;
            goto label_222da4;
        }
    }
    ctx->pc = 0x222D8Cu;
    // 0x222d8c: 0x0  nop
    ctx->pc = 0x222d8cu;
    // NOP
    // 0x222d90: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x222d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x222d94: 0xc048b90  jal         func_122E40
    ctx->pc = 0x222D94u;
    SET_GPR_U32(ctx, 31, 0x222D9Cu);
    ctx->pc = 0x222D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D94u;
    // 0x222d98: 0x2484fbc8  addiu       $a0, $a0, -0x438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x222D94u, 0x222D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D9Cu;
label_222d9c:
    // 0x222d9c: 0x0  nop
    ctx->pc = 0x222d9cu;
    // NOP
label_222da0:
    // 0x222da0: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x222da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_222da4:
    // 0x222da4: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x222da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x222da8: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x222da8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x222dac: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x222dacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x222db0: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x222db0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x222db4: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x222db4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x222db8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x222db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x222dbc: 0xc7b90110  lwc1        $f25, 0x110($sp)
    ctx->pc = 0x222dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x222dc0: 0xc7b80108  lwc1        $f24, 0x108($sp)
    ctx->pc = 0x222dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x222dc4: 0xc7b70100  lwc1        $f23, 0x100($sp)
    ctx->pc = 0x222dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x222dc8: 0xc7b600f8  lwc1        $f22, 0xF8($sp)
    ctx->pc = 0x222dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x222dcc: 0xc7b500f0  lwc1        $f21, 0xF0($sp)
    ctx->pc = 0x222dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x222dd0: 0xc7b400e8  lwc1        $f20, 0xE8($sp)
    ctx->pc = 0x222dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x222DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DD4u;
        // 0x222dd8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222DDCu;
    // 0x222ddc: 0x0  nop
    ctx->pc = 0x222ddcu;
    // NOP
    ctx->pc = 0x222de0u;
}
