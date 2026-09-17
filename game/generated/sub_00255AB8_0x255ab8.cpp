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

// Function: sub_00255AB8
// Address: 0x255ab8 - 0x255e58
void sub_00255AB8_0x255ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255AB8_0x255ab8");
#endif

    switch (ctx->pc) {
        case 0x255b0cu: goto label_255b0c;
        case 0x255b14u: goto label_255b14;
        case 0x255c54u: goto label_255c54;
        case 0x255c98u: goto label_255c98;
        case 0x255ca0u: goto label_255ca0;
        case 0x255cf0u: goto label_255cf0;
        case 0x255d28u: goto label_255d28;
        case 0x255e10u: goto label_255e10;
        default: break;
    }

    ctx->pc = 0x255ab8u;

    // 0x255ab8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x255ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x255abc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x255abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x255ac0: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x255ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x255ac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x255ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ac8: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x255ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x255acc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x255accu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ad0: 0x244437e0  addiu       $a0, $v0, 0x37E0
    ctx->pc = 0x255ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    // 0x255ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ad8: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x255ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x255adc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x255adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ae0: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x255ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x255ae4: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x255ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x255ae8: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x255ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x255aec: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x255aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x255af0: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x255af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x255af4: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x255af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x255af8: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x255af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x255afc: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x255afcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x255b00: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x255b00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x255b04: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x255B04u;
    SET_GPR_U32(ctx, 31, 0x255B0Cu);
    ctx->pc = 0x255B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B04u;
    // 0x255b08: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x255B04u, 0x255B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B0Cu;
label_255b0c:
    // 0x255b0c: 0xc0b778c  jal         func_2DDE30
    ctx->pc = 0x255B0Cu;
    SET_GPR_U32(ctx, 31, 0x255B14u);
    ctx->pc = 0x255B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B0Cu;
    // 0x255b10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDE30u, 0x255B0Cu, 0x255B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B14u;
label_255b14:
    // 0x255b14: 0x3c0142aa  lui         $at, 0x42AA
    ctx->pc = 0x255b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17066 << 16));
    // 0x255b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255b1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255b20: 0x450300bf  bc1tl       . + 4 + (0xBF << 2)
    ctx->pc = 0x255B20u;
    {
        const bool branch_taken_0x255b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255b20) {
            ctx->pc = 0x255B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255B20u;
            // 0x255b24: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255E20u;
            goto label_255e20;
        }
    }
    ctx->pc = 0x255B28u;
    // 0x255b28: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x255b28u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255b2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x255b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x255b30: 0xc7818a38  lwc1        $f1, -0x75C8($gp)
    ctx->pc = 0x255b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255b34: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x255b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255b38: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x255b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x255b3c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x255b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x255b40: 0xc7838a3c  lwc1        $f3, -0x75C4($gp)
    ctx->pc = 0x255b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x255b44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x255b48: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x255b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255b4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x255B4Cu;
    {
        const bool branch_taken_0x255b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B4Cu;
        // 0x255b50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b4c) {
            ctx->pc = 0x255B60u;
            goto label_255b60;
        }
    }
    ctx->pc = 0x255B54u;
    // 0x255b54: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x255b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x255b58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255B58u;
    {
        const bool branch_taken_0x255b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B58u;
        // 0x255b5c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b58) {
            ctx->pc = 0x255B68u;
            goto label_255b68;
        }
    }
    ctx->pc = 0x255B60u;
label_255b60:
    // 0x255b60: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x255b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x255b64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x255b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255b68:
    // 0x255b68: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x255b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x255b6c: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x255b6cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x255b70: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x255b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x255b74: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x255b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x255b78: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x255b78u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x255b7c: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x255b7cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x255b80: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x255b80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x255b84: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x255b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x255b88: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x255b88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255b8c: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x255b8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255b90: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x255b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255b94: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x255b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x255b98: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x255b98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255b9c: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x255b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x255ba0: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x255ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255ba4: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x255ba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x255ba8: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x255ba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x255bac: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x255bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x255bb0: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x255bb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x255bb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x255BB4u;
    {
        const bool branch_taken_0x255bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BB4u;
        // 0x255bb8: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bb4) {
            ctx->pc = 0x255BC8u;
            goto label_255bc8;
        }
    }
    ctx->pc = 0x255BBCu;
    // 0x255bbc: 0x4a0003bf  vwaitq
    ctx->pc = 0x255bbcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x255bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255BC0u;
    {
        const bool branch_taken_0x255bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BC0u;
        // 0x255bc4: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bc0) {
            ctx->pc = 0x255BD0u;
            goto label_255bd0;
        }
    }
    ctx->pc = 0x255BC8u;
