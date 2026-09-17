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

// Function: sub_00322750
// Address: 0x322750 - 0x3227b0
void sub_00322750_0x322750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322750_0x322750");
#endif

    ctx->pc = 0x322750u;

    // 0x322750: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x322750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x322754: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x322754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x322758: 0xd8780000  lqc2        $vf24, 0x0($v1)
    ctx->pc = 0x322758u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400480u));
    // 0x32275c: 0xd8790010  lqc2        $vf25, 0x10($v1)
    ctx->pc = 0x32275cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400490u));
    // 0x322760: 0xd87a0020  lqc2        $vf26, 0x20($v1)
    ctx->pc = 0x322760u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x4004A0u));
    // 0x322764: 0xd87b0030  lqc2        $vf27, 0x30($v1)
    ctx->pc = 0x322764u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x4004B0u));
    // 0x322768: 0x4bd5e1bc  vmulax.xyz  $ACC, $vf28, $vf21x
    ctx->pc = 0x322768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32276c: 0x4bd5e8bd  vmadday.xyz $ACC, $vf29, $vf21y
    ctx->pc = 0x32276cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x322770: 0x4bd5f0be  vmaddaz.xyz $ACC, $vf30, $vf21z
    ctx->pc = 0x322770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x322774: 0x4bc0f84b  vmaddw.xyz  $vf1, $vf31, $vf0w
    ctx->pc = 0x322774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x322778: 0x4a41c1bc  vmulax.z    $ACC, $vf24, $vf1x
    ctx->pc = 0x322778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x32277c: 0x4a41c8bd  vmadday.z   $ACC, $vf25, $vf1y
    ctx->pc = 0x32277cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x322780: 0x4a41d0be  vmaddaz.z   $ACC, $vf26, $vf1z
    ctx->pc = 0x322780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x322784: 0x4a40d84b  vmaddw.z    $vf1, $vf27, $vf0w
    ctx->pc = 0x322784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x322788: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x322788u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32278c: 0x704213a9  pcpyud      $v0, $v0, $v0
    ctx->pc = 0x32278cu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x322790: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x322790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x322794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322798: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x322798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32279c: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x32279cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
    // 0x3227a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3227a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3227a4: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x3227a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x3227a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3227A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3227ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227A8u;
        // 0x3227ac: 0xe4800054  swc1        $f0, 0x54($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3227A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3227B0u;
}
