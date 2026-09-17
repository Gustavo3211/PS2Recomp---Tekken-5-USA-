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

// Function: sub_0023E0E0
// Address: 0x23e0e0 - 0x23e300
void sub_0023E0E0_0x23e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E0E0_0x23e0e0");
#endif

    switch (ctx->pc) {
        case 0x23e144u: goto label_23e144;
        case 0x23e1b0u: goto label_23e1b0;
        case 0x23e234u: goto label_23e234;
        case 0x23e274u: goto label_23e274;
        case 0x23e298u: goto label_23e298;
        case 0x23e2acu: goto label_23e2ac;
        case 0x23e2b4u: goto label_23e2b4;
        default: break;
    }

    ctx->pc = 0x23e0e0u;

    // 0x23e0e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23e0e4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x23e0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x23e0e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23e0e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e0ec: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x23e0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x23e0f0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x23e0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x23e0f4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x23e0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x23e0f8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x23e0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x23e0fc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x23e0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x23e100: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x23e100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x23e104: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x23e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x23e108: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23e108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23e10c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E10Cu;
    {
        const bool branch_taken_0x23e10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e10c) {
            ctx->pc = 0x23E110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E10Cu;
            // 0x23e110: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E114u;
            goto label_23e114;
        }
    }
    ctx->pc = 0x23E114u;
label_23e114:
    // 0x23e114: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x23e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x23e118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e11c: 0x8e54004c  lw          $s4, 0x4C($s2)
    ctx->pc = 0x23e11cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x23e120: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x23e120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e128: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x23e12c: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x23e12cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x23e130: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x23e130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23e134: 0x8e7388d0  lw          $s3, -0x7730($s3)
    ctx->pc = 0x23e134u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936784)));
    // 0x23e138: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23e138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e13c: 0xc0af9fe  jal         func_2BE7F8
    ctx->pc = 0x23E13Cu;
    SET_GPR_U32(ctx, 31, 0x23E144u);
    ctx->pc = 0x23E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E13Cu;
    // 0x23e140: 0x86640012  lh          $a0, 0x12($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7F8u, 0x23E13Cu, 0x23E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E144u;
label_23e144:
    // 0x23e144: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x23e144u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23e148: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x23e148u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e14c: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x23e14cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23e150: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x23e150u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23e154: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x23e154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e158: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x23e158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23e15c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x23e15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e160: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x23e160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e164: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x23e164u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x23e168: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x23e168u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x23e16c: 0x4600051c  madd.s      $f20, $f0, $f0
    ctx->pc = 0x23e16cu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x23e170: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x23e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x23e174: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x23e174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23e178: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E178u;
    {
        const bool branch_taken_0x23e178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E178u;
        // 0x23e17c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e178) {
            ctx->pc = 0x23E198u;
            goto label_23e198;
        }
    }
    ctx->pc = 0x23E180u;
    // 0x23e180: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x23e180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e184: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x23e184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e188: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23E188u;
    {
        const bool branch_taken_0x23e188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e188) {
            ctx->pc = 0x23E198u;
            goto label_23e198;
        }
    }
    ctx->pc = 0x23E190u;
    // 0x23e190: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x23E190u;
    {
        const bool branch_taken_0x23e190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E190u;
        // 0x23e194: 0xa640003c  sh          $zero, 0x3C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e190) {
            ctx->pc = 0x23E2D8u;
            goto label_23e2d8;
        }
    }
    ctx->pc = 0x23E198u;
label_23e198:
    // 0x23e198: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x23E198u;
    {
        const bool branch_taken_0x23e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E198u;
        // 0x23e19c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e198) {
            ctx->pc = 0x23E2ACu;
            goto label_23e2ac;
        }
    }
    ctx->pc = 0x23E1A0u;
    // 0x23e1a0: 0x86640012  lh          $a0, 0x12($s3)
    ctx->pc = 0x23e1a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x23e1a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1a8: 0xc0af9fe  jal         func_2BE7F8
    ctx->pc = 0x23E1A8u;
    SET_GPR_U32(ctx, 31, 0x23E1B0u);
    ctx->pc = 0x23E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1A8u;
    // 0x23e1ac: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7F8u, 0x23E1A8u, 0x23E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1B0u;
label_23e1b0:
    // 0x23e1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23e1b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e1b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23e1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23e1bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23e1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23e1c0: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x23e1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x23e1c4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x23e1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x23e1c8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x23e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23e1cc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x23e1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e1d0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x23e1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e1d4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x23e1d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x23e1d8: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x23e1d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x23e1dc: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x23e1dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x23e1e0: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x23e1e0u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x23e1e4: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x23e1e4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23e1e8: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x23e1e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23e1ec: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x23e1ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23e1f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23e1f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23e1f4: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x23e1f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23e1f8: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x23e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23e1fc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x23e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23e200: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x23e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e204: 0xc7808790  lwc1        $f0, -0x7870($gp)
    ctx->pc = 0x23e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e208: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23e208u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e20c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x23e20cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x23e210: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x23e210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x23e214: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x23e214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23e218: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x23e218u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23e21c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x23e21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x23e220: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23e220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23e224: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x23e224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23e228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23e22c: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23E22Cu;
    SET_GPR_U32(ctx, 31, 0x23E234u);
    ctx->pc = 0x23E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E22Cu;
    // 0x23e230: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23E22Cu, 0x23E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E234u;
