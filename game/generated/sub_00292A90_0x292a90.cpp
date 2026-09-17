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

// Function: sub_00292A90
// Address: 0x292a90 - 0x292c20
void sub_00292A90_0x292a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292A90_0x292a90");
#endif

    switch (ctx->pc) {
        case 0x292ad8u: goto label_292ad8;
        case 0x292af0u: goto label_292af0;
        case 0x292b08u: goto label_292b08;
        case 0x292b24u: goto label_292b24;
        case 0x292b38u: goto label_292b38;
        case 0x292b60u: goto label_292b60;
        case 0x292b84u: goto label_292b84;
        case 0x292bb0u: goto label_292bb0;
        default: break;
    }

    ctx->pc = 0x292a90u;

    // 0x292a90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x292a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x292a94: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x292a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x292a98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x292a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x292a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x292aa0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x292aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x292aa4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x292aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x292aa8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x292aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x292aac: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x292aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x292ab0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x292ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x292ab4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x292ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ab8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x292ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x292abc: 0x2636000c  addiu       $s6, $s1, 0xC
    ctx->pc = 0x292abcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x292ac0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x292ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x292ac4: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x292ac4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x292ac8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x292ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x292acc: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x292accu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x292ad0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x292ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x292ad4: 0x0  nop
    ctx->pc = 0x292ad4u;
    // NOP
label_292ad8:
    // 0x292ad8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x292ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x292adc: 0x8c500150  lw          $s0, 0x150($v0)
    ctx->pc = 0x292adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x292ae0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x292AE0u;
    {
        const bool branch_taken_0x292ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x292ae0) {
            ctx->pc = 0x292B08u;
            goto label_292b08;
        }
    }
    ctx->pc = 0x292AE8u;
    // 0x292ae8: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x292AE8u;
    SET_GPR_U32(ctx, 31, 0x292AF0u);
    ctx->pc = 0x292AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292AE8u;
    // 0x292aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x292AE8u, 0x292AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292AF0u;
label_292af0:
    // 0x292af0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292AF0u;
    {
        const bool branch_taken_0x292af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AF0u;
        // 0x292af4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292af0) {
            ctx->pc = 0x292B08u;
            goto label_292b08;
        }
    }
    ctx->pc = 0x292AF8u;
    // 0x292af8: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x292af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x292afc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x292afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292b00: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x292B00u;
    SET_GPR_U32(ctx, 31, 0x292B08u);
    ctx->pc = 0x292B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B00u;
    // 0x292b04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x292B00u, 0x292B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B08u;
label_292b08:
    // 0x292b08: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x292B08u;
    {
        const bool branch_taken_0x292b08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x292B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B08u;
        // 0x292b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b08) {
            ctx->pc = 0x292B18u;
            goto label_292b18;
        }
    }
    ctx->pc = 0x292B10u;
    // 0x292b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x292B10u;
    {
        const bool branch_taken_0x292b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B10u;
        // 0x292b14: 0x27c5af20  addiu       $a1, $fp, -0x50E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b10) {
            ctx->pc = 0x292B1Cu;
            goto label_292b1c;
        }
    }
    ctx->pc = 0x292B18u;
label_292b18:
    // 0x292b18: 0x26e5af40  addiu       $a1, $s7, -0x50C0
    ctx->pc = 0x292b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946624));
label_292b1c:
    // 0x292b1c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x292B1Cu;
    SET_GPR_U32(ctx, 31, 0x292B24u);
    ctx->pc = 0x292B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B1Cu;
    // 0x292b20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x292B1Cu, 0x292B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B24u;
label_292b24:
    // 0x292b24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x292b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b28: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x292b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x292b2c: 0x2454b4c0  addiu       $s4, $v0, -0x4B40
    ctx->pc = 0x292b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948032));
    // 0x292b30: 0x26950004  addiu       $s5, $s4, 0x4
    ctx->pc = 0x292b30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x292b34: 0x0  nop
    ctx->pc = 0x292b34u;
    // NOP
