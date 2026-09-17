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

// Function: sub_0031BEA8
// Address: 0x31bea8 - 0x31bec0
void sub_0031BEA8_0x31bea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BEA8_0x31bea8");
#endif

    ctx->pc = 0x31bea8u;

    // 0x31bea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31bea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31beac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31beacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31beb0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x31beb4: 0x3e00008  jr          $ra
    ctx->pc = 0x31BEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BEB4u;
        // 0x31beb8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BEBCu;
    // 0x31bebc: 0x0  nop
    ctx->pc = 0x31bebcu;
    // NOP
    ctx->pc = 0x31bec0u;
}
