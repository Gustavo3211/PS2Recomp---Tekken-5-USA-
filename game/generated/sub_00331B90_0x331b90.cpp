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

// Function: sub_00331B90
// Address: 0x331b90 - 0x331bb0
void sub_00331B90_0x331b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331B90_0x331b90");
#endif

    ctx->pc = 0x331b90u;

    // 0x331b90: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x331b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x331b94: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x331b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x331b98: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x331b98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x331b9c: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x331b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x331ba0: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x331ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x331ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x331BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331BA4u;
        // 0x331ba8: 0xac860014  sw          $a2, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331BACu;
    // 0x331bac: 0x0  nop
    ctx->pc = 0x331bacu;
    // NOP
    ctx->pc = 0x331bb0u;
}