label_255bc8:
    // 0x255bc8: 0x4a0003bf  vwaitq
    ctx->pc = 0x255bc8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x255bcc: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x255bccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_255bd0:
    // 0x255bd0: 0x4aa0012c  vsub.yw     $vf4, $vf0, $vf0
    ctx->pc = 0x255bd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x255bd4: 0x4b60016c  vsub.xzw    $vf5, $vf0, $vf0
    ctx->pc = 0x255bd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x255bd8: 0x4aa001ac  vsub.yw     $vf6, $vf0, $vf0
    ctx->pc = 0x255bd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x255bdc: 0x4a800143  vaddw.y     $vf5, $vf0, $vf0w
    ctx->pc = 0x255bdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x255be0: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x255be0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x255be4: 0x4a5c0104  vsubx.z     $vf4, $vf0, $vf28x
    ctx->pc = 0x255be4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x255be8: 0x4b1c01a8  vadd.x      $vf6, $vf0, $vf28
    ctx->pc = 0x255be8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x255bec: 0x4b1c0101  vaddy.x     $vf4, $vf0, $vf28y
    ctx->pc = 0x255becu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x255bf0: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x255bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x255bf4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x255bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x255bf8: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x255bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x255bfc: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x255bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x255c00: 0xc7828a40  lwc1        $f2, -0x75C0($gp)
    ctx->pc = 0x255c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255c04: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x255c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x255c08: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x255c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x255c0c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x255c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x255c10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255c14: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x255c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x255c18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x255c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x255c1c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x255c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x255c20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x255c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255c28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255c2c: 0xc46006c0  lwc1        $f0, 0x6C0($v1)
    ctx->pc = 0x255c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255c30: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x255c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x255c34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x255c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x255c38: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x255c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x255c3c: 0xdfa30088  ld          $v1, 0x88($sp)
    ctx->pc = 0x255c3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x255c40: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x255c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x255c44: 0xffa30078  sd          $v1, 0x78($sp)
    ctx->pc = 0x255c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 3));
    // 0x255c48: 0xdfa20080  ld          $v0, 0x80($sp)
    ctx->pc = 0x255c48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x255c4c: 0xc095636  jal         func_2558D8
    ctx->pc = 0x255C4Cu;
    SET_GPR_U32(ctx, 31, 0x255C54u);
    ctx->pc = 0x255C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C4Cu;
    // 0x255c50: 0xffa20070  sd          $v0, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2558D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2558D8u, 0x255C4Cu, 0x255C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C54u;
label_255c54:
    // 0x255c54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255C54u;
    {
        const bool branch_taken_0x255c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C54u;
        // 0x255c58: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c54) {
            ctx->pc = 0x255C68u;
            goto label_255c68;
        }
    }
    ctx->pc = 0x255C5Cu;
    // 0x255c5c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x255c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x255c60: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x255c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x255c64: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x255c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_255c68:
    // 0x255c68: 0x460006c  bltz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x255C68u;
    {
        const bool branch_taken_0x255c68 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x255C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C68u;
        // 0x255c6c: 0x27b30080  addiu       $s3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c68) {
            ctx->pc = 0x255E1Cu;
            goto label_255e1c;
        }
    }
    ctx->pc = 0x255C70u;
    // 0x255c70: 0x27be0090  addiu       $fp, $sp, 0x90
    ctx->pc = 0x255c70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x255c74: 0xc7948a44  lwc1        $f20, -0x75BC($gp)
    ctx->pc = 0x255c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x255c78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x255c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c7c: 0xc7968a48  lwc1        $f22, -0x75B8($gp)
    ctx->pc = 0x255c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x255c80: 0x24163332  addiu       $s6, $zero, 0x3332
    ctx->pc = 0x255c80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13106));
    // 0x255c84: 0xc7958a4c  lwc1        $f21, -0x75B4($gp)
    ctx->pc = 0x255c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x255c88: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x255c88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x255c8c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x255c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c90: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x255c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c94: 0x0  nop
    ctx->pc = 0x255c94u;
    // NOP
label_255c98:
    // 0x255c98: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x255C98u;
    SET_GPR_U32(ctx, 31, 0x255CA0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x255C98u, 0x255CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255CA0u;
label_255ca0:
    // 0x255ca0: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x255ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x255ca4: 0x56001a  div         $zero, $v0, $s6
    ctx->pc = 0x255ca4u;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x255ca8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x255ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x255cac: 0x2010  mfhi        $a0
    ctx->pc = 0x255cacu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x255cb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x255cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x255cb4: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x255cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x255cb8: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x255cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x255cbc: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x255cbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x255cc0: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x255cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x255cc4: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x255cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x255cc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255CC8u;
    {
        const bool branch_taken_0x255cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255cc8) {
            ctx->pc = 0x255CE0u;
            goto label_255ce0;
        }
    }
    ctx->pc = 0x255CD0u;
    // 0x255cd0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x255cd0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255cd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x255CD4u;
    {
        const bool branch_taken_0x255cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CD4u;
        // 0x255cd8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255cd4) {
            ctx->pc = 0x255CE8u;
            goto label_255ce8;
        }
    }
    ctx->pc = 0x255CDCu;
    // 0x255cdc: 0x0  nop
    ctx->pc = 0x255cdcu;
    // NOP
