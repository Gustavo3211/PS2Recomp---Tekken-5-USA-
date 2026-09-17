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

// Function: sub_001F46A0
// Address: 0x1f46a0 - 0x1f46b8
void sub_001F46A0_0x1f46a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F46A0_0x1f46a0");
#endif

    ctx->pc = 0x1f46a0u;

    // 0x1f46a0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1f46a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1f46a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f46a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f46a8: 0xe48001e4  swc1        $f0, 0x1E4($a0)
    ctx->pc = 0x1f46a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
    // 0x1f46ac: 0xe48001e8  swc1        $f0, 0x1E8($a0)
    ctx->pc = 0x1f46acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
    // 0x1f46b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F46B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46B0u;
        // 0x1f46b4: 0xe7809724  swc1        $f0, -0x68DC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940452), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F46B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F46B8u;
}
