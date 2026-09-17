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

// Function: sub_00344630
// Address: 0x344630 - 0x3446b0
void sub_00344630_0x344630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344630_0x344630");
#endif

    switch (ctx->pc) {
        case 0x344678u: goto label_344678;
        case 0x344688u: goto label_344688;
        case 0x344694u: goto label_344694;
        default: break;
    }

    ctx->pc = 0x344630u;

label_344630:
    // 0x344630: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x344630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344634: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x344634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x344638: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x344638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34463c: 0x4a2201bc  vmulax.w    $ACC, $vf0, $vf2x
    ctx->pc = 0x34463cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x344640: 0x4a2200bd  vmadday.w   $ACC, $vf0, $vf2y
    ctx->pc = 0x344640u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x344644: 0x4a22008a  vmaddz.w    $vf2, $vf0, $vf2z
    ctx->pc = 0x344644u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x344648: 0x4be203be  vrsqrt      $Q, $vf0w, $vf2w
    ctx->pc = 0x344648u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34464c: 0x4a0003bf  vwaitq
    ctx->pc = 0x34464cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x344650: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x344650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344654: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x344654u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344658: 0x3e00008  jr          $ra
    ctx->pc = 0x344658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344660u;
    // 0x344660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344664: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x344664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x344668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34466c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x344670: 0xc0d118c  jal         func_344630
    ctx->pc = 0x344670u;
    SET_GPR_U32(ctx, 31, 0x344678u);
    ctx->pc = 0x344674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344670u;
    // 0x344674: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344630u;
    goto label_344630;
    ctx->pc = 0x344678u;
label_344678:
    // 0x344678: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x344678u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x34467c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x34467cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x344680: 0xc0d2364  jal         func_348D90
    ctx->pc = 0x344680u;
    SET_GPR_U32(ctx, 31, 0x344688u);
    ctx->pc = 0x348D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348D90u, 0x344680u, 0x344688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344688u;
label_344688:
    // 0x344688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34468c: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x34468Cu;
    SET_GPR_U32(ctx, 31, 0x344694u);
    ctx->pc = 0x344690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34468Cu;
    // 0x344690: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x34468Cu, 0x344694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344694u;
label_344694:
    // 0x344694: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x344694u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x344698: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x344698u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34469c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34469cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3446a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3446a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3446a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3446a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3446a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3446A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3446ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446A8u;
        // 0x3446ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3446A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3446B0u;
}
