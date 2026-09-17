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

// Function: sub_002EFF40
// Address: 0x2eff40 - 0x2f0098
void sub_002EFF40_0x2eff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFF40_0x2eff40");
#endif

    switch (ctx->pc) {
        case 0x2eff40u: goto label_2eff40;
        case 0x2eff44u: goto label_2eff44;
        case 0x2eff48u: goto label_2eff48;
        case 0x2eff4cu: goto label_2eff4c;
        case 0x2eff50u: goto label_2eff50;
        case 0x2eff54u: goto label_2eff54;
        case 0x2eff58u: goto label_2eff58;
        case 0x2eff5cu: goto label_2eff5c;
        case 0x2eff60u: goto label_2eff60;
        case 0x2eff64u: goto label_2eff64;
        case 0x2eff68u: goto label_2eff68;
        case 0x2eff6cu: goto label_2eff6c;
        case 0x2eff70u: goto label_2eff70;
        case 0x2eff74u: goto label_2eff74;
        case 0x2eff78u: goto label_2eff78;
        case 0x2eff7cu: goto label_2eff7c;
        case 0x2eff80u: goto label_2eff80;
        case 0x2eff84u: goto label_2eff84;
        case 0x2eff88u: goto label_2eff88;
        case 0x2eff8cu: goto label_2eff8c;
        case 0x2eff90u: goto label_2eff90;
        case 0x2eff94u: goto label_2eff94;
        case 0x2eff98u: goto label_2eff98;
        case 0x2eff9cu: goto label_2eff9c;
        case 0x2effa0u: goto label_2effa0;
        case 0x2effa4u: goto label_2effa4;
        case 0x2effa8u: goto label_2effa8;
        case 0x2effacu: goto label_2effac;
        case 0x2effb0u: goto label_2effb0;
        case 0x2effb4u: goto label_2effb4;
        case 0x2effb8u: goto label_2effb8;
        case 0x2effbcu: goto label_2effbc;
        case 0x2effc0u: goto label_2effc0;
        case 0x2effc4u: goto label_2effc4;
        case 0x2effc8u: goto label_2effc8;
        case 0x2effccu: goto label_2effcc;
        case 0x2effd0u: goto label_2effd0;
        case 0x2effd4u: goto label_2effd4;
        case 0x2effd8u: goto label_2effd8;
        case 0x2effdcu: goto label_2effdc;
        case 0x2effe0u: goto label_2effe0;
        case 0x2effe4u: goto label_2effe4;
        case 0x2effe8u: goto label_2effe8;
        case 0x2effecu: goto label_2effec;
        case 0x2efff0u: goto label_2efff0;
        case 0x2efff4u: goto label_2efff4;
        case 0x2efff8u: goto label_2efff8;
        case 0x2efffcu: goto label_2efffc;
        case 0x2f0000u: goto label_2f0000;
        case 0x2f0004u: goto label_2f0004;
        case 0x2f0008u: goto label_2f0008;
        case 0x2f000cu: goto label_2f000c;
        case 0x2f0010u: goto label_2f0010;
        case 0x2f0014u: goto label_2f0014;
        case 0x2f0018u: goto label_2f0018;
        case 0x2f001cu: goto label_2f001c;
        case 0x2f0020u: goto label_2f0020;
        case 0x2f0024u: goto label_2f0024;
        case 0x2f0028u: goto label_2f0028;
        case 0x2f002cu: goto label_2f002c;
        case 0x2f0030u: goto label_2f0030;
        case 0x2f0034u: goto label_2f0034;
        case 0x2f0038u: goto label_2f0038;
        case 0x2f003cu: goto label_2f003c;
        case 0x2f0040u: goto label_2f0040;
        case 0x2f0044u: goto label_2f0044;
        case 0x2f0048u: goto label_2f0048;
        case 0x2f004cu: goto label_2f004c;
        case 0x2f0050u: goto label_2f0050;
        case 0x2f0054u: goto label_2f0054;
        case 0x2f0058u: goto label_2f0058;
        case 0x2f005cu: goto label_2f005c;
        case 0x2f0060u: goto label_2f0060;
        case 0x2f0064u: goto label_2f0064;
        case 0x2f0068u: goto label_2f0068;
        case 0x2f006cu: goto label_2f006c;
        case 0x2f0070u: goto label_2f0070;
        case 0x2f0074u: goto label_2f0074;
        case 0x2f0078u: goto label_2f0078;
        case 0x2f007cu: goto label_2f007c;
        case 0x2f0080u: goto label_2f0080;
        case 0x2f0084u: goto label_2f0084;
        case 0x2f0088u: goto label_2f0088;
        case 0x2f008cu: goto label_2f008c;
        case 0x2f0090u: goto label_2f0090;
        case 0x2f0094u: goto label_2f0094;
        default: break;
    }

    ctx->pc = 0x2eff40u;

