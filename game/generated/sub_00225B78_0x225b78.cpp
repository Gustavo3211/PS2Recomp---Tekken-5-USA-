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

// Function: sub_00225B78
// Address: 0x225b78 - 0x225c00
void sub_00225B78_0x225b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225B78_0x225b78");
#endif

    switch (ctx->pc) {
        case 0x225ba8u: goto label_225ba8;
        case 0x225bc0u: goto label_225bc0;
        case 0x225bd0u: goto label_225bd0;
        default: break;
    }

    ctx->pc = 0x225b78u;

    // 0x225b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225b7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225b80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x225b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x225b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x225b88: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x225b88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225b90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225b94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x225b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x225b98: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x225b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x225b9c: 0x84930040  lh          $s3, 0x40($a0)
    ctx->pc = 0x225b9cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x225ba0: 0x8c91003c  lw          $s1, 0x3C($a0)
    ctx->pc = 0x225ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x225ba4: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x225ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_225ba8:
    // 0x225ba8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x225BA8u;
    {
        const bool branch_taken_0x225ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BA8u;
        // 0x225bac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ba8) {
            ctx->pc = 0x225BDCu;
            goto label_225bdc;
        }
    }
    ctx->pc = 0x225BB0u;
    // 0x225bb0: 0x96300000  lhu         $s0, 0x0($s1)
    ctx->pc = 0x225bb0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x225bb4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x225bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x225bb8: 0xc089622  jal         func_225888
    ctx->pc = 0x225BB8u;
    SET_GPR_U32(ctx, 31, 0x225BC0u);
    ctx->pc = 0x225BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225BB8u;
    // 0x225bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x225BB8u, 0x225BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BC0u;
label_225bc0:
    // 0x225bc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225BC0u;
    {
        const bool branch_taken_0x225bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BC0u;
        // 0x225bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bc0) {
            ctx->pc = 0x225BD8u;
            goto label_225bd8;
        }
    }
    ctx->pc = 0x225BC8u;
    // 0x225bc8: 0xc08b872  jal         func_22E1C8
    ctx->pc = 0x225BC8u;
    SET_GPR_U32(ctx, 31, 0x225BD0u);
    ctx->pc = 0x22E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E1C8u, 0x225BC8u, 0x225BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BD0u;
label_225bd0:
    // 0x225bd0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x225BD0u;
    {
        const bool branch_taken_0x225bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BD0u;
        // 0x225bd4: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bd0) {
            ctx->pc = 0x225BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225ba8;
        }
    }
    ctx->pc = 0x225BD8u;
label_225bd8:
    // 0x225bd8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x225bd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225bdc:
    // 0x225bdc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x225bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225be4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225be8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225bec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x225becu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225bf0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x225bf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225bf4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x225bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x225BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BF8u;
        // 0x225bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225C00u;
}
