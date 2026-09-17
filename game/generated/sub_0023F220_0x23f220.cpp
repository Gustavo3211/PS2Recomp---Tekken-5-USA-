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

// Function: sub_0023F220
// Address: 0x23f220 - 0x23f248
void sub_0023F220_0x23f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F220_0x23f220");
#endif

    ctx->pc = 0x23f220u;

    // 0x23f220: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f224: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x23f224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x23f228: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x23f228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x23f22c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x23f230: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x23f230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x23f234: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x23f234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x23f238: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x23f238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x23f23c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F23Cu;
        // 0x23f240: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F244u;
    // 0x23f244: 0x0  nop
    ctx->pc = 0x23f244u;
    // NOP
    ctx->pc = 0x23f248u;
}
