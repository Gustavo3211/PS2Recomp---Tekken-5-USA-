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

// Function: sub_0032EB60
// Address: 0x32eb60 - 0x32eba8
void sub_0032EB60_0x32eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EB60_0x32eb60");
#endif

    ctx->pc = 0x32eb60u;

    // 0x32eb60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32eb64: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x32eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32eb68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x32eb68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x32eb6c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x32eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32eb70: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x32eb70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32eb74: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x32eb74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x32eb78: 0x4bc1e1bc  vmulax.xyz  $ACC, $vf28, $vf1x
    ctx->pc = 0x32eb78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32eb7c: 0x4bc2e8bc  vmaddax.xyz $ACC, $vf29, $vf2x
    ctx->pc = 0x32eb7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32eb80: 0x4bc3f048  vmaddx.xyz  $vf1, $vf30, $vf3x
    ctx->pc = 0x32eb80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32eb84: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x32eb84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32eb88: 0x70021fc9  prot3w      $v1, $v0
    ctx->pc = 0x32eb88u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 2), _MM_SHUFFLE(0,3,2,1)));
    // 0x32eb8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32eb90: 0x704214a8  pextuw      $v0, $v0, $v0
    ctx->pc = 0x32eb90u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x32eb94: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x32eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x32eb98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x32eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x32eb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x32EB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB9Cu;
        // 0x32eba0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EBA4u;
    // 0x32eba4: 0x0  nop
    ctx->pc = 0x32eba4u;
    // NOP
    ctx->pc = 0x32eba8u;
}
