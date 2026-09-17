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

// Function: sub_0032EDC0
// Address: 0x32edc0 - 0x32efc8
void sub_0032EDC0_0x32edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EDC0_0x32edc0");
#endif

    ctx->pc = 0x32edc0u;

    // 0x32edc0: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x32edc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32edc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32edc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32edc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32edcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32edccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32edd0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x32edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32edd4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x32edd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32edd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32edd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32eddc: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x32eddcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x32ede0: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x32ede0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x32ede4: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x32ede4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32ede8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x32ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32edec: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x32edecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32edf0: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x32edf0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x32edf4: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x32edf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x32edf8: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x32edf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x32edfc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x32edfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ee00: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x32ee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32ee04: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x32ee04u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x32ee08: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x32ee08u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x32ee0c: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x32ee0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x32ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x32EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE10u;
        // 0x32ee14: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EE18u;
    // 0x32ee18: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x32ee18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x32ee1c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x32ee1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x32ee20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x32ee20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x32ee24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32ee24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32ee28: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x32ee28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x32ee2c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ee2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ee30: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x32ee30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x32ee34: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x32ee34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x32ee38: 0x46010940  add.s       $f5, $f1, $f1
    ctx->pc = 0x32ee38u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x32ee3c: 0x460000c0  add.s       $f3, $f0, $f0
    ctx->pc = 0x32ee3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x32ee40: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x32ee40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32ee44: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x32ee44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x32ee48: 0x46041881  sub.s       $f2, $f3, $f4
    ctx->pc = 0x32ee48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x32ee4c: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x32ee4cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x32ee50: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x32ee50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x32ee54: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x32ee54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x32ee58: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x32ee58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x32ee5c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x32ee5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32ee60: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x32ee60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x32ee64: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x32ee64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32ee68: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x32ee68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32ee6c: 0xdfa90010  ld          $t1, 0x10($sp)
    ctx->pc = 0x32ee6cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ee70: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32ee74: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x32ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x32ee78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32ee7c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x32ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32ee80: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x32ee80u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32ee84: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x32ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32ee88: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32ee88u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32ee8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x32ee8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x32ee90: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x32ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32ee94: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x32ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x32ee98: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x32ee98u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32ee9c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x32ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x32eea0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32eea0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32eea4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x32eea4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x32eea8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x32eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32eeac: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x32eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32eeb0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x32eeb0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32eeb4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x32eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32eeb8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32eeb8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32eebc: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x32eebcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x32eec0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x32eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32eec4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x32eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x32eec8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x32eec8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32eecc: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x32eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x32eed0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32eed0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32eed4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x32eed4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x32eed8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x32eed8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32eedc: 0x4bc509bc  vmulax.xyz  $ACC, $vf1, $vf5x
    ctx->pc = 0x32eedcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32eee0: 0x4bc510bd  vmadday.xyz $ACC, $vf2, $vf5y
    ctx->pc = 0x32eee0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32eee4: 0x4bc518be  vmaddaz.xyz $ACC, $vf3, $vf5z
    ctx->pc = 0x32eee4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x32eee8: 0x4bc5204b  vmaddw.xyz  $vf1, $vf4, $vf5w
    ctx->pc = 0x32eee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32eeec: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x32eeecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32eef0: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x32eef0u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x32eef4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x32eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x32eef8: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x32eef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x32eefc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x32eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x32ef00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32ef04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32ef04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef08: 0x3e00008  jr          $ra
    ctx->pc = 0x32EF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF08u;
        // 0x32ef0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EF10u;
    // 0x32ef10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32ef10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef14: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x32ef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ef18: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x32ef18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ef1c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x32ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ef20: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x32ef20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32ef24: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x32ef24u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x32ef28: 0x46031069  min.s       $f1, $f2, $f3
    ctx->pc = 0x32ef28u;
    ctx->f[1] = std::min(ctx->f[2], ctx->f[3]);
    // 0x32ef2c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x32ef2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ef30: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x32ef30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32ef34: 0x460310a9  min.s       $f2, $f2, $f3
    ctx->pc = 0x32ef34u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[3]);
    // 0x32ef38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x32ef38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x32ef3c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x32ef3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x32ef40: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x32ef40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x32ef44: 0x3e00008  jr          $ra
    ctx->pc = 0x32EF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EF4Cu;
    // 0x32ef4c: 0x0  nop
    ctx->pc = 0x32ef4cu;
    // NOP
    // 0x32ef50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32ef50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef54: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x32ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ef58: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x32ef58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ef5c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x32ef5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ef60: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x32ef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32ef64: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x32ef64u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x32ef68: 0x46031068  max.s       $f1, $f2, $f3
    ctx->pc = 0x32ef68u;
    ctx->f[1] = std::max(ctx->f[2], ctx->f[3]);
    // 0x32ef6c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x32ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ef70: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x32ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32ef74: 0x460310a8  max.s       $f2, $f2, $f3
    ctx->pc = 0x32ef74u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[3]);
    // 0x32ef78: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x32ef78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x32ef7c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x32ef7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x32ef80: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x32ef80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x32ef84: 0x3e00008  jr          $ra
    ctx->pc = 0x32EF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EF8Cu;
    // 0x32ef8c: 0x0  nop
    ctx->pc = 0x32ef8cu;
    // NOP
    // 0x32ef90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32ef90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef94: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32ef94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32ef98: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32ef98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32ef9c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x32ef9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32efa0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32efa0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32efa4: 0x3e00008  jr          $ra
    ctx->pc = 0x32EFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EFACu;
    // 0x32efac: 0x0  nop
    ctx->pc = 0x32efacu;
    // NOP
    // 0x32efb0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32efb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32efb4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32efb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32efb8: 0x4bc1006c  vsub.xyz    $vf1, $vf0, $vf1
    ctx->pc = 0x32efb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32efbc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32efc0: 0x3e00008  jr          $ra
    ctx->pc = 0x32EFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EFC8u;
}
