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

// Function: sub_002DCFF0
// Address: 0x2dcff0 - 0x2dd030
void sub_002DCFF0_0x2dcff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCFF0_0x2dcff0");
#endif

    ctx->pc = 0x2dcff0u;

    // 0x2dcff0: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x2dcff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x2dcff4: 0x30c4ffc0  andi        $a0, $a2, 0xFFC0
    ctx->pc = 0x2dcff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65472);
    // 0x2dcff8: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x2dcff8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x2dcffc: 0x48a29000  qmtc2.ni    $v0, $vf18
    ctx->pc = 0x2dcffcu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2dd000: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2dd000u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2dd004: 0x4b92913c  vitof0.xy   $vf18, $vf18
    ctx->pc = 0x2dd004u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[18]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x2dd008: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2dd008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2dd00c: 0x24632b80  addiu       $v1, $v1, 0x2B80
    ctx->pc = 0x2dd00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11136));
    // 0x2dd010: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2dd010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2dd014: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2dd014u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd018: 0x4b1091be  vmulaz.x    $ACC, $vf18, $vf16z
    ctx->pc = 0x2dd018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x2dd01c: 0x4a9091bf  vmulaw.y    $ACC, $vf18, $vf16w
    ctx->pc = 0x2dd01cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2dd020: 0x4b8083cb  vmaddw.xy   $vf15, $vf16, $vf0w
    ctx->pc = 0x2dd020u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x2dd024: 0x48247800  qmfc2.ni    $a0, $vf15
    ctx->pc = 0x2dd024u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x2dd028: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD028u;
        // 0x2dd02c: 0xfca40000  sd          $a0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD030u;
}
