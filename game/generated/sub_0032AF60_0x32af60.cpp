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

// Function: sub_0032AF60
// Address: 0x32af60 - 0x32af88
void sub_0032AF60_0x32af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AF60_0x32af60");
#endif

    ctx->pc = 0x32af60u;

    // 0x32af60: 0x4a6703bc  vdiv        $Q, $vf0w, $vf7x
    ctx->pc = 0x32af60u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x32af64: 0x4a55056c  vsub.z      $vf21, $vf0, $vf21
    ctx->pc = 0x32af64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x32af68: 0x4a0003bf  vwaitq
    ctx->pc = 0x32af68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x32af6c: 0x4a40ad5c  vmulq.z     $vf21, $vf21, $Q
    ctx->pc = 0x32af6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x32af70: 0x4822a800  qmfc2.ni    $v0, $vf21
    ctx->pc = 0x32af70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x32af74: 0x704213a9  pcpyud      $v0, $v0, $v0
    ctx->pc = 0x32af74u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x32af78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32af78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32af7c: 0x3e00008  jr          $ra
    ctx->pc = 0x32AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AF84u;
    // 0x32af84: 0x0  nop
    ctx->pc = 0x32af84u;
    // NOP
    ctx->pc = 0x32af88u;
}
