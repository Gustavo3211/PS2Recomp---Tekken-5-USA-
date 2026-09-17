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

// Function: sub_002D5B58
// Address: 0x2d5b58 - 0x2d5b80
void sub_002D5B58_0x2d5b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5B58_0x2d5b58");
#endif

    ctx->pc = 0x2d5b58u;

    // 0x2d5b58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d5b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5b5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d5b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5b60: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x2d5b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x2d5b64: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x2d5b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x2d5b68: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x2d5b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x2d5b6c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x2d5b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x2d5b70: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x2d5b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x2d5b74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B74u;
        // 0x2d5b78: 0xac80006c  sw          $zero, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5B7Cu;
    // 0x2d5b7c: 0x0  nop
    ctx->pc = 0x2d5b7cu;
    // NOP
    ctx->pc = 0x2d5b80u;
}
