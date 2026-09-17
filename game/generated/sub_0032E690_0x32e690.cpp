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

// Function: sub_0032E690
// Address: 0x32e690 - 0x32e760
void sub_0032E690_0x32e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E690_0x32e690");
#endif

    switch (ctx->pc) {
        case 0x32e740u: goto label_32e740;
        default: break;
    }

    ctx->pc = 0x32e690u;

label_32e690:
    // 0x32e690: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32e690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e694: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32e694u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32e698: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x32e698u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32e69c: 0x4be1e8bd  vmadday.xyzw $ACC, $vf29, $vf1y
    ctx->pc = 0x32e69cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32e6a0: 0x4be1f0be  vmaddaz.xyzw $ACC, $vf30, $vf1z
    ctx->pc = 0x32e6a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32e6a4: 0x4be0f84b  vmaddw.xyzw $vf1, $vf31, $vf0w
    ctx->pc = 0x32e6a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e6a8: 0x4be103bc  vdiv        $Q, $vf0w, $vf1w
    ctx->pc = 0x32e6a8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x32e6ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x32e6acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x32e6b0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x32e6b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e6b4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32e6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32e6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E6C0u;
    // 0x32e6c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32e6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6c4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32e6c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32e6c8: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x32e6c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32e6cc: 0x4be1e8bd  vmadday.xyzw $ACC, $vf29, $vf1y
    ctx->pc = 0x32e6ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32e6d0: 0x4be1f04a  vmaddz.xyzw $vf1, $vf30, $vf1z
    ctx->pc = 0x32e6d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e6d4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32e6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32e6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E6E0u;
    // 0x32e6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e6e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32e6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32e6f0: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x32e6f0u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x32e6f4: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32e6f4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32e6f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32e6fc: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x32e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x32e700: 0xd85801c0  lqc2        $vf24, 0x1C0($v0)
    ctx->pc = 0x32e700u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400640u));
    // 0x32e704: 0xd85901d0  lqc2        $vf25, 0x1D0($v0)
    ctx->pc = 0x32e704u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400650u));
    // 0x32e708: 0xd85a01e0  lqc2        $vf26, 0x1E0($v0)
    ctx->pc = 0x32e708u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x400660u));
    // 0x32e70c: 0xd85b01f0  lqc2        $vf27, 0x1F0($v0)
    ctx->pc = 0x32e70cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x400670u));
    // 0x32e710: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x32e710u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x32e714: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32e714u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32e718: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32e718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32e71c: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x32e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x32e720: 0xd8580080  lqc2        $vf24, 0x80($v0)
    ctx->pc = 0x32e720u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400500u));
    // 0x32e724: 0xd8590090  lqc2        $vf25, 0x90($v0)
    ctx->pc = 0x32e724u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400510u));
    // 0x32e728: 0xd85a00a0  lqc2        $vf26, 0xA0($v0)
    ctx->pc = 0x32e728u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x400520u));
    // 0x32e72c: 0xd85b00b0  lqc2        $vf27, 0xB0($v0)
    ctx->pc = 0x32e72cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x400530u));
    // 0x32e730: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x32e730u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x32e734: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32e734u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32e738: 0xc0cb9a4  jal         func_32E690
    ctx->pc = 0x32E738u;
    SET_GPR_U32(ctx, 31, 0x32E740u);
    ctx->pc = 0x32E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E738u;
    // 0x32e73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E690u;
    goto label_32e690;
    ctx->pc = 0x32E740u;
label_32e740:
    // 0x32e740: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x32e740u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x32e744: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32e744u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32e748: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32e748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e74c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e74cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e750: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32e750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e754: 0x3e00008  jr          $ra
    ctx->pc = 0x32E754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E754u;
        // 0x32e758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E75Cu;
    // 0x32e75c: 0x0  nop
    ctx->pc = 0x32e75cu;
    // NOP
    ctx->pc = 0x32e760u;
}
