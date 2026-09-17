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

// Function: sub_00322258
// Address: 0x322258 - 0x322288
void sub_00322258_0x322258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322258_0x322258");
#endif

    ctx->pc = 0x322258u;

    // 0x322258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x322258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32225c: 0x24860048  addiu       $a2, $a0, 0x48
    ctx->pc = 0x32225cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x322260: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x322260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x322264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x322264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322268: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x322268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x32226c: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x32226cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x322270: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x322270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x322274: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x322274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x322278: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x322278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32227c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x32227cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x322280: 0x3e00008  jr          $ra
    ctx->pc = 0x322280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322280u;
        // 0x322284: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322288u;
}
