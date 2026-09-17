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

// Function: sub_0025AE40
// Address: 0x25ae40 - 0x25b010
void sub_0025AE40_0x25ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AE40_0x25ae40");
#endif

    switch (ctx->pc) {
        case 0x25ae78u: goto label_25ae78;
        case 0x25af08u: goto label_25af08;
        case 0x25af18u: goto label_25af18;
        case 0x25af28u: goto label_25af28;
        case 0x25af38u: goto label_25af38;
        case 0x25af5cu: goto label_25af5c;
        case 0x25af70u: goto label_25af70;
        case 0x25af80u: goto label_25af80;
        case 0x25af90u: goto label_25af90;
        case 0x25afa8u: goto label_25afa8;
        case 0x25afb4u: goto label_25afb4;
        case 0x25afc4u: goto label_25afc4;
        case 0x25afd8u: goto label_25afd8;
        case 0x25afecu: goto label_25afec;
        default: break;
    }

    ctx->pc = 0x25ae40u;

    // 0x25ae40: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x25ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x25ae44: 0xffb00350  sd          $s0, 0x350($sp)
    ctx->pc = 0x25ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 16));
    // 0x25ae48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25ae48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae4c: 0xffb10358  sd          $s1, 0x358($sp)
    ctx->pc = 0x25ae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 856), GPR_U64(ctx, 17));
    // 0x25ae50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ae50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25ae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae58: 0xffb30368  sd          $s3, 0x368($sp)
    ctx->pc = 0x25ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 872), GPR_U64(ctx, 19));
    // 0x25ae5c: 0xe7b50380  swc1        $f21, 0x380($sp)
    ctx->pc = 0x25ae5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
    // 0x25ae60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25ae60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae64: 0xe7b40378  swc1        $f20, 0x378($sp)
    ctx->pc = 0x25ae64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
    // 0x25ae68: 0xffb20360  sd          $s2, 0x360($sp)
    ctx->pc = 0x25ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 18));
    // 0x25ae6c: 0xffbf0370  sd          $ra, 0x370($sp)
    ctx->pc = 0x25ae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 31));
    // 0x25ae70: 0xc0474ac  jal         func_11D2B0
    ctx->pc = 0x25AE70u;
    SET_GPR_U32(ctx, 31, 0x25AE78u);
    ctx->pc = 0x25AE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE70u;
    // 0x25ae74: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D2B0u, 0x25AE70u, 0x25AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE78u;
label_25ae78:
    // 0x25ae78: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x25ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25ae7c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x25AE7Cu;
    {
        const bool branch_taken_0x25ae7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE7Cu;
        // 0x25ae80: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae7c) {
            ctx->pc = 0x25AEA8u;
            goto label_25aea8;
        }
    }
    ctx->pc = 0x25AE84u;
    // 0x25ae84: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x25ae84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x25ae88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25AE88u;
    {
        const bool branch_taken_0x25ae88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE88u;
        // 0x25ae8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae88) {
            ctx->pc = 0x25AEACu;
            goto label_25aeac;
        }
    }
    ctx->pc = 0x25AE90u;
    // 0x25ae90: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x25ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x25ae94: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AE94u;
    {
        const bool branch_taken_0x25ae94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ae94) {
            ctx->pc = 0x25AE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AE94u;
            // 0x25ae98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AEACu;
            goto label_25aeac;
        }
    }
    ctx->pc = 0x25AE9Cu;
    // 0x25ae9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25AE9Cu;
    {
        const bool branch_taken_0x25ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE9Cu;
        // 0x25aea0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae9c) {
            ctx->pc = 0x25AEACu;
            goto label_25aeac;
        }
    }
    ctx->pc = 0x25AEA4u;
    // 0x25aea4: 0x0  nop
    ctx->pc = 0x25aea4u;
    // NOP
