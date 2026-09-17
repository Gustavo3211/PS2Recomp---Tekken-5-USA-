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

// Function: sub_0025DF50
// Address: 0x25df50 - 0x25e108
void sub_0025DF50_0x25df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DF50_0x25df50");
#endif

    switch (ctx->pc) {
        case 0x25df8cu: goto label_25df8c;
        case 0x25dfdcu: goto label_25dfdc;
        case 0x25e018u: goto label_25e018;
        case 0x25e064u: goto label_25e064;
        default: break;
    }

    ctx->pc = 0x25df50u;

    // 0x25df50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25df50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25df54: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x25df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x25df58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25df58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25df5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25df64: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x25df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x25df68: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25df68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df6c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x25df6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25df70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25df70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df74: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x25df74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25df78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25df7c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25df7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25df80: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x25df80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x25df84: 0xc0474ac  jal         func_11D2B0
    ctx->pc = 0x25DF84u;
    SET_GPR_U32(ctx, 31, 0x25DF8Cu);
    ctx->pc = 0x25DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF84u;
    // 0x25df88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D2B0u, 0x25DF84u, 0x25DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF8Cu;
label_25df8c:
    // 0x25df8c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x25df8cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x25df90: 0xc7808b68  lwc1        $f0, -0x7498($gp)
    ctx->pc = 0x25df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25df94: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x25df94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25df98: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25DF98u;
    {
        const bool branch_taken_0x25df98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF98u;
        // 0x25df9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df98) {
            ctx->pc = 0x25DFB8u;
            goto label_25dfb8;
        }
    }
    ctx->pc = 0x25DFA0u;
    // 0x25dfa0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x25dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dfa4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25dfa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25dfa8: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x25dfa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x25dfac: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x25DFACu;
    {
        const bool branch_taken_0x25dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFACu;
        // 0x25dfb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dfac) {
            ctx->pc = 0x25E0D4u;
            goto label_25e0d4;
        }
    }
    ctx->pc = 0x25DFB4u;
    // 0x25dfb4: 0x0  nop
    ctx->pc = 0x25dfb4u;
    // NOP
label_25dfb8:
    // 0x25dfb8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25dfb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25dfbc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25dfbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25dfc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25dfc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dfc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25dfcc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dfd0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x25dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x25dfd4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x25dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x25dfd8: 0x24430260  addiu       $v1, $v0, 0x260
    ctx->pc = 0x25dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_25dfdc:
    // 0x25dfdc: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x25dfdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25dfe0: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x25dfe0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25dfe4: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x25dfe4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25dfe8: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x25dfe8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25dfec: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x25dfecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x25dff0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x25dff0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x25dff4: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x25dff4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x25dff8: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x25dff8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x25dffc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x25dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x25e000: 0x0  nop
    ctx->pc = 0x25e000u;
    // NOP
    // 0x25e004: 0x0  nop
    ctx->pc = 0x25e004u;
    // NOP
    // 0x25e008: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x25E008u;
    {
        const bool branch_taken_0x25e008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E008u;
        // 0x25e00c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e008) {
            ctx->pc = 0x25DFDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25dfdc;
        }
    }
    ctx->pc = 0x25E010u;
    // 0x25e010: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x25E010u;
    {
        const bool branch_taken_0x25e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E010u;
        // 0x25e014: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e010) {
            ctx->pc = 0x25E0E4u;
            goto label_25e0e4;
        }
    }
    ctx->pc = 0x25E018u;
label_25e018:
    // 0x25e018: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x25e018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25e01c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x25e01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25e020: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25E020u;
    {
        const bool branch_taken_0x25e020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E020u;
        // 0x25e024: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e020) {
            ctx->pc = 0x25E070u;
            goto label_25e070;
        }
    }
    ctx->pc = 0x25E028u;
    // 0x25e028: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x25E028u;
    {
        const bool branch_taken_0x25e028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e028) {
            ctx->pc = 0x25E02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E028u;
            // 0x25e02c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E074u;
            goto label_25e074;
        }
    }
    ctx->pc = 0x25E030u;
    // 0x25e030: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x25e030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25e034: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x25e034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x25e038: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x25e038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25e03c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x25e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x25e040: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x25e040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25e044: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25e044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x25e048: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x25e048u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x25e04c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x25e04cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x25e050: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x25e050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x25e054: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25e054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25e058: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x25e058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x25e05c: 0xc097110  jal         func_25C440
    ctx->pc = 0x25E05Cu;
    SET_GPR_U32(ctx, 31, 0x25E064u);
    ctx->pc = 0x25E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E05Cu;
    // 0x25e060: 0x24a60260  addiu       $a2, $a1, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x25E05Cu, 0x25E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E064u;
label_25e064:
    // 0x25e064: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x25E064u;
    {
        const bool branch_taken_0x25e064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E064u;
        // 0x25e068: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e064) {
            ctx->pc = 0x25E0D4u;
            goto label_25e0d4;
        }
    }
    ctx->pc = 0x25E06Cu;
    // 0x25e06c: 0x0  nop
    ctx->pc = 0x25e06cu;
    // NOP
label_25e070:
    // 0x25e070: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25e070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25e074:
    // 0x25e074: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x25e074u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x25e078: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25e07c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x25e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x25e080: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25e080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e084: 0x4600a846  mov.s       $f1, $f21
    ctx->pc = 0x25e084u;
    ctx->f[1] = FPU_MOV_S(ctx->f[21]);
    // 0x25e088: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x25e088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25e08c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25e090: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25e094: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25e094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e098: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x25e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25e09c: 0x24430260  addiu       $v1, $v0, 0x260
    ctx->pc = 0x25e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
    // 0x25e0a0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25e0a0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e0a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x25e0a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x25e0a8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x25e0a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x25e0ac: 0xd8710000  lqc2        $vf17, 0x0($v1)
    ctx->pc = 0x25e0acu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e0b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25e0b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25e0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e0b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25e0b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25e0bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25e0bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25e0c0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25e0c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25e0c4: 0x4bc181bc  vmulax.xyz  $ACC, $vf16, $vf1x
    ctx->pc = 0x25e0c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x25e0c8: 0x4bc28c08  vmaddx.xyz  $vf16, $vf17, $vf2x
    ctx->pc = 0x25e0c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25e0cc: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x25e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25e0d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25e0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25e0d4:
    // 0x25e0d4: 0x2a220026  slti        $v0, $s1, 0x26
    ctx->pc = 0x25e0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x25e0d8: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x25E0D8u;
    {
        const bool branch_taken_0x25e0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e0d8) {
            ctx->pc = 0x25E0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E0D8u;
            // 0x25e0dc: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e018;
        }
    }
    ctx->pc = 0x25E0E0u;
    // 0x25e0e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25e0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25e0e4:
    // 0x25e0e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25e0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25e0e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25e0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e0ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x25e0ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25e0f0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x25e0f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e0f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x25e0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25e0f8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x25e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25e0fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x25e0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25e100: 0x3e00008  jr          $ra
    ctx->pc = 0x25E100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E100u;
        // 0x25e104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E108u;
}
