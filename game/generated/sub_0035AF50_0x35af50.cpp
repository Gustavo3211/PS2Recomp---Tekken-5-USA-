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

// Function: sub_0035AF50
// Address: 0x35af50 - 0x35b078
void sub_0035AF50_0x35af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AF50_0x35af50");
#endif

    switch (ctx->pc) {
        case 0x35afacu: goto label_35afac;
        default: break;
    }

    ctx->pc = 0x35af50u;

    // 0x35af50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35af50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35af54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35af54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35af58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35af5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35af5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35af60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35af64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35af68: 0x80d43f2  j           func_350FC8
    ctx->pc = 0x35AF68u;
    ctx->pc = 0x35AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF68u;
    // 0x35af6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350FC8u, 0x35AF68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35AF70u;
    // 0x35af70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35af74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35af74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35af78: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x35af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x35af7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35af7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af80: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x35af80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x35af84: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x35af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x35af88: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x35af88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x35af8c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x35af8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x35af90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35af90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35af94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x35af9c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x35AF9Cu;
    {
        const bool branch_taken_0x35af9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF9Cu;
        // 0x35afa0: 0x3442000a  ori         $v0, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35af9c) {
            ctx->pc = 0x35B014u;
            goto label_35b014;
        }
    }
    ctx->pc = 0x35AFA4u;
    // 0x35afa4: 0xc0d6898  jal         func_35A260
    ctx->pc = 0x35AFA4u;
    SET_GPR_U32(ctx, 31, 0x35AFACu);
    ctx->pc = 0x35A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A260u, 0x35AFA4u, 0x35AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AFACu;
label_35afac:
    // 0x35afac: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x35afacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x35afb0: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x35afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x35afb4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x35afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35afb8: 0x248712c0  addiu       $a3, $a0, 0x12C0
    ctx->pc = 0x35afb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x35afbc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35AFBCu;
    {
        const bool branch_taken_0x35afbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AFBCu;
        // 0x35afc0: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35afbc) {
            ctx->pc = 0x35B014u;
            goto label_35b014;
        }
    }
    ctx->pc = 0x35AFC4u;
    // 0x35afc4: 0x87a30014  lh          $v1, 0x14($sp)
    ctx->pc = 0x35afc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x35afc8: 0x44911800  mtc1        $s1, $f3
    ctx->pc = 0x35afc8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35afcc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x35afccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x35afd0: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x35afd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x35afd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35afd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35afd8: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x35afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x35afdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35afdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35afe0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35afe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35afe4: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x35afe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x35afe8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x35afe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35afec: 0x0  nop
    ctx->pc = 0x35afecu;
    // NOP
    // 0x35aff0: 0x0  nop
    ctx->pc = 0x35aff0u;
    // NOP
    // 0x35aff4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x35aff4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x35aff8: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x35aff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x35affc: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x35affcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x35b000: 0x0  nop
    ctx->pc = 0x35b000u;
    // NOP
    // 0x35b004: 0x0  nop
    ctx->pc = 0x35b004u;
    // NOP
    // 0x35b008: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x35b008u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x35b00c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x35b00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x35b010: 0xacd10008  sw          $s1, 0x8($a2)
    ctx->pc = 0x35b010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 17));
label_35b014:
    // 0x35b014: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x35b014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b018: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x35b018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b01c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35b01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35b020: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x35b020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35b024: 0x3e00008  jr          $ra
    ctx->pc = 0x35B024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B024u;
        // 0x35b028: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B02Cu;
    // 0x35b02c: 0x0  nop
    ctx->pc = 0x35b02cu;
    // NOP
    // 0x35b030: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x35b030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35b034: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35b034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35b038: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35b038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b03c: 0x2c850008  sltiu       $a1, $a0, 0x8
    ctx->pc = 0x35b03cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x35b040: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x35b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x35b044: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x35B044u;
    {
        const bool branch_taken_0x35b044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B044u;
        // 0x35b048: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b044) {
            ctx->pc = 0x35B070u;
            goto label_35b070;
        }
    }
    ctx->pc = 0x35B04Cu;
    // 0x35b04c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35b050: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b054: 0x246312c0  addiu       $v1, $v1, 0x12C0
    ctx->pc = 0x35b054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x35b058: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x35b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x35b05c: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x35b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x35b060: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x35b060u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b064: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x35b064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x35b068: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35b068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35b06c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x35b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_35b070:
    // 0x35b070: 0x3e00008  jr          $ra
    ctx->pc = 0x35B070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B078u;
}
