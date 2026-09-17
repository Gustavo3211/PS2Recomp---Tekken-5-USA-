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

// Function: sub_002F4F58
// Address: 0x2f4f58 - 0x2f50c0
void sub_002F4F58_0x2f4f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4F58_0x2f4f58");
#endif

    switch (ctx->pc) {
        case 0x2f4f78u: goto label_2f4f78;
        case 0x2f4f94u: goto label_2f4f94;
        case 0x2f4fb8u: goto label_2f4fb8;
        case 0x2f4fd0u: goto label_2f4fd0;
        case 0x2f4fd8u: goto label_2f4fd8;
        case 0x2f4ff8u: goto label_2f4ff8;
        case 0x2f5018u: goto label_2f5018;
        case 0x2f5030u: goto label_2f5030;
        case 0x2f5050u: goto label_2f5050;
        case 0x2f5060u: goto label_2f5060;
        default: break;
    }

    ctx->pc = 0x2f4f58u;

    // 0x2f4f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4f5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f4f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f4f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f4f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f4f64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f4f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f4f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f4f6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f4f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f4f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f4f74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f4f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f78:
    // 0x2f4f78: 0x16300009  bne         $s1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4F78u;
    {
        const bool branch_taken_0x2f4f78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F78u;
        // 0x2f4f7c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f78) {
            ctx->pc = 0x2F4FA0u;
            goto label_2f4fa0;
        }
    }
    ctx->pc = 0x2F4F80u;
    // 0x2f4f80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f4f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f4f84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f4f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f8c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F4F8Cu;
    SET_GPR_U32(ctx, 31, 0x2F4F94u);
    ctx->pc = 0x2F4F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F8Cu;
    // 0x2f4f90: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F4F8Cu, 0x2F4F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F94u;
label_2f4f94:
    // 0x2f4f94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4F94u;
    {
        const bool branch_taken_0x2f4f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F94u;
        // 0x2f4f98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f94) {
            ctx->pc = 0x2F4FBCu;
            goto label_2f4fbc;
        }
    }
    ctx->pc = 0x2F4F9Cu;
    // 0x2f4f9c: 0x0  nop
    ctx->pc = 0x2f4f9cu;
    // NOP
label_2f4fa0:
    // 0x2f4fa0: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x2f4fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x2f4fa4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f4fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f4fa8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f4fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4fb0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F4FB0u;
    SET_GPR_U32(ctx, 31, 0x2F4FB8u);
    ctx->pc = 0x2F4FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4FB0u;
    // 0x2f4fb4: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F4FB0u, 0x2F4FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4FB8u;
label_2f4fb8:
    // 0x2f4fb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f4fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f4fbc:
    // 0x2f4fbc: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2f4fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f4fc0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F4FC0u;
    {
        const bool branch_taken_0x2f4fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FC0u;
        // 0x2f4fc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fc0) {
            ctx->pc = 0x2F4F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4f78;
        }
    }
    ctx->pc = 0x2F4FC8u;
    // 0x2f4fc8: 0xc0bd5ee  jal         func_2F57B8
    ctx->pc = 0x2F4FC8u;
    SET_GPR_U32(ctx, 31, 0x2F4FD0u);
    ctx->pc = 0x2F4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4FC8u;
    // 0x2f4fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57B8u, 0x2F4FC8u, 0x2F4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4FD0u;
label_2f4fd0:
    // 0x2f4fd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f4fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4fd4: 0x0  nop
    ctx->pc = 0x2f4fd4u;
    // NOP
label_2f4fd8:
    // 0x2f4fd8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2f4fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2f4fdc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f4fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f4fe0: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x2f4fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2f4fe4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f4fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f4fe8: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x2f4fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2f4fec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f4fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f4ff0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F4FF0u;
    SET_GPR_U32(ctx, 31, 0x2F4FF8u);
    ctx->pc = 0x2F4FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4FF0u;
    // 0x2f4ff4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F4FF0u, 0x2F4FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4FF8u;
label_2f4ff8:
    // 0x2f4ff8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f4ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f4ffc: 0x2a240004  slti        $a0, $s1, 0x4
    ctx->pc = 0x2f4ffcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f5000: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2f5000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2f5004: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2f5004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2f5008: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F5008u;
    {
        const bool branch_taken_0x2f5008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5008u;
        // 0x2f500c: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5008) {
            ctx->pc = 0x2F4FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4fd8;
        }
    }
    ctx->pc = 0x2F5010u;
    // 0x2f5010: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f5010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5014: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2f5014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2f5018:
    // 0x2f5018: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f5018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f501c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f5020: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f5020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f5024: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x2f5024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2f5028: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5028u;
    SET_GPR_U32(ctx, 31, 0x2F5030u);
    ctx->pc = 0x2F502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5028u;
    // 0x2f502c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5028u, 0x2F5030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5030u;
label_2f5030:
    // 0x2f5030: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x2f5030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x2f5034: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F5034u;
    {
        const bool branch_taken_0x2f5034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5034) {
            ctx->pc = 0x2F5038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5034u;
            // 0x2f5038: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5018;
        }
    }
    ctx->pc = 0x2F503Cu;
    // 0x2f503c: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x2f503cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2f5040: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5044: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f5044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f5048: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5048u;
    SET_GPR_U32(ctx, 31, 0x2F5050u);
    ctx->pc = 0x2F504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5048u;
    // 0x2f504c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5048u, 0x2F5050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5050u;
label_2f5050:
    // 0x2f5050: 0x8e4400f4  lw          $a0, 0xF4($s2)
    ctx->pc = 0x2f5050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x2f5054: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f5054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f5058: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5058u;
    SET_GPR_U32(ctx, 31, 0x2F5060u);
    ctx->pc = 0x2F505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5058u;
    // 0x2f505c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5058u, 0x2F5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5060u;
label_2f5060:
    // 0x2f5060: 0x8e4400f8  lw          $a0, 0xF8($s2)
    ctx->pc = 0x2f5060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x2f5064: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x2f5064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f5068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f506c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f5070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f5070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f5074: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2f5074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2f5078: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f5078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f507c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f507cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f5080: 0x8e4300fc  lw          $v1, 0xFC($s2)
    ctx->pc = 0x2f5080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x2f5084: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2f5084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2f5088: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f5088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f508c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2f508cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2f5090: 0x8e440100  lw          $a0, 0x100($s2)
    ctx->pc = 0x2f5090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2f5094: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f5098: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2f5098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2f509c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f509cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f50a0: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2f50a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f50a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f50a8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2f50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2f50ac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f50acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f50b0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2f50b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2f50b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F50B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50B4u;
        // 0x2f50b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F50B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F50BCu;
    // 0x2f50bc: 0x0  nop
    ctx->pc = 0x2f50bcu;
    // NOP
    ctx->pc = 0x2f50c0u;
}
