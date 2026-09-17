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

// Function: sub_0025B848
// Address: 0x25b848 - 0x25b9b8
void sub_0025B848_0x25b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B848_0x25b848");
#endif

    switch (ctx->pc) {
        case 0x25b898u: goto label_25b898;
        case 0x25b8f4u: goto label_25b8f4;
        case 0x25b968u: goto label_25b968;
        default: break;
    }

    ctx->pc = 0x25b848u;

    // 0x25b848: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b84c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25b84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25b850: 0xe482003c  swc1        $f2, 0x3C($a0)
    ctx->pc = 0x25b850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x25b854: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25b854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b85c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25b85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b860: 0xc7808afc  lwc1        $f0, -0x7504($gp)
    ctx->pc = 0x25b860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b864: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25B864u;
    {
        const bool branch_taken_0x25b864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b864) {
            ctx->pc = 0x25B878u;
            goto label_25b878;
        }
    }
    ctx->pc = 0x25B86Cu;
    // 0x25b86c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25b86cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25b870: 0x8096e20  j           func_25B880
    ctx->pc = 0x25B870u;
    ctx->pc = 0x25B874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B870u;
    // 0x25b874: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B880u;
    goto label_25b880;
    ctx->pc = 0x25B878u;
label_25b878:
    // 0x25b878: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x25b878u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25b87c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25b87cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b880:
    // 0x25b880: 0x4be004ec  vsub.xyzw   $vf19, $vf0, $vf0
    ctx->pc = 0x25b880u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x25b884: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x25b884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25b888: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x25b888u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25b88c: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x25b88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b890: 0xc096df4  jal         func_25B7D0
    ctx->pc = 0x25B890u;
    SET_GPR_U32(ctx, 31, 0x25B898u);
    ctx->pc = 0x25B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B7D0u, 0x25B890u, 0x25B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B898u;
label_25b898:
    // 0x25b898: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x25b898u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b89c: 0x4be79b3c  vmove.xyzw  $vf7, $vf19
    ctx->pc = 0x25b89cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25b8a0: 0x4be89b3c  vmove.xyzw  $vf8, $vf19
    ctx->pc = 0x25b8a0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25b8a4: 0x4a4499c0  vaddx.z     $vf7, $vf19, $vf4x
    ctx->pc = 0x25b8a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25b8a8: 0x4a8499c1  vaddy.y     $vf7, $vf19, $vf4y
    ctx->pc = 0x25b8a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25b8ac: 0x4a849a04  vsubx.y     $vf8, $vf19, $vf4x
    ctx->pc = 0x25b8acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x25b8b0: 0x4a449a01  vaddy.z     $vf8, $vf19, $vf4y
    ctx->pc = 0x25b8b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x25b8b4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x25b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b8b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b8bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25b8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b8c0: 0xc7808b00  lwc1        $f0, -0x7500($gp)
    ctx->pc = 0x25b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b8c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25B8C4u;
    {
        const bool branch_taken_0x25b8c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b8c4) {
            ctx->pc = 0x25B8D8u;
            goto label_25b8d8;
        }
    }
    ctx->pc = 0x25B8CCu;
    // 0x25b8cc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25b8ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25b8d0: 0x8096e38  j           func_25B8E0
    ctx->pc = 0x25B8D0u;
    ctx->pc = 0x25B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B8D0u;
    // 0x25b8d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8E0u;
    goto label_25b8e0;
    ctx->pc = 0x25B8D8u;
label_25b8d8:
    // 0x25b8d8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x25b8d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25b8dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25b8dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b8e0:
    // 0x25b8e0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x25b8e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25b8e4: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x25b8e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25b8e8: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x25b8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b8ec: 0xc096df4  jal         func_25B7D0
    ctx->pc = 0x25B8ECu;
    SET_GPR_U32(ctx, 31, 0x25B8F4u);
    ctx->pc = 0x25B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B7D0u, 0x25B8ECu, 0x25B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B8F4u;
