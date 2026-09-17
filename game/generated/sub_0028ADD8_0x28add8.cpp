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

// Function: sub_0028ADD8
// Address: 0x28add8 - 0x28b038
void sub_0028ADD8_0x28add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ADD8_0x28add8");
#endif

    switch (ctx->pc) {
        case 0x28ae40u: goto label_28ae40;
        case 0x28ae50u: goto label_28ae50;
        case 0x28ae5cu: goto label_28ae5c;
        case 0x28ae6cu: goto label_28ae6c;
        case 0x28ae78u: goto label_28ae78;
        case 0x28ae98u: goto label_28ae98;
        case 0x28aea8u: goto label_28aea8;
        case 0x28aec4u: goto label_28aec4;
        case 0x28aedcu: goto label_28aedc;
        case 0x28aeecu: goto label_28aeec;
        case 0x28af14u: goto label_28af14;
        case 0x28af3cu: goto label_28af3c;
        case 0x28af5cu: goto label_28af5c;
        case 0x28af64u: goto label_28af64;
        case 0x28af6cu: goto label_28af6c;
        case 0x28af74u: goto label_28af74;
        case 0x28af7cu: goto label_28af7c;
        case 0x28af84u: goto label_28af84;
        case 0x28af8cu: goto label_28af8c;
        case 0x28af94u: goto label_28af94;
        case 0x28af9cu: goto label_28af9c;
        case 0x28afa4u: goto label_28afa4;
        case 0x28afacu: goto label_28afac;
        case 0x28afc8u: goto label_28afc8;
        case 0x28afd0u: goto label_28afd0;
        case 0x28afd8u: goto label_28afd8;
        case 0x28afe0u: goto label_28afe0;
        case 0x28afe8u: goto label_28afe8;
        case 0x28aff0u: goto label_28aff0;
        case 0x28aff8u: goto label_28aff8;
        case 0x28b000u: goto label_28b000;
        case 0x28b008u: goto label_28b008;
        case 0x28b010u: goto label_28b010;
        case 0x28b018u: goto label_28b018;
        default: break;
    }

    ctx->pc = 0x28add8u;

    // 0x28add8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28add8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28addc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28ade0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ade0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ade4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ade4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ade8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28adec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28adecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28adf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28adf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28adf4: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x28adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x28adf8: 0x14600088  bnez        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x28ADF8u;
    {
        const bool branch_taken_0x28adf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADF8u;
        // 0x28adfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adf8) {
            ctx->pc = 0x28B01Cu;
            goto label_28b01c;
        }
    }
    ctx->pc = 0x28AE00u;
    // 0x28ae00: 0x8e510048  lw          $s1, 0x48($s2)
    ctx->pc = 0x28ae00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x28ae04: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x28ae04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ae08: 0x12330025  beq         $s1, $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x28AE08u;
    {
        const bool branch_taken_0x28ae08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x28AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE08u;
        // 0x28ae0c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae08) {
            ctx->pc = 0x28AEA0u;
            goto label_28aea0;
        }
    }
    ctx->pc = 0x28AE10u;
    // 0x28ae10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AE10u;
    {
        const bool branch_taken_0x28ae10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE10u;
        // 0x28ae14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae10) {
            ctx->pc = 0x28AE28u;
            goto label_28ae28;
        }
    }
    ctx->pc = 0x28AE18u;
    // 0x28ae18: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28AE18u;
    {
        const bool branch_taken_0x28ae18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE18u;
        // 0x28ae1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae18) {
            ctx->pc = 0x28AE38u;
            goto label_28ae38;
        }
    }
    ctx->pc = 0x28AE20u;
    // 0x28ae20: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x28AE20u;
    {
        const bool branch_taken_0x28ae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE20u;
        // 0x28ae24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae20) {
            ctx->pc = 0x28B020u;
            goto label_28b020;
        }
    }
    ctx->pc = 0x28AE28u;
