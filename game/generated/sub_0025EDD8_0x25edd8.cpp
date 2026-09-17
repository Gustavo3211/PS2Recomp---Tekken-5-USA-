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

// Function: sub_0025EDD8
// Address: 0x25edd8 - 0x25f0e0
void sub_0025EDD8_0x25edd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EDD8_0x25edd8");
#endif

    switch (ctx->pc) {
        case 0x25ee2cu: goto label_25ee2c;
        case 0x25ee68u: goto label_25ee68;
        case 0x25eeb8u: goto label_25eeb8;
        case 0x25ef08u: goto label_25ef08;
        case 0x25ef44u: goto label_25ef44;
        case 0x25ef8cu: goto label_25ef8c;
        case 0x25efe0u: goto label_25efe0;
        case 0x25f01cu: goto label_25f01c;
        case 0x25f058u: goto label_25f058;
        default: break;
    }

    ctx->pc = 0x25edd8u;

    // 0x25edd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25edd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25eddc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25eddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25ede0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ede0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ede4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25ede8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25ede8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25edec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25edecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25edf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25edf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25edf4: 0xe7b80048  swc1        $f24, 0x48($sp)
    ctx->pc = 0x25edf4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25edf8: 0xe7b70040  swc1        $f23, 0x40($sp)
    ctx->pc = 0x25edf8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25edfc: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x25edfcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25ee00: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x25ee00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25ee04: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x25ee04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x25ee08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25ee0c: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x25ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x25ee10: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x25ee10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25ee14: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x25EE14u;
    {
        const bool branch_taken_0x25ee14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ee14) {
            ctx->pc = 0x25EE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EE14u;
            // 0x25ee18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EE70u;
            goto label_25ee70;
        }
    }
    ctx->pc = 0x25EE1Cu;
    // 0x25ee1c: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x25ee1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25ee20: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x25ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x25ee24: 0xc0b7440  jal         func_2DD100
    ctx->pc = 0x25EE24u;
    SET_GPR_U32(ctx, 31, 0x25EE2Cu);
    ctx->pc = 0x25EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE24u;
    // 0x25ee28: 0xc62d0038  lwc1        $f13, 0x38($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD100u, 0x25EE24u, 0x25EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE2Cu;
label_25ee2c:
    // 0x25ee2c: 0x9623004c  lhu         $v1, 0x4C($s1)
    ctx->pc = 0x25ee2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x25ee30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25ee34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x25ee34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25ee38: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x25ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ee3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25ee40: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x25ee40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25ee44: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EE44u;
    {
        const bool branch_taken_0x25ee44 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x25EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE44u;
        // 0x25ee48: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee44) {
            ctx->pc = 0x25EE50u;
            goto label_25ee50;
        }
    }
    ctx->pc = 0x25EE4Cu;
    // 0x25ee4c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x25ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_25ee50:
    // 0x25ee50: 0x28420201  slti        $v0, $v0, 0x201
    ctx->pc = 0x25ee50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x25ee54: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x25EE54u;
    {
        const bool branch_taken_0x25ee54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE54u;
        // 0x25ee58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee54) {
            ctx->pc = 0x25F0B4u;
            goto label_25f0b4;
        }
    }
    ctx->pc = 0x25EE5Cu;
    // 0x25ee5c: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EE5Cu;
    {
        const bool branch_taken_0x25ee5c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x25EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE5Cu;
        // 0x25ee60: 0x2462fe00  addiu       $v0, $v1, -0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee5c) {
            ctx->pc = 0x25EE68u;
            goto label_25ee68;
        }
    }
    ctx->pc = 0x25EE64u;
    // 0x25ee64: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x25ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_25ee68:
    // 0x25ee68: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x25EE68u;
    {
        const bool branch_taken_0x25ee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE68u;
        // 0x25ee6c: 0xa622004c  sh          $v0, 0x4C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee68) {
            ctx->pc = 0x25F0B0u;
            goto label_25f0b0;
        }
    }
    ctx->pc = 0x25EE70u;
