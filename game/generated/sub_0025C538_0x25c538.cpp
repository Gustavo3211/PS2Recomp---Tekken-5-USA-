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

// Function: sub_0025C538
// Address: 0x25c538 - 0x25c610
void sub_0025C538_0x25c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C538_0x25c538");
#endif

    ctx->pc = 0x25c538u;

    // 0x25c538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c53c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x25c53cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c540: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x25c540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c544: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x25c544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25c548: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x25c548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25c54c: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x25c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25c550: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x25c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25c554: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x25c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c558: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x25c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c55c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x25c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c560: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x25c560u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x25c564: 0x4602381e  madda.s     $f7, $f2
    ctx->pc = 0x25c564u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[7], ctx->f[2])));
    // 0x25c568: 0x4601301e  madda.s     $f6, $f1
    ctx->pc = 0x25c568u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[1])));
    // 0x25c56c: 0x460028dc  madd.s      $f3, $f5, $f0
    ctx->pc = 0x25c56cu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[0]));
    // 0x25c570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c574: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25c574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25c578: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25c578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25c57c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x25c57cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c580: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25C580u;
    {
        const bool branch_taken_0x25c580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C580u;
        // 0x25c584: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c580) {
            ctx->pc = 0x25C590u;
            goto label_25c590;
        }
    }
    ctx->pc = 0x25C588u;
    // 0x25c588: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x25c588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x25c58c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25c58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25c590:
    // 0x25c590: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x25c590u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x25c594: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x25c594u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25c598: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25c598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25c59c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25c59cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c5a0: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25c5a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25c5a4: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25c5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25c5a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25c5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25c5ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c5b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x25c5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5b4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x25c5b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5b8: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x25c5b8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c5bc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x25c5bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x25c5c0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x25c5c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x25c5c4: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x25c5c4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c5c8: 0x4be0803c  vaddax.xyzw $ACC, $vf16, $vf0x
    ctx->pc = 0x25c5c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25c5cc: 0x4be1fc08  vmaddx.xyzw $vf16, $vf31, $vf1x
    ctx->pc = 0x25c5ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25c5d0: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25c5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25c5d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c5d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c5d8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x25c5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c5dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25c5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25c5e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25c5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25c5e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25c5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c5e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25C5E8u;
    {
        const bool branch_taken_0x25c5e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5E8u;
        // 0x25c5ec: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5e8) {
            ctx->pc = 0x25C604u;
            goto label_25c604;
        }
    }
    ctx->pc = 0x25C5F0u;
    // 0x25c5f0: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25c5f0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c5f4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x25c5f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25c5f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25c5f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c5fc: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25c5fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25c600: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25c600u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_25c604:
    // 0x25c604: 0x3e00008  jr          $ra
    ctx->pc = 0x25C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C604u;
        // 0x25c608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C60Cu;
    // 0x25c60c: 0x0  nop
    ctx->pc = 0x25c60cu;
    // NOP
    ctx->pc = 0x25c610u;
}
