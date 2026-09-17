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

// Function: sub_00255E58
// Address: 0x255e58 - 0x256090
void sub_00255E58_0x255e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255E58_0x255e58");
#endif

    switch (ctx->pc) {
        case 0x255f8cu: goto label_255f8c;
        case 0x25607cu: goto label_25607c;
        default: break;
    }

    ctx->pc = 0x255e58u;

    // 0x255e58: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x255e58u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255e5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x255e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x255e60: 0xc7818a50  lwc1        $f1, -0x75B0($gp)
    ctx->pc = 0x255e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255e64: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x255e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255e68: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x255e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x255e6c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x255e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x255e70: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x255e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x255e74: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x255e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x255e78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x255e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x255e80: 0xc7838a54  lwc1        $f3, -0x75AC($gp)
    ctx->pc = 0x255e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x255e84: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x255e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255e88: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x255E88u;
    {
        const bool branch_taken_0x255e88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E88u;
        // 0x255e8c: 0xffbf00b0  sd          $ra, 0xB0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e88) {
            ctx->pc = 0x255EA0u;
            goto label_255ea0;
        }
    }
    ctx->pc = 0x255E90u;
    // 0x255e90: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x255e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x255e94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x255E94u;
    {
        const bool branch_taken_0x255e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E94u;
        // 0x255e98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e94) {
            ctx->pc = 0x255EA8u;
            goto label_255ea8;
        }
    }
    ctx->pc = 0x255E9Cu;
    // 0x255e9c: 0x0  nop
    ctx->pc = 0x255e9cu;
    // NOP
label_255ea0:
    // 0x255ea0: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x255ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x255ea4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x255ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255ea8:
    // 0x255ea8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x255ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x255eac: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x255eacu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x255eb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x255eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x255eb4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x255eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x255eb8: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x255eb8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x255ebc: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x255ebcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x255ec0: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x255ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x255ec4: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x255ec4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x255ec8: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x255ec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255ecc: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x255eccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255ed0: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x255ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255ed4: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x255ed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x255ed8: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x255ed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255edc: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x255edcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x255ee0: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x255ee0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255ee4: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x255ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x255ee8: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x255ee8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x255eec: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x255eecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x255ef0: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x255ef0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255ef4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x255EF4u;
    {
        const bool branch_taken_0x255ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EF4u;
        // 0x255ef8: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ef4) {
            ctx->pc = 0x255F08u;
            goto label_255f08;
        }
    }
    ctx->pc = 0x255EFCu;
    // 0x255efc: 0x4a0003bf  vwaitq
    ctx->pc = 0x255efcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x255f00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255F00u;
    {
        const bool branch_taken_0x255f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F00u;
        // 0x255f04: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f00) {
            ctx->pc = 0x255F10u;
            goto label_255f10;
        }
    }
    ctx->pc = 0x255F08u;
