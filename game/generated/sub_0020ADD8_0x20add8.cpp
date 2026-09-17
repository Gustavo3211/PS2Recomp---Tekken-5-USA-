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

// Function: sub_0020ADD8
// Address: 0x20add8 - 0x20b2c8
void sub_0020ADD8_0x20add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ADD8_0x20add8");
#endif

    switch (ctx->pc) {
        case 0x20ae20u: goto label_20ae20;
        case 0x20ae38u: goto label_20ae38;
        case 0x20ae48u: goto label_20ae48;
        case 0x20ae88u: goto label_20ae88;
        case 0x20aeccu: goto label_20aecc;
        case 0x20aefcu: goto label_20aefc;
        case 0x20af1cu: goto label_20af1c;
        case 0x20af24u: goto label_20af24;
        case 0x20af34u: goto label_20af34;
        case 0x20af44u: goto label_20af44;
        case 0x20af54u: goto label_20af54;
        case 0x20af68u: goto label_20af68;
        case 0x20afc8u: goto label_20afc8;
        case 0x20afdcu: goto label_20afdc;
        case 0x20aff0u: goto label_20aff0;
        case 0x20b020u: goto label_20b020;
        case 0x20b034u: goto label_20b034;
        case 0x20b03cu: goto label_20b03c;
        case 0x20b050u: goto label_20b050;
        case 0x20b064u: goto label_20b064;
        case 0x20b078u: goto label_20b078;
        case 0x20b0a0u: goto label_20b0a0;
        case 0x20b0bcu: goto label_20b0bc;
        case 0x20b0ccu: goto label_20b0cc;
        case 0x20b0d4u: goto label_20b0d4;
        case 0x20b0e4u: goto label_20b0e4;
        case 0x20b0ecu: goto label_20b0ec;
        case 0x20b0fcu: goto label_20b0fc;
        case 0x20b114u: goto label_20b114;
        case 0x20b130u: goto label_20b130;
        case 0x20b148u: goto label_20b148;
        case 0x20b150u: goto label_20b150;
        case 0x20b174u: goto label_20b174;
        case 0x20b184u: goto label_20b184;
        case 0x20b198u: goto label_20b198;
        case 0x20b1a8u: goto label_20b1a8;
        case 0x20b1b0u: goto label_20b1b0;
        case 0x20b1bcu: goto label_20b1bc;
        case 0x20b1d0u: goto label_20b1d0;
        case 0x20b1d8u: goto label_20b1d8;
        case 0x20b1ecu: goto label_20b1ec;
        case 0x20b200u: goto label_20b200;
        case 0x20b208u: goto label_20b208;
        case 0x20b250u: goto label_20b250;
        case 0x20b260u: goto label_20b260;
        case 0x20b268u: goto label_20b268;
        case 0x20b278u: goto label_20b278;
        case 0x20b280u: goto label_20b280;
        case 0x20b28cu: goto label_20b28c;
        default: break;
    }

    ctx->pc = 0x20add8u;

    // 0x20add8: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x20add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20addc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20addcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20ade0: 0x8f8398ac  lw          $v1, -0x6754($gp)
    ctx->pc = 0x20ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
    // 0x20ade4: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x20ade4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x20ade8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20adec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20adf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20adf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20adf4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20adf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20adf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20adf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20adfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20adfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ae00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20ae04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20ae08: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x20ae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x20ae0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20ae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20ae10: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AE10u;
    {
        const bool branch_taken_0x20ae10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x20AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE10u;
        // 0x20ae14: 0xaf829730  sw          $v0, -0x68D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae10) {
            ctx->pc = 0x20AE20u;
            goto label_20ae20;
        }
    }
    ctx->pc = 0x20AE18u;
    // 0x20ae18: 0xc082286  jal         func_208A18
    ctx->pc = 0x20AE18u;
    SET_GPR_U32(ctx, 31, 0x20AE20u);
    ctx->pc = 0x208A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208A18u, 0x20AE18u, 0x20AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE20u;
label_20ae20:
    // 0x20ae20: 0x8f829744  lw          $v0, -0x68BC($gp)
    ctx->pc = 0x20ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940484)));
    // 0x20ae24: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x20AE24u;
    {
        const bool branch_taken_0x20ae24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE24u;
        // 0x20ae28: 0x8f84c8d4  lw          $a0, -0x372C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae24) {
            ctx->pc = 0x20AF08u;
            goto label_20af08;
        }
    }
    ctx->pc = 0x20AE2Cu;
    // 0x20ae2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ae2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ae30: 0xc082fd8  jal         func_20BF60
    ctx->pc = 0x20AE30u;
    SET_GPR_U32(ctx, 31, 0x20AE38u);
    ctx->pc = 0x20AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE30u;
    // 0x20ae34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF60u, 0x20AE30u, 0x20AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE38u;
