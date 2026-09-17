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

// Function: sub_002B8E78
// Address: 0x2b8e78 - 0x2b8ef8
void sub_002B8E78_0x2b8e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8E78_0x2b8e78");
#endif

    ctx->pc = 0x2b8e78u;

    // 0x2b8e78: 0x78830050  lq          $v1, 0x50($a0)
    ctx->pc = 0x2b8e78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2b8e7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8e80: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x2b8e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2b8e84: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x2b8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2b8e88: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x2b8e88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x2b8e8c: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2b8e8cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b8e90: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2b8e90u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8e94: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2b8e94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b8e98: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2b8e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b8e9c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2b8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b8ea0: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x2b8ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2b8ea4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2b8ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2b8ea8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b8ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8eac: 0x248500a0  addiu       $a1, $a0, 0xA0
    ctx->pc = 0x2b8eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2b8eb0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2b8eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8eb4: 0x0  nop
    ctx->pc = 0x2b8eb4u;
    // NOP
    // 0x2b8eb8: 0x0  nop
    ctx->pc = 0x2b8eb8u;
    // NOP
    // 0x2b8ebc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b8ebcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2b8ec0: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2b8ec0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b8ec4: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x2b8ec4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8ec8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b8ec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b8ecc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b8eccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b8ed0: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2b8ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b8ed4: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2b8ed4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b8ed8: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x2b8ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b8edc: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x2b8edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b8ee0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x2b8ee0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2b8ee4: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x2b8ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x2b8ee8: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x2b8ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x2b8eec: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x2b8eecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b8ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EF0u;
        // 0x2b8ef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8EF8u;
}