label_25aea8:
    // 0x25aea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25aea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25aeac:
    // 0x25aeac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25AEACu;
    {
        const bool branch_taken_0x25aeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEACu;
        // 0x25aeb0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aeac) {
            ctx->pc = 0x25AEE0u;
            goto label_25aee0;
        }
    }
    ctx->pc = 0x25AEB4u;
    // 0x25aeb4: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x25aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x25aeb8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25aebc: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x25aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x25aec0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AEC0u;
    {
        const bool branch_taken_0x25aec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEC0u;
        // 0x25aec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aec0) {
            ctx->pc = 0x25AED4u;
            goto label_25aed4;
        }
    }
    ctx->pc = 0x25AEC8u;
    // 0x25aec8: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x25aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x25aecc: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25AECCu;
    {
        const bool branch_taken_0x25aecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x25aecc) {
            ctx->pc = 0x25AED8u;
            goto label_25aed8;
        }
    }
    ctx->pc = 0x25AED4u;
label_25aed4:
    // 0x25aed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25aed8:
    // 0x25aed8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AED8u;
    {
        const bool branch_taken_0x25aed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aed8) {
            ctx->pc = 0x25AEF0u;
            goto label_25aef0;
        }
    }
    ctx->pc = 0x25AEE0u;
label_25aee0:
    // 0x25aee0: 0xc7808af0  lwc1        $f0, -0x7510($gp)
    ctx->pc = 0x25aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aee4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x25aee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25aee8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x25AEE8u;
    {
        const bool branch_taken_0x25aee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEE8u;
        // 0x25aeec: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aee8) {
            ctx->pc = 0x25AF40u;
            goto label_25af40;
        }
    }
    ctx->pc = 0x25AEF0u;
label_25aef0:
    // 0x25aef0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25aef0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25aef4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x25aef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x25aef8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x25aef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25aefc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25aefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25af00: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x25AF00u;
    SET_GPR_U32(ctx, 31, 0x25AF08u);
    ctx->pc = 0x25AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF00u;
    // 0x25af04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x25AF00u, 0x25AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF08u;
label_25af08:
    // 0x25af08: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x25af08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25af0c: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x25af0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25af10: 0xc084c9a  jal         func_213268
    ctx->pc = 0x25AF10u;
    SET_GPR_U32(ctx, 31, 0x25AF18u);
    ctx->pc = 0x25AF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF10u;
    // 0x25af14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213268u, 0x25AF10u, 0x25AF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF18u;
label_25af18:
    // 0x25af18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25af18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af1c: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x25af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25af20: 0xc084a62  jal         func_212988
    ctx->pc = 0x25AF20u;
    SET_GPR_U32(ctx, 31, 0x25AF28u);
    ctx->pc = 0x25AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF20u;
    // 0x25af24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x25AF20u, 0x25AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF28u;
label_25af28:
    // 0x25af28: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x25af28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x25af2c: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x25af2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25af30: 0xc097066  jal         func_25C198
    ctx->pc = 0x25AF30u;
    SET_GPR_U32(ctx, 31, 0x25AF38u);
    ctx->pc = 0x25AF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF30u;
    // 0x25af34: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x25AF30u, 0x25AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF38u;
label_25af38:
    // 0x25af38: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x25AF38u;
    {
        const bool branch_taken_0x25af38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF38u;
        // 0x25af3c: 0xdfb00350  ld          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af38) {
            ctx->pc = 0x25AFF0u;
            goto label_25aff0;
        }
    }
    ctx->pc = 0x25AF40u;
label_25af40:
    // 0x25af40: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x25af40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25af44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af48: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25af48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25af4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25af4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25af50: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x25af50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x25af54: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x25AF54u;
    SET_GPR_U32(ctx, 31, 0x25AF5Cu);
    ctx->pc = 0x25AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF54u;
    // 0x25af58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x25AF54u, 0x25AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF5Cu;
label_25af5c:
    // 0x25af5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25af5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af60: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x25af60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25af64: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x25af64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x25af68: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x25AF68u;
    SET_GPR_U32(ctx, 31, 0x25AF70u);
    ctx->pc = 0x25AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF68u;
    // 0x25af6c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x25AF68u, 0x25AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF70u;
