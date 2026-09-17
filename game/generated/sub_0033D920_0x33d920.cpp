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

// Function: sub_0033D920
// Address: 0x33d920 - 0x33d940
void sub_0033D920_0x33d920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D920_0x33d920");
#endif

    ctx->pc = 0x33d920u;

    // 0x33d920: 0x24c600ff  addiu       $a2, $a2, 0xFF
    ctx->pc = 0x33d920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 255));
    // 0x33d924: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x33d924u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x33d928: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x33d928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33d92c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x33d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33d930: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33d930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33d934: 0x3e00008  jr          $ra
    ctx->pc = 0x33D934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D934u;
        // 0x33d938: 0xa4820010  sh          $v0, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D93Cu;
    // 0x33d93c: 0x0  nop
    ctx->pc = 0x33d93cu;
    // NOP
    ctx->pc = 0x33d940u;
}
