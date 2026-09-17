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

// Function: sub_00213268
// Address: 0x213268 - 0x2132c0
void sub_00213268_0x213268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213268_0x213268");
#endif

    switch (ctx->pc) {
        case 0x21327cu: goto label_21327c;
        default: break;
    }

    ctx->pc = 0x213268u;

    // 0x213268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21326c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213270: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213274: 0xc08473a  jal         func_211CE8
    ctx->pc = 0x213274u;
    SET_GPR_U32(ctx, 31, 0x21327Cu);
    ctx->pc = 0x213278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213274u;
    // 0x213278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CE8u, 0x213274u, 0x21327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21327Cu;
label_21327c:
    // 0x21327c: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x21327cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213280: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x213280u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x213284: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x213284u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x213288: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x213288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21328c: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x21328cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x213290: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x213290u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x213294: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x213294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x213298: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x213298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21329c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x21329cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2132a0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2132a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2132a4: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2132a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2132a8: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2132a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2132ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2132acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2132b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2132b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2132b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2132B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2132B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132B4u;
        // 0x2132b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2132B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2132BCu;
    // 0x2132bc: 0x0  nop
    ctx->pc = 0x2132bcu;
    // NOP
    ctx->pc = 0x2132c0u;
}
