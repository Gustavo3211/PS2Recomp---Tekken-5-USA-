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

// Function: sub_00222668
// Address: 0x222668 - 0x222790
void sub_00222668_0x222668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222668_0x222668");
#endif

    ctx->pc = 0x222668u;

    // 0x222668: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x222668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22266c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22266cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222670: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222678: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x222678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22267c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x22267cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x222680: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x222680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x222684: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x222684u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222688: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x222688u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22268c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x22268cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x222690: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x222690u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x222694: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x222694u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x222698: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x222698u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x22269c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x22269cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2226a0: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2226a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2226a4: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2226a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2226a8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2226a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2226ac: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2226acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2226b0: 0xc486000c  lwc1        $f6, 0xC($a0)
    ctx->pc = 0x2226b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2226b4: 0x24435fa0  addiu       $v1, $v0, 0x5FA0
    ctx->pc = 0x2226b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24480));
    // 0x2226b8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2226b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2226bc: 0xc461fff0  lwc1        $f1, -0x10($v1)
    ctx->pc = 0x2226bcu;
    { uint32_t bits = FAST_READ32(0x155F90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2226c0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2226c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2226c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2226c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2226c8: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x2226C8u;
    {
        const bool branch_taken_0x2226c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2226CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226C8u;
        // 0x2226cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226c8) {
            ctx->pc = 0x222788u;
            goto label_222788;
        }
    }
    ctx->pc = 0x2226D0u;
    // 0x2226d0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2226d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2226d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2226d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2226d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2226d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2226dc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2226dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2226e0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2226e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2226e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2226e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2226e8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2226E8u;
    {
        const bool branch_taken_0x2226e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2226e8) {
            ctx->pc = 0x2226ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2226E8u;
            // 0x2226ec: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2226FCu;
            goto label_2226fc;
        }
    }
    ctx->pc = 0x2226F0u;
    // 0x2226f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2226f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2226f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2226f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2226f8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2226f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2226fc:
    // 0x2226fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2226fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222700: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x222700u;
    {
        const bool branch_taken_0x222700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222700) {
            ctx->pc = 0x222704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222700u;
            // 0x222704: 0xc4850000  lwc1        $f5, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x222714u;
            goto label_222714;
        }
    }
    ctx->pc = 0x222708u;
    // 0x222708: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x222708u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x22270c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x22270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x222710: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x222710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_222714:
    // 0x222714: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x222714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x222718: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x222718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22271c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x22271cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222720: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x222720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x222724: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x222724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222728: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x222728u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x22272c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x22272cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x222730: 0x460101dc  madd.s      $f7, $f0, $f1
    ctx->pc = 0x222730u;
    ctx->f[7] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x222734: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x222734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x222738: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x222738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22273c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x22273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222740: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x222740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222744: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x222744u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x222748: 0x4603001e  madda.s     $f0, $f3
    ctx->pc = 0x222748u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3])));
    // 0x22274c: 0x4601211c  madd.s      $f4, $f4, $f1
    ctx->pc = 0x22274cu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x222750: 0x46073036  c.le.s      $f6, $f7
    ctx->pc = 0x222750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222754: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x222754u;
    {
        const bool branch_taken_0x222754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222754) {
            ctx->pc = 0x222758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222754u;
            // 0x222758: 0x46003007  neg.s       $f0, $f6 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22276Cu;
            goto label_22276c;
        }
    }
    ctx->pc = 0x22275Cu;
    // 0x22275c: 0x46043036  c.le.s      $f6, $f4
    ctx->pc = 0x22275cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222760: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x222760u;
    {
        const bool branch_taken_0x222760 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222760u;
        // 0x222764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222760) {
            ctx->pc = 0x222788u;
            goto label_222788;
        }
    }
    ctx->pc = 0x222768u;
    // 0x222768: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x222768u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
label_22276c:
    // 0x22276c: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x22276cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222770: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x222770u;
    {
        const bool branch_taken_0x222770 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222770u;
        // 0x222774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222770) {
            ctx->pc = 0x222788u;
            goto label_222788;
        }
    }
    ctx->pc = 0x222778u;
    // 0x222778: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x222778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22277c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22277Cu;
    {
        const bool branch_taken_0x22277c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22277Cu;
        // 0x222780: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22277c) {
            ctx->pc = 0x222788u;
            goto label_222788;
        }
    }
    ctx->pc = 0x222784u;
    // 0x222784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x222784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222788:
    // 0x222788: 0x3e00008  jr          $ra
    ctx->pc = 0x222788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222788u;
        // 0x22278c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222790u;
}
