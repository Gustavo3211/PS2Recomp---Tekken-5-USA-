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

// Function: sub_0032F120
// Address: 0x32f120 - 0x32f680
void sub_0032F120_0x32f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F120_0x32f120");
#endif

    ctx->pc = 0x32f120u;

    // 0x32f120: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f124: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f124u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f128: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x32f128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f12c: 0x4a2201bc  vmulax.w    $ACC, $vf0, $vf2x
    ctx->pc = 0x32f12cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f130: 0x4a2200bd  vmadday.w   $ACC, $vf0, $vf2y
    ctx->pc = 0x32f130u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f134: 0x4a2200be  vmaddaz.w   $ACC, $vf0, $vf2z
    ctx->pc = 0x32f134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f138: 0x4a22008b  vmaddw.w    $vf2, $vf0, $vf2w
    ctx->pc = 0x32f138u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f13c: 0x4be203be  vrsqrt      $Q, $vf0w, $vf2w
    ctx->pc = 0x32f13cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x32f140: 0x4a0003bf  vwaitq
    ctx->pc = 0x32f140u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x32f144: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x32f144u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f148: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32f148u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32f14c: 0x3e00008  jr          $ra
    ctx->pc = 0x32F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F154u;
    // 0x32f154: 0x0  nop
    ctx->pc = 0x32f154u;
    // NOP
    // 0x32f158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32f158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32f15c: 0xfbbc0000  sqc2        $vf28, 0x0($sp)
    ctx->pc = 0x32f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32f160: 0xfbbd0010  sqc2        $vf29, 0x10($sp)
    ctx->pc = 0x32f160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32f164: 0xfbbe0020  sqc2        $vf30, 0x20($sp)
    ctx->pc = 0x32f164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32f168: 0xfbbf0030  sqc2        $vf31, 0x30($sp)
    ctx->pc = 0x32f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32f16c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x32f16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32f170: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x32f170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32f174: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x32f174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32f178: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x32f178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x32f17c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32f17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32f180: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x32f180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x32f184: 0xc7819624  lwc1        $f1, -0x69DC($gp)
    ctx->pc = 0x32f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32f188: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x32f188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x32f18c: 0x46060140  add.s       $f5, $f0, $f6
    ctx->pc = 0x32f18cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x32f190: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x32f190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32f194: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x32F194u;
    {
        const bool branch_taken_0x32f194 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f194) {
            ctx->pc = 0x32F1F0u;
            goto label_32f1f0;
        }
    }
    ctx->pc = 0x32F19Cu;
    // 0x32f19c: 0x46050044  c1          0x50044
    ctx->pc = 0x32f19cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x32f1a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x32f1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x32f1a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32f1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f1a8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x32f1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x32f1ac: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x32f1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x32f1b0: 0x46000a42  mul.s       $f9, $f1, $f0
    ctx->pc = 0x32f1b0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32f1b4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x32f1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32f1b8: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x32f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32f1bc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x32f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32f1c0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x32f1c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x32f1c4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x32f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32f1c8: 0x0  nop
    ctx->pc = 0x32f1c8u;
    // NOP
    // 0x32f1cc: 0x0  nop
    ctx->pc = 0x32f1ccu;
    // NOP
    // 0x32f1d0: 0x46092943  div.s       $f5, $f5, $f9
    ctx->pc = 0x32f1d0u;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[9];
    // 0x32f1d4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x32f1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32f1d8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x32f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32f1dc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x32f1dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x32f1e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32f1e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32f1e4: 0x46051a02  mul.s       $f8, $f3, $f5
    ctx->pc = 0x32f1e4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x32f1e8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x32F1E8u;
    {
        const bool branch_taken_0x32f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F1E8u;
        // 0x32f1ec: 0x46050182  mul.s       $f6, $f0, $f5 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f1e8) {
            ctx->pc = 0x32F330u;
            goto label_32f330;
        }
    }
    ctx->pc = 0x32F1F0u;
