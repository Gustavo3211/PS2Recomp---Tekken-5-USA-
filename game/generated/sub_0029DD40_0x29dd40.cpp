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

// Function: sub_0029DD40
// Address: 0x29dd40 - 0x29dd88
void sub_0029DD40_0x29dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DD40_0x29dd40");
#endif

    ctx->pc = 0x29dd40u;

    // 0x29dd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29dd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dd48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29dd4c: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x29dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29dd50: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29DD50u;
    {
        const bool branch_taken_0x29dd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD50u;
        // 0x29dd54: 0x28650002  slti        $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd50) {
            ctx->pc = 0x29DD70u;
            goto label_29dd70;
        }
    }
    ctx->pc = 0x29DD58u;
    // 0x29dd58: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29DD58u;
    {
        const bool branch_taken_0x29dd58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD58u;
        // 0x29dd5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd58) {
            ctx->pc = 0x29DD80u;
            goto label_29dd80;
        }
    }
    ctx->pc = 0x29DD60u;
    // 0x29dd60: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29DD60u;
    {
        const bool branch_taken_0x29dd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dd60) {
            ctx->pc = 0x29DD80u;
            goto label_29dd80;
        }
    }
    ctx->pc = 0x29DD68u;
    // 0x29dd68: 0x80a7762  j           func_29DD88
    ctx->pc = 0x29DD68u;
    ctx->pc = 0x29DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD68u;
    // 0x29dd6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DD88u;
    sub_0029DD88_0x29dd88(rdram, ctx, runtime); return;
    ctx->pc = 0x29DD70u;
label_29dd70:
    // 0x29dd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29dd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dd74: 0x80a781c  j           func_29E070
    ctx->pc = 0x29DD74u;
    ctx->pc = 0x29DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD74u;
    // 0x29dd78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E070u;
    sub_0029E070_0x29e070(rdram, ctx, runtime); return;
    ctx->pc = 0x29DD7Cu;
    // 0x29dd7c: 0x0  nop
    ctx->pc = 0x29dd7cu;
    // NOP
label_29dd80:
    // 0x29dd80: 0x3e00008  jr          $ra
    ctx->pc = 0x29DD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD80u;
        // 0x29dd84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DD88u;
}