label_23e234:
    // 0x23e234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23e234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e238: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x23e238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23e23c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x23E23Cu;
    {
        const bool branch_taken_0x23e23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E23Cu;
        // 0x23e240: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e23c) {
            ctx->pc = 0x23E2DCu;
            goto label_23e2dc;
        }
    }
    ctx->pc = 0x23E244u;
    // 0x23e244: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x23e244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23e248: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x23e248u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x23e24c: 0x2610b660  addiu       $s0, $s0, -0x49A0
    ctx->pc = 0x23e24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948448));
    // 0x23e250: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23e254: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23e254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23e258: 0x54640020  bnel        $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23E258u;
    {
        const bool branch_taken_0x23e258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23e258) {
            ctx->pc = 0x23E25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E258u;
            // 0x23e25c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E2DCu;
            goto label_23e2dc;
        }
    }
    ctx->pc = 0x23E260u;
    // 0x23e260: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23e260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23e264: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E264u;
    {
        const bool branch_taken_0x23e264 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E264u;
        // 0x23e268: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e264) {
            ctx->pc = 0x23E274u;
            goto label_23e274;
        }
    }
    ctx->pc = 0x23E26Cu;
    // 0x23e26c: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23E26Cu;
    SET_GPR_U32(ctx, 31, 0x23E274u);
    ctx->pc = 0x23E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E26Cu;
    // 0x23e270: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23E26Cu, 0x23E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E274u;
label_23e274:
    // 0x23e274: 0xc7808794  lwc1        $f0, -0x786C($gp)
    ctx->pc = 0x23e274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e278: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x23e278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e27c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x23E27Cu;
    {
        const bool branch_taken_0x23e27c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e27c) {
            ctx->pc = 0x23E2ACu;
            goto label_23e2ac;
        }
    }
    ctx->pc = 0x23E284u;
    // 0x23e284: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23e284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23e288: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E288u;
    {
        const bool branch_taken_0x23e288 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E288u;
        // 0x23e28c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e288) {
            ctx->pc = 0x23E298u;
            goto label_23e298;
        }
    }
    ctx->pc = 0x23E290u;
    // 0x23e290: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23E290u;
    SET_GPR_U32(ctx, 31, 0x23E298u);
    ctx->pc = 0x23E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E290u;
    // 0x23e294: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23E290u, 0x23E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E298u;
label_23e298:
    // 0x23e298: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23e298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23e29c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E29Cu;
    {
        const bool branch_taken_0x23e29c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E29Cu;
        // 0x23e2a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e29c) {
            ctx->pc = 0x23E2ACu;
            goto label_23e2ac;
        }
    }
    ctx->pc = 0x23E2A4u;
    // 0x23e2a4: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23E2A4u;
    SET_GPR_U32(ctx, 31, 0x23E2ACu);
    ctx->pc = 0x23E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E2A4u;
    // 0x23e2a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23E2A4u, 0x23E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2ACu;
label_23e2ac:
    // 0x23e2ac: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23E2ACu;
    SET_GPR_U32(ctx, 31, 0x23E2B4u);
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23E2ACu, 0x23E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2B4u;
label_23e2b4:
    // 0x23e2b4: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x23e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x23e2b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23e2bc: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23e2c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23e2c4: 0x8c84b54c  lw          $a0, -0x4AB4($a0)
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948172)));
    // 0x23e2c8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x23e2c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23e2cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E2CCu;
    {
        const bool branch_taken_0x23e2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e2cc) {
            ctx->pc = 0x23E2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E2CCu;
            // 0x23e2d0: 0xa640003c  sh          $zero, 0x3C($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E2D4u;
            goto label_23e2d4;
        }
    }
    ctx->pc = 0x23E2D4u;
label_23e2d4:
    // 0x23e2d4: 0xe6540038  swc1        $f20, 0x38($s2)
    ctx->pc = 0x23e2d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_23e2d8:
    // 0x23e2d8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x23e2d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23e2dc:
    // 0x23e2dc: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x23e2dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23e2e0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x23e2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23e2e4: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x23e2e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23e2e8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x23e2e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23e2ec: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x23e2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e2f0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x23e2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23e2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x23E2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2F4u;
        // 0x23e2f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E2FCu;
    // 0x23e2fc: 0x0  nop
    ctx->pc = 0x23e2fcu;
    // NOP
    ctx->pc = 0x23e300u;
}