label_255f08:
    // 0x255f08: 0x4a0003bf  vwaitq
    ctx->pc = 0x255f08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x255f0c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x255f0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_255f10:
    // 0x255f10: 0x4aa0012c  vsub.yw     $vf4, $vf0, $vf0
    ctx->pc = 0x255f10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x255f14: 0x4b60016c  vsub.xzw    $vf5, $vf0, $vf0
    ctx->pc = 0x255f14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x255f18: 0x4aa001ac  vsub.yw     $vf6, $vf0, $vf0
    ctx->pc = 0x255f18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x255f1c: 0x4a800143  vaddw.y     $vf5, $vf0, $vf0w
    ctx->pc = 0x255f1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x255f20: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x255f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x255f24: 0x4a5c0104  vsubx.z     $vf4, $vf0, $vf28x
    ctx->pc = 0x255f24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x255f28: 0x4b1c01a8  vadd.x      $vf6, $vf0, $vf28
    ctx->pc = 0x255f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x255f2c: 0x4b1c0101  vaddy.x     $vf4, $vf0, $vf28y
    ctx->pc = 0x255f2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x255f30: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x255f30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x255f34: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x255f34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x255f38: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x255f38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x255f3c: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x255f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x255f40: 0xc7818a58  lwc1        $f1, -0x75A8($gp)
    ctx->pc = 0x255f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255f44: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x255f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x255f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f4c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x255f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x255f50: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x255f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x255f54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255f58: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x255f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x255f5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255f60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255f64: 0xc46006c0  lwc1        $f0, 0x6C0($v1)
    ctx->pc = 0x255f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255f68: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x255f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x255f6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x255f70: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x255f70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x255f74: 0xdfa30088  ld          $v1, 0x88($sp)
    ctx->pc = 0x255f74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x255f78: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x255f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x255f7c: 0xffa30078  sd          $v1, 0x78($sp)
    ctx->pc = 0x255f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 3));
    // 0x255f80: 0xdfa20080  ld          $v0, 0x80($sp)
    ctx->pc = 0x255f80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x255f84: 0xc095636  jal         func_2558D8
    ctx->pc = 0x255F84u;
    SET_GPR_U32(ctx, 31, 0x255F8Cu);
    ctx->pc = 0x255F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F84u;
    // 0x255f88: 0xffa20070  sd          $v0, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2558D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2558D8u, 0x255F84u, 0x255F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F8Cu;
label_255f8c:
    // 0x255f8c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x255f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x255f90: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x255f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x255f94: 0x24631bc0  addiu       $v1, $v1, 0x1BC0
    ctx->pc = 0x255f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7104));
    // 0x255f98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x255f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f9c: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x255f9cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x471BC8u));
    // 0x255fa0: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x255fa0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x471BC0u));
    // 0x255fa4: 0xffa40088  sd          $a0, 0x88($sp)
    ctx->pc = 0x255fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 4));
    // 0x255fa8: 0xffa50080  sd          $a1, 0x80($sp)
    ctx->pc = 0x255fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 5));
    // 0x255fac: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x255facu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255fb0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x255fb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x255fb4: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x255fb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x255fb8: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x255fb8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x255fbc: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x255fbcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x255fc0: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x255fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255fc4: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x255fc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255fc8: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x255fc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255fcc: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x255fccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x255fd0: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x255fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x255fd4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x255fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x255fd8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x255fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x255fdc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x255fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x255fe0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x255fe0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255fe4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x255fe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255fe8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x255fe8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x255fec: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x255fecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x255ff0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x255ff0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x255ff4: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x255ff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255ff8: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x255ff8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255ffc: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x255ffcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x256000: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x256000u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x256004: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x256004u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x256008: 0xc7808a5c  lwc1        $f0, -0x75A4($gp)
    ctx->pc = 0x256008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25600c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25600cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256010: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x256010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x256014: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x256014u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x256018: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x256018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25601c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25601cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x256020: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x256020u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256024: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x256024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x256028: 0x4bc1fc08  vmaddx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x256028u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25602c: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x25602cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x256030: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x256030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256034: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x256034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x256038: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x256038u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25603c: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x25603cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256040: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x256040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x256044: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x256044u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x256048: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x256048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25604c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x25604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x256050: 0xc7808a60  lwc1        $f0, -0x75A0($gp)
    ctx->pc = 0x256050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256054: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x256054u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256058: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x256058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25605c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25605cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x256060: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x256060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x256064: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x256064u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x256068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x256068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25606c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25606cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256070: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x256070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256074: 0xc08f4d4  jal         func_23D350
    ctx->pc = 0x256074u;
    SET_GPR_U32(ctx, 31, 0x25607Cu);
    ctx->pc = 0x256078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256074u;
    // 0x256078: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D350u, 0x256074u, 0x25607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25607Cu;
label_25607c:
    // 0x25607c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x25607cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x256080: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x256080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x256084: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x256084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x256088: 0x3e00008  jr          $ra
    ctx->pc = 0x256088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256088u;
        // 0x25608c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256090u;
}
