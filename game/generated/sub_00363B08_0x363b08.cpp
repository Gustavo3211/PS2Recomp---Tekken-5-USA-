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

// Function: sub_00363B08
// Address: 0x363b08 - 0x363c00
void sub_00363B08_0x363b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363B08_0x363b08");
#endif

    switch (ctx->pc) {
        case 0x363b3cu: goto label_363b3c;
        case 0x363b94u: goto label_363b94;
        case 0x363bb8u: goto label_363bb8;
        default: break;
    }

    ctx->pc = 0x363b08u;

    // 0x363b08: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x363b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x363b0c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363b10: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x363b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x363b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363b18: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x363b18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x363b1c: 0x2410006b  addiu       $s0, $zero, 0x6B
    ctx->pc = 0x363b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x363b20: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x363b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x363b24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x363b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x363b28: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x363B28u;
    {
        const bool branch_taken_0x363b28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x363B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B28u;
        // 0x363b2c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363b28) {
            ctx->pc = 0x363B48u;
            goto label_363b48;
        }
    }
    ctx->pc = 0x363B30u;
    // 0x363b30: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x363b34: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x363B34u;
    SET_GPR_U32(ctx, 31, 0x363B3Cu);
    ctx->pc = 0x363B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363B34u;
    // 0x363b38: 0x24847940  addiu       $a0, $a0, 0x7940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x363B34u, 0x363B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363B3Cu;
label_363b3c:
    // 0x363b3c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x363B3Cu;
    {
        const bool branch_taken_0x363b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B3Cu;
        // 0x363b40: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363b3c) {
            ctx->pc = 0x363BECu;
            goto label_363bec;
        }
    }
    ctx->pc = 0x363B44u;
    // 0x363b44: 0x0  nop
    ctx->pc = 0x363b44u;
    // NOP
label_363b48:
    // 0x363b48: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x363B48u;
    {
        const bool branch_taken_0x363b48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x363b48) {
            ctx->pc = 0x363B58u;
            goto label_363b58;
        }
    }
    ctx->pc = 0x363B50u;
    // 0x363b50: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x363B50u;
    {
        const bool branch_taken_0x363b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B50u;
        // 0x363b54: 0x2410007f  addiu       $s0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363b50) {
            ctx->pc = 0x363BE8u;
            goto label_363be8;
        }
    }
    ctx->pc = 0x363B58u;
label_363b58:
    // 0x363b58: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x363b58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363b5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x363b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x363b60: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x363b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x363b64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x363b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363b68: 0x0  nop
    ctx->pc = 0x363b68u;
    // NOP
    // 0x363b6c: 0x0  nop
    ctx->pc = 0x363b6cu;
    // NOP
    // 0x363b70: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x363b70u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x363b74: 0x0  nop
    ctx->pc = 0x363b74u;
    // NOP
    // 0x363b78: 0x0  nop
    ctx->pc = 0x363b78u;
    // NOP
    // 0x363b7c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x363b7cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x363b80: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x363b80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363b84: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x363B84u;
    {
        const bool branch_taken_0x363b84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363b84) {
            ctx->pc = 0x363B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363B84u;
            // 0x363b88: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x363B98u;
            goto label_363b98;
        }
    }
    ctx->pc = 0x363B8Cu;
    // 0x363b8c: 0xc04754c  jal         func_11D530
    ctx->pc = 0x363B8Cu;
    SET_GPR_U32(ctx, 31, 0x363B94u);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x363B8Cu, 0x363B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363B94u;
label_363b94:
    // 0x363b94: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x363b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_363b98:
    // 0x363b98: 0xc78196a0  lwc1        $f1, -0x6960($gp)
    ctx->pc = 0x363b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363b9c: 0x4600a081  sub.s       $f2, $f20, $f0
    ctx->pc = 0x363b9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x363ba0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x363ba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363ba4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x363BA4u;
    {
        const bool branch_taken_0x363ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x363BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BA4u;
        // 0x363ba8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363ba4) {
            ctx->pc = 0x363BB8u;
            goto label_363bb8;
        }
    }
    ctx->pc = 0x363BACu;
    // 0x363bac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x363BACu;
    {
        const bool branch_taken_0x363bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BACu;
        // 0x363bb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363bac) {
            ctx->pc = 0x363BE8u;
            goto label_363be8;
        }
    }
    ctx->pc = 0x363BB4u;
    // 0x363bb4: 0x0  nop
    ctx->pc = 0x363bb4u;
    // NOP
label_363bb8:
    // 0x363bb8: 0x2862006c  slti        $v0, $v1, 0x6C
    ctx->pc = 0x363bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x363bbc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x363BBCu;
    {
        const bool branch_taken_0x363bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BBCu;
        // 0x363bc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363bbc) {
            ctx->pc = 0x363BECu;
            goto label_363bec;
        }
    }
    ctx->pc = 0x363BC4u;
    // 0x363bc4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x363bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x363bc8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x363bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x363bcc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x363bccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x363bd0: 0xc420be7c  lwc1        $f0, -0x4184($at)
    ctx->pc = 0x363bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294950524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363bd4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x363bd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363bd8: 0x0  nop
    ctx->pc = 0x363bd8u;
    // NOP
    // 0x363bdc: 0x4502fff6  bc1fl       . + 4 + (-0xA << 2)
    ctx->pc = 0x363BDCu;
    {
        const bool branch_taken_0x363bdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363bdc) {
            ctx->pc = 0x363BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363BDCu;
            // 0x363be0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363bb8;
        }
    }
    ctx->pc = 0x363BE4u;
    // 0x363be4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x363be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_363be8:
    // 0x363be8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363bec:
    // 0x363bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363bf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x363bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363bf4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x363bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x363bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x363BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BF8u;
        // 0x363bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363C00u;
}
