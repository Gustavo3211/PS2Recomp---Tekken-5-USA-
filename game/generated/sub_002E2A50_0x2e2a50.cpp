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

// Function: sub_002E2A50
// Address: 0x2e2a50 - 0x2e2d50
void sub_002E2A50_0x2e2a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2A50_0x2e2a50");
#endif

    switch (ctx->pc) {
        case 0x2e2aacu: goto label_2e2aac;
        case 0x2e2abcu: goto label_2e2abc;
        case 0x2e2b70u: goto label_2e2b70;
        default: break;
    }

    ctx->pc = 0x2e2a50u;

    // 0x2e2a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e2a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e2a54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e2a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e2a58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e2a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e2a5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e2a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2a60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e2a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e2a64: 0x26510074  addiu       $s1, $s2, 0x74
    ctx->pc = 0x2e2a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x2e2a68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2a6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e2a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e2a70: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x2e2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x2e2a74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e2a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e2a78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2A78u;
    {
        const bool branch_taken_0x2e2a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A78u;
        // 0x2e2a7c: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a78) {
            ctx->pc = 0x2E2A90u;
            goto label_2e2a90;
        }
    }
    ctx->pc = 0x2E2A80u;
    // 0x2e2a80: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e2a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e2a84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e2a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e2a88: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2A88u;
    {
        const bool branch_taken_0x2e2a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2a88) {
            ctx->pc = 0x2E2A9Cu;
            goto label_2e2a9c;
        }
    }
    ctx->pc = 0x2E2A90u;
label_2e2a90:
    // 0x2e2a90: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e2a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2e2a94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2a98: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e2a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e2a9c:
    // 0x2e2a9c: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E2A9Cu;
    {
        const bool branch_taken_0x2e2a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A9Cu;
        // 0x2e2aa0: 0x2650007c  addiu       $s0, $s2, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a9c) {
            ctx->pc = 0x2E2B30u;
            goto label_2e2b30;
        }
    }
    ctx->pc = 0x2E2AA4u;
    // 0x2e2aa4: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x2E2AA4u;
    SET_GPR_U32(ctx, 31, 0x2E2AACu);
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x2E2AA4u, 0x2E2AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2AACu;
label_2e2aac:
    // 0x2e2aac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2AACu;
    {
        const bool branch_taken_0x2e2aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2aac) {
            ctx->pc = 0x2E2AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2AACu;
            // 0x2e2ab0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2AC4u;
            goto label_2e2ac4;
        }
    }
    ctx->pc = 0x2E2AB4u;
    // 0x2e2ab4: 0xc08f110  jal         func_23C440
    ctx->pc = 0x2E2AB4u;
    SET_GPR_U32(ctx, 31, 0x2E2ABCu);
    ctx->pc = 0x2E2AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2AB4u;
    // 0x2e2ab8: 0x8e500070  lw          $s0, 0x70($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C440u, 0x2E2AB4u, 0x2E2ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2ABCu;
label_2e2abc:
    // 0x2e2abc: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2ABCu;
    {
        const bool branch_taken_0x2e2abc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2ABCu;
        // 0x2e2ac0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2abc) {
            ctx->pc = 0x2E2AF8u;
            goto label_2e2af8;
        }
    }
    ctx->pc = 0x2E2AC4u;
label_2e2ac4:
    // 0x2e2ac4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2AC4u;
    {
        const bool branch_taken_0x2e2ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ac4) {
            ctx->pc = 0x2E2AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2AC4u;
            // 0x2e2ac8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2AE4u;
            goto label_2e2ae4;
        }
    }
    ctx->pc = 0x2E2ACCu;
    // 0x2e2acc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e2ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ad4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e2ad8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2AD8u;
    {
        const bool branch_taken_0x2e2ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2ad8) {
            ctx->pc = 0x2E2ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2AD8u;
            // 0x2e2adc: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2AF0u;
            goto label_2e2af0;
        }
    }
    ctx->pc = 0x2E2AE0u;
    // 0x2e2ae0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e2ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e2ae4:
    // 0x2e2ae4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ae8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2e2aec: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2e2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2af0:
    // 0x2e2af0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E2AF0u;
    {
        const bool branch_taken_0x2e2af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2AF0u;
        // 0x2e2af4: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2af0) {
            ctx->pc = 0x2E2B28u;
            goto label_2e2b28;
        }
    }
    ctx->pc = 0x2E2AF8u;
