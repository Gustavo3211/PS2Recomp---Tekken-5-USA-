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

// Function: sub_0021866C
// Address: 0x21866c - 0x218690
void sub_0021866C_0x21866c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021866C_0x21866c");
#endif

    switch (ctx->pc) {
        case 0x218670u: goto label_218670;
        default: break;
    }

    ctx->pc = 0x21866cu;

    // 0x21866c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x21866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_218670:
    // 0x218670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x218678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21867c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21867cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218680: 0xa0830069  sb          $v1, 0x69($a0)
    ctx->pc = 0x218680u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 105), (uint8_t)GPR_U32(ctx, 3));
    // 0x218684: 0x3e00008  jr          $ra
    ctx->pc = 0x218684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218684u;
        // 0x218688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21868Cu;
    // 0x21868c: 0x0  nop
    ctx->pc = 0x21868cu;
    // NOP
    ctx->pc = 0x218690u;
}
