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

// Function: sub_002820A0
// Address: 0x2820a0 - 0x2820c0
void sub_002820A0_0x2820a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002820A0_0x2820a0");
#endif

    ctx->pc = 0x2820a0u;

    // 0x2820a0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2820a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2820a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2820a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2820a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2820a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2820ac: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2820acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2820b0: 0x24213a80  addiu       $at, $at, 0x3A80
    ctx->pc = 0x2820b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 14976));
    // 0x2820b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2820B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2820B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820B4u;
        // 0x2820b8: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2820B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2820BCu;
    // 0x2820bc: 0x0  nop
    ctx->pc = 0x2820bcu;
    // NOP
    ctx->pc = 0x2820c0u;
}
