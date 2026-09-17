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

// Function: sub_0036D240
// Address: 0x36d240 - 0x36d760
void sub_0036D240_0x36d240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D240_0x36d240");
#endif

    switch (ctx->pc) {
        case 0x36d2d4u: goto label_36d2d4;
        case 0x36d2ecu: goto label_36d2ec;
        default: break;
    }

    ctx->pc = 0x36d240u;

    // 0x36d240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36d240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36d244: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x36d244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x36d248: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36d248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d24c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36d24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x36d250: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36d250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d254: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x36d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x36d258: 0x265300a0  addiu       $s3, $s2, 0xA0
    ctx->pc = 0x36d258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x36d25c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x36d25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x36d260: 0x26540030  addiu       $s4, $s2, 0x30
    ctx->pc = 0x36d260u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x36d264: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36d268: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x36d268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x36d26c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x36d26cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36d270: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x36d270u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x36d274: 0xda710000  lqc2        $vf17, 0x0($s3)
    ctx->pc = 0x36d274u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36d278: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x36d278u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d27c: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d280: 0x264200b0  addiu       $v0, $s2, 0xB0
    ctx->pc = 0x36d280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x36d284: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x36d284u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d288: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x36d288u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x36d28c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x36d28cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x36d290: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x36d290u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x36d294: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d294u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d298: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x36d298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d29c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x36d29cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d2a0: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x36d2a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d2a4: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x36d2a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d2a8: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d2ac: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x36d2acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2b0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36d2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d2b4: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x36d2b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x36d2b8: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x36d2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36d2bc: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x36d2bcu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x36d2c0: 0x460d0344  c1          0xD0344
    ctx->pc = 0x36d2c0u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x36d2c4: 0x2790c170  addiu       $s0, $gp, -0x3E90
    ctx->pc = 0x36d2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x36d2c8: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x36d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d2cc: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x36D2CCu;
    SET_GPR_U32(ctx, 31, 0x36D2D4u);
    ctx->pc = 0x36D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D2CCu;
    // 0x36d2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x36D2CCu, 0x36D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2D4u;
label_36d2d4:
    // 0x36d2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2d8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x36d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d2dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36d2dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36d2e0: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x36d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36d2e4: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x36D2E4u;
    SET_GPR_U32(ctx, 31, 0x36D2ECu);
    ctx->pc = 0x36D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D2E4u;
    // 0x36d2e8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x36D2E4u, 0x36D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2ECu;
