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

// Function: sub_00283F40
// Address: 0x283f40 - 0x284238
void sub_00283F40_0x283f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283F40_0x283f40");
#endif

    switch (ctx->pc) {
        case 0x283fa4u: goto label_283fa4;
        case 0x283ff4u: goto label_283ff4;
        case 0x284010u: goto label_284010;
        case 0x284020u: goto label_284020;
        case 0x284050u: goto label_284050;
        case 0x2840e8u: goto label_2840e8;
        case 0x284118u: goto label_284118;
        default: break;
    }

    ctx->pc = 0x283f40u;

    // 0x283f40: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x283f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x283f44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283f48: 0x8cc383c0  lw          $v1, -0x7C40($a2)
    ctx->pc = 0x283f48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x283f4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x283f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x283f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x283f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x283f5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x283f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x283f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x283f64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x283f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x283f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x283f6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x283f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x283f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x283f74: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283F74u;
    {
        const bool branch_taken_0x283f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x283F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F74u;
        // 0x283f78: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f74) {
            ctx->pc = 0x283F88u;
            goto label_283f88;
        }
    }
    ctx->pc = 0x283F7Cu;
    // 0x283f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283f80: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x283F80u;
    {
        const bool branch_taken_0x283f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x283f80) {
            ctx->pc = 0x283F8Cu;
            goto label_283f8c;
        }
    }
    ctx->pc = 0x283F88u;
label_283f88:
    // 0x283f88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x283f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283f8c:
    // 0x283f8c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283F8Cu;
    {
        const bool branch_taken_0x283f8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F8Cu;
        // 0x283f90: 0x8cc283c0  lw          $v0, -0x7C40($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f8c) {
            ctx->pc = 0x283F9Cu;
            goto label_283f9c;
        }
    }
    ctx->pc = 0x283F94u;
    // 0x283f94: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x283F94u;
    {
        const bool branch_taken_0x283f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283f94) {
            ctx->pc = 0x283F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283F94u;
            // 0x283f98: 0xa20001bd  sb          $zero, 0x1BD($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 445), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283FACu;
            goto label_283fac;
        }
    }
    ctx->pc = 0x283F9Cu;
label_283f9c:
    // 0x283f9c: 0xc09d940  jal         func_276500
    ctx->pc = 0x283F9Cu;
    SET_GPR_U32(ctx, 31, 0x283FA4u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x283F9Cu, 0x283FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FA4u;
label_283fa4:
    // 0x283fa4: 0x2c530001  sltiu       $s3, $v0, 0x1
    ctx->pc = 0x283fa4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283fa8: 0xa20001bd  sb          $zero, 0x1BD($s0)
    ctx->pc = 0x283fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 445), (uint8_t)GPR_U32(ctx, 0));
label_283fac:
    // 0x283fac: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x283facu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x283fb0: 0x9605003c  lhu         $a1, 0x3C($s0)
    ctx->pc = 0x283fb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x283fb4: 0x26848858  addiu       $a0, $s4, -0x77A8
    ctx->pc = 0x283fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x283fb8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x283fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x283fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283fc0: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x283fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x283fc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x283fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x283fc8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x283fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x283fcc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x283FCCu;
    {
        const bool branch_taken_0x283fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FCCu;
        // 0x283fd0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fcc) {
            ctx->pc = 0x284018u;
            goto label_284018;
        }
    }
    ctx->pc = 0x283FD4u;
    // 0x283fd4: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x283FD4u;
    {
        const bool branch_taken_0x283fd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x283FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FD4u;
        // 0x283fd8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fd4) {
            ctx->pc = 0x284018u;
            goto label_284018;
        }
    }
    ctx->pc = 0x283FDCu;
    // 0x283fdc: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x283fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x283fe0: 0x8c63caa0  lw          $v1, -0x3560($v1)
    ctx->pc = 0x283fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953632)));
    // 0x283fe4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283FE4u;
    {
        const bool branch_taken_0x283fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FE4u;
        // 0x283fe8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fe4) {
            ctx->pc = 0x284000u;
            goto label_284000;
        }
    }
    ctx->pc = 0x283FECu;
    // 0x283fec: 0xc0a0fb2  jal         func_283EC8
    ctx->pc = 0x283FECu;
    SET_GPR_U32(ctx, 31, 0x283FF4u);
    ctx->pc = 0x283FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283FECu;
    // 0x283ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283EC8u, 0x283FECu, 0x283FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FF4u;
