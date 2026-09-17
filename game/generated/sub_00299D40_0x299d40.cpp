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

// Function: sub_00299D40
// Address: 0x299d40 - 0x299e80
void sub_00299D40_0x299d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299D40_0x299d40");
#endif

    switch (ctx->pc) {
        case 0x299da0u: goto label_299da0;
        case 0x299db0u: goto label_299db0;
        case 0x299de0u: goto label_299de0;
        case 0x299e08u: goto label_299e08;
        case 0x299e34u: goto label_299e34;
        default: break;
    }

    ctx->pc = 0x299d40u;

    // 0x299d40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x299d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x299d44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x299d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299d48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x299d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d4c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x299d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x299d50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x299d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d54: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x299d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299d58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x299d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d5c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x299d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x299d60: 0x2413efff  addiu       $s3, $zero, -0x1001
    ctx->pc = 0x299d60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x299d64: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x299d68: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x299d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x299d6c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x299d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x299d70: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x299d70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x299d74: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x299d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x299d78: 0x24170006  addiu       $s7, $zero, 0x6
    ctx->pc = 0x299d78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x299d7c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x299d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x299d80: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x299d80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299d84: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x299d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x299d88: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x299d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x299d8c: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x299d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x299d90: 0x245500a8  addiu       $s5, $v0, 0xA8
    ctx->pc = 0x299d90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x299d94: 0x247400ac  addiu       $s4, $v1, 0xAC
    ctx->pc = 0x299d94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 172));
    // 0x299d98: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x299d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x299d9c: 0x0  nop
    ctx->pc = 0x299d9cu;
    // NOP
label_299da0:
    // 0x299da0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299da4: 0x2445c0c8  addiu       $a1, $v0, -0x3F38
    ctx->pc = 0x299da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951112));
    // 0x299da8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x299DA8u;
    SET_GPR_U32(ctx, 31, 0x299DB0u);
    ctx->pc = 0x299DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DA8u;
    // 0x299dac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x299DA8u, 0x299DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DB0u;
label_299db0:
    // 0x299db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299db4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x299db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299db8: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x299DB8u;
    {
        const bool branch_taken_0x299db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x299DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DB8u;
        // 0x299dbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299db8) {
            ctx->pc = 0x299DD8u;
            goto label_299dd8;
        }
    }
    ctx->pc = 0x299DC0u;
    // 0x299dc0: 0x121e0005  beq         $s0, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x299DC0u;
    {
        const bool branch_taken_0x299dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        if (branch_taken_0x299dc0) {
            ctx->pc = 0x299DD8u;
            goto label_299dd8;
        }
    }
    ctx->pc = 0x299DC8u;
    // 0x299dc8: 0x12170003  beq         $s0, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x299DC8u;
    {
        const bool branch_taken_0x299dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        if (branch_taken_0x299dc8) {
            ctx->pc = 0x299DD8u;
            goto label_299dd8;
        }
    }
    ctx->pc = 0x299DD0u;
    // 0x299dd0: 0x1616000b  bne         $s0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x299DD0u;
    {
        const bool branch_taken_0x299dd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        if (branch_taken_0x299dd0) {
            ctx->pc = 0x299E00u;
            goto label_299e00;
        }
    }
    ctx->pc = 0x299DD8u;
label_299dd8:
    // 0x299dd8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x299DD8u;
    SET_GPR_U32(ctx, 31, 0x299DE0u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x299DD8u, 0x299DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DE0u;
label_299de0:
    // 0x299de0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x299de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x299de4: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x299de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x299de8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x299de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x299dec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x299decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x299df0: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x299df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x299df4: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x299df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x299df8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x299DF8u;
    {
        const bool branch_taken_0x299df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DF8u;
        // 0x299dfc: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299df8) {
            ctx->pc = 0x299E28u;
            goto label_299e28;
        }
    }
    ctx->pc = 0x299E00u;
label_299e00:
    // 0x299e00: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x299E00u;
    SET_GPR_U32(ctx, 31, 0x299E08u);
    ctx->pc = 0x299E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E00u;
    // 0x299e04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x299E00u, 0x299E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E08u;
label_299e08:
    // 0x299e08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x299E08u;
    {
        const bool branch_taken_0x299e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E08u;
        // 0x299e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e08) {
            ctx->pc = 0x299E2Cu;
            goto label_299e2c;
        }
    }
    ctx->pc = 0x299E10u;
    // 0x299e10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x299e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299e14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x299E14u;
    {
        const bool branch_taken_0x299e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299e14) {
            ctx->pc = 0x299E2Cu;
            goto label_299e2c;
        }
    }
    ctx->pc = 0x299E1Cu;
    // 0x299e1c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x299e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x299e20: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x299e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x299e24: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x299e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_299e28:
    // 0x299e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299e2c:
    // 0x299e2c: 0xc0a5b8c  jal         func_296E30
    ctx->pc = 0x299E2Cu;
    SET_GPR_U32(ctx, 31, 0x299E34u);
    ctx->pc = 0x299E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E2Cu;
    // 0x299e30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E30u, 0x299E2Cu, 0x299E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E34u;
label_299e34:
    // 0x299e34: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x299e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x299e38: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x299e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x299e3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299e40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x299e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x299e44: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x299e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x299e48: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x299E48u;
    {
        const bool branch_taken_0x299e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299e48) {
            ctx->pc = 0x299E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299E48u;
            // 0x299e4c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299da0;
        }
    }
    ctx->pc = 0x299E50u;
    // 0x299e50: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299e54: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x299e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x299e58: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x299e58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299e5c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x299e5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299e60: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x299e60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299e64: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x299e64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x299e68: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x299e68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299e6c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x299e6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x299e70: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x299e70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299e74: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x299e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x299e78: 0x3e00008  jr          $ra
    ctx->pc = 0x299E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E78u;
        // 0x299e7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299E80u;
}
