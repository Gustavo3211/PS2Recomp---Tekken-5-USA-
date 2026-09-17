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

// Function: sub_00211CE8
// Address: 0x211ce8 - 0x211dd0
void sub_00211CE8_0x211ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211CE8_0x211ce8");
#endif

    ctx->pc = 0x211ce8u;

    // 0x211ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211cec: 0xc7818470  lwc1        $f1, -0x7B90($gp)
    ctx->pc = 0x211cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211cf0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x211cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211cf4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x211CF4u;
    {
        const bool branch_taken_0x211cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211cf4) {
            ctx->pc = 0x211CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211CF4u;
            // 0x211cf8: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x211D08u;
            goto label_211d08;
        }
    }
    ctx->pc = 0x211CFCu;
    // 0x211cfc: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x211cfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x211d00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x211D00u;
    {
        const bool branch_taken_0x211d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D00u;
        // 0x211d04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d00) {
            ctx->pc = 0x211D0Cu;
            goto label_211d0c;
        }
    }
    ctx->pc = 0x211D08u;
label_211d08:
    // 0x211d08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x211d08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211d0c:
    // 0x211d0c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x211d0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x211d10: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x211d10u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x211d14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x211d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x211d18: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x211d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x211d1c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x211d1cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x211d20: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x211d20u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x211d24: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x211d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x211d28: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x211d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x211d2c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x211d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x211d30: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x211d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x211d34: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x211d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x211d38: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x211d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x211d3c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x211d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x211d40: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x211d40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x211d44: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x211d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x211d48: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x211d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x211d4c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x211d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x211d50: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x211d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x211d54: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x211d54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x211d58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x211D58u;
    {
        const bool branch_taken_0x211d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D58u;
        // 0x211d5c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d58) {
            ctx->pc = 0x211D70u;
            goto label_211d70;
        }
    }
    ctx->pc = 0x211D60u;
    // 0x211d60: 0x4a0003bf  vwaitq
    ctx->pc = 0x211d60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x211d64: 0x3e00008  jr          $ra
    ctx->pc = 0x211D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D64u;
        // 0x211d68: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211D6Cu;
    // 0x211d6c: 0x0  nop
    ctx->pc = 0x211d6cu;
    // NOP
label_211d70:
    // 0x211d70: 0x4a0003bf  vwaitq
    ctx->pc = 0x211d70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x211d74: 0x3e00008  jr          $ra
    ctx->pc = 0x211D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D74u;
        // 0x211d78: 0x4b000720  vaddq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211D7Cu;
    // 0x211d7c: 0x0  nop
    ctx->pc = 0x211d7cu;
    // NOP
    // 0x211d80: 0x3e00008  jr          $ra
    ctx->pc = 0x211D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211D88u;
    // 0x211d88: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x211d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x211d8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x211d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x211d90: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x211d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x211d94: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x211d94u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211d98: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x211d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x211d9c: 0x460c0102  mul.s       $f4, $f0, $f12
    ctx->pc = 0x211d9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x211da0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x211da0u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211da4: 0x460c1818  adda.s      $f3, $f12
    ctx->pc = 0x211da4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[12]));
    // 0x211da8: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x211da8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x211dac: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x211dacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x211db0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x211db0u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211db4: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x211db4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x211db8: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x211db8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x211dbc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x211dbcu;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211dc0: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x211dc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x211dc4: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x211dc4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x211dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x211DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DC8u;
        // 0x211dcc: 0x4601181c  madd.s      $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211DD0u;
}
