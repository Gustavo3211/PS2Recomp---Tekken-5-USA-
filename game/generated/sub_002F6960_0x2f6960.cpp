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

// Function: sub_002F6960
// Address: 0x2f6960 - 0x2f6978
void sub_002F6960_0x2f6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6960_0x2f6960");
#endif

    ctx->pc = 0x2f6960u;

    // 0x2f6960: 0x30a20090  andi        $v0, $a1, 0x90
    ctx->pc = 0x2f6960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)144);
    // 0x2f6964: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x2f6964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x2f6968: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f6968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f696c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F696Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F696Cu;
        // 0x2f6970: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F696Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6974u;
    // 0x2f6974: 0x0  nop
    ctx->pc = 0x2f6974u;
    // NOP
    ctx->pc = 0x2f6978u;
}
