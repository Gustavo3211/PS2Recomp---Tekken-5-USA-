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

// Function: sub_00339A20
// Address: 0x339a20 - 0x339a50
void sub_00339A20_0x339a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339A20_0x339a20");
#endif

    switch (ctx->pc) {
        case 0x339a28u: goto label_339a28;
        default: break;
    }

    ctx->pc = 0x339a20u;

    // 0x339a20: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x339a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x339a24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x339a24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339a28:
    // 0x339a28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x339a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x339a2c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x339a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x339a30: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x339a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x339a34: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x339a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x339a38: 0x0  nop
    ctx->pc = 0x339a38u;
    // NOP
    // 0x339a3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x339A3Cu;
    {
        const bool branch_taken_0x339a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A3Cu;
        // 0x339a40: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339a3c) {
            ctx->pc = 0x339A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339a28;
        }
    }
    ctx->pc = 0x339A44u;
    // 0x339a44: 0x3e00008  jr          $ra
    ctx->pc = 0x339A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339A4Cu;
    // 0x339a4c: 0x0  nop
    ctx->pc = 0x339a4cu;
    // NOP
    ctx->pc = 0x339a50u;
}
