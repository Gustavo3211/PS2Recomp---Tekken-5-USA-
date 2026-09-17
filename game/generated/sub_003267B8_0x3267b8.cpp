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

// Function: sub_003267B8
// Address: 0x3267b8 - 0x3267d0
void sub_003267B8_0x3267b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003267B8_0x3267b8");
#endif

    ctx->pc = 0x3267b8u;

    // 0x3267b8: 0x4a55056c  vsub.z      $vf21, $vf0, $vf21
    ctx->pc = 0x3267b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3267bc: 0x4822a800  qmfc2.ni    $v0, $vf21
    ctx->pc = 0x3267bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x3267c0: 0x704213a9  pcpyud      $v0, $v0, $v0
    ctx->pc = 0x3267c0u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x3267c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3267c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3267c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3267C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3267C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3267D0u;
}