label_283ff4:
    // 0x283ff4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x283FF4u;
    {
        const bool branch_taken_0x283ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FF4u;
        // 0x283ff8: 0xa24001bd  sb          $zero, 0x1BD($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 445), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ff4) {
            ctx->pc = 0x284054u;
            goto label_284054;
        }
    }
    ctx->pc = 0x283FFCu;
    // 0x283ffc: 0x0  nop
    ctx->pc = 0x283ffcu;
    // NOP
label_284000:
    // 0x284000: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x284000u;
    {
        const bool branch_taken_0x284000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284000) {
            ctx->pc = 0x284004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284000u;
            // 0x284004: 0xa24001bd  sb          $zero, 0x1BD($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 445), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284054u;
            goto label_284054;
        }
    }
    ctx->pc = 0x284008u;
    // 0x284008: 0xc0a0b26  jal         func_282C98
    ctx->pc = 0x284008u;
    SET_GPR_U32(ctx, 31, 0x284010u);
    ctx->pc = 0x28400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284008u;
    // 0x28400c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C98u, 0x284008u, 0x284010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284010u;
label_284010:
    // 0x284010: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x284010u;
    {
        const bool branch_taken_0x284010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284010u;
        // 0x284014: 0xa24001bd  sb          $zero, 0x1BD($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 445), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284010) {
            ctx->pc = 0x284054u;
            goto label_284054;
        }
    }
    ctx->pc = 0x284018u;
label_284018:
    // 0x284018: 0xc09d940  jal         func_276500
    ctx->pc = 0x284018u;
    SET_GPR_U32(ctx, 31, 0x284020u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x284018u, 0x284020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284020u;
label_284020:
    // 0x284020: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284020u;
    {
        const bool branch_taken_0x284020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284020u;
        // 0x284024: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284020) {
            ctx->pc = 0x284040u;
            goto label_284040;
        }
    }
    ctx->pc = 0x284028u;
    // 0x284028: 0x9602003c  lhu         $v0, 0x3C($s0)
    ctx->pc = 0x284028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x28402c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28402cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x284030: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x284030u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x284034: 0xac23caa0  sw          $v1, -0x3560($at)
    ctx->pc = 0x284034u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953632), GPR_U32(ctx, 3));
    // 0x284038: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x284038u;
    {
        const bool branch_taken_0x284038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284038u;
        // 0x28403c: 0xa24001bd  sb          $zero, 0x1BD($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 445), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284038) {
            ctx->pc = 0x284054u;
            goto label_284054;
        }
    }
    ctx->pc = 0x284040u;
label_284040:
    // 0x284040: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x284040u;
    {
        const bool branch_taken_0x284040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x284040) {
            ctx->pc = 0x284044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284040u;
            // 0x284044: 0xa24001bd  sb          $zero, 0x1BD($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 445), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284054u;
            goto label_284054;
        }
    }
    ctx->pc = 0x284048u;
    // 0x284048: 0xc0a0fb2  jal         func_283EC8
    ctx->pc = 0x284048u;
    SET_GPR_U32(ctx, 31, 0x284050u);
    ctx->pc = 0x28404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284048u;
    // 0x28404c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283EC8u, 0x284048u, 0x284050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284050u;
label_284050:
    // 0x284050: 0xa24001bd  sb          $zero, 0x1BD($s2)
    ctx->pc = 0x284050u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 445), (uint8_t)GPR_U32(ctx, 0));
label_284054:
    // 0x284054: 0x26828858  addiu       $v0, $s4, -0x77A8
    ctx->pc = 0x284054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x284058: 0x9645003c  lhu         $a1, 0x3C($s2)
    ctx->pc = 0x284058u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x28405c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28405cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284060: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x284060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x284064: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x284064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x284068: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x284068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28406c: 0x4802b  sltu        $s0, $zero, $a0
    ctx->pc = 0x28406cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x284070: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x284070u;
    {
        const bool branch_taken_0x284070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x284070) {
            ctx->pc = 0x2840E0u;
            goto label_2840e0;
        }
    }
    ctx->pc = 0x284078u;
    // 0x284078: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x284078u;
    {
        const bool branch_taken_0x284078 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284078u;
        // 0x28407c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284078) {
            ctx->pc = 0x2840E0u;
            goto label_2840e0;
        }
    }
    ctx->pc = 0x284080u;
    // 0x284080: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x284080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x284084: 0x8c63caa0  lw          $v1, -0x3560($v1)
    ctx->pc = 0x284084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953632)));
    // 0x284088: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x284088u;
    {
        const bool branch_taken_0x284088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284088u;
        // 0x28408c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284088) {
            ctx->pc = 0x2840B8u;
            goto label_2840b8;
        }
    }
    ctx->pc = 0x284090u;
    // 0x284090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x284090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284094: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x284094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28409c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28409cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2840a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2840a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2840a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2840a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2840a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2840a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2840ac: 0x80a0fb2  j           func_283EC8
    ctx->pc = 0x2840ACu;
    ctx->pc = 0x2840B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2840ACu;
    // 0x2840b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283EC8u;
    sub_00283EC8_0x283ec8(rdram, ctx, runtime); return;
    ctx->pc = 0x2840B4u;
    // 0x2840b4: 0x0  nop
    ctx->pc = 0x2840b4u;
    // NOP
