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

// Function: sub_00253C00
// Address: 0x253c00 - 0x254290
void sub_00253C00_0x253c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253C00_0x253c00");
#endif

    switch (ctx->pc) {
        case 0x254078u: goto label_254078;
        case 0x2540d0u: goto label_2540d0;
        case 0x2540f0u: goto label_2540f0;
        case 0x254114u: goto label_254114;
        case 0x254134u: goto label_254134;
        case 0x254148u: goto label_254148;
        case 0x254158u: goto label_254158;
        case 0x254164u: goto label_254164;
        case 0x254188u: goto label_254188;
        case 0x254190u: goto label_254190;
        case 0x2541c4u: goto label_2541c4;
        case 0x2541d8u: goto label_2541d8;
        default: break;
    }

    ctx->pc = 0x253c00u;

    // 0x253c00: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x253c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x253c04: 0x2ce2001e  sltiu       $v0, $a3, 0x1E
    ctx->pc = 0x253c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x253c08: 0xffb001d0  sd          $s0, 0x1D0($sp)
    ctx->pc = 0x253c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 16));
    // 0x253c0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x253c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c10: 0xffb201e0  sd          $s2, 0x1E0($sp)
    ctx->pc = 0x253c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 18));
    // 0x253c14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x253c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c18: 0xffb101d8  sd          $s1, 0x1D8($sp)
    ctx->pc = 0x253c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 17));
    // 0x253c1c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x253c1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c20: 0xffb301e8  sd          $s3, 0x1E8($sp)
    ctx->pc = 0x253c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 19));
    // 0x253c24: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x253c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x253c28: 0xffb501f8  sd          $s5, 0x1F8($sp)
    ctx->pc = 0x253c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 21));
    // 0x253c2c: 0xffb60200  sd          $s6, 0x200($sp)
    ctx->pc = 0x253c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 22));
    // 0x253c30: 0xffb70208  sd          $s7, 0x208($sp)
    ctx->pc = 0x253c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 23));
    // 0x253c34: 0xffbe0210  sd          $fp, 0x210($sp)
    ctx->pc = 0x253c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 30));
    // 0x253c38: 0xffbf0218  sd          $ra, 0x218($sp)
    ctx->pc = 0x253c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 31));
    // 0x253c3c: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x253c3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x253c40: 0xafa701c0  sw          $a3, 0x1C0($sp)
    ctx->pc = 0x253c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 7));
    // 0x253c44: 0x10400184  beqz        $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x253C44u;
    {
        const bool branch_taken_0x253c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C44u;
        // 0x253c48: 0x865e0008  lh          $fp, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c44) {
            ctx->pc = 0x254258u;
            goto label_254258;
        }
    }
    ctx->pc = 0x253C4Cu;
    // 0x253c4c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x253c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253c50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x253c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253c54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253c5c: 0xc78289e0  lwc1        $f2, -0x7620($gp)
    ctx->pc = 0x253c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253c60: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x253C60u;
    {
        const bool branch_taken_0x253c60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C60u;
        // 0x253c64: 0xafa201c4  sw          $v0, 0x1C4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c60) {
            ctx->pc = 0x253C78u;
            goto label_253c78;
        }
    }
    ctx->pc = 0x253C68u;
    // 0x253c68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x253c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x253c6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x253C6Cu;
    {
        const bool branch_taken_0x253c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C6Cu;
        // 0x253c70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c6c) {
            ctx->pc = 0x253C80u;
            goto label_253c80;
        }
    }
    ctx->pc = 0x253C74u;
    // 0x253c74: 0x0  nop
    ctx->pc = 0x253c74u;
    // NOP
