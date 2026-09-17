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

// Function: sub_0027AEE0
// Address: 0x27aee0 - 0x27b038
void sub_0027AEE0_0x27aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AEE0_0x27aee0");
#endif

    ctx->pc = 0x27aee0u;

    // 0x27aee0: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x27aee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x27aee4: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x27aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x27aee8: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27AEE8u;
    {
        const bool branch_taken_0x27aee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEE8u;
        // 0x27aeec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aee8) {
            ctx->pc = 0x27AF28u;
            goto label_27af28;
        }
    }
    ctx->pc = 0x27AEF0u;
    // 0x27aef0: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x27aef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x27aef4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AEF4u;
    {
        const bool branch_taken_0x27aef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27aef4) {
            ctx->pc = 0x27AEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AEF4u;
            // 0x27aef8: 0x8cc20314  lw          $v0, 0x314($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AF10u;
            goto label_27af10;
        }
    }
    ctx->pc = 0x27AEFCu;
    // 0x27aefc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x27aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27af00: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27AF00u;
    {
        const bool branch_taken_0x27af00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF00u;
        // 0x27af04: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af00) {
            ctx->pc = 0x27AF68u;
            goto label_27af68;
        }
    }
    ctx->pc = 0x27AF08u;
    // 0x27af08: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27AF08u;
    {
        const bool branch_taken_0x27af08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF08u;
        // 0x27af0c: 0x8cc20314  lw          $v0, 0x314($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af08) {
            ctx->pc = 0x27AF88u;
            goto label_27af88;
        }
    }
    ctx->pc = 0x27AF10u;
label_27af10:
    // 0x27af10: 0x94c3008c  lhu         $v1, 0x8C($a2)
    ctx->pc = 0x27af10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x27af14: 0x9444001c  lhu         $a0, 0x1C($v0)
    ctx->pc = 0x27af14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27af18: 0x84480028  lh          $t0, 0x28($v0)
    ctx->pc = 0x27af18u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x27af1c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27af20: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27AF20u;
    {
        const bool branch_taken_0x27af20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF20u;
        // 0x27af24: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af20) {
            ctx->pc = 0x27AF9Cu;
            goto label_27af9c;
        }
    }
    ctx->pc = 0x27AF28u;
label_27af28:
    // 0x27af28: 0x8cc20314  lw          $v0, 0x314($a2)
    ctx->pc = 0x27af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 788)));
    // 0x27af2c: 0x94c30078  lhu         $v1, 0x78($a2)
    ctx->pc = 0x27af2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x27af30: 0x9444001e  lhu         $a0, 0x1E($v0)
    ctx->pc = 0x27af30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x27af34: 0x8448002a  lh          $t0, 0x2A($v0)
    ctx->pc = 0x27af34u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x27af38: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27af38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27af3c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27af40: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x27af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x27af44: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x27af44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27af48: 0x15000017  bnez        $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27AF48u;
    {
        const bool branch_taken_0x27af48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF48u;
        // 0x27af4c: 0x33c03  sra         $a3, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af48) {
            ctx->pc = 0x27AFA8u;
            goto label_27afa8;
        }
    }
    ctx->pc = 0x27AF50u;
    // 0x27af50: 0x84c20082  lh          $v0, 0x82($a2)
    ctx->pc = 0x27af50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 130)));
    // 0x27af54: 0x4410014  bgez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27AF54u;
    {
        const bool branch_taken_0x27af54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF54u;
        // 0x27af58: 0x2408071c  addiu       $t0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af54) {
            ctx->pc = 0x27AFA8u;
            goto label_27afa8;
        }
    }
    ctx->pc = 0x27AF5Cu;
    // 0x27af5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27AF5Cu;
    {
        const bool branch_taken_0x27af5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF5Cu;
        // 0x27af60: 0x2408f8e4  addiu       $t0, $zero, -0x71C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af5c) {
            ctx->pc = 0x27AFA8u;
            goto label_27afa8;
        }
    }
    ctx->pc = 0x27AF64u;
    // 0x27af64: 0x0  nop
    ctx->pc = 0x27af64u;
    // NOP
label_27af68:
    // 0x27af68: 0x8cc20314  lw          $v0, 0x314($a2)
    ctx->pc = 0x27af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 788)));
    // 0x27af6c: 0x94c30078  lhu         $v1, 0x78($a2)
    ctx->pc = 0x27af6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x27af70: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x27af70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27af74: 0x8448002c  lh          $t0, 0x2C($v0)
    ctx->pc = 0x27af74u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x27af78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27af78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27af7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27AF7Cu;
    {
        const bool branch_taken_0x27af7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF7Cu;
        // 0x27af80: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af7c) {
            ctx->pc = 0x27AF9Cu;
            goto label_27af9c;
        }
    }
    ctx->pc = 0x27AF84u;
    // 0x27af84: 0x0  nop
    ctx->pc = 0x27af84u;
    // NOP
