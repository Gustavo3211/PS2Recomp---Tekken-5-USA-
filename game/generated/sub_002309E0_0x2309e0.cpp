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

// Function: sub_002309E0
// Address: 0x2309e0 - 0x230a00
void sub_002309E0_0x2309e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002309E0_0x2309e0");
#endif

    ctx->pc = 0x2309e0u;

    // 0x2309e0: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2309e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2309e4: 0x2463cf90  addiu       $v1, $v1, -0x3070
    ctx->pc = 0x2309e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954896));
    // 0x2309e8: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2309e8u;
    { uint32_t bits = FAST_READ32(0x15D114u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2309ec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2309ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2309f0: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2309f0u;
    { uint32_t bits = FAST_READ32(0x15D118u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2309f4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2309f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2309f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2309F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2309FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309F8u;
        // 0x2309fc: 0x8c620180  lw          $v0, 0x180($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2309F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230A00u;
}
