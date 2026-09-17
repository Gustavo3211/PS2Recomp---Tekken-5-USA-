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

// Function: sub_00205B98
// Address: 0x205b98 - 0x205ce8
void sub_00205B98_0x205b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205B98_0x205b98");
#endif

    switch (ctx->pc) {
        case 0x205bdcu: goto label_205bdc;
        case 0x205bf4u: goto label_205bf4;
        case 0x205c00u: goto label_205c00;
        case 0x205c0cu: goto label_205c0c;
        case 0x205c1cu: goto label_205c1c;
        case 0x205c2cu: goto label_205c2c;
        case 0x205c54u: goto label_205c54;
        default: break;
    }

    ctx->pc = 0x205b98u;

    // 0x205b98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x205b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x205b9c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x205b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x205ba0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x205ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ba4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x205ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x205ba8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x205ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bac: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x205bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x205bb0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x205bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bb4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x205bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x205bb8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x205bb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bbc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x205bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x205bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bc4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x205bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x205bc8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x205bc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x205bcc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x205bccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x205bd0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x205bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x205bd4: 0xc084784  jal         func_211E10
    ctx->pc = 0x205BD4u;
    SET_GPR_U32(ctx, 31, 0x205BDCu);
    ctx->pc = 0x205BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205BD4u;
    // 0x205bd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x205BD4u, 0x205BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BDCu;
label_205bdc:
    // 0x205bdc: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x205bdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x205be0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x205be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x205be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205be8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bec: 0xc0847da  jal         func_211F68
    ctx->pc = 0x205BECu;
    SET_GPR_U32(ctx, 31, 0x205BF4u);
    ctx->pc = 0x205BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205BECu;
    // 0x205bf0: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x205BECu, 0x205BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BF4u;
label_205bf4:
    // 0x205bf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x205bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bf8: 0xc0847da  jal         func_211F68
    ctx->pc = 0x205BF8u;
    SET_GPR_U32(ctx, 31, 0x205C00u);
    ctx->pc = 0x205BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205BF8u;
    // 0x205bfc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x205BF8u, 0x205C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C00u;
label_205c00:
    // 0x205c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c04: 0xc084814  jal         func_212050
    ctx->pc = 0x205C04u;
    SET_GPR_U32(ctx, 31, 0x205C0Cu);
    ctx->pc = 0x205C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C04u;
    // 0x205c08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x205C04u, 0x205C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C0Cu;
label_205c0c:
    // 0x205c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x205c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c14: 0xc084814  jal         func_212050
    ctx->pc = 0x205C14u;
    SET_GPR_U32(ctx, 31, 0x205C1Cu);
    ctx->pc = 0x205C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C14u;
    // 0x205c18: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x205C14u, 0x205C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C1Cu;
label_205c1c:
    // 0x205c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x205c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c24: 0xc084814  jal         func_212050
    ctx->pc = 0x205C24u;
    SET_GPR_U32(ctx, 31, 0x205C2Cu);
    ctx->pc = 0x205C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C24u;
    // 0x205c28: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x205C24u, 0x205C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C2Cu;
label_205c2c:
    // 0x205c2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x205c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c30: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x205c30u;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
    // 0x205c34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205c38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x205c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c40: 0x46004032  c.eq.s      $f8, $f0
    ctx->pc = 0x205c40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205c44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x205C44u;
    {
        const bool branch_taken_0x205c44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C44u;
        // 0x205c48: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c44) {
            ctx->pc = 0x205C60u;
            goto label_205c60;
        }
    }
    ctx->pc = 0x205C4Cu;
    // 0x205c4c: 0xc08163a  jal         func_2058E8
    ctx->pc = 0x205C4Cu;
    SET_GPR_U32(ctx, 31, 0x205C54u);
    ctx->pc = 0x2058E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058E8u, 0x205C4Cu, 0x205C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C54u;
label_205c54:
    // 0x205c54: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x205C54u;
    {
        const bool branch_taken_0x205c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C54u;
        // 0x205c58: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c54) {
            ctx->pc = 0x205CC0u;
            goto label_205cc0;
        }
    }
    ctx->pc = 0x205C5Cu;
    // 0x205c5c: 0x0  nop
    ctx->pc = 0x205c5cu;
    // NOP
label_205c60:
    // 0x205c60: 0x4615a040  add.s       $f1, $f20, $f21
    ctx->pc = 0x205c60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x205c64: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x205c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x205c68: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x205c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x205c6c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x205c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x205c70: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x205c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x205c74: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x205c74u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x205c78: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x205c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x205c7c: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x205c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x205c80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x205c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x205c84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x205c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205c88: 0x0  nop
    ctx->pc = 0x205c88u;
    // NOP
    // 0x205c8c: 0x0  nop
    ctx->pc = 0x205c8cu;
    // NOP
    // 0x205c90: 0x46080843  div.s       $f1, $f1, $f8
    ctx->pc = 0x205c90u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[8];
    // 0x205c94: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x205c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x205c98: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x205c98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x205c9c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x205c9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x205ca0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x205ca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x205ca4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x205ca4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x205ca8: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x205ca8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x205cac: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x205cacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x205cb0: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x205cb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x205cb4: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x205cb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x205cb8: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x205cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x205cbc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x205cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_205cc0:
    // 0x205cc0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x205cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205cc4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x205cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205cc8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x205cc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x205ccc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x205cccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x205cd0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x205cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x205cd4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x205cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x205cd8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x205cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x205cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x205CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CDCu;
        // 0x205ce0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205CE4u;
    // 0x205ce4: 0x0  nop
    ctx->pc = 0x205ce4u;
    // NOP
    ctx->pc = 0x205ce8u;
}
