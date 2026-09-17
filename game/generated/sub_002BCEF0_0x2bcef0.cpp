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

// Function: sub_002BCEF0
// Address: 0x2bcef0 - 0x2bd160
void sub_002BCEF0_0x2bcef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCEF0_0x2bcef0");
#endif

    switch (ctx->pc) {
        case 0x2bcf30u: goto label_2bcf30;
        case 0x2bcf40u: goto label_2bcf40;
        case 0x2bcf5cu: goto label_2bcf5c;
        case 0x2bcf6cu: goto label_2bcf6c;
        case 0x2bd0b0u: goto label_2bd0b0;
        case 0x2bd0ccu: goto label_2bd0cc;
        case 0x2bd0dcu: goto label_2bd0dc;
        case 0x2bd0ecu: goto label_2bd0ec;
        case 0x2bd0f8u: goto label_2bd0f8;
        case 0x2bd12cu: goto label_2bd12c;
        case 0x2bd138u: goto label_2bd138;
        default: break;
    }

    ctx->pc = 0x2bcef0u;

    // 0x2bcef0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2bcef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2bcef4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2bcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2bcef8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2bcef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2bcefc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bcefcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf00: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2bcf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2bcf04: 0x26950760  addiu       $s5, $s4, 0x760
    ctx->pc = 0x2bcf04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1888));
    // 0x2bcf08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bcf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf10: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2bcf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2bcf14: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2bcf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2bcf18: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2bcf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2bcf1c: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x2bcf1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2bcf20: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2bcf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2bcf24: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2bcf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2bcf28: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2BCF28u;
    SET_GPR_U32(ctx, 31, 0x2BCF30u);
    ctx->pc = 0x2BCF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF28u;
    // 0x2bcf2c: 0x24537b60  addiu       $s3, $v0, 0x7B60 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 31584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2BCF28u, 0x2BCF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF30u;
label_2bcf30:
    // 0x2bcf30: 0xc78091d8  lwc1        $f0, -0x6E28($gp)
    ctx->pc = 0x2bcf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcf34: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2bcf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2bcf38: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2BCF38u;
    SET_GPR_U32(ctx, 31, 0x2BCF40u);
    ctx->pc = 0x2BCF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF38u;
    // 0x2bcf3c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2BCF38u, 0x2BCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF40u;
label_2bcf40:
    // 0x2bcf40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bcf40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2bcf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bcf48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2bcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2bcf4c: 0x5c8821  addu        $s1, $v0, $gp
    ctx->pc = 0x2bcf4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2bcf50: 0x8e31a848  lw          $s1, -0x57B8($s1)
    ctx->pc = 0x2bcf50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944840)));
    // 0x2bcf54: 0xc08e6de  jal         func_239B78
    ctx->pc = 0x2BCF54u;
    SET_GPR_U32(ctx, 31, 0x2BCF5Cu);
    ctx->pc = 0x2BCF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF54u;
    // 0x2bcf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B78u, 0x2BCF54u, 0x2BCF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF5Cu;
label_2bcf5c:
    // 0x2bcf5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bcf5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2bcf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf64: 0xc08e6de  jal         func_239B78
    ctx->pc = 0x2BCF64u;
    SET_GPR_U32(ctx, 31, 0x2BCF6Cu);
    ctx->pc = 0x2BCF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF64u;
    // 0x2bcf68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B78u, 0x2BCF64u, 0x2BCF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF6Cu;
