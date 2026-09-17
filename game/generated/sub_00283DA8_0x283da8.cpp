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

// Function: sub_00283DA8
// Address: 0x283da8 - 0x283e40
void sub_00283DA8_0x283da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283DA8_0x283da8");
#endif

    switch (ctx->pc) {
        case 0x283dc0u: goto label_283dc0;
        case 0x283e30u: goto label_283e30;
        default: break;
    }

    ctx->pc = 0x283da8u;

label_283da8:
    // 0x283da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x283da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283dac: 0x278aca98  addiu       $t2, $gp, -0x3568
    ctx->pc = 0x283dacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953624));
    // 0x283db0: 0x2789caa0  addiu       $t1, $gp, -0x3560
    ctx->pc = 0x283db0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953632));
    // 0x283db4: 0x2788caa8  addiu       $t0, $gp, -0x3558
    ctx->pc = 0x283db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953640));
    // 0x283db8: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x283db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x283dbc: 0x0  nop
    ctx->pc = 0x283dbcu;
    // NOP
label_283dc0:
    // 0x283dc0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x283dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x283dc4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x283dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x283dc8: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x283dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x283dcc: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x283dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x283dd0: 0x28c40002  slti        $a0, $a2, 0x2
    ctx->pc = 0x283dd0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x283dd4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x283dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x283dd8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x283dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x283ddc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x283ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x283de0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x283DE0u;
    {
        const bool branch_taken_0x283de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x283DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DE0u;
        // 0x283de4: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283de0) {
            ctx->pc = 0x283DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283dc0;
        }
    }
    ctx->pc = 0x283DE8u;
    // 0x283de8: 0x3e00008  jr          $ra
    ctx->pc = 0x283DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283DF0u;
    // 0x283df0: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x283df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x283df4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x283df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x283df8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x283df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283dfc: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x283dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x283e00: 0xac23caa8  sw          $v1, -0x3558($at)
    ctx->pc = 0x283e00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953640), GPR_U32(ctx, 3));
    // 0x283e04: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x283e04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x283e08: 0xac20ca98  sw          $zero, -0x3568($at)
    ctx->pc = 0x283e08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953624), GPR_U32(ctx, 0));
    // 0x283e0c: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x283e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x283e10: 0xac20caa0  sw          $zero, -0x3560($at)
    ctx->pc = 0x283e10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953632), GPR_U32(ctx, 0));
    // 0x283e14: 0x3e00008  jr          $ra
    ctx->pc = 0x283E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283E1Cu;
    // 0x283e1c: 0x0  nop
    ctx->pc = 0x283e1cu;
    // NOP
    // 0x283e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283e28: 0xc0a0f6a  jal         func_283DA8
    ctx->pc = 0x283E28u;
    SET_GPR_U32(ctx, 31, 0x283E30u);
    ctx->pc = 0x283DA8u;
    goto label_283da8;
    ctx->pc = 0x283E30u;
label_283e30:
    // 0x283e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283e34: 0x3e00008  jr          $ra
    ctx->pc = 0x283E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E34u;
        // 0x283e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283E3Cu;
    // 0x283e3c: 0x0  nop
    ctx->pc = 0x283e3cu;
    // NOP
    ctx->pc = 0x283e40u;
}