label_25ee70:
    // 0x25ee70: 0x5462007d  bnel        $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x25EE70u;
    {
        const bool branch_taken_0x25ee70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ee70) {
            ctx->pc = 0x25EE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EE70u;
            // 0x25ee74: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F068u;
            goto label_25f068;
        }
    }
    ctx->pc = 0x25EE78u;
    // 0x25ee78: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x25ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ee7c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x25ee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ee80: 0x46000d47  neg.s       $f21, $f1
    ctx->pc = 0x25ee80u;
    ctx->f[21] = FPU_NEG_S(ctx->f[1]);
    // 0x25ee84: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x25ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x25ee88: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x25ee88u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
    // 0x25ee8c: 0x4615adc2  mul.s       $f23, $f21, $f21
    ctx->pc = 0x25ee8cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x25ee90: 0x4616b602  mul.s       $f24, $f22, $f22
    ctx->pc = 0x25ee90u;
    ctx->f[24] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x25ee94: 0x4617c300  add.s       $f12, $f24, $f23
    ctx->pc = 0x25ee94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
    // 0x25ee98: 0x0  nop
    ctx->pc = 0x25ee98u;
    // NOP
    // 0x25ee9c: 0x0  nop
    ctx->pc = 0x25ee9cu;
    // NOP
    // 0x25eea0: 0x460c0044  c1          0xC0044
    ctx->pc = 0x25eea0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x25eea4: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x25eea4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25eea8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25EEA8u;
    {
        const bool branch_taken_0x25eea8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEA8u;
        // 0x25eeac: 0x8453000e  lh          $s3, 0xE($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eea8) {
            ctx->pc = 0x25EEBCu;
            goto label_25eebc;
        }
    }
    ctx->pc = 0x25EEB0u;
    // 0x25eeb0: 0xc04754c  jal         func_11D530
    ctx->pc = 0x25EEB0u;
    SET_GPR_U32(ctx, 31, 0x25EEB8u);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x25EEB0u, 0x25EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EEB8u;
label_25eeb8:
    // 0x25eeb8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25eeb8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25eebc:
    // 0x25eebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25eebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25eec0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25eec0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25eec4: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x25EEC4u;
    {
        const bool branch_taken_0x25eec4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEC4u;
        // 0x25eec8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eec4) {
            ctx->pc = 0x25EF68u;
            goto label_25ef68;
        }
    }
    ctx->pc = 0x25EECCu;
    // 0x25eecc: 0x3270ffff  andi        $s0, $s3, 0xFFFF
    ctx->pc = 0x25eeccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x25eed0: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x25eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x25eed4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x25eed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25eed8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EED8u;
    {
        const bool branch_taken_0x25eed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EED8u;
        // 0x25eedc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eed8) {
            ctx->pc = 0x25EEF0u;
            goto label_25eef0;
        }
    }
    ctx->pc = 0x25EEE0u;
    // 0x25eee0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x25eee0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25eee4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25eee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25eee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25EEE8u;
    {
        const bool branch_taken_0x25eee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEE8u;
        // 0x25eeec: 0xc7808b90  lwc1        $f0, -0x7470($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eee8) {
            ctx->pc = 0x25EF00u;
            goto label_25ef00;
        }
    }
    ctx->pc = 0x25EEF0u;
label_25eef0:
    // 0x25eef0: 0xc7818b94  lwc1        $f1, -0x746C($gp)
    ctx->pc = 0x25eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25eef4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25eef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25eef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25eefc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25eefcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25ef00:
    // 0x25ef00: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25EF00u;
    SET_GPR_U32(ctx, 31, 0x25EF08u);
    ctx->pc = 0x25EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF00u;
    // 0x25ef04: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25EF00u, 0x25EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF08u;
label_25ef08:
    // 0x25ef08: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x25ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x25ef0c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x25ef0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25ef10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EF10u;
    {
        const bool branch_taken_0x25ef10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF10u;
        // 0x25ef14: 0x4600b502  mul.s       $f20, $f22, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef10) {
            ctx->pc = 0x25EF28u;
            goto label_25ef28;
        }
    }
    ctx->pc = 0x25EF18u;
    // 0x25ef18: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x25ef18u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ef1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25ef1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ef20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25EF20u;
    {
        const bool branch_taken_0x25ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF20u;
        // 0x25ef24: 0xc7808b98  lwc1        $f0, -0x7468($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef20) {
            ctx->pc = 0x25EF3Cu;
            goto label_25ef3c;
        }
    }
    ctx->pc = 0x25EF28u;
label_25ef28:
    // 0x25ef28: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25ef2c: 0xc7818b9c  lwc1        $f1, -0x7464($gp)
    ctx->pc = 0x25ef2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ef30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25ef34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ef34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ef38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25ef38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25ef3c:
    // 0x25ef3c: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x25EF3Cu;
    SET_GPR_U32(ctx, 31, 0x25EF44u);
    ctx->pc = 0x25EF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF3Cu;
    // 0x25ef40: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x25EF3Cu, 0x25EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF44u;
