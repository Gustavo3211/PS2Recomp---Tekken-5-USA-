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

// Function: sub_00297A48
// Address: 0x297a48 - 0x297a90
void sub_00297A48_0x297a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297A48_0x297a48");
#endif

    ctx->pc = 0x297a48u;

    // 0x297a48: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x297a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x297a4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297a54: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x297a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x297a58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297a5c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x297a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x297a60: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x297a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x297a64: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x297a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x297a68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x297a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x297a6c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x297a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x297a70: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x297a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x297a74: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x297a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x297a78: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x297a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x297a7c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x297a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x297a80: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x297a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x297a84: 0x3e00008  jr          $ra
    ctx->pc = 0x297A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A84u;
        // 0x297a88: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297A8Cu;
    // 0x297a8c: 0x0  nop
    ctx->pc = 0x297a8cu;
    // NOP
    ctx->pc = 0x297a90u;
}
