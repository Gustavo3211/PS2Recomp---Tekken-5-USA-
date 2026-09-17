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

// Function: sub_002745F8
// Address: 0x2745f8 - 0x274610
void sub_002745F8_0x2745f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002745F8_0x2745f8");
#endif

    ctx->pc = 0x2745f8u;

    // 0x2745f8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2745f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2745fc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2745fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x274600: 0x2442bee8  addiu       $v0, $v0, -0x4118
    ctx->pc = 0x274600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950632));
    // 0x274604: 0x3e00008  jr          $ra
    ctx->pc = 0x274604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274604u;
        // 0x274608: 0xac6200b4  sw          $v0, 0xB4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27460Cu;
    // 0x27460c: 0x0  nop
    ctx->pc = 0x27460cu;
    // NOP
    ctx->pc = 0x274610u;
}
