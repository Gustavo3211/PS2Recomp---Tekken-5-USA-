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

// Function: sub_001F9640
// Address: 0x1f9640 - 0x1f9650
void sub_001F9640_0x1f9640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9640_0x1f9640");
#endif

    ctx->pc = 0x1f9640u;

    // 0x1f9640: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f9644: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9644u;
        // 0x1f9648: 0xe44cb410  swc1        $f12, -0x4BF0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947856), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F964Cu;
    // 0x1f964c: 0x0  nop
    ctx->pc = 0x1f964cu;
    // NOP
    ctx->pc = 0x1f9650u;
}
