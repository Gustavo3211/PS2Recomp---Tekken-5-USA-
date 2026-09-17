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

// Function: sub_004F9D28
// Address: 0x4f9d28 - 0x4f9d60
void sub_004F9D28_0x4f9d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9D28_0x4f9d28");
#endif

    switch (ctx->pc) {
        case 0x4f9d38u: goto label_4f9d38;
        default: break;
    }

    ctx->pc = 0x4f9d28u;

    // 0x4f9d28: 0x3c020083  lui         $v0, 0x83
    ctx->pc = 0x4f9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)131 << 16));
    // 0x4f9d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4f9d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f9d30: 0x24451400  addiu       $a1, $v0, 0x1400
    ctx->pc = 0x4f9d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5120));
    // 0x4f9d34: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4f9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f9d38:
    // 0x4f9d38: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4f9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4f9d3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4f9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f9d40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f9d44: 0xa46432c0  sh          $a0, 0x32C0($v1)
    ctx->pc = 0x4f9d44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12992), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f9d48: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x4f9d48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f9d4c: 0x28834000  slti        $v1, $a0, 0x4000
    ctx->pc = 0x4f9d4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x4f9d50: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4F9D50u;
    {
        const bool branch_taken_0x4f9d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f9d50) {
            ctx->pc = 0x4F9D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F9D50u;
            // 0x4f9d54: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9d38;
        }
    }
    ctx->pc = 0x4F9D58u;
    // 0x4f9d58: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9D60u;
}
