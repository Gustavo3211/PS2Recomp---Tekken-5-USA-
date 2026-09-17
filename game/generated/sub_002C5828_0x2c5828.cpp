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

// Function: sub_002C5828
// Address: 0x2c5828 - 0x2c5870
void sub_002C5828_0x2c5828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5828_0x2c5828");
#endif

    ctx->pc = 0x2c5828u;

    // 0x2c5828: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2c5828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c582c: 0x8c830898  lw          $v1, 0x898($a0)
    ctx->pc = 0x2c582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x2c5830: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2c5830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2c5834: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2c5834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c5838: 0xe4810750  swc1        $f1, 0x750($a0)
    ctx->pc = 0x2c5838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1872), bits); }
    // 0x2c583c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c583cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5840: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2c5840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c5844: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2c5844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2c5848: 0xe4800758  swc1        $f0, 0x758($a0)
    ctx->pc = 0x2c5848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1880), bits); }
    // 0x2c584c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5850: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2c5850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c5854: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c5854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5858: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x2c5858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x2c585c: 0x8c820898  lw          $v0, 0x898($a0)
    ctx->pc = 0x2c585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x2c5860: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c5860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5864: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5864u;
        // 0x2c5868: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C586Cu;
    // 0x2c586c: 0x0  nop
    ctx->pc = 0x2c586cu;
    // NOP
    ctx->pc = 0x2c5870u;
}