label_28ae28:
    // 0x28ae28: 0x12220065  beq         $s1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x28AE28u;
    {
        const bool branch_taken_0x28ae28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x28AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE28u;
        // 0x28ae2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae28) {
            ctx->pc = 0x28AFC0u;
            goto label_28afc0;
        }
    }
    ctx->pc = 0x28AE30u;
    // 0x28ae30: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x28AE30u;
    {
        const bool branch_taken_0x28ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE30u;
        // 0x28ae34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae30) {
            ctx->pc = 0x28B020u;
            goto label_28b020;
        }
    }
    ctx->pc = 0x28AE38u;
label_28ae38:
    // 0x28ae38: 0xc089622  jal         func_225888
    ctx->pc = 0x28AE38u;
    SET_GPR_U32(ctx, 31, 0x28AE40u);
    ctx->pc = 0x28AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE38u;
    // 0x28ae3c: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x28AE38u, 0x28AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE40u;
label_28ae40:
    // 0x28ae40: 0x50400076  beql        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x28AE40u;
    {
        const bool branch_taken_0x28ae40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ae40) {
            ctx->pc = 0x28AE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AE40u;
            // 0x28ae44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B01Cu;
            goto label_28b01c;
        }
    }
    ctx->pc = 0x28AE48u;
    // 0x28ae48: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x28AE48u;
    SET_GPR_U32(ctx, 31, 0x28AE50u);
    ctx->pc = 0x28AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE48u;
    // 0x28ae4c: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x28AE48u, 0x28AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE50u;
label_28ae50:
    // 0x28ae50: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x28ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x28ae54: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x28AE54u;
    SET_GPR_U32(ctx, 31, 0x28AE5Cu);
    ctx->pc = 0x28AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE54u;
    // 0x28ae58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x28AE54u, 0x28AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE5Cu;
label_28ae5c:
    // 0x28ae5c: 0x3c040006  lui         $a0, 0x6
    ctx->pc = 0x28ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6 << 16));
    // 0x28ae60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28ae60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae64: 0xc04058e  jal         func_101638
    ctx->pc = 0x28AE64u;
    SET_GPR_U32(ctx, 31, 0x28AE6Cu);
    ctx->pc = 0x28AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE64u;
    // 0x28ae68: 0x3484d8c0  ori         $a0, $a0, 0xD8C0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55488);
    ctx->in_delay_slot = false;
    ctx->pc = 0x101638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101638u, 0x28AE64u, 0x28AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE6Cu;
label_28ae6c:
    // 0x28ae6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ae6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae70: 0xc07c494  jal         func_1F1250
    ctx->pc = 0x28AE70u;
    SET_GPR_U32(ctx, 31, 0x28AE78u);
    ctx->pc = 0x28AE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE70u;
    // 0x28ae74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1250u, 0x28AE70u, 0x28AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE78u;
label_28ae78:
    // 0x28ae78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae7c: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x28ae7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x28ae80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ae80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28ae84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae88: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x28ae88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x28ae8c: 0x240800f1  addiu       $t0, $zero, 0xF1
    ctx->pc = 0x28ae8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x28ae90: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x28AE90u;
    SET_GPR_U32(ctx, 31, 0x28AE98u);
    ctx->pc = 0x28AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE90u;
    // 0x28ae94: 0x35290400  ori         $t1, $t1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x28AE90u, 0x28AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE98u;
label_28ae98:
    // 0x28ae98: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x28AE98u;
    {
        const bool branch_taken_0x28ae98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE98u;
        // 0x28ae9c: 0xae530048  sw          $s3, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae98) {
            ctx->pc = 0x28B018u;
            goto label_28b018;
        }
    }
    ctx->pc = 0x28AEA0u;
