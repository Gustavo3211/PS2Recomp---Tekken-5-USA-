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

// Function: sub_00121C28
// Address: 0x121c28 - 0x121c60
void sub_00121C28_0x121c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121C28_0x121c28");
#endif

    ctx->pc = 0x121c28u;

    // 0x121c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x121c2c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x121c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x121c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x121c34: 0x2444faf0  addiu       $a0, $v0, -0x510
    ctx->pc = 0x121c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966000));
    // 0x121c38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x121c38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1EFAF0u));
    // 0x121c3c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x121C3Cu;
    {
        const bool branch_taken_0x121c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x121C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C3Cu;
        // 0x121c40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c3c) {
            ctx->pc = 0x121C58u;
            goto label_121c58;
        }
    }
    ctx->pc = 0x121C44u;
    // 0x121c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121c48: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x121c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x121c4c: 0x80486da  j           func_121B68
    ctx->pc = 0x121C4Cu;
    ctx->pc = 0x121C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C4Cu;
    // 0x121c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121B68u, 0x121C4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x121C54u;
    // 0x121c54: 0x0  nop
    ctx->pc = 0x121c54u;
    // NOP
label_121c58:
    // 0x121c58: 0x3e00008  jr          $ra
    ctx->pc = 0x121C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C58u;
        // 0x121c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121C60u;
}
