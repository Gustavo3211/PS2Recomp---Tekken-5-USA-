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

// Function: sub_002D4C48
// Address: 0x2d4c48 - 0x2d4e78
void sub_002D4C48_0x2d4c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4C48_0x2d4c48");
#endif

    switch (ctx->pc) {
        case 0x2d4c7cu: goto label_2d4c7c;
        case 0x2d4cb8u: goto label_2d4cb8;
        case 0x2d4cccu: goto label_2d4ccc;
        case 0x2d4cdcu: goto label_2d4cdc;
        case 0x2d4d1cu: goto label_2d4d1c;
        case 0x2d4d84u: goto label_2d4d84;
        case 0x2d4d94u: goto label_2d4d94;
        case 0x2d4da4u: goto label_2d4da4;
        case 0x2d4db8u: goto label_2d4db8;
        case 0x2d4de0u: goto label_2d4de0;
        case 0x2d4df4u: goto label_2d4df4;
        case 0x2d4e34u: goto label_2d4e34;
        default: break;
    }

    ctx->pc = 0x2d4c48u;

    // 0x2d4c48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d4c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d4c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4c50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d4c54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d4c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d4c58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d4c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d4c5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d4c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d4c60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d4c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d4c64: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d4c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d4c68: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d4c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d4c6c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d4c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2d4c70: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d4c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d4c74: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2D4C74u;
    SET_GPR_U32(ctx, 31, 0x2D4C7Cu);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2D4C74u, 0x2D4C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C7Cu;
label_2d4c7c:
    // 0x2d4c7c: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2D4C7Cu;
    {
        const bool branch_taken_0x2d4c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C7Cu;
        // 0x2d4c80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c7c) {
            ctx->pc = 0x2D4E48u;
            goto label_2d4e48;
        }
    }
    ctx->pc = 0x2D4C84u;
    // 0x2d4c84: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d4c88: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d4c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d4c8c: 0x2454dfb0  addiu       $s4, $v0, -0x2050
    ctx->pc = 0x2d4c8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
    // 0x2d4c90: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d4c94: 0x3c1780ff  lui         $s7, 0x80FF
    ctx->pc = 0x2d4c94u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)33023 << 16));
    // 0x2d4c98: 0x24968858  addiu       $s6, $a0, -0x77A8
    ctx->pc = 0x2d4c98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    // 0x2d4c9c: 0x247388d0  addiu       $s3, $v1, -0x7730
    ctx->pc = 0x2d4c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x2d4ca0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d4ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ca4: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x2d4ca4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x2d4ca8: 0x269e0020  addiu       $fp, $s4, 0x20
    ctx->pc = 0x2d4ca8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2d4cac: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x2d4cacu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x2d4cb0: 0x8ea283c0  lw          $v0, -0x7C40($s5)
    ctx->pc = 0x2d4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2d4cb4: 0x0  nop
    ctx->pc = 0x2d4cb4u;
    // NOP
label_2d4cb8:
    // 0x2d4cb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d4cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d4cbc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4CBCu;
    {
        const bool branch_taken_0x2d4cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CBCu;
        // 0x2d4cc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4cbc) {
            ctx->pc = 0x2D4CE0u;
            goto label_2d4ce0;
        }
    }
    ctx->pc = 0x2D4CC4u;
    // 0x2d4cc4: 0xc09d940  jal         func_276500
    ctx->pc = 0x2D4CC4u;
    SET_GPR_U32(ctx, 31, 0x2D4CCCu);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x2D4CC4u, 0x2D4CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4CCCu;
label_2d4ccc:
    // 0x2d4ccc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4CCCu;
    {
        const bool branch_taken_0x2d4ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CCCu;
        // 0x2d4cd0: 0x8ea383c0  lw          $v1, -0x7C40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ccc) {
            ctx->pc = 0x2D4CE4u;
            goto label_2d4ce4;
        }
    }
    ctx->pc = 0x2D4CD4u;
    // 0x2d4cd4: 0xc0a398c  jal         func_28E630
    ctx->pc = 0x2D4CD4u;
    SET_GPR_U32(ctx, 31, 0x2D4CDCu);
    ctx->pc = 0x28E630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E630u, 0x2D4CD4u, 0x2D4CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4CDCu;
label_2d4cdc:
    // 0x2d4cdc: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2d4cdcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d4ce0:
    // 0x2d4ce0: 0x8ea383c0  lw          $v1, -0x7C40($s5)
    ctx->pc = 0x2d4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935488)));