label_253c78:
    // 0x253c78: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x253c78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x253c7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x253c7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253c80:
    // 0x253c80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x253c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x253c84: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x253c84u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x253c88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x253c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x253c8c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x253c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x253c90: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x253c90u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x253c94: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x253c94u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x253c98: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x253c98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253c9c: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x253c9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x253ca0: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x253ca0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253ca4: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x253ca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253ca8: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x253ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253cac: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x253cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253cb0: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x253cb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253cb4: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x253cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253cb8: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x253cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253cbc: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x253cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253cc0: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x253cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253cc4: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x253cc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x253cc8: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x253cc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253ccc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x253CCCu;
    {
        const bool branch_taken_0x253ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CCCu;
        // 0x253cd0: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ccc) {
            ctx->pc = 0x253CE0u;
            goto label_253ce0;
        }
    }
    ctx->pc = 0x253CD4u;
    // 0x253cd4: 0x4a0003bf  vwaitq
    ctx->pc = 0x253cd4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x253cd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253CD8u;
    {
        const bool branch_taken_0x253cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CD8u;
        // 0x253cdc: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cd8) {
            ctx->pc = 0x253CE8u;
            goto label_253ce8;
        }
    }
    ctx->pc = 0x253CE0u;
label_253ce0:
    // 0x253ce0: 0x4a0003bf  vwaitq
    ctx->pc = 0x253ce0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x253ce4: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x253ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_253ce8:
    // 0x253ce8: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x253ce8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x253cec: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x253cecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x253cf0: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x253cf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x253cf4: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x253cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x253cf8: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x253cf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x253cfc: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x253cfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x253d00: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x253d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x253d04: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x253d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x253d08: 0xc78289e4  lwc1        $f2, -0x761C($gp)
    ctx->pc = 0x253d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253d0c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x253d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253d10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253d14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253d18: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x253D18u;
    {
        const bool branch_taken_0x253d18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253d18) {
            ctx->pc = 0x253D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D18u;
            // 0x253d1c: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x253D30u;
            goto label_253d30;
        }
    }
    ctx->pc = 0x253D20u;
    // 0x253d20: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x253d20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x253d24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253D24u;
    {
        const bool branch_taken_0x253d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D24u;
        // 0x253d28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d24) {
            ctx->pc = 0x253D34u;
            goto label_253d34;
        }
    }
    ctx->pc = 0x253D2Cu;
    // 0x253d2c: 0x0  nop
    ctx->pc = 0x253d2cu;
    // NOP
label_253d30:
    // 0x253d30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x253d30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253d34:
    // 0x253d34: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x253d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x253d38: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x253d38u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x253d3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x253d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x253d40: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x253d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x253d44: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x253d44u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x253d48: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x253d48u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x253d4c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x253d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253d50: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x253d50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x253d54: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x253d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253d58: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x253d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253d5c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x253d5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253d60: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x253d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253d64: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x253d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253d68: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x253d68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253d6c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x253d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253d70: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x253d70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253d74: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x253d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253d78: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x253d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x253d7c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x253d7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253d80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x253D80u;
    {
        const bool branch_taken_0x253d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D80u;
        // 0x253d84: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d80) {
            ctx->pc = 0x253D98u;
            goto label_253d98;
        }
    }
    ctx->pc = 0x253D88u;
    // 0x253d88: 0x4a0003bf  vwaitq
    ctx->pc = 0x253d88u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x253d8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x253D8Cu;
    {
        const bool branch_taken_0x253d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D8Cu;
        // 0x253d90: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d8c) {
            ctx->pc = 0x253DA0u;
            goto label_253da0;
        }
    }
    ctx->pc = 0x253D94u;
    // 0x253d94: 0x0  nop
    ctx->pc = 0x253d94u;
    // NOP
label_253d98:
    // 0x253d98: 0x4a0003bf  vwaitq
    ctx->pc = 0x253d98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x253d9c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x253d9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_253da0:
    // 0x253da0: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x253da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253da4: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x253da4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253da8: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x253da8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253dac: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x253dacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x253db0: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x253db0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x253db4: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x253db4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x253db8: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x253db8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x253dbc: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x253dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x253dc0: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x253dc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x253dc4: 0xc78289e8  lwc1        $f2, -0x7618($gp)
    ctx->pc = 0x253dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253dc8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x253dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253dcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253dd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253dd4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x253DD4u;
    {
        const bool branch_taken_0x253dd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253dd4) {
            ctx->pc = 0x253DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253DD4u;
            // 0x253dd8: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x253DE8u;
            goto label_253de8;
        }
    }
    ctx->pc = 0x253DDCu;
    // 0x253ddc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x253ddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x253de0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x253DE0u;
    {
        const bool branch_taken_0x253de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DE0u;
        // 0x253de4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253de0) {
            ctx->pc = 0x253DECu;
            goto label_253dec;
        }
    }
    ctx->pc = 0x253DE8u;