label_27af88:
    // 0x27af88: 0x94c30078  lhu         $v1, 0x78($a2)
    ctx->pc = 0x27af88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x27af8c: 0x94440022  lhu         $a0, 0x22($v0)
    ctx->pc = 0x27af8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x27af90: 0x8448002e  lh          $t0, 0x2E($v0)
    ctx->pc = 0x27af90u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x27af94: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27af94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27af98: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x27af98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_27af9c:
    // 0x27af9c: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x27af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x27afa0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x27afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x27afa4: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x27afa4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
label_27afa8:
    // 0x27afa8: 0xacc402f0  sw          $a0, 0x2F0($a2)
    ctx->pc = 0x27afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 752), GPR_U32(ctx, 4));
    // 0x27afac: 0x8cc50048  lw          $a1, 0x48($a2)
    ctx->pc = 0x27afacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x27afb0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x27afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27afb4: 0xacc202ac  sw          $v0, 0x2AC($a2)
    ctx->pc = 0x27afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 684), GPR_U32(ctx, 2));
    // 0x27afb8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x27afb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27afbc: 0xa4c302a4  sh          $v1, 0x2A4($a2)
    ctx->pc = 0x27afbcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 676), (uint16_t)GPR_U32(ctx, 3));
    // 0x27afc0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27afc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x27afc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27afc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27afc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27afc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27afcc: 0xe4c002dc  swc1        $f0, 0x2DC($a2)
    ctx->pc = 0x27afccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 732), bits); }
    // 0x27afd0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x27afd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27afd4: 0xa4c702aa  sh          $a3, 0x2AA($a2)
    ctx->pc = 0x27afd4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 682), (uint16_t)GPR_U32(ctx, 7));
    // 0x27afd8: 0xa4c202a6  sh          $v0, 0x2A6($a2)
    ctx->pc = 0x27afd8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 678), (uint16_t)GPR_U32(ctx, 2));
    // 0x27afdc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x27AFDCu;
    {
        const bool branch_taken_0x27afdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFDCu;
        // 0x27afe0: 0xa4c702a8  sh          $a3, 0x2A8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 680), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afdc) {
            ctx->pc = 0x27B010u;
            goto label_27b010;
        }
    }
    ctx->pc = 0x27AFE4u;
    // 0x27afe4: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x27afe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27afe8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27AFE8u;
    {
        const bool branch_taken_0x27afe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFE8u;
        // 0x27afec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afe8) {
            ctx->pc = 0x27B014u;
            goto label_27b014;
        }
    }
    ctx->pc = 0x27AFF0u;
    // 0x27aff0: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x27aff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x27aff4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27AFF4u;
    {
        const bool branch_taken_0x27aff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFF4u;
        // 0x27aff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aff4) {
            ctx->pc = 0x27B014u;
            goto label_27b014;
        }
    }
    ctx->pc = 0x27AFFCu;
    // 0x27affc: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x27affcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x27b000: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B000u;
    {
        const bool branch_taken_0x27b000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b000) {
            ctx->pc = 0x27B004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B000u;
            // 0x27b004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B014u;
            goto label_27b014;
        }
    }
    ctx->pc = 0x27B008u;
    // 0x27b008: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27B008u;
    {
        const bool branch_taken_0x27b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B008u;
        // 0x27b00c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b008) {
            ctx->pc = 0x27B014u;
            goto label_27b014;
        }
    }
    ctx->pc = 0x27B010u;
label_27b010:
    // 0x27b010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b014:
    // 0x27b014: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B014u;
    {
        const bool branch_taken_0x27b014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b014) {
            ctx->pc = 0x27B02Cu;
            goto label_27b02c;
        }
    }
    ctx->pc = 0x27B01Cu;
    // 0x27b01c: 0x94c2007a  lhu         $v0, 0x7A($a2)
    ctx->pc = 0x27b01cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 122)));
    // 0x27b020: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x27b020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27b024: 0xa4c2000e  sh          $v0, 0xE($a2)
    ctx->pc = 0x27b024u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b028: 0xa4c2007a  sh          $v0, 0x7A($a2)
    ctx->pc = 0x27b028u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 122), (uint16_t)GPR_U32(ctx, 2));
label_27b02c:
    // 0x27b02c: 0x3e00008  jr          $ra
    ctx->pc = 0x27B02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B034u;
    // 0x27b034: 0x0  nop
    ctx->pc = 0x27b034u;
    // NOP
    ctx->pc = 0x27b038u;
}