label_2d4ce4:
    // 0x2d4ce4: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2d4ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2d4ce8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D4CE8u;
    {
        const bool branch_taken_0x2d4ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CE8u;
        // 0x2d4cec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ce8) {
            ctx->pc = 0x2D4D20u;
            goto label_2d4d20;
        }
    }
    ctx->pc = 0x2D4CF0u;
    // 0x2d4cf0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2d4cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2d4cf4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D4CF4u;
    {
        const bool branch_taken_0x2d4cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4cf4) {
            ctx->pc = 0x2D4CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4CF4u;
            // 0x2d4cf8: 0x8ec50020  lw          $a1, 0x20($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4D24u;
            goto label_2d4d24;
        }
    }
    ctx->pc = 0x2D4CFCu;
    // 0x2d4cfc: 0x38620007  xori        $v0, $v1, 0x7
    ctx->pc = 0x2d4cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x2d4d00: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4D00u;
    {
        const bool branch_taken_0x2d4d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d00) {
            ctx->pc = 0x2D4D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4D00u;
            // 0x2d4d04: 0x8ec50020  lw          $a1, 0x20($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4D24u;
            goto label_2d4d24;
        }
    }
    ctx->pc = 0x2D4D08u;
    // 0x2d4d08: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x2d4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x2d4d0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4D0Cu;
    {
        const bool branch_taken_0x2d4d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d0c) {
            ctx->pc = 0x2D4D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4D0Cu;
            // 0x2d4d10: 0x8ec50020  lw          $a1, 0x20($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4D24u;
            goto label_2d4d24;
        }
    }
    ctx->pc = 0x2D4D14u;
    // 0x2d4d14: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2D4D14u;
    SET_GPR_U32(ctx, 31, 0x2D4D1Cu);
    ctx->pc = 0x2D4D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D14u;
    // 0x2d4d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2D4D14u, 0x2D4D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D1Cu;
label_2d4d1c:
    // 0x2d4d1c: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x2d4d1cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d4d20:
    // 0x2d4d20: 0x8ec50020  lw          $a1, 0x20($s6)
    ctx->pc = 0x2d4d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_2d4d24:
    // 0x2d4d24: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D4D24u;
    {
        const bool branch_taken_0x2d4d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D24u;
        // 0x2d4d28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4d24) {
            ctx->pc = 0x2D4D40u;
            goto label_2d4d40;
        }
    }
    ctx->pc = 0x2D4D2Cu;
    // 0x2d4d2c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2d4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2d4d30: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d4d34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4d38: 0x906401bd  lbu         $a0, 0x1BD($v1)
    ctx->pc = 0x2d4d38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 445)));
    // 0x2d4d3c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2d4d3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2d4d40:
    // 0x2d4d40: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4D40u;
    {
        const bool branch_taken_0x2d4d40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D40u;
        // 0x2d4d44: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4d40) {
            ctx->pc = 0x2D4D58u;
            goto label_2d4d58;
        }
    }
    ctx->pc = 0x2D4D48u;
    // 0x2d4d48: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4D48u;
    {
        const bool branch_taken_0x2d4d48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D48u;
        // 0x2d4d4c: 0x128900  sll         $s1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4d48) {
            ctx->pc = 0x2D4D5Cu;
            goto label_2d4d5c;
        }
    }
    ctx->pc = 0x2D4D50u;
    // 0x2d4d50: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D4D50u;
    {
        const bool branch_taken_0x2d4d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d50) {
            ctx->pc = 0x2D4DC0u;
            goto label_2d4dc0;
        }
    }
    ctx->pc = 0x2D4D58u;
label_2d4d58:
    // 0x2d4d58: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x2d4d58u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_2d4d5c:
    // 0x2d4d5c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d4d60: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2d4d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2d4d64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d4d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4d68: 0x2348021  addu        $s0, $s1, $s4
    ctx->pc = 0x2d4d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2d4d6c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2d4d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2d4d70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d74: 0x906201bd  lbu         $v0, 0x1BD($v1)
    ctx->pc = 0x2d4d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 445)));
    // 0x2d4d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d7c: 0xc0b539e  jal         func_2D4E78
    ctx->pc = 0x2D4D7Cu;
    SET_GPR_U32(ctx, 31, 0x2D4D84u);
    ctx->pc = 0x2D4D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D7Cu;
    // 0x2d4d80: 0x2e2300a  movz        $a2, $s7, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4E78u, 0x2D4D7Cu, 0x2D4D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D84u;
label_2d4d84:
    // 0x2d4d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d8c: 0xc0b53be  jal         func_2D4EF8
    ctx->pc = 0x2D4D8Cu;
    SET_GPR_U32(ctx, 31, 0x2D4D94u);
    ctx->pc = 0x2D4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D8Cu;
    // 0x2d4d90: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4EF8u, 0x2D4D8Cu, 0x2D4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D94u;
