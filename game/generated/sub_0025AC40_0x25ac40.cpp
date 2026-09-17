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

// Function: sub_0025AC40
// Address: 0x25ac40 - 0x25ae40
void sub_0025AC40_0x25ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AC40_0x25ac40");
#endif

    switch (ctx->pc) {
        case 0x25ac74u: goto label_25ac74;
        case 0x25ad00u: goto label_25ad00;
        case 0x25ad60u: goto label_25ad60;
        case 0x25ad74u: goto label_25ad74;
        default: break;
    }

    ctx->pc = 0x25ac40u;

    // 0x25ac40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25ac44: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x25ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x25ac48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25ac48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac4c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x25ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x25ac50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25ac50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25ac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac58: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x25ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x25ac5c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x25ac5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25ac60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25ac60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac64: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x25ac64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25ac68: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x25ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x25ac6c: 0xc0474ac  jal         func_11D2B0
    ctx->pc = 0x25AC6Cu;
    SET_GPR_U32(ctx, 31, 0x25AC74u);
    ctx->pc = 0x25AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AC6Cu;
    // 0x25ac70: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D2B0u, 0x25AC6Cu, 0x25AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AC74u;
label_25ac74:
    // 0x25ac74: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x25ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25ac78: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25AC78u;
    {
        const bool branch_taken_0x25ac78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC78u;
        // 0x25ac7c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac78) {
            ctx->pc = 0x25ACA0u;
            goto label_25aca0;
        }
    }
    ctx->pc = 0x25AC80u;
    // 0x25ac80: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x25ac80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x25ac84: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AC84u;
    {
        const bool branch_taken_0x25ac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC84u;
        // 0x25ac88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac84) {
            ctx->pc = 0x25ACA4u;
            goto label_25aca4;
        }
    }
    ctx->pc = 0x25AC8Cu;
    // 0x25ac8c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x25ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x25ac90: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AC90u;
    {
        const bool branch_taken_0x25ac90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ac90) {
            ctx->pc = 0x25AC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AC90u;
            // 0x25ac94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ACA4u;
            goto label_25aca4;
        }
    }
    ctx->pc = 0x25AC98u;
    // 0x25ac98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25AC98u;
    {
        const bool branch_taken_0x25ac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC98u;
        // 0x25ac9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac98) {
            ctx->pc = 0x25ACA4u;
            goto label_25aca4;
        }
    }
    ctx->pc = 0x25ACA0u;
label_25aca0:
    // 0x25aca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25aca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25aca4:
    // 0x25aca4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25ACA4u;
    {
        const bool branch_taken_0x25aca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACA4u;
        // 0x25aca8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aca4) {
            ctx->pc = 0x25ACD8u;
            goto label_25acd8;
        }
    }
    ctx->pc = 0x25ACACu;
    // 0x25acac: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x25acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x25acb0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25acb4: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x25acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x25acb8: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25ACB8u;
    {
        const bool branch_taken_0x25acb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACB8u;
        // 0x25acbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acb8) {
            ctx->pc = 0x25ACCCu;
            goto label_25accc;
        }
    }
    ctx->pc = 0x25ACC0u;
    // 0x25acc0: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x25acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x25acc4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25ACC4u;
    {
        const bool branch_taken_0x25acc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x25acc4) {
            ctx->pc = 0x25ACD0u;
            goto label_25acd0;
        }
    }
    ctx->pc = 0x25ACCCu;
label_25accc:
    // 0x25accc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25acd0:
    // 0x25acd0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25ACD0u;
    {
        const bool branch_taken_0x25acd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25acd0) {
            ctx->pc = 0x25ACE8u;
            goto label_25ace8;
        }
    }
    ctx->pc = 0x25ACD8u;
label_25acd8:
    // 0x25acd8: 0xc7808aec  lwc1        $f0, -0x7514($gp)
    ctx->pc = 0x25acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25acdc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x25acdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ace0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x25ACE0u;
    {
        const bool branch_taken_0x25ace0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACE0u;
        // 0x25ace4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ace0) {
            ctx->pc = 0x25AD38u;
            goto label_25ad38;
        }
    }
    ctx->pc = 0x25ACE8u;
label_25ace8:
    // 0x25ace8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25ace8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25acec: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x25acecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x25acf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25acf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25acf4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25acf8: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x25ACF8u;
    SET_GPR_U32(ctx, 31, 0x25AD00u);
    ctx->pc = 0x25ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ACF8u;
    // 0x25acfc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x25ACF8u, 0x25AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD00u;
