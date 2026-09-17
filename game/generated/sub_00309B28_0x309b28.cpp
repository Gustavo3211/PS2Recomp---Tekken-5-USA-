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

// Function: sub_00309B28
// Address: 0x309b28 - 0x309b70
void sub_00309B28_0x309b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309B28_0x309b28");
#endif

    switch (ctx->pc) {
        case 0x309b30u: goto label_309b30;
        case 0x309b38u: goto label_309b38;
        default: break;
    }

    ctx->pc = 0x309b28u;

    // 0x309b28: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x309b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x309b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309b30:
    // 0x309b30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x309b30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b34: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x309b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_309b38:
    // 0x309b38: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x309b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x309b3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309b40: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x309b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x309b44: 0x0  nop
    ctx->pc = 0x309b44u;
    // NOP
    // 0x309b48: 0x0  nop
    ctx->pc = 0x309b48u;
    // NOP
    // 0x309b4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x309B4Cu;
    {
        const bool branch_taken_0x309b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B4Cu;
        // 0x309b50: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b4c) {
            ctx->pc = 0x309B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309b38;
        }
    }
    ctx->pc = 0x309B54u;
    // 0x309b54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x309b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x309b58: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x309b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x309b5c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x309B5Cu;
    {
        const bool branch_taken_0x309b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B5Cu;
        // 0x309b60: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b5c) {
            ctx->pc = 0x309B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309b30;
        }
    }
    ctx->pc = 0x309B64u;
    // 0x309b64: 0x3e00008  jr          $ra
    ctx->pc = 0x309B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309B6Cu;
    // 0x309b6c: 0x0  nop
    ctx->pc = 0x309b6cu;
    // NOP
    ctx->pc = 0x309b70u;
}
