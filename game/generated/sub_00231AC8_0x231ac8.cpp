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

// Function: sub_00231AC8
// Address: 0x231ac8 - 0x231ad8
void sub_00231AC8_0x231ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231AC8_0x231ac8");
#endif

    ctx->pc = 0x231ac8u;

    // 0x231ac8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x231ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x231acc: 0x3e00008  jr          $ra
    ctx->pc = 0x231ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231ACCu;
        // 0x231ad0: 0xc440d370  lwc1        $f0, -0x2C90($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231AD4u;
    // 0x231ad4: 0x0  nop
    ctx->pc = 0x231ad4u;
    // NOP
    ctx->pc = 0x231ad8u;
}