label_253de8:
    // 0x253de8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x253de8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253dec:
    // 0x253dec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x253decu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x253df0: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x253df0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x253df4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x253df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x253df8: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x253df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x253dfc: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x253dfcu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x253e00: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x253e00u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x253e04: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x253e04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253e08: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x253e08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x253e0c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x253e0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253e10: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x253e10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253e14: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x253e14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253e18: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x253e18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253e1c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x253e1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253e20: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x253e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253e24: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x253e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253e28: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x253e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253e2c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x253e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253e30: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x253e30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x253e34: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x253e34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253e38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x253E38u;
    {
        const bool branch_taken_0x253e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E38u;
        // 0x253e3c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e38) {
            ctx->pc = 0x253E50u;
            goto label_253e50;
        }
    }
    ctx->pc = 0x253E40u;
    // 0x253e40: 0x4a0003bf  vwaitq
    ctx->pc = 0x253e40u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x253e44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x253E44u;
    {
        const bool branch_taken_0x253e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E44u;
        // 0x253e48: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e44) {
            ctx->pc = 0x253E58u;
            goto label_253e58;
        }
    }
    ctx->pc = 0x253E4Cu;
    // 0x253e4c: 0x0  nop
    ctx->pc = 0x253e4cu;
    // NOP
label_253e50:
    // 0x253e50: 0x4a0003bf  vwaitq
    ctx->pc = 0x253e50u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x253e54: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x253e54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_253e58:
    // 0x253e58: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x253e58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253e5c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x253e5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x253e60: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x253e60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x253e64: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x253e64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x253e68: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x253e68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x253e6c: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x253e6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x253e70: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x253e70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x253e74: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x253e74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x253e78: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x253e78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x253e7c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x253e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x253e80: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x253e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x253e84: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x253e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x253e88: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x253e88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x253e8c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x253e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x253e90: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x253e90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x253e94: 0x86420028  lh          $v0, 0x28($s2)
    ctx->pc = 0x253e94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x253e98: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x253e98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x253e9c: 0x9243002a  lbu         $v1, 0x2A($s2)
    ctx->pc = 0x253e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x253ea0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x253ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x253ea4: 0x8644000c  lh          $a0, 0xC($s2)
    ctx->pc = 0x253ea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x253ea8: 0x44825800  mtc1        $v0, $f11
    ctx->pc = 0x253ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x253eac: 0x46805ae0  cvt.s.w     $f11, $f11
    ctx->pc = 0x253eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[11], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x253eb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x253eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x253eb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x253eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x253eb8: 0x86430010  lh          $v1, 0x10($s2)
    ctx->pc = 0x253eb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x253ebc: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x253ebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x253ec0: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x253ec0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x253ec4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x253ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x253ec8: 0x9245002f  lbu         $a1, 0x2F($s2)
    ctx->pc = 0x253ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 47)));
    // 0x253ecc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x253eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x253ed0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x253ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x253ed4: 0x8244002b  lb          $a0, 0x2B($s2)
    ctx->pc = 0x253ed4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 43)));
    // 0x253ed8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x253ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x253edc: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x253edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x253ee0: 0x9243002d  lbu         $v1, 0x2D($s2)
    ctx->pc = 0x253ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
    // 0x253ee4: 0x44855000  mtc1        $a1, $f10
    ctx->pc = 0x253ee4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x253ee8: 0x468052a0  cvt.s.w     $f10, $f10
    ctx->pc = 0x253ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[10], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x253eec: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x253eecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x253ef0: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x253ef0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x253ef4: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x253ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x253ef8: 0xc78089ec  lwc1        $f0, -0x7614($gp)
    ctx->pc = 0x253ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253efc: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x253efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x253f00: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x253f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x253f04: 0xc78189f0  lwc1        $f1, -0x7610($gp)
    ctx->pc = 0x253f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253f08: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x253f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x253f0c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x253f0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x253f10: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x253f10u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x253f14: 0xc78089f4  lwc1        $f0, -0x760C($gp)
    ctx->pc = 0x253f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253f18: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x253f18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x253f1c: 0xc78189f8  lwc1        $f1, -0x7608($gp)
    ctx->pc = 0x253f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253f20: 0x92440020  lbu         $a0, 0x20($s2)
    ctx->pc = 0x253f20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x253f24: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x253f24u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x253f28: 0x92450021  lbu         $a1, 0x21($s2)
    ctx->pc = 0x253f28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
    // 0x253f2c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x253f2cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x253f30: 0x92460022  lbu         $a2, 0x22($s2)
    ctx->pc = 0x253f30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x253f34: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x253f34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x253f38: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x253f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x253f3c: 0xc79489fc  lwc1        $f20, -0x7604($gp)
    ctx->pc = 0x253f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x253f40: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x253f40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253f44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x253f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253f48: 0xc7898a00  lwc1        $f9, -0x7600($gp)
    ctx->pc = 0x253f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x253f4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x253f4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253f54: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x253f54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x253f58: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x253f58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x253f5c: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x253f5cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x253f60: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x253f60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253f64: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x253f64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x253f68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x253f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x253f6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x253f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x253f70: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x253f70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x253f74: 0x9244002e  lbu         $a0, 0x2E($s2)
    ctx->pc = 0x253f74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
    // 0x253f78: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x253f78u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x253f7c: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x253f7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x253f80: 0x46094202  mul.s       $f8, $f8, $f9
    ctx->pc = 0x253f80u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x253f84: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x253f84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x253f88: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x253f88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x253f8c: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x253f8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
    // 0x253f90: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x253f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x253f94: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x253f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x253f98: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x253f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x253f9c: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x253f9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x253fa0: 0xe7a600a8  swc1        $f6, 0xA8($sp)
    ctx->pc = 0x253fa0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x253fa4: 0xafa8014c  sw          $t0, 0x14C($sp)
    ctx->pc = 0x253fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 8));
    // 0x253fa8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x253fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x253fac: 0xe7ac0080  swc1        $f12, 0x80($sp)
    ctx->pc = 0x253facu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x253fb0: 0xe7ad008c  swc1        $f13, 0x8C($sp)
    ctx->pc = 0x253fb0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x253fb4: 0xe7aa009c  swc1        $f10, 0x9C($sp)
    ctx->pc = 0x253fb4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x253fb8: 0xe7a800a0  swc1        $f8, 0xA0($sp)
    ctx->pc = 0x253fb8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x253fbc: 0xe7a700a4  swc1        $f7, 0xA4($sp)
    ctx->pc = 0x253fbcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x253fc0: 0xe7ad005c  swc1        $f13, 0x5C($sp)
    ctx->pc = 0x253fc0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x253fc4: 0xe7ab0090  swc1        $f11, 0x90($sp)
    ctx->pc = 0x253fc4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x253fc8: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x253fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x253fcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253fd0: 0x9242000b  lbu         $v0, 0xB($s2)
    ctx->pc = 0x253fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x253fd4: 0x96460028  lhu         $a2, 0x28($s2)
    ctx->pc = 0x253fd4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x253fd8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x253fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x253fdc: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x253fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x253fe0: 0x8fa501c4  lw          $a1, 0x1C4($sp)
    ctx->pc = 0x253fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x253fe4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x253fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x253fe8: 0x86430012  lh          $v1, 0x12($s2)
    ctx->pc = 0x253fe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x253fec: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x253fecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x253ff0: 0x86440024  lh          $a0, 0x24($s2)
    ctx->pc = 0x253ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x253ff4: 0xafa501c4  sw          $a1, 0x1C4($sp)
    ctx->pc = 0x253ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 5));
    // 0x253ff8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x253ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x253ffc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x253ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x254000: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x254000u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x254004: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x254004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x254008: 0xc7868a04  lwc1        $f6, -0x75FC($gp)
    ctx->pc = 0x254008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25400c: 0x86420026  lh          $v0, 0x26($s2)
    ctx->pc = 0x25400cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x254010: 0x82430023  lb          $v1, 0x23($s2)
    ctx->pc = 0x254010u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x254014: 0x86450016  lh          $a1, 0x16($s2)
    ctx->pc = 0x254014u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x254018: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x254018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25401c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x25401cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x254020: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x254020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x254024: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x254024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x254028: 0x9643001a  lhu         $v1, 0x1A($s2)
    ctx->pc = 0x254028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x25402c: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x25402cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x254030: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x254030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x254034: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x254034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x254038: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x254038u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x25403c: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x25403cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x254040: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x254040u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x254044: 0xa7a20062  sh          $v0, 0x62($sp)
    ctx->pc = 0x254044u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x254048: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x254048u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25404c: 0xa7a300c6  sh          $v1, 0xC6($sp)
    ctx->pc = 0x25404cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x254050: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x254050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x254054: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x254054u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x254058: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x254058u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x25405c: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x25405cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x254060: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x254060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x254064: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x254064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x254068: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x254068u;
    {
        const bool branch_taken_0x254068 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x25406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254068u;
        // 0x25406c: 0xe7a500b8  swc1        $f5, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254068) {
            ctx->pc = 0x254098u;
            goto label_254098;
        }
    }
    ctx->pc = 0x254070u;
    // 0x254070: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x254070u;
    SET_GPR_U32(ctx, 31, 0x254078u);
    ctx->pc = 0x254074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254070u;
    // 0x254074: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x254070u, 0x254078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254078u;