label_32f1f0:
    // 0x32f1f0: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x32f1f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32f1f4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x32F1F4u;
    {
        const bool branch_taken_0x32f1f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f1f4) {
            ctx->pc = 0x32F268u;
            goto label_32f268;
        }
    }
    ctx->pc = 0x32F1FCu;
    // 0x32f1fc: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x32f1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32f200: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
    ctx->pc = 0x32F200u;
    {
        const bool branch_taken_0x32f200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f200) {
            ctx->pc = 0x32F204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F200u;
            // 0x32f204: 0x46061000  add.s       $f0, $f2, $f6 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F2D8u;
            goto label_32f2d8;
        }
    }
    ctx->pc = 0x32F208u;
    // 0x32f208: 0x46061800  add.s       $f0, $f3, $f6
    ctx->pc = 0x32f208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x32f20c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x32f20cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x32f210: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x32f210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x32f214: 0x46000004  c1          0x4
    ctx->pc = 0x32f214u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x32f218: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x32f218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x32f21c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32f21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32f220: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x32f220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x32f224: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x32f224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x32f228: 0x46010202  mul.s       $f8, $f0, $f1
    ctx->pc = 0x32f228u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32f22c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x32f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32f230: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x32f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32f234: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x32f234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32f238: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x32f238u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x32f23c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x32f23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32f240: 0x0  nop
    ctx->pc = 0x32f240u;
    // NOP
    // 0x32f244: 0x0  nop
    ctx->pc = 0x32f244u;
    // NOP
    // 0x32f248: 0x46082943  div.s       $f5, $f5, $f8
    ctx->pc = 0x32f248u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[8];
    // 0x32f24c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x32f24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32f250: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x32f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32f254: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x32f254u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x32f258: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32f258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32f25c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x32F25Cu;
    {
        const bool branch_taken_0x32f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F25Cu;
        // 0x32f260: 0x460519c2  mul.s       $f7, $f3, $f5 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f25c) {
            ctx->pc = 0x32F2CCu;
            goto label_32f2cc;
        }
    }
    ctx->pc = 0x32F264u;
    // 0x32f264: 0x0  nop
    ctx->pc = 0x32f264u;
    // NOP
label_32f268:
    // 0x32f268: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x32f268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32f26c: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x32F26Cu;
    {
        const bool branch_taken_0x32f26c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f26c) {
            ctx->pc = 0x32F270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F26Cu;
            // 0x32f270: 0x46061000  add.s       $f0, $f2, $f6 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F2D8u;
            goto label_32f2d8;
        }
    }
    ctx->pc = 0x32F274u;
    // 0x32f274: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x32f274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x32f278: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x32f278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x32f27c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x32f27cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x32f280: 0x46000004  c1          0x4
    ctx->pc = 0x32f280u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x32f284: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x32f284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x32f288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32f288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32f28c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x32f28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x32f290: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x32f290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x32f294: 0x460101c2  mul.s       $f7, $f0, $f1
    ctx->pc = 0x32f294u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32f298: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x32f298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32f29c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x32f29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32f2a0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x32f2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32f2a4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x32f2a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x32f2a8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x32f2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32f2ac: 0x0  nop
    ctx->pc = 0x32f2acu;
    // NOP
    // 0x32f2b0: 0x0  nop
    ctx->pc = 0x32f2b0u;
    // NOP
    // 0x32f2b4: 0x46072943  div.s       $f5, $f5, $f7
    ctx->pc = 0x32f2b4u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[7];
    // 0x32f2b8: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x32f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32f2bc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x32f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32f2c0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x32f2c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x32f2c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32f2c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32f2c8: 0x46051a02  mul.s       $f8, $f3, $f5
    ctx->pc = 0x32f2c8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_32f2cc:
    // 0x32f2cc: 0x46050242  mul.s       $f9, $f0, $f5
    ctx->pc = 0x32f2ccu;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x32f2d0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x32F2D0u;
    {
        const bool branch_taken_0x32f2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F2D0u;
        // 0x32f2d4: 0x46051182  mul.s       $f6, $f2, $f5 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f2d0) {
            ctx->pc = 0x32F334u;
            goto label_32f334;
        }
    }
    ctx->pc = 0x32F2D8u;
