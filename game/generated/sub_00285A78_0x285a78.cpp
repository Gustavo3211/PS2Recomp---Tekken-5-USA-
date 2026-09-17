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

// Function: sub_00285A78
// Address: 0x285a78 - 0x285bf0
void sub_00285A78_0x285a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285A78_0x285a78");
#endif

    switch (ctx->pc) {
        case 0x285b08u: goto label_285b08;
        case 0x285b10u: goto label_285b10;
        case 0x285b24u: goto label_285b24;
        case 0x285ba0u: goto label_285ba0;
        case 0x285bc0u: goto label_285bc0;
        case 0x285bc8u: goto label_285bc8;
        case 0x285bd8u: goto label_285bd8;
        default: break;
    }

    ctx->pc = 0x285a78u;

    // 0x285a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x285a7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x285a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285a80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x285a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x285a84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x285a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285a8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x285a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x285a90: 0x10a2002b  beq         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x285A90u;
    {
        const bool branch_taken_0x285a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x285A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A90u;
        // 0x285a94: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a90) {
            ctx->pc = 0x285B40u;
            goto label_285b40;
        }
    }
    ctx->pc = 0x285A98u;
    // 0x285a98: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x285a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x285a9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285A9Cu;
    {
        const bool branch_taken_0x285a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A9Cu;
        // 0x285aa0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a9c) {
            ctx->pc = 0x285AB8u;
            goto label_285ab8;
        }
    }
    ctx->pc = 0x285AA4u;
    // 0x285aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285aa8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x285AA8u;
    {
        const bool branch_taken_0x285aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x285AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AA8u;
        // 0x285aac: 0x3c12003e  lui         $s2, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285aa8) {
            ctx->pc = 0x285AC8u;
            goto label_285ac8;
        }
    }
    ctx->pc = 0x285AB0u;
    // 0x285ab0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x285AB0u;
    {
        const bool branch_taken_0x285ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AB0u;
        // 0x285ab4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ab0) {
            ctx->pc = 0x285BCCu;
            goto label_285bcc;
        }
    }
    ctx->pc = 0x285AB8u;
label_285ab8:
    // 0x285ab8: 0x10a20025  beq         $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x285AB8u;
    {
        const bool branch_taken_0x285ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x285ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AB8u;
        // 0x285abc: 0x3c12003e  lui         $s2, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ab8) {
            ctx->pc = 0x285B50u;
            goto label_285b50;
        }
    }
    ctx->pc = 0x285AC0u;
    // 0x285ac0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x285AC0u;
    {
        const bool branch_taken_0x285ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AC0u;
        // 0x285ac4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ac0) {
            ctx->pc = 0x285BCCu;
            goto label_285bcc;
        }
    }
    ctx->pc = 0x285AC8u;
label_285ac8:
    // 0x285ac8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x285ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x285acc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x285accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x285ad0: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x285ad0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x285ad4: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x285AD4u;
    {
        const bool branch_taken_0x285ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ad4) {
            ctx->pc = 0x285AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285AD4u;
            // 0x285ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285B38u;
            goto label_285b38;
        }
    }
    ctx->pc = 0x285ADCu;
    // 0x285adc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x285ae0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x285ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x285ae4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x285ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285ae8: 0x8c6396f0  lw          $v1, -0x6910($v1)
    ctx->pc = 0x285ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940400)));
    // 0x285aec: 0x600008  jr          $v1
    ctx->pc = 0x285AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285AF8u: goto label_285af8;
            case 0x285B18u: goto label_285b18;
            case 0x285B30u: goto label_285b30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285AECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x285AF4u;
    // 0x285af4: 0x0  nop
    ctx->pc = 0x285af4u;
    // NOP
label_285af8:
    // 0x285af8: 0x3c12003e  lui         $s2, 0x3E
    ctx->pc = 0x285af8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
    // 0x285afc: 0x26504520  addiu       $s0, $s2, 0x4520
    ctx->pc = 0x285afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 17696));
    // 0x285b00: 0xc0bc190  jal         func_2F0640
    ctx->pc = 0x285B00u;
    SET_GPR_U32(ctx, 31, 0x285B08u);
    ctx->pc = 0x285B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285B00u;
    // 0x285b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0640u, 0x285B00u, 0x285B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B08u;
label_285b08:
    // 0x285b08: 0xc0bc1c0  jal         func_2F0700
    ctx->pc = 0x285B08u;
    SET_GPR_U32(ctx, 31, 0x285B10u);
    ctx->pc = 0x285B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285B08u;
    // 0x285b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0700u, 0x285B08u, 0x285B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B10u;
label_285b10:
    // 0x285b10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x285B10u;
    {
        const bool branch_taken_0x285b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B10u;
        // 0x285b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b10) {
            ctx->pc = 0x285B38u;
            goto label_285b38;
        }
    }
    ctx->pc = 0x285B18u;
label_285b18:
    // 0x285b18: 0x3c12003e  lui         $s2, 0x3E
    ctx->pc = 0x285b18u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
    // 0x285b1c: 0xc0bc19a  jal         func_2F0668
    ctx->pc = 0x285B1Cu;
    SET_GPR_U32(ctx, 31, 0x285B24u);
    ctx->pc = 0x285B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285B1Cu;
    // 0x285b20: 0x26444520  addiu       $a0, $s2, 0x4520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0668u, 0x285B1Cu, 0x285B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B24u;
