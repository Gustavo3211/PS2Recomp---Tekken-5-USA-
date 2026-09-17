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

// Function: sub_001F5F30
// Address: 0x1f5f30 - 0x1f6150
void sub_001F5F30_0x1f5f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5F30_0x1f5f30");
#endif

    switch (ctx->pc) {
        case 0x1f5f60u: goto label_1f5f60;
        case 0x1f5f68u: goto label_1f5f68;
        case 0x1f5f84u: goto label_1f5f84;
        case 0x1f5f90u: goto label_1f5f90;
        case 0x1f5ff0u: goto label_1f5ff0;
        case 0x1f6020u: goto label_1f6020;
        case 0x1f6058u: goto label_1f6058;
        case 0x1f6060u: goto label_1f6060;
        case 0x1f6070u: goto label_1f6070;
        case 0x1f6078u: goto label_1f6078;
        case 0x1f6098u: goto label_1f6098;
        case 0x1f60b0u: goto label_1f60b0;
        case 0x1f60d0u: goto label_1f60d0;
        case 0x1f60e8u: goto label_1f60e8;
        case 0x1f6108u: goto label_1f6108;
        case 0x1f6114u: goto label_1f6114;
        default: break;
    }

    ctx->pc = 0x1f5f30u;

    // 0x1f5f30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f5f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f5f34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f5f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5f38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f5f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f5f3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f5f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f5f40: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f5f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f5f44: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f5f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f5f48: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f5f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f5f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5f50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5f54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f5f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f5f58: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F5F58u;
    SET_GPR_U32(ctx, 31, 0x1F5F60u);
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F5F58u, 0x1F5F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F60u;
label_1f5f60:
    // 0x1f5f60: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F5F60u;
    SET_GPR_U32(ctx, 31, 0x1F5F68u);
    ctx->pc = 0x1F5F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F60u;
    // 0x1f5f64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F5F60u, 0x1F5F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F68u;
label_1f5f68:
    // 0x1f5f68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f5f68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f6c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f5f70: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f5f74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f78: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x1f5f78u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f5f7c: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F5F7Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F84u);
    ctx->pc = 0x1F5F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F7Cu;
    // 0x1f5f80: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F5F7Cu, 0x1F5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F84u;
label_1f5f84:
    // 0x1f5f84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f88: 0xc09d486  jal         func_275218
    ctx->pc = 0x1F5F88u;
    SET_GPR_U32(ctx, 31, 0x1F5F90u);
    ctx->pc = 0x1F5F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F88u;
    // 0x1f5f8c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1F5F88u, 0x1F5F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F90u;
label_1f5f90:
    // 0x1f5f90: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f5f90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f5f98: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x1f5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x1f5f9c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f5f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x1f5fa0: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1f5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1f5fa4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5FA4u;
    {
        const bool branch_taken_0x1f5fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FA4u;
        // 0x1f5fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fa4) {
            ctx->pc = 0x1F5FB8u;
            goto label_1f5fb8;
        }
    }
    ctx->pc = 0x1F5FACu;
    // 0x1f5fac: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x1f5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x1f5fb0: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5FB0u;
    {
        const bool branch_taken_0x1f5fb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5fb0) {
            ctx->pc = 0x1F5FBCu;
            goto label_1f5fbc;
        }
    }
    ctx->pc = 0x1F5FB8u;
label_1f5fb8:
    // 0x1f5fb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5fbc:
    // 0x1f5fbc: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F5FBCu;
    {
        const bool branch_taken_0x1f5fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FBCu;
        // 0x1f5fc0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fbc) {
            ctx->pc = 0x1F607Cu;
            goto label_1f607c;
        }
    }
    ctx->pc = 0x1F5FC4u;
    // 0x1f5fc4: 0x96630096  lhu         $v1, 0x96($s3)
    ctx->pc = 0x1f5fc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x1f5fc8: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1f5fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5fcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f5fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5fd0: 0xa6630098  sh          $v1, 0x98($s3)
    ctx->pc = 0x1f5fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5fd4: 0x96820096  lhu         $v0, 0x96($s4)
    ctx->pc = 0x1f5fd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 150)));
    // 0x1f5fd8: 0xa6820098  sh          $v0, 0x98($s4)
    ctx->pc = 0x1f5fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f5fdc: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x1f5fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x1f5fe0: 0xae630058  sw          $v1, 0x58($s3)
    ctx->pc = 0x1f5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 3));
    // 0x1f5fe4: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x1f5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x1f5fe8: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5FE8u;
    {
        const bool branch_taken_0x1f5fe8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FE8u;
        // 0x1f5fec: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fe8) {
            ctx->pc = 0x1F6010u;
            goto label_1f6010;
        }
    }
    ctx->pc = 0x1F5FF0u;