label_32f2d8:
    // 0x32f2d8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x32f2d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x32f2dc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x32f2dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x32f2e0: 0x46000004  c1          0x4
    ctx->pc = 0x32f2e0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x32f2e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x32f2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x32f2e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32f2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32f2ec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x32f2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x32f2f0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x32f2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x32f2f4: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x32f2f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32f2f8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x32f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32f2fc: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x32f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32f300: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x32f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32f304: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x32f304u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x32f308: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x32f308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32f30c: 0x0  nop
    ctx->pc = 0x32f30cu;
    // NOP
    // 0x32f310: 0x0  nop
    ctx->pc = 0x32f310u;
    // NOP
    // 0x32f314: 0x46062943  div.s       $f5, $f5, $f6
    ctx->pc = 0x32f314u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[6];
    // 0x32f318: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x32f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32f31c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x32f31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32f320: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x32f320u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x32f324: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32f324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32f328: 0x46051a02  mul.s       $f8, $f3, $f5
    ctx->pc = 0x32f328u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x32f32c: 0x46050242  mul.s       $f9, $f0, $f5
    ctx->pc = 0x32f32cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_32f330:
    // 0x32f330: 0x460511c2  mul.s       $f7, $f2, $f5
    ctx->pc = 0x32f330u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_32f334:
    // 0x32f334: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f338: 0xe4880000  swc1        $f8, 0x0($a0)
    ctx->pc = 0x32f338u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32f33c: 0xe4870004  swc1        $f7, 0x4($a0)
    ctx->pc = 0x32f33cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x32f340: 0xe4860008  swc1        $f6, 0x8($a0)
    ctx->pc = 0x32f340u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x32f344: 0xe489000c  swc1        $f9, 0xC($a0)
    ctx->pc = 0x32f344u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x32f348: 0x3e00008  jr          $ra
    ctx->pc = 0x32F348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F348u;
        // 0x32f34c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F350u;
    // 0x32f350: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x32f350u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x32f354: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x32f354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f358: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x32f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x32f35c: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x32f35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x32f360: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x32f360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x32f364: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32f364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32f368: 0x46400  sll         $t4, $a0, 16
    ctx->pc = 0x32f368u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f36c: 0x30e43fff  andi        $a0, $a3, 0x3FFF
    ctx->pc = 0x32f36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x32f370: 0x24400  sll         $t0, $v0, 16
    ctx->pc = 0x32f370u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f374: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F374u;
    {
        const bool branch_taken_0x32f374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F374u;
        // 0x32f378: 0x30eb4000  andi        $t3, $a3, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f374) {
            ctx->pc = 0x32F384u;
            goto label_32f384;
        }
    }
    ctx->pc = 0x32F37Cu;
    // 0x32f37c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f380: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32f380u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32f384:
    // 0x32f384: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32f384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32f388: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32f388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f38c: 0x244a0340  addiu       $t2, $v0, 0x340
    ctx->pc = 0x32f38cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x32f390: 0x30e43fff  andi        $a0, $a3, 0x3FFF
    ctx->pc = 0x32f390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x32f394: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x32f394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x32f398: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32f39c: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F39Cu;
    {
        const bool branch_taken_0x32f39c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F39Cu;
        // 0x32f3a0: 0x484025  or          $t0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f39c) {
            ctx->pc = 0x32F3ACu;
            goto label_32f3ac;
        }
    }
    ctx->pc = 0x32F3A4u;
    // 0x32f3a4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f3a8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32f3ac:
    // 0x32f3ac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f3b0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x32f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x32f3b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32f3b8: 0x8c1825  or          $v1, $a0, $t4
    ctx->pc = 0x32f3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x32f3bc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f3bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f3c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x32f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32f3c4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x32f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32f3c8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x32f3c8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32f3cc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x32f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32f3d0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32f3d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32f3d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x32f3d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x32f3d8: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x32f3d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x32f3dc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x32f3dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32f3e0: 0x4a221b3d  vmr32.w     $vf2, $vf3
    ctx->pc = 0x32f3e0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f3e4: 0x4bc41098  vmulx.xyz   $vf2, $vf2, $vf4x
    ctx->pc = 0x32f3e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f3e8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x32f3e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f3ec: 0x4bc110ee  vopmsub.xyz $vf3, $vf2, $vf1
    ctx->pc = 0x32f3ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f3f0: 0x4bc2092a  vmul.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x32f3f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x32f3f4: 0x4a220abe  vmula.w     $ACC, $vf1, $vf2
    ctx->pc = 0x32f3f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f3f8: 0x4a2400fc  vmsubax.w   $ACC, $vf0, $vf4x
    ctx->pc = 0x32f3f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f3fc: 0x4a2400fd  vmsubay.w   $ACC, $vf0, $vf4y
    ctx->pc = 0x32f3fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f400: 0x4a2400ce  vmsubz.w    $vf3, $vf0, $vf4z
    ctx->pc = 0x32f400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f404: 0x4bc01abc  vadda.xyz   $ACC, $vf0, $vf3
    ctx->pc = 0x32f404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f408: 0x4bc208bf  vmaddaw.xyz $ACC, $vf1, $vf2w
    ctx->pc = 0x32f408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f40c: 0x4bc110cb  vmaddw.xyz  $vf3, $vf2, $vf1w
    ctx->pc = 0x32f40cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f410: 0xf9230000  sqc2        $vf3, 0x0($t1)
    ctx->pc = 0x32f410u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x32f414: 0x3e00008  jr          $ra
    ctx->pc = 0x32F414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F414u;
        // 0x32f418: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F41Cu;
    // 0x32f41c: 0x0  nop
    ctx->pc = 0x32f41cu;
    // NOP
    // 0x32f420: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x32f420u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x32f424: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x32f424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f428: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x32f428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x32f42c: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x32f42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x32f430: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x32f430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x32f434: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32f434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32f438: 0x45c00  sll         $t3, $a0, 16
    ctx->pc = 0x32f438u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f43c: 0x30c43fff  andi        $a0, $a2, 0x3FFF
    ctx->pc = 0x32f43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x32f440: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x32f440u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f444: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F444u;
    {
        const bool branch_taken_0x32f444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F444u;
        // 0x32f448: 0x30ca4000  andi        $t2, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f444) {
            ctx->pc = 0x32F454u;
            goto label_32f454;
        }
    }
    ctx->pc = 0x32F44Cu;
    // 0x32f44c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f450: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32f450u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32f454:
    // 0x32f454: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32f454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32f458: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32f458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f45c: 0x24490340  addiu       $t1, $v0, 0x340
    ctx->pc = 0x32f45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x32f460: 0x30c43fff  andi        $a0, $a2, 0x3FFF
    ctx->pc = 0x32f460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x32f464: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x32f464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x32f468: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32f46c: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F46Cu;
    {
        const bool branch_taken_0x32f46c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F46Cu;
        // 0x32f470: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f46c) {
            ctx->pc = 0x32F47Cu;
            goto label_32f47c;
        }
    }
    ctx->pc = 0x32F474u;
    // 0x32f474: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f478: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32f478u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32f47c:
    // 0x32f47c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f480: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x32f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x32f484: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32f484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32f488: 0x8b1825  or          $v1, $a0, $t3
    ctx->pc = 0x32f488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x32f48c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f48cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f490: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x32f490u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32f494: 0x48a71800  qmtc2.ni    $a3, $vf3
    ctx->pc = 0x32f494u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x32f498: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x32f498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32f49c: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x32f49cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f4a0: 0x4a221b3d  vmr32.w     $vf2, $vf3
    ctx->pc = 0x32f4a0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f4a4: 0x4bc41098  vmulx.xyz   $vf2, $vf2, $vf4x
    ctx->pc = 0x32f4a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f4a8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x32f4a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f4ac: 0x4bc110ee  vopmsub.xyz $vf3, $vf2, $vf1
    ctx->pc = 0x32f4acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f4b0: 0x4bc2092a  vmul.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x32f4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x32f4b4: 0x4a220abe  vmula.w     $ACC, $vf1, $vf2
    ctx->pc = 0x32f4b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f4b8: 0x4a2400fc  vmsubax.w   $ACC, $vf0, $vf4x
    ctx->pc = 0x32f4b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f4bc: 0x4a2400fd  vmsubay.w   $ACC, $vf0, $vf4y
    ctx->pc = 0x32f4bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f4c0: 0x4a2400ce  vmsubz.w    $vf3, $vf0, $vf4z
    ctx->pc = 0x32f4c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f4c4: 0x4bc01abc  vadda.xyz   $ACC, $vf0, $vf3
    ctx->pc = 0x32f4c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f4c8: 0x4bc208bf  vmaddaw.xyz $ACC, $vf1, $vf2w
    ctx->pc = 0x32f4c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f4cc: 0x4bc110cb  vmaddw.xyz  $vf3, $vf2, $vf1w
    ctx->pc = 0x32f4ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f4d0: 0xf9030000  sqc2        $vf3, 0x0($t0)
    ctx->pc = 0x32f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x32f4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x32F4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F4D4u;
        // 0x32f4d8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F4DCu;
    // 0x32f4dc: 0x0  nop
    ctx->pc = 0x32f4dcu;
    // NOP
    // 0x32f4e0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x32f4e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x32f4e4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x32f4e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f4e8: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x32f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x32f4ec: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x32f4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x32f4f0: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x32f4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x32f4f4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32f4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32f4f8: 0x45c00  sll         $t3, $a0, 16
    ctx->pc = 0x32f4f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f4fc: 0x30c43fff  andi        $a0, $a2, 0x3FFF
    ctx->pc = 0x32f4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x32f500: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x32f500u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f504: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F504u;
    {
        const bool branch_taken_0x32f504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F504u;
        // 0x32f508: 0x30ca4000  andi        $t2, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f504) {
            ctx->pc = 0x32F514u;
            goto label_32f514;
        }
    }
    ctx->pc = 0x32F50Cu;
    // 0x32f50c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f510: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32f510u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32f514:
    // 0x32f514: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32f518: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32f518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f51c: 0x24490340  addiu       $t1, $v0, 0x340
    ctx->pc = 0x32f51cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x32f520: 0x30c43fff  andi        $a0, $a2, 0x3FFF
    ctx->pc = 0x32f520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x32f524: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x32f524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x32f528: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32f52c: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F52Cu;
    {
        const bool branch_taken_0x32f52c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F52Cu;
        // 0x32f530: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f52c) {
            ctx->pc = 0x32F53Cu;
            goto label_32f53c;
        }
    }
    ctx->pc = 0x32F534u;
    // 0x32f534: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f538: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32f538u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32f53c:
    // 0x32f53c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f540: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x32f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x32f544: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32f548: 0x8b1825  or          $v1, $a0, $t3
    ctx->pc = 0x32f548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x32f54c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f54cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f550: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x32f550u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32f554: 0x48a71800  qmtc2.ni    $a3, $vf3
    ctx->pc = 0x32f554u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x32f558: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x32f558u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32f55c: 0x4a800083  vaddw.y     $vf2, $vf0, $vf0w
    ctx->pc = 0x32f55cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f560: 0x4a221b3d  vmr32.w     $vf2, $vf3
    ctx->pc = 0x32f560u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f564: 0x4bc41098  vmulx.xyz   $vf2, $vf2, $vf4x
    ctx->pc = 0x32f564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f568: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x32f568u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f56c: 0x4bc110ee  vopmsub.xyz $vf3, $vf2, $vf1
    ctx->pc = 0x32f56cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f570: 0x4bc2092a  vmul.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x32f570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x32f574: 0x4a220abe  vmula.w     $ACC, $vf1, $vf2
    ctx->pc = 0x32f574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f578: 0x4a2400fc  vmsubax.w   $ACC, $vf0, $vf4x
    ctx->pc = 0x32f578u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f57c: 0x4a2400fd  vmsubay.w   $ACC, $vf0, $vf4y
    ctx->pc = 0x32f57cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f580: 0x4a2400ce  vmsubz.w    $vf3, $vf0, $vf4z
    ctx->pc = 0x32f580u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f584: 0x4bc01abc  vadda.xyz   $ACC, $vf0, $vf3
    ctx->pc = 0x32f584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f588: 0x4bc208bf  vmaddaw.xyz $ACC, $vf1, $vf2w
    ctx->pc = 0x32f588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f58c: 0x4bc110cb  vmaddw.xyz  $vf3, $vf2, $vf1w
    ctx->pc = 0x32f58cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f590: 0xf9030000  sqc2        $vf3, 0x0($t0)
    ctx->pc = 0x32f590u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x32f594: 0x3e00008  jr          $ra
    ctx->pc = 0x32F594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F594u;
        // 0x32f598: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F59Cu;
    // 0x32f59c: 0x0  nop
    ctx->pc = 0x32f59cu;
    // NOP
    // 0x32f5a0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x32f5a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x32f5a4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x32f5a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f5a8: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x32f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x32f5ac: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x32f5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x32f5b0: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x32f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x32f5b4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32f5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32f5b8: 0x45c00  sll         $t3, $a0, 16
    ctx->pc = 0x32f5b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f5bc: 0x30c43fff  andi        $a0, $a2, 0x3FFF
    ctx->pc = 0x32f5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x32f5c0: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x32f5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f5c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F5C4u;
    {
        const bool branch_taken_0x32f5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5C4u;
        // 0x32f5c8: 0x30ca4000  andi        $t2, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f5c4) {
            ctx->pc = 0x32F5D4u;
            goto label_32f5d4;
        }
    }
    ctx->pc = 0x32F5CCu;
    // 0x32f5cc: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f5d0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32f5d4:
    // 0x32f5d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32f5d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f5dc: 0x24490340  addiu       $t1, $v0, 0x340
    ctx->pc = 0x32f5dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x32f5e0: 0x30c43fff  andi        $a0, $a2, 0x3FFF
    ctx->pc = 0x32f5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x32f5e4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x32f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x32f5e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32f5ec: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F5ECu;
    {
        const bool branch_taken_0x32f5ec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5ECu;
        // 0x32f5f0: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f5ec) {
            ctx->pc = 0x32F5FCu;
            goto label_32f5fc;
        }
    }
    ctx->pc = 0x32F5F4u;
    // 0x32f5f4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f5f8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32f5fc:
    // 0x32f5fc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f600: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x32f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x32f604: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32f604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32f608: 0x8b1825  or          $v1, $a0, $t3
    ctx->pc = 0x32f608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x32f60c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f60cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f610: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x32f610u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32f614: 0x48a71800  qmtc2.ni    $a3, $vf3
    ctx->pc = 0x32f614u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x32f618: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x32f618u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32f61c: 0x4a400083  vaddw.z     $vf2, $vf0, $vf0w
    ctx->pc = 0x32f61cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f620: 0x4a221b3d  vmr32.w     $vf2, $vf3
    ctx->pc = 0x32f620u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f624: 0x4bc41098  vmulx.xyz   $vf2, $vf2, $vf4x
    ctx->pc = 0x32f624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f628: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x32f628u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f62c: 0x4bc110ee  vopmsub.xyz $vf3, $vf2, $vf1
    ctx->pc = 0x32f62cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f630: 0x4bc2092a  vmul.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x32f630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x32f634: 0x4a220abe  vmula.w     $ACC, $vf1, $vf2
    ctx->pc = 0x32f634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f638: 0x4a2400fc  vmsubax.w   $ACC, $vf0, $vf4x
    ctx->pc = 0x32f638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f63c: 0x4a2400fd  vmsubay.w   $ACC, $vf0, $vf4y
    ctx->pc = 0x32f63cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x32f640: 0x4a2400ce  vmsubz.w    $vf3, $vf0, $vf4z
    ctx->pc = 0x32f640u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f644: 0x4bc01abc  vadda.xyz   $ACC, $vf0, $vf3
    ctx->pc = 0x32f644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f648: 0x4bc208bf  vmaddaw.xyz $ACC, $vf1, $vf2w
    ctx->pc = 0x32f648u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32f64c: 0x4bc110cb  vmaddw.xyz  $vf3, $vf2, $vf1w
    ctx->pc = 0x32f64cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32f650: 0xf9030000  sqc2        $vf3, 0x0($t0)
    ctx->pc = 0x32f650u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x32f654: 0x3e00008  jr          $ra
    ctx->pc = 0x32F654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F654u;
        // 0x32f658: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F65Cu;
    // 0x32f65c: 0x0  nop
    ctx->pc = 0x32f65cu;
    // NOP
    // 0x32f660: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f664: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x32f664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32f668: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f668u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f66c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x32f66cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32f670: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x32f670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f674: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32f674u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32f678: 0x3e00008  jr          $ra
    ctx->pc = 0x32F678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F680u;
}