label_28aea0:
    // 0x28aea0: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x28AEA0u;
    SET_GPR_U32(ctx, 31, 0x28AEA8u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x28AEA0u, 0x28AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEA8u;
label_28aea8:
    // 0x28aea8: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x28aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x28aeac: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x28AEACu;
    {
        const bool branch_taken_0x28aeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEACu;
        // 0x28aeb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aeac) {
            ctx->pc = 0x28B01Cu;
            goto label_28b01c;
        }
    }
    ctx->pc = 0x28AEB4u;
    // 0x28aeb4: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x28aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x28aeb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28aeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aebc: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28AEBCu;
    SET_GPR_U32(ctx, 31, 0x28AEC4u);
    ctx->pc = 0x28AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AEBCu;
    // 0x28aec0: 0x8c5000a4  lw          $s0, 0xA4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28AEBCu, 0x28AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEC4u;
label_28aec4:
    // 0x28aec4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AEC4u;
    {
        const bool branch_taken_0x28aec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEC4u;
        // 0x28aec8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aec4) {
            ctx->pc = 0x28AEE0u;
            goto label_28aee0;
        }
    }
    ctx->pc = 0x28AECCu;
    // 0x28aecc: 0x8e440130  lw          $a0, 0x130($s2)
    ctx->pc = 0x28aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x28aed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28aed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aed4: 0xc0ad894  jal         func_2B6250
    ctx->pc = 0x28AED4u;
    SET_GPR_U32(ctx, 31, 0x28AEDCu);
    ctx->pc = 0x28AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AED4u;
    // 0x28aed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6250u, 0x28AED4u, 0x28AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEDCu;
label_28aedc:
    // 0x28aedc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28aedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28aee0:
    // 0x28aee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28aee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aee4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28AEE4u;
    SET_GPR_U32(ctx, 31, 0x28AEECu);
    ctx->pc = 0x28AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AEE4u;
    // 0x28aee8: 0x24a59b78  addiu       $a1, $a1, -0x6488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28AEE4u, 0x28AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEECu;
label_28aeec:
    // 0x28aeec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28aeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aef0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28AEF0u;
    {
        const bool branch_taken_0x28aef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEF0u;
        // 0x28aef4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aef0) {
            ctx->pc = 0x28AF04u;
            goto label_28af04;
        }
    }
    ctx->pc = 0x28AEF8u;
    // 0x28aef8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28aefc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28af00: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28af00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28af04:
    // 0x28af04: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28af04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28af08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af0c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28AF0Cu;
    SET_GPR_U32(ctx, 31, 0x28AF14u);
    ctx->pc = 0x28AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF0Cu;
    // 0x28af10: 0x24a59b88  addiu       $a1, $a1, -0x6478 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28AF0Cu, 0x28AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF14u;
label_28af14:
    // 0x28af14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28af14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28AF18u;
    {
        const bool branch_taken_0x28af18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF18u;
        // 0x28af1c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af18) {
            ctx->pc = 0x28AF2Cu;
            goto label_28af2c;
        }
    }
    ctx->pc = 0x28AF20u;
    // 0x28af20: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28af24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28af24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28af28: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28af28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28af2c:
    // 0x28af2c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x28af30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28af30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af34: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28AF34u;
    SET_GPR_U32(ctx, 31, 0x28AF3Cu);
    ctx->pc = 0x28AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF34u;
    // 0x28af38: 0x24a53c28  addiu       $a1, $a1, 0x3C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28AF34u, 0x28AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF3Cu;
label_28af3c:
    // 0x28af3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28af3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af40: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28AF40u;
    {
        const bool branch_taken_0x28af40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF40u;
        // 0x28af44: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af40) {
            ctx->pc = 0x28AF54u;
            goto label_28af54;
        }
    }
    ctx->pc = 0x28AF48u;
    // 0x28af48: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28af4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28af4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28af50: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28af50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28af54:
    // 0x28af54: 0xc0a2dd8  jal         func_28B760
    ctx->pc = 0x28AF54u;
    SET_GPR_U32(ctx, 31, 0x28AF5Cu);
    ctx->pc = 0x28AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF54u;
    // 0x28af58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B760u, 0x28AF54u, 0x28AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF5Cu;
