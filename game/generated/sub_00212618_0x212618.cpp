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

// Function: sub_00212618
// Address: 0x212618 - 0x212680
void sub_00212618_0x212618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212618_0x212618");
#endif

    ctx->pc = 0x212618u;

    // 0x212618: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x212618u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21261c: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x21261cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x212620: 0x78a90020  lq          $t1, 0x20($a1)
    ctx->pc = 0x212620u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x212624: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x212624u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x212628: 0x70c83c88  pextlw      $a3, $a2, $t0
    ctx->pc = 0x212628u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTLW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x21262c: 0x70c834a8  pextuw      $a2, $a2, $t0
    ctx->pc = 0x21262cu;
    SET_GPR_VEC(ctx, 6, PS2_PEXTUW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x212630: 0x70691488  pextlw      $v0, $v1, $t1
    ctx->pc = 0x212630u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x212634: 0x70691ca8  pextuw      $v1, $v1, $t1
    ctx->pc = 0x212634u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x212638: 0x70474389  pcpyld      $t0, $v0, $a3
    ctx->pc = 0x212638u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x21263c: 0x70e23ba9  pcpyud      $a3, $a3, $v0
    ctx->pc = 0x21263cu;
    SET_GPR_VEC(ctx, 7, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x212640: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x212640u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x212644: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x212644u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x212648: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x212648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x21264c: 0x48a72800  qmtc2.ni    $a3, $vf5
    ctx->pc = 0x21264cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x212650: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x212650u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x212654: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x212654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212658: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x212658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x21265c: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x21265cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212660: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x212660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x212664: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x212664u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x212668: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x212668u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x21266c: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x21266cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x212670: 0x3e00008  jr          $ra
    ctx->pc = 0x212670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212670u;
        // 0x212674: 0xf8870030  sqc2        $vf7, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212678u;
    // 0x212678: 0x3e00008  jr          $ra
    ctx->pc = 0x212678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212680u;
}
