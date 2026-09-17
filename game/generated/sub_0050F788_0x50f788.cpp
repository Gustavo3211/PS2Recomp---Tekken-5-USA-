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

// Function: sub_0050F788
// Address: 0x50f788 - 0x50f7a0
void sub_0050F788_0x50f788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F788_0x50f788");
#endif

    switch (ctx->pc) {
        case 0x50f798u: goto label_50f798;
        default: break;
    }

    ctx->pc = 0x50f788u;

    // 0x50f788: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x50f788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x50f78c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50f790: 0x2442a450  addiu       $v0, $v0, -0x5BB0
    ctx->pc = 0x50f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943824));
    // 0x50f794: 0xac62c690  sw          $v0, -0x3970($v1)
    ctx->pc = 0x50f794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC690u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC690u, _value); } while (0);
label_50f798:
    // 0x50f798: 0x3e00008  jr          $ra
    ctx->pc = 0x50F798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F7A0u;
}