label_25af70:
    // 0x25af70: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x25af70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25af74: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x25af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25af78: 0xc084c9a  jal         func_213268
    ctx->pc = 0x25AF78u;
    SET_GPR_U32(ctx, 31, 0x25AF80u);
    ctx->pc = 0x25AF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF78u;
    // 0x25af7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213268u, 0x25AF78u, 0x25AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF80u;
label_25af80:
    // 0x25af80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25af80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af84: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x25af84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25af88: 0xc084a62  jal         func_212988
    ctx->pc = 0x25AF88u;
    SET_GPR_U32(ctx, 31, 0x25AF90u);
    ctx->pc = 0x25AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF88u;
    // 0x25af8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x25AF88u, 0x25AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF90u;
label_25af90:
    // 0x25af90: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x25af90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25af94: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x25af94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25af98: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x25af98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25af9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25af9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25afa0: 0xc097066  jal         func_25C198
    ctx->pc = 0x25AFA0u;
    SET_GPR_U32(ctx, 31, 0x25AFA8u);
    ctx->pc = 0x25AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFA0u;
    // 0x25afa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x25AFA0u, 0x25AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFA8u;
label_25afa8:
    // 0x25afa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25afa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25afac: 0xc084c9a  jal         func_213268
    ctx->pc = 0x25AFACu;
    SET_GPR_U32(ctx, 31, 0x25AFB4u);
    ctx->pc = 0x25AFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFACu;
    // 0x25afb0: 0xc7ac0200  lwc1        $f12, 0x200($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x213268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213268u, 0x25AFACu, 0x25AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFB4u;
label_25afb4:
    // 0x25afb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25afb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25afb8: 0xc7ac0204  lwc1        $f12, 0x204($sp)
    ctx->pc = 0x25afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25afbc: 0xc084a62  jal         func_212988
    ctx->pc = 0x25AFBCu;
    SET_GPR_U32(ctx, 31, 0x25AFC4u);
    ctx->pc = 0x25AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFBCu;
    // 0x25afc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x25AFBCu, 0x25AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFC4u;
label_25afc4:
    // 0x25afc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25afc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25afc8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x25afc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25afcc: 0xc7ac0208  lwc1        $f12, 0x208($sp)
    ctx->pc = 0x25afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25afd0: 0xc097066  jal         func_25C198
    ctx->pc = 0x25AFD0u;
    SET_GPR_U32(ctx, 31, 0x25AFD8u);
    ctx->pc = 0x25AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFD0u;
    // 0x25afd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x25AFD0u, 0x25AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFD8u;
label_25afd8:
    // 0x25afd8: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x25afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x25afdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25afdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25afe0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25afe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25afe4: 0xc0970a6  jal         func_25C298
    ctx->pc = 0x25AFE4u;
    SET_GPR_U32(ctx, 31, 0x25AFECu);
    ctx->pc = 0x25AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFE4u;
    // 0x25afe8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C298u, 0x25AFE4u, 0x25AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFECu;
label_25afec:
    // 0x25afec: 0xdfb00350  ld          $s0, 0x350($sp)
    ctx->pc = 0x25afecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 848)));
label_25aff0:
    // 0x25aff0: 0xdfb10358  ld          $s1, 0x358($sp)
    ctx->pc = 0x25aff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x25aff4: 0xdfb20360  ld          $s2, 0x360($sp)
    ctx->pc = 0x25aff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x25aff8: 0xdfb30368  ld          $s3, 0x368($sp)
    ctx->pc = 0x25aff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x25affc: 0xdfbf0370  ld          $ra, 0x370($sp)
    ctx->pc = 0x25affcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x25b000: 0xc7b50380  lwc1        $f21, 0x380($sp)
    ctx->pc = 0x25b000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25b004: 0xc7b40378  lwc1        $f20, 0x378($sp)
    ctx->pc = 0x25b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b008: 0x3e00008  jr          $ra
    ctx->pc = 0x25B008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B008u;
        // 0x25b00c: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B010u;
}
