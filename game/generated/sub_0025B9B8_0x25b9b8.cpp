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

// Function: sub_0025B9B8
// Address: 0x25b9b8 - 0x25bb28
void sub_0025B9B8_0x25b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B9B8_0x25b9b8");
#endif

    switch (ctx->pc) {
        case 0x25b9fcu: goto label_25b9fc;
        case 0x25ba58u: goto label_25ba58;
        case 0x25bad4u: goto label_25bad4;
        default: break;
    }

    ctx->pc = 0x25b9b8u;

    // 0x25b9b8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25b9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b9c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25b9c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b9c4: 0xc7808b08  lwc1        $f0, -0x74F8($gp)
    ctx->pc = 0x25b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b9c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25B9C8u;
    {
        const bool branch_taken_0x25b9c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b9c8) {
            ctx->pc = 0x25B9DCu;
            goto label_25b9dc;
        }
    }
    ctx->pc = 0x25B9D0u;
    // 0x25b9d0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25b9d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25b9d4: 0x8096e79  j           func_25B9E4
    ctx->pc = 0x25B9D4u;
    ctx->pc = 0x25B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9D4u;
    // 0x25b9d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B9E4u;
    goto label_25b9e4;
    ctx->pc = 0x25B9DCu;
label_25b9dc:
    // 0x25b9dc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x25b9dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25b9e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25b9e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b9e4:
    // 0x25b9e4: 0x4be004ec  vsub.xyzw   $vf19, $vf0, $vf0
    ctx->pc = 0x25b9e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x25b9e8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x25b9e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25b9ec: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x25b9ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25b9f0: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x25b9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b9f4: 0xc096df4  jal         func_25B7D0
    ctx->pc = 0x25B9F4u;
    SET_GPR_U32(ctx, 31, 0x25B9FCu);
    ctx->pc = 0x25B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B7D0u, 0x25B9F4u, 0x25B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9FCu;
label_25b9fc:
    // 0x25b9fc: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x25b9fcu;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba00: 0x4be69b3c  vmove.xyzw  $vf6, $vf19
    ctx->pc = 0x25ba00u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25ba04: 0x4be79b3c  vmove.xyzw  $vf7, $vf19
    ctx->pc = 0x25ba04u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25ba08: 0x4a849980  vaddx.y     $vf6, $vf19, $vf4x
    ctx->pc = 0x25ba08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25ba0c: 0x4b049981  vaddy.x     $vf6, $vf19, $vf4y
    ctx->pc = 0x25ba0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25ba10: 0x4b0499c4  vsubx.x     $vf7, $vf19, $vf4x
    ctx->pc = 0x25ba10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25ba14: 0x4a8499c1  vaddy.y     $vf7, $vf19, $vf4y
    ctx->pc = 0x25ba14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25ba18: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x25ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ba1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25ba1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25ba20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ba24: 0xc7808b0c  lwc1        $f0, -0x74F4($gp)
    ctx->pc = 0x25ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ba28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25BA28u;
    {
        const bool branch_taken_0x25ba28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ba28) {
            ctx->pc = 0x25BA3Cu;
            goto label_25ba3c;
        }
    }
    ctx->pc = 0x25BA30u;
    // 0x25ba30: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25ba30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25ba34: 0x8096e91  j           func_25BA44
    ctx->pc = 0x25BA34u;
    ctx->pc = 0x25BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BA34u;
    // 0x25ba38: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BA44u;
    goto label_25ba44;
    ctx->pc = 0x25BA3Cu;
label_25ba3c:
    // 0x25ba3c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x25ba3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25ba40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25ba40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ba44:
    // 0x25ba44: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x25ba44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25ba48: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x25ba48u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25ba4c: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x25ba4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba50: 0xc096df4  jal         func_25B7D0
    ctx->pc = 0x25BA50u;
    SET_GPR_U32(ctx, 31, 0x25BA58u);
    ctx->pc = 0x25B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B7D0u, 0x25BA50u, 0x25BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA58u;
