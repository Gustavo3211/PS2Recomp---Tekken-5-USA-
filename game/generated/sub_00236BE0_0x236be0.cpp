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

// Function: sub_00236BE0
// Address: 0x236be0 - 0x236da8
void sub_00236BE0_0x236be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236BE0_0x236be0");
#endif

    switch (ctx->pc) {
        case 0x236cc8u: goto label_236cc8;
        case 0x236cd8u: goto label_236cd8;
        default: break;
    }

    ctx->pc = 0x236be0u;

    // 0x236be0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x236be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x236be4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236bec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x236becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x236bf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bf4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x236bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x236bf8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x236bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bfc: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x236bfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x236c00: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x236c00u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x236c04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x236c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x236c08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x236c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x236c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x236c10: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x236c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c14: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x236c14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x236c18: 0x46150581  sub.s       $f22, $f0, $f21
    ctx->pc = 0x236c18u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x236c1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x236c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x236c20: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x236c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c24: 0xe7b70050  swc1        $f23, 0x50($sp)
    ctx->pc = 0x236c24u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x236c28: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x236c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c2c: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x236c2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x236c30: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x236c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c34: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x236c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c38: 0x4600a846  mov.s       $f1, $f21
    ctx->pc = 0x236c38u;
    ctx->f[1] = FPU_MOV_S(ctx->f[21]);
    // 0x236c3c: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x236c3cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236c40: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x236c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x236c44: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x236c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x236c48: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x236c48u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236c4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236c50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236c54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x236c54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x236c58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x236c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x236c5c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x236c5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x236c60: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x236c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x236c64: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x236c64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x236c68: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x236c68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x236c6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x236c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c70: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x236c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c74: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x236c74u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x236c78: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x236c78u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x236c7c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x236c7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x236c80: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x236c80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x236c84: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x236c84u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236c88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236c8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x236c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x236c90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x236c90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x236c94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x236c94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x236c98: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x236c98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x236c9c: 0x4be181bc  vmulax.xyzw $ACC, $vf16, $vf1x
    ctx->pc = 0x236c9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x236ca0: 0x4be28c08  vmaddx.xyzw $vf16, $vf17, $vf2x
    ctx->pc = 0x236ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x236ca4: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x236ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x236ca8: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x236ca8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x236cac: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x236cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x236cb0: 0x46166b42  mul.s       $f13, $f13, $f22
    ctx->pc = 0x236cb0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x236cb4: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x236cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x236cb8: 0x1140002f  beqz        $t2, . + 4 + (0x2F << 2)
    ctx->pc = 0x236CB8u;
    {
        const bool branch_taken_0x236cb8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x236CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CB8u;
        // 0x236cbc: 0x460d65c0  add.s       $f23, $f12, $f13 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cb8) {
            ctx->pc = 0x236D78u;
            goto label_236d78;
        }
    }
    ctx->pc = 0x236CC0u;
    // 0x236cc0: 0xc08cb0c  jal         func_232C30
    ctx->pc = 0x236CC0u;
    SET_GPR_U32(ctx, 31, 0x236CC8u);
    ctx->pc = 0x232C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C30u, 0x236CC0u, 0x236CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CC8u;
label_236cc8:
    // 0x236cc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x236cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ccc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x236cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cd0: 0xc08cb0c  jal         func_232C30
    ctx->pc = 0x236CD0u;
    SET_GPR_U32(ctx, 31, 0x236CD8u);
    ctx->pc = 0x236CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CD0u;
    // 0x236cd4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C30u, 0x236CD0u, 0x236CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CD8u;
label_236cd8:
    // 0x236cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cdc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x236cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x236ce0: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x236ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ce4: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x236ce4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x236ce8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x236ce8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x236cec: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x236cecu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x236cf0: 0xd89f0000  lqc2        $vf31, 0x0($a0)
    ctx->pc = 0x236cf0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236cf4: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x236cf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x236cf8: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x236cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x236cfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236d00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x236d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x236d04: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x236d04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d08: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x236d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236d0c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x236d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236d10: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x236d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236d14: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x236d14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x236d18: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x236d18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x236d1c: 0x4600009c  madd.s      $f2, $f0, $f0
    ctx->pc = 0x236d1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x236d20: 0x460218d6  rsqrt.s     $f3, $f3, $f2
    ctx->pc = 0x236d20u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x236d24: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x236d24u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236d28: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x236d28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x236d2c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x236d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x236d30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x236d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x236d34: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x236d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x236d38: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x236d38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x236d3c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x236d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d40: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x236d40u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236d44: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x236d44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x236d48: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x236d48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x236d4c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x236d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x236d50: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x236d50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x236d54: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x236d54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d58: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x236d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d5c: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x236d5cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236d60: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x236d60u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236d64: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x236d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x236d68: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x236d68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x236d6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236d70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236d74: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x236d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_236d78:
    // 0x236d78: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x236d78u;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
    // 0x236d7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x236d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236d80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x236d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236d84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236d88: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x236d88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x236d8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x236d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236d90: 0xc7b70050  lwc1        $f23, 0x50($sp)
    ctx->pc = 0x236d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x236d94: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x236d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x236d98: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x236d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x236d9c: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x236d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x236da0: 0x3e00008  jr          $ra
    ctx->pc = 0x236DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DA0u;
        // 0x236da4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236DA8u;
}
