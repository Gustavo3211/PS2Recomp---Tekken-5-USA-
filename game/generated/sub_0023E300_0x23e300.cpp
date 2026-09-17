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

// Function: sub_0023E300
// Address: 0x23e300 - 0x23e530
void sub_0023E300_0x23e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E300_0x23e300");
#endif

    switch (ctx->pc) {
        case 0x23e350u: goto label_23e350;
        case 0x23e374u: goto label_23e374;
        case 0x23e430u: goto label_23e430;
        case 0x23e444u: goto label_23e444;
        case 0x23e48cu: goto label_23e48c;
        case 0x23e4a0u: goto label_23e4a0;
        case 0x23e4b4u: goto label_23e4b4;
        case 0x23e4dcu: goto label_23e4dc;
        case 0x23e50cu: goto label_23e50c;
        default: break;
    }

    ctx->pc = 0x23e300u;

    // 0x23e300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23e304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e308: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x23e308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x23e30c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x23e30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x23e310: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x23e310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e314: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x23e314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x23e318: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23e318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e31c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x23e31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x23e320: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x23e320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x23e324: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x23e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x23e328: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x23e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x23e32c: 0x8e93004c  lw          $s3, 0x4C($s4)
    ctx->pc = 0x23e32cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x23e330: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e334: 0x8e900034  lw          $s0, 0x34($s4)
    ctx->pc = 0x23e334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x23e338: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x23e338u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x23e33c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23e33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23e340: 0x8e3188d0  lw          $s1, -0x7730($s1)
    ctx->pc = 0x23e340u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936784)));
    // 0x23e344: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23e344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e348: 0xc0af9fe  jal         func_2BE7F8
    ctx->pc = 0x23E348u;
    SET_GPR_U32(ctx, 31, 0x23E350u);
    ctx->pc = 0x23E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E348u;
    // 0x23e34c: 0x86240012  lh          $a0, 0x12($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7F8u, 0x23E348u, 0x23E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E350u;
label_23e350:
    // 0x23e350: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x23e350u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23e354: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x23e354u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e358: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x23e358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23e35c: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x23e35cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23e360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e364: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x23e364u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x23e368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23e368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e36c: 0xc0af9fe  jal         func_2BE7F8
    ctx->pc = 0x23E36Cu;
    SET_GPR_U32(ctx, 31, 0x23E374u);
    ctx->pc = 0x23E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E36Cu;
    // 0x23e370: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7F8u, 0x23E36Cu, 0x23E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E374u;
label_23e374:
    // 0x23e374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23e374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23e378: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23e378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23e37c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23e37cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e380: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x23e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e384: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x23e384u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x23e388: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x23e388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x23e38c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x23e38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x23e390: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x23e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23e394: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x23e394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e398: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x23e398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e39c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x23e39cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x23e3a0: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x23e3a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0])));
    // 0x23e3a4: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x23e3a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x23e3a8: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x23e3a8u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x23e3ac: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23e3acu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e3b0: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x23e3b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23e3b4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x23e3b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23e3b8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23e3b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23e3bc: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x23e3bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23e3c0: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23e3c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23e3c8: 0x246488d0  addiu       $a0, $v1, -0x7730
    ctx->pc = 0x23e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x23e3cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x23e3d0: 0x84430148  lh          $v1, 0x148($v0)
    ctx->pc = 0x23e3d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x23e3d4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E3D4u;
    {
        const bool branch_taken_0x23e3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3D4u;
        // 0x23e3d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3d4) {
            ctx->pc = 0x23E3ECu;
            goto label_23e3ec;
        }
    }
    ctx->pc = 0x23E3DCu;
    // 0x23e3dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23e3e0: 0x84430148  lh          $v1, 0x148($v0)
    ctx->pc = 0x23e3e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x23e3e4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E3E4u;
    {
        const bool branch_taken_0x23e3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e3e4) {
            ctx->pc = 0x23E3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E3E4u;
            // 0x23e3e8: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E3F4u;
            goto label_23e3f4;
        }
    }
    ctx->pc = 0x23E3ECu;
label_23e3ec:
    // 0x23e3ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23e3ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e3f0: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x23e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_23e3f4:
    // 0x23e3f4: 0xc7808798  lwc1        $f0, -0x7868($gp)
    ctx->pc = 0x23e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e3f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e3fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E3FCu;
    {
        const bool branch_taken_0x23e3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3FCu;
        // 0x23e400: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3fc) {
            ctx->pc = 0x23E410u;
            goto label_23e410;
        }
    }
    ctx->pc = 0x23E404u;
    // 0x23e404: 0xc780879c  lwc1        $f0, -0x7864($gp)
    ctx->pc = 0x23e404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23E408u;
    {
        const bool branch_taken_0x23e408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E408u;
        // 0x23e40c: 0xc7a10038  lwc1        $f1, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e408) {
            ctx->pc = 0x23E418u;
            goto label_23e418;
        }
    }
    ctx->pc = 0x23E410u;
label_23e410:
    // 0x23e410: 0xc78087a0  lwc1        $f0, -0x7860($gp)
    ctx->pc = 0x23e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e414: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x23e414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23e418:
    // 0x23e418: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x23e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23e41c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x23e41cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23e420: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x23e420u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23e424: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x23e424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23e428: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23E428u;
    SET_GPR_U32(ctx, 31, 0x23E430u);
    ctx->pc = 0x23E42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E428u;
    // 0x23e42c: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23E428u, 0x23E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E430u;
label_23e430:
    // 0x23e430: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23e430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23e434: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x23e434u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x23e438: 0x2631b548  addiu       $s1, $s1, -0x4AB8
    ctx->pc = 0x23e438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948168));
    // 0x23e43c: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23E43Cu;
    SET_GPR_U32(ctx, 31, 0x23E444u);
    ctx->pc = 0x23E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E43Cu;
    // 0x23e440: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23E43Cu, 0x23E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E444u;