label_25ef44:
    // 0x25ef44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25ef44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ef48: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x25ef48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x25ef4c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x25ef4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x25ef50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25ef50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ef54: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x25EF54u;
    {
        const bool branch_taken_0x25ef54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ef54) {
            ctx->pc = 0x25EF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EF54u;
            // 0x25ef58: 0x26620200  addiu       $v0, $s3, 0x200 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EF60u;
            goto label_25ef60;
        }
    }
    ctx->pc = 0x25EF5Cu;
    // 0x25ef5c: 0x2662fe00  addiu       $v0, $s3, -0x200
    ctx->pc = 0x25ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966784));
label_25ef60:
    // 0x25ef60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25ef64: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x25ef64u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
label_25ef68:
    // 0x25ef68: 0x4617c300  add.s       $f12, $f24, $f23
    ctx->pc = 0x25ef68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
    // 0x25ef6c: 0x0  nop
    ctx->pc = 0x25ef6cu;
    // NOP
    // 0x25ef70: 0x0  nop
    ctx->pc = 0x25ef70u;
    // NOP
    // 0x25ef74: 0x460c0044  c1          0xC0044
    ctx->pc = 0x25ef74u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x25ef78: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x25ef78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ef7c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25EF7Cu;
    {
        const bool branch_taken_0x25ef7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ef7c) {
            ctx->pc = 0x25EF90u;
            goto label_25ef90;
        }
    }
    ctx->pc = 0x25EF84u;
    // 0x25ef84: 0xc04754c  jal         func_11D530
    ctx->pc = 0x25EF84u;
    SET_GPR_U32(ctx, 31, 0x25EF8Cu);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x25EF84u, 0x25EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF8Cu;
label_25ef8c:
    // 0x25ef8c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25ef8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25ef90:
    // 0x25ef90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25ef90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ef94: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25ef94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ef98: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x25EF98u;
    {
        const bool branch_taken_0x25ef98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF98u;
        // 0x25ef9c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef98) {
            ctx->pc = 0x25F040u;
            goto label_25f040;
        }
    }
    ctx->pc = 0x25EFA0u;
    // 0x25efa0: 0x3250ffff  andi        $s0, $s2, 0xFFFF
    ctx->pc = 0x25efa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x25efa4: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x25efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x25efa8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x25efa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25efac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25EFACu;
    {
        const bool branch_taken_0x25efac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFACu;
        // 0x25efb0: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efac) {
            ctx->pc = 0x25EFC8u;
            goto label_25efc8;
        }
    }
    ctx->pc = 0x25EFB4u;
    // 0x25efb4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x25efb4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25efb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25efb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25efbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25EFBCu;
    {
        const bool branch_taken_0x25efbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFBCu;
        // 0x25efc0: 0xc7808ba0  lwc1        $f0, -0x7460($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efbc) {
            ctx->pc = 0x25EFD8u;
            goto label_25efd8;
        }
    }
    ctx->pc = 0x25EFC4u;
    // 0x25efc4: 0x0  nop
    ctx->pc = 0x25efc4u;
    // NOP
label_25efc8:
    // 0x25efc8: 0xc7818ba4  lwc1        $f1, -0x745C($gp)
    ctx->pc = 0x25efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25efcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25efccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25efd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25efd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25efd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25efd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25efd8:
    // 0x25efd8: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25EFD8u;
    SET_GPR_U32(ctx, 31, 0x25EFE0u);
    ctx->pc = 0x25EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EFD8u;
    // 0x25efdc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25EFD8u, 0x25EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFE0u;
label_25efe0:
    // 0x25efe0: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x25efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x25efe4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x25efe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25efe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EFE8u;
    {
        const bool branch_taken_0x25efe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFE8u;
        // 0x25efec: 0x4600b502  mul.s       $f20, $f22, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efe8) {
            ctx->pc = 0x25F000u;
            goto label_25f000;
        }
    }
    ctx->pc = 0x25EFF0u;
    // 0x25eff0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x25eff0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25eff4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25eff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25eff8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25EFF8u;
    {
        const bool branch_taken_0x25eff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFF8u;
        // 0x25effc: 0xc7808ba8  lwc1        $f0, -0x7458($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eff8) {
            ctx->pc = 0x25F014u;
            goto label_25f014;
        }
    }
    ctx->pc = 0x25F000u;
label_25f000:
    // 0x25f000: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25f000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25f004: 0xc7818bac  lwc1        $f1, -0x7454($gp)
    ctx->pc = 0x25f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f008: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25f00c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25f00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f010: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25f010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25f014:
    // 0x25f014: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x25F014u;
    SET_GPR_U32(ctx, 31, 0x25F01Cu);
    ctx->pc = 0x25F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F014u;
    // 0x25f018: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x25F014u, 0x25F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F01Cu;
