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

// Function: sub_00292F70
// Address: 0x292f70 - 0x293128
void sub_00292F70_0x292f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292F70_0x292f70");
#endif

    switch (ctx->pc) {
        case 0x292fd0u: goto label_292fd0;
        case 0x292ff8u: goto label_292ff8;
        case 0x293028u: goto label_293028;
        case 0x293044u: goto label_293044;
        case 0x293050u: goto label_293050;
        case 0x293064u: goto label_293064;
        case 0x293094u: goto label_293094;
        case 0x2930c0u: goto label_2930c0;
        case 0x2930d8u: goto label_2930d8;
        default: break;
    }

    ctx->pc = 0x292f70u;

    // 0x292f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x292f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292f74: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x292f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x292f78: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x292f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x292f7c: 0x2475840c  addiu       $s5, $v1, -0x7BF4
    ctx->pc = 0x292f7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935564));
    // 0x292f80: 0x8ea2ffb4  lw          $v0, -0x4C($s5)
    ctx->pc = 0x292f80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x292f84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x292f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x292f88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x292f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f8c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x292f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x292f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x292f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292f94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x292f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x292f98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x292f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x292f9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x292f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x292fa0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x292fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x292fa4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x292fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x292fa8: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x292FA8u;
    {
        const bool branch_taken_0x292fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FA8u;
        // 0x292fac: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fa8) {
            ctx->pc = 0x2930F8u;
            goto label_2930f8;
        }
    }
    ctx->pc = 0x292FB0u;
    // 0x292fb0: 0x92220155  lbu         $v0, 0x155($s1)
    ctx->pc = 0x292fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
    // 0x292fb4: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x292FB4u;
    {
        const bool branch_taken_0x292fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FB4u;
        // 0x292fb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fb4) {
            ctx->pc = 0x2930FCu;
            goto label_2930fc;
        }
    }
    ctx->pc = 0x292FBCu;
    // 0x292fbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x292fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fc0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x292fc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292fc4: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x292fc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292fc8: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x292fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x292fcc: 0x0  nop
    ctx->pc = 0x292fccu;
    // NOP
label_292fd0:
    // 0x292fd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x292fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292fd4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x292fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x292fd8: 0x2f2200b  movn        $a0, $s7, $s2
    ctx->pc = 0x292fd8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 23));
    // 0x292fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x292fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292fe0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x292fe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fe4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x292fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x292fe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x292fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fec: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x292fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x292ff0: 0x245300b1  addiu       $s3, $v0, 0xB1
    ctx->pc = 0x292ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 177));
    // 0x292ff4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x292ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_292ff8:
    // 0x292ff8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x292ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x292ffc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x292ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x293000: 0x94420090  lhu         $v0, 0x90($v0)
    ctx->pc = 0x293000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x293004: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x293004u;
    {
        const bool branch_taken_0x293004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x293008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293004u;
        // 0x293008: 0x2a030010  slti        $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293004) {
            ctx->pc = 0x293014u;
            goto label_293014;
        }
    }
    ctx->pc = 0x29300Cu;
    // 0x29300c: 0x14560002  bne         $v0, $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x29300Cu;
    {
        const bool branch_taken_0x29300c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x29300c) {
            ctx->pc = 0x293018u;
            goto label_293018;
        }
    }
    ctx->pc = 0x293014u;
label_293014:
    // 0x293014: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x293014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_293018:
    // 0x293018: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x293018u;
    {
        const bool branch_taken_0x293018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293018u;
        // 0x29301c: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293018) {
            ctx->pc = 0x292FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292ff8;
        }
    }
    ctx->pc = 0x293020u;
    // 0x293020: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x293020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293024: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x293024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_293028:
    // 0x293028: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x293028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29302c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x29302Cu;
    {
        const bool branch_taken_0x29302c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29302Cu;
        // 0x293030: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29302c) {
            ctx->pc = 0x2930C8u;
            goto label_2930c8;
        }
    }
    ctx->pc = 0x293034u;
    // 0x293034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293038: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x293038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29303c: 0xc0a4b62  jal         func_292D88
    ctx->pc = 0x29303Cu;
    SET_GPR_U32(ctx, 31, 0x293044u);
    ctx->pc = 0x293040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29303Cu;
    // 0x293040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D88u, 0x29303Cu, 0x293044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293044u;
label_293044:
    // 0x293044: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x293044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x293048: 0xc086408  jal         func_219020
    ctx->pc = 0x293048u;
    SET_GPR_U32(ctx, 31, 0x293050u);
    ctx->pc = 0x29304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293048u;
    // 0x29304c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x293048u, 0x293050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293050u;
