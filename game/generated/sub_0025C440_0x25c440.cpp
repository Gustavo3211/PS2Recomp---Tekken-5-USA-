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

// Function: sub_0025C440
// Address: 0x25c440 - 0x25c538
void sub_0025C440_0x25c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C440_0x25c440");
#endif

    ctx->pc = 0x25c440u;

    // 0x25c440: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x25c440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x25c444: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c448: 0xc7818b1c  lwc1        $f1, -0x74E4($gp)
    ctx->pc = 0x25c448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c44c: 0x46096001  sub.s       $f0, $f12, $f9
    ctx->pc = 0x25c44cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[9]);
    // 0x25c450: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25c450u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25c454: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25c454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c458: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25C458u;
    {
        const bool branch_taken_0x25c458 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C458u;
        // 0x25c45c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c458) {
            ctx->pc = 0x25C470u;
            goto label_25c470;
        }
    }
    ctx->pc = 0x25C460u;
    // 0x25c460: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x25c460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c464: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x25C464u;
    {
        const bool branch_taken_0x25c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C464u;
        // 0x25c468: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c464) {
            ctx->pc = 0x25C52Cu;
            goto label_25c52c;
        }
    }
    ctx->pc = 0x25C46Cu;
    // 0x25c46c: 0x0  nop
    ctx->pc = 0x25c46cu;
    // NOP
label_25c470:
    // 0x25c470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c478: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x25c478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c47c: 0x460c0201  sub.s       $f8, $f0, $f12
    ctx->pc = 0x25c47cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x25c480: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x25c480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c484: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x25c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25c488: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x25c488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25c48c: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x25c48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25c490: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x25c490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25c494: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x25c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c498: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x25c498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c49c: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x25c49cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x25c4a0: 0x4602381e  madda.s     $f7, $f2
    ctx->pc = 0x25c4a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[7], ctx->f[2])));
    // 0x25c4a4: 0x4601301e  madda.s     $f6, $f1
    ctx->pc = 0x25c4a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[1])));
    // 0x25c4a8: 0x460028dc  madd.s      $f3, $f5, $f0
    ctx->pc = 0x25c4a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[0]));
    // 0x25c4ac: 0x46091834  c.lt.s      $f3, $f9
    ctx->pc = 0x25c4acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c4b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25C4B0u;
    {
        const bool branch_taken_0x25c4b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4B0u;
        // 0x25c4b4: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4b0) {
            ctx->pc = 0x25C4BCu;
            goto label_25c4bc;
        }
    }
    ctx->pc = 0x25C4B8u;
    // 0x25c4b8: 0x46004207  neg.s       $f8, $f8
    ctx->pc = 0x25c4b8u;
    ctx->f[8] = FPU_NEG_S(ctx->f[8]);
label_25c4bc:
    // 0x25c4bc: 0x46004006  mov.s       $f0, $f8
    ctx->pc = 0x25c4bcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[8]);
    // 0x25c4c0: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x25c4c0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c4c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25c4c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25c4c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25c4c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c4cc: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25c4ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25c4d0: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25c4d4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x25c4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4d8: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x25c4d8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x25c4dc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x25c4dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c4e0: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x25c4e0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c4e4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x25c4e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x25c4e8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x25c4e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x25c4ec: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x25c4ecu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c4f0: 0x4be0803c  vaddax.xyzw $ACC, $vf16, $vf0x
    ctx->pc = 0x25c4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25c4f4: 0x4be1fc08  vmaddx.xyzw $vf16, $vf31, $vf1x
    ctx->pc = 0x25c4f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25c4f8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25c4fc: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x25c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c500: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c504: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25c504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25c508: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25c508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25c50c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25c50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c510: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25C510u;
    {
        const bool branch_taken_0x25c510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C510u;
        // 0x25c514: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c510) {
            ctx->pc = 0x25C52Cu;
            goto label_25c52c;
        }
    }
    ctx->pc = 0x25C518u;
    // 0x25c518: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25c518u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c51c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x25c51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25c520: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25c520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c524: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25c524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25c528: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25c528u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_25c52c:
    // 0x25c52c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C52Cu;
        // 0x25c530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C534u;
    // 0x25c534: 0x0  nop
    ctx->pc = 0x25c534u;
    // NOP
    ctx->pc = 0x25c538u;
}
