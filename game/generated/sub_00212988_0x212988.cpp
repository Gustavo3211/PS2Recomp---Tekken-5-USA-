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

// Function: sub_00212988
// Address: 0x212988 - 0x2129f8
void sub_00212988_0x212988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212988_0x212988");
#endif

    switch (ctx->pc) {
        case 0x2129acu: goto label_2129ac;
        default: break;
    }

    ctx->pc = 0x212988u;

    // 0x212988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21298c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212994: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x212994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x212998: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x212998u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21299c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x21299cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2129a0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x2129a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2129a4: 0xc08473a  jal         func_211CE8
    ctx->pc = 0x2129A4u;
    SET_GPR_U32(ctx, 31, 0x2129ACu);
    ctx->pc = 0x2129A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2129A4u;
    // 0x2129a8: 0xd8a70030  lqc2        $vf7, 0x30($a1) (Delay Slot)
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CE8u, 0x2129A4u, 0x2129ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129ACu;
label_2129ac:
    // 0x2129ac: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2129acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2129b0: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2129b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2129b4: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2129b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2129b8: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2129b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2129bc: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2129bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2129c0: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2129c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2129c4: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2129c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2129c8: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2129c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2129cc: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2129ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2129d0: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x2129d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2129d4: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x2129d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2129d8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2129d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2129dc: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2129dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2129e0: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2129e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2129e4: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2129e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2129e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2129e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2129ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2129ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2129f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2129F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2129F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129F0u;
        // 0x2129f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2129F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2129F8u;
}
