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

// Function: sub_0022C468
// Address: 0x22c468 - 0x22c480
void sub_0022C468_0x22c468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C468_0x22c468");
#endif

    ctx->pc = 0x22c468u;

    // 0x22c468: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22c468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22c46c: 0x24429290  addiu       $v0, $v0, -0x6D70
    ctx->pc = 0x22c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x22c470: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22c470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x159290u));
    // 0x22c474: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x22c474u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x159298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159298u, _value); } while (0);
    // 0x22c478: 0x3e00008  jr          $ra
    ctx->pc = 0x22C478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C478u;
        // 0x22c47c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C480u;
}