label_20ae38:
    // 0x20ae38: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x20AE38u;
    {
        const bool branch_taken_0x20ae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE38u;
        // 0x20ae3c: 0x8f84c8d4  lw          $a0, -0x372C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae38) {
            ctx->pc = 0x20AF08u;
            goto label_20af08;
        }
    }
    ctx->pc = 0x20AE40u;
    // 0x20ae40: 0xc0b45b8  jal         func_2D16E0
    ctx->pc = 0x20AE40u;
    SET_GPR_U32(ctx, 31, 0x20AE48u);
    ctx->pc = 0x2D16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D16E0u, 0x20AE40u, 0x20AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE48u;
label_20ae48:
    // 0x20ae48: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x20AE48u;
    {
        const bool branch_taken_0x20ae48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE48u;
        // 0x20ae4c: 0x8f84c8d4  lw          $a0, -0x372C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae48) {
            ctx->pc = 0x20AF08u;
            goto label_20af08;
        }
    }
    ctx->pc = 0x20AE50u;
    // 0x20ae50: 0x1480003a  bnez        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x20AE50u;
    {
        const bool branch_taken_0x20ae50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE50u;
        // 0x20ae54: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae50) {
            ctx->pc = 0x20AF3Cu;
            goto label_20af3c;
        }
    }
    ctx->pc = 0x20AE58u;
    // 0x20ae58: 0x26a28858  addiu       $v0, $s5, -0x77A8
    ctx->pc = 0x20ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
    // 0x20ae5c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x20ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x20ae60: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x20AE60u;
    {
        const bool branch_taken_0x20ae60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae60) {
            ctx->pc = 0x20AF0Cu;
            goto label_20af0c;
        }
    }
    ctx->pc = 0x20AE68u;
    // 0x20ae68: 0x922201bc  lbu         $v0, 0x1BC($s1)
    ctx->pc = 0x20ae68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x20ae6c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20AE6Cu;
    {
        const bool branch_taken_0x20ae6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ae6c) {
            ctx->pc = 0x20AE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AE6Cu;
            // 0x20ae70: 0x9642003c  lhu         $v0, 0x3C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AE90u;
            goto label_20ae90;
        }
    }
    ctx->pc = 0x20AE74u;
    // 0x20ae74: 0x924201bc  lbu         $v0, 0x1BC($s2)
    ctx->pc = 0x20ae74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x20ae78: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AE78u;
    {
        const bool branch_taken_0x20ae78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ae78) {
            ctx->pc = 0x20AE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AE78u;
            // 0x20ae7c: 0x9622003c  lhu         $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AE90u;
            goto label_20ae90;
        }
    }
    ctx->pc = 0x20AE80u;
    // 0x20ae80: 0xc08e6d0  jal         func_239B40
    ctx->pc = 0x20AE80u;
    SET_GPR_U32(ctx, 31, 0x20AE88u);
    ctx->pc = 0x239B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B40u, 0x20AE80u, 0x20AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE88u;
label_20ae88:
    // 0x20ae88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20AE88u;
    {
        const bool branch_taken_0x20ae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE88u;
        // 0x20ae8c: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae88) {
            ctx->pc = 0x20AEA4u;
            goto label_20aea4;
        }
    }
    ctx->pc = 0x20AE90u;
label_20ae90:
    // 0x20ae90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20ae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ae94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ae98: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x20ae98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x20ae9c: 0x8c22a848  lw          $v0, -0x57B8($at)
    ctx->pc = 0x20ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944840)));
    // 0x20aea0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20aea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_20aea4:
    // 0x20aea4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20AEA4u;
    {
        const bool branch_taken_0x20aea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEA4u;
        // 0x20aea8: 0x8f84c8d4  lw          $a0, -0x372C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aea4) {
            ctx->pc = 0x20AF0Cu;
            goto label_20af0c;
        }
    }
    ctx->pc = 0x20AEACu;
    // 0x20aeac: 0x922201bc  lbu         $v0, 0x1BC($s1)
    ctx->pc = 0x20aeacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x20aeb0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20AEB0u;
    {
        const bool branch_taken_0x20aeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20aeb0) {
            ctx->pc = 0x20AEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AEB0u;
            // 0x20aeb4: 0x9642003c  lhu         $v0, 0x3C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AED8u;
            goto label_20aed8;
        }
    }
    ctx->pc = 0x20AEB8u;
    // 0x20aeb8: 0x924201bc  lbu         $v0, 0x1BC($s2)
    ctx->pc = 0x20aeb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x20aebc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20AEBCu;
    {
        const bool branch_taken_0x20aebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20aebc) {
            ctx->pc = 0x20AEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AEBCu;
            // 0x20aec0: 0x9622003c  lhu         $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AED8u;
            goto label_20aed8;
        }
    }
    ctx->pc = 0x20AEC4u;
    // 0x20aec4: 0xc08e6d0  jal         func_239B40
    ctx->pc = 0x20AEC4u;
    SET_GPR_U32(ctx, 31, 0x20AECCu);
    ctx->pc = 0x239B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B40u, 0x20AEC4u, 0x20AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AECCu;
label_20aecc:
    // 0x20aecc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20AECCu;
    {
        const bool branch_taken_0x20aecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AECCu;
        // 0x20aed0: 0x30420800  andi        $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aecc) {
            ctx->pc = 0x20AEECu;
            goto label_20aeec;
        }
    }
    ctx->pc = 0x20AED4u;
    // 0x20aed4: 0x0  nop
    ctx->pc = 0x20aed4u;
    // NOP