label_23e444:
    // 0x23e444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23e444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e448: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x23e448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23e44c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x23E44Cu;
    {
        const bool branch_taken_0x23e44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E44Cu;
        // 0x23e450: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e44c) {
            ctx->pc = 0x23E510u;
            goto label_23e510;
        }
    }
    ctx->pc = 0x23E454u;
    // 0x23e454: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x23e454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23e458: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x23e458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x23e45c: 0x2610b6b0  addiu       $s0, $s0, -0x4950
    ctx->pc = 0x23e45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948528));
    // 0x23e460: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23e460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23e464: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23e468: 0x54640029  bnel        $v1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x23E468u;
    {
        const bool branch_taken_0x23e468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23e468) {
            ctx->pc = 0x23E46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E468u;
            // 0x23e46c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E510u;
            goto label_23e510;
        }
    }
    ctx->pc = 0x23E470u;
    // 0x23e470: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23E470u;
    {
        const bool branch_taken_0x23e470 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e470) {
            ctx->pc = 0x23E474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E470u;
            // 0x23e474: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E4A4u;
            goto label_23e4a4;
        }
    }
    ctx->pc = 0x23E478u;
    // 0x23e478: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23e478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23e47c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E47Cu;
    {
        const bool branch_taken_0x23e47c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E47Cu;
        // 0x23e480: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e47c) {
            ctx->pc = 0x23E48Cu;
            goto label_23e48c;
        }
    }
    ctx->pc = 0x23E484u;
    // 0x23e484: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23E484u;
    SET_GPR_U32(ctx, 31, 0x23E48Cu);
    ctx->pc = 0x23E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E484u;
    // 0x23e488: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23E484u, 0x23E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E48Cu;
label_23e48c:
    // 0x23e48c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23e490: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E490u;
    {
        const bool branch_taken_0x23e490 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E490u;
        // 0x23e494: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e490) {
            ctx->pc = 0x23E4A0u;
            goto label_23e4a0;
        }
    }
    ctx->pc = 0x23E498u;
    // 0x23e498: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23E498u;
    SET_GPR_U32(ctx, 31, 0x23E4A0u);
    ctx->pc = 0x23E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E498u;
    // 0x23e49c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23E498u, 0x23E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4A0u;
label_23e4a0:
    // 0x23e4a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23e4a4:
    // 0x23e4a4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E4A4u;
    {
        const bool branch_taken_0x23e4a4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4A4u;
        // 0x23e4a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4a4) {
            ctx->pc = 0x23E4B4u;
            goto label_23e4b4;
        }
    }
    ctx->pc = 0x23E4ACu;
    // 0x23e4ac: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23E4ACu;
    SET_GPR_U32(ctx, 31, 0x23E4B4u);
    ctx->pc = 0x23E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E4ACu;
    // 0x23e4b0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23E4ACu, 0x23E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4B4u;
label_23e4b4:
    // 0x23e4b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x23e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23e4b8: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x23e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x23e4bc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23e4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23e4c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E4C0u;
    {
        const bool branch_taken_0x23e4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4c0) {
            ctx->pc = 0x23E4D4u;
            goto label_23e4d4;
        }
    }
    ctx->pc = 0x23E4C8u;
    // 0x23e4c8: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x23e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x23e4cc: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23E4CCu;
    {
        const bool branch_taken_0x23e4cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4CCu;
        // 0x23e4d0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4cc) {
            ctx->pc = 0x23E510u;
            goto label_23e510;
        }
    }
    ctx->pc = 0x23E4D4u;
label_23e4d4:
    // 0x23e4d4: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23E4D4u;
    SET_GPR_U32(ctx, 31, 0x23E4DCu);
    ctx->pc = 0x23E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E4D4u;
    // 0x23e4d8: 0xa680003c  sh          $zero, 0x3C($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 60), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23E4D4u, 0x23E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4DCu;
label_23e4dc:
    // 0x23e4dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23e4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23e4e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E4E0u;
    {
        const bool branch_taken_0x23e4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4E0u;
        // 0x23e4e4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4e0) {
            ctx->pc = 0x23E510u;
            goto label_23e510;
        }
    }
    ctx->pc = 0x23E4E8u;
    // 0x23e4e8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23e4ec: 0x24450ae0  addiu       $a1, $v0, 0xAE0
    ctx->pc = 0x23e4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2784));
    // 0x23e4f0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x23e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x160AE8u));
    // 0x23e4f4: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E4F4u;
    {
        const bool branch_taken_0x23e4f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x23E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4F4u;
        // 0x23e4f8: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4f4) {
            ctx->pc = 0x23E514u;
            goto label_23e514;
        }
    }
    ctx->pc = 0x23E4FCu;
    // 0x23e4fc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x23e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23e500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23e500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e504: 0xc090592  jal         func_241648
    ctx->pc = 0x23E504u;
    SET_GPR_U32(ctx, 31, 0x23E50Cu);
    ctx->pc = 0x23E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E504u;
    // 0x23e508: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241648u, 0x23E504u, 0x23E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E50Cu;
label_23e50c:
    // 0x23e50c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x23e50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23e510:
    // 0x23e510: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x23e510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_23e514:
    // 0x23e514: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x23e514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23e518: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x23e518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23e51c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x23e51cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23e520: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x23e520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e524: 0x3e00008  jr          $ra
    ctx->pc = 0x23E524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E524u;
        // 0x23e528: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E52Cu;
    // 0x23e52c: 0x0  nop
    ctx->pc = 0x23e52cu;
    // NOP
    ctx->pc = 0x23e530u;
}