label_255ce0:
    // 0x255ce0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x255ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255ce4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x255ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_255ce8:
    // 0x255ce8: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x255CE8u;
    SET_GPR_U32(ctx, 31, 0x255CF0u);
    ctx->pc = 0x255CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255CE8u;
    // 0x255cec: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x255CE8u, 0x255CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255CF0u;
label_255cf0:
    // 0x255cf0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x255cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x255cf4: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x255cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x255cf8: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x255cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x255cfc: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x255cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x255d00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255D00u;
    {
        const bool branch_taken_0x255d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D00u;
        // 0x255d04: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d00) {
            ctx->pc = 0x255D18u;
            goto label_255d18;
        }
    }
    ctx->pc = 0x255D08u;
    // 0x255d08: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x255d08u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255d0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x255D0Cu;
    {
        const bool branch_taken_0x255d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D0Cu;
        // 0x255d10: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d0c) {
            ctx->pc = 0x255D20u;
            goto label_255d20;
        }
    }
    ctx->pc = 0x255D14u;
    // 0x255d14: 0x0  nop
    ctx->pc = 0x255d14u;
    // NOP
label_255d18:
    // 0x255d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x255d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255d1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x255d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_255d20:
    // 0x255d20: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x255D20u;
    SET_GPR_U32(ctx, 31, 0x255D28u);
    ctx->pc = 0x255D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D20u;
    // 0x255d24: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x255D20u, 0x255D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D28u;
label_255d28:
    // 0x255d28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255d2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255d30: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x255d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x255d34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x255d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d38: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x255d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x255d3c: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x255d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x255d40: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x255d40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x255d44: 0xdfa30098  ld          $v1, 0x98($sp)
    ctx->pc = 0x255d44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x255d48: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x255d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x255d4c: 0xffa20080  sd          $v0, 0x80($sp)
    ctx->pc = 0x255d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
    // 0x255d50: 0xffa30088  sd          $v1, 0x88($sp)
    ctx->pc = 0x255d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 3));
    // 0x255d54: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x255d54u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x255d58: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x255d58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255d5c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x255d5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x255d60: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x255d60u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x255d64: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x255d64u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x255d68: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x255d68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255d6c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x255d6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255d70: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x255d70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255d74: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x255d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x255d78: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x255d78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x255d7c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x255d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d80: 0xafb500a4  sw          $s5, 0xA4($sp)
    ctx->pc = 0x255d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 21));
    // 0x255d84: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x255d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x255d88: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x255d88u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255d8c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x255d8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x255d90: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x255d90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x255d94: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x255d94u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x255d98: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x255d98u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x255d9c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x255d9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255da0: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x255da0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255da4: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x255da4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x255da8: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x255da8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x255dac: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x255dacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x255db0: 0xdaf00000  lqc2        $vf16, 0x0($s7)
    ctx->pc = 0x255db0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x255db4: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x255db4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x255db8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x255db8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x255dbc: 0xda3f0000  lqc2        $vf31, 0x0($s1)
    ctx->pc = 0x255dbcu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x255dc0: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x255dc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x255dc4: 0x4bc1fc08  vmaddx.xyz  $vf16, $vf31, $vf1x
    ctx->pc = 0x255dc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x255dc8: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x255dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x255dcc: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x255dccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255dd0: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x255dd0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255dd4: 0xda9f0000  lqc2        $vf31, 0x0($s4)
    ctx->pc = 0x255dd4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x255dd8: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x255dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x255ddc: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x255ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x255de0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x255de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255de4: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x255de4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x255de8: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x255de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x255dec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x255decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x255df0: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x255df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x255df4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x255df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x255df8: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x255df8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x255dfc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x255dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x255e00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x255e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e04: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x255e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x255e08: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x255E08u;
    SET_GPR_U32(ctx, 31, 0x255E10u);
    ctx->pc = 0x255E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E08u;
    // 0x255e0c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x255E08u, 0x255E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E10u;
label_255e10:
    // 0x255e10: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x255e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x255e14: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x255E14u;
    {
        const bool branch_taken_0x255e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255e14) {
            ctx->pc = 0x255C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255c98;
        }
    }
    ctx->pc = 0x255E1Cu;
label_255e1c:
    // 0x255e1c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x255e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_255e20:
    // 0x255e20: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x255e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255e24: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x255e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x255e28: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x255e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x255e2c: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x255e2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x255e30: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x255e30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x255e34: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x255e34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x255e38: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x255e38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x255e3c: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x255e3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255e40: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x255e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255e44: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x255e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x255e48: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x255e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x255e4c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x255e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x255e50: 0x3e00008  jr          $ra
    ctx->pc = 0x255E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E50u;
        // 0x255e54: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255E58u;
}
