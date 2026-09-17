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

// Function: sub_00300590
// Address: 0x300590 - 0x3006e8
void sub_00300590_0x300590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300590_0x300590");
#endif

    ctx->pc = 0x300590u;

    // 0x300590: 0x8cc70118  lw          $a3, 0x118($a2)
    ctx->pc = 0x300590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 280)));
    // 0x300594: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x300594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x300598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x300598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30059c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x30059cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3005a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3005a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3005a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3005a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3005a8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3005a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3005ac: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x3005acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3005b0: 0x10e0004a  beqz        $a3, . + 4 + (0x4A << 2)
    ctx->pc = 0x3005B0u;
    {
        const bool branch_taken_0x3005b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3005B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005B0u;
        // 0x3005b4: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005b0) {
            ctx->pc = 0x3006DCu;
            goto label_3006dc;
        }
    }
    ctx->pc = 0x3005B8u;
    // 0x3005b8: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x3005b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3005bc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3005bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3005c0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x3005c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3005c4: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x3005c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3005c8: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x3005c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3005cc: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x3005ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3005d0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x3005d0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3005d4: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x3005d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3005d8: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x3005d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3005dc: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x3005dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3005e0: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x3005e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3005e4: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x3005e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3005e8: 0x8cc4011c  lw          $a0, 0x11C($a2)
    ctx->pc = 0x3005e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
    // 0x3005ec: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3005ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3005f0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3005f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3005f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3005f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3005f8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3005f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3005fc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x3005fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x300600: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x300600u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x300604: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x300604u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x300608: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x300608u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x30060c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x30060cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300610: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x300610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300614: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x300614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300618: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x300618u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30061c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x30061cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x300620: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x300620u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x300624: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x300624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300628: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x300628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30062c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x30062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x300630: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x300630u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x300634: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x300634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300638: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x300638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30063c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x30063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300640: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x300640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x300644: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x300644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x300648: 0x46021981  sub.s       $f6, $f3, $f2
    ctx->pc = 0x300648u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x30064c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x30064cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x300650: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x300650u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x300654: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x300654u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x300658: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x300658u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x30065c: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x30065cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x300660: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x300660u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x300664: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x300664u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x300668: 0x4606301e  madda.s     $f6, $f6
    ctx->pc = 0x300668u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[6])));
    // 0x30066c: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x30066cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x300670: 0x46020084  c1          0x20084
    ctx->pc = 0x300670u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x300674: 0xc4c10150  lwc1        $f1, 0x150($a2)
    ctx->pc = 0x300674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x300678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30067c: 0x46011141  sub.s       $f5, $f2, $f1
    ctx->pc = 0x30067cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x300680: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x300680u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300684: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x300684u;
    {
        const bool branch_taken_0x300684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300684) {
            ctx->pc = 0x3006DCu;
            goto label_3006dc;
        }
    }
    ctx->pc = 0x30068Cu;
    // 0x30068c: 0xc4c00154  lwc1        $f0, 0x154($a2)
    ctx->pc = 0x30068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300690: 0xc7819558  lwc1        $f1, -0x6AA8($gp)
    ctx->pc = 0x300690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300694: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x300694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x300698: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x300698u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x30069c: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x30069cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3006a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3006A0u;
    {
        const bool branch_taken_0x3006a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3006a0) {
            ctx->pc = 0x3006A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3006A0u;
            // 0x3006a4: 0x46003946  mov.s       $f5, $f7 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3006A8u;
            goto label_3006a8;
        }
    }
    ctx->pc = 0x3006A8u;
label_3006a8:
    // 0x3006a8: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x3006a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3006ac: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x3006acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3006b0: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x3006b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3006b4: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3006b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3006b8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x3006b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x3006bc: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x3006bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3006c0: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x3006c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x3006c4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3006c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3006c8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3006c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3006cc: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x3006ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3006d0: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x3006d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x3006d4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x3006d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3006d8: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x3006d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_3006dc:
    // 0x3006dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3006DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3006E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006DCu;
        // 0x3006e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3006DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3006E4u;
    // 0x3006e4: 0x0  nop
    ctx->pc = 0x3006e4u;
    // NOP
    ctx->pc = 0x3006e8u;
}
