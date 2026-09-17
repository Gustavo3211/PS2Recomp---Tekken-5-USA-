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

// Function: sub_0031A6C8
// Address: 0x31a6c8 - 0x31a710
void sub_0031A6C8_0x31a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A6C8_0x31a6c8");
#endif

    ctx->pc = 0x31a6c8u;

    // 0x31a6c8: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x31a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x31a6cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x31a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x31a6d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x31a6d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x31a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x31a6d8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x31a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x31a6dc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x31a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x31a6e0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x31a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x31a6e4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x31a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x31a6e8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x31a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x31a6ec: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x31a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x31a6f0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x31a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x31a6f4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x31a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x31a6f8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x31a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x31a6fc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x31a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x31a700: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x31a700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x31a704: 0x3e00008  jr          $ra
    ctx->pc = 0x31A704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A704u;
        // 0x31a708: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A70Cu;
    // 0x31a70c: 0x0  nop
    ctx->pc = 0x31a70cu;
    // NOP
    ctx->pc = 0x31a710u;
}
