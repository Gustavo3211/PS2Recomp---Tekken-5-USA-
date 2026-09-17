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

// Function: sub_00329AC8
// Address: 0x329ac8 - 0x329ba0
void sub_00329AC8_0x329ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329AC8_0x329ac8");
#endif

    switch (ctx->pc) {
        case 0x329ac8u: goto label_329ac8;
        case 0x329accu: goto label_329acc;
        case 0x329ad0u: goto label_329ad0;
        case 0x329ad4u: goto label_329ad4;
        case 0x329ad8u: goto label_329ad8;
        case 0x329adcu: goto label_329adc;
        case 0x329ae0u: goto label_329ae0;
        case 0x329ae4u: goto label_329ae4;
        case 0x329ae8u: goto label_329ae8;
        case 0x329aecu: goto label_329aec;
        case 0x329af0u: goto label_329af0;
        case 0x329af4u: goto label_329af4;
        case 0x329af8u: goto label_329af8;
        case 0x329afcu: goto label_329afc;
        case 0x329b00u: goto label_329b00;
        case 0x329b04u: goto label_329b04;
        case 0x329b08u: goto label_329b08;
        case 0x329b0cu: goto label_329b0c;
        case 0x329b10u: goto label_329b10;
        case 0x329b14u: goto label_329b14;
        case 0x329b18u: goto label_329b18;
        case 0x329b1cu: goto label_329b1c;
        case 0x329b20u: goto label_329b20;
        case 0x329b24u: goto label_329b24;
        case 0x329b28u: goto label_329b28;
        case 0x329b2cu: goto label_329b2c;
        case 0x329b30u: goto label_329b30;
        case 0x329b34u: goto label_329b34;
        case 0x329b38u: goto label_329b38;
        case 0x329b3cu: goto label_329b3c;
        case 0x329b40u: goto label_329b40;
        case 0x329b44u: goto label_329b44;
        case 0x329b48u: goto label_329b48;
        case 0x329b4cu: goto label_329b4c;
        case 0x329b50u: goto label_329b50;
        case 0x329b54u: goto label_329b54;
        case 0x329b58u: goto label_329b58;
        case 0x329b5cu: goto label_329b5c;
        case 0x329b60u: goto label_329b60;
        case 0x329b64u: goto label_329b64;
        case 0x329b68u: goto label_329b68;
        case 0x329b6cu: goto label_329b6c;
        case 0x329b70u: goto label_329b70;
        case 0x329b74u: goto label_329b74;
        case 0x329b78u: goto label_329b78;
        case 0x329b7cu: goto label_329b7c;
        case 0x329b80u: goto label_329b80;
        case 0x329b84u: goto label_329b84;
        case 0x329b88u: goto label_329b88;
        case 0x329b8cu: goto label_329b8c;
        case 0x329b90u: goto label_329b90;
        case 0x329b94u: goto label_329b94;
        case 0x329b98u: goto label_329b98;
        case 0x329b9cu: goto label_329b9c;
        default: break;
    }

    ctx->pc = 0x329ac8u;

label_329ac8:
    // 0x329ac8: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x329ac8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
label_329acc:
    // 0x329acc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x329accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_329ad0:
    // 0x329ad0: 0x46016b41  sub.s       $f13, $f13, $f1
    ctx->pc = 0x329ad0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
label_329ad4:
    // 0x329ad4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_329ad8:
    // 0x329ad8: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x329ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329adc:
    // 0x329adc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_329ae0:
    if (ctx->pc == 0x329AE0u) {
        ctx->pc = 0x329AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329ADCu;
        // 0x329ae0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329AE4u;
        goto label_329ae4;
    }
    ctx->pc = 0x329ADCu;
    {
        const bool branch_taken_0x329adc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x329AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329ADCu;
        // 0x329ae0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329adc) {
            ctx->pc = 0x329B00u;
            goto label_329b00;
        }
    }
    ctx->pc = 0x329AE4u;
label_329ae4:
    // 0x329ae4: 0xc7809618  lwc1        $f0, -0x69E8($gp)
    ctx->pc = 0x329ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_329ae8:
    // 0x329ae8: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x329ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329aec:
    // 0x329aec: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_329af0:
    if (ctx->pc == 0x329AF0u) {
        ctx->pc = 0x329AF4u;
        goto label_329af4;
    }
    ctx->pc = 0x329AECu;
    {
        const bool branch_taken_0x329aec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x329aec) {
            ctx->pc = 0x329B10u;
            goto label_329b10;
        }
    }
    ctx->pc = 0x329AF4u;
label_329af4:
    // 0x329af4: 0x1000000a  b           . + 4 + (0xA << 2)
label_329af8:
    if (ctx->pc == 0x329AF8u) {
        ctx->pc = 0x329AFCu;
        goto label_329afc;
    }
    ctx->pc = 0x329AF4u;
    {
        const bool branch_taken_0x329af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329af4) {
            ctx->pc = 0x329B20u;
            goto label_329b20;
        }
    }
    ctx->pc = 0x329AFCu;