label_2eff40:
    // 0x2eff40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2eff44:
    // 0x2eff44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2eff48:
    // 0x2eff48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eff48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eff4c:
    // 0x2eff4c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2eff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2eff50:
    // 0x2eff50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eff50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2eff54:
    // 0x2eff54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2eff58:
    // 0x2eff58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2eff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2eff5c:
    // 0x2eff5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2eff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2eff60:
    // 0x2eff60: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2eff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2eff64:
    // 0x2eff64: 0xc0bb8c2  jal         func_2EE308
label_2eff68:
    if (ctx->pc == 0x2EFF68u) {
        ctx->pc = 0x2EFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF64u;
        // 0x2eff68: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFF6Cu;
        goto label_2eff6c;
    }
    ctx->pc = 0x2EFF64u;
    SET_GPR_U32(ctx, 31, 0x2EFF6Cu);
    ctx->pc = 0x2EFF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF64u;
    // 0x2eff68: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE308u, 0x2EFF64u, 0x2EFF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF6Cu;
label_2eff6c:
    // 0x2eff6c: 0x21b03  sra         $v1, $v0, 12
    ctx->pc = 0x2eff6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 12));
label_2eff70:
    // 0x2eff70: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x2eff70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_2eff74:
    // 0x2eff74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eff74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2eff78:
    // 0x2eff78: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2eff78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2eff7c:
    // 0x2eff7c: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x2eff7cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2eff80:
    // 0x2eff80: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
label_2eff84:
    if (ctx->pc == 0x2EFF84u) {
        ctx->pc = 0x2EFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF80u;
        // 0x2eff84: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFF88u;
        goto label_2eff88;
    }
    ctx->pc = 0x2EFF80u;
    {
        const bool branch_taken_0x2eff80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eff80) {
            ctx->pc = 0x2EFF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFF80u;
            // 0x2eff84: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFF88u;
            goto label_2eff88;
        }
    }
    ctx->pc = 0x2EFF88u;
label_2eff88:
    // 0x2eff88: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2eff88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2eff8c:
    // 0x2eff8c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eff8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eff90:
    // 0x2eff90: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2eff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2eff94:
    // 0x2eff94: 0x0  nop
    ctx->pc = 0x2eff94u;
    // NOP
label_2eff98:
    // 0x2eff98: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2eff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2eff9c:
    // 0x2eff9c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_2effa0:
    if (ctx->pc == 0x2EFFA0u) {
        ctx->pc = 0x2EFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF9Cu;
        // 0x2effa0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFFA4u;
        goto label_2effa4;
    }
    ctx->pc = 0x2EFF9Cu;
    {
        const bool branch_taken_0x2eff9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF9Cu;
        // 0x2effa0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff9c) {
            ctx->pc = 0x2EFFB8u;
            goto label_2effb8;
        }
    }
    ctx->pc = 0x2EFFA4u;
label_2effa4:
    // 0x2effa4: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x2effa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2effa8:
    // 0x2effa8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2effa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2effac:
    // 0x2effac: 0x10000003  b           . + 4 + (0x3 << 2)
label_2effb0:
    if (ctx->pc == 0x2EFFB0u) {
        ctx->pc = 0x2EFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFACu;
        // 0x2effb0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFFB4u;
        goto label_2effb4;
    }
    ctx->pc = 0x2EFFACu;
    {
        const bool branch_taken_0x2effac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFACu;
        // 0x2effb0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2effac) {
            ctx->pc = 0x2EFFBCu;
            goto label_2effbc;
        }
    }
    ctx->pc = 0x2EFFB4u;
label_2effb4:
    // 0x2effb4: 0x0  nop
    ctx->pc = 0x2effb4u;
    // NOP
