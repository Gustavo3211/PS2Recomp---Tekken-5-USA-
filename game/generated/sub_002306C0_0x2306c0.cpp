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

// Function: sub_002306C0
// Address: 0x2306c0 - 0x2306e8
void sub_002306C0_0x2306c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002306C0_0x2306c0");
#endif

    ctx->pc = 0x2306c0u;

    // 0x2306c0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2306c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2306c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2306c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2306c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2306c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2306cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2306ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2306d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2306d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2306d4: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2306d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2306d8: 0x2421d010  addiu       $at, $at, -0x2FF0
    ctx->pc = 0x2306d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955024));
    // 0x2306dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2306DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2306E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306DCu;
        // 0x2306e0: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2306DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2306E4u;
    // 0x2306e4: 0x0  nop
    ctx->pc = 0x2306e4u;
    // NOP
    ctx->pc = 0x2306e8u;
}
