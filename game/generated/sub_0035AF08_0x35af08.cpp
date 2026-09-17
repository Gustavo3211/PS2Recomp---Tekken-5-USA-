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

// Function: sub_0035AF08
// Address: 0x35af08 - 0x35af38
void sub_0035AF08_0x35af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AF08_0x35af08");
#endif

    ctx->pc = 0x35af08u;

    // 0x35af08: 0x8f82c7bc  lw          $v0, -0x3844($gp)
    ctx->pc = 0x35af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952892)));
    // 0x35af0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35af0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35af10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35AF10u;
    {
        const bool branch_taken_0x35af10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF10u;
        // 0x35af14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35af10) {
            ctx->pc = 0x35AF28u;
            goto label_35af28;
        }
    }
    ctx->pc = 0x35AF18u;
    // 0x35af18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35af18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35af1c: 0x80d2fcf  j           func_34BF3C
    ctx->pc = 0x35AF1Cu;
    ctx->pc = 0x35AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF1Cu;
    // 0x35af20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    sub_0034BF3C_0x34bf3c(rdram, ctx, runtime); return;
    ctx->pc = 0x35AF24u;
    // 0x35af24: 0x0  nop
    ctx->pc = 0x35af24u;
    // NOP
label_35af28:
    // 0x35af28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35af28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35af2c: 0x3e00008  jr          $ra
    ctx->pc = 0x35AF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF2Cu;
        // 0x35af30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AF34u;
    // 0x35af34: 0x0  nop
    ctx->pc = 0x35af34u;
    // NOP
    ctx->pc = 0x35af38u;
}