label_254078:
    // 0x254078: 0x92420033  lbu         $v0, 0x33($s2)
    ctx->pc = 0x254078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x25407c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x25407cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x254080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x254080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254084: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x254084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x254088: 0x96460028  lhu         $a2, 0x28($s2)
    ctx->pc = 0x254088u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x25408c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25408cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x254090: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x254090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x254094: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x254094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_254098:
    // 0x254098: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x254098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x25409c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x25409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2540a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2540a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2540a4: 0x92450034  lbu         $a1, 0x34($s2)
    ctx->pc = 0x2540a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2540a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2540a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2540ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2540acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2540b0: 0x92430035  lbu         $v1, 0x35($s2)
    ctx->pc = 0x2540b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x2540b4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2540b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540b8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2540b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2540bc: 0xa3a500c4  sb          $a1, 0xC4($sp)
    ctx->pc = 0x2540bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 196), (uint8_t)GPR_U32(ctx, 5));
    // 0x2540c0: 0xa3a300c5  sb          $v1, 0xC5($sp)
    ctx->pc = 0x2540c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 197), (uint8_t)GPR_U32(ctx, 3));
    // 0x2540c4: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2540c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2540c8: 0xc0909cc  jal         func_242730
    ctx->pc = 0x2540C8u;
    SET_GPR_U32(ctx, 31, 0x2540D0u);
    ctx->pc = 0x2540CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540C8u;
    // 0x2540cc: 0xa7a00060  sh          $zero, 0x60($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242730u, 0x2540C8u, 0x2540D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2540D0u;
