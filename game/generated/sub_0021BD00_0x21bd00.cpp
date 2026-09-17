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

// Function: sub_0021BD00
// Address: 0x21bd00 - 0x21bd18
void sub_0021BD00_0x21bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BD00_0x21bd00");
#endif

    ctx->pc = 0x21bd00u;

    // 0x21bd00: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x21bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21bd04: 0x9c0821  addu        $at, $a0, $gp
    ctx->pc = 0x21bd04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x21bd08: 0xa420c938  sh          $zero, -0x36C8($at)
    ctx->pc = 0x21bd08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953272), (uint16_t)GPR_U32(ctx, 0));
    // 0x21bd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BD14u;
    // 0x21bd14: 0x0  nop
    ctx->pc = 0x21bd14u;
    // NOP
    ctx->pc = 0x21bd18u;
}