label_2840b8:
    // 0x2840b8: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2840B8u;
    {
        const bool branch_taken_0x2840b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2840BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840B8u;
        // 0x2840bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840b8) {
            ctx->pc = 0x28411Cu;
            goto label_28411c;
        }
    }
    ctx->pc = 0x2840C0u;
    // 0x2840c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2840c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2840c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2840c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2840c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2840cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2840ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2840d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2840d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2840d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2840d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2840d8: 0x80a0b26  j           func_282C98
    ctx->pc = 0x2840D8u;
    ctx->pc = 0x2840DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2840D8u;
    // 0x2840dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282C98u;
    sub_00282C98_0x282c98(rdram, ctx, runtime); return;
    ctx->pc = 0x2840E0u;
label_2840e0:
    // 0x2840e0: 0xc09d940  jal         func_276500
    ctx->pc = 0x2840E0u;
    SET_GPR_U32(ctx, 31, 0x2840E8u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x2840E0u, 0x2840E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2840E8u;
label_2840e8:
    // 0x2840e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2840E8u;
    {
        const bool branch_taken_0x2840e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840E8u;
        // 0x2840ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840e8) {
            ctx->pc = 0x284108u;
            goto label_284108;
        }
    }
    ctx->pc = 0x2840F0u;
    // 0x2840f0: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x2840f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2840f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2840f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2840f8: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x2840f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2840fc: 0xac23caa0  sw          $v1, -0x3560($at)
    ctx->pc = 0x2840fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953632), GPR_U32(ctx, 3));
    // 0x284100: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x284100u;
    {
        const bool branch_taken_0x284100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284100u;
        // 0x284104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284100) {
            ctx->pc = 0x28411Cu;
            goto label_28411c;
        }
    }
    ctx->pc = 0x284108u;
label_284108:
    // 0x284108: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284108u;
    {
        const bool branch_taken_0x284108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284108u;
        // 0x28410c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284108) {
            ctx->pc = 0x28411Cu;
            goto label_28411c;
        }
    }
    ctx->pc = 0x284110u;
    // 0x284110: 0xc0a0fb2  jal         func_283EC8
    ctx->pc = 0x284110u;
    SET_GPR_U32(ctx, 31, 0x284118u);
    ctx->pc = 0x284114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284110u;
    // 0x284114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283EC8u, 0x284110u, 0x284118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284118u;
label_284118:
    // 0x284118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28411c:
    // 0x28411c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28411cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x284120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x284120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284124: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x284124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284128: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x284128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28412c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x28412cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284130: 0x3e00008  jr          $ra
    ctx->pc = 0x284130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284130u;
        // 0x284134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284138u;
    // 0x284138: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x284138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28413c: 0x8cc40048  lw          $a0, 0x48($a2)
    ctx->pc = 0x28413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x284140: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284140u;
    {
        const bool branch_taken_0x284140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x284144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284140u;
        // 0x284144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284140) {
            ctx->pc = 0x284150u;
            goto label_284150;
        }
    }
    ctx->pc = 0x284148u;
    // 0x284148: 0x90c201bc  lbu         $v0, 0x1BC($a2)
    ctx->pc = 0x284148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 444)));
    // 0x28414c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28414cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_284150:
    // 0x284150: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284150u;
    {
        const bool branch_taken_0x284150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284150) {
            ctx->pc = 0x284178u;
            goto label_284178;
        }
    }
    ctx->pc = 0x284158u;
    // 0x284158: 0x94c5003c  lhu         $a1, 0x3C($a2)
    ctx->pc = 0x284158u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x28415c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x28415cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x284160: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x284160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x284164: 0x8c42caa0  lw          $v0, -0x3560($v0)
    ctx->pc = 0x284164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953632)));
    // 0x284168: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x284168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x28416c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x28416cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x284170: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x284170u;
    {
        const bool branch_taken_0x284170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284170u;
        // 0x284174: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284170) {
            ctx->pc = 0x2841BCu;
            goto label_2841bc;
        }
    }
    ctx->pc = 0x284178u;
