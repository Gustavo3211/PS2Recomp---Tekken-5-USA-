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

// Function: sub_00331420
// Address: 0x331420 - 0x331460
void sub_00331420_0x331420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331420_0x331420");
#endif

    switch (ctx->pc) {
        case 0x331430u: goto label_331430;
        case 0x331450u: goto label_331450;
        default: break;
    }

    ctx->pc = 0x331420u;

    // 0x331420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331428: 0xc0cdc78  jal         func_3371E0
    ctx->pc = 0x331428u;
    SET_GPR_U32(ctx, 31, 0x331430u);
    ctx->pc = 0x33142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331428u;
    // 0x33142c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371E0u, 0x331428u, 0x331430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331430u;
label_331430:
    // 0x331430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331434: 0x3e00008  jr          $ra
    ctx->pc = 0x331434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331434u;
        // 0x331438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33143Cu;
    // 0x33143c: 0x0  nop
    ctx->pc = 0x33143cu;
    // NOP
    // 0x331440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331448: 0xc0cdcd0  jal         func_337340
    ctx->pc = 0x331448u;
    SET_GPR_U32(ctx, 31, 0x331450u);
    ctx->pc = 0x337340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337340u, 0x331448u, 0x331450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331450u;
label_331450:
    // 0x331450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331454: 0x3e00008  jr          $ra
    ctx->pc = 0x331454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331454u;
        // 0x331458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33145Cu;
    // 0x33145c: 0x0  nop
    ctx->pc = 0x33145cu;
    // NOP
    ctx->pc = 0x331460u;
}