label_285b24:
    // 0x285b24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285B24u;
    {
        const bool branch_taken_0x285b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B24u;
        // 0x285b28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b24) {
            ctx->pc = 0x285B38u;
            goto label_285b38;
        }
    }
    ctx->pc = 0x285B2Cu;
    // 0x285b2c: 0x0  nop
    ctx->pc = 0x285b2cu;
    // NOP
label_285b30:
    // 0x285b30: 0x3c12003e  lui         $s2, 0x3E
    ctx->pc = 0x285b30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
    // 0x285b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285b38:
    // 0x285b38: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x285B38u;
    {
        const bool branch_taken_0x285b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B38u;
        // 0x285b3c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b38) {
            ctx->pc = 0x285BC8u;
            goto label_285bc8;
        }
    }
    ctx->pc = 0x285B40u;
label_285b40:
    // 0x285b40: 0xae250054  sw          $a1, 0x54($s1)
    ctx->pc = 0x285b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 5));
    // 0x285b44: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x285B44u;
    {
        const bool branch_taken_0x285b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B44u;
        // 0x285b48: 0x3c12003e  lui         $s2, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b44) {
            ctx->pc = 0x285BC8u;
            goto label_285bc8;
        }
    }
    ctx->pc = 0x285B4Cu;
    // 0x285b4c: 0x0  nop
    ctx->pc = 0x285b4cu;
    // NOP
label_285b50:
    // 0x285b50: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x285b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x285b54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x285b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x285b58: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x285b58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x285b5c: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x285B5Cu;
    {
        const bool branch_taken_0x285b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285b5c) {
            ctx->pc = 0x285B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285B5Cu;
            // 0x285b60: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285BACu;
            goto label_285bac;
        }
    }
    ctx->pc = 0x285B64u;
    // 0x285b64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x285b68: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x285b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x285b6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x285b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285b70: 0x8c639710  lw          $v1, -0x68F0($v1)
    ctx->pc = 0x285b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940432)));
    // 0x285b74: 0x600008  jr          $v1
    ctx->pc = 0x285B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285B80u: goto label_285b80;
            case 0x285B88u: goto label_285b88;
            case 0x285B90u: goto label_285b90;
            case 0x285BA8u: goto label_285ba8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285B74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x285B7Cu;
    // 0x285b7c: 0x0  nop
    ctx->pc = 0x285b7cu;
    // NOP
label_285b80:
    // 0x285b80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x285B80u;
    {
        const bool branch_taken_0x285b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B80u;
        // 0x285b84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b80) {
            ctx->pc = 0x285BACu;
            goto label_285bac;
        }
    }
    ctx->pc = 0x285B88u;
label_285b88:
    // 0x285b88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x285B88u;
    {
        const bool branch_taken_0x285b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B88u;
        // 0x285b8c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b88) {
            ctx->pc = 0x285BACu;
            goto label_285bac;
        }
    }
    ctx->pc = 0x285B90u;
label_285b90:
    // 0x285b90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x285b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x285b94: 0x2484f5d4  addiu       $a0, $a0, -0xA2C
    ctx->pc = 0x285b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964692));
    // 0x285b98: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x285B98u;
    SET_GPR_U32(ctx, 31, 0x285BA0u);
    ctx->pc = 0x285B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285B98u;
    // 0x285b9c: 0x80850001  lb          $a1, 0x1($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x285B98u, 0x285BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BA0u;
label_285ba0:
    // 0x285ba0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285BA0u;
    {
        const bool branch_taken_0x285ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BA0u;
        // 0x285ba4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ba0) {
            ctx->pc = 0x285BACu;
            goto label_285bac;
        }
    }
    ctx->pc = 0x285BA8u;
label_285ba8:
    // 0x285ba8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x285ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_285bac:
    // 0x285bac: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x285bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x285bb0: 0x3c12003e  lui         $s2, 0x3E
    ctx->pc = 0x285bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
    // 0x285bb4: 0x26504520  addiu       $s0, $s2, 0x4520
    ctx->pc = 0x285bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 17696));
    // 0x285bb8: 0xc0bc19a  jal         func_2F0668
    ctx->pc = 0x285BB8u;
    SET_GPR_U32(ctx, 31, 0x285BC0u);
    ctx->pc = 0x285BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285BB8u;
    // 0x285bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0668u, 0x285BB8u, 0x285BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BC0u;
label_285bc0:
    // 0x285bc0: 0xc0bc1c0  jal         func_2F0700
    ctx->pc = 0x285BC0u;
    SET_GPR_U32(ctx, 31, 0x285BC8u);
    ctx->pc = 0x285BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285BC0u;
    // 0x285bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0700u, 0x285BC0u, 0x285BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BC8u;
label_285bc8:
    // 0x285bc8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x285bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_285bcc:
    // 0x285bcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x285bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285bd0: 0xc092668  jal         func_2499A0
    ctx->pc = 0x285BD0u;
    SET_GPR_U32(ctx, 31, 0x285BD8u);
    ctx->pc = 0x285BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285BD0u;
    // 0x285bd4: 0xae404520  sw          $zero, 0x4520($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 17696), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2499A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2499A0u, 0x285BD0u, 0x285BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BD8u;
label_285bd8:
    // 0x285bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285bdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x285bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x285be0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x285be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285be4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x285be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x285be8: 0x3e00008  jr          $ra
    ctx->pc = 0x285BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BE8u;
        // 0x285bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285BF0u;
}
