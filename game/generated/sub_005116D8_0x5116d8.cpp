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

// Function: sub_005116D8
// Address: 0x5116d8 - 0x5116f8
void sub_005116D8_0x5116d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005116D8_0x5116d8");
#endif

    ctx->pc = 0x5116d8u;

    // 0x5116d8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x5116d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x5116dc: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x5116dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x5116e0: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x5116e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x5116e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x5116e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x5116e8: 0x8c423140  lw          $v0, 0x3140($v0)
    ctx->pc = 0x5116e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12608)));
    // 0x5116ec: 0x3e00008  jr          $ra
    ctx->pc = 0x5116ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5116ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5116F4u;
    // 0x5116f4: 0x0  nop
    ctx->pc = 0x5116f4u;
    // NOP
    ctx->pc = 0x5116f8u;
}
