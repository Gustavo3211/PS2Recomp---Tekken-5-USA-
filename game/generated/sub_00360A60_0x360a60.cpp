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

// Function: sub_00360A60
// Address: 0x360a60 - 0x360b60
void sub_00360A60_0x360a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360A60_0x360a60");
#endif

    switch (ctx->pc) {
        case 0x360a94u: goto label_360a94;
        case 0x360aa0u: goto label_360aa0;
        case 0x360accu: goto label_360acc;
        case 0x360ad8u: goto label_360ad8;
        default: break;
    }

    ctx->pc = 0x360a60u;

    // 0x360a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x360a64: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x360a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x360a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360a6c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x360a6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x360a70: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x360a70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x360a74: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x360a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360a7c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x360A7Cu;
    {
        const bool branch_taken_0x360a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x360A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360A7Cu;
        // 0x360a80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360a7c) {
            ctx->pc = 0x360AA8u;
            goto label_360aa8;
        }
    }
    ctx->pc = 0x360A84u;
    // 0x360a84: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x360a84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x360a88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360a88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x360a8c: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x360A8Cu;
    SET_GPR_U32(ctx, 31, 0x360A94u);
    ctx->pc = 0x360A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A8Cu;
    // 0x360a90: 0x26106d38  addiu       $s0, $s0, 0x6D38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x360A8Cu, 0x360A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A94u;
label_360a94:
    // 0x360a94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x360a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a98: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x360A98u;
    SET_GPR_U32(ctx, 31, 0x360AA0u);
    ctx->pc = 0x360A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A98u;
    // 0x360a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x360A98u, 0x360AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360AA0u;
label_360aa0:
    // 0x360aa0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x360AA0u;
    {
        const bool branch_taken_0x360aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360aa0) {
            ctx->pc = 0x360AD8u;
            goto label_360ad8;
        }
    }
    ctx->pc = 0x360AA8u;
label_360aa8:
    // 0x360aa8: 0x3c01c3b4  lui         $at, 0xC3B4
    ctx->pc = 0x360aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50100 << 16));
    // 0x360aac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360ab0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x360ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360ab4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x360AB4u;
    {
        const bool branch_taken_0x360ab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x360ab4) {
            ctx->pc = 0x360AD8u;
            goto label_360ad8;
        }
    }
    ctx->pc = 0x360ABCu;
    // 0x360abc: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x360abcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x360ac0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360ac0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x360ac4: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x360AC4u;
    SET_GPR_U32(ctx, 31, 0x360ACCu);
    ctx->pc = 0x360AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360AC4u;
    // 0x360ac8: 0x26106d38  addiu       $s0, $s0, 0x6D38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x360AC4u, 0x360ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360ACCu;
label_360acc:
    // 0x360acc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x360accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ad0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x360AD0u;
    SET_GPR_U32(ctx, 31, 0x360AD8u);
    ctx->pc = 0x360AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360AD0u;
    // 0x360ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x360AD0u, 0x360AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360AD8u;
label_360ad8:
    // 0x360ad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x360ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360adc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x360adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360ae0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x360AE0u;
    {
        const bool branch_taken_0x360ae0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x360ae0) {
            ctx->pc = 0x360AF4u;
            goto label_360af4;
        }
    }
    ctx->pc = 0x360AE8u;
    // 0x360ae8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x360ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x360aec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360af0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x360af0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_360af4:
    // 0x360af4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x360af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x360af8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x360af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360afc: 0x460ca036  c.le.s      $f20, $f12
    ctx->pc = 0x360afcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360b00: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x360B00u;
    {
        const bool branch_taken_0x360b00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x360b00) {
            ctx->pc = 0x360B18u;
            goto label_360b18;
        }
    }
    ctx->pc = 0x360B08u;
    // 0x360b08: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x360b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x360b0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360b10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x360B10u;
    {
        const bool branch_taken_0x360b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B10u;
        // 0x360b14: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b10) {
            ctx->pc = 0x360B30u;
            goto label_360b30;
        }
    }
    ctx->pc = 0x360B18u;
label_360b18:
    // 0x360b18: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x360b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x360b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x360b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x360b20: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x360b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x360b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360b28: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x360b28u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x360b2c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x360b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_360b30:
    // 0x360b30: 0x0  nop
    ctx->pc = 0x360b30u;
    // NOP
    // 0x360b34: 0x0  nop
    ctx->pc = 0x360b34u;
    // NOP
    // 0x360b38: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x360b38u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x360b3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360b3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x360b40: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x360b40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x360b44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x360b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x360b48: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x360b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x360b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360b50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x360b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360b54: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x360b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360b58: 0x3e00008  jr          $ra
    ctx->pc = 0x360B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B58u;
        // 0x360b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360B60u;
}