label_2540d0:
    // 0x2540d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2540d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540d4: 0x5ae00061  blezl       $s7, . + 4 + (0x61 << 2)
    ctx->pc = 0x2540D4u;
    {
        const bool branch_taken_0x2540d4 = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x2540d4) {
            ctx->pc = 0x2540D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540D4u;
            // 0x2540d8: 0xdfb001d0  ld          $s0, 0x1D0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25425Cu;
            goto label_25425c;
        }
    }
    ctx->pc = 0x2540DCu;
    // 0x2540dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2540dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2540e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2540E4u;
    {
        const bool branch_taken_0x2540e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2540E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540E4u;
        // 0x2540e8: 0x27b10150  addiu       $s1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540e4) {
            ctx->pc = 0x2540F4u;
            goto label_2540f4;
        }
    }
    ctx->pc = 0x2540ECu;
    // 0x2540ec: 0x0  nop
    ctx->pc = 0x2540ecu;
    // NOP
label_2540f0:
    // 0x2540f0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2540f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2540f4:
    // 0x2540f4: 0x8642001c  lh          $v0, 0x1C($s2)
    ctx->pc = 0x2540f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2540f8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2540f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2540fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2540FCu;
    {
        const bool branch_taken_0x2540fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540FCu;
        // 0x254100: 0x2f62018  mult        $a0, $s7, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540fc) {
            ctx->pc = 0x25412Cu;
            goto label_25412c;
        }
    }
    ctx->pc = 0x254104u;
    // 0x254104: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x254104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254108: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x254108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25410c: 0xc0909e4  jal         func_242790
    ctx->pc = 0x25410Cu;
    SET_GPR_U32(ctx, 31, 0x254114u);
    ctx->pc = 0x254110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25410Cu;
    // 0x254110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242790u, 0x25410Cu, 0x254114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254114u;