label_25b8f4:
    // 0x25b8f4: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x25b8f4u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b8f8: 0x4be69b3c  vmove.xyzw  $vf6, $vf19
    ctx->pc = 0x25b8f8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25b8fc: 0x4beb9b3c  vmove.xyzw  $vf11, $vf19
    ctx->pc = 0x25b8fcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25b900: 0x4a449984  vsubx.z     $vf6, $vf19, $vf4x
    ctx->pc = 0x25b900u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25b904: 0x4b049981  vaddy.x     $vf6, $vf19, $vf4y
    ctx->pc = 0x25b904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25b908: 0x4b049ac0  vaddx.x     $vf11, $vf19, $vf4x
    ctx->pc = 0x25b908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x25b90c: 0x4a449ac1  vaddy.z     $vf11, $vf19, $vf4y
    ctx->pc = 0x25b90cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x25b910: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x25b910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b914: 0x4a8038bf  vmaddaw.y   $ACC, $vf7, $vf0w
    ctx->pc = 0x25b914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25b918: 0x4be759ca  vmaddz.xyzw $vf7, $vf11, $vf7z
    ctx->pc = 0x25b918u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25b91c: 0x4be849bc  vmulax.xyzw $ACC, $vf9, $vf8x
    ctx->pc = 0x25b91cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b920: 0x4a8040bf  vmaddaw.y   $ACC, $vf8, $vf0w
    ctx->pc = 0x25b920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25b924: 0x4be85a0a  vmaddz.xyzw $vf8, $vf11, $vf8z
    ctx->pc = 0x25b924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x25b928: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b92c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b92cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25b930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b934: 0xc7808b04  lwc1        $f0, -0x74FC($gp)
    ctx->pc = 0x25b934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b938: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25B938u;
    {
        const bool branch_taken_0x25b938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b938) {
            ctx->pc = 0x25B94Cu;
            goto label_25b94c;
        }
    }
    ctx->pc = 0x25B940u;
    // 0x25b940: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25b940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25b944: 0x8096e55  j           func_25B954
    ctx->pc = 0x25B944u;
    ctx->pc = 0x25B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B944u;
    // 0x25b948: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B954u;
    goto label_25b954;
    ctx->pc = 0x25B94Cu;
label_25b94c:
    // 0x25b94c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x25b94cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25b950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25b950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b954:
    // 0x25b954: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x25b954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25b958: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x25b958u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25b95c: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x25b95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b960: 0xc096df4  jal         func_25B7D0
    ctx->pc = 0x25B960u;
    SET_GPR_U32(ctx, 31, 0x25B968u);
    ctx->pc = 0x25B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B7D0u, 0x25B960u, 0x25B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B968u;
label_25b968:
    // 0x25b968: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x25b968u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b96c: 0x4be99b3c  vmove.xyzw  $vf9, $vf19
    ctx->pc = 0x25b96cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25b970: 0x4bea9b3c  vmove.xyzw  $vf10, $vf19
    ctx->pc = 0x25b970u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25b974: 0x4a849a40  vaddx.y     $vf9, $vf19, $vf4x
    ctx->pc = 0x25b974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x25b978: 0x4b049a41  vaddy.x     $vf9, $vf19, $vf4y
    ctx->pc = 0x25b978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x25b97c: 0x4b049a84  vsubx.x     $vf10, $vf19, $vf4x
    ctx->pc = 0x25b97cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x25b980: 0x4a849a81  vaddy.y     $vf10, $vf19, $vf4y
    ctx->pc = 0x25b980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x25b984: 0x4be649bc  vmulax.xyzw $ACC, $vf9, $vf6x
    ctx->pc = 0x25b984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b988: 0x4a4030bf  vmaddaw.z   $ACC, $vf6, $vf0w
    ctx->pc = 0x25b988u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x25b98c: 0x4be65189  vmaddy.xyzw $vf6, $vf10, $vf6y
    ctx->pc = 0x25b98cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25b990: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x25b990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b994: 0x4a4038bf  vmaddaw.z   $ACC, $vf7, $vf0w
    ctx->pc = 0x25b994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x25b998: 0x4be751c9  vmaddy.xyzw $vf7, $vf10, $vf7y
    ctx->pc = 0x25b998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25b99c: 0x4be849bc  vmulax.xyzw $ACC, $vf9, $vf8x
    ctx->pc = 0x25b99cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b9a0: 0x4a4040bf  vmaddaw.z   $ACC, $vf8, $vf0w
    ctx->pc = 0x25b9a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x25b9a4: 0x4be85209  vmaddy.xyzw $vf8, $vf10, $vf8y
    ctx->pc = 0x25b9a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x25b9a8: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x25b9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25b9ac: 0xf8870010  sqc2        $vf7, 0x10($a0)
    ctx->pc = 0x25b9acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25b9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9B0u;
        // 0x25b9b4: 0xf8880020  sqc2        $vf8, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B9B8u;
}