label_1f5ff0:
    // 0x1f5ff0: 0x96020096  lhu         $v0, 0x96($s0)
    ctx->pc = 0x1f5ff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1f5ff4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f5ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f5ff8: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x1f5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1f5ffc: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x1f5ffcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f6000: 0xa6020098  sh          $v0, 0x98($s0)
    ctx->pc = 0x1f6000u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f6004: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1f6004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1f6008: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6008u;
    {
        const bool branch_taken_0x1f6008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6008u;
        // 0x1f600c: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6008) {
            ctx->pc = 0x1F5FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5ff0;
        }
    }
    ctx->pc = 0x1F6010u;
label_1f6010:
    // 0x1f6010: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1f6010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6014: 0x1aa0000a  blez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1F6014u;
    {
        const bool branch_taken_0x1f6014 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x1F6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6014u;
        // 0x1f6018: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6014) {
            ctx->pc = 0x1F6040u;
            goto label_1f6040;
        }
    }
    ctx->pc = 0x1F601Cu;
    // 0x1f601c: 0x0  nop
    ctx->pc = 0x1f601cu;
    // NOP
label_1f6020:
    // 0x1f6020: 0x96020096  lhu         $v0, 0x96($s0)
    ctx->pc = 0x1f6020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1f6024: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6028: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x1f6028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1f602c: 0x235202a  slt         $a0, $s1, $s5
    ctx->pc = 0x1f602cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1f6030: 0xa6020098  sh          $v0, 0x98($s0)
    ctx->pc = 0x1f6030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f6034: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1f6034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1f6038: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6038u;
    {
        const bool branch_taken_0x1f6038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6038u;
        // 0x1f603c: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6038) {
            ctx->pc = 0x1F6020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6020;
        }
    }
    ctx->pc = 0x1F6040u;
label_1f6040:
    // 0x1f6040: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x1f6040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x1f6044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f6044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f6048: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6048u;
    {
        const bool branch_taken_0x1f6048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6048) {
            ctx->pc = 0x1F6068u;
            goto label_1f6068;
        }
    }
    ctx->pc = 0x1F6050u;
    // 0x1f6050: 0xc07d746  jal         func_1F5D18
    ctx->pc = 0x1F6050u;
    SET_GPR_U32(ctx, 31, 0x1F6058u);
    ctx->pc = 0x1F6054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6050u;
    // 0x1f6054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D18u, 0x1F6050u, 0x1F6058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6058u;
label_1f6058:
    // 0x1f6058: 0xc07d746  jal         func_1F5D18
    ctx->pc = 0x1F6058u;
    SET_GPR_U32(ctx, 31, 0x1F6060u);
    ctx->pc = 0x1F605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6058u;
    // 0x1f605c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D18u, 0x1F6058u, 0x1F6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6060u;
label_1f6060:
    // 0x1f6060: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6060u;
    {
        const bool branch_taken_0x1f6060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6060u;
        // 0x1f6064: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6060) {
            ctx->pc = 0x1F607Cu;
            goto label_1f607c;
        }
    }
    ctx->pc = 0x1F6068u;
label_1f6068:
    // 0x1f6068: 0xc07d746  jal         func_1F5D18
    ctx->pc = 0x1F6068u;
    SET_GPR_U32(ctx, 31, 0x1F6070u);
    ctx->pc = 0x1F606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6068u;
    // 0x1f606c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D18u, 0x1F6068u, 0x1F6070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6070u;
label_1f6070:
    // 0x1f6070: 0xc07d746  jal         func_1F5D18
    ctx->pc = 0x1F6070u;
    SET_GPR_U32(ctx, 31, 0x1F6078u);
    ctx->pc = 0x1F6074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6070u;
    // 0x1f6074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D18u, 0x1F6070u, 0x1F6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6078u;
label_1f6078:
    // 0x1f6078: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f6078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1f607c:
    // 0x1f607c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f6080: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1f6080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x1f6084: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F6084u;
    {
        const bool branch_taken_0x1f6084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6084u;
        // 0x1f6088: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6084) {
            ctx->pc = 0x1F60C8u;
            goto label_1f60c8;
        }
    }
    ctx->pc = 0x1F608Cu;
    // 0x1f608c: 0x1a40001a  blez        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F608Cu;
    {
        const bool branch_taken_0x1f608c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F608Cu;
        // 0x1f6090: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f608c) {
            ctx->pc = 0x1F60F8u;
            goto label_1f60f8;
        }
    }
    ctx->pc = 0x1F6094u;
    // 0x1f6094: 0x0  nop
    ctx->pc = 0x1f6094u;
    // NOP
