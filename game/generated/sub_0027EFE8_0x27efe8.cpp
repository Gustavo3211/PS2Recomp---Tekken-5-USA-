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

// Function: sub_0027EFE8
// Address: 0x27efe8 - 0x27f018
void sub_0027EFE8_0x27efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EFE8_0x27efe8");
#endif

    ctx->pc = 0x27efe8u;

    // 0x27efe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27efe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27efec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27efecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27eff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27eff4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x27eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x27eff8: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x27eff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x27effc: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x27effcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x27f000: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x27f000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x27f004: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x27f004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x27f008: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x27f008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x27f00c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F00Cu;
        // 0x27f010: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F014u;
    // 0x27f014: 0x0  nop
    ctx->pc = 0x27f014u;
    // NOP
    ctx->pc = 0x27f018u;
}
