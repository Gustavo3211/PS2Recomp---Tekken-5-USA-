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

// Function: sub_0032A558
// Address: 0x32a558 - 0x32a578
void sub_0032A558_0x32a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A558_0x32a558");
#endif

    ctx->pc = 0x32a558u;

    // 0x32a558: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x32a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32a55c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32a560: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x32a560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x32a564: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x32a564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x32a568: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32a568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32a56c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x32a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x32a570: 0x3e00008  jr          $ra
    ctx->pc = 0x32A570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A570u;
        // 0x32a574: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A578u;
}