label_20aed8:
    // 0x20aed8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20aedc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20aee0: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x20aee0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x20aee4: 0x8c22a848  lw          $v0, -0x57B8($at)
    ctx->pc = 0x20aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944840)));
    // 0x20aee8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x20aee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_20aeec:
    // 0x20aeec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20AEECu;
    {
        const bool branch_taken_0x20aeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEECu;
        // 0x20aef0: 0x8f84c8d4  lw          $a0, -0x372C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aeec) {
            ctx->pc = 0x20AF0Cu;
            goto label_20af0c;
        }
    }
    ctx->pc = 0x20AEF4u;
    // 0x20aef4: 0xc09dfac  jal         func_277EB0
    ctx->pc = 0x20AEF4u;
    SET_GPR_U32(ctx, 31, 0x20AEFCu);
    ctx->pc = 0x277EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EB0u, 0x20AEF4u, 0x20AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AEFCu;
label_20aefc:
    // 0x20aefc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20AEFCu;
    {
        const bool branch_taken_0x20aefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEFCu;
        // 0x20af00: 0x8f84c8d4  lw          $a0, -0x372C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aefc) {
            ctx->pc = 0x20AF0Cu;
            goto label_20af0c;
        }
    }
    ctx->pc = 0x20AF04u;
    // 0x20af04: 0x0  nop
    ctx->pc = 0x20af04u;
    // NOP
label_20af08:
    // 0x20af08: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x20af08u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
label_20af0c:
    // 0x20af0c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x20AF0Cu;
    {
        const bool branch_taken_0x20af0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20af0c) {
            ctx->pc = 0x20AF3Cu;
            goto label_20af3c;
        }
    }
    ctx->pc = 0x20AF14u;
    // 0x20af14: 0xc09dc24  jal         func_277090
    ctx->pc = 0x20AF14u;
    SET_GPR_U32(ctx, 31, 0x20AF1Cu);
    ctx->pc = 0x277090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277090u, 0x20AF14u, 0x20AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF1Cu;
label_20af1c:
    // 0x20af1c: 0xc09dfb4  jal         func_277ED0
    ctx->pc = 0x20AF1Cu;
    SET_GPR_U32(ctx, 31, 0x20AF24u);
    ctx->pc = 0x277ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277ED0u, 0x20AF1Cu, 0x20AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF24u;
label_20af24:
    // 0x20af24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AF24u;
    {
        const bool branch_taken_0x20af24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af24) {
            ctx->pc = 0x20AF3Cu;
            goto label_20af3c;
        }
    }
    ctx->pc = 0x20AF2Cu;
    // 0x20af2c: 0xc09dfb6  jal         func_277ED8
    ctx->pc = 0x20AF2Cu;
    SET_GPR_U32(ctx, 31, 0x20AF34u);
    ctx->pc = 0x277ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277ED8u, 0x20AF2Cu, 0x20AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF34u;
label_20af34:
    // 0x20af34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20af34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20af38: 0xaf84c8d4  sw          $a0, -0x372C($gp)
    ctx->pc = 0x20af38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953172), GPR_U32(ctx, 4));
label_20af3c:
    // 0x20af3c: 0xc0a10c0  jal         func_284300
    ctx->pc = 0x20AF3Cu;
    SET_GPR_U32(ctx, 31, 0x20AF44u);
    ctx->pc = 0x20AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AF3Cu;
    // 0x20af40: 0x26b08858  addiu       $s0, $s5, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284300u, 0x20AF3Cu, 0x20AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF44u;
label_20af44:
    // 0x20af44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20af48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af4c: 0xc0a12b2  jal         func_284AC8
    ctx->pc = 0x20AF4Cu;
    SET_GPR_U32(ctx, 31, 0x20AF54u);
    ctx->pc = 0x20AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AF4Cu;
    // 0x20af50: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AC8u, 0x20AF4Cu, 0x20AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF54u;
label_20af54:
    // 0x20af54: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x20af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x20af58: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x20AF58u;
    {
        const bool branch_taken_0x20af58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF58u;
        // 0x20af5c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af58) {
            ctx->pc = 0x20AFE8u;
            goto label_20afe8;
        }
    }
    ctx->pc = 0x20AF60u;
    // 0x20af60: 0xc0a13f0  jal         func_284FC0
    ctx->pc = 0x20AF60u;
    SET_GPR_U32(ctx, 31, 0x20AF68u);
    ctx->pc = 0x20AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AF60u;
    // 0x20af64: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FC0u, 0x20AF60u, 0x20AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF68u;
