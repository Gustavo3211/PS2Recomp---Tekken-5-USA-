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

// Function: sub_0020DF38
// Address: 0x20df38 - 0x20e050
void sub_0020DF38_0x20df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DF38_0x20df38");
#endif

    switch (ctx->pc) {
        case 0x20df88u: goto label_20df88;
        case 0x20dfe4u: goto label_20dfe4;
        case 0x20e03cu: goto label_20e03c;
        default: break;
    }

    ctx->pc = 0x20df38u;

    // 0x20df38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20df38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20df3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20df3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20df40: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x20df40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x20df44: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x20df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x20df48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20df48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df4c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20df50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20df50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df54: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x20df54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20df58: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20df58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20df5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20df60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20df60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20df64: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x20df64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x20df68: 0x2610a540  addiu       $s0, $s0, -0x5AC0
    ctx->pc = 0x20df68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944064));
    // 0x20df6c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x20df6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20df70: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x20df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20df74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20df74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20df78: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x20DF78u;
    {
        const bool branch_taken_0x20df78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF78u;
        // 0x20df7c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df78) {
            ctx->pc = 0x20DFF0u;
            goto label_20dff0;
        }
    }
    ctx->pc = 0x20DF80u;
    // 0x20df80: 0xc080a1a  jal         func_202868
    ctx->pc = 0x20DF80u;
    SET_GPR_U32(ctx, 31, 0x20DF88u);
    ctx->pc = 0x202868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202868u, 0x20DF80u, 0x20DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF88u;
label_20df88:
    // 0x20df88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20df88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20df8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20df8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20df90: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x20df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20df94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20df94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df98: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x20df98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20df9c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x20df9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20dfa0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x20dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20dfa4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20dfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dfa8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x20dfa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20dfac: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x20dfacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20dfb0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x20dfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20dfb4: 0xe6020030  swc1        $f2, 0x30($s0)
    ctx->pc = 0x20dfb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x20dfb8: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x20dfb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x20dfbc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x20dfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x20dfc0: 0xe603003c  swc1        $f3, 0x3C($s0)
    ctx->pc = 0x20dfc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x20dfc4: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x20dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20dfc8: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x20dfc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x20dfcc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x20dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20dfd0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x20dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20dfd4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x20dfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20dfd8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x20dfd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20dfdc: 0xc08bfdc  jal         func_22FF70
    ctx->pc = 0x20DFDCu;
    SET_GPR_U32(ctx, 31, 0x20DFE4u);
    ctx->pc = 0x20DFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFDCu;
    // 0x20dfe0: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FF70u, 0x20DFDCu, 0x20DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFE4u;
label_20dfe4:
    // 0x20dfe4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20DFE4u;
    {
        const bool branch_taken_0x20dfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFE4u;
        // 0x20dfe8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfe4) {
            ctx->pc = 0x20E040u;
            goto label_20e040;
        }
    }
    ctx->pc = 0x20DFECu;
    // 0x20dfec: 0x0  nop
    ctx->pc = 0x20dfecu;
    // NOP
label_20dff0:
    // 0x20dff0: 0x8602004a  lh          $v0, 0x4A($s0)
    ctx->pc = 0x20dff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x20dff4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20DFF4u;
    {
        const bool branch_taken_0x20dff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFF4u;
        // 0x20dff8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dff4) {
            ctx->pc = 0x20E03Cu;
            goto label_20e03c;
        }
    }
    ctx->pc = 0x20DFFCu;
    // 0x20dffc: 0xc6050028  lwc1        $f5, 0x28($s0)
    ctx->pc = 0x20dffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20e000: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x20e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20e004: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20e004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e008: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x20e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20e00c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x20e00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20e010: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x20e010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20e014: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20e014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e018: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x20e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e01c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x20e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e020: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x20e020u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20e024: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x20e024u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20e028: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x20e028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20e02c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x20e02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20e030: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x20e030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20e034: 0xc08bfdc  jal         func_22FF70
    ctx->pc = 0x20E034u;
    SET_GPR_U32(ctx, 31, 0x20E03Cu);
    ctx->pc = 0x20E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E034u;
    // 0x20e038: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FF70u, 0x20E034u, 0x20E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E03Cu;
label_20e03c:
    // 0x20e03c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x20e03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20e040:
    // 0x20e040: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x20e040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20e044: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20e044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e048: 0x3e00008  jr          $ra
    ctx->pc = 0x20E048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E048u;
        // 0x20e04c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E050u;
}
