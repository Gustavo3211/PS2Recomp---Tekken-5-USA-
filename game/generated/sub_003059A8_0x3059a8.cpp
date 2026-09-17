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

// Function: sub_003059A8
// Address: 0x3059a8 - 0x3059f8
void sub_003059A8_0x3059a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003059A8_0x3059a8");
#endif

    ctx->pc = 0x3059a8u;

    // 0x3059a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3059a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3059ac: 0x2486004c  addiu       $a2, $a0, 0x4C
    ctx->pc = 0x3059acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x3059b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3059b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3059b4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3059b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3059b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3059b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3059bc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3059bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3059c0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x3059c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x3059c4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3059c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3059c8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3059c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x3059cc: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x3059ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x3059d0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x3059d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x3059d4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3059d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3059d8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3059d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x3059dc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3059dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3059e0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x3059e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x3059e4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3059e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3059e8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x3059e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x3059ec: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x3059ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x3059f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3059F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3059F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059F0u;
        // 0x3059f4: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3059F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3059F8u;
}