label_329afc:
    // 0x329afc: 0x0  nop
    ctx->pc = 0x329afcu;
    // NOP
label_329b00:
    // 0x329b00: 0xc780961c  lwc1        $f0, -0x69E4($gp)
    ctx->pc = 0x329b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_329b04:
    // 0x329b04: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x329b04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329b08:
    // 0x329b08: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_329b0c:
    if (ctx->pc == 0x329B0Cu) {
        ctx->pc = 0x329B10u;
        goto label_329b10;
    }
    ctx->pc = 0x329B08u;
    {
        const bool branch_taken_0x329b08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x329b08) {
            ctx->pc = 0x329B20u;
            goto label_329b20;
        }
    }
    ctx->pc = 0x329B10u;
label_329b10:
    // 0x329b10: 0xc7809620  lwc1        $f0, -0x69E0($gp)
    ctx->pc = 0x329b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_329b14:
    // 0x329b14: 0x10000008  b           . + 4 + (0x8 << 2)
label_329b18:
    if (ctx->pc == 0x329B18u) {
        ctx->pc = 0x329B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B14u;
        // 0x329b18: 0xe4800040  swc1        $f0, 0x40($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B1Cu;
        goto label_329b1c;
    }
    ctx->pc = 0x329B14u;
    {
        const bool branch_taken_0x329b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B14u;
        // 0x329b18: 0xe4800040  swc1        $f0, 0x40($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b14) {
            ctx->pc = 0x329B38u;
            goto label_329b38;
        }
    }
    ctx->pc = 0x329B1Cu;
label_329b1c:
    // 0x329b1c: 0x0  nop
    ctx->pc = 0x329b1cu;
    // NOP
label_329b20:
    // 0x329b20: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x329b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_329b24:
    // 0x329b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x329b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_329b28:
    // 0x329b28: 0x0  nop
    ctx->pc = 0x329b28u;
    // NOP
label_329b2c:
    // 0x329b2c: 0x0  nop
    ctx->pc = 0x329b2cu;
    // NOP
label_329b30:
    // 0x329b30: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x329b30u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
label_329b34:
    // 0x329b34: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x329b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_329b38:
    // 0x329b38: 0xc48c0040  lwc1        $f12, 0x40($a0)
    ctx->pc = 0x329b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_329b3c:
    // 0x329b3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x329b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_329b40:
    // 0x329b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x329b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_329b44:
    // 0x329b44: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x329b44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_329b48:
    // 0x329b48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x329b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_329b4c:
    // 0x329b4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x329b4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_329b50:
    // 0x329b50: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x329b50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_329b54:
    // 0x329b54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_329b58:
    if (ctx->pc == 0x329B58u) {
        ctx->pc = 0x329B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B54u;
        // 0x329b58: 0xe4800044  swc1        $f0, 0x44($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B5Cu;
        goto label_329b5c;
    }
    ctx->pc = 0x329B54u;
    {
        const bool branch_taken_0x329b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B54u;
        // 0x329b58: 0xe4800044  swc1        $f0, 0x44($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b54) {
            ctx->pc = 0x329B90u;
            goto label_329b90;
        }
    }
    ctx->pc = 0x329B5Cu;
label_329b5c:
    // 0x329b5c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x329b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_329b60:
    // 0x329b60: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x329b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_329b64:
    // 0x329b64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x329b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_329b68:
    // 0x329b68: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x329b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_329b6c:
    // 0x329b6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x329b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_329b70:
    // 0x329b70: 0x8c635a80  lw          $v1, 0x5A80($v1)
    ctx->pc = 0x329b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23168)));
label_329b74:
    // 0x329b74: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x329b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_329b78:
    // 0x329b78: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x329b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_329b7c:
    // 0x329b7c: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x329b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_329b80:
    // 0x329b80: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329b80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329b84:
    // 0x329b84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329b88:
    // 0x329b88: 0x60f809  jalr        $v1
label_329b8c:
    if (ctx->pc == 0x329B8Cu) {
        ctx->pc = 0x329B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B88u;
        // 0x329b8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B90u;
        goto label_329b90;
    }
    ctx->pc = 0x329B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329B90u);
        ctx->pc = 0x329B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B88u;
        // 0x329b8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329B88u, 0x329B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329B90u;
label_329b90:
    // 0x329b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329b94:
    // 0x329b94: 0x3e00008  jr          $ra
label_329b98:
    if (ctx->pc == 0x329B98u) {
        ctx->pc = 0x329B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B94u;
        // 0x329b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B9Cu;
        goto label_329b9c;
    }
    ctx->pc = 0x329B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B94u;
        // 0x329b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329B9Cu;
label_329b9c:
    // 0x329b9c: 0x0  nop
    ctx->pc = 0x329b9cu;
    // NOP
    ctx->pc = 0x329ba0u;
}
