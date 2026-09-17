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

// Function: sub_0030C8C8
// Address: 0x30c8c8 - 0x30c8f8
void sub_0030C8C8_0x30c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C8C8_0x30c8c8");
#endif

    switch (ctx->pc) {
        case 0x30c8d0u: goto label_30c8d0;
        default: break;
    }

    ctx->pc = 0x30c8c8u;

    // 0x30c8c8: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x30c8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x30c8cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30c8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c8d0:
    // 0x30c8d0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x30c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30c8d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30c8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30c8d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x30c8d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30c8dc: 0x28c40100  slti        $a0, $a2, 0x100
    ctx->pc = 0x30c8dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30c8e0: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x30c8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c8e4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30C8E4u;
    {
        const bool branch_taken_0x30c8e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8E4u;
        // 0x30c8e8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8e4) {
            ctx->pc = 0x30C8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c8d0;
        }
    }
    ctx->pc = 0x30C8ECu;
    // 0x30c8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x30C8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C8F4u;
    // 0x30c8f4: 0x0  nop
    ctx->pc = 0x30c8f4u;
    // NOP
    ctx->pc = 0x30c8f8u;
}
