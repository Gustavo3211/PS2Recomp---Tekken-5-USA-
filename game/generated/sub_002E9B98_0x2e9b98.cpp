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

// Function: sub_002E9B98
// Address: 0x2e9b98 - 0x2e9bc8
void sub_002E9B98_0x2e9b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9B98_0x2e9b98");
#endif

    ctx->pc = 0x2e9b98u;

    // 0x2e9b98: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2e9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2e9b9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e9b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9ba0: 0x8c45f5d8  lw          $a1, -0xA28($v0)
    ctx->pc = 0x2e9ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EF5D8u));
    // 0x2e9ba4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2e9ba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ba8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e9ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9bac: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2e9bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e9bb0: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x2e9bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x2e9bb4: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x2e9bb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x2e9bb8: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2e9bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2e9bbc: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x2e9bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x2e9bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BC0u;
        // 0x2e9bc4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9BC8u;
}
