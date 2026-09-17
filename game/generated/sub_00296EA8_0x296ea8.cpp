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

// Function: sub_00296EA8
// Address: 0x296ea8 - 0x296fe0
void sub_00296EA8_0x296ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296EA8_0x296ea8");
#endif

    switch (ctx->pc) {
        case 0x296f50u: goto label_296f50;
        case 0x296f6cu: goto label_296f6c;
        default: break;
    }

    ctx->pc = 0x296ea8u;

    // 0x296ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x296eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x296eb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x296eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x296ebc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x296ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x296ec0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x296ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x296ec4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x296ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x296ec8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x296ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x296ecc: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x296ECCu;
    {
        const bool branch_taken_0x296ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296ecc) {
            ctx->pc = 0x296ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296ECCu;
            // 0x296ed0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296FBCu;
            goto label_296fbc;
        }
    }
    ctx->pc = 0x296ED4u;
    // 0x296ed4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x296ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x296ed8: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x296ED8u;
    {
        const bool branch_taken_0x296ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x296EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296ED8u;
        // 0x296edc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ed8) {
            ctx->pc = 0x296FB0u;
            goto label_296fb0;
        }
    }
    ctx->pc = 0x296EE0u;
    // 0x296ee0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x296ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x296ee4: 0x10740024  beq         $v1, $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x296EE4u;
    {
        const bool branch_taken_0x296ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x296EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EE4u;
        // 0x296ee8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ee4) {
            ctx->pc = 0x296F78u;
            goto label_296f78;
        }
    }
    ctx->pc = 0x296EECu;
    // 0x296eec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x296EECu;
    {
        const bool branch_taken_0x296eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EECu;
        // 0x296ef0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296eec) {
            ctx->pc = 0x296F08u;
            goto label_296f08;
        }
    }
    ctx->pc = 0x296EF4u;
    // 0x296ef4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x296EF4u;
    {
        const bool branch_taken_0x296ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EF4u;
        // 0x296ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ef4) {
            ctx->pc = 0x296F18u;
            goto label_296f18;
        }
    }
    ctx->pc = 0x296EFCu;
    // 0x296efc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x296EFCu;
    {
        const bool branch_taken_0x296efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EFCu;
        // 0x296f00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296efc) {
            ctx->pc = 0x296FC0u;
            goto label_296fc0;
        }
    }
    ctx->pc = 0x296F04u;
    // 0x296f04: 0x0  nop
    ctx->pc = 0x296f04u;
    // NOP
label_296f08:
    // 0x296f08: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x296F08u;
    {
        const bool branch_taken_0x296f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x296f08) {
            ctx->pc = 0x296F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296F08u;
            // 0x296f0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296FBCu;
            goto label_296fbc;
        }
    }
    ctx->pc = 0x296F10u;
    // 0x296f10: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x296F10u;
    {
        const bool branch_taken_0x296f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F10u;
        // 0x296f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f10) {
            ctx->pc = 0x296FBCu;
            goto label_296fbc;
        }
    }
    ctx->pc = 0x296F18u;
label_296f18:
    // 0x296f18: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x296f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x296f1c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x296f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x296f20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x296f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x296f24: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x296F24u;
    {
        const bool branch_taken_0x296f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F24u;
        // 0x296f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f24) {
            ctx->pc = 0x296FBCu;
            goto label_296fbc;
        }
    }
    ctx->pc = 0x296F2Cu;
    // 0x296f2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x296f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x296f30: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x296f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x296f34: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x296f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x296f38: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x296f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x296f3c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x296f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x296f40: 0x8e130054  lw          $s3, 0x54($s0)
    ctx->pc = 0x296f40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x296f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f48: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x296F48u;
    SET_GPR_U32(ctx, 31, 0x296F50u);
    ctx->pc = 0x296F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F48u;
    // 0x296f4c: 0x8e12005c  lw          $s2, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x296F48u, 0x296F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F50u;
label_296f50:
    // 0x296f50: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x296F50u;
    {
        const bool branch_taken_0x296f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296f50) {
            ctx->pc = 0x296F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296F50u;
            // 0x296f54: 0xae140048  sw          $s4, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296F70u;
            goto label_296f70;
        }
    }
    ctx->pc = 0x296F58u;
    // 0x296f58: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x296f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x296f5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x296f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x296f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f64: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x296F64u;
    SET_GPR_U32(ctx, 31, 0x296F6Cu);
    ctx->pc = 0x296F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F64u;
    // 0x296f68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x296F64u, 0x296F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F6Cu;
label_296f6c:
    // 0x296f6c: 0xae140048  sw          $s4, 0x48($s0)
    ctx->pc = 0x296f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 20));
label_296f70:
    // 0x296f70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x296F70u;
    {
        const bool branch_taken_0x296f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F70u;
        // 0x296f74: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f70) {
            ctx->pc = 0x296FB8u;
            goto label_296fb8;
        }
    }
    ctx->pc = 0x296F78u;
label_296f78:
    // 0x296f78: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x296f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x296f7c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x296f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x296f80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x296f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x296f84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x296F84u;
    {
        const bool branch_taken_0x296f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F84u;
        // 0x296f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f84) {
            ctx->pc = 0x296FBCu;
            goto label_296fbc;
        }
    }
    ctx->pc = 0x296F8Cu;
    // 0x296f8c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x296f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x296f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x296F90u;
    {
        const bool branch_taken_0x296f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F90u;
        // 0x296f94: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f90) {
            ctx->pc = 0x296FA8u;
            goto label_296fa8;
        }
    }
    ctx->pc = 0x296F98u;
    // 0x296f98: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x296f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x296f9c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x296f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x296fa0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x296fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x296fa4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x296fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_296fa8:
    // 0x296fa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x296fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296fac: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x296facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_296fb0:
    // 0x296fb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x296FB0u;
    {
        const bool branch_taken_0x296fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FB0u;
        // 0x296fb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296fb0) {
            ctx->pc = 0x296FBCu;
            goto label_296fbc;
        }
    }
    ctx->pc = 0x296FB8u;
label_296fb8:
    // 0x296fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296fbc:
    // 0x296fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296fc0:
    // 0x296fc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296fc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x296fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296fc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x296fc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296fcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x296fccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296fd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x296fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x296FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FD4u;
        // 0x296fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296FDCu;
    // 0x296fdc: 0x0  nop
    ctx->pc = 0x296fdcu;
    // NOP
    ctx->pc = 0x296fe0u;
}