label_2bcf6c:
    // 0x2bcf6c: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x2bcf6cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x2bcf70: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x2bcf70u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x2bcf74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bcf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bcf78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bcf78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcf7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bcf7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcf80: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2BCF80u;
    {
        const bool branch_taken_0x2bcf80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcf80) {
            ctx->pc = 0x2BCF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCF80u;
            // 0x2bcf84: 0x46002045  abs.s       $f1, $f4 (Delay Slot)
            ctx->f[1] = FPU_ABS_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCFE4u;
            goto label_2bcfe4;
        }
    }
    ctx->pc = 0x2BCF88u;
    // 0x2bcf88: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x2bcf88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x2bcf8c: 0xc78191dc  lwc1        $f1, -0x6E24($gp)
    ctx->pc = 0x2bcf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcf90: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2bcf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcf94: 0xc78391e0  lwc1        $f3, -0x6E20($gp)
    ctx->pc = 0x2bcf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bcf98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bcf98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bcf9c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x2bcf9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2bcfa0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2bcfa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcfa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCFA4u;
    {
        const bool branch_taken_0x2bcfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFA4u;
        // 0x2bcfa8: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcfa4) {
            ctx->pc = 0x2BCFB8u;
            goto label_2bcfb8;
        }
    }
    ctx->pc = 0x2BCFACu;
    // 0x2bcfac: 0xc78091e4  lwc1        $f0, -0x6E1C($gp)
    ctx->pc = 0x2bcfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcfb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcfb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcfb4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2bcfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2bcfb8:
    // 0x2bcfb8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2bcfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcfbc: 0xc78091e8  lwc1        $f0, -0x6E18($gp)
    ctx->pc = 0x2bcfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcfc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bcfc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcfc4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCFC4u;
    {
        const bool branch_taken_0x2bcfc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcfc4) {
            ctx->pc = 0x2BCFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCFC4u;
            // 0x2bcfc8: 0x46002045  abs.s       $f1, $f4 (Delay Slot)
            ctx->f[1] = FPU_ABS_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCFDCu;
            goto label_2bcfdc;
        }
    }
    ctx->pc = 0x2BCFCCu;
    // 0x2bcfcc: 0xc78091ec  lwc1        $f0, -0x6E14($gp)
    ctx->pc = 0x2bcfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcfd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bcfd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bcfd4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2bcfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2bcfd8: 0x46002045  abs.s       $f1, $f4
    ctx->pc = 0x2bcfd8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[4]);
label_2bcfdc:
    // 0x2bcfdc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bcfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bcfe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bcfe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bcfe4:
    // 0x2bcfe4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bcfe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcfe8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2BCFE8u;
    {
        const bool branch_taken_0x2bcfe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFE8u;
        // 0x2bcfec: 0x3223000c  andi        $v1, $s1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcfe8) {
            ctx->pc = 0x2BD02Cu;
            goto label_2bd02c;
        }
    }
    ctx->pc = 0x2BCFF0u;
    // 0x2bcff0: 0xc78091f0  lwc1        $f0, -0x6E10($gp)
    ctx->pc = 0x2bcff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcff4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2bcff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcff8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2bcff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2bcffc: 0xc78291f4  lwc1        $f2, -0x6E0C($gp)
    ctx->pc = 0x2bcffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd000: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bd000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd004: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bd004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd008: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD008u;
    {
        const bool branch_taken_0x2bd008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD008u;
        // 0x2bd00c: 0xe6610004  swc1        $f1, 0x4($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd008) {
            ctx->pc = 0x2BD014u;
            goto label_2bd014;
        }
    }
    ctx->pc = 0x2BD010u;
    // 0x2bd010: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x2bd010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_2bd014:
    // 0x2bd014: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2bd014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd018: 0xc78191f8  lwc1        $f1, -0x6E08($gp)
    ctx->pc = 0x2bd018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd01c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bd01cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd020: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD020u;
    {
        const bool branch_taken_0x2bd020 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd020) {
            ctx->pc = 0x2BD024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD020u;
            // 0x2bd024: 0xe6610004  swc1        $f1, 0x4($s3) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD028u;
            goto label_2bd028;
        }
    }
    ctx->pc = 0x2BD028u;
label_2bd028:
    // 0x2bd028: 0x3223000c  andi        $v1, $s1, 0xC
    ctx->pc = 0x2bd028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12);
