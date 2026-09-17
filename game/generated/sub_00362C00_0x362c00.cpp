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

// Function: sub_00362C00
// Address: 0x362c00 - 0x362c10
void sub_00362C00_0x362c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362C00_0x362c00");
#endif

    ctx->pc = 0x362c00u;

    // 0x362c00: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x362c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x362c04: 0x3e00008  jr          $ra
    ctx->pc = 0x362C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362C04u;
        // 0x362c08: 0xc4405d0c  lwc1        $f0, 0x5D0C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362C0Cu;
    // 0x362c0c: 0x0  nop
    ctx->pc = 0x362c0cu;
    // NOP
    ctx->pc = 0x362c10u;
}
