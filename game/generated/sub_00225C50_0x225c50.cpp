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

// Function: sub_00225C50
// Address: 0x225c50 - 0x225cc0
void sub_00225C50_0x225c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225C50_0x225c50");
#endif

    switch (ctx->pc) {
        case 0x225c80u: goto label_225c80;
        case 0x225c94u: goto label_225c94;
        default: break;
    }

    ctx->pc = 0x225c50u;

    // 0x225c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225c54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225c58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x225c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x225c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x225c60: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x225c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225c68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225c6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x225c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x225c70: 0x84920040  lh          $s2, 0x40($a0)
    ctx->pc = 0x225c70u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x225c74: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x225c74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x225c78: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x225c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x225c7c: 0x0  nop
    ctx->pc = 0x225c7cu;
    // NOP
label_225c80:
    // 0x225c80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225C80u;
    {
        const bool branch_taken_0x225c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C80u;
        // 0x225c84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c80) {
            ctx->pc = 0x225CA0u;
            goto label_225ca0;
        }
    }
    ctx->pc = 0x225C88u;
    // 0x225c88: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x225c88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225c8c: 0xc089622  jal         func_225888
    ctx->pc = 0x225C8Cu;
    SET_GPR_U32(ctx, 31, 0x225C94u);
    ctx->pc = 0x225C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C8Cu;
    // 0x225c90: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x225C8Cu, 0x225C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C94u;
label_225c94:
    // 0x225c94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x225C94u;
    {
        const bool branch_taken_0x225c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C94u;
        // 0x225c98: 0x232102a  slt         $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c94) {
            ctx->pc = 0x225C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225c80;
        }
    }
    ctx->pc = 0x225C9Cu;
    // 0x225c9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x225c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225ca0:
    // 0x225ca0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x225ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225ca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225cac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225cb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x225cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225cb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x225CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CB8u;
        // 0x225cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225CC0u;
}
