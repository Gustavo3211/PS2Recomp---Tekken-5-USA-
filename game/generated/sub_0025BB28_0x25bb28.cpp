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

// Function: sub_0025BB28
// Address: 0x25bb28 - 0x25bba0
void sub_0025BB28_0x25bb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BB28_0x25bb28");
#endif

    switch (ctx->pc) {
        case 0x25bb68u: goto label_25bb68;
        default: break;
    }

    ctx->pc = 0x25bb28u;

    // 0x25bb28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25bb28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bb2c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x25bb2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bb30: 0xc7808b14  lwc1        $f0, -0x74EC($gp)
    ctx->pc = 0x25bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bb34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25BB34u;
    {
        const bool branch_taken_0x25bb34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bb34) {
            ctx->pc = 0x25BB48u;
            goto label_25bb48;
        }
    }
    ctx->pc = 0x25BB3Cu;
    // 0x25bb3c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x25bb3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x25bb40: 0x8096ed4  j           func_25BB50
    ctx->pc = 0x25BB40u;
    ctx->pc = 0x25BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB40u;
    // 0x25bb44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BB50u;
    goto label_25bb50;
    ctx->pc = 0x25BB48u;
label_25bb48:
    // 0x25bb48: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x25bb48u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x25bb4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25bb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bb50:
    // 0x25bb50: 0x4be004ec  vsub.xyzw   $vf19, $vf0, $vf0
    ctx->pc = 0x25bb50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x25bb54: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x25bb54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25bb58: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x25bb58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25bb5c: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x25bb5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bb60: 0xc096df4  jal         func_25B7D0
    ctx->pc = 0x25BB60u;
    SET_GPR_U32(ctx, 31, 0x25BB68u);
    ctx->pc = 0x25B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B7D0u, 0x25BB60u, 0x25BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB68u;
label_25bb68:
    // 0x25bb68: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x25bb68u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bb6c: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x25bb6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25bb70: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x25bb70u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x25bb74: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x25bb74u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x25bb78: 0x4be8033d  vmr32.xyzw  $vf8, $vf0
    ctx->pc = 0x25bb78u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x25bb7c: 0x4b002983  vaddw.x     $vf6, $vf5, $vf0w
    ctx->pc = 0x25bb7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25bb80: 0x4a842980  vaddx.y     $vf6, $vf5, $vf4x
    ctx->pc = 0x25bb80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25bb84: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x25bb84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25bb88: 0x4b0429c4  vsubx.x     $vf7, $vf5, $vf4x
    ctx->pc = 0x25bb88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25bb8c: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x25bb8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25bb90: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x25bb90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25bb94: 0xf8870010  sqc2        $vf7, 0x10($a0)
    ctx->pc = 0x25bb94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25bb98: 0x3e00008  jr          $ra
    ctx->pc = 0x25BB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB98u;
        // 0x25bb9c: 0xf8880020  sqc2        $vf8, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BBA0u;
}