label_20af68:
    // 0x20af68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20af68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20af6c: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x20AF6Cu;
    {
        const bool branch_taken_0x20af6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20af6c) {
            ctx->pc = 0x20AFE8u;
            goto label_20afe8;
        }
    }
    ctx->pc = 0x20AF74u;
    // 0x20af74: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x20af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x20af78: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x20af78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20af7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20af7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20af80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20AF80u;
    {
        const bool branch_taken_0x20af80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF80u;
        // 0x20af84: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af80) {
            ctx->pc = 0x20AF9Cu;
            goto label_20af9c;
        }
    }
    ctx->pc = 0x20AF88u;
    // 0x20af88: 0x8f82a850  lw          $v0, -0x57B0($gp)
    ctx->pc = 0x20af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x20af8c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x20af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x20af90: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20AF90u;
    {
        const bool branch_taken_0x20af90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF90u;
        // 0x20af94: 0x8f829730  lw          $v0, -0x68D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af90) {
            ctx->pc = 0x20AFB4u;
            goto label_20afb4;
        }
    }
    ctx->pc = 0x20AF98u;
    // 0x20af98: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x20af98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_20af9c:
    // 0x20af9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20AF9Cu;
    {
        const bool branch_taken_0x20af9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af9c) {
            ctx->pc = 0x20AFE8u;
            goto label_20afe8;
        }
    }
    ctx->pc = 0x20AFA4u;
    // 0x20afa4: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x20afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x20afa8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x20afa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x20afac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20AFACu;
    {
        const bool branch_taken_0x20afac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFACu;
        // 0x20afb0: 0x8f829730  lw          $v0, -0x68D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afac) {
            ctx->pc = 0x20AFE8u;
            goto label_20afe8;
        }
    }
    ctx->pc = 0x20AFB4u;
label_20afb4:
    // 0x20afb4: 0x2c420079  sltiu       $v0, $v0, 0x79
    ctx->pc = 0x20afb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
    // 0x20afb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20AFB8u;
    {
        const bool branch_taken_0x20afb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20afb8) {
            ctx->pc = 0x20AFD4u;
            goto label_20afd4;
        }
    }
    ctx->pc = 0x20AFC0u;
    // 0x20afc0: 0xc08215c  jal         func_208570
    ctx->pc = 0x20AFC0u;
    SET_GPR_U32(ctx, 31, 0x20AFC8u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20AFC0u, 0x20AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFC8u;
label_20afc8:
    // 0x20afc8: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20afcc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20AFCCu;
    {
        const bool branch_taken_0x20afcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20afcc) {
            ctx->pc = 0x20AFE8u;
            goto label_20afe8;
        }
    }
    ctx->pc = 0x20AFD4u;
label_20afd4:
    // 0x20afd4: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x20AFD4u;
    SET_GPR_U32(ctx, 31, 0x20AFDCu);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x20AFD4u, 0x20AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFDCu;
label_20afdc:
    // 0x20afdc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x20AFDCu;
    {
        const bool branch_taken_0x20afdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20afdc) {
            ctx->pc = 0x20B0B4u;
            goto label_20b0b4;
        }
    }
    ctx->pc = 0x20AFE4u;
    // 0x20afe4: 0x0  nop
    ctx->pc = 0x20afe4u;
    // NOP
label_20afe8:
    // 0x20afe8: 0xc08215c  jal         func_208570
    ctx->pc = 0x20AFE8u;
    SET_GPR_U32(ctx, 31, 0x20AFF0u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20AFE8u, 0x20AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFF0u;
label_20aff0:
    // 0x20aff0: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20aff4: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20AFF4u;
    {
        const bool branch_taken_0x20aff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20aff4) {
            ctx->pc = 0x20B034u;
            goto label_20b034;
        }
    }
    ctx->pc = 0x20AFFCu;
    // 0x20affc: 0x92220205  lbu         $v0, 0x205($s1)
    ctx->pc = 0x20affcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 517)));
    // 0x20b000: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20B000u;
    {
        const bool branch_taken_0x20b000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B000u;
        // 0x20b004: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b000) {
            ctx->pc = 0x20B028u;
            goto label_20b028;
        }
    }
    ctx->pc = 0x20B008u;
    // 0x20b008: 0x92420205  lbu         $v0, 0x205($s2)
    ctx->pc = 0x20b008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 517)));
    // 0x20b00c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B00Cu;
    {
        const bool branch_taken_0x20b00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b00c) {
            ctx->pc = 0x20B010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B00Cu;
            // 0x20b010: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B02Cu;
            goto label_20b02c;
        }
    }
    ctx->pc = 0x20B014u;
    // 0x20b014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b018: 0xc07c6a2  jal         func_1F1A88
    ctx->pc = 0x20B018u;
    SET_GPR_U32(ctx, 31, 0x20B020u);
    ctx->pc = 0x20B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B018u;
    // 0x20b01c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1A88u, 0x20B018u, 0x20B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B020u;
label_20b020:
    // 0x20b020: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20B020u;
    {
        const bool branch_taken_0x20b020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b020) {
            ctx->pc = 0x20B02Cu;
            goto label_20b02c;
        }
    }
    ctx->pc = 0x20B028u;
label_20b028:
    // 0x20b028: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20b028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b02c:
    // 0x20b02c: 0xc083012  jal         func_20C048
    ctx->pc = 0x20B02Cu;
    SET_GPR_U32(ctx, 31, 0x20B034u);
    ctx->pc = 0x20B030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B02Cu;
    // 0x20b030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C048u, 0x20B02Cu, 0x20B034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B034u;