label_28af5c:
    // 0x28af5c: 0xc0a2d0c  jal         func_28B430
    ctx->pc = 0x28AF5Cu;
    SET_GPR_U32(ctx, 31, 0x28AF64u);
    ctx->pc = 0x28AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF5Cu;
    // 0x28af60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B430u, 0x28AF5Cu, 0x28AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF64u;
label_28af64:
    // 0x28af64: 0xc0a2d10  jal         func_28B440
    ctx->pc = 0x28AF64u;
    SET_GPR_U32(ctx, 31, 0x28AF6Cu);
    ctx->pc = 0x28AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF64u;
    // 0x28af68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B440u, 0x28AF64u, 0x28AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF6Cu;
label_28af6c:
    // 0x28af6c: 0xc0a2d14  jal         func_28B450
    ctx->pc = 0x28AF6Cu;
    SET_GPR_U32(ctx, 31, 0x28AF74u);
    ctx->pc = 0x28AF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF6Cu;
    // 0x28af70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B450u, 0x28AF6Cu, 0x28AF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF74u;
label_28af74:
    // 0x28af74: 0xc0a2dd0  jal         func_28B740
    ctx->pc = 0x28AF74u;
    SET_GPR_U32(ctx, 31, 0x28AF7Cu);
    ctx->pc = 0x28AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF74u;
    // 0x28af78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B740u, 0x28AF74u, 0x28AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF7Cu;
label_28af7c:
    // 0x28af7c: 0xc0a2dd4  jal         func_28B750
    ctx->pc = 0x28AF7Cu;
    SET_GPR_U32(ctx, 31, 0x28AF84u);
    ctx->pc = 0x28AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF7Cu;
    // 0x28af80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B750u, 0x28AF7Cu, 0x28AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF84u;
label_28af84:
    // 0x28af84: 0xc0a2cc4  jal         func_28B310
    ctx->pc = 0x28AF84u;
    SET_GPR_U32(ctx, 31, 0x28AF8Cu);
    ctx->pc = 0x28AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF84u;
    // 0x28af88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B310u, 0x28AF84u, 0x28AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF8Cu;
label_28af8c:
    // 0x28af8c: 0xc0a2c0e  jal         func_28B038
    ctx->pc = 0x28AF8Cu;
    SET_GPR_U32(ctx, 31, 0x28AF94u);
    ctx->pc = 0x28AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF8Cu;
    // 0x28af90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B038u, 0x28AF8Cu, 0x28AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF94u;
label_28af94:
    // 0x28af94: 0xc0a345c  jal         func_28D170
    ctx->pc = 0x28AF94u;
    SET_GPR_U32(ctx, 31, 0x28AF9Cu);
    ctx->pc = 0x28AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF94u;
    // 0x28af98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D170u, 0x28AF94u, 0x28AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF9Cu;
label_28af9c:
    // 0x28af9c: 0xc0a369a  jal         func_28DA68
    ctx->pc = 0x28AF9Cu;
    SET_GPR_U32(ctx, 31, 0x28AFA4u);
    ctx->pc = 0x28AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF9Cu;
    // 0x28afa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA68u, 0x28AF9Cu, 0x28AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFA4u;
label_28afa4:
    // 0x28afa4: 0xc0a396a  jal         func_28E5A8
    ctx->pc = 0x28AFA4u;
    SET_GPR_U32(ctx, 31, 0x28AFACu);
    ctx->pc = 0x28AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFA4u;
    // 0x28afa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E5A8u, 0x28AFA4u, 0x28AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFACu;
label_28afac:
    // 0x28afac: 0xae510154  sw          $s1, 0x154($s2)
    ctx->pc = 0x28afacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 17));
    // 0x28afb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28afb4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28AFB4u;
    {
        const bool branch_taken_0x28afb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFB4u;
        // 0x28afb8: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afb4) {
            ctx->pc = 0x28B018u;
            goto label_28b018;
        }
    }
    ctx->pc = 0x28AFBCu;
    // 0x28afbc: 0x0  nop
    ctx->pc = 0x28afbcu;
    // NOP