label_36d2ec:
    // 0x36d2ec: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x36d2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x36d2f0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x36d2f0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x36d2f4: 0xc78490b0  lwc1        $f4, -0x6F50($gp)
    ctx->pc = 0x36d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36d2f8: 0x84c2001a  lh          $v0, 0x1A($a2)
    ctx->pc = 0x36d2f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x36d2fc: 0xc78390b4  lwc1        $f3, -0x6F4C($gp)
    ctx->pc = 0x36d2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36d300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d304: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d308: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x36d308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x36d30c: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x36d30cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36d310: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x36d310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d314: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x36D314u;
    {
        const bool branch_taken_0x36d314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D314u;
        // 0x36d318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d314) {
            ctx->pc = 0x36D324u;
            goto label_36d324;
        }
    }
    ctx->pc = 0x36D31Cu;
    // 0x36d31c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36d31cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36d320: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36d320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36d324:
    // 0x36d324: 0x84c20018  lh          $v0, 0x18($a2)
    ctx->pc = 0x36d324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x36d328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d32c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d32cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d330: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x36d330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x36d334: 0x46030040  add.s       $f1, $f0, $f3
    ctx->pc = 0x36d334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x36d338: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x36d338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d33c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x36D33Cu;
    {
        const bool branch_taken_0x36d33c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D33Cu;
        // 0x36d340: 0x84c2001e  lh          $v0, 0x1E($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d33c) {
            ctx->pc = 0x36D34Cu;
            goto label_36d34c;
        }
    }
    ctx->pc = 0x36D344u;
    // 0x36d344: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36d344u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36d348: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36d348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36d34c:
    // 0x36d34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d350: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d354: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x36d354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x36d358: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x36d358u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36d35c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x36d35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d360: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x36D360u;
    {
        const bool branch_taken_0x36d360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D360u;
        // 0x36d364: 0x84c2001c  lh          $v0, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d360) {
            ctx->pc = 0x36D370u;
            goto label_36d370;
        }
    }
    ctx->pc = 0x36D368u;
    // 0x36d368: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x36d368u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x36d36c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36d36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36d370:
    // 0x36d370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d378: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x36d378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x36d37c: 0x46030040  add.s       $f1, $f0, $f3
    ctx->pc = 0x36d37cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x36d380: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x36d380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d384: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x36D384u;
    {
        const bool branch_taken_0x36d384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D384u;
        // 0x36d388: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d384) {
            ctx->pc = 0x36D394u;
            goto label_36d394;
        }
    }
    ctx->pc = 0x36D38Cu;
    // 0x36d38c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x36d38cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x36d390: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36d390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36d394:
    // 0x36d394: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x36d394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d398: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x36d398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x36d39c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x36D39Cu;
    {
        const bool branch_taken_0x36d39c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D39Cu;
        // 0x36d3a0: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d39c) {
            ctx->pc = 0x36D3C8u;
            goto label_36d3c8;
        }
    }
    ctx->pc = 0x36D3A4u;
    // 0x36d3a4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x36d3a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36d3a8: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x36d3a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36d3ac: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x36d3acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36d3b0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x36d3b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36d3b4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x36d3b4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36d3b8: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x36d3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x36d3bc: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x36d3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x36d3c0: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x36d3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x36d3c4: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x36d3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_36d3c8:
    // 0x36d3c8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36d3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d3cc: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x36d3ccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x36d3d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36d3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36d3d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d3d8: 0xc78090b8  lwc1        $f0, -0x6F48($gp)
    ctx->pc = 0x36d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d3dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x36D3DCu;
    {
        const bool branch_taken_0x36d3dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D3DCu;
        // 0x36d3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d3dc) {
            ctx->pc = 0x36D3F0u;
            goto label_36d3f0;
        }
    }
    ctx->pc = 0x36D3E4u;
    // 0x36d3e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d3e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d3e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36D3E8u;
    {
        const bool branch_taken_0x36d3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D3E8u;
        // 0x36d3ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d3e8) {
            ctx->pc = 0x36D3F8u;
            goto label_36d3f8;
        }
    }
    ctx->pc = 0x36D3F0u;
label_36d3f0:
    // 0x36d3f0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x36d3f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36d3f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x36d3f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36d3f8:
    // 0x36d3f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x36d3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36d3fc: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x36d3fcu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x36d400: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36d400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x36d404: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x36d404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x36d408: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x36d408u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x36d40c: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x36d40cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x36d410: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x36d410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d414: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x36d414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x36d418: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x36d418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d41c: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x36d41cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d420: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x36d420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d424: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x36d424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d428: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x36d428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d42c: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x36d42cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d430: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x36d430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d434: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x36d434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d438: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x36d438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d43c: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x36d43cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x36d440: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x36d440u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d444: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D444u;
    {
        const bool branch_taken_0x36d444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D444u;
        // 0x36d448: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d444) {
            ctx->pc = 0x36D458u;
            goto label_36d458;
        }
    }
    ctx->pc = 0x36D44Cu;
    // 0x36d44c: 0x4a0003bf  vwaitq
    ctx->pc = 0x36d44cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x36d450: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36D450u;
    {
        const bool branch_taken_0x36d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D450u;
        // 0x36d454: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d450) {
            ctx->pc = 0x36D460u;
            goto label_36d460;
        }
    }
    ctx->pc = 0x36D458u;
