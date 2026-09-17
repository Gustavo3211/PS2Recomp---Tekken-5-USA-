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

// Function: sub_00338A30
// Address: 0x338a30 - 0x338ae0
void sub_00338A30_0x338a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338A30_0x338a30");
#endif

    ctx->pc = 0x338a30u;

    // 0x338a30: 0x2482fe80  addiu       $v0, $a0, -0x180
    ctx->pc = 0x338a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966912));
    // 0x338a34: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x338a34u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x338a38: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338a38u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338a3c: 0xd89cff40  lqc2        $vf28, -0xC0($a0)
    ctx->pc = 0x338a3cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967104)));
    // 0x338a40: 0xd89dff50  lqc2        $vf29, -0xB0($a0)
    ctx->pc = 0x338a40u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967120)));
    // 0x338a44: 0xd89eff60  lqc2        $vf30, -0xA0($a0)
    ctx->pc = 0x338a44u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967136)));
    // 0x338a48: 0xd89fff70  lqc2        $vf31, -0x90($a0)
    ctx->pc = 0x338a48u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967152)));
    // 0x338a4c: 0xd8580080  lqc2        $vf24, 0x80($v0)
    ctx->pc = 0x338a4cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x338a50: 0xd8590090  lqc2        $vf25, 0x90($v0)
    ctx->pc = 0x338a50u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x338a54: 0xd85a00a0  lqc2        $vf26, 0xA0($v0)
    ctx->pc = 0x338a54u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x338a58: 0xd85b00b0  lqc2        $vf27, 0xB0($v0)
    ctx->pc = 0x338a58u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x338a5c: 0x4a7af1be  vmulaz.zw   $ACC, $vf30, $vf26z
    ctx->pc = 0x338a5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, 0, 0))); }
    // 0x338a60: 0x4a7afe8b  vmaddw.zw   $vf26, $vf31, $vf26w
    ctx->pc = 0x338a60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x338a64: 0x4a7bf1be  vmulaz.zw   $ACC, $vf30, $vf27z
    ctx->pc = 0x338a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, 0, 0))); }
    // 0x338a68: 0x4a7bffcb  vmaddw.zw   $vf31, $vf31, $vf27w
    ctx->pc = 0x338a68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x338a6c: 0x4a7ed33c  vmove.zw    $vf30, $vf26
    ctx->pc = 0x338a6cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[26], _mm_castsi128_ps(mask)); }
    // 0x338a70: 0xd8580040  lqc2        $vf24, 0x40($v0)
    ctx->pc = 0x338a70u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x338a74: 0xd8590050  lqc2        $vf25, 0x50($v0)
    ctx->pc = 0x338a74u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x338a78: 0xd85a0060  lqc2        $vf26, 0x60($v0)
    ctx->pc = 0x338a78u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x338a7c: 0xd85b0070  lqc2        $vf27, 0x70($v0)
    ctx->pc = 0x338a7cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x338a80: 0x4a7af1be  vmulaz.zw   $ACC, $vf30, $vf26z
    ctx->pc = 0x338a80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, 0, 0))); }
    // 0x338a84: 0x4a7afe8b  vmaddw.zw   $vf26, $vf31, $vf26w
    ctx->pc = 0x338a84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x338a88: 0x4a7bf1be  vmulaz.zw   $ACC, $vf30, $vf27z
    ctx->pc = 0x338a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, 0, 0))); }
    // 0x338a8c: 0x4a7bffcb  vmaddw.zw   $vf31, $vf31, $vf27w
    ctx->pc = 0x338a8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x338a90: 0x4a7ed33c  vmove.zw    $vf30, $vf26
    ctx->pc = 0x338a90u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[26], _mm_castsi128_ps(mask)); }
    // 0x338a94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x338a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x338a98: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x338a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x338a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x338a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x338aa0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x338aa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x338aa4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x338aa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x338aa8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x338aa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x338aac: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x338aacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x338ab0: 0x4be1e718  vmulx.xyzw  $vf28, $vf28, $vf1x
    ctx->pc = 0x338ab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x338ab4: 0x4be2ef58  vmulx.xyzw  $vf29, $vf29, $vf2x
    ctx->pc = 0x338ab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x338ab8: 0x4be3f798  vmulx.xyzw  $vf30, $vf30, $vf3x
    ctx->pc = 0x338ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x338abc: 0xf89c0000  sqc2        $vf28, 0x0($a0)
    ctx->pc = 0x338abcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x338ac0: 0xf89d0010  sqc2        $vf29, 0x10($a0)
    ctx->pc = 0x338ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x338ac4: 0xf89e0020  sqc2        $vf30, 0x20($a0)
    ctx->pc = 0x338ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x338ac8: 0xf89f0030  sqc2        $vf31, 0x30($a0)
    ctx->pc = 0x338ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x338acc: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x338accu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x338ad0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338ad0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x338AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338ADCu;
    // 0x338adc: 0x0  nop
    ctx->pc = 0x338adcu;
    // NOP
    ctx->pc = 0x338ae0u;
}