label_2effb8:
    // 0x2effb8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x2effb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2effbc:
    // 0x2effbc: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2effbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2effc0:
    // 0x2effc0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2effc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2effc4:
    // 0x2effc4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2effc8:
    if (ctx->pc == 0x2EFFC8u) {
        ctx->pc = 0x2EFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFC4u;
        // 0x2effc8: 0xae000104  sw          $zero, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFFCCu;
        goto label_2effcc;
    }
    ctx->pc = 0x2EFFC4u;
    {
        const bool branch_taken_0x2effc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2effc4) {
            ctx->pc = 0x2EFFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFFC4u;
            // 0x2effc8: 0xae000104  sw          $zero, 0x104($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFFCCu;
            goto label_2effcc;
        }
    }
    ctx->pc = 0x2EFFCCu;
label_2effcc:
    // 0x2effcc: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
label_2effd0:
    if (ctx->pc == 0x2EFFD0u) {
        ctx->pc = 0x2EFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFCCu;
        // 0x2effd0: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFFD4u;
        goto label_2effd4;
    }
    ctx->pc = 0x2EFFCCu;
    {
        const bool branch_taken_0x2effcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2effcc) {
            ctx->pc = 0x2EFFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFFCCu;
            // 0x2effd0: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFFF8u;
            goto label_2efff8;
        }
    }
    ctx->pc = 0x2EFFD4u;
label_2effd4:
    // 0x2effd4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2effd8:
    if (ctx->pc == 0x2EFFD8u) {
        ctx->pc = 0x2EFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFD4u;
        // 0x2effd8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFFDCu;
        goto label_2effdc;
    }
    ctx->pc = 0x2EFFD4u;
    {
        const bool branch_taken_0x2effd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFD4u;
        // 0x2effd8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2effd4) {
            ctx->pc = 0x2EFFF4u;
            goto label_2efff4;
        }
    }
    ctx->pc = 0x2EFFDCu;
label_2effdc:
    // 0x2effdc: 0xc092940  jal         func_24A500
label_2effe0:
    if (ctx->pc == 0x2EFFE0u) {
        ctx->pc = 0x2EFFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFDCu;
        // 0x2effe0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFFE4u;
        goto label_2effe4;
    }
    ctx->pc = 0x2EFFDCu;
    SET_GPR_U32(ctx, 31, 0x2EFFE4u);
    ctx->pc = 0x2EFFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFFDCu;
    // 0x2effe0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2EFFDCu, 0x2EFFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFFE4u;
label_2effe4:
    // 0x2effe4: 0x26030130  addiu       $v1, $s0, 0x130
    ctx->pc = 0x2effe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_2effe8:
    // 0x2effe8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2effe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2effec:
    // 0x2effec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2efff0:
    if (ctx->pc == 0x2EFFF0u) {
        ctx->pc = 0x2EFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFECu;
        // 0x2efff0: 0xa0740000  sb          $s4, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFFF4u;
        goto label_2efff4;
    }
    ctx->pc = 0x2EFFECu;
    {
        const bool branch_taken_0x2effec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2effec) {
            ctx->pc = 0x2EFFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFFECu;
            // 0x2efff0: 0xa0740000  sb          $s4, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFFF4u;
            goto label_2efff4;
        }
    }
    ctx->pc = 0x2EFFF4u;
label_2efff4:
    // 0x2efff4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2efff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2efff8:
    // 0x2efff8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2efff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2efffc:
    // 0x2efffc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2efffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2f0000:
    // 0x2f0000: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2f0000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f0004:
    // 0x2f0004: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f0004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0008:
    // 0x2f0008: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f000c:
    if (ctx->pc == 0x2F000Cu) {
        ctx->pc = 0x2F000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0008u;
        // 0x2f000c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0010u;
        goto label_2f0010;
    }
    ctx->pc = 0x2F0008u;
    {
        const bool branch_taken_0x2f0008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0008) {
            ctx->pc = 0x2F000Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0008u;
            // 0x2f000c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0024u;
            goto label_2f0024;
        }
    }
    ctx->pc = 0x2F0010u;
label_2f0010:
    // 0x2f0010: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f0010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f0014:
    // 0x2f0014: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f0014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f0018:
    // 0x2f0018: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f001c:
    if (ctx->pc == 0x2F001Cu) {
        ctx->pc = 0x2F001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0018u;
        // 0x2f001c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0020u;
        goto label_2f0020;
    }
    ctx->pc = 0x2F0018u;
    {
        const bool branch_taken_0x2f0018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0018u;
        // 0x2f001c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0018) {
            ctx->pc = 0x2F002Cu;
            goto label_2f002c;
        }
    }
    ctx->pc = 0x2F0020u;