label_254114:
    // 0x254114: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x254114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x254118: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x254118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x25411c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25411cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x254120: 0x441fff3  bgez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x254120u;
    {
        const bool branch_taken_0x254120 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x254124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254120u;
        // 0x254124: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254120) {
            ctx->pc = 0x2540F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2540f0;
        }
    }
    ctx->pc = 0x254128u;
    // 0x254128: 0x2f62018  mult        $a0, $s7, $s6
    ctx->pc = 0x254128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_25412c:
    // 0x25412c: 0xc0937fa  jal         func_24DFE8
    ctx->pc = 0x25412Cu;
    SET_GPR_U32(ctx, 31, 0x254134u);
    ctx->pc = 0x254130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25412Cu;
    // 0x254130: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DFE8u, 0x25412Cu, 0x254134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254134u;
label_254134:
    // 0x254134: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x254134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x254138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25413c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x254140: 0xc0946de  jal         func_251B78
    ctx->pc = 0x254140u;
    SET_GPR_U32(ctx, 31, 0x254148u);
    ctx->pc = 0x254144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254140u;
    // 0x254144: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x251B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251B78u, 0x254140u, 0x254148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254148u;
label_254148:
    // 0x254148: 0x1ae00043  blez        $s7, . + 4 + (0x43 << 2)
    ctx->pc = 0x254148u;
    {
        const bool branch_taken_0x254148 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x25414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254148u;
        // 0x25414c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254148) {
            ctx->pc = 0x254258u;
            goto label_254258;
        }
    }
    ctx->pc = 0x254150u;
    // 0x254150: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x254150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254154: 0x0  nop
    ctx->pc = 0x254154u;
    // NOP
label_254158:
    // 0x254158: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x254158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25415c: 0xc090660  jal         func_241980
    ctx->pc = 0x25415Cu;
    SET_GPR_U32(ctx, 31, 0x254164u);
    ctx->pc = 0x254160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25415Cu;
    // 0x254160: 0xa7b300e6  sh          $s3, 0xE6($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 230), (uint16_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241980u, 0x25415Cu, 0x254164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254164u;
label_254164:
    // 0x254164: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x254164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254168: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x254168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25416c: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x25416cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x254170: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x254170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254174: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x254174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x254178: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x254178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25417c: 0x1a200032  blez        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x25417Cu;
    {
        const bool branch_taken_0x25417c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x254180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25417Cu;
        // 0x254180: 0xe7a10108  swc1        $f1, 0x108($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25417c) {
            ctx->pc = 0x254248u;
            goto label_254248;
        }
    }
    ctx->pc = 0x254184u;
    // 0x254184: 0x27b50150  addiu       $s5, $sp, 0x150
    ctx->pc = 0x254184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_254188:
    // 0x254188: 0xc0937c4  jal         func_24DF10
    ctx->pc = 0x254188u;
    SET_GPR_U32(ctx, 31, 0x254190u);
    ctx->pc = 0x25418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254188u;
    // 0x25418c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF10u, 0x254188u, 0x254190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254190u;