label_36d458:
    // 0x36d458: 0x4a0003bf  vwaitq
    ctx->pc = 0x36d458u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x36d45c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x36d45cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_36d460:
    // 0x36d460: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x36d460u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36d464: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x36d464u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36d468: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x36d468u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x36d46c: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x36d46cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x36d470: 0x4a5c0700  vaddx.z     $vf28, $vf0, $vf28x
    ctx->pc = 0x36d470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d474: 0x4a9c0744  vsubx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x36d474u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d478: 0x4a5c0741  vaddy.z     $vf29, $vf0, $vf28y
    ctx->pc = 0x36d478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d47c: 0x4ac4e1bd  vmulay.yz   $ACC, $vf28, $vf4y
    ctx->pc = 0x36d47cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x36d480: 0x4ac4e90a  vmaddz.yz   $vf4, $vf29, $vf4z
    ctx->pc = 0x36d480u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36d484: 0x4ac5e1bd  vmulay.yz   $ACC, $vf28, $vf5y
    ctx->pc = 0x36d484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x36d488: 0x4ac5e94a  vmaddz.yz   $vf5, $vf29, $vf5z
    ctx->pc = 0x36d488u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36d48c: 0x4ac6e1bd  vmulay.yz   $ACC, $vf28, $vf6y
    ctx->pc = 0x36d48cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x36d490: 0x4ac6e98a  vmaddz.yz   $vf6, $vf29, $vf6z
    ctx->pc = 0x36d490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36d494: 0x4ac7e1bd  vmulay.yz   $ACC, $vf28, $vf7y
    ctx->pc = 0x36d494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x36d498: 0x4ac7e9ca  vmaddz.yz   $vf7, $vf29, $vf7z
    ctx->pc = 0x36d498u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36d49c: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x36d49cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x36d4a0: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x36d4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x36d4a4: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x36d4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x36d4a8: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x36d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x36d4ac: 0xc78390bc  lwc1        $f3, -0x6F44($gp)
    ctx->pc = 0x36d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36d4b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36d4b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d4b4: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x36d4b4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x36d4b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36d4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d4bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36d4bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d4c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x36D4C0u;
    {
        const bool branch_taken_0x36d4c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4C0u;
        // 0x36d4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4c0) {
            ctx->pc = 0x36D4D8u;
            goto label_36d4d8;
        }
    }
    ctx->pc = 0x36D4C8u;
    // 0x36d4c8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36d4c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36d4cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36D4CCu;
    {
        const bool branch_taken_0x36d4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4CCu;
        // 0x36d4d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4cc) {
            ctx->pc = 0x36D4E0u;
            goto label_36d4e0;
        }
    }
    ctx->pc = 0x36D4D4u;
    // 0x36d4d4: 0x0  nop
    ctx->pc = 0x36d4d4u;
    // NOP
label_36d4d8:
    // 0x36d4d8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x36d4d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x36d4dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x36d4dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36d4e0:
    // 0x36d4e0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x36d4e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36d4e4: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x36d4e4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x36d4e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x36d4ec: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x36d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x36d4f0: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x36d4f0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x36d4f4: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x36d4f4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x36d4f8: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x36d4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d4fc: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x36d4fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x36d500: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x36d500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d504: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x36d504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d508: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x36d508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d50c: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x36d50cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d510: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x36d510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d514: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x36d514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d518: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x36d518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d51c: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x36d51cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d520: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x36d520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d524: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x36d524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x36d528: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x36d528u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d52c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D52Cu;
    {
        const bool branch_taken_0x36d52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D52Cu;
        // 0x36d530: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d52c) {
            ctx->pc = 0x36D540u;
            goto label_36d540;
        }
    }
    ctx->pc = 0x36D534u;
    // 0x36d534: 0x4a0003bf  vwaitq
    ctx->pc = 0x36d534u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x36d538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36D538u;
    {
        const bool branch_taken_0x36d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D538u;
        // 0x36d53c: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d538) {
            ctx->pc = 0x36D548u;
            goto label_36d548;
        }
    }
    ctx->pc = 0x36D540u;
