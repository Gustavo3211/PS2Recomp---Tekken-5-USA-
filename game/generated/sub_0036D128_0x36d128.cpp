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

// Function: sub_0036D128
// Address: 0x36d128 - 0x36d1c0
void sub_0036D128_0x36d128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D128_0x36d128");
#endif

    ctx->pc = 0x36d128u;

    // 0x36d128: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x36d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36d12c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d12cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d130: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x36d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x36d134: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x36d134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x36d138: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x36d138u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d13c: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x36d13cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d140: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x36d140u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d144: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d148: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x36d148u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d14c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x36d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x36d150: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x36d150u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x36d154: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x36d154u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d158: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x36d158u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d15c: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x36d15cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d160: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x36d160u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d164: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x36d164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x36d168: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x36d168u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d16c: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x36d16cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d170: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x36d170u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d174: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x36d174u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d178: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x36d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x36d17c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x36d17cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d180: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x36d180u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d184: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x36d184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d188: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x36d188u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d18c: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x36d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x36d190: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x36d190u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d194: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x36d194u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d198: 0x4bf18428  vadd.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x36d198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d19c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x36d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d1a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36d1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36d1a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36d1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d1a8: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x36d1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x36d1ac: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x36d1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x36d1b0: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x36d1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x36d1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x36D1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D1B4u;
        // 0x36d1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D1BCu;
    // 0x36d1bc: 0x0  nop
    ctx->pc = 0x36d1bcu;
    // NOP
    ctx->pc = 0x36d1c0u;
}
