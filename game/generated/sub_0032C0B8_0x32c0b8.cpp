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

// Function: sub_0032C0B8
// Address: 0x32c0b8 - 0x32c128
void sub_0032C0B8_0x32c0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C0B8_0x32c0b8");
#endif

    ctx->pc = 0x32c0b8u;

    // 0x32c0b8: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x32c0b8u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x32c0bc: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32c0bcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32c0c0: 0xd89c0000  lqc2        $vf28, 0x0($a0)
    ctx->pc = 0x32c0c0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c0c4: 0xd89d0010  lqc2        $vf29, 0x10($a0)
    ctx->pc = 0x32c0c4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32c0c8: 0xd89e0020  lqc2        $vf30, 0x20($a0)
    ctx->pc = 0x32c0c8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x32c0cc: 0xd89f0030  lqc2        $vf31, 0x30($a0)
    ctx->pc = 0x32c0ccu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x32c0d0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x32c0d0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x32c0d4: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x32c0d4u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x32c0d8: 0x46007387  neg.s       $f14, $f14
    ctx->pc = 0x32c0d8u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x32c0dc: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x32c0dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32c0e0: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x32c0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32c0e4: 0x44057000  mfc1        $a1, $f14
    ctx->pc = 0x32c0e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x32c0e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x32c0e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x32c0ec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x32c0ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32c0f0: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x32c0f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x32c0f4: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x32c0f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32c0f8: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x32c0f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32c0fc: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x32c0fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32c100: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x32c100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x32c104: 0xf89c0000  sqc2        $vf28, 0x0($a0)
    ctx->pc = 0x32c104u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32c108: 0xf89d0010  sqc2        $vf29, 0x10($a0)
    ctx->pc = 0x32c108u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32c10c: 0xf89e0020  sqc2        $vf30, 0x20($a0)
    ctx->pc = 0x32c10cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32c110: 0xf89f0030  sqc2        $vf31, 0x30($a0)
    ctx->pc = 0x32c110u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32c114: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x32c114u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x32c118: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32c118u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32c11c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C124u;
    // 0x32c124: 0x0  nop
    ctx->pc = 0x32c124u;
    // NOP
    ctx->pc = 0x32c128u;
}