label_2f0020:
    // 0x2f0020: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f0020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f0024:
    // 0x2f0024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0028:
    // 0x2f0028: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f0028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f002c:
    // 0x2f002c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2f002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f0030:
    // 0x2f0030: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x2f0030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2f0034:
    // 0x2f0034: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2f0034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2f0038:
    // 0x2f0038: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f0038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2f003c:
    // 0x2f003c: 0x40f809  jalr        $v0
label_2f0040:
    if (ctx->pc == 0x2F0040u) {
        ctx->pc = 0x2F0040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F003Cu;
        // 0x2f0040: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0044u;
        goto label_2f0044;
    }
    ctx->pc = 0x2F003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F0044u);
        ctx->pc = 0x2F0040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F003Cu;
        // 0x2f0040: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F003Cu, 0x2F0044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0044u;
label_2f0044:
    // 0x2f0044: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2f0044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0048:
    // 0x2f0048: 0x231180b  movn        $v1, $s1, $s1
    ctx->pc = 0x2f0048u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
label_2f004c:
    // 0x2f004c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f004cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0050:
    // 0x2f0050: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2f0050u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2f0054:
    // 0x2f0054: 0x5620ffd0  bnel        $s1, $zero, . + 4 + (-0x30 << 2)
label_2f0058:
    if (ctx->pc == 0x2F0058u) {
        ctx->pc = 0x2F0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0054u;
        // 0x2f0058: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F005Cu;
        goto label_2f005c;
    }
    ctx->pc = 0x2F0054u;
    {
        const bool branch_taken_0x2f0054 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0054) {
            ctx->pc = 0x2F0058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0054u;
            // 0x2f0058: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eff98;
        }
    }
    ctx->pc = 0x2F005Cu;
label_2f005c:
    // 0x2f005c: 0xc0bc026  jal         func_2F0098
label_2f0060:
    if (ctx->pc == 0x2F0060u) {
        ctx->pc = 0x2F0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F005Cu;
        // 0x2f0060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0064u;
        goto label_2f0064;
    }
    ctx->pc = 0x2F005Cu;
    SET_GPR_U32(ctx, 31, 0x2F0064u);
    ctx->pc = 0x2F0060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F005Cu;
    // 0x2f0060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0098u, 0x2F005Cu, 0x2F0064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0064u;
label_2f0064:
    // 0x2f0064: 0xc0bc046  jal         func_2F0118
label_2f0068:
    if (ctx->pc == 0x2F0068u) {
        ctx->pc = 0x2F0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0064u;
        // 0x2f0068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F006Cu;
        goto label_2f006c;
    }
    ctx->pc = 0x2F0064u;
    SET_GPR_U32(ctx, 31, 0x2F006Cu);
    ctx->pc = 0x2F0068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0064u;
    // 0x2f0068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0118u, 0x2F0064u, 0x2F006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F006Cu;
label_2f006c:
    // 0x2f006c: 0xc0bc056  jal         func_2F0158
label_2f0070:
    if (ctx->pc == 0x2F0070u) {
        ctx->pc = 0x2F0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F006Cu;
        // 0x2f0070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0074u;
        goto label_2f0074;
    }
    ctx->pc = 0x2F006Cu;
    SET_GPR_U32(ctx, 31, 0x2F0074u);
    ctx->pc = 0x2F0070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F006Cu;
    // 0x2f0070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0158u, 0x2F006Cu, 0x2F0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0074u;
label_2f0074:
    // 0x2f0074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0078:
    // 0x2f0078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f007c:
    // 0x2f007c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f007cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0080:
    // 0x2f0080: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f0080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f0084:
    // 0x2f0084: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f0084u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0088:
    // 0x2f0088: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2f0088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f008c:
    // 0x2f008c: 0x3e00008  jr          $ra
label_2f0090:
    if (ctx->pc == 0x2F0090u) {
        ctx->pc = 0x2F0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F008Cu;
        // 0x2f0090: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0094u;
        goto label_2f0094;
    }
    ctx->pc = 0x2F008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F008Cu;
        // 0x2f0090: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F008Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0094u;
label_2f0094:
    // 0x2f0094: 0x0  nop
    ctx->pc = 0x2f0094u;
    // NOP
    ctx->pc = 0x2f0098u;
}
