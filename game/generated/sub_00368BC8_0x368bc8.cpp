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

// Function: sub_00368BC8
// Address: 0x368bc8 - 0x368ce0
void sub_00368BC8_0x368bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368BC8_0x368bc8");
#endif

    switch (ctx->pc) {
        case 0x368c30u: goto label_368c30;
        case 0x368c3cu: goto label_368c3c;
        case 0x368c48u: goto label_368c48;
        case 0x368c54u: goto label_368c54;
        case 0x368c60u: goto label_368c60;
        case 0x368c80u: goto label_368c80;
        default: break;
    }

    ctx->pc = 0x368bc8u;

    // 0x368bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x368bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x368bcc: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x368bccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x368bd0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x368bd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x368bd4: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x368bd4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
    // 0x368bd8: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x368bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368bdc: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x368bdcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x368be0: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x368be0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x368be4: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x368be4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x368be8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x368be8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x368bec: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x368becu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x368bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368bf4: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x368bf4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x368bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368bfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x368bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x368c00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x368c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x368c04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x368c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x368c08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x368C08u;
    {
        const bool branch_taken_0x368c08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x368C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368C08u;
        // 0x368c0c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368c08) {
            ctx->pc = 0x368C28u;
            goto label_368c28;
        }
    }
    ctx->pc = 0x368C10u;
    // 0x368c10: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x368c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368c14: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x368C14u;
    {
        const bool branch_taken_0x368c14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x368c14) {
            ctx->pc = 0x368C28u;
            goto label_368c28;
        }
    }
    ctx->pc = 0x368C1Cu;
    // 0x368c1c: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x368c1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368c20: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x368C20u;
    {
        const bool branch_taken_0x368c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x368c20) {
            ctx->pc = 0x368C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368C20u;
            // 0x368c24: 0x4616b801  sub.s       $f0, $f23, $f22 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x368C90u;
            goto label_368c90;
        }
    }
    ctx->pc = 0x368C28u;
label_368c28:
    // 0x368c28: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x368C28u;
    SET_GPR_U32(ctx, 31, 0x368C30u);
    ctx->pc = 0x368C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C28u;
    // 0x368c2c: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x368C28u, 0x368C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C30u;
label_368c30:
    // 0x368c30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x368c30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c34: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x368C34u;
    SET_GPR_U32(ctx, 31, 0x368C3Cu);
    ctx->pc = 0x368C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C34u;
    // 0x368c38: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x368C34u, 0x368C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C3Cu;
label_368c3c:
    // 0x368c3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x368c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c40: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x368C40u;
    SET_GPR_U32(ctx, 31, 0x368C48u);
    ctx->pc = 0x368C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C40u;
    // 0x368c44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x368C40u, 0x368C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C48u;
label_368c48:
    // 0x368c48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x368c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c4c: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x368C4Cu;
    SET_GPR_U32(ctx, 31, 0x368C54u);
    ctx->pc = 0x368C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C4Cu;
    // 0x368c50: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x368C4Cu, 0x368C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C54u;
label_368c54:
    // 0x368c54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x368c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c58: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x368C58u;
    SET_GPR_U32(ctx, 31, 0x368C60u);
    ctx->pc = 0x368C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C58u;
    // 0x368c5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x368C58u, 0x368C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C60u;
label_368c60:
    // 0x368c60: 0x26107dd0  addiu       $s0, $s0, 0x7DD0
    ctx->pc = 0x368c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32208));
    // 0x368c64: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x368c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x368c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x368c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x368c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c74: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x368c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c78: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368C78u;
    SET_GPR_U32(ctx, 31, 0x368C80u);
    ctx->pc = 0x368C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C78u;
    // 0x368c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368C78u, 0x368C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C80u;
label_368c80:
    // 0x368c80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368c84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x368C84u;
    {
        const bool branch_taken_0x368c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368C84u;
        // 0x368c88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368c84) {
            ctx->pc = 0x368CB0u;
            goto label_368cb0;
        }
    }
    ctx->pc = 0x368C8Cu;
    // 0x368c8c: 0x0  nop
    ctx->pc = 0x368c8cu;
    // NOP
label_368c90:
    // 0x368c90: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x368c90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x368c94: 0x4614a881  sub.s       $f2, $f21, $f20
    ctx->pc = 0x368c94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x368c98: 0x0  nop
    ctx->pc = 0x368c98u;
    // NOP
    // 0x368c9c: 0x0  nop
    ctx->pc = 0x368c9cu;
    // NOP
    // 0x368ca0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x368ca0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x368ca4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x368ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x368ca8: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x368ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x368cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_368cb0:
    // 0x368cb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368cb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x368cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368cb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x368cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368cbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x368cbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368cc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x368cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x368cc4: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x368cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x368cc8: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x368cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x368ccc: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x368cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x368cd0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x368cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x368cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x368CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368CD4u;
        // 0x368cd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368CDCu;
    // 0x368cdc: 0x0  nop
    ctx->pc = 0x368cdcu;
    // NOP
    ctx->pc = 0x368ce0u;
}
