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

// Function: sub_0036A790
// Address: 0x36a790 - 0x36a7c8
void sub_0036A790_0x36a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A790_0x36a790");
#endif

    ctx->pc = 0x36a790u;

    // 0x36a790: 0x3e00008  jr          $ra
    ctx->pc = 0x36A790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A790u;
        // 0x36a794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A798u;
    // 0x36a798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36a798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36a79c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36a79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36a7a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a7a4: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x36a7a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x36a7a8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x36a7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x36a7ac: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x36a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x36a7b0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x36a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x36a7b4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36a7b8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x36a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x36a7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x36A7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A7BCu;
        // 0x36a7c0: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A7C4u;
    // 0x36a7c4: 0x0  nop
    ctx->pc = 0x36a7c4u;
    // NOP
    ctx->pc = 0x36a7c8u;
}