label_25ba58:
    // 0x25ba58: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x25ba58u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba5c: 0x4be99b3c  vmove.xyzw  $vf9, $vf19
    ctx->pc = 0x25ba5cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25ba60: 0x4bea9b3c  vmove.xyzw  $vf10, $vf19
    ctx->pc = 0x25ba60u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25ba64: 0x4be89b3c  vmove.xyzw  $vf8, $vf19
    ctx->pc = 0x25ba64u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25ba68: 0x4a809a83  vaddw.y     $vf10, $vf19, $vf0w
    ctx->pc = 0x25ba68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x25ba6c: 0x4a449a44  vsubx.z     $vf9, $vf19, $vf4x
    ctx->pc = 0x25ba6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x25ba70: 0x4b049a41  vaddy.x     $vf9, $vf19, $vf4y
    ctx->pc = 0x25ba70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x25ba74: 0x4b049a00  vaddx.x     $vf8, $vf19, $vf4x
    ctx->pc = 0x25ba74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x25ba78: 0x4a449a01  vaddy.z     $vf8, $vf19, $vf4y
    ctx->pc = 0x25ba78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x25ba7c: 0x4be649bc  vmulax.xyzw $ACC, $vf9, $vf6x
    ctx->pc = 0x25ba7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25ba80: 0x4be650bd  vmadday.xyzw $ACC, $vf10, $vf6y
    ctx->pc = 0x25ba80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25ba84: 0x4be6418a  vmaddz.xyzw $vf6, $vf8, $vf6z
    ctx->pc = 0x25ba84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25ba88: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x25ba88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25ba8c: 0x4be750bd  vmadday.xyzw $ACC, $vf10, $vf7y
    ctx->pc = 0x25ba8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25ba90: 0x4be741ca  vmaddz.xyzw $vf7, $vf8, $vf7z
    ctx->pc = 0x25ba90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25ba94: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25ba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ba98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25ba98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25ba9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25baa0: 0xc7808b10  lwc1        $f0, -0x74F0($gp)
    ctx->pc = 0x25baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25baa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25BAA4u;
    {
        const bool branch_taken_0x25baa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25baa4) {
            ctx->pc = 0x25BAB8u;
            goto label_25bab8;
        }
    }
    ctx->pc = 0x25BAACu;
    // 0x25baac: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25baacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25bab0: 0x8096eb0  j           func_25BAC0
    ctx->pc = 0x25BAB0u;
    ctx->pc = 0x25BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BAB0u;
    // 0x25bab4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BAC0u;
    goto label_25bac0;
    ctx->pc = 0x25BAB8u;
label_25bab8:
    // 0x25bab8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x25bab8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25babc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25babcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bac0:
    // 0x25bac0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x25bac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25bac4: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x25bac4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25bac8: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x25bac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bacc: 0xc096df4  jal         func_25B7D0
    ctx->pc = 0x25BACCu;
    SET_GPR_U32(ctx, 31, 0x25BAD4u);
    ctx->pc = 0x25B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B7D0u, 0x25BACCu, 0x25BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BAD4u;
label_25bad4:
    // 0x25bad4: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x25bad4u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bad8: 0x4bea9b3c  vmove.xyzw  $vf10, $vf19
    ctx->pc = 0x25bad8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25badc: 0x4beb9b3c  vmove.xyzw  $vf11, $vf19
    ctx->pc = 0x25badcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x25bae0: 0x4a449a80  vaddx.z     $vf10, $vf19, $vf4x
    ctx->pc = 0x25bae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x25bae4: 0x4a849a81  vaddy.y     $vf10, $vf19, $vf4y
    ctx->pc = 0x25bae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x25bae8: 0x4a849ac4  vsubx.y     $vf11, $vf19, $vf4x
    ctx->pc = 0x25bae8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x25baec: 0x4a449ac1  vaddy.z     $vf11, $vf19, $vf4y
    ctx->pc = 0x25baecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x25baf0: 0x4be651bd  vmulay.xyzw $ACC, $vf10, $vf6y
    ctx->pc = 0x25baf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25baf4: 0x4b0030bf  vmaddaw.x   $ACC, $vf6, $vf0w
    ctx->pc = 0x25baf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x25baf8: 0x4be6598a  vmaddz.xyzw $vf6, $vf11, $vf6z
    ctx->pc = 0x25baf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25bafc: 0x4be751bd  vmulay.xyzw $ACC, $vf10, $vf7y
    ctx->pc = 0x25bafcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25bb00: 0x4b0038bf  vmaddaw.x   $ACC, $vf7, $vf0w
    ctx->pc = 0x25bb00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x25bb04: 0x4be759ca  vmaddz.xyzw $vf7, $vf11, $vf7z
    ctx->pc = 0x25bb04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25bb08: 0x4be851bd  vmulay.xyzw $ACC, $vf10, $vf8y
    ctx->pc = 0x25bb08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25bb0c: 0x4b0040bf  vmaddaw.x   $ACC, $vf8, $vf0w
    ctx->pc = 0x25bb0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x25bb10: 0x4be85a0a  vmaddz.xyzw $vf8, $vf11, $vf8z
    ctx->pc = 0x25bb10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x25bb14: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x25bb14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25bb18: 0xf8870010  sqc2        $vf7, 0x10($a0)
    ctx->pc = 0x25bb18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25bb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x25BB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB1Cu;
        // 0x25bb20: 0xf8880020  sqc2        $vf8, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BB24u;
    // 0x25bb24: 0x0  nop
    ctx->pc = 0x25bb24u;
    // NOP
    ctx->pc = 0x25bb28u;
}
