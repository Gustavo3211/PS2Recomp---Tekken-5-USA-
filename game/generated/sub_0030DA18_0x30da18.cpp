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

// Function: sub_0030DA18
// Address: 0x30da18 - 0x30da60
void sub_0030DA18_0x30da18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DA18_0x30da18");
#endif

    switch (ctx->pc) {
        case 0x30da20u: goto label_30da20;
        case 0x30da28u: goto label_30da28;
        default: break;
    }

    ctx->pc = 0x30da18u;

    // 0x30da18: 0x24840330  addiu       $a0, $a0, 0x330
    ctx->pc = 0x30da18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
    // 0x30da1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30da1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30da20:
    // 0x30da20: 0x24820930  addiu       $v0, $a0, 0x930
    ctx->pc = 0x30da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2352));
    // 0x30da24: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x30da24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_30da28:
    // 0x30da28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30da28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30da2c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x30da2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x30da30: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30da30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30da34: 0x0  nop
    ctx->pc = 0x30da34u;
    // NOP
    // 0x30da38: 0x0  nop
    ctx->pc = 0x30da38u;
    // NOP
    // 0x30da3c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30DA3Cu;
    {
        const bool branch_taken_0x30da3c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA3Cu;
        // 0x30da40: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da3c) {
            ctx->pc = 0x30DA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30da28;
        }
    }
    ctx->pc = 0x30DA44u;
    // 0x30da44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30da44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30da48: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x30da48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30da4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30DA4Cu;
    {
        const bool branch_taken_0x30da4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA4Cu;
        // 0x30da50: 0x248422c0  addiu       $a0, $a0, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da4c) {
            ctx->pc = 0x30DA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30da20;
        }
    }
    ctx->pc = 0x30DA54u;
    // 0x30da54: 0x3e00008  jr          $ra
    ctx->pc = 0x30DA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DA5Cu;
    // 0x30da5c: 0x0  nop
    ctx->pc = 0x30da5cu;
    // NOP
    ctx->pc = 0x30da60u;
}
