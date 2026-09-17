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

// Function: sub_003296F8
// Address: 0x3296f8 - 0x329758
void sub_003296F8_0x3296f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003296F8_0x3296f8");
#endif

    ctx->pc = 0x3296f8u;

    // 0x3296f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3296f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3296fc: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3296fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x329700: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x329700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x329704: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x329704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x329708: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x329708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x32970c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x32970cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x329710: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x329710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x329714: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x329714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x329718: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x329718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x32971c: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x32971cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x329720: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x329720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x329724: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x329724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x329728: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x329728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x32972c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x32972cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x329730: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x329730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x329734: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x329734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x329738: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x329738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x32973c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x32973cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x329740: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x329740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x329744: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x329744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x329748: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x329748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x32974c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x32974cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x329750: 0x3e00008  jr          $ra
    ctx->pc = 0x329750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329750u;
        // 0x329754: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329758u;
}
