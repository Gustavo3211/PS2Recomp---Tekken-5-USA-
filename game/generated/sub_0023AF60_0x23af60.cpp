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

// Function: sub_0023AF60
// Address: 0x23af60 - 0x23af80
void sub_0023AF60_0x23af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AF60_0x23af60");
#endif

    ctx->pc = 0x23af60u;

    // 0x23af60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x23af64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23af64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af68: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x23af68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x23af6c: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x23af6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x23af70: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x23af70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x23af74: 0x3e00008  jr          $ra
    ctx->pc = 0x23AF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF74u;
        // 0x23af78: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AF7Cu;
    // 0x23af7c: 0x0  nop
    ctx->pc = 0x23af7cu;
    // NOP
    ctx->pc = 0x23af80u;
}