label_292b38:
    // 0x292b38: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x292B38u;
    {
        const bool branch_taken_0x292b38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x292B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B38u;
        // 0x292b3c: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b38) {
            ctx->pc = 0x292B50u;
            goto label_292b50;
        }
    }
    ctx->pc = 0x292B40u;
    // 0x292b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x292B44u;
    {
        const bool branch_taken_0x292b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B44u;
        // 0x292b48: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b44) {
            ctx->pc = 0x292B58u;
            goto label_292b58;
        }
    }
    ctx->pc = 0x292B4Cu;
    // 0x292b4c: 0x0  nop
    ctx->pc = 0x292b4cu;
    // NOP
label_292b50:
    // 0x292b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b54: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x292b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_292b58:
    // 0x292b58: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x292B58u;
    SET_GPR_U32(ctx, 31, 0x292B60u);
    ctx->pc = 0x292B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B58u;
    // 0x292b5c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x292B58u, 0x292B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B60u;
label_292b60:
    // 0x292b60: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x292b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x292b64: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x292b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x292b68: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x292b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x292b6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x292b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x292b70: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x292b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x292b74: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x292B74u;
    {
        const bool branch_taken_0x292b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B74u;
        // 0x292b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b74) {
            ctx->pc = 0x292B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292b38;
        }
    }
    ctx->pc = 0x292B7Cu;
    // 0x292b7c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x292B7Cu;
    SET_GPR_U32(ctx, 31, 0x292B84u);
    ctx->pc = 0x292B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B7Cu;
    // 0x292b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x292B7Cu, 0x292B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B84u;
label_292b84:
    // 0x292b84: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x292b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x292b88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x292b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b8c: 0x2462e0f8  addiu       $v0, $v1, -0x1F08
    ctx->pc = 0x292b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959352));
    // 0x292b90: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x292b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x292b94: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x292b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x292b98: 0xacc3006c  sw          $v1, 0x6C($a2)
    ctx->pc = 0x292b98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 3));
    // 0x292b9c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x292b9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ba0: 0xacd30054  sw          $s3, 0x54($a2)
    ctx->pc = 0x292ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 19));
    // 0x292ba4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x292ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ba8: 0xacd10050  sw          $s1, 0x50($a2)
    ctx->pc = 0x292ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 17));
    // 0x292bac: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x292bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_292bb0:
    // 0x292bb0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x292bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x292bb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x292bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x292bb8: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x292bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x292bbc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x292bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x292bc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x292bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292bc4: 0x28e50005  slti        $a1, $a3, 0x5
    ctx->pc = 0x292bc4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x292bc8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x292BC8u;
    {
        const bool branch_taken_0x292bc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x292BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BC8u;
        // 0x292bcc: 0xac440050  sw          $a0, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292bc8) {
            ctx->pc = 0x292BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292bb0;
        }
    }
    ctx->pc = 0x292BD0u;
    // 0x292bd0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x292bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x292bd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x292bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x292bd8: 0x2442b178  addiu       $v0, $v0, -0x4E88
    ctx->pc = 0x292bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947192));
    // 0x292bdc: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x292bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
    // 0x292be0: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x292be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x292be4: 0x5440ffbc  bnel        $v0, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x292BE4u;
    {
        const bool branch_taken_0x292be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292be4) {
            ctx->pc = 0x292BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292BE4u;
            // 0x292be8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292ad8;
        }
    }
    ctx->pc = 0x292BECu;
    // 0x292bec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x292becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292bf0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x292bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292bf4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x292bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292bf8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x292bf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x292bfc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x292bfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292c00: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x292c00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x292c04: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x292c04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292c08: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x292c08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x292c0c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x292c0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x292c10: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x292c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x292c14: 0x3e00008  jr          $ra
    ctx->pc = 0x292C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C14u;
        // 0x292c18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292C1Cu;
    // 0x292c1c: 0x0  nop
    ctx->pc = 0x292c1cu;
    // NOP
    ctx->pc = 0x292c20u;
}
