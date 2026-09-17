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

// Function: sub_0050004C
// Address: 0x50004c - 0x50006c
void sub_0050004C_0x50004c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050004C_0x50004c");
#endif

    ctx->pc = 0x50004cu;

    // 0x50004c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x50004cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x500050: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x500050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x500054: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x500054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x500058: 0xac44a66c  sw          $a0, -0x5994($v0)
    ctx->pc = 0x500058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EA66Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA66Cu, _value); } while (0);
    // 0x50005c: 0x3e00008  jr          $ra
    ctx->pc = 0x50005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50005Cu;
        // 0x500060: 0xac65a670  sw          $a1, -0x5990($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944368), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50005Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500064u;
    // 0x500064: 0x0  nop
    ctx->pc = 0x500064u;
    // NOP
    // 0x500068: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x500068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    ctx->pc = 0x50006cu;
}
