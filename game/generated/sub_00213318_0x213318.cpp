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

// Function: sub_00213318
// Address: 0x213318 - 0x2133f8
void sub_00213318_0x213318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213318_0x213318");
#endif

    switch (ctx->pc) {
        case 0x21332cu: goto label_21332c;
        default: break;
    }

    ctx->pc = 0x213318u;

    // 0x213318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21331c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213320: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213324: 0xc08473a  jal         func_211CE8
    ctx->pc = 0x213324u;
    SET_GPR_U32(ctx, 31, 0x21332Cu);
    ctx->pc = 0x213328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213324u;
    // 0x213328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CE8u, 0x213324u, 0x21332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21332Cu;
label_21332c:
    // 0x21332c: 0x4a60012c  vsub.zw     $vf4, $vf0, $vf0
    ctx->pc = 0x21332cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213330: 0x4a60016c  vsub.zw     $vf5, $vf0, $vf0
    ctx->pc = 0x213330u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x213334: 0x4ba001ac  vsub.xyw    $vf6, $vf0, $vf0
    ctx->pc = 0x213334u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x213338: 0x4a400183  vaddw.z     $vf6, $vf0, $vf0w
    ctx->pc = 0x213338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21333c: 0x4b1c0101  vaddy.x     $vf4, $vf0, $vf28y
    ctx->pc = 0x21333cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213340: 0x4b1c0144  vsubx.x     $vf5, $vf0, $vf28x
    ctx->pc = 0x213340u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x213344: 0x4a9c0100  vaddx.y     $vf4, $vf0, $vf28x
    ctx->pc = 0x213344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213348: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x213348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21334c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x21334cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x213350: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x213350u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x213354: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x213354u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x213358: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x213358u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x21335c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21335cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213360: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x213360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213364: 0x3e00008  jr          $ra
    ctx->pc = 0x213364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213364u;
        // 0x213368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21336Cu;
    // 0x21336c: 0x0  nop
    ctx->pc = 0x21336cu;
    // NOP
    // 0x213370: 0x4611701a  mula.s      $f14, $f17
    ctx->pc = 0x213370u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[14], ctx->f[17]));
    // 0x213374: 0x4610785d  msub.s      $f1, $f15, $f16
    ctx->pc = 0x213374u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[15], ctx->f[16]));
    // 0x213378: 0x46108801  sub.s       $f0, $f17, $f16
    ctx->pc = 0x213378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x21337c: 0x460e7bc1  sub.s       $f15, $f15, $f14
    ctx->pc = 0x21337cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
    // 0x213380: 0x46108c42  mul.s       $f17, $f17, $f16
    ctx->pc = 0x213380u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[16]);
    // 0x213384: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x213384u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x213388: 0x460f8c42  mul.s       $f17, $f17, $f15
    ctx->pc = 0x213388u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[15]);
    // 0x21338c: 0xf8800020  sqc2        $vf0, 0x20($a0)
    ctx->pc = 0x21338cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x213390: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x213390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x213394: 0x46008c43  div.s       $f17, $f17, $f0
    ctx->pc = 0x213394u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[0];
    // 0x213398: 0xe48c0030  swc1        $f12, 0x30($a0)
    ctx->pc = 0x213398u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x21339c: 0xe48d0034  swc1        $f13, 0x34($a0)
    ctx->pc = 0x21339cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2133a0: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x2133a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x2133a4: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x2133a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x2133a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2133a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2133ac: 0xe4910038  swc1        $f17, 0x38($a0)
    ctx->pc = 0x2133acu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2133b0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2133b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2133b4: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x2133b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2133b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2133B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2133BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133B8u;
        // 0x2133bc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2133B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2133C0u;
    // 0x2133c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2133c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2133c4: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x2133c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x2133c8: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x2133c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x2133cc: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2133ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2133d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2133d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2133d4: 0xfc800020  sd          $zero, 0x20($a0)
    ctx->pc = 0x2133d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 0));
    // 0x2133d8: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x2133d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2133dc: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x2133dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
    // 0x2133e0: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x2133e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2133e4: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x2133e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
    // 0x2133e8: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x2133e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2133ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2133ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2133F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133ECu;
        // 0x2133f0: 0xfc820038  sd          $v0, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2133ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2133F4u;
    // 0x2133f4: 0x0  nop
    ctx->pc = 0x2133f4u;
    // NOP
    ctx->pc = 0x2133f8u;
}
