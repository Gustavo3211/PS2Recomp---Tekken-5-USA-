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

// Function: sub_0023AF80
// Address: 0x23af80 - 0x23b130
void sub_0023AF80_0x23af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AF80_0x23af80");
#endif

    switch (ctx->pc) {
        case 0x23afb0u: goto label_23afb0;
        case 0x23afc4u: goto label_23afc4;
        case 0x23afe4u: goto label_23afe4;
        case 0x23aff0u: goto label_23aff0;
        case 0x23b000u: goto label_23b000;
        default: break;
    }

    ctx->pc = 0x23af80u;

    // 0x23af80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23af84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23af88: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23af88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23af8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23af90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23af90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23af98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23af98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23afa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23afa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23afa8: 0xc08eb4e  jal         func_23AD38
    ctx->pc = 0x23AFA8u;
    SET_GPR_U32(ctx, 31, 0x23AFB0u);
    ctx->pc = 0x23AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFA8u;
    // 0x23afac: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AD38u, 0x23AFA8u, 0x23AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFB0u;
label_23afb0:
    // 0x23afb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23afb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afb4: 0x12600057  beqz        $s3, . + 4 + (0x57 << 2)
    ctx->pc = 0x23AFB4u;
    {
        const bool branch_taken_0x23afb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFB4u;
        // 0x23afb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afb4) {
            ctx->pc = 0x23B114u;
            goto label_23b114;
        }
    }
    ctx->pc = 0x23AFBCu;
    // 0x23afbc: 0xc08eb2e  jal         func_23ACB8
    ctx->pc = 0x23AFBCu;
    SET_GPR_U32(ctx, 31, 0x23AFC4u);
    ctx->pc = 0x23AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFBCu;
    // 0x23afc0: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ACB8u, 0x23AFBCu, 0x23AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFC4u;
label_23afc4:
    // 0x23afc4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x23afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x23afc8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x23afc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23afcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23afccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afd0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23afd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afd4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23afd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afd8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23afd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afdc: 0xc08eb66  jal         func_23AD98
    ctx->pc = 0x23AFDCu;
    SET_GPR_U32(ctx, 31, 0x23AFE4u);
    ctx->pc = 0x23AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFDCu;
    // 0x23afe0: 0x2484d748  addiu       $a0, $a0, -0x28B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AD98u, 0x23AFDCu, 0x23AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFE4u;
label_23afe4:
    // 0x23afe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23afe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afe8: 0xc08ebd8  jal         func_23AF60
    ctx->pc = 0x23AFE8u;
    SET_GPR_U32(ctx, 31, 0x23AFF0u);
    ctx->pc = 0x23AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFE8u;
    // 0x23afec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF60u, 0x23AFE8u, 0x23AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFF0u;
label_23aff0:
    // 0x23aff0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x23aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x23aff4: 0x26440160  addiu       $a0, $s2, 0x160
    ctx->pc = 0x23aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x23aff8: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x23AFF8u;
    SET_GPR_U32(ctx, 31, 0x23B000u);
    ctx->pc = 0x23AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFF8u;
    // 0x23affc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x23AFF8u, 0x23B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B000u;
label_23b000:
    // 0x23b000: 0xc7848720  lwc1        $f4, -0x78E0($gp)
    ctx->pc = 0x23b000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23b004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b008: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23b008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23b00c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23b00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23b010: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23b010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23b014: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x23b014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b018: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23b018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b01c: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x23b01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x23b020: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23b020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23b024: 0x24c40160  addiu       $a0, $a2, 0x160
    ctx->pc = 0x23b024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
    // 0x23b028: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x23b028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x23b02c: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x23b02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x23b030: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23b030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23b034: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23b034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23b038: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x23b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b03c: 0xe621006c  swc1        $f1, 0x6C($s1)
    ctx->pc = 0x23b03cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x23b040: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23b040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23b044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b048: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x23b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b04c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b050: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x23b050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23b054: 0x0  nop
    ctx->pc = 0x23b054u;
    // NOP
    // 0x23b058: 0x0  nop
    ctx->pc = 0x23b058u;
    // NOP
    // 0x23b05c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x23b05cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x23b060: 0xe6210060  swc1        $f1, 0x60($s1)
    ctx->pc = 0x23b060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x23b064: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x23b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b068: 0x0  nop
    ctx->pc = 0x23b068u;
    // NOP
    // 0x23b06c: 0x0  nop
    ctx->pc = 0x23b06cu;
    // NOP
    // 0x23b070: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x23b070u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x23b074: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x23b074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x23b078: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x23b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b07c: 0xae300098  sw          $s0, 0x98($s1)
    ctx->pc = 0x23b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 16));
    // 0x23b080: 0x0  nop
    ctx->pc = 0x23b080u;
    // NOP
    // 0x23b084: 0x0  nop
    ctx->pc = 0x23b084u;
    // NOP
    // 0x23b088: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x23b088u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x23b08c: 0xe6220068  swc1        $f2, 0x68($s1)
    ctx->pc = 0x23b08cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x23b090: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x23b090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b094: 0x14450020  bne         $v0, $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x23B094u;
    {
        const bool branch_taken_0x23b094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x23B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B094u;
        // 0x23b098: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b094) {
            ctx->pc = 0x23B118u;
            goto label_23b118;
        }
    }
    ctx->pc = 0x23B09Cu;
    // 0x23b09c: 0xc4c10184  lwc1        $f1, 0x184($a2)
    ctx->pc = 0x23b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b0a0: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x23b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23b0a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23b0a8: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x23b0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x23b0ac: 0xc4c00188  lwc1        $f0, 0x188($a2)
    ctx->pc = 0x23b0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0b0: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23b0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b0b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x23b0b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23b0b8: 0xe6210074  swc1        $f1, 0x74($s1)
    ctx->pc = 0x23b0b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x23b0bc: 0xc4c0018c  lwc1        $f0, 0x18C($a2)
    ctx->pc = 0x23b0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0c0: 0xc462002c  lwc1        $f2, 0x2C($v1)
    ctx->pc = 0x23b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23b0c4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x23b0c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x23b0c8: 0xe6220078  swc1        $f2, 0x78($s1)
    ctx->pc = 0x23b0c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x23b0cc: 0xc4c10190  lwc1        $f1, 0x190($a2)
    ctx->pc = 0x23b0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b0d0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x23b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23b0d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23b0d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x23b0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x23b0dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x23b0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x23b0e0: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x23b0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x23b0e4: 0xc4c00194  lwc1        $f0, 0x194($a2)
    ctx->pc = 0x23b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0e8: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x23b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b0ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x23b0ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23b0f0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x23b0f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x23b0f4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x23b0f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x23b0f8: 0xe6210080  swc1        $f1, 0x80($s1)
    ctx->pc = 0x23b0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x23b0fc: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x23b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b100: 0xc4c10198  lwc1        $f1, 0x198($a2)
    ctx->pc = 0x23b100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b104: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23b104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23b108: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x23b108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x23b10c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x23b10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x23b110: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x23b110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
label_23b114:
    // 0x23b114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b118:
    // 0x23b118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b11c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b11cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b120: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b120u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b124: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b128: 0x3e00008  jr          $ra
    ctx->pc = 0x23B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B128u;
        // 0x23b12c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B130u;
}
