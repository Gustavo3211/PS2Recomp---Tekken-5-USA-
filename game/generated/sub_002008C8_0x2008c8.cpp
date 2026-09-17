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

// Function: sub_002008C8
// Address: 0x2008c8 - 0x2008e8
void sub_002008C8_0x2008c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002008C8_0x2008c8");
#endif

    ctx->pc = 0x2008c8u;

    // 0x2008c8: 0xc4a00678  lwc1        $f0, 0x678($a1)
    ctx->pc = 0x2008c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2008cc: 0xe4800684  swc1        $f0, 0x684($a0)
    ctx->pc = 0x2008ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1668), bits); }
    // 0x2008d0: 0xc4a1067c  lwc1        $f1, 0x67C($a1)
    ctx->pc = 0x2008d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2008d4: 0xe4810688  swc1        $f1, 0x688($a0)
    ctx->pc = 0x2008d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1672), bits); }
    // 0x2008d8: 0xc4a00680  lwc1        $f0, 0x680($a1)
    ctx->pc = 0x2008d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2008dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2008DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2008E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008DCu;
        // 0x2008e0: 0xe480068c  swc1        $f0, 0x68C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1676), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2008DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2008E4u;
    // 0x2008e4: 0x0  nop
    ctx->pc = 0x2008e4u;
    // NOP
    ctx->pc = 0x2008e8u;
}
