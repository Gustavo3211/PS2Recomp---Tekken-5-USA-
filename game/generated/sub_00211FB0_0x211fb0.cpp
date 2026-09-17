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

// Function: sub_00211FB0
// Address: 0x211fb0 - 0x212030
void sub_00211FB0_0x211fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211FB0_0x211fb0");
#endif

    ctx->pc = 0x211fb0u;

    // 0x211fb0: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x211fb0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211fb4: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x211fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x211fb8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x211fb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x211fbc: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x211fbcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x211fc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x211fc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211fc8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x211fc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x211fcc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x211fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x211fd0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x211fd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x211fd4: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x211fd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x211fd8: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x211fd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x211fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x211FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FDCu;
        // 0x211fe0: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211FE4u;
    // 0x211fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x211FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211FECu;
    // 0x211fec: 0x0  nop
    ctx->pc = 0x211fecu;
    // NOP
    // 0x211ff0: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x211ff0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211ff4: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x211ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x211ff8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x211ff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x211ffc: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x211ffcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212008: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x212008u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x21200c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21200cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212010: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x212010u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212014: 0x4bc181bc  vmulax.xyz  $ACC, $vf16, $vf1x
    ctx->pc = 0x212014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212018: 0x4bc28c08  vmaddx.xyz  $vf16, $vf17, $vf2x
    ctx->pc = 0x212018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x21201c: 0x3e00008  jr          $ra
    ctx->pc = 0x21201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21201Cu;
        // 0x212020: 0xf8900000  sqc2        $vf16, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21201Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212024u;
    // 0x212024: 0x3e00008  jr          $ra
    ctx->pc = 0x212024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21202Cu;
    // 0x21202c: 0x0  nop
    ctx->pc = 0x21202cu;
    // NOP
    ctx->pc = 0x212030u;
}
