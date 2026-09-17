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

// Function: sub_002476F8
// Address: 0x2476f8 - 0x2477a0
void sub_002476F8_0x2476f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002476F8_0x2476f8");
#endif

    switch (ctx->pc) {
        case 0x247728u: goto label_247728;
        case 0x247750u: goto label_247750;
        case 0x247760u: goto label_247760;
        default: break;
    }

    ctx->pc = 0x2476f8u;

    // 0x2476f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2476f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2476fc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2476fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x247700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x247704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x247708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24770c: 0x24506ec0  addiu       $s0, $v0, 0x6EC0
    ctx->pc = 0x24770cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28352));
    // 0x247710: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247714: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x247714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247718: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x247718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24771c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24771cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247720: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247724: 0x0  nop
    ctx->pc = 0x247724u;
    // NOP
label_247728:
    // 0x247728: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x247728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24772c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24772Cu;
    {
        const bool branch_taken_0x24772c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24772c) {
            ctx->pc = 0x247748u;
            goto label_247748;
        }
    }
    ctx->pc = 0x247734u;
    // 0x247734: 0x10530008  beq         $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x247734u;
    {
        const bool branch_taken_0x247734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x247734) {
            ctx->pc = 0x247758u;
            goto label_247758;
        }
    }
    ctx->pc = 0x24773Cu;
    // 0x24773c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24773Cu;
    {
        const bool branch_taken_0x24773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24773Cu;
        // 0x247740: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24773c) {
            ctx->pc = 0x247764u;
            goto label_247764;
        }
    }
    ctx->pc = 0x247744u;
    // 0x247744: 0x0  nop
    ctx->pc = 0x247744u;
    // NOP
label_247748:
    // 0x247748: 0xc091c9a  jal         func_247268
    ctx->pc = 0x247748u;
    SET_GPR_U32(ctx, 31, 0x247750u);
    ctx->pc = 0x24774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247748u;
    // 0x24774c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247268u, 0x247748u, 0x247750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247750u;
label_247750:
    // 0x247750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x247750u;
    {
        const bool branch_taken_0x247750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247750u;
        // 0x247754: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247750) {
            ctx->pc = 0x247764u;
            goto label_247764;
        }
    }
    ctx->pc = 0x247758u;
label_247758:
    // 0x247758: 0xc091cd6  jal         func_247358
    ctx->pc = 0x247758u;
    SET_GPR_U32(ctx, 31, 0x247760u);
    ctx->pc = 0x24775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247758u;
    // 0x24775c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247358u, 0x247758u, 0x247760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247760u;
label_247760:
    // 0x247760: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x247760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_247764:
    // 0x247764: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x247764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247768: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x247768u;
    {
        const bool branch_taken_0x247768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247768u;
        // 0x24776c: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247768) {
            ctx->pc = 0x247728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247728;
        }
    }
    ctx->pc = 0x247770u;
    // 0x247770: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x247770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x247774: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x247774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247778: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x247778u;
    {
        const bool branch_taken_0x247778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247778u;
        // 0x24777c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247778) {
            ctx->pc = 0x247728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247728;
        }
    }
    ctx->pc = 0x247780u;
    // 0x247780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247788: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24778c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24778cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x247790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247794: 0x3e00008  jr          $ra
    ctx->pc = 0x247794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247794u;
        // 0x247798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24779Cu;
    // 0x24779c: 0x0  nop
    ctx->pc = 0x24779cu;
    // NOP
    ctx->pc = 0x2477a0u;
}