label_36d540:
    // 0x36d540: 0x4a0003bf  vwaitq
    ctx->pc = 0x36d540u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x36d544: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x36d544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_36d548:
    // 0x36d548: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x36d548u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36d54c: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x36d54cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36d550: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x36d550u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x36d554: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x36d554u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x36d558: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x36d558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d55c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x36d55cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x36d560: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x36d560u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x36d564: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x36d564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x36d568: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x36d568u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36d56c: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x36d56cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x36d570: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x36d570u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36d574: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x36d574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x36d578: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x36d578u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36d57c: 0x4b87e9bc  vmulax.xy   $ACC, $vf29, $vf7x
    ctx->pc = 0x36d57cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x36d580: 0x4b87e1c9  vmaddy.xy   $vf7, $vf28, $vf7y
    ctx->pc = 0x36d580u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36d584: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x36d584u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x36d588: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x36d588u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x36d58c: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x36d58cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x36d590: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x36d590u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x36d594: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x36d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x36d598: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x36d598u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36d59c: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x36d59cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x36d5a0: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x36d5a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x36d5a4: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x36d5a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x36d5a8: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x36d5a8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d5ac: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x36d5acu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x36d5b0: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x36d5b0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x36d5b4: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x36d5b4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x36d5b8: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x36d5b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5bc: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x36d5bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5c0: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x36d5c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5c4: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x36d5c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36d5c8: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x36d5c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5cc: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x36d5ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5d0: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x36d5d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5d4: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x36d5d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36d5d8: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x36d5d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5dc: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x36d5dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5e0: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x36d5e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5e4: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x36d5e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36d5e8: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x36d5e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5ec: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x36d5ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5f0: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x36d5f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d5f4: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x36d5f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36d5f8: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x36d5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x36d5fc: 0xfa250010  sqc2        $vf5, 0x10($s1)
    ctx->pc = 0x36d5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x36d600: 0xfa260020  sqc2        $vf6, 0x20($s1)
    ctx->pc = 0x36d600u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x36d604: 0xfa270030  sqc2        $vf7, 0x30($s1)
    ctx->pc = 0x36d604u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x36d608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36d608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d60c: 0x14e30032  bne         $a3, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x36D60Cu;
    {
        const bool branch_taken_0x36d60c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x36D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D60Cu;
        // 0x36d610: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d60c) {
            ctx->pc = 0x36D6D8u;
            goto label_36d6d8;
        }
    }
    ctx->pc = 0x36D614u;
    // 0x36d614: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36d614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36d618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36d618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d61c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x36d61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x36d620: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x36d620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36d624: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x36d624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x36d628: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x36d628u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36d62c: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x36d62cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x36d630: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x36d630u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x36d634: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x36d634u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x36d638: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d638u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d63c: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x36d63cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d640: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x36d640u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d644: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x36d644u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x36d648: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x36d648u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d64c: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d650: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d650u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d654: 0xda710000  lqc2        $vf17, 0x0($s3)
    ctx->pc = 0x36d654u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36d658: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x36d658u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d65c: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d660: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d660u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d664: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x36d664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36d668: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x36d668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36d66c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x36d66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36d670: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x36d670u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x36d674: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x36d674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d678: 0x4a0003bf  vwaitq
    ctx->pc = 0x36d678u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x36d67c: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x36d67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d680: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d684: 0x264300a0  addiu       $v1, $s2, 0xA0
    ctx->pc = 0x36d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x36d688: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x36d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x36d68c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x36d68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x36d690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36d690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d694: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x36d694u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d698: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x36d698u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d69c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x36d69cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36d6a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x36d6a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x36d6a4: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x36d6a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36d6a8: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x36d6a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d6ac: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x36d6acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d6b0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36d6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d6b4: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x36d6b4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d6b8: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x36d6b8u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d6bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x36d6bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36d6c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x36d6c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x36d6c4: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x36d6c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36d6c8: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x36d6c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d6cc: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x36d6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d6d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x36D6D0u;
    {
        const bool branch_taken_0x36d6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D6D0u;
        // 0x36d6d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d6d0) {
            ctx->pc = 0x36D73Cu;
            goto label_36d73c;
        }
    }
    ctx->pc = 0x36D6D8u;
label_36d6d8:
    // 0x36d6d8: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x36d6d8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x36d6dc: 0xda710000  lqc2        $vf17, 0x0($s3)
    ctx->pc = 0x36d6dcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36d6e0: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x36d6e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d6e4: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d6e8: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d6e8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d6ec: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x36d6ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36d6f0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x36d6f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36d6f4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x36d6f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36d6f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x36d6f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x36d6fc: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x36d6fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d700: 0x4a0003bf  vwaitq
    ctx->pc = 0x36d700u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x36d704: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x36d704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d708: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x36d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d70c: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x36d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x36d710: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x36d710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x36d714: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x36d714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x36d718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36d718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d71c: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x36d71cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36d720: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x36d720u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d724: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x36d724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36d728: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x36d728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x36d72c: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x36d72cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36d730: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x36d730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36d734: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x36d734u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36d738: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36d738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36d73c:
    // 0x36d73c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36d73cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d740: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36d740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d744: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x36d744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36d748: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x36d748u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d74c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x36d74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d750: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x36d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36d754: 0x3e00008  jr          $ra
    ctx->pc = 0x36D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D754u;
        // 0x36d758: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D75Cu;
    // 0x36d75c: 0x0  nop
    ctx->pc = 0x36d75cu;
    // NOP
    ctx->pc = 0x36d760u;
}
