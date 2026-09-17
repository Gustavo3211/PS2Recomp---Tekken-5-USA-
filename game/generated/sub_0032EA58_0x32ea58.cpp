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

// Function: sub_0032EA58
// Address: 0x32ea58 - 0x32ea88
void sub_0032EA58_0x32ea58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EA58_0x32ea58");
#endif

    ctx->pc = 0x32ea58u;

    // 0x32ea58: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x32ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ea5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32ea5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea60: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x32ea60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x32ea64: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x32ea64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32ea68: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x32ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ea6c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x32ea6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x32ea70: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x32ea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x32ea74: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x32ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ea78: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x32ea78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x32ea7c: 0x3e00008  jr          $ra
    ctx->pc = 0x32EA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA7Cu;
        // 0x32ea80: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EA84u;
    // 0x32ea84: 0x0  nop
    ctx->pc = 0x32ea84u;
    // NOP
    ctx->pc = 0x32ea88u;
}
