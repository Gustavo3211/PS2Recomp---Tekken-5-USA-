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

// Function: sub_0021BCE8
// Address: 0x21bce8 - 0x21bd00
void sub_0021BCE8_0x21bce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BCE8_0x21bce8");
#endif

    ctx->pc = 0x21bce8u;

    // 0x21bce8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x21bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21bcec: 0x240203de  addiu       $v0, $zero, 0x3DE
    ctx->pc = 0x21bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 990));
    // 0x21bcf0: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x21bcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x21bcf4: 0xa422c938  sh          $v0, -0x36C8($at)
    ctx->pc = 0x21bcf4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953272), (uint16_t)GPR_U32(ctx, 2));
    // 0x21bcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x21BCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BD00u;
}
