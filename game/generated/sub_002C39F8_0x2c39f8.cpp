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

// Function: sub_002C39F8
// Address: 0x2c39f8 - 0x2c3b10
void sub_002C39F8_0x2c39f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C39F8_0x2c39f8");
#endif

    switch (ctx->pc) {
        case 0x2c3a10u: goto label_2c3a10;
        case 0x2c3a18u: goto label_2c3a18;
        case 0x2c3a24u: goto label_2c3a24;
        case 0x2c3a50u: goto label_2c3a50;
        case 0x2c3a70u: goto label_2c3a70;
        default: break;
    }

    ctx->pc = 0x2c39f8u;

    // 0x2c39f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c39f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c39fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c39fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c3a00: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2c3a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c3a04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2c3a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2c3a08: 0xc08c1ba  jal         func_2306E8
    ctx->pc = 0x2C3A08u;
    SET_GPR_U32(ctx, 31, 0x2C3A10u);
    ctx->pc = 0x2C3A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A08u;
    // 0x2c3a0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306E8u, 0x2C3A08u, 0x2C3A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A10u;
label_2c3a10:
    // 0x2c3a10: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2C3A10u;
    SET_GPR_U32(ctx, 31, 0x2C3A18u);
    ctx->pc = 0x2C3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A10u;
    // 0x2c3a14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2C3A10u, 0x2C3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A18u;
label_2c3a18:
    // 0x2c3a18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a1c: 0xc09d480  jal         func_275200
    ctx->pc = 0x2C3A1Cu;
    SET_GPR_U32(ctx, 31, 0x2C3A24u);
    ctx->pc = 0x2C3A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A1Cu;
    // 0x2c3a20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2C3A1Cu, 0x2C3A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A24u;
label_2c3a24:
    // 0x2c3a24: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2C3A24u;
    {
        const bool branch_taken_0x2c3a24 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2C3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A24u;
        // 0x2c3a28: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a24) {
            ctx->pc = 0x2C3AF8u;
            goto label_2c3af8;
        }
    }
    ctx->pc = 0x2C3A2Cu;
    // 0x2c3a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c3a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c3a30: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2c3a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2c3a34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c3a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3a38: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x2c3a38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2c3a3c: 0xc78792d8  lwc1        $f7, -0x6D28($gp)
    ctx->pc = 0x2c3a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c3a40: 0xc78692dc  lwc1        $f6, -0x6D24($gp)
    ctx->pc = 0x2c3a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c3a44: 0x3c01444e  lui         $at, 0x444E
    ctx->pc = 0x2c3a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17486 << 16));
    // 0x2c3a48: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2c3a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c3a4c: 0xc78492e0  lwc1        $f4, -0x6D20($gp)
    ctx->pc = 0x2c3a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2c3a50:
    // 0x2c3a50: 0x8ce50898  lw          $a1, 0x898($a3)
    ctx->pc = 0x2c3a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2200)));
    // 0x2c3a54: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x2c3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x2c3a58: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C3A58u;
    {
        const bool branch_taken_0x2c3a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A58u;
        // 0x2c3a5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a58) {
            ctx->pc = 0x2C3AECu;
            goto label_2c3aec;
        }
    }
    ctx->pc = 0x2C3A60u;
    // 0x2c3a60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c3a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3a64: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x2c3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2c3a68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2c3a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3a6c: 0x0  nop
    ctx->pc = 0x2c3a6cu;
    // NOP
label_2c3a70:
    // 0x2c3a70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3a74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2c3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c3a78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c3a7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2c3a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c3a80: 0x0  nop
    ctx->pc = 0x2c3a80u;
    // NOP
    // 0x2c3a84: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C3A84u;
    {
        const bool branch_taken_0x2c3a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2C3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A84u;
        // 0x2c3a88: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a84) {
            ctx->pc = 0x2C3A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3a70;
        }
    }
    ctx->pc = 0x2C3A8Cu;
    // 0x2c3a8c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2c3a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3a90: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2c3a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c3a94: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x2c3a94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2c3a98: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2c3a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3a9c: 0x0  nop
    ctx->pc = 0x2c3a9cu;
    // NOP
    // 0x2c3aa0: 0x0  nop
    ctx->pc = 0x2c3aa0u;
    // NOP
    // 0x2c3aa4: 0x46004803  div.s       $f0, $f9, $f0
    ctx->pc = 0x2c3aa4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[0] = ctx->f[9] / ctx->f[0];
    // 0x2c3aa8: 0x46080834  c.lt.s      $f1, $f8
    ctx->pc = 0x2c3aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3aac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c3aacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c3ab0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2C3AB0u;
    {
        const bool branch_taken_0x2c3ab0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AB0u;
        // 0x2c3ab4: 0x460018c2  mul.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ab0) {
            ctx->pc = 0x2C3AE8u;
            goto label_2c3ae8;
        }
    }
    ctx->pc = 0x2C3AB8u;
    // 0x2c3ab8: 0x46071836  c.le.s      $f3, $f7
    ctx->pc = 0x2c3ab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3abc: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x2C3ABCu;
    {
        const bool branch_taken_0x2c3abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3abc) {
            ctx->pc = 0x2C3AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3ABCu;
            // 0x2c3ac0: 0xaca00088  sw          $zero, 0x88($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3AECu;
            goto label_2c3aec;
        }
    }
    ctx->pc = 0x2C3AC4u;
    // 0x2c3ac4: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x2c3ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3ac8: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3AC8u;
    {
        const bool branch_taken_0x2c3ac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3ac8) {
            ctx->pc = 0x2C3ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3AC8u;
            // 0x2c3acc: 0xaca00088  sw          $zero, 0x88($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3AECu;
            goto label_2c3aec;
        }
    }
    ctx->pc = 0x2C3AD0u;
    // 0x2c3ad0: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x2c3ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3ad4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3AD4u;
    {
        const bool branch_taken_0x2c3ad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3ad4) {
            ctx->pc = 0x2C3AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3AD4u;
            // 0x2c3ad8: 0xaca00088  sw          $zero, 0x88($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3AECu;
            goto label_2c3aec;
        }
    }
    ctx->pc = 0x2C3ADCu;
    // 0x2c3adc: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x2c3adcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3ae0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3AE0u;
    {
        const bool branch_taken_0x2c3ae0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3ae0) {
            ctx->pc = 0x2C3AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3AE0u;
            // 0x2c3ae4: 0xaca80088  sw          $t0, 0x88($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3AECu;
            goto label_2c3aec;
        }
    }
    ctx->pc = 0x2C3AE8u;
label_2c3ae8:
    // 0x2c3ae8: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x2c3ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
label_2c3aec:
    // 0x2c3aec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c3aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c3af0: 0x1e00ffd7  bgtz        $s0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2C3AF0u;
    {
        const bool branch_taken_0x2c3af0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2C3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AF0u;
        // 0x2c3af4: 0x24e708d0  addiu       $a3, $a3, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3af0) {
            ctx->pc = 0x2C3A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3a50;
        }
    }
    ctx->pc = 0x2C3AF8u;
label_2c3af8:
    // 0x2c3af8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c3af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3afc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c3afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3b00: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2c3b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c3b04: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B04u;
        // 0x2c3b08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3B0Cu;
    // 0x2c3b0c: 0x0  nop
    ctx->pc = 0x2c3b0cu;
    // NOP
    ctx->pc = 0x2c3b10u;
}