label_20b034:
    // 0x20b034: 0xc08215c  jal         func_208570
    ctx->pc = 0x20B034u;
    SET_GPR_U32(ctx, 31, 0x20B03Cu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20B034u, 0x20B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B03Cu;
label_20b03c:
    // 0x20b03c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x20b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20b040: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x20B040u;
    {
        const bool branch_taken_0x20b040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20b040) {
            ctx->pc = 0x20B044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B040u;
            // 0x20b044: 0x92220205  lbu         $v0, 0x205($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 517)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B088u;
            goto label_20b088;
        }
    }
    ctx->pc = 0x20B048u;
    // 0x20b048: 0xc08215c  jal         func_208570
    ctx->pc = 0x20B048u;
    SET_GPR_U32(ctx, 31, 0x20B050u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20B048u, 0x20B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B050u;
label_20b050:
    // 0x20b050: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x20b050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x20b054: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20B054u;
    {
        const bool branch_taken_0x20b054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20b054) {
            ctx->pc = 0x20B058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B054u;
            // 0x20b058: 0x92220205  lbu         $v0, 0x205($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 517)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B088u;
            goto label_20b088;
        }
    }
    ctx->pc = 0x20B05Cu;
    // 0x20b05c: 0xc08215c  jal         func_208570
    ctx->pc = 0x20B05Cu;
    SET_GPR_U32(ctx, 31, 0x20B064u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20B05Cu, 0x20B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B064u;
label_20b064:
    // 0x20b064: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x20b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20b068: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B068u;
    {
        const bool branch_taken_0x20b068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20b068) {
            ctx->pc = 0x20B06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B068u;
            // 0x20b06c: 0x92220205  lbu         $v0, 0x205($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 517)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B088u;
            goto label_20b088;
        }
    }
    ctx->pc = 0x20B070u;
    // 0x20b070: 0xc08215c  jal         func_208570
    ctx->pc = 0x20B070u;
    SET_GPR_U32(ctx, 31, 0x20B078u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20B070u, 0x20B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B078u;
label_20b078:
    // 0x20b078: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20b07c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B07Cu;
    {
        const bool branch_taken_0x20b07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B07Cu;
        // 0x20b080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b07c) {
            ctx->pc = 0x20B098u;
            goto label_20b098;
        }
    }
    ctx->pc = 0x20B084u;
    // 0x20b084: 0x92220205  lbu         $v0, 0x205($s1)
    ctx->pc = 0x20b084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 517)));
label_20b088:
    // 0x20b088: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B088u;
    {
        const bool branch_taken_0x20b088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b088) {
            ctx->pc = 0x20B0B4u;
            goto label_20b0b4;
        }
    }
    ctx->pc = 0x20B090u;
    // 0x20b090: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20B090u;
    {
        const bool branch_taken_0x20b090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B090u;
        // 0x20b094: 0x92420205  lbu         $v0, 0x205($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 517)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b090) {
            ctx->pc = 0x20B0A0u;
            goto label_20b0a0;
        }
    }
    ctx->pc = 0x20B098u;
label_20b098:
    // 0x20b098: 0xc07c6a2  jal         func_1F1A88
    ctx->pc = 0x20B098u;
    SET_GPR_U32(ctx, 31, 0x20B0A0u);
    ctx->pc = 0x20B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B098u;
    // 0x20b09c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1A88u, 0x20B098u, 0x20B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B0A0u;
label_20b0a0:
    // 0x20b0a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B0A0u;
    {
        const bool branch_taken_0x20b0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0A0u;
        // 0x20b0a4: 0x8f8298ac  lw          $v0, -0x6754($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0a0) {
            ctx->pc = 0x20B0B4u;
            goto label_20b0b4;
        }
    }
    ctx->pc = 0x20B0A8u;
    // 0x20b0a8: 0x28424078  slti        $v0, $v0, 0x4078
    ctx->pc = 0x20b0a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16504) ? 1 : 0);
    // 0x20b0ac: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x20B0ACu;
    {
        const bool branch_taken_0x20b0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0ACu;
        // 0x20b0b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0ac) {
            ctx->pc = 0x20B2A4u;
            goto label_20b2a4;
        }
    }
    ctx->pc = 0x20B0B4u;
label_20b0b4:
    // 0x20b0b4: 0xc08215c  jal         func_208570
    ctx->pc = 0x20B0B4u;
    SET_GPR_U32(ctx, 31, 0x20B0BCu);
    ctx->pc = 0x20B0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B0B4u;
    // 0x20b0b8: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20B0B4u, 0x20B0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B0BCu;
label_20b0bc:
    // 0x20b0bc: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B0BCu;
    {
        const bool branch_taken_0x20b0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x20b0bc) {
            ctx->pc = 0x20B0CCu;
            goto label_20b0cc;
        }
    }
    ctx->pc = 0x20B0C4u;
    // 0x20b0c4: 0xc083012  jal         func_20C048
    ctx->pc = 0x20B0C4u;
    SET_GPR_U32(ctx, 31, 0x20B0CCu);
    ctx->pc = 0x20B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B0C4u;
    // 0x20b0c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C048u, 0x20B0C4u, 0x20B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B0CCu;
