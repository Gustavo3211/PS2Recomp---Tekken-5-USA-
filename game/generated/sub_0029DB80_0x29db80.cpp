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

// Function: sub_0029DB80
// Address: 0x29db80 - 0x29dc80
void sub_0029DB80_0x29db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DB80_0x29db80");
#endif

    switch (ctx->pc) {
        case 0x29dbc8u: goto label_29dbc8;
        case 0x29dbd4u: goto label_29dbd4;
        case 0x29dbf0u: goto label_29dbf0;
        case 0x29dc10u: goto label_29dc10;
        case 0x29dc3cu: goto label_29dc3c;
        default: break;
    }

    ctx->pc = 0x29db80u;

    // 0x29db80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29db84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29db88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29db88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db8c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29db90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29db90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29db94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29db98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29db98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db9c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29db9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29dba0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29dba4: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x29dba4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29dba8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x29dba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x29dbac: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x29dbacu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x29dbb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29dbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29dbb4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x29dbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x29dbb8: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x29dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x29dbbc: 0x8e140158  lw          $s4, 0x158($s0)
    ctx->pc = 0x29dbbcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x29dbc0: 0x24530028  addiu       $s3, $v0, 0x28
    ctx->pc = 0x29dbc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29dbc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29dbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29dbc8:
    // 0x29dbc8: 0x26c5c018  addiu       $a1, $s6, -0x3FE8
    ctx->pc = 0x29dbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950936));
    // 0x29dbcc: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29DBCCu;
    SET_GPR_U32(ctx, 31, 0x29DBD4u);
    ctx->pc = 0x29DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBCCu;
    // 0x29dbd0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29DBCCu, 0x29DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBD4u;
label_29dbd4:
    // 0x29dbd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29dbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbd8: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x29dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x29dbdc: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x29dbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x29dbe0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29DBE0u;
    {
        const bool branch_taken_0x29dbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBE0u;
        // 0x29dbe4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbe0) {
            ctx->pc = 0x29DC08u;
            goto label_29dc08;
        }
    }
    ctx->pc = 0x29DBE8u;
    // 0x29dbe8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29DBE8u;
    SET_GPR_U32(ctx, 31, 0x29DBF0u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29DBE8u, 0x29DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBF0u;
label_29dbf0:
    // 0x29dbf0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29dbf4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x29dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x29dbf8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29dbf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29dbfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29DBFCu;
    {
        const bool branch_taken_0x29dbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBFCu;
        // 0x29dc00: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbfc) {
            ctx->pc = 0x29DC30u;
            goto label_29dc30;
        }
    }
    ctx->pc = 0x29DC04u;
    // 0x29dc04: 0x0  nop
    ctx->pc = 0x29dc04u;
    // NOP
label_29dc08:
    // 0x29dc08: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29DC08u;
    SET_GPR_U32(ctx, 31, 0x29DC10u);
    ctx->pc = 0x29DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC08u;
    // 0x29dc0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29DC08u, 0x29DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC10u;
label_29dc10:
    // 0x29dc10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29DC10u;
    {
        const bool branch_taken_0x29dc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC10u;
        // 0x29dc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc10) {
            ctx->pc = 0x29DC34u;
            goto label_29dc34;
        }
    }
    ctx->pc = 0x29DC18u;
    // 0x29dc18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29dc1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DC1Cu;
    {
        const bool branch_taken_0x29dc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dc1c) {
            ctx->pc = 0x29DC34u;
            goto label_29dc34;
        }
    }
    ctx->pc = 0x29DC24u;
    // 0x29dc24: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29dc28: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x29dc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x29dc2c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_29dc30:
    // 0x29dc30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29dc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29dc34:
    // 0x29dc34: 0xc0a5b8c  jal         func_296E30
    ctx->pc = 0x29DC34u;
    SET_GPR_U32(ctx, 31, 0x29DC3Cu);
    ctx->pc = 0x29DC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC34u;
    // 0x29dc38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E30u, 0x29DC34u, 0x29DC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC3Cu;
label_29dc3c:
    // 0x29dc3c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29dc40: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x29dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x29dc44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29dc44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29dc48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29dc4c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x29dc4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29dc50: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x29DC50u;
    {
        const bool branch_taken_0x29dc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC50u;
        // 0x29dc54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc50) {
            ctx->pc = 0x29DBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dbc8;
        }
    }
    ctx->pc = 0x29DC58u;
    // 0x29dc58: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29dc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dc5c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29dc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29dc60: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29dc60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dc64: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29dc64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dc68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29dc68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29dc6c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29dc6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29dc70: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x29dc70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dc74: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x29dc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29dc78: 0x3e00008  jr          $ra
    ctx->pc = 0x29DC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC78u;
        // 0x29dc7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DC80u;
}
