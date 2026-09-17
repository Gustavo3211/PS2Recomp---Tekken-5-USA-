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

// Function: sub_002CBA38
// Address: 0x2cba38 - 0x2cba78
void sub_002CBA38_0x2cba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBA38_0x2cba38");
#endif

    ctx->pc = 0x2cba38u;

    // 0x2cba38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cba38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cba3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cba40: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2cba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2cba44: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBA44u;
    {
        const bool branch_taken_0x2cba44 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA44u;
        // 0x2cba48: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba44) {
            ctx->pc = 0x2CBA68u;
            goto label_2cba68;
        }
    }
    ctx->pc = 0x2CBA4Cu;
    // 0x2cba4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBA4Cu;
    {
        const bool branch_taken_0x2cba4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA4Cu;
        // 0x2cba50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba4c) {
            ctx->pc = 0x2CBA60u;
            goto label_2cba60;
        }
    }
    ctx->pc = 0x2CBA54u;
    // 0x2cba54: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2cba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cba58: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBA58u;
    {
        const bool branch_taken_0x2cba58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cba58) {
            ctx->pc = 0x2CBA6Cu;
            goto label_2cba6c;
        }
    }
    ctx->pc = 0x2CBA60u;
label_2cba60:
    // 0x2cba60: 0x80b2fa6  j           func_2CBE98
    ctx->pc = 0x2CBA60u;
    ctx->pc = 0x2CBA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA60u;
    // 0x2cba64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE98u, 0x2CBA60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CBA68u;
label_2cba68:
    // 0x2cba68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cba68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cba6c:
    // 0x2cba6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA6Cu;
        // 0x2cba70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBA74u;
    // 0x2cba74: 0x0  nop
    ctx->pc = 0x2cba74u;
    // NOP
    ctx->pc = 0x2cba78u;
}
