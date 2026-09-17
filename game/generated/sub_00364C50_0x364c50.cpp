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

// Function: sub_00364C50
// Address: 0x364c50 - 0x364c80
void sub_00364C50_0x364c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364C50_0x364c50");
#endif

    ctx->pc = 0x364c50u;

    // 0x364c50: 0xc78096a4  lwc1        $f0, -0x695C($gp)
    ctx->pc = 0x364c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364c54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x364c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364c58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x364c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364c5c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x364c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x364c60: 0xa08309dc  sb          $v1, 0x9DC($a0)
    ctx->pc = 0x364c60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2524), (uint8_t)GPR_U32(ctx, 3));
    // 0x364c64: 0xe48009d8  swc1        $f0, 0x9D8($a0)
    ctx->pc = 0x364c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2520), bits); }
    // 0x364c68: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x364c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x364c6c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x364c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x364c70: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x364c70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x364c74: 0xa0800887  sb          $zero, 0x887($a0)
    ctx->pc = 0x364c74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2183), (uint8_t)GPR_U32(ctx, 0));
    // 0x364c78: 0x3e00008  jr          $ra
    ctx->pc = 0x364C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C78u;
        // 0x364c7c: 0xa0800a08  sb          $zero, 0xA08($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2568), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364C80u;
}
