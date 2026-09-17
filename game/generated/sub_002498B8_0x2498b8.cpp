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

// Function: sub_002498B8
// Address: 0x2498b8 - 0x2498d8
void sub_002498B8_0x2498b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002498B8_0x2498b8");
#endif

    ctx->pc = 0x2498b8u;

    // 0x2498b8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2498b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2498bc: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2498bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2498c0: 0x242172b0  addiu       $at, $at, 0x72B0
    ctx->pc = 0x2498c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29360));
    // 0x2498c4: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2498c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2498c8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2498c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2498cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2498CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2498D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498CCu;
        // 0x2498d0: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2498CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2498D4u;
    // 0x2498d4: 0x0  nop
    ctx->pc = 0x2498d4u;
    // NOP
    ctx->pc = 0x2498d8u;
}
