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

// Function: sub_0031AAD0
// Address: 0x31aad0 - 0x31aae0
void sub_0031AAD0_0x31aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AAD0_0x31aad0");
#endif

    ctx->pc = 0x31aad0u;

    // 0x31aad0: 0xe48d0034  swc1        $f13, 0x34($a0)
    ctx->pc = 0x31aad0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x31aad4: 0x3e00008  jr          $ra
    ctx->pc = 0x31AAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAD4u;
        // 0x31aad8: 0xe48c0030  swc1        $f12, 0x30($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AADCu;
    // 0x31aadc: 0x0  nop
    ctx->pc = 0x31aadcu;
    // NOP
    ctx->pc = 0x31aae0u;
}
