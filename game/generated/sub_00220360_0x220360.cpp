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

// Function: sub_00220360
// Address: 0x220360 - 0x220388
void sub_00220360_0x220360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220360_0x220360");
#endif

    ctx->pc = 0x220360u;

    // 0x220360: 0x2c83001e  sltiu       $v1, $a0, 0x1E
    ctx->pc = 0x220360u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x220364: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x220364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x220368: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220368u;
    {
        const bool branch_taken_0x220368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220368u;
        // 0x22036c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220368) {
            ctx->pc = 0x220380u;
            goto label_220380;
        }
    }
    ctx->pc = 0x220370u;
    // 0x220370: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x220370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x220374: 0x24424520  addiu       $v0, $v0, 0x4520
    ctx->pc = 0x220374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17696));
    // 0x220378: 0x24424910  addiu       $v0, $v0, 0x4910
    ctx->pc = 0x220378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18704));
    // 0x22037c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_220380:
    // 0x220380: 0x3e00008  jr          $ra
    ctx->pc = 0x220380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220388u;
}
