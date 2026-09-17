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

// Function: sub_002812B0
// Address: 0x2812b0 - 0x2812d8
void sub_002812B0_0x2812b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002812B0_0x2812b0");
#endif

    ctx->pc = 0x2812b0u;

    // 0x2812b0: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x2812b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2812b4: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x2812b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2812b8: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x2812b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2812bc: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x2812bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2812c0: 0xac8207d4  sw          $v0, 0x7D4($a0)
    ctx->pc = 0x2812c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2004), GPR_U32(ctx, 2));
    // 0x2812c4: 0xe48007b8  swc1        $f0, 0x7B8($a0)
    ctx->pc = 0x2812c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1976), bits); }
    // 0x2812c8: 0xe48107b0  swc1        $f1, 0x7B0($a0)
    ctx->pc = 0x2812c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1968), bits); }
    // 0x2812cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2812CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2812D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812CCu;
        // 0x2812d0: 0xe48207b4  swc1        $f2, 0x7B4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2812CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2812D4u;
    // 0x2812d4: 0x0  nop
    ctx->pc = 0x2812d4u;
    // NOP
    ctx->pc = 0x2812d8u;
}