label_284178:
    // 0x284178: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284178u;
    {
        const bool branch_taken_0x284178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284178u;
        // 0x28417c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284178) {
            ctx->pc = 0x284198u;
            goto label_284198;
        }
    }
    ctx->pc = 0x284180u;
    // 0x284180: 0x90c301bc  lbu         $v1, 0x1BC($a2)
    ctx->pc = 0x284180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 444)));
    // 0x284184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284188: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284188u;
    {
        const bool branch_taken_0x284188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284188) {
            ctx->pc = 0x284198u;
            goto label_284198;
        }
    }
    ctx->pc = 0x284190u;
    // 0x284190: 0x90c201bd  lbu         $v0, 0x1BD($a2)
    ctx->pc = 0x284190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 445)));
    // 0x284194: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x284194u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_284198:
    // 0x284198: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x284198u;
    {
        const bool branch_taken_0x284198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284198u;
        // 0x28419c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284198) {
            ctx->pc = 0x2841D8u;
            goto label_2841d8;
        }
    }
    ctx->pc = 0x2841A0u;
    // 0x2841a0: 0x94c5003c  lhu         $a1, 0x3C($a2)
    ctx->pc = 0x2841a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x2841a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2841a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2841a8: 0x7c2021  addu        $a0, $v1, $gp
    ctx->pc = 0x2841a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x2841ac: 0x8c84caa0  lw          $a0, -0x3560($a0)
    ctx->pc = 0x2841acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953632)));
    // 0x2841b0: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2841B0u;
    {
        const bool branch_taken_0x2841b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2841B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841B0u;
        // 0x2841b4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841b0) {
            ctx->pc = 0x2841D8u;
            goto label_2841d8;
        }
    }
    ctx->pc = 0x2841B8u;
    // 0x2841b8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2841b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2841bc:
    // 0x2841bc: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x2841bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x2841c0: 0xac22cab8  sw          $v0, -0x3548($at)
    ctx->pc = 0x2841c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953656), GPR_U32(ctx, 2));
    // 0x2841c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2841c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2841c8: 0x94c2003c  lhu         $v0, 0x3C($a2)
    ctx->pc = 0x2841c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x2841cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2841ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2841d0: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x2841d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2841d4: 0xac24ca98  sw          $a0, -0x3568($at)
    ctx->pc = 0x2841d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953624), GPR_U32(ctx, 4));
label_2841d8:
    // 0x2841d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2841D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2841D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2841E0u;
    // 0x2841e0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2841e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2841e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2841E4u;
    {
        const bool branch_taken_0x2841e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2841E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841E4u;
        // 0x2841e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841e4) {
            ctx->pc = 0x2841F4u;
            goto label_2841f4;
        }
    }
    ctx->pc = 0x2841ECu;
    // 0x2841ec: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x2841ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x2841f0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2841f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2841f4:
    // 0x2841f4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2841F4u;
    {
        const bool branch_taken_0x2841f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841F4u;
        // 0x2841f8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841f4) {
            ctx->pc = 0x28422Cu;
            goto label_28422c;
        }
    }
    ctx->pc = 0x2841FCu;
    // 0x2841fc: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x2841fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x284200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x284204: 0x5c2821  addu        $a1, $v0, $gp
    ctx->pc = 0x284204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x284208: 0x8ca5caa0  lw          $a1, -0x3560($a1)
    ctx->pc = 0x284208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953632)));
    // 0x28420c: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28420Cu;
    {
        const bool branch_taken_0x28420c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x284210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28420Cu;
        // 0x284210: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28420c) {
            ctx->pc = 0x28422Cu;
            goto label_28422c;
        }
    }
    ctx->pc = 0x284214u;
    // 0x284214: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x284214u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x284218: 0xac23cab8  sw          $v1, -0x3548($at)
    ctx->pc = 0x284218u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953656), GPR_U32(ctx, 3));
    // 0x28421c: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x28421cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x284220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x284224: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x284224u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x284228: 0xac25ca98  sw          $a1, -0x3568($at)
    ctx->pc = 0x284228u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953624), GPR_U32(ctx, 5));
label_28422c:
    // 0x28422c: 0x3e00008  jr          $ra
    ctx->pc = 0x28422Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28422Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284234u;
    // 0x284234: 0x0  nop
    ctx->pc = 0x284234u;
    // NOP
    ctx->pc = 0x284238u;
}