label_2d4d94:
    // 0x2d4d94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d98: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x2d4d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x2d4d9c: 0xc0b5452  jal         func_2D5148
    ctx->pc = 0x2D4D9Cu;
    SET_GPR_U32(ctx, 31, 0x2D4DA4u);
    ctx->pc = 0x2D4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D9Cu;
    // 0x2d4da0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5148u, 0x2D4D9Cu, 0x2D4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DA4u;
label_2d4da4:
    // 0x2d4da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4da8: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x2d4da8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x2d4dac: 0x23e2821  addu        $a1, $s1, $fp
    ctx->pc = 0x2d4dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x2d4db0: 0xc0b540e  jal         func_2D5038
    ctx->pc = 0x2D4DB0u;
    SET_GPR_U32(ctx, 31, 0x2D4DB8u);
    ctx->pc = 0x2D4DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4DB0u;
    // 0x2d4db4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5038u, 0x2D4DB0u, 0x2D4DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DB8u;
label_2d4db8:
    // 0x2d4db8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2D4DB8u;
    {
        const bool branch_taken_0x2d4db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4DB8u;
        // 0x2d4dbc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4db8) {
            ctx->pc = 0x2D4E38u;
            goto label_2d4e38;
        }
    }
    ctx->pc = 0x2D4DC0u;
label_2d4dc0:
    // 0x2d4dc0: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D4DC0u;
    {
        const bool branch_taken_0x2d4dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4DC0u;
        // 0x2d4dc4: 0x26450014  addiu       $a1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4dc0) {
            ctx->pc = 0x2D4E34u;
            goto label_2d4e34;
        }
    }
    ctx->pc = 0x2D4DC8u;
    // 0x2d4dc8: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d4dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d4dcc: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x2d4dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x2d4dd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4dd4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2d4dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4dd8: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D4DD8u;
    SET_GPR_U32(ctx, 31, 0x2D4DE0u);
    ctx->pc = 0x2D4DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4DD8u;
    // 0x2d4ddc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D4DD8u, 0x2D4DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DE0u;
label_2d4de0:
    // 0x2d4de0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2d4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2d4de4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d4de8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d4de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4dec: 0xc086408  jal         func_219020
    ctx->pc = 0x2D4DECu;
    SET_GPR_U32(ctx, 31, 0x2D4DF4u);
    ctx->pc = 0x2D4DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4DECu;
    // 0x2d4df0: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x2D4DECu, 0x2D4DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DF4u;
label_2d4df4:
    // 0x2d4df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d4df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4df8: 0x2ca20021  sltiu       $v0, $a1, 0x21
    ctx->pc = 0x2d4df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x2d4dfc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D4DFCu;
    {
        const bool branch_taken_0x2d4dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4dfc) {
            ctx->pc = 0x2D4E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4DFCu;
            // 0x2d4e00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4E38u;
            goto label_2d4e38;
        }
    }
    ctx->pc = 0x2D4E04u;
    // 0x2d4e04: 0x54840  sll         $t1, $a1, 1
    ctx->pc = 0x2d4e04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2d4e08: 0x24a50016  addiu       $a1, $a1, 0x16
    ctx->pc = 0x2d4e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    // 0x2d4e0c: 0x1324821  addu        $t1, $t1, $s2
    ctx->pc = 0x2d4e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x2d4e10: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d4e14: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x2d4e14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2d4e18: 0x2442e570  addiu       $v0, $v0, -0x1A90
    ctx->pc = 0x2d4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960496));
    // 0x2d4e1c: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d4e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d4e20: 0x26460003  addiu       $a2, $s2, 0x3
    ctx->pc = 0x2d4e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x2d4e24: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2d4e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2d4e28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4e2c: 0xc0b519e  jal         func_2D4678
    ctx->pc = 0x2D4E2Cu;
    SET_GPR_U32(ctx, 31, 0x2D4E34u);
    ctx->pc = 0x2D4E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4E2Cu;
    // 0x2d4e30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4678u, 0x2D4E2Cu, 0x2D4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E34u;
label_2d4e34:
    // 0x2d4e34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d4e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d4e38:
    // 0x2d4e38: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2d4e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d4e3c: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x2D4E3Cu;
    {
        const bool branch_taken_0x2d4e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4E3Cu;
        // 0x2d4e40: 0x8ea283c0  lw          $v0, -0x7C40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4e3c) {
            ctx->pc = 0x2D4CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4cb8;
        }
    }
    ctx->pc = 0x2D4E44u;
    // 0x2d4e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4e48:
    // 0x2d4e48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4e4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4e50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d4e50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4e54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d4e54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4e58: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d4e58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4e5c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d4e5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4e60: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d4e60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4e64: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d4e64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4e68: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d4e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d4e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4E6Cu;
        // 0x2d4e70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4E74u;
    // 0x2d4e74: 0x0  nop
    ctx->pc = 0x2d4e74u;
    // NOP
    ctx->pc = 0x2d4e78u;
}