label_2e2af8:
    // 0x2e2af8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2AF8u;
    {
        const bool branch_taken_0x2e2af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2AF8u;
        // 0x2e2afc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2af8) {
            ctx->pc = 0x2E2B10u;
            goto label_2e2b10;
        }
    }
    ctx->pc = 0x2E2B00u;
    // 0x2e2b00: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2b04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e2b08: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2B08u;
    {
        const bool branch_taken_0x2e2b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2b08) {
            ctx->pc = 0x2E2B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2B08u;
            // 0x2e2b0c: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2B20u;
            goto label_2e2b20;
        }
    }
    ctx->pc = 0x2E2B10u;
label_2e2b10:
    // 0x2e2b10: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e2b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2e2b14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2b18: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2e2b1c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2e2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2b20:
    // 0x2e2b20: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e2b24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e2b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e2b28:
    // 0x2e2b28: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x2e2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x2e2b2c: 0x2650007c  addiu       $s0, $s2, 0x7C
    ctx->pc = 0x2e2b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
label_2e2b30:
    // 0x2e2b30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e2b34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2B34u;
    {
        const bool branch_taken_0x2e2b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B34u;
        // 0x2e2b38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b34) {
            ctx->pc = 0x2E2B4Cu;
            goto label_2e2b4c;
        }
    }
    ctx->pc = 0x2E2B3Cu;
    // 0x2e2b3c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2b40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e2b44: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2B44u;
    {
        const bool branch_taken_0x2e2b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2b44) {
            ctx->pc = 0x2E2B58u;
            goto label_2e2b58;
        }
    }
    ctx->pc = 0x2E2B4Cu;
label_2e2b4c:
    // 0x2e2b4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e2b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e2b50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2b54: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e2b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e2b58:
    // 0x2e2b58: 0x50800023  beql        $a0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E2B58u;
    {
        const bool branch_taken_0x2e2b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b58) {
            ctx->pc = 0x2E2B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2B58u;
            // 0x2e2b5c: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2BE8u;
            goto label_2e2be8;
        }
    }
    ctx->pc = 0x2E2B60u;
    // 0x2e2b60: 0x52600013  beql        $s3, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E2B60u;
    {
        const bool branch_taken_0x2e2b60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b60) {
            ctx->pc = 0x2E2B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2B60u;
            // 0x2e2b64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2BB0u;
            goto label_2e2bb0;
        }
    }
    ctx->pc = 0x2E2B68u;
    // 0x2e2b68: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x2E2B68u;
    SET_GPR_U32(ctx, 31, 0x2E2B70u);
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x2E2B68u, 0x2E2B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B70u;
label_2e2b70:
    // 0x2e2b70: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E2B70u;
    {
        const bool branch_taken_0x2e2b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B70u;
        // 0x2e2b74: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b70) {
            ctx->pc = 0x2E2BB0u;
            goto label_2e2bb0;
        }
    }
    ctx->pc = 0x2E2B78u;
    // 0x2e2b78: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2B78u;
    {
        const bool branch_taken_0x2e2b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2b78) {
            ctx->pc = 0x2E2B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2B78u;
            // 0x2e2b7c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2B98u;
            goto label_2e2b98;
        }
    }
    ctx->pc = 0x2E2B80u;
    // 0x2e2b80: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e2b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2b88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e2b8c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2B8Cu;
    {
        const bool branch_taken_0x2e2b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2b8c) {
            ctx->pc = 0x2E2B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2B8Cu;
            // 0x2e2b90: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2BA4u;
            goto label_2e2ba4;
        }
    }
    ctx->pc = 0x2E2B94u;
    // 0x2e2b94: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e2b98:
    // 0x2e2b98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2b9c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e2ba0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2e2ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2ba4:
    // 0x2e2ba4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E2BA4u;
    {
        const bool branch_taken_0x2e2ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BA4u;
        // 0x2e2ba8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ba4) {
            ctx->pc = 0x2E2BE0u;
            goto label_2e2be0;
        }
    }
    ctx->pc = 0x2E2BACu;
    // 0x2e2bac: 0x0  nop
    ctx->pc = 0x2e2bacu;
    // NOP
