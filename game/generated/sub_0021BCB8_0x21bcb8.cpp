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

// Function: sub_0021BCB8
// Address: 0x21bcb8 - 0x21bce8
void sub_0021BCB8_0x21bcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BCB8_0x21bcb8");
#endif

    switch (ctx->pc) {
        case 0x21bcc0u: goto label_21bcc0;
        default: break;
    }

    ctx->pc = 0x21bcb8u;

    // 0x21bcb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21bcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcbc: 0x2785c938  addiu       $a1, $gp, -0x36C8
    ctx->pc = 0x21bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953272));
label_21bcc0:
    // 0x21bcc0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x21bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21bcc4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21bcc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21bccc: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x21bcccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21bcd0: 0x0  nop
    ctx->pc = 0x21bcd0u;
    // NOP
    // 0x21bcd4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21BCD4u;
    {
        const bool branch_taken_0x21bcd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCD4u;
        // 0x21bcd8: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcd4) {
            ctx->pc = 0x21BCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bcc0;
        }
    }
    ctx->pc = 0x21BCDCu;
    // 0x21bcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x21BCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BCE4u;
    // 0x21bce4: 0x0  nop
    ctx->pc = 0x21bce4u;
    // NOP
    ctx->pc = 0x21bce8u;
}