label_25ad00:
    // 0x25ad00: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x25ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ad04: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x25ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ad08: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x25ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ad0c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x25ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25ad10: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x25ad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25ad14: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x25ad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25ad18: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25ad18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25ad1c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x25ad1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x25ad20: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x25ad20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x25ad24: 0xe6230010  swc1        $f3, 0x10($s1)
    ctx->pc = 0x25ad24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x25ad28: 0xe6240014  swc1        $f4, 0x14($s1)
    ctx->pc = 0x25ad28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x25ad2c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x25AD2Cu;
    {
        const bool branch_taken_0x25ad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD2Cu;
        // 0x25ad30: 0xe6250018  swc1        $f5, 0x18($s1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad2c) {
            ctx->pc = 0x25AE04u;
            goto label_25ae04;
        }
    }
    ctx->pc = 0x25AD34u;
    // 0x25ad34: 0x0  nop
    ctx->pc = 0x25ad34u;
    // NOP
label_25ad38:
    // 0x25ad38: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25ad3c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x25ad3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ad40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ad40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25ad44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25ad48: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x25ad48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x25ad4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ad4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ad50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25ad50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25ad54: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x25ad54u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x25ad58: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x25AD58u;
    SET_GPR_U32(ctx, 31, 0x25AD60u);
    ctx->pc = 0x25AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD58u;
    // 0x25ad5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x25AD58u, 0x25AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD60u;
label_25ad60:
    // 0x25ad60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ad60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad64: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x25ad64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25ad68: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25ad6c: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x25AD6Cu;
    SET_GPR_U32(ctx, 31, 0x25AD74u);
    ctx->pc = 0x25AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD6Cu;
    // 0x25ad70: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x25AD6Cu, 0x25AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD74u;
label_25ad74:
    // 0x25ad74: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x25ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25ad78: 0xc7ab0030  lwc1        $f11, 0x30($sp)
    ctx->pc = 0x25ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25ad7c: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x25ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25ad80: 0x46144202  mul.s       $f8, $f8, $f20
    ctx->pc = 0x25ad80u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x25ad84: 0xc7aa0034  lwc1        $f10, 0x34($sp)
    ctx->pc = 0x25ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25ad88: 0x46155ac2  mul.s       $f11, $f11, $f21
    ctx->pc = 0x25ad88u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[21]);
    // 0x25ad8c: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x25ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25ad90: 0x46144a42  mul.s       $f9, $f9, $f20
    ctx->pc = 0x25ad90u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
    // 0x25ad94: 0xc7a70038  lwc1        $f7, 0x38($sp)
    ctx->pc = 0x25ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25ad98: 0x46155282  mul.s       $f10, $f10, $f21
    ctx->pc = 0x25ad98u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[21]);
    // 0x25ad9c: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x25ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25ada0: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x25ada0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x25ada4: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x25ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25ada8: 0x461539c2  mul.s       $f7, $f7, $f21
    ctx->pc = 0x25ada8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
    // 0x25adac: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x25adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25adb0: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x25adb0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x25adb4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x25adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25adb8: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x25adb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x25adbc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x25adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25adc0: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x25adc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x25adc4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x25adc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25adc8: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x25adc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x25adcc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x25adccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x25add0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25add0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25add4: 0x460b4200  add.s       $f8, $f8, $f11
    ctx->pc = 0x25add4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[11]);
    // 0x25add8: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x25add8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x25addc: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x25addcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x25ade0: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x25ade0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x25ade4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x25ade4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x25ade8: 0xe6280000  swc1        $f8, 0x0($s1)
    ctx->pc = 0x25ade8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25adec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25adecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25adf0: 0xe6290004  swc1        $f9, 0x4($s1)
    ctx->pc = 0x25adf0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x25adf4: 0xe6260008  swc1        $f6, 0x8($s1)
    ctx->pc = 0x25adf4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x25adf8: 0xe6250010  swc1        $f5, 0x10($s1)
    ctx->pc = 0x25adf8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x25adfc: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x25adfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x25ae00: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x25ae00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_25ae04:
    // 0x25ae04: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x25ae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae08: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x25ae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ae0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25ae0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25ae10: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x25ae10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ae14: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25ae14u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x25ae18: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25ae18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ae1c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x25ae1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x25ae20: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x25ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25ae24: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x25ae24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x25ae28: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x25ae28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x25ae2c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x25ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25ae30: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x25ae30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25ae34: 0x3e00008  jr          $ra
    ctx->pc = 0x25AE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE34u;
        // 0x25ae38: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AE3Cu;
    // 0x25ae3c: 0x0  nop
    ctx->pc = 0x25ae3cu;
    // NOP
    ctx->pc = 0x25ae40u;
}
