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

// Function: sub_0035E060
// Address: 0x35e060 - 0x35e080
void sub_0035E060_0x35e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E060_0x35e060");
#endif

    ctx->pc = 0x35e060u;

    // 0x35e060: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x35e060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x35e064: 0x2783cc00  addiu       $v1, $gp, -0x3400
    ctx->pc = 0x35e064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953984));
    // 0x35e068: 0x24045010  addiu       $a0, $zero, 0x5010
    ctx->pc = 0x35e068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20496));
    // 0x35e06c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35e070: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35e070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35e074: 0x3e00008  jr          $ra
    ctx->pc = 0x35E074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E074u;
        // 0x35e078: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E07Cu;
    // 0x35e07c: 0x0  nop
    ctx->pc = 0x35e07cu;
    // NOP
    ctx->pc = 0x35e080u;
}