label_28afc0:
    // 0x28afc0: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x28AFC0u;
    SET_GPR_U32(ctx, 31, 0x28AFC8u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x28AFC0u, 0x28AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFC8u;
label_28afc8:
    // 0x28afc8: 0xc0a2d0e  jal         func_28B438
    ctx->pc = 0x28AFC8u;
    SET_GPR_U32(ctx, 31, 0x28AFD0u);
    ctx->pc = 0x28AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFC8u;
    // 0x28afcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B438u, 0x28AFC8u, 0x28AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFD0u;
label_28afd0:
    // 0x28afd0: 0xc0a2d12  jal         func_28B448
    ctx->pc = 0x28AFD0u;
    SET_GPR_U32(ctx, 31, 0x28AFD8u);
    ctx->pc = 0x28AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFD0u;
    // 0x28afd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B448u, 0x28AFD0u, 0x28AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFD8u;
label_28afd8:
    // 0x28afd8: 0xc0a2d66  jal         func_28B598
    ctx->pc = 0x28AFD8u;
    SET_GPR_U32(ctx, 31, 0x28AFE0u);
    ctx->pc = 0x28AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFD8u;
    // 0x28afdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B598u, 0x28AFD8u, 0x28AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFE0u;
label_28afe0:
    // 0x28afe0: 0xc0a2dd2  jal         func_28B748
    ctx->pc = 0x28AFE0u;
    SET_GPR_U32(ctx, 31, 0x28AFE8u);
    ctx->pc = 0x28AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFE0u;
    // 0x28afe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B748u, 0x28AFE0u, 0x28AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFE8u;
label_28afe8:
    // 0x28afe8: 0xc0a2dd6  jal         func_28B758
    ctx->pc = 0x28AFE8u;
    SET_GPR_U32(ctx, 31, 0x28AFF0u);
    ctx->pc = 0x28AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFE8u;
    // 0x28afec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B758u, 0x28AFE8u, 0x28AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFF0u;
label_28aff0:
    // 0x28aff0: 0xc0a2cdc  jal         func_28B370
    ctx->pc = 0x28AFF0u;
    SET_GPR_U32(ctx, 31, 0x28AFF8u);
    ctx->pc = 0x28AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFF0u;
    // 0x28aff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B370u, 0x28AFF0u, 0x28AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFF8u;
label_28aff8:
    // 0x28aff8: 0xc0a2c2a  jal         func_28B0A8
    ctx->pc = 0x28AFF8u;
    SET_GPR_U32(ctx, 31, 0x28B000u);
    ctx->pc = 0x28AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFF8u;
    // 0x28affc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B0A8u, 0x28AFF8u, 0x28B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B000u;
label_28b000:
    // 0x28b000: 0xc0a3466  jal         func_28D198
    ctx->pc = 0x28B000u;
    SET_GPR_U32(ctx, 31, 0x28B008u);
    ctx->pc = 0x28B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B000u;
    // 0x28b004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D198u, 0x28B000u, 0x28B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B008u;
label_28b008:
    // 0x28b008: 0xc0a36a4  jal         func_28DA90
    ctx->pc = 0x28B008u;
    SET_GPR_U32(ctx, 31, 0x28B010u);
    ctx->pc = 0x28B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B008u;
    // 0x28b00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA90u, 0x28B008u, 0x28B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B010u;
label_28b010:
    // 0x28b010: 0xc0a3974  jal         func_28E5D0
    ctx->pc = 0x28B010u;
    SET_GPR_U32(ctx, 31, 0x28B018u);
    ctx->pc = 0x28B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B010u;
    // 0x28b014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E5D0u, 0x28B010u, 0x28B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B018u;
label_28b018:
    // 0x28b018: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28b018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b01c:
    // 0x28b01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28b020:
    // 0x28b020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28b020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28b024: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28b024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b028: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28b028u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28b02c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28b02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b030: 0x3e00008  jr          $ra
    ctx->pc = 0x28B030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B030u;
        // 0x28b034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B038u;
}