label_2e2bb0:
    // 0x2e2bb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2BB0u;
    {
        const bool branch_taken_0x2e2bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BB0u;
        // 0x2e2bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2bb0) {
            ctx->pc = 0x2E2BC8u;
            goto label_2e2bc8;
        }
    }
    ctx->pc = 0x2E2BB8u;
    // 0x2e2bb8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2bbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e2bc0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2BC0u;
    {
        const bool branch_taken_0x2e2bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2bc0) {
            ctx->pc = 0x2E2BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2BC0u;
            // 0x2e2bc4: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2BD8u;
            goto label_2e2bd8;
        }
    }
    ctx->pc = 0x2E2BC8u;
label_2e2bc8:
    // 0x2e2bc8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e2bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e2bcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2bd0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e2bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e2bd4: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2e2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2bd8:
    // 0x2e2bd8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e2bdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e2bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e2be0:
    // 0x2e2be0: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x2e2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x2e2be4: 0x26440084  addiu       $a0, $s2, 0x84
    ctx->pc = 0x2e2be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
label_2e2be8:
    // 0x2e2be8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e2be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2bec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2BECu;
    {
        const bool branch_taken_0x2e2bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BECu;
        // 0x2e2bf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2bec) {
            ctx->pc = 0x2E2C04u;
            goto label_2e2c04;
        }
    }
    ctx->pc = 0x2E2BF4u;
    // 0x2e2bf4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2bf8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2bfc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2BFCu;
    {
        const bool branch_taken_0x2e2bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2bfc) {
            ctx->pc = 0x2E2C10u;
            goto label_2e2c10;
        }
    }
    ctx->pc = 0x2E2C04u;
label_2e2c04:
    // 0x2e2c04: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c0c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e2c10:
    // 0x2e2c10: 0x50a0001f  beql        $a1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E2C10u;
    {
        const bool branch_taken_0x2e2c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c10) {
            ctx->pc = 0x2E2C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2C10u;
            // 0x2e2c14: 0x2644008c  addiu       $a0, $s2, 0x8C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C90u;
            goto label_2e2c90;
        }
    }
    ctx->pc = 0x2E2C18u;
    // 0x2e2c18: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2E2C18u;
    {
        const bool branch_taken_0x2e2c18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C18u;
        // 0x2e2c1c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c18) {
            ctx->pc = 0x2E2C58u;
            goto label_2e2c58;
        }
    }
    ctx->pc = 0x2E2C20u;
    // 0x2e2c20: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2C20u;
    {
        const bool branch_taken_0x2e2c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c20) {
            ctx->pc = 0x2E2C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2C20u;
            // 0x2e2c24: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C40u;
            goto label_2e2c40;
        }
    }
    ctx->pc = 0x2E2C28u;
    // 0x2e2c28: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2c2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e2c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2c34: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2C34u;
    {
        const bool branch_taken_0x2e2c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2c34) {
            ctx->pc = 0x2E2C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2C34u;
            // 0x2e2c38: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C4Cu;
            goto label_2e2c4c;
        }
    }
    ctx->pc = 0x2E2C3Cu;
    // 0x2e2c3c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e2c40:
    // 0x2e2c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c44: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2c48: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2c4c:
    // 0x2e2c4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E2C4Cu;
    {
        const bool branch_taken_0x2e2c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C4Cu;
        // 0x2e2c50: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c4c) {
            ctx->pc = 0x2E2C88u;
            goto label_2e2c88;
        }
    }
    ctx->pc = 0x2E2C54u;
    // 0x2e2c54: 0x0  nop
    ctx->pc = 0x2e2c54u;
    // NOP
label_2e2c58:
    // 0x2e2c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2C58u;
    {
        const bool branch_taken_0x2e2c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C58u;
        // 0x2e2c5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c58) {
            ctx->pc = 0x2E2C70u;
            goto label_2e2c70;
        }
    }
    ctx->pc = 0x2E2C60u;
    // 0x2e2c60: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2c64: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2c68: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2C68u;
    {
        const bool branch_taken_0x2e2c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2c68) {
            ctx->pc = 0x2E2C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2C68u;
            // 0x2e2c6c: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C80u;
            goto label_2e2c80;
        }
    }
    ctx->pc = 0x2E2C70u;
