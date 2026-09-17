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

// Function: sub_0031C028
// Address: 0x31c028 - 0x31c070
void sub_0031C028_0x31c028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C028_0x31c028");
#endif

    ctx->pc = 0x31c028u;

    // 0x31c028: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31c028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31c02c: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x31c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x31c030: 0xd85800c0  lqc2        $vf24, 0xC0($v0)
    ctx->pc = 0x31c030u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400540u));
    // 0x31c034: 0xd85900d0  lqc2        $vf25, 0xD0($v0)
    ctx->pc = 0x31c034u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400550u));
    // 0x31c038: 0xd85a00e0  lqc2        $vf26, 0xE0($v0)
    ctx->pc = 0x31c038u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x400560u));
    // 0x31c03c: 0xd85b00f0  lqc2        $vf27, 0xF0($v0)
    ctx->pc = 0x31c03cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x400570u));
    // 0x31c040: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x31c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c044: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31c044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31c048: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x31c048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x31c04c: 0x4a41d1bc  vmulax.z    $ACC, $vf26, $vf1x
    ctx->pc = 0x31c04cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x31c050: 0x4a40d84b  vmaddw.z    $vf1, $vf27, $vf0w
    ctx->pc = 0x31c050u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31c054: 0x4a41097c  vftoi0.z    $vf1, $vf1
    ctx->pc = 0x31c054u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31c058: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x31c058u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31c05c: 0x704213a9  pcpyud      $v0, $v0, $v0
    ctx->pc = 0x31c05cu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x31c060: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x31c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x31c064: 0x3e00008  jr          $ra
    ctx->pc = 0x31C064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C064u;
        // 0x31c068: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C06Cu;
    // 0x31c06c: 0x0  nop
    ctx->pc = 0x31c06cu;
    // NOP
    ctx->pc = 0x31c070u;
}
