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

// Function: sub_002F8198
// Address: 0x2f8198 - 0x2f81b0
void sub_002F8198_0x2f8198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8198_0x2f8198");
#endif

    ctx->pc = 0x2f8198u;

    // 0x2f8198: 0x30a20060  andi        $v0, $a1, 0x60
    ctx->pc = 0x2f8198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)96);
    // 0x2f819c: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x2f819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x2f81a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f81a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f81a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F81A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F81A4u;
        // 0x2f81a8: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F81A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F81ACu;
    // 0x2f81ac: 0x0  nop
    ctx->pc = 0x2f81acu;
    // NOP
    ctx->pc = 0x2f81b0u;
}
