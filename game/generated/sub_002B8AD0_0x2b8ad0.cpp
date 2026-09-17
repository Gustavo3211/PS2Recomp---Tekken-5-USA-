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

// Function: sub_002B8AD0
// Address: 0x2b8ad0 - 0x2b8e78
void sub_002B8AD0_0x2b8ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8AD0_0x2b8ad0");
#endif

    ctx->pc = 0x2b8ad0u;

    // 0x2b8ad0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b8ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b8ad4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2b8ad4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ad8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2b8ad8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8adc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2b8adcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ae0: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x2b8ae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2b8ae4: 0x79630010  lq          $v1, 0x10($t3)
    ctx->pc = 0x2b8ae4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2b8ae8: 0x79640020  lq          $a0, 0x20($t3)
    ctx->pc = 0x2b8ae8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x2b8aec: 0x79650030  lq          $a1, 0x30($t3)
    ctx->pc = 0x2b8aecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x2b8af0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x2b8af0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x2b8af4: 0x7d430010  sq          $v1, 0x10($t2)
    ctx->pc = 0x2b8af4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 3));
    // 0x2b8af8: 0x7d440020  sq          $a0, 0x20($t2)
    ctx->pc = 0x2b8af8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 4));
    // 0x2b8afc: 0x7d450030  sq          $a1, 0x30($t2)
    ctx->pc = 0x2b8afcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 5));
    // 0x2b8b00: 0xd9440000  lqc2        $vf4, 0x0($t2)
    ctx->pc = 0x2b8b00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b8b04: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x2b8b04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2b8b08: 0xd9460020  lqc2        $vf6, 0x20($t2)
    ctx->pc = 0x2b8b08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x2b8b0c: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x2b8b0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b8b10: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2b8b10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b8b14: 0x48243000  qmfc2.ni    $a0, $vf6
    ctx->pc = 0x2b8b14u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b8b18: 0x48250000  qmfc2.ni    $a1, $vf0
    ctx->pc = 0x2b8b18u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b8b1c: 0x70623488  pextlw      $a2, $v1, $v0
    ctx->pc = 0x2b8b1cu;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2b8b20: 0x70623ca8  pextuw      $a3, $v1, $v0
    ctx->pc = 0x2b8b20u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2b8b24: 0x70a44488  pextlw      $t0, $a1, $a0
    ctx->pc = 0x2b8b24u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x2b8b28: 0x70a44ca8  pextuw      $t1, $a1, $a0
    ctx->pc = 0x2b8b28u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x2b8b2c: 0x71061389  pcpyld      $v0, $t0, $a2
    ctx->pc = 0x2b8b2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x2b8b30: 0x70c81ba9  pcpyud      $v1, $a2, $t0
    ctx->pc = 0x2b8b30u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x2b8b34: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x2b8b34u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
    // 0x2b8b38: 0x70e92ba9  pcpyud      $a1, $a3, $t1
    ctx->pc = 0x2b8b38u;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 9)));
    // 0x2b8b3c: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x2b8b3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b8b40: 0x48a34800  qmtc2.ni    $v1, $vf9
    ctx->pc = 0x2b8b40u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b8b44: 0x48a45000  qmtc2.ni    $a0, $vf10
    ctx->pc = 0x2b8b44u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2b8b48: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2b8b48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8b4c: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2b8b4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8b50: 0x4be4510a  vmaddz.xyzw $vf4, $vf10, $vf4z
    ctx->pc = 0x2b8b50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b8b54: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2b8b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8b58: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2b8b58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8b5c: 0x4be5514a  vmaddz.xyzw $vf5, $vf10, $vf5z
    ctx->pc = 0x2b8b5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b8b60: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2b8b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8b64: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2b8b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8b68: 0x4be6518a  vmaddz.xyzw $vf6, $vf10, $vf6z
    ctx->pc = 0x2b8b68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b8b6c: 0x4b040040  vaddx.x     $vf1, $vf0, $vf4x
    ctx->pc = 0x2b8b6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b8b70: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b8b70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b8b74: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2b8b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b8b78: 0x46040044  c1          0x40044
    ctx->pc = 0x2b8b78u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b8b7c: 0x4b050041  vaddy.x     $vf1, $vf0, $vf5y
    ctx->pc = 0x2b8b7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b8b80: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b8b80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b8b84: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2b8b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b8b88: 0x46040084  c1          0x40084
    ctx->pc = 0x2b8b88u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b8b8c: 0x4b060042  vaddz.x     $vf1, $vf0, $vf6z
    ctx->pc = 0x2b8b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b8b90: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b8b90u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b8b94: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2b8b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b8b98: 0x460400c4  c1          0x400C4
    ctx->pc = 0x2b8b98u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b8b9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b8b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8ba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8ba4: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x2b8ba4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2b8ba8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2b8ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2b8bac: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2b8bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8bb0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2b8bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b8bb4: 0x0  nop
    ctx->pc = 0x2b8bb4u;
    // NOP
    // 0x2b8bb8: 0x0  nop
    ctx->pc = 0x2b8bb8u;
    // NOP
    // 0x2b8bbc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2b8bbcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2b8bc0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2b8bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b8bc4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2b8bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b8bc8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2b8bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2b8bcc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2b8bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2b8bd0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2b8bd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b8bd4: 0x0  nop
    ctx->pc = 0x2b8bd4u;
    // NOP
    // 0x2b8bd8: 0x0  nop
    ctx->pc = 0x2b8bd8u;
    // NOP
    // 0x2b8bdc: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x2b8bdcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x2b8be0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2b8be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b8be4: 0x0  nop
    ctx->pc = 0x2b8be4u;
    // NOP
    // 0x2b8be8: 0x0  nop
    ctx->pc = 0x2b8be8u;
    // NOP
    // 0x2b8bec: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2b8becu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x2b8bf0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2b8bf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b8bf4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2b8bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b8bf8: 0xd9440000  lqc2        $vf4, 0x0($t2)
    ctx->pc = 0x2b8bf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b8bfc: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x2b8bfcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2b8c00: 0xd9460020  lqc2        $vf6, 0x20($t2)
    ctx->pc = 0x2b8c00u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x2b8c04: 0xd9470030  lqc2        $vf7, 0x30($t2)
    ctx->pc = 0x2b8c04u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2b8c08: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2b8c08u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8c0c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2b8c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8c10: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2b8c10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8c14: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2b8c14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8c18: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2b8c18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b8c1c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2b8c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b8c20: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2b8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8c24: 0x25440030  addiu       $a0, $t2, 0x30
    ctx->pc = 0x2b8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x2b8c28: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b8c28u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8c2c: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x2b8c2cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8c30: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2b8c30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b8c34: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b8c34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b8c38: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2b8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8c3c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2b8c3cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8c40: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2b8c40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b8c44: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2b8c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b8c48: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2b8c48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b8c4c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2b8c4cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2b8c50: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b8c50u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b8c54: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2b8c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b8c58: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2b8c58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b8c5c: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x2b8c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2b8c60: 0x25850030  addiu       $a1, $t4, 0x30
    ctx->pc = 0x2b8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x2b8c64: 0x25470030  addiu       $a3, $t2, 0x30
    ctx->pc = 0x2b8c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x2b8c68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2b8c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8c6c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2b8c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8c70: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x2b8c70u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b8c74: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x2b8c74u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8c78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b8c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b8c7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b8c7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b8c80: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2b8c80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b8c84: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2b8c84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b8c88: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2b8c88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b8c8c: 0x25830040  addiu       $v1, $t4, 0x40
    ctx->pc = 0x2b8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x2b8c90: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2b8c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2b8c94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8c98: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x2b8c98u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b8c9c: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x2b8c9cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8ca0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b8ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b8ca4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b8ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b8ca8: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2b8ca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b8cac: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2b8cacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b8cb0: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b8cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b8cb4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2b8cb4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8cb8: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2b8cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b8cbc: 0x7d850050  sq          $a1, 0x50($t4)
    ctx->pc = 0x2b8cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 80), GPR_VEC(ctx, 5));
    // 0x2b8cc0: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x2b8cc0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b8cc4: 0xad8b0010  sw          $t3, 0x10($t4)
    ctx->pc = 0x2b8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 11));
    // 0x2b8cc8: 0x7d860020  sq          $a2, 0x20($t4)
    ctx->pc = 0x2b8cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 6));
    // 0x2b8ccc: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x2b8cccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b8cd0: 0x79430010  lq          $v1, 0x10($t2)
    ctx->pc = 0x2b8cd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2b8cd4: 0x79440020  lq          $a0, 0x20($t2)
    ctx->pc = 0x2b8cd4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x2b8cd8: 0x79450030  lq          $a1, 0x30($t2)
    ctx->pc = 0x2b8cd8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2b8cdc: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x2b8cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x2b8ce0: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x2b8ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x2b8ce4: 0x7d040020  sq          $a0, 0x20($t0)
    ctx->pc = 0x2b8ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 4));
    // 0x2b8ce8: 0x7d050030  sq          $a1, 0x30($t0)
    ctx->pc = 0x2b8ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 5));
    // 0x2b8cec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b8cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8cf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8cf4: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x2b8cf4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2b8cf8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2b8cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2b8cfc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2b8cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b8d00: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2b8d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2b8d04: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2b8d04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b8d08: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2b8d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b8d0c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2b8d0cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b8d10: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2b8d10u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b8d14: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2b8d14u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2b8d18: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x2b8d18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b8d1c: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x2b8d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b8d20: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x2b8d20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b8d24: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x2b8d24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b8d28: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2b8d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8d2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b8d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8d30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b8d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8d34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8D34u;
    {
        const bool branch_taken_0x2b8d34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D34u;
        // 0x2b8d38: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d34) {
            ctx->pc = 0x2B8D40u;
            goto label_2b8d40;
        }
    }
    ctx->pc = 0x2B8D3Cu;
    // 0x2b8d3c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2b8d3cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2b8d40:
    // 0x2b8d40: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2b8d40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8d44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b8d44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b8d48: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x2b8d48u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b8d4c: 0x4b152118  vmulx.x     $vf4, $vf4, $vf21x
    ctx->pc = 0x2b8d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b8d50: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2b8d50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b8d54: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2b8d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8d58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b8d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8d5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8D5Cu;
    {
        const bool branch_taken_0x2b8d5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D5Cu;
        // 0x2b8d60: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d5c) {
            ctx->pc = 0x2B8D68u;
            goto label_2b8d68;
        }
    }
    ctx->pc = 0x2B8D64u;
    // 0x2b8d64: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2b8d64u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2b8d68:
    // 0x2b8d68: 0xd8840010  lqc2        $vf4, 0x10($a0)
    ctx->pc = 0x2b8d68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b8d6c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b8d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b8d70: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x2b8d70u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b8d74: 0x4a952118  vmulx.y     $vf4, $vf4, $vf21x
    ctx->pc = 0x2b8d74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b8d78: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x2b8d78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b8d7c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2b8d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8d80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b8d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8d84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8D84u;
    {
        const bool branch_taken_0x2b8d84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D84u;
        // 0x2b8d88: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d84) {
            ctx->pc = 0x2B8D90u;
            goto label_2b8d90;
        }
    }
    ctx->pc = 0x2B8D8Cu;
    // 0x2b8d8c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2b8d8cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2b8d90:
    // 0x2b8d90: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x2b8d90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2b8d94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b8d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b8d98: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x2b8d98u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b8d9c: 0x4a552118  vmulx.z     $vf4, $vf4, $vf21x
    ctx->pc = 0x2b8d9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b8da0: 0xf8840020  sqc2        $vf4, 0x20($a0)
    ctx->pc = 0x2b8da0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b8da4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2b8da4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8da8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2b8da8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b8dac: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2b8dacu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b8db0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2b8db0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2b8db4: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x2b8db4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b8db8: 0xd9090010  lqc2        $vf9, 0x10($t0)
    ctx->pc = 0x2b8db8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2b8dbc: 0xd90a0020  lqc2        $vf10, 0x20($t0)
    ctx->pc = 0x2b8dbcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2b8dc0: 0xd90b0030  lqc2        $vf11, 0x30($t0)
    ctx->pc = 0x2b8dc0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x2b8dc4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2b8dc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8dc8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2b8dc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8dcc: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2b8dccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8dd0: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2b8dd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b8dd4: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2b8dd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8dd8: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2b8dd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8ddc: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2b8ddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8de0: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2b8de0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b8de4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2b8de4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8de8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2b8de8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8dec: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2b8decu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8df0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2b8df0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b8df4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2b8df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8df8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2b8df8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8dfc: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2b8dfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2b8e00: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2b8e00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2b8e04: 0xf9040000  sqc2        $vf4, 0x0($t0)
    ctx->pc = 0x2b8e04u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b8e08: 0xf9050010  sqc2        $vf5, 0x10($t0)
    ctx->pc = 0x2b8e08u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b8e0c: 0xf9060020  sqc2        $vf6, 0x20($t0)
    ctx->pc = 0x2b8e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b8e10: 0xf9070030  sqc2        $vf7, 0x30($t0)
    ctx->pc = 0x2b8e10u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b8e14: 0x258a00b0  addiu       $t2, $t4, 0xB0
    ctx->pc = 0x2b8e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 176));
    // 0x2b8e18: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x2b8e18u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8e1c: 0x7ba80040  lq          $t0, 0x40($sp)
    ctx->pc = 0x2b8e1cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8e20: 0x7ba90050  lq          $t1, 0x50($sp)
    ctx->pc = 0x2b8e20u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8e24: 0x7ba60060  lq          $a2, 0x60($sp)
    ctx->pc = 0x2b8e24u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8e28: 0x71071488  pextlw      $v0, $t0, $a3
    ctx->pc = 0x2b8e28u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x2b8e2c: 0x71001ca8  pextuw      $v1, $t0, $zero
    ctx->pc = 0x2b8e2cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2b8e30: 0x70c92488  pextlw      $a0, $a2, $t1
    ctx->pc = 0x2b8e30u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x2b8e34: 0x70c92ca8  pextuw      $a1, $a2, $t1
    ctx->pc = 0x2b8e34u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTUW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x2b8e38: 0x70823b89  pcpyld      $a3, $a0, $v0
    ctx->pc = 0x2b8e38u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x2b8e3c: 0x704443a9  pcpyud      $t0, $v0, $a0
    ctx->pc = 0x2b8e3cu;
    SET_GPR_VEC(ctx, 8, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x2b8e40: 0x70a34b89  pcpyld      $t1, $a1, $v1
    ctx->pc = 0x2b8e40u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x2b8e44: 0x706533a9  pcpyud      $a2, $v1, $a1
    ctx->pc = 0x2b8e44u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x2b8e48: 0x7d460030  sq          $a2, 0x30($t2)
    ctx->pc = 0x2b8e48u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 6));
    // 0x2b8e4c: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x2b8e4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2b8e50: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x2b8e50u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
    // 0x2b8e54: 0x7d480010  sq          $t0, 0x10($t2)
    ctx->pc = 0x2b8e54u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 8));
    // 0x2b8e58: 0x7d490020  sq          $t1, 0x20($t2)
    ctx->pc = 0x2b8e58u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 9));
    // 0x2b8e5c: 0x7d820060  sq          $v0, 0x60($t4)
    ctx->pc = 0x2b8e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 96), GPR_VEC(ctx, 2));
    // 0x2b8e60: 0x91820004  lbu         $v0, 0x4($t4)
    ctx->pc = 0x2b8e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x2b8e64: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x2b8e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x2b8e68: 0xa1820004  sb          $v0, 0x4($t4)
    ctx->pc = 0x2b8e68u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E6Cu;
        // 0x2b8e70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8E74u;
    // 0x2b8e74: 0x0  nop
    ctx->pc = 0x2b8e74u;
    // NOP
    ctx->pc = 0x2b8e78u;
}
