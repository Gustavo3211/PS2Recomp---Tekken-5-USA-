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

// Function: sub_0032F928
// Address: 0x32f928 - 0x32fa50
void sub_0032F928_0x32f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F928_0x32f928");
#endif

    ctx->pc = 0x32f928u;

    // 0x32f928: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f92c: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x32f92cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32f930: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f930u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f934: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x32f934u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32f938: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x32f938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f93c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32f940: 0x3e00008  jr          $ra
    ctx->pc = 0x32F940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F948u;
    // 0x32f948: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f94c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f94cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f950: 0x4be210ac  vsub.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x32f950u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f954: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x32f954u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f958: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32f958u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32f95c: 0x3e00008  jr          $ra
    ctx->pc = 0x32F95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F964u;
    // 0x32f964: 0x0  nop
    ctx->pc = 0x32f964u;
    // NOP
    // 0x32f968: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f96c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f96cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f970: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32f970u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32f974: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x32f974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f978: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32f978u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32f97c: 0x3e00008  jr          $ra
    ctx->pc = 0x32F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F984u;
    // 0x32f984: 0x0  nop
    ctx->pc = 0x32f984u;
    // NOP
    // 0x32f988: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f98c: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x32f98cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32f990: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f990u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f994: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32f994u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32f998: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x32f998u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32f99c: 0x4a2300c4  vsubx.w     $vf3, $vf0, $vf3x
    ctx->pc = 0x32f99cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f9a0: 0x4be309bf  vmulaw.xyzw $ACC, $vf1, $vf3w
    ctx->pc = 0x32f9a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32f9a4: 0x4be310c8  vmaddx.xyzw $vf3, $vf2, $vf3x
    ctx->pc = 0x32f9a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f9a8: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x32f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x32f9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x32F9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F9B4u;
    // 0x32f9b4: 0x0  nop
    ctx->pc = 0x32f9b4u;
    // NOP
    // 0x32f9b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x32f9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x32f9bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32f9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f9c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9c4: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x32f9c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32f9c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x32f9c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x32f9cc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f9ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f9d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x32f9d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32f9d4: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x32f9d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x32f9d8: 0x4bc30844  vsubx.xyz   $vf1, $vf1, $vf3x
    ctx->pc = 0x32f9d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f9dc: 0x4bc3003c  vaddax.xyz  $ACC, $vf0, $vf3x
    ctx->pc = 0x32f9dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f9e0: 0x4bc20848  vmaddx.xyz  $vf1, $vf1, $vf2x
    ctx->pc = 0x32f9e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f9e4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32f9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32f9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32F9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F9F0u;
    // 0x32f9f0: 0xc781962c  lwc1        $f1, -0x69D4($gp)
    ctx->pc = 0x32f9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32f9f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f9f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9f8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x32f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32f9fc: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x32f9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32fa00: 0xc7849630  lwc1        $f4, -0x69D0($gp)
    ctx->pc = 0x32fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32fa04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32fa04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32fa08: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x32fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32fa0c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x32fa0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x32fa10: 0xc7819634  lwc1        $f1, -0x69CC($gp)
    ctx->pc = 0x32fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32fa14: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x32fa14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32fa18: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x32fa18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32fa1c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x32fa1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x32fa20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x32fa20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x32fa24: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x32fa24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x32fa28: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32fa28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32fa2c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x32fa2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32fa30: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x32fa30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x32fa34: 0x4bc30844  vsubx.xyz   $vf1, $vf1, $vf3x
    ctx->pc = 0x32fa34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32fa38: 0x4bc3003c  vaddax.xyz  $ACC, $vf0, $vf3x
    ctx->pc = 0x32fa38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32fa3c: 0x4bc20848  vmaddx.xyz  $vf1, $vf1, $vf2x
    ctx->pc = 0x32fa3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32fa40: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32fa44: 0x3e00008  jr          $ra
    ctx->pc = 0x32FA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FA4Cu;
    // 0x32fa4c: 0x0  nop
    ctx->pc = 0x32fa4cu;
    // NOP
    ctx->pc = 0x32fa50u;
}