label_20b0cc:
    // 0x20b0cc: 0xc08215c  jal         func_208570
    ctx->pc = 0x20B0CCu;
    SET_GPR_U32(ctx, 31, 0x20B0D4u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20B0CCu, 0x20B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B0D4u;
label_20b0d4:
    // 0x20b0d4: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B0D4u;
    {
        const bool branch_taken_0x20b0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x20b0d4) {
            ctx->pc = 0x20B0E4u;
            goto label_20b0e4;
        }
    }
    ctx->pc = 0x20B0DCu;
    // 0x20b0dc: 0xc0a9468  jal         func_2A51A0
    ctx->pc = 0x20B0DCu;
    SET_GPR_U32(ctx, 31, 0x20B0E4u);
    ctx->pc = 0x2A51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51A0u, 0x20B0DCu, 0x20B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B0E4u;
label_20b0e4:
    // 0x20b0e4: 0xc0a3ab2  jal         func_28EAC8
    ctx->pc = 0x20B0E4u;
    SET_GPR_U32(ctx, 31, 0x20B0ECu);
    ctx->pc = 0x20B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B0E4u;
    // 0x20b0e8: 0x3c13003b  lui         $s3, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EAC8u, 0x20B0E4u, 0x20B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B0ECu;
label_20b0ec:
    // 0x20b0ec: 0x266283c0  addiu       $v0, $s3, -0x7C40
    ctx->pc = 0x20b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
    // 0x20b0f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20b0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b0f4: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x20B0F4u;
    SET_GPR_U32(ctx, 31, 0x20B0FCu);
    ctx->pc = 0x20B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B0F4u;
    // 0x20b0f8: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x20B0F4u, 0x20B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B0FCu;
label_20b0fc:
    // 0x20b0fc: 0x8f82c8d4  lw          $v0, -0x372C($gp)
    ctx->pc = 0x20b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953172)));
    // 0x20b100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B100u;
    {
        const bool branch_taken_0x20b100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b100) {
            ctx->pc = 0x20B120u;
            goto label_20b120;
        }
    }
    ctx->pc = 0x20B108u;
    // 0x20b108: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20b108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x20b10c: 0xc0a13f0  jal         func_284FC0
    ctx->pc = 0x20B10Cu;
    SET_GPR_U32(ctx, 31, 0x20B114u);
    ctx->pc = 0x20B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B10Cu;
    // 0x20b110: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FC0u, 0x20B10Cu, 0x20B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B114u;
label_20b114:
    // 0x20b114: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b118: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B118u;
    {
        const bool branch_taken_0x20b118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20b118) {
            ctx->pc = 0x20B11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B118u;
            // 0x20b11c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B138u;
            goto label_20b138;
        }
    }
    ctx->pc = 0x20B120u;
label_20b120:
    // 0x20b120: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B120u;
    {
        const bool branch_taken_0x20b120 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b120) {
            ctx->pc = 0x20B124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B120u;
            // 0x20b124: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B138u;
            goto label_20b138;
        }
    }
    ctx->pc = 0x20B128u;
    // 0x20b128: 0xc0820a0  jal         func_208280
    ctx->pc = 0x20B128u;
    SET_GPR_U32(ctx, 31, 0x20B130u);
    ctx->pc = 0x208280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208280u, 0x20B128u, 0x20B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B130u;
label_20b130:
    // 0x20b130: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B130u;
    {
        const bool branch_taken_0x20b130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b130) {
            ctx->pc = 0x20B134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B130u;
            // 0x20b134: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B138u;
            goto label_20b138;
        }
    }
    ctx->pc = 0x20B138u;
label_20b138:
    // 0x20b138: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x20B138u;
    {
        const bool branch_taken_0x20b138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b138) {
            ctx->pc = 0x20B1C8u;
            goto label_20b1c8;
        }
    }
    ctx->pc = 0x20B140u;
    // 0x20b140: 0xc082162  jal         func_208588
    ctx->pc = 0x20B140u;
    SET_GPR_U32(ctx, 31, 0x20B148u);
    ctx->pc = 0x20B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B140u;
    // 0x20b144: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20B140u, 0x20B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B148u;
label_20b148:
    // 0x20b148: 0xc07e26e  jal         func_1F89B8
    ctx->pc = 0x20B148u;
    SET_GPR_U32(ctx, 31, 0x20B150u);
    ctx->pc = 0x20B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B148u;
    // 0x20b14c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B8u, 0x20B148u, 0x20B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B150u;
label_20b150:
    // 0x20b150: 0x26a28858  addiu       $v0, $s5, -0x77A8
    ctx->pc = 0x20b150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
    // 0x20b154: 0x8f839730  lw          $v1, -0x68D0($gp)
    ctx->pc = 0x20b154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20b158: 0x266483c0  addiu       $a0, $s3, -0x7C40
    ctx->pc = 0x20b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
    // 0x20b15c: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x20b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x20b160: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x20b160u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20b164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20b168: 0xaf839730  sw          $v1, -0x68D0($gp)
    ctx->pc = 0x20b168u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 3));
    // 0x20b16c: 0xc0820a0  jal         func_208280
    ctx->pc = 0x20B16Cu;
    SET_GPR_U32(ctx, 31, 0x20B174u);
    ctx->pc = 0x20B170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B16Cu;
    // 0x20b170: 0xaf8098ac  sw          $zero, -0x6754($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940844), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208280u, 0x20B16Cu, 0x20B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B174u;
