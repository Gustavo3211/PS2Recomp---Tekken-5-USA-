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

// Function: sub_0032FCE8
// Address: 0x32fce8 - 0x32fd18
void sub_0032FCE8_0x32fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FCE8_0x32fce8");
#endif

    ctx->pc = 0x32fce8u;

    // 0x32fce8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x32fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x32fcec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x32fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x32fcf0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x32fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x32fcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x32FCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCF4u;
        // 0x32fcf8: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FCFCu;
    // 0x32fcfc: 0x0  nop
    ctx->pc = 0x32fcfcu;
    // NOP
    // 0x32fd00: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x32fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x32fd04: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x32fd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x32fd08: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x32fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x32fd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x32FD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD0Cu;
        // 0x32fd10: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FD14u;
    // 0x32fd14: 0x0  nop
    ctx->pc = 0x32fd14u;
    // NOP
    ctx->pc = 0x32fd18u;
}