label_1f6098:
    // 0x1f6098: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x1f6098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x1f609c: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1f609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1f60a0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F60A0u;
    {
        const bool branch_taken_0x1f60a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60a0) {
            ctx->pc = 0x1F60A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F60A0u;
            // 0x1f60a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F60B4u;
            goto label_1f60b4;
        }
    }
    ctx->pc = 0x1F60A8u;
    // 0x1f60a8: 0xc0b4154  jal         func_2D0550
    ctx->pc = 0x1F60A8u;
    SET_GPR_U32(ctx, 31, 0x1F60B0u);
    ctx->pc = 0x1F60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60A8u;
    // 0x1f60ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0550u, 0x1F60A8u, 0x1F60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60B0u;
label_1f60b0:
    // 0x1f60b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f60b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f60b4:
    // 0x1f60b4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1f60b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f60b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F60B8u;
    {
        const bool branch_taken_0x1f60b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60B8u;
        // 0x1f60bc: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60b8) {
            ctx->pc = 0x1F6098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6098;
        }
    }
    ctx->pc = 0x1F60C0u;
    // 0x1f60c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F60C0u;
    {
        const bool branch_taken_0x1f60c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60C0u;
        // 0x1f60c4: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60c0) {
            ctx->pc = 0x1F60FCu;
            goto label_1f60fc;
        }
    }
    ctx->pc = 0x1F60C8u;
label_1f60c8:
    // 0x1f60c8: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1F60C8u;
    {
        const bool branch_taken_0x1f60c8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60C8u;
        // 0x1f60cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60c8) {
            ctx->pc = 0x1F60F8u;
            goto label_1f60f8;
        }
    }
    ctx->pc = 0x1F60D0u;
label_1f60d0:
    // 0x1f60d0: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x1f60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x1f60d4: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x1f60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1f60d8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F60D8u;
    {
        const bool branch_taken_0x1f60d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f60d8) {
            ctx->pc = 0x1F60DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F60D8u;
            // 0x1f60dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F60ECu;
            goto label_1f60ec;
        }
    }
    ctx->pc = 0x1F60E0u;
    // 0x1f60e0: 0xc07d746  jal         func_1F5D18
    ctx->pc = 0x1F60E0u;
    SET_GPR_U32(ctx, 31, 0x1F60E8u);
    ctx->pc = 0x1F60E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60E0u;
    // 0x1f60e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D18u, 0x1F60E0u, 0x1F60E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60E8u;
label_1f60e8:
    // 0x1f60e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f60e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f60ec:
    // 0x1f60ec: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1f60ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f60f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F60F0u;
    {
        const bool branch_taken_0x1f60f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60F0u;
        // 0x1f60f4: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60f0) {
            ctx->pc = 0x1F60D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f60d0;
        }
    }
    ctx->pc = 0x1F60F8u;
label_1f60f8:
    // 0x1f60f8: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1f60f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f60fc:
    // 0x1f60fc: 0x1aa00008  blez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F60FCu;
    {
        const bool branch_taken_0x1f60fc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x1F6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60FCu;
        // 0x1f6100: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60fc) {
            ctx->pc = 0x1F6120u;
            goto label_1f6120;
        }
    }
    ctx->pc = 0x1F6104u;
    // 0x1f6104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6108:
    // 0x1f6108: 0x261008d0  addiu       $s0, $s0, 0x8D0
    ctx->pc = 0x1f6108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
    // 0x1f610c: 0xc07d746  jal         func_1F5D18
    ctx->pc = 0x1F610Cu;
    SET_GPR_U32(ctx, 31, 0x1F6114u);
    ctx->pc = 0x1F6110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F610Cu;
    // 0x1f6110: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D18u, 0x1F610Cu, 0x1F6114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6114u;
label_1f6114:
    // 0x1f6114: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x1f6114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1f6118: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F6118u;
    {
        const bool branch_taken_0x1f6118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6118u;
        // 0x1f611c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6118) {
            ctx->pc = 0x1F6108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6108;
        }
    }
    ctx->pc = 0x1F6120u;
label_1f6120:
    // 0x1f6120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f612c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f612cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6130: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f6130u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6134: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f6134u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6138: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f6138u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f613c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f613cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6140: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f6140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6144: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6144u;
        // 0x1f6148: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F614Cu;
    // 0x1f614c: 0x0  nop
    ctx->pc = 0x1f614cu;
    // NOP
    ctx->pc = 0x1f6150u;
}
