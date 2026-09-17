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

// Function: sub_002FDB20
// Address: 0x2fdb20 - 0x2fdbf8
void sub_002FDB20_0x2fdb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDB20_0x2fdb20");
#endif

    ctx->pc = 0x2fdb20u;

    // 0x2fdb20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fdb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fdb24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2fdb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdb28: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2fdb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2fdb2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fdb30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2fdb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdb34: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2fdb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2fdb38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fdb3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2fdb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdb40: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2fdb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2fdb44: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x2fdb44u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fdb48: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x2fdb48u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fdb4c: 0x4bd1842c  vsub.xyz    $vf16, $vf16, $vf17
    ctx->pc = 0x2fdb4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fdb50: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2fdb50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fdb54: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fdb54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fdb58: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fdb58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fdb5c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2fdb5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2fdb60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fdb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fdb64: 0x46010044  c1          0x10044
    ctx->pc = 0x2fdb64u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fdb68: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x2fdb68u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fdb6c: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x2fdb6cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fdb70: 0x4bd1842c  vsub.xyz    $vf16, $vf16, $vf17
    ctx->pc = 0x2fdb70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fdb74: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2fdb74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fdb78: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fdb78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fdb7c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fdb7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fdb80: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2fdb80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2fdb84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdb84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdb88: 0x46000004  c1          0x4
    ctx->pc = 0x2fdb88u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fdb8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fdb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fdb90: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2fdb90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2fdb94: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2fdb94u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2fdb98: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2fdb98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdb9c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FDB9Cu;
    {
        const bool branch_taken_0x2fdb9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fdb9c) {
            ctx->pc = 0x2FDBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDB9Cu;
            // 0x2fdba0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDBA4u;
            goto label_2fdba4;
        }
    }
    ctx->pc = 0x2FDBA4u;
label_2fdba4:
    // 0x2fdba4: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x2fdba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fdba8: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2fdba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdbac: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2fdbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdbb0: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x2fdbb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2fdbb4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2fdbb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2fdbb8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2fdbb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2fdbbc: 0x0  nop
    ctx->pc = 0x2fdbbcu;
    // NOP
    // 0x2fdbc0: 0x0  nop
    ctx->pc = 0x2fdbc0u;
    // NOP
    // 0x2fdbc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2fdbc4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2fdbc8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fdbc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fdbcc: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2fdbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdbd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDBD0u;
    {
        const bool branch_taken_0x2fdbd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fdbd0) {
            ctx->pc = 0x2FDBE0u;
            goto label_2fdbe0;
        }
    }
    ctx->pc = 0x2FDBD8u;
    // 0x2fdbd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDBD8u;
    {
        const bool branch_taken_0x2fdbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDBD8u;
        // 0x2fdbdc: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdbd8) {
            ctx->pc = 0x2FDBECu;
            goto label_2fdbec;
        }
    }
    ctx->pc = 0x2FDBE0u;
label_2fdbe0:
    // 0x2fdbe0: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2fdbe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdbe4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FDBE4u;
    {
        const bool branch_taken_0x2fdbe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fdbe4) {
            ctx->pc = 0x2FDBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDBE4u;
            // 0x2fdbe8: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDBECu;
            goto label_2fdbec;
        }
    }
    ctx->pc = 0x2FDBECu;
label_2fdbec:
    // 0x2fdbec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2fdbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fdbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDBF0u;
        // 0x2fdbf4: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDBF8u;
}
