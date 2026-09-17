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

// Function: sub_0032CB58
// Address: 0x32cb58 - 0x32cbd8
void sub_0032CB58_0x32cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CB58_0x32cb58");
#endif

    switch (ctx->pc) {
        case 0x32cba0u: goto label_32cba0;
        case 0x32cbd0u: goto label_32cbd0;
        default: break;
    }

    ctx->pc = 0x32cb58u;

    // 0x32cb58: 0x460c6b41  sub.s       $f13, $f13, $f12
    ctx->pc = 0x32cb58u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x32cb5c: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x32cb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x32cb60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32cb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32cb64: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x32cb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x32cb68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32cb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32cb6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cb70: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x32cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x32cb74: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x32cb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x32cb78: 0x0  nop
    ctx->pc = 0x32cb78u;
    // NOP
    // 0x32cb7c: 0x0  nop
    ctx->pc = 0x32cb7cu;
    // NOP
    // 0x32cb80: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x32cb80u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x32cb84: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x32cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x32cb88: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x32cb88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x32cb8c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x32cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x32cb90: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x32cb90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x32cb94: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x32cb94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x32cb98: 0x3e00008  jr          $ra
    ctx->pc = 0x32CB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB98u;
        // 0x32cb9c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CBA0u;
label_32cba0:
    // 0x32cba0: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x32cba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32cba4: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x32cba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32cba8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x32cba8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32cbac: 0x4a41003f  vaddaw.z    $ACC, $vf0, $vf1w
    ctx->pc = 0x32cbacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x32cbb0: 0x4a420888  vmaddx.z    $vf2, $vf1, $vf2x
    ctx->pc = 0x32cbb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32cbb4: 0x4a820896  vminiz.y    $vf2, $vf1, $vf2z
    ctx->pc = 0x32cbb4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32cbb8: 0x4b020891  vmaxy.x     $vf2, $vf1, $vf2y
    ctx->pc = 0x32cbb8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32cbbc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x32cbbcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x32cbc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32cbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32cbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x32CBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CBCCu;
    // 0x32cbcc: 0x0  nop
    ctx->pc = 0x32cbccu;
    // NOP
label_32cbd0:
    // 0x32cbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x32CBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CBD0u;
        // 0x32cbd4: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CBD8u;
}
