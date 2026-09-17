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

// Function: sub_002FBB68
// Address: 0x2fbb68 - 0x2fbba0
void sub_002FBB68_0x2fbb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBB68_0x2fbb68");
#endif

    ctx->pc = 0x2fbb68u;

    // 0x2fbb68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fbb6c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2fbb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2fbb70: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2fbb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2fbb74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fbb74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2fbb78: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2fbb78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2fbb7c: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x2fbb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fbb80: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x2fbb80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fbb84: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x2fbb84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x2fbb88: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2fbb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2fbb8c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fbb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2fbb90: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fbb90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fbb94: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x2fbb94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x2fbb98: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB98u;
        // 0x2fbb9c: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBBA0u;
}
