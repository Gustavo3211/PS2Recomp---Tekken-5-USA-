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

// Function: sub_0022D9C8
// Address: 0x22d9c8 - 0x22db00
void sub_0022D9C8_0x22d9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D9C8_0x22d9c8");
#endif

    switch (ctx->pc) {
        case 0x22da04u: goto label_22da04;
        case 0x22da14u: goto label_22da14;
        case 0x22da28u: goto label_22da28;
        case 0x22da3cu: goto label_22da3c;
        case 0x22da50u: goto label_22da50;
        case 0x22dab8u: goto label_22dab8;
        case 0x22daccu: goto label_22dacc;
        default: break;
    }

    ctx->pc = 0x22d9c8u;

    // 0x22d9c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22d9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22d9cc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x22d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x22d9d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22d9d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22d9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d9dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22d9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22d9e0: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x22d9e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22d9e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22d9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22d9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22d9ec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22d9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22d9f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22d9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22d9f4: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22D9F4u;
    {
        const bool branch_taken_0x22d9f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x22D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9F4u;
        // 0x22d9f8: 0xc4542d90  lwc1        $f20, 0x2D90($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9f4) {
            ctx->pc = 0x22DA20u;
            goto label_22da20;
        }
    }
    ctx->pc = 0x22D9FCu;
    // 0x22d9fc: 0xc08eb1a  jal         func_23AC68
    ctx->pc = 0x22D9FCu;
    SET_GPR_U32(ctx, 31, 0x22DA04u);
    ctx->pc = 0x23AC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC68u, 0x22D9FCu, 0x22DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA04u;
label_22da04:
    // 0x22da04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DA04u;
    {
        const bool branch_taken_0x22da04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22da04) {
            ctx->pc = 0x22DA20u;
            goto label_22da20;
        }
    }
    ctx->pc = 0x22DA0Cu;
    // 0x22da0c: 0xc08eace  jal         func_23AB38
    ctx->pc = 0x22DA0Cu;
    SET_GPR_U32(ctx, 31, 0x22DA14u);
    ctx->pc = 0x23AB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB38u, 0x22DA0Cu, 0x22DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA14u;
label_22da14:
    // 0x22da14: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x22DA14u;
    {
        const bool branch_taken_0x22da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA14u;
        // 0x22da18: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da14) {
            ctx->pc = 0x22DAE0u;
            goto label_22dae0;
        }
    }
    ctx->pc = 0x22DA1Cu;
    // 0x22da1c: 0x0  nop
    ctx->pc = 0x22da1cu;
    // NOP
label_22da20:
    // 0x22da20: 0xc08b8a6  jal         func_22E298
    ctx->pc = 0x22DA20u;
    SET_GPR_U32(ctx, 31, 0x22DA28u);
    ctx->pc = 0x22E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E298u, 0x22DA20u, 0x22DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA28u;
label_22da28:
    // 0x22da28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22da28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22da2c: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x22DA2Cu;
    {
        const bool branch_taken_0x22da2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22da2c) {
            ctx->pc = 0x22DA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DA2Cu;
            // 0x22da30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DAE0u;
            goto label_22dae0;
        }
    }
    ctx->pc = 0x22DA34u;
    // 0x22da34: 0xc08b3ee  jal         func_22CFB8
    ctx->pc = 0x22DA34u;
    SET_GPR_U32(ctx, 31, 0x22DA3Cu);
    ctx->pc = 0x22DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA34u;
    // 0x22da38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CFB8u, 0x22DA34u, 0x22DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA3Cu;
label_22da3c:
    // 0x22da3c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22da3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22da40: 0x1a000025  blez        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x22DA40u;
    {
        const bool branch_taken_0x22da40 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x22DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA40u;
        // 0x22da44: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da40) {
            ctx->pc = 0x22DAD8u;
            goto label_22dad8;
        }
    }
    ctx->pc = 0x22DA48u;
    // 0x22da48: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22da48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22da4c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x22da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22da50:
    // 0x22da50: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x22da50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x22da54: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x22da54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22da58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da5c: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22da5cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22da60: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x22da60u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22da64: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x22da64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x22da68: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x22da68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x22da6c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x22da6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da70: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x22da70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22da74: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x22da74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22da78: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x22da78u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x22da7c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x22da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da80: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x22da80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22da84: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x22da84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x22da88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22da88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22da8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22DA8Cu;
    {
        const bool branch_taken_0x22da8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA8Cu;
        // 0x22da90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da8c) {
            ctx->pc = 0x22DA98u;
            goto label_22da98;
        }
    }
    ctx->pc = 0x22DA94u;
    // 0x22da94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22da94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22da98:
    // 0x22da98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22DA98u;
    {
        const bool branch_taken_0x22da98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22da98) {
            ctx->pc = 0x22DAD0u;
            goto label_22dad0;
        }
    }
    ctx->pc = 0x22DAA0u;
    // 0x22daa0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x22daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x22daa4: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DAA4u;
    {
        const bool branch_taken_0x22daa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x22DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAA4u;
        // 0x22daa8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22daa4) {
            ctx->pc = 0x22DAC0u;
            goto label_22dac0;
        }
    }
    ctx->pc = 0x22DAACu;
    // 0x22daac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22daacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22dab0: 0xc08b4e4  jal         func_22D390
    ctx->pc = 0x22DAB0u;
    SET_GPR_U32(ctx, 31, 0x22DAB8u);
    ctx->pc = 0x22DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DAB0u;
    // 0x22dab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D390u, 0x22DAB0u, 0x22DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAB8u;
label_22dab8:
    // 0x22dab8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22DAB8u;
    {
        const bool branch_taken_0x22dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAB8u;
        // 0x22dabc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dab8) {
            ctx->pc = 0x22DAD0u;
            goto label_22dad0;
        }
    }
    ctx->pc = 0x22DAC0u;
label_22dac0:
    // 0x22dac0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22dac0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22dac4: 0xc08b5d8  jal         func_22D760
    ctx->pc = 0x22DAC4u;
    SET_GPR_U32(ctx, 31, 0x22DACCu);
    ctx->pc = 0x22DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DAC4u;
    // 0x22dac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D760u, 0x22DAC4u, 0x22DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DACCu;
label_22dacc:
    // 0x22dacc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22daccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_22dad0:
    // 0x22dad0: 0x5e00ffdf  bgtzl       $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x22DAD0u;
    {
        const bool branch_taken_0x22dad0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x22dad0) {
            ctx->pc = 0x22DAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DAD0u;
            // 0x22dad4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22da50;
        }
    }
    ctx->pc = 0x22DAD8u;
label_22dad8:
    // 0x22dad8: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x22dad8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x22dadc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22dadcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22dae0:
    // 0x22dae0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22dae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22dae4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22dae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dae8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22dae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22daec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22daecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22daf0: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x22daf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22daf4: 0x3e00008  jr          $ra
    ctx->pc = 0x22DAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAF4u;
        // 0x22daf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DAFCu;
    // 0x22dafc: 0x0  nop
    ctx->pc = 0x22dafcu;
    // NOP
    ctx->pc = 0x22db00u;
}