label_25f01c:
    // 0x25f01c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25f01cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25f020: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x25f020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x25f024: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x25f024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x25f028: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25f028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f02c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x25F02Cu;
    {
        const bool branch_taken_0x25f02c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f02c) {
            ctx->pc = 0x25F030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F02Cu;
            // 0x25f030: 0x26420200  addiu       $v0, $s2, 0x200 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25F034u;
    // 0x25f034: 0x2642fe00  addiu       $v0, $s2, -0x200
    ctx->pc = 0x25f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966784));
label_25f038:
    // 0x25f038: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f03c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x25f03cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_25f040:
    // 0x25f040: 0x5662ff89  bnel        $s3, $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x25F040u;
    {
        const bool branch_taken_0x25f040 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f040) {
            ctx->pc = 0x25F044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F040u;
            // 0x25f044: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ee68;
        }
    }
    ctx->pc = 0x25F048u;
    // 0x25f048: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25f048u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x25f04c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x25f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x25f050: 0xc0b7440  jal         func_2DD100
    ctx->pc = 0x25F050u;
    SET_GPR_U32(ctx, 31, 0x25F058u);
    ctx->pc = 0x25F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F050u;
    // 0x25f054: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD100u, 0x25F050u, 0x25F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F058u;
label_25f058:
    // 0x25f058: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f05c: 0x1000ff82  b           . + 4 + (-0x7E << 2)
    ctx->pc = 0x25F05Cu;
    {
        const bool branch_taken_0x25f05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F05Cu;
        // 0x25f060: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f05c) {
            ctx->pc = 0x25EE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ee68;
        }
    }
    ctx->pc = 0x25F064u;
    // 0x25f064: 0x0  nop
    ctx->pc = 0x25f064u;
    // NOP
label_25f068:
    // 0x25f068: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25F068u;
    {
        const bool branch_taken_0x25f068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F068u;
        // 0x25f06c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f068) {
            ctx->pc = 0x25F0B4u;
            goto label_25f0b4;
        }
    }
    ctx->pc = 0x25F070u;
    // 0x25f070: 0x9624004c  lhu         $a0, 0x4C($s1)
    ctx->pc = 0x25f070u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x25f074: 0x9622004e  lhu         $v0, 0x4E($s1)
    ctx->pc = 0x25f074u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 78)));
    // 0x25f078: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x25f078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25f07c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25f080: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x25f080u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25f084: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25F084u;
    {
        const bool branch_taken_0x25f084 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F084u;
        // 0x25f088: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f084) {
            ctx->pc = 0x25F090u;
            goto label_25f090;
        }
    }
    ctx->pc = 0x25F08Cu;
    // 0x25f08c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x25f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_25f090:
    // 0x25f090: 0x28630201  slti        $v1, $v1, 0x201
    ctx->pc = 0x25f090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x25f094: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F094u;
    {
        const bool branch_taken_0x25f094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f094) {
            ctx->pc = 0x25F098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F094u;
            // 0x25f098: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F0B4u;
            goto label_25f0b4;
        }
    }
    ctx->pc = 0x25F09Cu;
    // 0x25f09c: 0x443ff72  bgezl       $v0, . + 4 + (-0x8E << 2)
    ctx->pc = 0x25F09Cu;
    {
        const bool branch_taken_0x25f09c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25f09c) {
            ctx->pc = 0x25F0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F09Cu;
            // 0x25f0a0: 0x2482fe00  addiu       $v0, $a0, -0x200 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ee68;
        }
    }
    ctx->pc = 0x25F0A4u;
    // 0x25f0a4: 0x1000ff70  b           . + 4 + (-0x90 << 2)
    ctx->pc = 0x25F0A4u;
    {
        const bool branch_taken_0x25f0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0A4u;
        // 0x25f0a8: 0x24820200  addiu       $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0a4) {
            ctx->pc = 0x25EE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ee68;
        }
    }
    ctx->pc = 0x25F0ACu;
    // 0x25f0ac: 0x0  nop
    ctx->pc = 0x25f0acu;
    // NOP
label_25f0b0:
    // 0x25f0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f0b4:
    // 0x25f0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25f0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25f0b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25f0b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f0bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25f0bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25f0c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25f0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f0c4: 0xc7b80048  lwc1        $f24, 0x48($sp)
    ctx->pc = 0x25f0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25f0c8: 0xc7b70040  lwc1        $f23, 0x40($sp)
    ctx->pc = 0x25f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25f0cc: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x25f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25f0d0: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x25f0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25f0d4: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x25f0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25f0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x25F0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0D8u;
        // 0x25f0dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F0E0u;
}