label_2e2c70:
    // 0x2e2c70: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e2c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2c7c: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2c80:
    // 0x2e2c80: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e2c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e2c84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e2c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e2c88:
    // 0x2e2c88: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x2e2c8c: 0x2644008c  addiu       $a0, $s2, 0x8C
    ctx->pc = 0x2e2c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
label_2e2c90:
    // 0x2e2c90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2c94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2C94u;
    {
        const bool branch_taken_0x2e2c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C94u;
        // 0x2e2c98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c94) {
            ctx->pc = 0x2E2CACu;
            goto label_2e2cac;
        }
    }
    ctx->pc = 0x2E2C9Cu;
    // 0x2e2c9c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2ca0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2ca4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2CA4u;
    {
        const bool branch_taken_0x2e2ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2ca4) {
            ctx->pc = 0x2E2CB8u;
            goto label_2e2cb8;
        }
    }
    ctx->pc = 0x2E2CACu;
label_2e2cac:
    // 0x2e2cac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cb4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e2cb8:
    // 0x2e2cb8: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E2CB8u;
    {
        const bool branch_taken_0x2e2cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CB8u;
        // 0x2e2cbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2cb8) {
            ctx->pc = 0x2E2D38u;
            goto label_2e2d38;
        }
    }
    ctx->pc = 0x2E2CC0u;
    // 0x2e2cc0: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2E2CC0u;
    {
        const bool branch_taken_0x2e2cc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CC0u;
        // 0x2e2cc4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2cc0) {
            ctx->pc = 0x2E2D00u;
            goto label_2e2d00;
        }
    }
    ctx->pc = 0x2E2CC8u;
    // 0x2e2cc8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2CC8u;
    {
        const bool branch_taken_0x2e2cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2cc8) {
            ctx->pc = 0x2E2CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2CC8u;
            // 0x2e2ccc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2CE8u;
            goto label_2e2ce8;
        }
    }
    ctx->pc = 0x2E2CD0u;
    // 0x2e2cd0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e2cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cd8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2cdc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2CDCu;
    {
        const bool branch_taken_0x2e2cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2cdc) {
            ctx->pc = 0x2E2CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2CDCu;
            // 0x2e2ce0: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2CF4u;
            goto label_2e2cf4;
        }
    }
    ctx->pc = 0x2E2CE4u;
    // 0x2e2ce4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e2ce8:
    // 0x2e2ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2cf0: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2cf4:
    // 0x2e2cf4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E2CF4u;
    {
        const bool branch_taken_0x2e2cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CF4u;
        // 0x2e2cf8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2cf4) {
            ctx->pc = 0x2E2D30u;
            goto label_2e2d30;
        }
    }
    ctx->pc = 0x2E2CFCu;
    // 0x2e2cfc: 0x0  nop
    ctx->pc = 0x2e2cfcu;
    // NOP
label_2e2d00:
    // 0x2e2d00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2D00u;
    {
        const bool branch_taken_0x2e2d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D00u;
        // 0x2e2d04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d00) {
            ctx->pc = 0x2E2D18u;
            goto label_2e2d18;
        }
    }
    ctx->pc = 0x2E2D08u;
    // 0x2e2d08: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2d0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2d10: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2D10u;
    {
        const bool branch_taken_0x2e2d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2d10) {
            ctx->pc = 0x2E2D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2D10u;
            // 0x2e2d14: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2D28u;
            goto label_2e2d28;
        }
    }
    ctx->pc = 0x2E2D18u;
label_2e2d18:
    // 0x2e2d18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e2d1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d20: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2d24: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2d28:
    // 0x2e2d28: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e2d2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e2d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e2d30:
    // 0x2e2d30: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e2d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x2e2d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2d38:
    // 0x2e2d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e2d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2d3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e2d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2d40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e2d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2d44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e2d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D48u;
        // 0x2e2d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2D50u;
}