label_20b174:
    // 0x20b174: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B174u;
    {
        const bool branch_taken_0x20b174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b174) {
            ctx->pc = 0x20B190u;
            goto label_20b190;
        }
    }
    ctx->pc = 0x20B17Cu;
    // 0x20b17c: 0xc082162  jal         func_208588
    ctx->pc = 0x20B17Cu;
    SET_GPR_U32(ctx, 31, 0x20B184u);
    ctx->pc = 0x20B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B17Cu;
    // 0x20b180: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20B17Cu, 0x20B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B184u;
label_20b184:
    // 0x20b184: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20B184u;
    {
        const bool branch_taken_0x20b184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b184) {
            ctx->pc = 0x20B1A8u;
            goto label_20b1a8;
        }
    }
    ctx->pc = 0x20B18Cu;
    // 0x20b18c: 0x0  nop
    ctx->pc = 0x20b18cu;
    // NOP
label_20b190:
    // 0x20b190: 0xc0a12aa  jal         func_284AA8
    ctx->pc = 0x20B190u;
    SET_GPR_U32(ctx, 31, 0x20B198u);
    ctx->pc = 0x284AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA8u, 0x20B190u, 0x20B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B198u;
label_20b198:
    // 0x20b198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B198u;
    {
        const bool branch_taken_0x20b198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b198) {
            ctx->pc = 0x20B1A8u;
            goto label_20b1a8;
        }
    }
    ctx->pc = 0x20B1A0u;
    // 0x20b1a0: 0xc082162  jal         func_208588
    ctx->pc = 0x20B1A0u;
    SET_GPR_U32(ctx, 31, 0x20B1A8u);
    ctx->pc = 0x20B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B1A0u;
    // 0x20b1a4: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20B1A0u, 0x20B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1A8u;
label_20b1a8:
    // 0x20b1a8: 0xc0821d0  jal         func_208740
    ctx->pc = 0x20B1A8u;
    SET_GPR_U32(ctx, 31, 0x20B1B0u);
    ctx->pc = 0x208740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208740u, 0x20B1A8u, 0x20B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1B0u;
label_20b1b0:
    // 0x20b1b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1b4: 0xc0821ce  jal         func_208738
    ctx->pc = 0x20B1B4u;
    SET_GPR_U32(ctx, 31, 0x20B1BCu);
    ctx->pc = 0x20B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B1B4u;
    // 0x20b1b8: 0xaf82c8d0  sw          $v0, -0x3730($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x20B1B4u, 0x20B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1BCu;
label_20b1bc:
    // 0x20b1bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20B1BCu;
    {
        const bool branch_taken_0x20b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b1bc) {
            ctx->pc = 0x20B200u;
            goto label_20b200;
        }
    }
    ctx->pc = 0x20B1C4u;
    // 0x20b1c4: 0x0  nop
    ctx->pc = 0x20b1c4u;
    // NOP
label_20b1c8:
    // 0x20b1c8: 0xc0a12fa  jal         func_284BE8
    ctx->pc = 0x20B1C8u;
    SET_GPR_U32(ctx, 31, 0x20B1D0u);
    ctx->pc = 0x284BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284BE8u, 0x20B1C8u, 0x20B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1D0u;
label_20b1d0:
    // 0x20b1d0: 0xc08215c  jal         func_208570
    ctx->pc = 0x20B1D0u;
    SET_GPR_U32(ctx, 31, 0x20B1D8u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20B1D0u, 0x20B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1D8u;
label_20b1d8:
    // 0x20b1d8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20b1dc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B1DCu;
    {
        const bool branch_taken_0x20b1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20b1dc) {
            ctx->pc = 0x20B1F8u;
            goto label_20b1f8;
        }
    }
    ctx->pc = 0x20B1E4u;
    // 0x20b1e4: 0xc082162  jal         func_208588
    ctx->pc = 0x20B1E4u;
    SET_GPR_U32(ctx, 31, 0x20B1ECu);
    ctx->pc = 0x20B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B1E4u;
    // 0x20b1e8: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20B1E4u, 0x20B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1ECu;
label_20b1ec:
    // 0x20b1ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20B1ECu;
    {
        const bool branch_taken_0x20b1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b1ec) {
            ctx->pc = 0x20B200u;
            goto label_20b200;
        }
    }
    ctx->pc = 0x20B1F4u;
    // 0x20b1f4: 0x0  nop
    ctx->pc = 0x20b1f4u;
    // NOP
label_20b1f8:
    // 0x20b1f8: 0xc082162  jal         func_208588
    ctx->pc = 0x20B1F8u;
    SET_GPR_U32(ctx, 31, 0x20B200u);
    ctx->pc = 0x20B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B1F8u;
    // 0x20b1fc: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20B1F8u, 0x20B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B200u;
