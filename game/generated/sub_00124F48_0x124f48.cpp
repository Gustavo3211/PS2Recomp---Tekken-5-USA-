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

// Function: sub_00124F48
// Address: 0x124f48 - 0x124f68
void sub_00124F48_0x124f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124F48_0x124f48");
#endif

    ctx->pc = 0x124f48u;

    // 0x124f48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124F48u;
    {
        const bool branch_taken_0x124f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F48u;
        // 0x124f4c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f48) {
            ctx->pc = 0x124F5Cu;
            goto label_124f5c;
        }
    }
    ctx->pc = 0x124F50u;
    // 0x124f50: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x124f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x124f54: 0x24424bf8  addiu       $v0, $v0, 0x4BF8
    ctx->pc = 0x124f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19448));
    // 0x124f58: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x124f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_124f5c:
    // 0x124f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x124F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124F64u;
    // 0x124f64: 0x0  nop
    ctx->pc = 0x124f64u;
    // NOP
    ctx->pc = 0x124f68u;
}