label_2bd02c:
    // 0x2bd02c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2bd02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2bd030: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BD030u;
    {
        const bool branch_taken_0x2bd030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD030u;
        // 0x2bd034: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd030) {
            ctx->pc = 0x2BD098u;
            goto label_2bd098;
        }
    }
    ctx->pc = 0x2BD038u;
    // 0x2bd038: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BD038u;
    {
        const bool branch_taken_0x2bd038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD038u;
        // 0x2bd03c: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd038) {
            ctx->pc = 0x2BD068u;
            goto label_2bd068;
        }
    }
    ctx->pc = 0x2BD040u;
    // 0x2bd040: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2bd040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd044: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2bd044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2bd048: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd04c: 0xc6620010  lwc1        $f2, 0x10($s3)
    ctx->pc = 0x2bd04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd050: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd054: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bd054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd058: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD058u;
    {
        const bool branch_taken_0x2bd058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD058u;
        // 0x2bd05c: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd058) {
            ctx->pc = 0x2BD068u;
            goto label_2bd068;
        }
    }
    ctx->pc = 0x2BD060u;
    // 0x2bd060: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2bd060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2bd064: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x2bd064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_2bd068:
    // 0x2bd068: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BD068u;
    {
        const bool branch_taken_0x2bd068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD068u;
        // 0x2bd06c: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd068) {
            ctx->pc = 0x2BD09Cu;
            goto label_2bd09c;
        }
    }
    ctx->pc = 0x2BD070u;
    // 0x2bd070: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2bd070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd074: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2bd074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2bd078: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd07c: 0x3c01c4fa  lui         $at, 0xC4FA
    ctx->pc = 0x2bd07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50426 << 16));
    // 0x2bd080: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bd080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd084: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bd084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bd088: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bd088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd08c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD08Cu;
    {
        const bool branch_taken_0x2bd08c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD08Cu;
        // 0x2bd090: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd08c) {
            ctx->pc = 0x2BD09Cu;
            goto label_2bd09c;
        }
    }
    ctx->pc = 0x2BD094u;
    // 0x2bd094: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2bd094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_2bd098:
    // 0x2bd098: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x2bd098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2bd09c:
    // 0x2bd09c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bd09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd0a0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD0A0u;
    {
        const bool branch_taken_0x2bd0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0A0u;
        // 0x2bd0a4: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0a0) {
            ctx->pc = 0x2BD0B4u;
            goto label_2bd0b4;
        }
    }
    ctx->pc = 0x2BD0A8u;
    // 0x2bd0a8: 0xc0af38c  jal         func_2BCE30
    ctx->pc = 0x2BD0A8u;
    SET_GPR_U32(ctx, 31, 0x2BD0B0u);
    ctx->pc = 0x2BD0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0A8u;
    // 0x2bd0ac: 0x86840040  lh          $a0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCE30u, 0x2BD0A8u, 0x2BD0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0B0u;
label_2bd0b0:
    // 0x2bd0b0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2bd0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2bd0b4:
    // 0x2bd0b4: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2bd0b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bd0b8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2bd0b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bd0bc: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2bd0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bd0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0c4: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2BD0C4u;
    SET_GPR_U32(ctx, 31, 0x2BD0CCu);
    ctx->pc = 0x2BD0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0C4u;
    // 0x2bd0c8: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2BD0C4u, 0x2BD0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0CCu;
label_2bd0cc:
    // 0x2bd0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0d0: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x2bd0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bd0d4: 0xc084a62  jal         func_212988
    ctx->pc = 0x2BD0D4u;
    SET_GPR_U32(ctx, 31, 0x2BD0DCu);
    ctx->pc = 0x2BD0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0D4u;
    // 0x2bd0d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x2BD0D4u, 0x2BD0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0DCu;
label_2bd0dc:
    // 0x2bd0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0e0: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x2bd0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bd0e4: 0xc084a7e  jal         func_2129F8
    ctx->pc = 0x2BD0E4u;
    SET_GPR_U32(ctx, 31, 0x2BD0ECu);
    ctx->pc = 0x2BD0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0E4u;
    // 0x2bd0e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129F8u, 0x2BD0E4u, 0x2BD0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0ECu;
label_2bd0ec:
    // 0x2bd0ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bd0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0f0: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2BD0F0u;
    SET_GPR_U32(ctx, 31, 0x2BD0F8u);
    ctx->pc = 0x2BD0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0F0u;
    // 0x2bd0f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2BD0F0u, 0x2BD0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0F8u;
label_2bd0f8:
    // 0x2bd0f8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2bd0f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd0fc: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x2bd0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd100: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd104: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x2bd104u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x2bd108: 0x26840720  addiu       $a0, $s4, 0x720
    ctx->pc = 0x2bd108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1824));
    // 0x2bd10c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2bd10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd110: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bd110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd114: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bd114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd118: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bd118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bd11c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2bd11cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2bd120: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bd120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bd124: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2BD124u;
    SET_GPR_U32(ctx, 31, 0x2BD12Cu);
    ctx->pc = 0x2BD128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD124u;
    // 0x2bd128: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2BD124u, 0x2BD12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD12Cu;
label_2bd12c:
    // 0x2bd12c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd130: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2BD130u;
    SET_GPR_U32(ctx, 31, 0x2BD138u);
    ctx->pc = 0x2BD134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD130u;
    // 0x2bd134: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2BD130u, 0x2BD138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD138u;
label_2bd138:
    // 0x2bd138: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2bd138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd13c: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2bd13cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2bd140: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2bd140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bd144: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2bd144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2bd148: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2bd148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bd14c: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2bd14cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2bd150: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2bd150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bd154: 0xc7b400c8  lwc1        $f20, 0xC8($sp)
    ctx->pc = 0x2bd154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd158: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD158u;
        // 0x2bd15c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD160u;
}