label_254190:
    // 0x254190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254194: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x254194u;
    {
        const bool branch_taken_0x254194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x254198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254194u;
        // 0x254198: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254194) {
            ctx->pc = 0x254258u;
            goto label_254258;
        }
    }
    ctx->pc = 0x25419Cu;
    // 0x25419c: 0xa7be00e4  sh          $fp, 0xE4($sp)
    ctx->pc = 0x25419cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 228), (uint16_t)GPR_U32(ctx, 30));
    // 0x2541a0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2541a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2541a4: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2541a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2541a8: 0x9443fffc  lhu         $v1, -0x4($v0)
    ctx->pc = 0x2541a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2541ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2541acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541b0: 0x92480036  lbu         $t0, 0x36($s2)
    ctx->pc = 0x2541b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x2541b4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2541b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2541b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541bc: 0xc08bebc  jal         func_22FAF0
    ctx->pc = 0x2541BCu;
    SET_GPR_U32(ctx, 31, 0x2541C4u);
    ctx->pc = 0x2541C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541BCu;
    // 0x2541c0: 0xa7a300f4  sh          $v1, 0xF4($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 244), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FAF0u, 0x2541BCu, 0x2541C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541C4u;
label_2541c4:
    // 0x2541c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2541c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541c8: 0x8fa601c4  lw          $a2, 0x1C4($sp)
    ctx->pc = 0x2541c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x2541cc: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2541ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541d0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2541d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2541d4: 0xae060118  sw          $a2, 0x118($s0)
    ctx->pc = 0x2541d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 6));
label_2541d8:
    // 0x2541d8: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x2541d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2541dc: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x2541dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2541e0: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x2541e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2541e4: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x2541e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2541e8: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x2541e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x2541ec: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x2541ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x2541f0: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x2541f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x2541f4: 0xfc460018  sd          $a2, 0x18($v0)
    ctx->pc = 0x2541f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 6));
    // 0x2541f8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2541f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2541fc: 0x0  nop
    ctx->pc = 0x2541fcu;
    // NOP
    // 0x254200: 0x0  nop
    ctx->pc = 0x254200u;
    // NOP
    // 0x254204: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x254204u;
    {
        const bool branch_taken_0x254204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x254208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254204u;
        // 0x254208: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254204) {
            ctx->pc = 0x2541D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2541d8;
        }
    }
    ctx->pc = 0x25420Cu;
    // 0x25420c: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x25420cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x254210: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x254210u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x254214: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x254214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x254218: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x254218u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25421c: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x25421cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x254220: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x254220u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x254224: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x254224u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x254228: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x254228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25422c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x25422cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x254230: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x254230u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x254234: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x254234u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x254238: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x254238u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25423c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x25423cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x254240: 0x1e20ffd1  bgtz        $s1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x254240u;
    {
        const bool branch_taken_0x254240 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x254240) {
            ctx->pc = 0x254188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254188;
        }
    }
    ctx->pc = 0x254248u;
label_254248:
    // 0x254248: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x254248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25424c: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x25424cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x254250: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x254250u;
    {
        const bool branch_taken_0x254250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254250u;
        // 0x254254: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254250) {
            ctx->pc = 0x254158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254158;
        }
    }
    ctx->pc = 0x254258u;
label_254258:
    // 0x254258: 0xdfb001d0  ld          $s0, 0x1D0($sp)
    ctx->pc = 0x254258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_25425c:
    // 0x25425c: 0xdfb101d8  ld          $s1, 0x1D8($sp)
    ctx->pc = 0x25425cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x254260: 0xdfb201e0  ld          $s2, 0x1E0($sp)
    ctx->pc = 0x254260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x254264: 0xdfb301e8  ld          $s3, 0x1E8($sp)
    ctx->pc = 0x254264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x254268: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x254268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x25426c: 0xdfb501f8  ld          $s5, 0x1F8($sp)
    ctx->pc = 0x25426cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x254270: 0xdfb60200  ld          $s6, 0x200($sp)
    ctx->pc = 0x254270u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x254274: 0xdfb70208  ld          $s7, 0x208($sp)
    ctx->pc = 0x254274u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x254278: 0xdfbe0210  ld          $fp, 0x210($sp)
    ctx->pc = 0x254278u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x25427c: 0xdfbf0218  ld          $ra, 0x218($sp)
    ctx->pc = 0x25427cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x254280: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x254280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x254284: 0x3e00008  jr          $ra
    ctx->pc = 0x254284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254284u;
        // 0x254288: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25428Cu;
    // 0x25428c: 0x0  nop
    ctx->pc = 0x25428cu;
    // NOP
    ctx->pc = 0x254290u;
}
