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

// Function: sub_002D5640
// Address: 0x2d5640 - 0x2d5678
void sub_002D5640_0x2d5640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5640_0x2d5640");
#endif

    ctx->pc = 0x2d5640u;

    // 0x2d5640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d5640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d5644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5648: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d5648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d564c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2d564cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2d5650: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x2d5650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2d5654: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d5654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d5658: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2d5658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2d565c: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2d565cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2d5660: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2d5660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2d5664: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2d5664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2d5668: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2d5668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2d566c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2d566cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2d5670: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5670u;
        // 0x2d5674: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5678u;
}