label_20b200:
    // 0x20b200: 0xc09d940  jal         func_276500
    ctx->pc = 0x20B200u;
    SET_GPR_U32(ctx, 31, 0x20B208u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x20B200u, 0x20B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B208u;
label_20b208:
    // 0x20b208: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20B208u;
    {
        const bool branch_taken_0x20b208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B208u;
        // 0x20b20c: 0x26a48858  addiu       $a0, $s5, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b208) {
            ctx->pc = 0x20B248u;
            goto label_20b248;
        }
    }
    ctx->pc = 0x20B210u;
    // 0x20b210: 0x8f82973c  lw          $v0, -0x68C4($gp)
    ctx->pc = 0x20b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x20b214: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x20b214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x20b218: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x20b218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20b21c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x20B21Cu;
    {
        const bool branch_taken_0x20b21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B21Cu;
        // 0x20b220: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b21c) {
            ctx->pc = 0x20B2A4u;
            goto label_20b2a4;
        }
    }
    ctx->pc = 0x20B224u;
    // 0x20b224: 0x86220090  lh          $v0, 0x90($s1)
    ctx->pc = 0x20b224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x20b228: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x20b228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x20b22c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20b22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20b230: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20B230u;
    {
        const bool branch_taken_0x20b230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B230u;
        // 0x20b234: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b230) {
            ctx->pc = 0x20B2A8u;
            goto label_20b2a8;
        }
    }
    ctx->pc = 0x20B238u;
    // 0x20b238: 0x86420090  lh          $v0, 0x90($s2)
    ctx->pc = 0x20b238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x20b23c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20b23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20b240: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20B240u;
    {
        const bool branch_taken_0x20b240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B240u;
        // 0x20b244: 0xdfb20010  ld          $s2, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b240) {
            ctx->pc = 0x20B2ACu;
            goto label_20b2ac;
        }
    }
    ctx->pc = 0x20B248u;
label_20b248:
    // 0x20b248: 0xc085c6e  jal         func_2171B8
    ctx->pc = 0x20B248u;
    SET_GPR_U32(ctx, 31, 0x20B250u);
    ctx->pc = 0x2171B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171B8u, 0x20B248u, 0x20B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B250u;
label_20b250:
    // 0x20b250: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20B250u;
    {
        const bool branch_taken_0x20b250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B250u;
        // 0x20b254: 0x26a38858  addiu       $v1, $s5, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b250) {
            ctx->pc = 0x20B298u;
            goto label_20b298;
        }
    }
    ctx->pc = 0x20B258u;
    // 0x20b258: 0xc084f26  jal         func_213C98
    ctx->pc = 0x20B258u;
    SET_GPR_U32(ctx, 31, 0x20B260u);
    ctx->pc = 0x213C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C98u, 0x20B258u, 0x20B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B260u;
label_20b260:
    // 0x20b260: 0xc085c70  jal         func_2171C0
    ctx->pc = 0x20B260u;
    SET_GPR_U32(ctx, 31, 0x20B268u);
    ctx->pc = 0x20B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B260u;
    // 0x20b264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2171C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171C0u, 0x20B260u, 0x20B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B268u;
label_20b268:
    // 0x20b268: 0x266283c0  addiu       $v0, $s3, -0x7C40
    ctx->pc = 0x20b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
    // 0x20b26c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b270: 0xc085c72  jal         func_2171C8
    ctx->pc = 0x20B270u;
    SET_GPR_U32(ctx, 31, 0x20B278u);
    ctx->pc = 0x20B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B270u;
    // 0x20b274: 0xa0430004  sb          $v1, 0x4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2171C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171C8u, 0x20B270u, 0x20B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B278u;
label_20b278:
    // 0x20b278: 0xc085c74  jal         func_2171D0
    ctx->pc = 0x20B278u;
    SET_GPR_U32(ctx, 31, 0x20B280u);
    ctx->pc = 0x20B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B278u;
    // 0x20b27c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2171D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171D0u, 0x20B278u, 0x20B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B280u;
label_20b280:
    // 0x20b280: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b284: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x20B284u;
    SET_GPR_U32(ctx, 31, 0x20B28Cu);
    ctx->pc = 0x20B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B284u;
    // 0x20b288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x20B284u, 0x20B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B28Cu;
label_20b28c:
    // 0x20b28c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20B28Cu;
    {
        const bool branch_taken_0x20b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B28Cu;
        // 0x20b290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b28c) {
            ctx->pc = 0x20B2A4u;
            goto label_20b2a4;
        }
    }
    ctx->pc = 0x20B294u;
    // 0x20b294: 0x0  nop
    ctx->pc = 0x20b294u;
    // NOP
label_20b298:
    // 0x20b298: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20b298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20b29c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x20b2a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b2a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b2a4:
    // 0x20b2a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b2a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b2a8:
    // 0x20b2a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20b2a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b2ac:
    // 0x20b2ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20b2acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20b2b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20b2b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b2b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20b2b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20b2b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20b2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x20B2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2BCu;
        // 0x20b2c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B2C4u;
    // 0x20b2c4: 0x0  nop
    ctx->pc = 0x20b2c4u;
    // NOP
    ctx->pc = 0x20b2c8u;
}