label_293050:
    // 0x293050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293054: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x293054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293058: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29305c: 0xc0a4bb4  jal         func_292ED0
    ctx->pc = 0x29305Cu;
    SET_GPR_U32(ctx, 31, 0x293064u);
    ctx->pc = 0x293060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29305Cu;
    // 0x293060: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292ED0u, 0x29305Cu, 0x293064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293064u;
label_293064:
    // 0x293064: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x293064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x293068: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x293068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29306c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29306Cu;
    {
        const bool branch_taken_0x29306c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29306Cu;
        // 0x293070: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29306c) {
            ctx->pc = 0x2930A0u;
            goto label_2930a0;
        }
    }
    ctx->pc = 0x293074u;
    // 0x293074: 0x9262000a  lbu         $v0, 0xA($s3)
    ctx->pc = 0x293074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x293078: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x293078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29307c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29307Cu;
    {
        const bool branch_taken_0x29307c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29307Cu;
        // 0x293080: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29307c) {
            ctx->pc = 0x2930A0u;
            goto label_2930a0;
        }
    }
    ctx->pc = 0x293084u;
    // 0x293084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293088: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29308c: 0xc0a4bb4  jal         func_292ED0
    ctx->pc = 0x29308Cu;
    SET_GPR_U32(ctx, 31, 0x293094u);
    ctx->pc = 0x293090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29308Cu;
    // 0x293090: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292ED0u, 0x29308Cu, 0x293094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293094u;
label_293094:
    // 0x293094: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x293094u;
    {
        const bool branch_taken_0x293094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293094u;
        // 0x293098: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293094) {
            ctx->pc = 0x2930DCu;
            goto label_2930dc;
        }
    }
    ctx->pc = 0x29309Cu;
    // 0x29309c: 0x0  nop
    ctx->pc = 0x29309cu;
    // NOP
label_2930a0:
    // 0x2930a0: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2930A0u;
    {
        const bool branch_taken_0x2930a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2930a0) {
            ctx->pc = 0x2930A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2930A0u;
            // 0x2930a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2930DCu;
            goto label_2930dc;
        }
    }
    ctx->pc = 0x2930A8u;
    // 0x2930a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2930a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2930ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2930acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2930b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2930b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2930b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930b8: 0xc0a4b86  jal         func_292E18
    ctx->pc = 0x2930B8u;
    SET_GPR_U32(ctx, 31, 0x2930C0u);
    ctx->pc = 0x2930BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2930B8u;
    // 0x2930bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292E18u, 0x2930B8u, 0x2930C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2930C0u;
label_2930c0:
    // 0x2930c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2930C0u;
    {
        const bool branch_taken_0x2930c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2930C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930C0u;
        // 0x2930c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930c0) {
            ctx->pc = 0x2930DCu;
            goto label_2930dc;
        }
    }
    ctx->pc = 0x2930C8u;
label_2930c8:
    // 0x2930c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2930c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2930ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930d0: 0xc0a4b62  jal         func_292D88
    ctx->pc = 0x2930D0u;
    SET_GPR_U32(ctx, 31, 0x2930D8u);
    ctx->pc = 0x2930D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2930D0u;
    // 0x2930d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D88u, 0x2930D0u, 0x2930D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2930D8u;
label_2930d8:
    // 0x2930d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2930d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2930dc:
    // 0x2930dc: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2930dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2930e0: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2930E0u;
    {
        const bool branch_taken_0x2930e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2930e0) {
            ctx->pc = 0x2930E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2930E0u;
            // 0x2930e4: 0x9262000c  lbu         $v0, 0xC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293028;
        }
    }
    ctx->pc = 0x2930E8u;
    // 0x2930e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2930e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2930ec: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2930ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2930f0: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2930F0u;
    {
        const bool branch_taken_0x2930f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2930F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930F0u;
        // 0x2930f4: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930f0) {
            ctx->pc = 0x292FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292fd0;
        }
    }
    ctx->pc = 0x2930F8u;
label_2930f8:
    // 0x2930f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2930f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2930fc:
    // 0x2930fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2930fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x293100: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x293100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293104: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x293104u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x293108: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x293108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29310c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29310cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x293110: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x293110u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293114: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x293114u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x293118: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x293118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29311c: 0x3e00008  jr          $ra
    ctx->pc = 0x29311Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29311Cu;
        // 0x293120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29311Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293124u;
    // 0x293124: 0x0  nop
    ctx->pc = 0x293124u;
    // NOP
    ctx->pc = 0x293128u;
}
