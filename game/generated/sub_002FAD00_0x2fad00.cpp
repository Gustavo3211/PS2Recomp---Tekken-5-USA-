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

// Function: sub_002FAD00
// Address: 0x2fad00 - 0x2faf68
void sub_002FAD00_0x2fad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAD00_0x2fad00");
#endif

    switch (ctx->pc) {
        case 0x2fade0u: goto label_2fade0;
        case 0x2fae10u: goto label_2fae10;
        default: break;
    }

    ctx->pc = 0x2fad00u;

    // 0x2fad00: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2fad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2fad04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAD04u;
    {
        const bool branch_taken_0x2fad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD04u;
        // 0x2fad08: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad04) {
            ctx->pc = 0x2FAD18u;
            goto label_2fad18;
        }
    }
    ctx->pc = 0x2FAD0Cu;
    // 0x2fad0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2fad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2fad10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAD10u;
    {
        const bool branch_taken_0x2fad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD10u;
        // 0x2fad14: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad10) {
            ctx->pc = 0x2FAD1Cu;
            goto label_2fad1c;
        }
    }
    ctx->pc = 0x2FAD18u;
label_2fad18:
    // 0x2fad18: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2fad18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_2fad1c:
    // 0x2fad1c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x2fad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x2fad20: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2fad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fad24: 0x2442ecd0  addiu       $v0, $v0, -0x1330
    ctx->pc = 0x2fad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x2fad28: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2fad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fad2c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2fad2cu;
    { uint32_t bits = FAST_READ32(0x1AECD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fad30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2fad30u;
    { uint32_t bits = FAST_READ32(0x1AECD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fad34: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2fad34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2fad38: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x2fad38u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fad3c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x2fad3cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2fad40: 0x4605291c  madd.s      $f4, $f5, $f5
    ctx->pc = 0x2fad40u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x2fad44: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2fad44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2fad48: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x2fad48u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x2fad4c: 0x4605105c  madd.s      $f1, $f2, $f5
    ctx->pc = 0x2fad4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x2fad50: 0x46040916  rsqrt.s     $f4, $f1, $f4
    ctx->pc = 0x2fad50u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[1]);
    // 0x2fad54: 0x46002086  mov.s       $f2, $f4
    ctx->pc = 0x2fad54u;
    ctx->f[2] = FPU_MOV_S(ctx->f[4]);
    // 0x2fad58: 0xc4840084  lwc1        $f4, 0x84($a0)
    ctx->pc = 0x2fad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fad5c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2fad5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2fad60: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2fad60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2fad64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fad64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fad68: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2fad68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2fad6c: 0x0  nop
    ctx->pc = 0x2fad6cu;
    // NOP
    // 0x2fad70: 0x0  nop
    ctx->pc = 0x2fad70u;
    // NOP
    // 0x2fad74: 0x46052043  div.s       $f1, $f4, $f5
    ctx->pc = 0x2fad74u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[5];
    // 0x2fad78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fad78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2fad7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fad7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fad80: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x2fad80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x2fad84: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x2fad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fad88: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2fad88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2fad8c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2fad8cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2fad90: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2fad90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2fad94: 0x0  nop
    ctx->pc = 0x2fad94u;
    // NOP
    // 0x2fad98: 0x0  nop
    ctx->pc = 0x2fad98u;
    // NOP
    // 0x2fad9c: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x2fad9cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[5];
    // 0x2fada0: 0x46014041  sub.s       $f1, $f8, $f1
    ctx->pc = 0x2fada0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x2fada4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2fada4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2fada8: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x2fada8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fadac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2FADACu;
    {
        const bool branch_taken_0x2fadac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADACu;
        // 0x2fadb0: 0xc487007c  lwc1        $f7, 0x7C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadac) {
            ctx->pc = 0x2FADC0u;
            goto label_2fadc0;
        }
    }
    ctx->pc = 0x2FADB4u;
    // 0x2fadb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FADB4u;
    {
        const bool branch_taken_0x2fadb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADB4u;
        // 0x2fadb8: 0x46003886  mov.s       $f2, $f7 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadb4) {
            ctx->pc = 0x2FADD8u;
            goto label_2fadd8;
        }
    }
    ctx->pc = 0x2FADBCu;
    // 0x2fadbc: 0x0  nop
    ctx->pc = 0x2fadbcu;
    // NOP
label_2fadc0:
    // 0x2fadc0: 0x46074001  sub.s       $f0, $f8, $f7
    ctx->pc = 0x2fadc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x2fadc4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fadc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fadc8: 0x0  nop
    ctx->pc = 0x2fadc8u;
    // NOP
    // 0x2fadcc: 0x0  nop
    ctx->pc = 0x2fadccu;
    // NOP
    // 0x2fadd0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2fadd0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2fadd4: 0x46070080  add.s       $f2, $f0, $f7
    ctx->pc = 0x2fadd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_2fadd8:
    // 0x2fadd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FADD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADD8u;
        // 0x2faddc: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FADD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FADE0u;
label_2fade0:
    // 0x2fade0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2fade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2fade4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fade8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2fade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2fadec: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x2fadecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2fadf0: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2fadf0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2fadf4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2fadf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fadf8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2fadf8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2fadfc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2fadfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fae00: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x2fae00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x2fae04: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2fae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2fae08: 0xc0caf20  jal         func_32BC80
    ctx->pc = 0x2FAE08u;
    SET_GPR_U32(ctx, 31, 0x2FAE10u);
    ctx->pc = 0x2FAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE08u;
    // 0x2fae0c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BC80u, 0x2FAE08u, 0x2FAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE10u;
label_2fae10:
    // 0x2fae10: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2fae10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fae14: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2fae14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fae18: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2fae18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fae1c: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2fae1cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2fae20: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x2fae20u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fae24: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x2fae24u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fae28: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x2fae28u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fae2c: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x2fae2cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fae30: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2fae30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae34: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2fae34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae38: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2fae38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae3c: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2fae3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fae40: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2fae40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae44: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2fae44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae48: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2fae48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae4c: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2fae4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2fae50: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2fae50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae54: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2fae54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae58: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2fae58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae5c: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2fae5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2fae60: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2fae60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae64: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2fae64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae68: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2fae68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fae6c: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2fae6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2fae70: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2fae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fae74: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x2fae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2fae78: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x2fae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2fae7c: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x2fae7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2fae80: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fae84: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2fae84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fae88: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2fae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fae8c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x2fae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fae90: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x2fae90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x2fae94: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2fae94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fae98: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2fae98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fae9c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2fae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2faea0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2faea0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faea4: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x2faea4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2faea8: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x2faea8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2faeac: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x2faeacu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2faeb0: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2faeb0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2faeb4: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2faeb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2faeb8: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2faeb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2faebc: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2faebcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2faec0: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2faec0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2faec4: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2faec4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2faec8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2faec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2faecc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2faeccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faed0: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x2faed0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2faed4: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x2faed4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2faed8: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x2faed8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2faedc: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2faedcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2faee0: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2faee0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2faee4: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2faee4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2faee8: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2faee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2faeec: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2faeecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2faef0: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2faef0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2faef4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2faef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2faef8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2faef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2faefc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2faefcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2faf00: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2faf00u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2faf04: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2faf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2faf08: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2faf08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2faf0c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2faf0cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2faf10: 0x4615b581  sub.s       $f22, $f22, $f21
    ctx->pc = 0x2faf10u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x2faf14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2faf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2faf18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2faf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2faf1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2faf1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2faf20: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x2faf20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2faf24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2FAF24u;
    {
        const bool branch_taken_0x2faf24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF24u;
        // 0x2faf28: 0x46150001  sub.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf24) {
            ctx->pc = 0x2FAF34u;
            goto label_2faf34;
        }
    }
    ctx->pc = 0x2FAF2Cu;
    // 0x2faf2c: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x2faf2cu;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
    // 0x2faf30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2faf30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2faf34:
    // 0x2faf34: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x2faf34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2faf38: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAF38u;
    {
        const bool branch_taken_0x2faf38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FAF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF38u;
        // 0x2faf3c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf38) {
            ctx->pc = 0x2FAF4Cu;
            goto label_2faf4c;
        }
    }
    ctx->pc = 0x2FAF40u;
    // 0x2faf40: 0x0  nop
    ctx->pc = 0x2faf40u;
    // NOP
    // 0x2faf44: 0x0  nop
    ctx->pc = 0x2faf44u;
    // NOP
    // 0x2faf48: 0x46160083  div.s       $f2, $f0, $f22
    ctx->pc = 0x2faf48u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[22];
label_2faf4c:
    // 0x2faf4c: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2faf4cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x2faf50: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2faf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2faf54: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x2faf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2faf58: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2faf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2faf5c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2faf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2faf60: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF60u;
        // 0x2faf64: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAF68u;
}
